/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/top */

EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooStypesYtT,"goo/types","t*");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalStopYLkeyboard_interruptG,"eval/top","<keyboard-interrupt>");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalStopYtop,"eval/top","top");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSmathYB,"goo/math","&");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
DEF(YevalStopYrun,"eval/top","run");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalStopYload_file,"eval/top","load-file");
DEF(YevalStopYload,"eval/top","load");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Yfab_class,"goo/boot","fab-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_12);
DEFLIT(lit_122);
DEFLIT(lit_142);
DEFLIT(lit_59);
DEFLIT(lit_23);
DEFLIT(lit_98);
DEFLIT(lit_17);
DEFLIT(lit_121);
DEFLIT(lit_82);
DEFLIT(lit_42);
DEFLIT(lit_116);
DEFLIT(lit_136);
DEFLIT(lit_89);
DEFLIT(lit_45);
DEFLIT(lit_32);
DEFLIT(lit_81);
DEFLIT(lit_53);
DEFLIT(lit_111);
DEFLIT(lit_69);
DEFLIT(lit_64);
DEFLIT(lit_73);
DEFLIT(lit_84);
DEFLIT(lit_139);
DEFLIT(lit_76);
DEFLIT(lit_14);
DEFLIT(lit_138);
DEFLIT(lit_6);
DEFLIT(lit_90);
DEFLIT(lit_114);
DEFLIT(lit_99);
DEFLIT(lit_141);
DEFLIT(lit_133);
DEFLIT(lit_70);
DEFLIT(lit_33);
DEFLIT(lit_13);
DEFLIT(lit_28);
DEFLIT(lit_97);
DEFLIT(lit_124);
DEFLIT(lit_66);
DEFLIT(lit_68);
DEFLIT(lit_15);
DEFLIT(lit_94);
DEFLIT(lit_58);
DEFLIT(lit_75);
DEFLIT(lit_36);
DEFLIT(lit_115);
DEFLIT(lit_20);
DEFLIT(lit_25);
DEFLIT(lit_130);
DEFLIT(lit_31);
DEFLIT(lit_117);
DEFLIT(lit_50);
DEFLIT(lit_74);
DEFLIT(lit_5);
DEFLIT(lit_107);
DEFLIT(lit_8);
DEFLIT(lit_104);
DEFLIT(lit_67);
DEFLIT(lit_137);
DEFLIT(lit_35);
DEFLIT(lit_4);
DEFLIT(lit_102);
DEFLIT(lit_145);
DEFLIT(lit_132);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_43);
DEFLIT(lit_85);
DEFLIT(lit_19);
DEFLIT(lit_129);
DEFLIT(lit_140);
DEFLIT(lit_62);
DEFLIT(lit_71);
DEFLIT(lit_29);
DEFLIT(lit_54);
DEFLIT(lit_49);
DEFLIT(lit_24);
DEFLIT(lit_56);
DEFLIT(lit_72);
DEFLIT(lit_48);
DEFLIT(lit_113);
DEFLIT(lit_7);
DEFLIT(lit_143);
DEFLIT(lit_128);
DEFLIT(lit_91);
DEFLIT(lit_37);
DEFLIT(lit_52);
DEFLIT(lit_112);
DEFLIT(lit_108);
DEFLIT(lit_40);
DEFLIT(lit_105);
DEFLIT(lit_100);
DEFLIT(lit_1);
DEFLIT(lit_65);
DEFLIT(lit_131);
DEFLIT(lit_63);
DEFLIT(lit_96);
DEFLIT(lit_34);
DEFLIT(lit_93);
DEFLIT(lit_26);
DEFLIT(lit_22);
DEFLIT(lit_46);
DEFLIT(lit_95);
DEFLIT(lit_126);
DEFLIT(lit_27);
DEFLIT(lit_144);
DEFLIT(lit_135);
DEFLIT(lit_21);
DEFLIT(lit_119);
DEFLIT(lit_79);
DEFLIT(lit_83);
DEFLIT(lit_106);
DEFLIT(lit_39);
DEFLIT(lit_125);
DEFLIT(lit_92);
DEFLIT(lit_47);
DEFLIT(lit_55);
DEFLIT(lit_110);
DEFLIT(lit_16);
DEFLIT(lit_103);
DEFLIT(lit_60);
DEFLIT(lit_78);
DEFLIT(lit_109);
DEFLIT(lit_86);
DEFLIT(lit_9);
DEFLIT(lit_10);
DEFLIT(lit_120);
DEFLIT(lit_80);
DEFLIT(lit_87);
DEFLIT(lit_88);
DEFLIT(lit_123);
DEFLIT(lit_41);
DEFLIT(lit_127);
DEFLIT(lit_11);
DEFLIT(lit_38);
DEFLIT(lit_118);
DEFLIT(lit_30);
DEFLIT(lit_101);
DEFLIT(lit_134);
DEFLIT(lit_57);
DEFLIT(lit_61);
DEFLIT(lit_0);
DEFLIT(lit_77);
DEFLIT(lit_2);
DEFLIT(lit_51);
DEFLIT(lit_44);

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
LOCFOR(fun_x_1465_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1469_30);
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
LOCFOR(fun_x_1508_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1505_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1502_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1499_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1496_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1493_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1490_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1487_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1484_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1481_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1478_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1475_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1472_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_loop_81);
LOCFOR(fun_82);
LOCFOR(fun_PPtopPPtop_in_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_86);
LOCFOR(fun_loop_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_top_90);
LOCFOR(fun_91);
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
  P astF2011;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF2011 = T1;
  T2 = CALL2(1,VARREF(YevalStopYrun),astF2011,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF2013;
  P oF2012;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF2012 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF2012);
  eF2013 = T3;
  T2 = eF2013;
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
  P xF2014;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF2014 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF2014);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF2014,forms_);
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
  P loopF2015;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF2015 = T2;
  FUNINIT(loopF2015, 2,FREEREF(0),loopF2015);
  T3 = CALL1(0,loopF2015,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF2016;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2016 = T1;
  if (tmpF2016 != YPfalse) {
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
  P portF2017;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF2017 = YPfalse;
  portF2017 = BOXFAB(portF2017);
  T3 = FUNFAB(fun_18,2,portF2017,filename_);
  T4 = FUNFAB(fun_19,1,portF2017);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF2019;
  P xF2018;
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
    xF2018 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF2018,ct_env_,YPfalse);
    oF2019 = T6;
    T7 = CALL2(1,VARREF(YevalStopYrun),oF2019,ct_env_);
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
  P realfileF2020;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF2020 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF2020);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_38),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF2020,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF2024;
  P arg_strF2023;
  P tmpF2022;
  P formF2021;
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
  formF2021 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF2021,VARREF(YLlstG));
  tmpF2022 = T6;
  if (tmpF2022 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF2021);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_44));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2023 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_45),arg_strF2023,LITREF(lit_46));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2024 = T13;
    T17 = CALL1(1,VARREF(YgooStypesY2nd),formF2021);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_47),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2024);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF2021;
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

FUNCODEDEF(fun_x_1465_27) {
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
  P x_1464F2037;
  P x_1464F2036;
  P x_1464F2035;
  P x_1464F2034;
  P x_1464F2033;
  P x_1464F2032;
  P x_1464F2031;
  P bodyF2030;
  P argsF2029;
  P fF2028;
  P numF2027;
  P x_1464F2026;
  P x_1465F2025;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1465_27,1);
  x_1465F2025 = T1;
  FUNINIT(x_1465F2025, 1,return_);
  x_1464F2026 = FREEREF(0);
  numF2027 = YPfalse;
  numF2027 = BOXFAB(numF2027);
  fF2028 = YPfalse;
  fF2028 = BOXFAB(fF2028);
  argsF2029 = YPfalse;
  argsF2029 = BOXFAB(argsF2029);
  bodyF2030 = YPfalse;
  bodyF2030 = BOXFAB(bodyF2030);
  T11 = CALL2(1,VARREF(YisaQ),x_1464F2026,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1464F2026,LITREF(lit_58),x_1465F2025);
    x_1464F2031 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1464F2031,x_1465F2025);
    x_1464F2032 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1464F2032,x_1465F2025);
    BOXVAL(numF2027) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1464F2032);
    x_1464F2033 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1464F2033,x_1465F2025);
    BOXVAL(fF2028) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1464F2033);
    x_1464F2034 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1464F2034,x_1465F2025);
    BOXVAL(argsF2029) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1464F2034);
    x_1464F2035 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1464F2035,x_1465F2025);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1464F2031);
    x_1464F2036 = T26;
    BOXVAL(bodyF2030) = x_1464F2036;
    x_1464F2037 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1464F2037,x_1465F2025);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1465F2025,LITREF(lit_59),x_1464F2026);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T37 = BOXVAL(numF2027);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T48 = BOXVAL(fF2028);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T54 = BOXVAL(argsF2029);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2030);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T64 = BOXVAL(numF2027);
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

FUNCODEDEF(fun_x_1469_30) {
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
  P x_1468F2050;
  P x_1468F2049;
  P x_1468F2048;
  P x_1468F2047;
  P x_1468F2046;
  P x_1468F2045;
  P x_1468F2044;
  P bodyF2043;
  P argsF2042;
  P fF2041;
  P numF2040;
  P x_1468F2039;
  P x_1469F2038;
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
  T1 = FUNSHELL(0,fun_x_1469_30,1);
  x_1469F2038 = T1;
  FUNINIT(x_1469F2038, 1,return_);
  x_1468F2039 = FREEREF(0);
  numF2040 = YPfalse;
  numF2040 = BOXFAB(numF2040);
  fF2041 = YPfalse;
  fF2041 = BOXFAB(fF2041);
  argsF2042 = YPfalse;
  argsF2042 = BOXFAB(argsF2042);
  bodyF2043 = YPfalse;
  bodyF2043 = BOXFAB(bodyF2043);
  T11 = CALL2(1,VARREF(YisaQ),x_1468F2039,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1468F2039,LITREF(lit_66),x_1469F2038);
    x_1468F2044 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1468F2044,x_1469F2038);
    x_1468F2045 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1468F2045,x_1469F2038);
    BOXVAL(numF2040) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1468F2045);
    x_1468F2046 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1468F2046,x_1469F2038);
    BOXVAL(fF2041) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1468F2046);
    x_1468F2047 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1468F2047,x_1469F2038);
    BOXVAL(argsF2042) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1468F2047);
    x_1468F2048 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1468F2048,x_1469F2038);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1468F2044);
    x_1468F2049 = T26;
    BOXVAL(bodyF2043) = x_1468F2049;
    x_1468F2050 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1468F2050,x_1469F2038);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1469F2038,LITREF(lit_59),x_1468F2039);
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
  T50 = BOXVAL(fF2041);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(argsF2042);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T51,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T64 = BOXVAL(fF2041);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T73 = BOXVAL(fF2041);
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
  T79 = BOXVAL(numF2040);
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
  T101 = BOXVAL(bodyF2043);
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
  P numF2053;
  P UnameF2052;
  P argsF2051;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2051 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2052 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2053 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2052,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_87),numF2053,f_,argsF2051);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2052,LITREF(lit_82));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2053;
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
  P UnumF2056;
  P Utop_numF2055;
  P Useen_topF2054;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2054 = YPfalse;
  Useen_topF2054 = BOXFAB(Useen_topF2054);
  Utop_numF2055 = YPint((P)0);
  Utop_numF2055 = BOXFAB(Utop_numF2055);
  UnumF2056 = YPint((P)0);
  UnumF2056 = BOXFAB(UnumF2056);
  T7 = FUNFAB(fun_33,4,UnumF2056,Utop_numF2055,Useen_topF2054,break_);
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
  P numF2059;
  P UnameF2058;
  P argsF2057;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2057 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2058 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2059 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2058,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2059);
    if (T15 != YPfalse) {
      T16 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_90),numF2059,f_,argsF2057);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2058,LITREF(lit_82));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2059;
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
  P UnumF2062;
  P Utop_numF2061;
  P Useen_topF2060;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2060 = YPfalse;
  Useen_topF2060 = BOXFAB(Useen_topF2060);
  Utop_numF2061 = YPint((P)0);
  Utop_numF2061 = BOXFAB(Utop_numF2061);
  UnumF2062 = YPint((P)0);
  UnumF2062 = BOXFAB(UnumF2062);
  T7 = FUNFAB(fun_36,5,UnumF2062,Utop_numF2061,Useen_topF2060,break_,FREEREF(0));
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
  P numF2065;
  P UnameF2064;
  P argsF2063;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2063 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2064 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2065 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2064,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2065);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2063,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2064,LITREF(lit_82));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2065;
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
  P UnumF2068;
  P Utop_numF2067;
  P Useen_topF2066;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2066 = YPfalse;
  Useen_topF2066 = BOXFAB(Useen_topF2066);
  Utop_numF2067 = YPint((P)0);
  Utop_numF2067 = BOXFAB(Utop_numF2067);
  UnumF2068 = YPint((P)0);
  UnumF2068 = BOXFAB(UnumF2068);
  T7 = FUNFAB(fun_39,7,UnumF2068,Utop_numF2067,Useen_topF2066,break_,FREEREF(0),FREEREF(1),FREEREF(2));
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
  P numF2071;
  P UnameF2070;
  P argsF2069;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2069 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF2070 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2071 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2070,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_94),numF2071,f_);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2070,LITREF(lit_82));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2071;
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
  P UnumF2074;
  P Utop_numF2073;
  P Useen_topF2072;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2072 = YPfalse;
  Useen_topF2072 = BOXFAB(Useen_topF2072);
  Utop_numF2073 = YPint((P)0);
  Utop_numF2073 = BOXFAB(Utop_numF2073);
  UnumF2074 = YPint((P)0);
  UnumF2074 = BOXFAB(UnumF2074);
  T7 = FUNFAB(fun_43,4,UnumF2074,Utop_numF2073,Useen_topF2072,break_);
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
  P tmpF2075;
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
  tmpF2075 = T4;
  if (tmpF2075 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,VARREF(Yerror),LITREF(lit_100));
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

FUNCODEDEF(fun_x_1508_52) {
  P msg_,args_;
  P resF2076;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF2076 = T2;
  T5 = BOXVAL(FREEREF(1));
  T4 = CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_127),resF2076);
  T1 = T4;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1507F2083;
  P x_1507F2082;
  P x_1507F2081;
  P nameF2080;
  P nF2079;
  P x_1507F2078;
  P x_1508F2077;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1508_52,4);
  x_1508F2077 = T1;
  FUNINIT(x_1508F2077, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1507F2078 = FREEREF(3);
  nF2079 = YPfalse;
  nF2079 = BOXFAB(nF2079);
  nameF2080 = YPfalse;
  nameF2080 = BOXFAB(nameF2080);
  T7 = CALL2(1,VARREF(YisaQ),x_1507F2078,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1507F2078,LITREF(lit_128),x_1508F2077);
    x_1507F2081 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1507F2081,x_1508F2077);
    BOXVAL(nF2079) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1507F2081);
    x_1507F2082 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1507F2082,x_1508F2077);
    BOXVAL(nameF2080) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1507F2082);
    x_1507F2083 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F2083,x_1508F2077);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1508F2077,LITREF(lit_59),x_1507F2078);
  }
  T19 = BOXVAL(FREEREF(1));
  T21 = BOXVAL(nF2079);
  T22 = BOXVAL(nameF2080);
  T20 = CALL2(1,VARREF(YevalStopYframe_var),T21,T22);
  T18 = CALL4(1,VARREF(YevalStopYprint_result_expression),T19,FREEREF(2),LITREF(lit_129),T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1505_54) {
  P msg_,args_;
  P x_1506F2084;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1506F2084 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1506F2084);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1504F2089;
  P x_1504F2088;
  P nF2087;
  P x_1504F2086;
  P x_1505F2085;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1505_54,5);
  x_1505F2085 = T1;
  FUNINIT(x_1505F2085, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1504F2086 = FREEREF(0);
  nF2087 = YPfalse;
  nF2087 = BOXFAB(nF2087);
  T5 = CALL2(1,VARREF(YisaQ),x_1504F2086,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1504F2086,LITREF(lit_130),x_1505F2085);
    x_1504F2088 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1504F2088,x_1505F2085);
    BOXVAL(nF2087) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1504F2088);
    x_1504F2089 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1504F2089,x_1505F2085);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1505F2085,LITREF(lit_59),x_1504F2086);
  }
  T14 = BOXVAL(nF2087);
  T13 = CALL1(1,VARREF(YevalStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1502_56) {
  P msg_,args_;
  P x_1503F2090;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1503F2090 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1503F2090,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1501F2093;
  P x_1501F2092;
  P x_1502F2091;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1502_56,5);
  x_1502F2091 = T1;
  FUNINIT(x_1502F2091, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1501F2092 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1501F2092,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1501F2092,LITREF(lit_131),x_1502F2091);
    x_1501F2093 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F2093,x_1502F2091);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1502F2091,LITREF(lit_59),x_1501F2092);
  }
  T8 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1499_58) {
  P msg_,args_;
  P x_1500F2094;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1500F2094 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1500F2094,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1498F2097;
  P x_1498F2096;
  P x_1499F2095;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1499_58,5);
  x_1499F2095 = T1;
  FUNINIT(x_1499F2095, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1498F2096 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1498F2096,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1498F2096,LITREF(lit_132),x_1499F2095);
    x_1498F2097 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1498F2097,x_1499F2095);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1499F2095,LITREF(lit_59),x_1498F2096);
  }
  T8 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1496_60) {
  P msg_,args_;
  P x_1497F2098;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1497F2098 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1497F2098,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1495F2101;
  P x_1495F2100;
  P x_1496F2099;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1496_60,5);
  x_1496F2099 = T1;
  FUNINIT(x_1496F2099, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1495F2100 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1495F2100,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1495F2100,LITREF(lit_133),x_1496F2099);
    x_1495F2101 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1495F2101,x_1496F2099);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1496F2099,LITREF(lit_59),x_1495F2100);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T9 = VARSET(YevalStopYrun,VARREF(YevalStopYauto_run));
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1493_62) {
  P msg_,args_;
  P x_1494F2102;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1494F2102 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1494F2102,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1492F2105;
  P x_1492F2104;
  P x_1493F2103;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1493_62,5);
  x_1493F2103 = T1;
  FUNINIT(x_1493F2103, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1492F2104 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1492F2104,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1492F2104,LITREF(lit_134),x_1493F2103);
    x_1492F2105 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1492F2105,x_1493F2103);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1493F2103,LITREF(lit_59),x_1492F2104);
  }
  T8 = VARSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1490_64) {
  P msg_,args_;
  P x_1491F2106;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1491F2106 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1491F2106,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1489F2109;
  P x_1489F2108;
  P x_1490F2107;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1490_64,5);
  x_1490F2107 = T1;
  FUNINIT(x_1490F2107, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1489F2108 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1489F2108,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1489F2108,LITREF(lit_135),x_1490F2107);
    x_1489F2109 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1489F2109,x_1490F2107);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1490F2107,LITREF(lit_59),x_1489F2108);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T9 = VARSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPg2c_run));
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1487_66) {
  P msg_,args_;
  P x_1488F2110;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1488F2110 = FREEREF(0);
  T3 = FUNFAB(fun_65,4,x_1488F2110,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P new_envF2116;
  P x_1486F2115;
  P x_1486F2114;
  P mF2113;
  P x_1486F2112;
  P x_1487F2111;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1487_66,5);
  x_1487F2111 = T1;
  FUNINIT(x_1487F2111, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1486F2112 = FREEREF(0);
  mF2113 = YPfalse;
  mF2113 = BOXFAB(mF2113);
  T5 = CALL2(1,VARREF(YisaQ),x_1486F2112,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1486F2112,LITREF(lit_136),x_1487F2111);
    x_1486F2114 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1486F2114,x_1487F2111);
    BOXVAL(mF2113) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1486F2114);
    x_1486F2115 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1486F2115,x_1487F2111);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1487F2111,LITREF(lit_59),x_1486F2112);
  }
  T15 = BOXVAL(mF2113);
  T14 = CALL1(1,VARREF(YevalSastYruntime_environment),T15);
  new_envF2116 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF2116;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1484_68) {
  P msg_,args_;
  P x_1485F2117;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1485F2117 = FREEREF(0);
  T3 = FUNFAB(fun_67,4,x_1485F2117,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1483F2122;
  P x_1483F2121;
  P nF2120;
  P x_1483F2119;
  P x_1484F2118;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1484_68,5);
  x_1484F2118 = T1;
  FUNINIT(x_1484F2118, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1483F2119 = FREEREF(0);
  nF2120 = YPfalse;
  nF2120 = BOXFAB(nF2120);
  T5 = CALL2(1,VARREF(YisaQ),x_1483F2119,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1483F2119,LITREF(lit_137),x_1484F2118);
    x_1483F2121 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F2121,x_1484F2118);
    BOXVAL(nF2120) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1483F2121);
    x_1483F2122 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F2122,x_1484F2118);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1484F2118,LITREF(lit_59),x_1483F2119);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF2120);
  T13 = CALL2(1,VARREF(YevalStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1481_70) {
  P msg_,args_;
  P x_1482F2123;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1482F2123 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1482F2123,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1480F2126;
  P x_1480F2125;
  P x_1481F2124;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1481_70,6);
  x_1481F2124 = T1;
  FUNINIT(x_1481F2124, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1480F2125 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1480F2125,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1480F2125,LITREF(lit_138),x_1481F2124);
    x_1480F2126 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1480F2126,x_1481F2124);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1481F2124,LITREF(lit_59),x_1480F2125);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1478_72) {
  P msg_,args_;
  P x_1479F2127;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1479F2127 = FREEREF(0);
  T3 = FUNFAB(fun_71,5,x_1479F2127,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1477F2130;
  P x_1477F2129;
  P x_1478F2128;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1478_72,6);
  x_1478F2128 = T1;
  FUNINIT(x_1478F2128, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1477F2129 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1477F2129,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1477F2129,LITREF(lit_139),x_1478F2128);
    x_1477F2130 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1477F2130,x_1478F2128);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1478F2128,LITREF(lit_59),x_1477F2129);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1475_74) {
  P msg_,args_;
  P x_1476F2131;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1476F2131 = FREEREF(0);
  T3 = FUNFAB(fun_73,5,x_1476F2131,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1474F2134;
  P x_1474F2133;
  P x_1475F2132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1475_74,6);
  x_1475F2132 = T1;
  FUNINIT(x_1475F2132, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1474F2133 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1474F2133,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1474F2133,LITREF(lit_140),x_1475F2132);
    x_1474F2134 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1474F2134,x_1475F2132);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1475F2132,LITREF(lit_59),x_1474F2133);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1472_76) {
  P msg_,args_;
  P x_1473F2135;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1473F2135 = FREEREF(0);
  T3 = FUNFAB(fun_75,6,x_1473F2135,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_1471F2138;
  P x_1471F2137;
  P x_1472F2136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1472_76,7);
  x_1472F2136 = T1;
  FUNINIT(x_1472F2136, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1471F2137 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1471F2137,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1471F2137,LITREF(lit_141),x_1472F2136);
    x_1471F2138 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1471F2138,x_1472F2136);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1472F2136,LITREF(lit_59),x_1471F2137);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P x_1470F2140;
  P formF2139;
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
  formF2139 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF2139,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1470F2140 = formF2139;
    T12 = FUNFAB(fun_77,7,x_1470F2140,formF2139,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(4));
    T11 = with_exit(T12);
    T10 = T11;
    T6 = T10;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_79) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_111),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_50;
  T4 = FUNFAB(fun_51,1,FREEREF(1));
  T5 = FUNFAB(fun_78,6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P continue_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_48;
  T2 = FUNFAB(fun_49,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_79,7,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLconditionG),VARREF(YgooSruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_81) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_80,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_82) {
  P blow_;
  P loopF2141;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_81,8);
  loopF2141 = T1;
  FUNINIT(loopF2141, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF2141);
  T2 = CALL0(0,loopF2141);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_83) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF2142;
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
  restartsF2142 = YPfalse;
  restartsF2142 = BOXFAB(restartsF2142);
  T5 = FUNFAB(fun_82,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2142);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_84) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_85) {
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

FUNCODEDEF(fun_86) {
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

FUNCODEDEF(fun_loop_87) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_86,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_88) {
  P loopF2143;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_87,3);
  loopF2143 = T1;
  FUNINIT(loopF2143, 3,FREEREF(0),FREEREF(1),loopF2143);
  T2 = CALL0(0,loopF2143);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P quit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_142),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_84;
  T4 = FUNFAB(fun_85,1,quit_);
  T5 = FUNFAB(fun_88,2,quit_,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_90) {
  P modname_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_89,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_145));
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
  T1 = fun_91;
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
  P T192,T193,T194,T195;
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
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
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
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
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
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
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
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
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
  T36 = CALL0(1,VARREF(YgooSsystemYos_name));
  T35 = CALL2(1,VARREF(YgooSmathYE),T36,LITREF(lit_22));
  VARSET(YevalStopYDg2c_evalQ,T35);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T37 = VARREF(YevalStopYauto_run);
  } else {
    T37 = VARREF(YevalStopYPPbottomPPast_run);
  }
  VARSET(YevalStopYrun,T37);
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
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
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
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
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
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
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
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
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
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
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
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
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
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
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
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
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
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
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
  T89 = CALL2(1,VARREF(YPdefine_method),T90,T92);
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
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YevalStopYdo_stack_frames,T94);
  lit_54 = YPPsym((P)"return");
  lit_55 = YPPsym((P)"x-1465");
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
  fun_x_1465_27 = YPmet(FUNCODEREF(fun_x_1465_27),LITREF(lit_55),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T101 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T101);
  lit_65 = YPPsym((P)"x-1469");
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
  fun_x_1469_30 = YPmet(FUNCODEREF(fun_x_1469_30),LITREF(lit_65),T104,ENVNUL,PNUL,YPfalse);
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
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
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
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
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
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
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
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalStopYbt,T131);
  lit_95 = YPPsym((P)"<keyboard-interrupt>");
  T136 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T135 = CALL2(1,VARREF(Yfab_class),LITREF(lit_95),T136);
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
  lit_112 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_113 = YPsb((P)"<= ");
  lit_114 = YPPsym((P)"x-1472");
  lit_115 = YPPsym((P)"x-1475");
  lit_116 = YPPsym((P)"x-1478");
  lit_117 = YPPsym((P)"x-1481");
  lit_118 = YPPsym((P)"x-1484");
  lit_119 = YPPsym((P)"x-1487");
  lit_120 = YPPsym((P)"x-1490");
  lit_121 = YPPsym((P)"x-1493");
  lit_122 = YPPsym((P)"x-1496");
  lit_123 = YPPsym((P)"x-1499");
  lit_124 = YPPsym((P)"x-1502");
  lit_125 = YPPsym((P)"x-1505");
  lit_126 = YPPsym((P)"x-1508");
  lit_127 = YPsb((P)"=> ");
  lit_128 = YPPsym((P)"cmd_frame-var");
  lit_129 = YPsb((P)"=> ");
  lit_130 = YPPsym((P)"cmd_frame");
  lit_131 = YPPsym((P)"cmd_backtrace");
  lit_132 = YPPsym((P)"cmd_bt");
  lit_133 = YPPsym((P)"cmd_auto-eval");
  lit_134 = YPPsym((P)"cmd_ast-eval");
  lit_135 = YPPsym((P)"cmd_g2c-eval");
  lit_136 = YPPsym((P)"cmd_in");
  lit_137 = YPPsym((P)"cmd_restart");
  lit_138 = YPPsym((P)"cmd_restarts");
  lit_139 = YPPsym((P)"cmd_handlers");
  lit_140 = YPPsym((P)"cmd_up");
  lit_141 = YPPsym((P)"cmd_quit");
  T176 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(2,LITREF(lit_107),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_107),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1508_52 = YPmet(FUNCODEREF(fun_x_1508_52),LITREF(lit_126),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1505_54 = YPmet(FUNCODEREF(fun_x_1505_54),LITREF(lit_125),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1502_56 = YPmet(FUNCODEREF(fun_x_1502_56),LITREF(lit_124),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1499_58 = YPmet(FUNCODEREF(fun_x_1499_58),LITREF(lit_123),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1496_60 = YPmet(FUNCODEREF(fun_x_1496_60),LITREF(lit_122),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1493_62 = YPmet(FUNCODEREF(fun_x_1493_62),LITREF(lit_121),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1490_64 = YPmet(FUNCODEREF(fun_x_1490_64),LITREF(lit_120),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1487_66 = YPmet(FUNCODEREF(fun_x_1487_66),LITREF(lit_119),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1484_68 = YPmet(FUNCODEREF(fun_x_1484_68),LITREF(lit_118),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1481_70 = YPmet(FUNCODEREF(fun_x_1481_70),LITREF(lit_117),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1478_72 = YPmet(FUNCODEREF(fun_x_1478_72),LITREF(lit_116),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1475_74 = YPmet(FUNCODEREF(fun_x_1475_74),LITREF(lit_115),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1472_76 = YPmet(FUNCODEREF(fun_x_1472_76),LITREF(lit_114),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_106)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_81 = YPmet(FUNCODEREF(fun_loop_81),LITREF(lit_33),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(5,LITREF(lit_41),LITREF(lit_102),LITREF(lit_103),LITREF(lit_104),LITREF(lit_8)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_83 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_83),LITREF(lit_101),T141,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YevalStopYPPtopPPtop_in);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalStopYPPtopPPtop_in);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_PPtopPPtop_in_83;
  T177 = CALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalStopYPPtopPPtop_in,T177);
  lit_142 = YPsb((P)"Exit the top-level interpreter");
  T187 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T187,ENVNUL,PNUL,YPfalse);
  T186 = YPsig(YPPlist(2,LITREF(lit_107),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(YPPlist(1,LITREF(lit_102)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_87 = YPmet(FUNCODEREF(fun_loop_87),LITREF(lit_33),T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(YPPlist(1,LITREF(lit_103)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_90 = YPmet(FUNCODEREF(fun_top_90),LITREF(lit_102),T181,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalStopYtop);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalStopYtop);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_top_90;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalStopYtop,T188);
  lit_143 = YPPsym((P)"save-image");
  lit_144 = YPPsym((P)"image-name");
  lit_145 = YPPsym((P)"goo/user");
  T193 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T193,ENVNUL,PNUL,YPfalse);
  T192 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_143),T192,ENVNUL,PNUL,YPfalse);
  T194 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T194);
  T195 = YPfalse;
  return T195;
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
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;

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
  {"dss", &module_info_gooSboot, "dss"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"~", &module_info_gooSmath, "~"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"fin", &module_info_gooSboot, "fin"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"op", &module_info_gooSmacros, "op"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"now", &module_info_gooScolsScol, "now"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"%su", &module_info_gooSboot, "%su"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"or", &module_info_gooSmacros, "or"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"t=", &module_info_gooStypes, "t="},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"put", &module_info_gooSioSport, "put"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"%str", &module_info_gooSboot, "%str"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"|", &module_info_gooSmath, "|"},
  {"do", &module_info_gooSmacros, "do"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"sin", &module_info_gooSmath, "sin"},
  {"/", &module_info_gooSmath, "/"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"try", &module_info_gooSboot, "try"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"use", &module_info_gooSboot, "use"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"&", &module_info_gooSmath, "&"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"map", &module_info_gooSmacros, "map"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"into", &module_info_gooScolsScol, "into"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"while", &module_info_gooSmacros, "while"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"round", &module_info_gooSmath, "round"},
  {"==", &module_info_gooSmacros, "=="},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"get", &module_info_gooSioSport, "get"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"round/", &module_info_gooSmath, "round/"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"=", &module_info_gooSmath, "="},
  {"and", &module_info_gooSmacros, "and"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"when", &module_info_gooSmacros, "when"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"~=", &module_info_gooSmath, "~="},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"in", &module_info_gooSioSport, "in"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"max", &module_info_gooSmag, "max"},
  {"ct", &module_info_gooSboot, "ct"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"out", &module_info_gooSioSport, "out"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"head", &module_info_gooSboot, "head"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"close", &module_info_gooSioSport, "close"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"def", &module_info_gooSboot, "def"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"read", &module_info_gooSruntime, "read"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"cos", &module_info_gooSmath, "cos"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"t?", &module_info_gooStypes, "t?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"if", &module_info_gooSboot, "if"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"mod", &module_info_gooSmath, "mod"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"len", &module_info_gooStypes, "len"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"$e", &module_info_gooSmath, "$e"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"loc", &module_info_gooSboot, "loc"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"lst", &module_info_gooSboot, "lst"},
  {"always", &module_info_gooSruntime, "always"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%get", &module_info_gooSboot, "%get"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"*", &module_info_gooSmath, "*"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"del", &module_info_gooScolsScol, "del"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"for", &module_info_gooSmacros, "for"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"match", &module_info_gooSmacros, "match"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"-", &module_info_gooSmath, "-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"find", &module_info_gooScolsScol, "find"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"<<", &module_info_gooSmath, "<<"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"pow", &module_info_gooSmath, "pow"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"as", &module_info_gooStypes, "as"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"open", &module_info_gooSioSport, "open"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"neg", &module_info_gooSmath, "neg"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"add", &module_info_gooScolsScol, "add"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"<", &module_info_gooSmag, "<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {">=", &module_info_gooSmag, ">="},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"new", &module_info_gooSboot, "new"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"t+", &module_info_gooStypes, "t+"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"until", &module_info_gooSmacros, "until"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"frame", &YevalStopYframe},
  {"str-eval", &YevalStopYstr_eval},
  {"parse-in", &YevalStopYparse_in},
  {"backtrace", &YevalStopYbacktrace},
  {"<keyboard-interrupt>", &YevalStopYLkeyboard_interruptG},
  {"print-result-expression", &YevalStopYprint_result_expression},
  {"top", &YevalStopYtop},
  {"auto-run", &YevalStopYauto_run},
  {"do-stack-frames", &YevalStopYdo_stack_frames},
  {"%%top%%top-in", &YevalStopYPPtopPPtop_in},
  {"g2c-eval", &YevalStopYg2c_eval},
  {"parse", &YevalStopYparse},
  {"compiled-file?", &YevalStopYcompiled_fileQ},
  {"read-file", &YevalStopYread_file},
  {"save-image", &YevalStopYsave_image},
  {"str-parse", &YevalStopYstr_parse},
  {"auto-eval", &YevalStopYauto_eval},
  {"str-eval-in", &YevalStopYstr_eval_in},
  {"frame-var", &YevalStopYframe_var},
  {"%%bottom%%ast-run", &YevalStopYPPbottomPPast_run},
  {"run", &YevalStopYrun},
  {"for-user-frames", NULL},
  {"do-restart", &YevalStopYdo_restart},
  {"$g2c-eval?", &YevalStopYDg2c_evalQ},
  {"prompt-for-command-expression", &YevalStopYprompt_for_command_expression},
  {"load-file", &YevalStopYload_file},
  {"load", &YevalStopYload},
  {"str-parse-in", &YevalStopYstr_parse_in},
  {"bt", &YevalStopYbt},
  {"for-frames", NULL},
  {"eval-in", &YevalStopYeval_in},
  {"---main-0---", NULL},
  {"%%bottom%%g2c-run", &YevalStopYPPbottomPPg2c_run},
  {"esctst", &YevalStopYesctst},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"frame", "frame"},
  {"parse-in", "parse-in"},
  {"backtrace", "backtrace"},
  {"load", "load"},
  {"top", "top"},
  {"auto-eval", "auto-eval"},
  {"save-image", "save-image"},
  {"frame-var", "frame-var"},
  {"do-stack-frames", "do-stack-frames"},
  {"g2c-eval", "g2c-eval"},
  {"load-file", "load-file"},
  {"read-file", "read-file"},
  {"bt", "bt"},
  {"eval", "eval"},
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
