/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/top");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/top */

EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalStopYframe,"eval/top","frame");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalStopYparse,"eval/top","parse");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
DEF(YevalStopYmsg_src_loc,"eval/top","msg-src-loc");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalStopYload,"eval/top","load");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YPsnul,"goo/boot","%snul");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOanyQ,"goo/boot","@any?");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalStopYD,"eval/top","$");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(Ynot,"goo/boot","not");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
DEF(YevalStopYbt,"eval/top","bt");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YevalStopYDD,"eval/top","$$");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yclone,"goo/boot","clone");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalStopYtop,"eval/top","top");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_156);
DEFLIT(lit_95);
DEFLIT(lit_56);
DEFLIT(lit_168);
DEFLIT(lit_151);
DEFLIT(lit_19);
DEFLIT(lit_200);
DEFLIT(lit_99);
DEFLIT(lit_198);
DEFLIT(lit_90);
DEFLIT(lit_30);
DEFLIT(lit_157);
DEFLIT(lit_48);
DEFLIT(lit_127);
DEFLIT(lit_93);
DEFLIT(lit_72);
DEFLIT(lit_84);
DEFLIT(lit_32);
DEFLIT(lit_18);
DEFLIT(lit_199);
DEFLIT(lit_132);
DEFLIT(lit_76);
DEFLIT(lit_29);
DEFLIT(lit_115);
DEFLIT(lit_20);
DEFLIT(lit_142);
DEFLIT(lit_121);
DEFLIT(lit_166);
DEFLIT(lit_141);
DEFLIT(lit_130);
DEFLIT(lit_98);
DEFLIT(lit_23);
DEFLIT(lit_53);
DEFLIT(lit_7);
DEFLIT(lit_186);
DEFLIT(lit_153);
DEFLIT(lit_116);
DEFLIT(lit_74);
DEFLIT(lit_135);
DEFLIT(lit_123);
DEFLIT(lit_28);
DEFLIT(lit_31);
DEFLIT(lit_155);
DEFLIT(lit_134);
DEFLIT(lit_46);
DEFLIT(lit_44);
DEFLIT(lit_62);
DEFLIT(lit_182);
DEFLIT(lit_55);
DEFLIT(lit_144);
DEFLIT(lit_91);
DEFLIT(lit_69);
DEFLIT(lit_178);
DEFLIT(lit_196);
DEFLIT(lit_87);
DEFLIT(lit_33);
DEFLIT(lit_111);
DEFLIT(lit_54);
DEFLIT(lit_126);
DEFLIT(lit_40);
DEFLIT(lit_175);
DEFLIT(lit_24);
DEFLIT(lit_15);
DEFLIT(lit_146);
DEFLIT(lit_159);
DEFLIT(lit_176);
DEFLIT(lit_71);
DEFLIT(lit_34);
DEFLIT(lit_10);
DEFLIT(lit_145);
DEFLIT(lit_66);
DEFLIT(lit_47);
DEFLIT(lit_109);
DEFLIT(lit_60);
DEFLIT(lit_119);
DEFLIT(lit_45);
DEFLIT(lit_189);
DEFLIT(lit_167);
DEFLIT(lit_185);
DEFLIT(lit_140);
DEFLIT(lit_163);
DEFLIT(lit_88);
DEFLIT(lit_103);
DEFLIT(lit_149);
DEFLIT(lit_190);
DEFLIT(lit_125);
DEFLIT(lit_50);
DEFLIT(lit_2);
DEFLIT(lit_129);
DEFLIT(lit_94);
DEFLIT(lit_173);
DEFLIT(lit_202);
DEFLIT(lit_3);
DEFLIT(lit_165);
DEFLIT(lit_193);
DEFLIT(lit_108);
DEFLIT(lit_181);
DEFLIT(lit_112);
DEFLIT(lit_97);
DEFLIT(lit_6);
DEFLIT(lit_139);
DEFLIT(lit_5);
DEFLIT(lit_194);
DEFLIT(lit_171);
DEFLIT(lit_197);
DEFLIT(lit_101);
DEFLIT(lit_124);
DEFLIT(lit_79);
DEFLIT(lit_86);
DEFLIT(lit_8);
DEFLIT(lit_65);
DEFLIT(lit_158);
DEFLIT(lit_78);
DEFLIT(lit_162);
DEFLIT(lit_21);
DEFLIT(lit_73);
DEFLIT(lit_37);
DEFLIT(lit_59);
DEFLIT(lit_143);
DEFLIT(lit_180);
DEFLIT(lit_26);
DEFLIT(lit_83);
DEFLIT(lit_96);
DEFLIT(lit_67);
DEFLIT(lit_128);
DEFLIT(lit_49);
DEFLIT(lit_154);
DEFLIT(lit_147);
DEFLIT(lit_1);
DEFLIT(lit_137);
DEFLIT(lit_70);
DEFLIT(lit_107);
DEFLIT(lit_150);
DEFLIT(lit_12);
DEFLIT(lit_63);
DEFLIT(lit_35);
DEFLIT(lit_105);
DEFLIT(lit_117);
DEFLIT(lit_82);
DEFLIT(lit_106);
DEFLIT(lit_22);
DEFLIT(lit_164);
DEFLIT(lit_52);
DEFLIT(lit_172);
DEFLIT(lit_61);
DEFLIT(lit_188);
DEFLIT(lit_184);
DEFLIT(lit_41);
DEFLIT(lit_110);
DEFLIT(lit_25);
DEFLIT(lit_14);
DEFLIT(lit_114);
DEFLIT(lit_104);
DEFLIT(lit_4);
DEFLIT(lit_102);
DEFLIT(lit_75);
DEFLIT(lit_201);
DEFLIT(lit_39);
DEFLIT(lit_179);
DEFLIT(lit_122);
DEFLIT(lit_169);
DEFLIT(lit_27);
DEFLIT(lit_170);
DEFLIT(lit_195);
DEFLIT(lit_36);
DEFLIT(lit_81);
DEFLIT(lit_80);
DEFLIT(lit_113);
DEFLIT(lit_9);
DEFLIT(lit_161);
DEFLIT(lit_38);
DEFLIT(lit_100);
DEFLIT(lit_85);
DEFLIT(lit_13);
DEFLIT(lit_0);
DEFLIT(lit_191);
DEFLIT(lit_192);
DEFLIT(lit_11);
DEFLIT(lit_89);
DEFLIT(lit_160);
DEFLIT(lit_77);
DEFLIT(lit_17);
DEFLIT(lit_64);
DEFLIT(lit_120);
DEFLIT(lit_68);
DEFLIT(lit_58);
DEFLIT(lit_136);
DEFLIT(lit_131);
DEFLIT(lit_152);
DEFLIT(lit_148);
DEFLIT(lit_92);
DEFLIT(lit_138);
DEFLIT(lit_174);
DEFLIT(lit_177);
DEFLIT(lit_183);
DEFLIT(lit_187);
DEFLIT(lit_43);
DEFLIT(lit_118);
DEFLIT(lit_16);
DEFLIT(lit_42);
DEFLIT(lit_51);
DEFLIT(lit_57);
DEFLIT(lit_133);

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
LOCFOR(fun_x_1484_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1488_30);
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
LOCFOR(fun_x_1532_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1529_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1526_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1523_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1520_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1517_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1514_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1511_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1508_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1505_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1502_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1499_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1496_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1493_78);
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
  P astF3074;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF3074 = T1;
  T2 = CALL2(1,DYNREF(YevalStopYrun),astF3074,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF3076;
  P oF3075;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF3075 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF3075);
  eF3076 = T3;
  T2 = eF3076;
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
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_41));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P forms_;
  P xF3077;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
  xF3077 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF3077);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF3077,forms_);
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
  P loopF3078;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF3078 = T2;
  FUNINIT(loopF3078, 2,FREEREF(0),loopF3078);
  T3 = CALL1(0,loopF3078,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF3079;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3079 = T1;
  if (tmpF3079 != YPfalse) {
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
  P portF3080;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF3080 = YPfalse;
  portF3080 = BOXFAB(portF3080);
  T3 = FUNFAB(fun_18,2,portF3080,filename_);
  T4 = FUNFAB(fun_19,1,portF3080);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF3082;
  P xF3081;
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
    xF3081 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF3081,ct_env_,YPfalse);
    oF3082 = T6;
    T7 = CALL2(1,DYNREF(YevalStopYrun),oF3082,ct_env_);
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
  P realfileF3083;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF3083 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF3083);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF3083,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF3087;
  P arg_strF3086;
  P tmpF3085;
  P formF3084;
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
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_54),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSconditionsYread),VARREF(YgooSioSportYin));
  formF3084 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF3084,VARREF(YLlstG));
  tmpF3085 = T6;
  if (tmpF3085 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF3084);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_55));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF3086 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_56),arg_strF3086,LITREF(lit_57));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF3087 = T13;
    T17 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3084);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_58),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF3087);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF3084;
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
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_61),T0,level_,label_);
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

FUNCODEDEF(fun_x_1484_27) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_68),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1483F3104;
  P x_1483F3103;
  P x_1483F3102;
  P x_1483F3101;
  P x_1483F3100;
  P x_1483F3099;
  P x_1483F3098;
  P x_1483F3097;
  P x_1483F3096;
  P x_1483F3095;
  P x_1483F3094;
  P bodyF3093;
  P argsF3092;
  P fF3091;
  P numF3090;
  P x_1483F3089;
  P x_1484F3088;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1484_27,2);
  x_1484F3088 = T1;
  FUNINIT(x_1484F3088, 2,FREEREF(0),return_);
  x_1483F3089 = FREEREF(0);
  numF3090 = YPfalse;
  numF3090 = BOXFAB(numF3090);
  fF3091 = YPfalse;
  fF3091 = BOXFAB(fF3091);
  argsF3092 = YPfalse;
  argsF3092 = BOXFAB(argsF3092);
  bodyF3093 = YPfalse;
  bodyF3093 = BOXFAB(bodyF3093);
  T11 = CALL2(1,VARREF(YisaQ),x_1483F3089,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1483F3089,LITREF(lit_68),x_1484F3088);
    x_1483F3094 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1483F3094,x_1484F3088);
    x_1483F3095 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F3095,x_1484F3088);
    BOXVAL(numF3090) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1483F3095);
    x_1483F3096 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F3096,x_1484F3088);
    BOXVAL(fF3091) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1483F3096);
    x_1483F3097 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1483F3097,x_1484F3088);
    BOXVAL(argsF3092) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1483F3097);
    x_1483F3098 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1483F3098,x_1484F3088);
    x_1483F3099 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F3099,x_1484F3088);
    T28 = CALL1(1,VARREF(Ytail),x_1483F3098);
    x_1483F3100 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F3100,x_1484F3088);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1483F3094);
    x_1483F3101 = T30;
    BOXVAL(bodyF3093) = x_1483F3101;
    x_1483F3102 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1483F3102,x_1484F3088);
    x_1483F3103 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F3103,x_1484F3088);
    T35 = CALL1(1,VARREF(Ytail),x_1483F3102);
    x_1483F3104 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1483F3104,x_1484F3088);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1484F3088,LITREF(lit_69),x_1483F3089);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T45 = BOXVAL(numF3090);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T46 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,LITREF(lit_71));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,LITREF(lit_71));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T56 = BOXVAL(fF3091);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T57,LITREF(lit_71));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T62 = BOXVAL(argsF3092);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T64 = CALL3(1,VARREF(YgooSmacrosYcat),T65,T66,LITREF(lit_71));
  T63 = CALL1(1,VARREF(Ylst),T64);
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T63,LITREF(lit_71));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T67 = BOXVAL(bodyF3093);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T72 = BOXVAL(numF3090);
  T71 = CALL1(1,VARREF(Ylst),T72);
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T71,LITREF(lit_71));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T58,T67,T68,LITREF(lit_71));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,LITREF(lit_71));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T47,LITREF(lit_71));
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

FUNCODEDEF(fun_x_1488_30) {
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

FUNCODEDEF(fun_31) {
  P return_;
  P x_1487F3121;
  P x_1487F3120;
  P x_1487F3119;
  P x_1487F3118;
  P x_1487F3117;
  P x_1487F3116;
  P x_1487F3115;
  P x_1487F3114;
  P x_1487F3113;
  P x_1487F3112;
  P x_1487F3111;
  P bodyF3110;
  P argsF3109;
  P fF3108;
  P numF3107;
  P x_1487F3106;
  P x_1488F3105;
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
  T1 = FUNSHELL(0,fun_x_1488_30,2);
  x_1488F3105 = T1;
  FUNINIT(x_1488F3105, 2,FREEREF(0),return_);
  x_1487F3106 = FREEREF(0);
  numF3107 = YPfalse;
  numF3107 = BOXFAB(numF3107);
  fF3108 = YPfalse;
  fF3108 = BOXFAB(fF3108);
  argsF3109 = YPfalse;
  argsF3109 = BOXFAB(argsF3109);
  bodyF3110 = YPfalse;
  bodyF3110 = BOXFAB(bodyF3110);
  T11 = CALL2(1,VARREF(YisaQ),x_1487F3106,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1487F3106,LITREF(lit_81),x_1488F3105);
    x_1487F3111 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1487F3111,x_1488F3105);
    x_1487F3112 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F3112,x_1488F3105);
    BOXVAL(numF3107) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1487F3112);
    x_1487F3113 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F3113,x_1488F3105);
    BOXVAL(fF3108) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1487F3113);
    x_1487F3114 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1487F3114,x_1488F3105);
    BOXVAL(argsF3109) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1487F3114);
    x_1487F3115 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1487F3115,x_1488F3105);
    x_1487F3116 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F3116,x_1488F3105);
    T28 = CALL1(1,VARREF(Ytail),x_1487F3115);
    x_1487F3117 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F3117,x_1488F3105);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1487F3111);
    x_1487F3118 = T30;
    BOXVAL(bodyF3110) = x_1487F3118;
    x_1487F3119 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1487F3119,x_1488F3105);
    x_1487F3120 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F3120,x_1488F3105);
    T35 = CALL1(1,VARREF(Ytail),x_1487F3119);
    x_1487F3121 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1487F3121,x_1488F3105);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1488F3105,LITREF(lit_69),x_1487F3106);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T45 = CALL1(1,VARREF(Ylst),YPfalse);
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T44,T45,LITREF(lit_71));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T50 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_71));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T58 = BOXVAL(fF3108);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T60 = BOXVAL(argsF3109);
  T59 = CALL1(1,VARREF(Ylst),T60);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T59,LITREF(lit_71));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T72 = BOXVAL(fF3108);
  T71 = CALL1(1,VARREF(Ylst),T72);
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T71,LITREF(lit_71));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T79 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T81 = BOXVAL(fF3108);
  T80 = CALL1(1,VARREF(Ylst),T81);
  T78 = CALL3(1,VARREF(YgooSmacrosYcat),T79,T80,LITREF(lit_71));
  T77 = CALL1(1,VARREF(Ylst),T78);
  T74 = CALL4(1,VARREF(YgooSmacrosYcat),T75,T76,T77,LITREF(lit_71));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T66 = CALL5(1,VARREF(YgooSmacrosYcat),T67,T68,T73,T82,LITREF(lit_71));
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALL4(1,VARREF(YgooSmacrosYcat),T63,T64,T65,LITREF(lit_71));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T85 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T87 = BOXVAL(numF3107);
  T86 = CALL1(1,VARREF(Ylst),T87);
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T91 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T89 = CALL4(1,VARREF(YgooSmacrosYcat),T90,T91,T92,LITREF(lit_71));
  T88 = CALL1(1,VARREF(Ylst),T89);
  T84 = CALL4(1,VARREF(YgooSmacrosYcat),T85,T86,T88,LITREF(lit_71));
  T83 = CALL1(1,VARREF(Ylst),T84);
  T95 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T96 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T99 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T102 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T104 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T101 = CALL4(1,VARREF(YgooSmacrosYcat),T102,T103,T104,LITREF(lit_71));
  T100 = CALL1(1,VARREF(Ylst),T101);
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T108 = CALL1(1,VARREF(Ylst),YPfalse);
  T106 = CALL3(1,VARREF(YgooSmacrosYcat),T107,T108,LITREF(lit_71));
  T105 = CALL1(1,VARREF(Ylst),T106);
  T98 = CALL4(1,VARREF(YgooSmacrosYcat),T99,T100,T105,LITREF(lit_71));
  T97 = CALL1(1,VARREF(Ylst),T98);
  T109 = BOXVAL(bodyF3110);
  T94 = CALL5(1,VARREF(YgooSmacrosYcat),T95,T96,T97,T109,LITREF(lit_71));
  T93 = CALL1(1,VARREF(Ylst),T94);
  T112 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T115 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T116 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T117 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T114 = CALL4(1,VARREF(YgooSmacrosYcat),T115,T116,T117,LITREF(lit_71));
  T113 = CALL1(1,VARREF(Ylst),T114);
  T120 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T121 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T122 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T119 = CALL4(1,VARREF(YgooSmacrosYcat),T120,T121,T122,LITREF(lit_71));
  T118 = CALL1(1,VARREF(Ylst),T119);
  T125 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T126 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T127 = CALL1(1,VARREF(Ylst),YPtrue);
  T124 = CALL4(1,VARREF(YgooSmacrosYcat),T125,T126,T127,LITREF(lit_71));
  T123 = CALL1(1,VARREF(Ylst),T124);
  T111 = CALL5(1,VARREF(YgooSmacrosYcat),T112,T113,T118,T123,LITREF(lit_71));
  T110 = CALL1(1,VARREF(Ylst),T111);
  T52 = CALLN(1,VARREF(YgooSmacrosYcat),7,T53,T54,T61,T83,T93,T110,LITREF(lit_71));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),6,T39,T40,T41,T46,T51,LITREF(lit_71));
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
  P slF3122;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(f_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),f_,VARREF(YLmetG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yfun_src),f_);
    slF3122 = T3;
    T5 = CALL2(1,VARREF(YisaQ),slF3122,VARREF(YLsrc_locG));
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(Ysrc_loc_file),slF3122);
      T8 = CALL1(1,VARREF(Ysrc_loc_line),slF3122);
      T6 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_102),T7,T8);
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
  P numF3125;
  P UnameF3124;
  P argsF3123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3123 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_92);
  }
  UnameF3124 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3125 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3124,LITREF(lit_96));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_106),numF3125,f_,argsF3123);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T14 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3124,LITREF(lit_97));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3125;
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
  P UnumF3128;
  P Utop_numF3127;
  P Useen_topF3126;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3126 = YPfalse;
  Useen_topF3126 = BOXFAB(Useen_topF3126);
  Utop_numF3127 = YPint((P)0);
  Utop_numF3127 = BOXFAB(Utop_numF3127);
  UnumF3128 = YPint((P)0);
  UnumF3128 = BOXFAB(UnumF3128);
  T7 = FUNFAB(fun_34,4,UnumF3128,Utop_numF3127,Useen_topF3126,break_);
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
  P numF3131;
  P UnameF3130;
  P argsF3129;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3129 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_92);
  }
  UnameF3130 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3131 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3130,LITREF(lit_96));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF3131);
    if (T15 != YPfalse) {
      CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_111),numF3131,f_,argsF3129);
      CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
      T16 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3130,LITREF(lit_97));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3131;
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
  P UnumF3134;
  P Utop_numF3133;
  P Useen_topF3132;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3132 = YPfalse;
  Useen_topF3132 = BOXFAB(Useen_topF3132);
  Utop_numF3133 = YPint((P)0);
  Utop_numF3133 = BOXFAB(Utop_numF3133);
  UnumF3134 = YPint((P)0);
  UnumF3134 = BOXFAB(UnumF3134);
  T7 = FUNFAB(fun_37,5,UnumF3134,Utop_numF3133,Useen_topF3132,break_,FREEREF(0));
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
  P numF3137;
  P UnameF3136;
  P argsF3135;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3135 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_92);
  }
  UnameF3136 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3137 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3136,LITREF(lit_96));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF3137);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF3135,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3136,LITREF(lit_97));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3137;
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
  P UnumF3140;
  P Utop_numF3139;
  P Useen_topF3138;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3138 = YPfalse;
  Useen_topF3138 = BOXFAB(Useen_topF3138);
  Utop_numF3139 = YPint((P)0);
  Utop_numF3139 = BOXFAB(Utop_numF3139);
  UnumF3140 = YPint((P)0);
  UnumF3140 = BOXFAB(UnumF3140);
  T7 = FUNFAB(fun_40,7,UnumF3140,Utop_numF3139,Useen_topF3138,break_,FREEREF(0),FREEREF(1),FREEREF(2));
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
  P numF3143;
  P UnameF3142;
  P argsF3141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF3141 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_92);
  }
  UnameF3142 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF3143 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3142,LITREF(lit_96));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_120),numF3143,f_);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T14 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF3142,LITREF(lit_97));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF3143;
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
  P UnumF3146;
  P Utop_numF3145;
  P Useen_topF3144;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF3144 = YPfalse;
  Useen_topF3144 = BOXFAB(Useen_topF3144);
  Utop_numF3145 = YPint((P)0);
  Utop_numF3145 = BOXFAB(Utop_numF3145);
  UnumF3146 = YPint((P)0);
  UnumF3146 = BOXFAB(UnumF3146);
  T7 = FUNFAB(fun_44,4,UnumF3146,Utop_numF3145,Useen_topF3144,break_);
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
  P tmpF3147;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_123));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF3147 = T4;
  if (tmpF3147 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_124),n_);
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
  P x_1490F3149;
  P x_1489F3148;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  x_1489F3148 = c_;
  x_1490F3149 = VARREF(YisaQ);
  T2 = CALL2(1,x_1490F3149,x_1489F3148,VARREF(YgooSconditionsYLkeyboard_interruptG));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_130));
    T1 = T3;
  } else {
    T5 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
    T4 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_131),T5);
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

FUNCODEDEF(fun_x_1532_52) {
  P msg_,args_;
  P x_1536F3154;
  P x_1535F3153;
  P x_1534F3152;
  P x_1533F3151;
  P resF3150;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF3150 = T2;
  resF3150 = BOXFAB(resF3150);
  T5 = BOXVAL(FREEREF(1));
  T6 = BOXVAL(resF3150);
  CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_178),T6);
  x_1533F3151 = VARREF(YevalStopYDDD);
  x_1534F3152 = VARREF(YevalStopYDD);
  x_1535F3153 = VARREF(YevalStopYD);
  T11 = BOXVAL(resF3150);
  x_1536F3154 = T11;
  VARSET(YevalStopYDDD,x_1534F3152);
  VARSET(YevalStopYDD,x_1535F3153);
  VARSET(YevalStopYD,x_1536F3154);
  T12 = BOXVAL(resF3150) = x_1533F3151;
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
  P x_1531F3163;
  P x_1531F3162;
  P x_1531F3161;
  P x_1531F3160;
  P x_1531F3159;
  P nameF3158;
  P nF3157;
  P x_1531F3156;
  P x_1532F3155;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1532_52,4);
  x_1532F3155 = T1;
  FUNINIT(x_1532F3155, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1531F3156 = FREEREF(3);
  nF3157 = YPfalse;
  nF3157 = BOXFAB(nF3157);
  nameF3158 = YPfalse;
  nameF3158 = BOXFAB(nameF3158);
  T7 = CALL2(1,VARREF(YisaQ),x_1531F3156,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1531F3156,LITREF(lit_179),x_1532F3155);
    x_1531F3159 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F3159,x_1532F3155);
    BOXVAL(nF3157) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1531F3159);
    x_1531F3160 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F3160,x_1532F3155);
    BOXVAL(nameF3158) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1531F3160);
    x_1531F3161 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1531F3161,x_1532F3155);
    x_1531F3162 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1531F3162,x_1532F3155);
    T19 = CALL1(1,VARREF(Ytail),x_1531F3161);
    x_1531F3163 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1531F3163,x_1532F3155);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1532F3155,LITREF(lit_69),x_1531F3156);
  }
  T23 = BOXVAL(FREEREF(1));
  T25 = BOXVAL(nF3157);
  T26 = BOXVAL(nameF3158);
  T24 = CALL2(1,VARREF(YevalStopYframe_var),T25,T26);
  T22 = CALL4(1,VARREF(YevalStopYprint_result_expression),T23,FREEREF(2),LITREF(lit_180),T24);
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1529_54) {
  P msg_,args_;
  P x_1530F3164;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1530F3164 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1530F3164);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1528F3171;
  P x_1528F3170;
  P x_1528F3169;
  P x_1528F3168;
  P nF3167;
  P x_1528F3166;
  P x_1529F3165;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1529_54,5);
  x_1529F3165 = T1;
  FUNINIT(x_1529F3165, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1528F3166 = FREEREF(0);
  nF3167 = YPfalse;
  nF3167 = BOXFAB(nF3167);
  T5 = CALL2(1,VARREF(YisaQ),x_1528F3166,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1528F3166,LITREF(lit_181),x_1529F3165);
    x_1528F3168 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1528F3168,x_1529F3165);
    BOXVAL(nF3167) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1528F3168);
    x_1528F3169 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1528F3169,x_1529F3165);
    x_1528F3170 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1528F3170,x_1529F3165);
    T14 = CALL1(1,VARREF(Ytail),x_1528F3169);
    x_1528F3171 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1528F3171,x_1529F3165);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1529F3165,LITREF(lit_69),x_1528F3166);
  }
  T18 = BOXVAL(nF3167);
  T17 = CALL1(1,VARREF(YevalStopYframe),T18);
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1526_56) {
  P msg_,args_;
  P x_1527F3172;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1527F3172 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1527F3172,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1525F3177;
  P x_1525F3176;
  P x_1525F3175;
  P x_1525F3174;
  P x_1526F3173;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1526_56,5);
  x_1526F3173 = T1;
  FUNINIT(x_1526F3173, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1525F3174 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1525F3174,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1525F3174,LITREF(lit_182),x_1526F3173);
    x_1525F3175 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1525F3175,x_1526F3173);
    x_1525F3176 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1525F3176,x_1526F3173);
    T9 = CALL1(1,VARREF(Ytail),x_1525F3175);
    x_1525F3177 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1525F3177,x_1526F3173);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1526F3173,LITREF(lit_69),x_1525F3174);
  }
  T12 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1523_58) {
  P msg_,args_;
  P x_1524F3178;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1524F3178 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1524F3178,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1522F3183;
  P x_1522F3182;
  P x_1522F3181;
  P x_1522F3180;
  P x_1523F3179;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1523_58,5);
  x_1523F3179 = T1;
  FUNINIT(x_1523F3179, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1522F3180 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1522F3180,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1522F3180,LITREF(lit_183),x_1523F3179);
    x_1522F3181 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1522F3181,x_1523F3179);
    x_1522F3182 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1522F3182,x_1523F3179);
    T9 = CALL1(1,VARREF(Ytail),x_1522F3181);
    x_1522F3183 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1522F3183,x_1523F3179);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1523F3179,LITREF(lit_69),x_1522F3180);
  }
  T12 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1520_60) {
  P msg_,args_;
  P x_1521F3184;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1521F3184 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1521F3184,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1519F3189;
  P x_1519F3188;
  P x_1519F3187;
  P x_1519F3186;
  P x_1520F3185;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1520_60,5);
  x_1520F3185 = T1;
  FUNINIT(x_1520F3185, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1519F3186 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1519F3186,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1519F3186,LITREF(lit_184),x_1520F3185);
    x_1519F3187 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1519F3187,x_1520F3185);
    x_1519F3188 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1519F3188,x_1520F3185);
    T9 = CALL1(1,VARREF(Ytail),x_1519F3187);
    x_1519F3189 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1519F3189,x_1520F3185);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1520F3185,LITREF(lit_69),x_1519F3186);
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

FUNCODEDEF(fun_x_1517_62) {
  P msg_,args_;
  P x_1518F3190;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1518F3190 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1518F3190,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1516F3195;
  P x_1516F3194;
  P x_1516F3193;
  P x_1516F3192;
  P x_1517F3191;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1517_62,5);
  x_1517F3191 = T1;
  FUNINIT(x_1517F3191, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1516F3192 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1516F3192,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1516F3192,LITREF(lit_185),x_1517F3191);
    x_1516F3193 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1516F3193,x_1517F3191);
    x_1516F3194 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1516F3194,x_1517F3191);
    T9 = CALL1(1,VARREF(Ytail),x_1516F3193);
    x_1516F3195 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1516F3195,x_1517F3191);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1517F3191,LITREF(lit_69),x_1516F3192);
  }
  T12 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1514_64) {
  P msg_,args_;
  P x_1515F3196;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1515F3196 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1515F3196,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1513F3201;
  P x_1513F3200;
  P x_1513F3199;
  P x_1513F3198;
  P x_1514F3197;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1514_64,5);
  x_1514F3197 = T1;
  FUNINIT(x_1514F3197, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1513F3198 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1513F3198,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1513F3198,LITREF(lit_186),x_1514F3197);
    x_1513F3199 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1513F3199,x_1514F3197);
    x_1513F3200 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1513F3200,x_1514F3197);
    T9 = CALL1(1,VARREF(Ytail),x_1513F3199);
    x_1513F3201 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1513F3201,x_1514F3197);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1514F3197,LITREF(lit_69),x_1513F3198);
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

FUNCODEDEF(fun_x_1511_66) {
  P msg_,args_;
  P x_1512F3202;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1512F3202 = FREEREF(0);
  T3 = FUNFAB(fun_65,4,x_1512F3202,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P new_envF3210;
  P x_1510F3209;
  P x_1510F3208;
  P x_1510F3207;
  P x_1510F3206;
  P mF3205;
  P x_1510F3204;
  P x_1511F3203;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1511_66,5);
  x_1511F3203 = T1;
  FUNINIT(x_1511F3203, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1510F3204 = FREEREF(0);
  mF3205 = YPfalse;
  mF3205 = BOXFAB(mF3205);
  T5 = CALL2(1,VARREF(YisaQ),x_1510F3204,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1510F3204,LITREF(lit_187),x_1511F3203);
    x_1510F3206 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1510F3206,x_1511F3203);
    BOXVAL(mF3205) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1510F3206);
    x_1510F3207 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1510F3207,x_1511F3203);
    x_1510F3208 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1510F3208,x_1511F3203);
    T14 = CALL1(1,VARREF(Ytail),x_1510F3207);
    x_1510F3209 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1510F3209,x_1511F3203);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1511F3203,LITREF(lit_69),x_1510F3204);
  }
  T19 = BOXVAL(mF3205);
  T18 = CALL1(1,VARREF(YevalSastYruntime_environment),T19);
  new_envF3210 = T18;
  T20 = BOXVAL(FREEREF(2)) = new_envF3210;
  T17 = T20;
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1508_68) {
  P msg_,args_;
  P x_1509F3211;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1509F3211 = FREEREF(0);
  T3 = FUNFAB(fun_67,4,x_1509F3211,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1507F3218;
  P x_1507F3217;
  P x_1507F3216;
  P x_1507F3215;
  P nF3214;
  P x_1507F3213;
  P x_1508F3212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1508_68,5);
  x_1508F3212 = T1;
  FUNINIT(x_1508F3212, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1507F3213 = FREEREF(0);
  nF3214 = YPfalse;
  nF3214 = BOXFAB(nF3214);
  T5 = CALL2(1,VARREF(YisaQ),x_1507F3213,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1507F3213,LITREF(lit_188),x_1508F3212);
    x_1507F3215 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1507F3215,x_1508F3212);
    BOXVAL(nF3214) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1507F3215);
    x_1507F3216 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1507F3216,x_1508F3212);
    x_1507F3217 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F3217,x_1508F3212);
    T14 = CALL1(1,VARREF(Ytail),x_1507F3216);
    x_1507F3218 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F3218,x_1508F3212);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1508F3212,LITREF(lit_69),x_1507F3213);
  }
  T18 = BOXVAL(FREEREF(4));
  T19 = BOXVAL(nF3214);
  T17 = CALL2(1,VARREF(YevalStopYdo_restart),T18,T19);
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1505_70) {
  P msg_,args_;
  P x_1506F3219;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1506F3219 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1506F3219,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1504F3224;
  P x_1504F3223;
  P x_1504F3222;
  P x_1504F3221;
  P x_1505F3220;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1505_70,6);
  x_1505F3220 = T1;
  FUNINIT(x_1505F3220, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1504F3221 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1504F3221,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1504F3221,LITREF(lit_189),x_1505F3220);
    x_1504F3222 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1504F3222,x_1505F3220);
    x_1504F3223 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1504F3223,x_1505F3220);
    T9 = CALL1(1,VARREF(Ytail),x_1504F3222);
    x_1504F3224 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1504F3224,x_1505F3220);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1505F3220,LITREF(lit_69),x_1504F3221);
  }
  T12 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1502_72) {
  P msg_,args_;
  P x_1503F3225;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1503F3225 = FREEREF(0);
  T3 = FUNFAB(fun_71,5,x_1503F3225,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1501F3230;
  P x_1501F3229;
  P x_1501F3228;
  P x_1501F3227;
  P x_1502F3226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1502_72,6);
  x_1502F3226 = T1;
  FUNINIT(x_1502F3226, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1501F3227 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1501F3227,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1501F3227,LITREF(lit_190),x_1502F3226);
    x_1501F3228 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1501F3228,x_1502F3226);
    x_1501F3229 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F3229,x_1502F3226);
    T9 = CALL1(1,VARREF(Ytail),x_1501F3228);
    x_1501F3230 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F3230,x_1502F3226);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1502F3226,LITREF(lit_69),x_1501F3227);
  }
  T12 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1499_74) {
  P msg_,args_;
  P x_1500F3231;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1500F3231 = FREEREF(0);
  T3 = FUNFAB(fun_73,5,x_1500F3231,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1498F3236;
  P x_1498F3235;
  P x_1498F3234;
  P x_1498F3233;
  P x_1499F3232;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1499_74,6);
  x_1499F3232 = T1;
  FUNINIT(x_1499F3232, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1498F3233 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1498F3233,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1498F3233,LITREF(lit_191),x_1499F3232);
    x_1498F3234 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1498F3234,x_1499F3232);
    x_1498F3235 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1498F3235,x_1499F3232);
    T9 = CALL1(1,VARREF(Ytail),x_1498F3234);
    x_1498F3236 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1498F3236,x_1499F3232);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1499F3232,LITREF(lit_69),x_1498F3233);
  }
  T12 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1496_76) {
  P msg_,args_;
  P x_1497F3237;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1497F3237 = FREEREF(0);
  T3 = FUNFAB(fun_75,6,x_1497F3237,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_1495F3242;
  P x_1495F3241;
  P x_1495F3240;
  P x_1495F3239;
  P x_1496F3238;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1496_76,7);
  x_1496F3238 = T1;
  FUNINIT(x_1496F3238, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1495F3239 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1495F3239,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1495F3239,LITREF(lit_192),x_1496F3238);
    x_1495F3240 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1495F3240,x_1496F3238);
    x_1495F3241 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1495F3241,x_1496F3238);
    T9 = CALL1(1,VARREF(Ytail),x_1495F3240);
    x_1495F3242 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1495F3242,x_1496F3238);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1496F3238,LITREF(lit_69),x_1495F3239);
  }
  T12 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1493_78) {
  P msg_,args_;
  P x_1494F3243;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1494F3243 = FREEREF(0);
  T3 = FUNFAB(fun_77,7,x_1494F3243,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_1492F3248;
  P x_1492F3247;
  P x_1492F3246;
  P x_1492F3245;
  P x_1493F3244;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1493_78,8);
  x_1493F3244 = T1;
  FUNINIT(x_1493F3244, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1492F3245 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1492F3245,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1492F3245,LITREF(lit_193),x_1493F3244);
    x_1492F3246 = T5;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1492F3246,x_1493F3244);
    x_1492F3247 = T7;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1492F3247,x_1493F3244);
    T9 = CALL1(1,VARREF(Ytail),x_1492F3246);
    x_1492F3248 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1492F3248,x_1493F3244);
    T6 = T10;
    T4 = T6;
  } else {
    T11 = CALL2(1,x_1493F3244,LITREF(lit_69),x_1492F3245);
  }
  T12 = CALL1(1,FREEREF(7),YPfalse);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P x_1491F3250;
  P formF3249;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_134));
    T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_135));
  formF3249 = T4;
  T7 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF3249);
  if (T7 != YPfalse) {
    T8 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T8;
  } else {
    x_1491F3250 = formF3249;
    T11 = FUNFAB(fun_79,8,x_1491F3250,formF3249,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
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
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_132),VARREF(Yhandler_info_arguments),T2);
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
  P loopF3251;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_83,8);
  loopF3251 = T1;
  FUNINIT(loopF3251, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF3251);
  T2 = CALL0(0,loopF3251);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_85) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF3252;
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
  restartsF3252 = YPfalse;
  restartsF3252 = BOXFAB(restartsF3252);
  T5 = FUNFAB(fun_84,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF3252);
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
  P loopF3253;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_89,3);
  loopF3253 = T1;
  FUNINIT(loopF3253, 3,FREEREF(0),FREEREF(1),loopF3253);
  T2 = CALL0(0,loopF3253);
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
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_197),VARREF(Yhandler_info_arguments),T2);
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
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_202));
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
  P tmpF3256;
  P tmpF3255;
  P modeF3254;
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
  T10 = BOUNDP(YevalStopYparse_in);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalStopYparse_in);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_in_4;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalStopYparse_in,T8);
  lit_12 = YPPsym((P)"parse");
  lit_13 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T12 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_12),T12,ENVNUL,PNUL,sloc(25));
  T15 = BOUNDP(YevalStopYparse);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalStopYparse);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_parse_5;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalStopYparse,T13);
  lit_14 = YPPsym((P)"str-parse-in");
  lit_15 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"ct-env"));
  lit_16 = YPsb((P)"%=\n");
  T17 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_14),T17,ENVNUL,PNUL,sloc(28));
  T20 = BOUNDP(YevalStopYstr_parse_in);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalStopYstr_parse_in);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_in_6;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalStopYstr_parse_in,T18);
  lit_17 = YPPsym((P)"str-parse");
  lit_18 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T22 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_17),T22,ENVNUL,PNUL,sloc(31));
  T25 = BOUNDP(YevalStopYstr_parse);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalStopYstr_parse);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_str_parse_7;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalStopYstr_parse,T23);
  lit_19 = YPPsym((P)"%%bottom%%ast-run");
  lit_20 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T27 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPast_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPast_run),LITREF(lit_19),T27,ENVNUL,PNUL,sloc(34));
  T28 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T28);
  lit_21 = YPPsym((P)"%%bottom%%g2c-run");
  lit_22 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T29 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPg2c_run),LITREF(lit_21),T29,ENVNUL,PNUL,sloc(37));
  T30 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T30);
  lit_23 = YPPsym((P)"auto-run");
  lit_24 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T31 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPmet(FUNCODEREF(YevalStopYauto_run),LITREF(lit_23),T31,ENVNUL,PNUL,sloc(40));
  T32 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T32);
  lit_25 = YPPsym((P)"auto-eval");
  lit_26 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"ct-env"));
  T33 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPmet(FUNCODEREF(YevalStopYauto_eval),LITREF(lit_25),T33,ENVNUL,PNUL,sloc(45));
  T34 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T34);
  lit_27 = YPsb((P)"GOO_EVAL_MODE");
  lit_28 = YPsb((P)"ast");
  lit_29 = YPsb((P)"g2c");
  lit_30 = YPsb((P)"linux");
  T36 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_27));
  modeF3254 = T36;
  T39 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3254,LITREF(lit_28));
  T38 = XCALL1(1,VARREF(Ynot),T39);
  tmpF3255 = T38;
  if (tmpF3255 != YPfalse) {
    T42 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF3254,LITREF(lit_29));
    tmpF3256 = T42;
    if (tmpF3256 != YPfalse) {
      T43 = tmpF3256;
    } else {
      T45 = XCALL0(1,VARREF(YgooSsystemYos_name));
      T44 = XCALL2(1,VARREF(YgooSmathYE),T45,LITREF(lit_30));
      T43 = T44;
    }
    T41 = T43;
    T40 = T41;
  } else {
    T40 = YPfalse;
  }
  T37 = T40;
  T35 = T37;
  VARSET(YevalStopYDg2c_evalQ,T35);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T46 = VARREF(YevalStopYauto_run);
  } else {
    T46 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T46);
  lit_31 = YPPsym((P)"eval-in");
  lit_32 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T47 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_31),T47,ENVNUL,PNUL,sloc(57));
  T50 = BOUNDP(YevalStopYeval_in);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalStopYeval_in);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_eval_in_12;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalStopYeval_in,T48);
  lit_33 = YPPsym((P)"eval");
  lit_34 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T52 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_33),T52,ENVNUL,PNUL,sloc(62));
  T55 = BOUNDP(YevalSsyntaxYeval);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSsyntaxYeval);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_eval_13;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSsyntaxYeval,T53);
  lit_35 = YPPsym((P)"str-eval-in");
  lit_36 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T57 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_35),T57,ENVNUL,PNUL,sloc(65));
  T60 = BOUNDP(YevalStopYstr_eval_in);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalStopYstr_eval_in);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_str_eval_in_14;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalStopYstr_eval_in,T58);
  lit_37 = YPPsym((P)"str-eval");
  lit_38 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T62 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_37),T62,ENVNUL,PNUL,sloc(68));
  T65 = BOUNDP(YevalStopYstr_eval);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalStopYstr_eval);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_str_eval_15;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalStopYstr_eval,T63);
  lit_39 = YPPsym((P)"compiled-file?");
  lit_40 = YPPlist(1,YPPsym((P)"name"));
  lit_41 = YPsb((P)".gooc");
  T67 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_39),T67,ENVNUL,PNUL,sloc(71));
  T68 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T68);
  lit_42 = YPPsym((P)"read-file");
  lit_43 = YPPlist(1,YPPsym((P)"filename"));
  lit_44 = YPPsym((P)"loop");
  lit_45 = YPPlist(1,YPPsym((P)"forms"));
  T72 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_44),T72,ENVNUL,PNUL,sloc(76));
  T71 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T71,ENVNUL,PNUL,sloc(75));
  T70 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T70,ENVNUL,PNUL,sloc(75));
  T69 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_42),T69,ENVNUL,PNUL,sloc(74));
  T75 = BOUNDP(YevalStopYread_file);
  if (T75 != YPfalse) {
    T74 = VARREF(YevalStopYread_file);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_read_file_20;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YevalStopYread_file,T73);
  lit_46 = YPPsym((P)"load-in");
  lit_47 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  T77 = YPsig(LITREF(lit_47),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_46),T77,ENVNUL,PNUL,sloc(82));
  T80 = BOUNDP(YevalSastYload_in);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSastYload_in);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_load_in_21;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSastYload_in,T78);
  lit_48 = YPPsym((P)"load-file");
  lit_49 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"modname"));
  T82 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_48),T82,ENVNUL,PNUL,sloc(92));
  T85 = BOUNDP(YevalStopYload_file);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalStopYload_file);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_load_file_22;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalStopYload_file,T83);
  lit_50 = YPPsym((P)"load");
  lit_51 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"modname"));
  T87 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_50),T87,ENVNUL,PNUL,sloc(95));
  T90 = BOUNDP(YevalStopYload);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalStopYload);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_load_23;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalStopYload,T88);
  lit_52 = YPPsym((P)"prompt-for-command-expression");
  lit_53 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"prompt"));
  lit_54 = YPsb((P)"%s %=%s");
  lit_55 = YPPsym((P)"unquote");
  lit_56 = YPsb((P)"(");
  lit_57 = YPsb((P)")");
  lit_58 = YPsb((P)"cmd_");
  T92 = YPsig(LITREF(lit_53),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_52),T92,ENVNUL,PNUL,sloc(102));
  T95 = BOUNDP(YevalStopYprompt_for_command_expression);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalStopYprompt_for_command_expression);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_prompt_for_command_expression_24;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalStopYprompt_for_command_expression,T93);
  lit_59 = YPPsym((P)"print-result-expression");
  lit_60 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"label"),YPPsym((P)"result"));
  lit_61 = YPsb((P)"%s %=%s");
  T97 = YPsig(LITREF(lit_60),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_59),T97,ENVNUL,PNUL,sloc(112));
  T100 = BOUNDP(YevalStopYprint_result_expression);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalStopYprint_result_expression);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_print_result_expression_25;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalStopYprint_result_expression,T98);
  lit_62 = YPPsym((P)"do-stack-frames");
  lit_63 = YPPlist(1,YPPsym((P)"fun"));
  T102 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_62),T102,ENVNUL,PNUL,sloc(116));
  T105 = BOUNDP(YevalStopYdo_stack_frames);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalStopYdo_stack_frames);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_do_stack_frames_26;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalStopYdo_stack_frames,T103);
  lit_64 = YPPlist(1,YPPsym((P)"exp"));
  lit_65 = YPPlist(1,YPPsym((P)"return"));
  lit_66 = YPPsym((P)"x-1484");
  lit_67 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_68 = YPPsym((P)"for-frames");
  lit_69 = YPsb((P)"Match Pattern Failure");
  lit_70 = YPPsym((P)"let");
  lit_71 = Ynil;
  lit_72 = YPPsym((P)"fun");
  lit_73 = YPPsym((P)"_args");
  lit_74 = YPPsym((P)"def");
  lit_75 = YPPsym((P)"rev");
  lit_76 = YPPsym((P)"incf");
  T109 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1484_27 = YPmet(FUNCODEREF(fun_x_1484_27),LITREF(lit_66),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T110 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T110);
  lit_77 = YPPlist(1,YPPsym((P)"exp"));
  lit_78 = YPPlist(1,YPPsym((P)"return"));
  lit_79 = YPPsym((P)"x-1488");
  lit_80 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_81 = YPPsym((P)"for-user-frames");
  lit_82 = YPPsym((P)"esc");
  lit_83 = YPPsym((P)"break");
  lit_84 = YPPsym((P)"_seen-top");
  lit_85 = YPPsym((P)"_top-num");
  lit_86 = YPPsym((P)"_num");
  lit_87 = YPPsym((P)"_name");
  lit_88 = YPPsym((P)"if");
  lit_89 = YPPsym((P)"fun-name");
  lit_90 = YPPsym((P)"as");
  lit_91 = YPPsym((P)"<str>");
  lit_92 = YPsb((P)"");
  lit_93 = YPPsym((P)"-");
  lit_94 = YPPsym((P)"when");
  lit_95 = YPPsym((P)"prefix?");
  lit_96 = YPsb((P)"%%bottom%%");
  lit_97 = YPsb((P)"%%top%%");
  lit_98 = YPPsym((P)"set");
  lit_99 = YPPsym((P)"num");
  T113 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1488_30 = YPmet(FUNCODEREF(fun_x_1488_30),LITREF(lit_79),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T114 = fun_32;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T114);
  lit_100 = YPPsym((P)"msg-src-loc");
  lit_101 = YPPlist(1,YPPsym((P)"f"));
  lit_102 = YPsb((P)" %s:%d");
  T115 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_msg_src_loc_33 = YPmet(FUNCODEREF(fun_msg_src_loc_33),LITREF(lit_100),T115,ENVNUL,PNUL,sloc(139));
  T118 = BOUNDP(YevalStopYmsg_src_loc);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalStopYmsg_src_loc);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_msg_src_loc_33;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalStopYmsg_src_loc,T116);
  lit_103 = YPPsym((P)"backtrace");
  lit_104 = YPPlist(1,YPPsym((P)"break"));
  lit_105 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_106 = YPsb((P)"[%=] %= %=");
  T122 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T122,ENVNUL,PNUL,sloc(146));
  T121 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T121,ENVNUL,PNUL,sloc(146));
  T120 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_36 = YPmet(FUNCODEREF(fun_backtrace_36),LITREF(lit_103),T120,ENVNUL,PNUL,sloc(145));
  T125 = BOUNDP(YevalStopYbacktrace);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalStopYbacktrace);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_backtrace_36;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalStopYbacktrace,T123);
  lit_107 = YPPsym((P)"frame");
  lit_108 = YPPlist(1,YPPsym((P)"n"));
  lit_109 = YPPlist(1,YPPsym((P)"break"));
  lit_110 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_111 = YPsb((P)"[%=] %= %=");
  T129 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T129,ENVNUL,PNUL,sloc(150));
  T128 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T128,ENVNUL,PNUL,sloc(150));
  T127 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_39 = YPmet(FUNCODEREF(fun_frame_39),LITREF(lit_107),T127,ENVNUL,PNUL,sloc(149));
  T132 = BOUNDP(YevalStopYframe);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalStopYframe);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_frame_39;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalStopYframe,T130);
  lit_112 = YPPsym((P)"frame-var");
  lit_113 = YPPlist(2,YPPsym((P)"n"),YPPsym((P)"name"));
  lit_114 = YPPlist(1,YPPsym((P)"ret"));
  lit_115 = YPPlist(1,YPPsym((P)"break"));
  lit_116 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  T137 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T137,ENVNUL,PNUL,sloc(156));
  T136 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T136,ENVNUL,PNUL,sloc(156));
  T135 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T135,ENVNUL,PNUL,sloc(155));
  T134 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_43 = YPmet(FUNCODEREF(fun_frame_var_43),LITREF(lit_112),T134,ENVNUL,PNUL,sloc(154));
  T140 = BOUNDP(YevalStopYframe_var);
  if (T140 != YPfalse) {
    T139 = VARREF(YevalStopYframe_var);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_frame_var_43;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YevalStopYframe_var,T138);
  lit_117 = YPPsym((P)"bt");
  lit_118 = YPPlist(1,YPPsym((P)"break"));
  lit_119 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_120 = YPsb((P)"[%=] %=");
  T144 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T144,ENVNUL,PNUL,sloc(163));
  T143 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T143,ENVNUL,PNUL,sloc(163));
  T142 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_46 = YPmet(FUNCODEREF(fun_bt_46),LITREF(lit_117),T142,ENVNUL,PNUL,sloc(162));
  T147 = BOUNDP(YevalStopYbt);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalStopYbt);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_bt_46;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalStopYbt,T145);
  lit_121 = YPPsym((P)"do-restart");
  lit_122 = YPPlist(2,YPPsym((P)"restarts"),YPPsym((P)"n"));
  lit_123 = YPsb((P)"No restarts available.\n");
  lit_124 = YPsb((P)"No restart #%d.\n");
  T149 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_121),T149,ENVNUL,PNUL,sloc(166));
  T150 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T150);
  VARSET(YevalStopYD,YPfalse);
  VARSET(YevalStopYDD,YPfalse);
  VARSET(YevalStopYDDD,YPfalse);
  lit_125 = YPPsym((P)"%%top%%top-in");
  lit_126 = YPPlist(5,YPPsym((P)"level"),YPPsym((P)"top"),YPPsym((P)"quit"),YPPsym((P)"show-restarts?"),YPPsym((P)"ct-env"));
  lit_127 = YPPlist(1,YPPsym((P)"blow"));
  lit_128 = YPPlist(1,YPPsym((P)"continue"));
  lit_129 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_130 = YPsb((P)"BREAK");
  lit_131 = YPsb((P)"ERROR: %s");
  lit_132 = YPsb((P)"Return to interpreter level %d");
  lit_133 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_134 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_135 = YPsb((P)"<= ");
  lit_136 = YPPlist(1,YPPsym((P)"return"));
  lit_137 = YPPsym((P)"x-1493");
  lit_138 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_139 = YPPlist(1,YPPsym((P)"return"));
  lit_140 = YPPsym((P)"x-1496");
  lit_141 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_142 = YPPlist(1,YPPsym((P)"return"));
  lit_143 = YPPsym((P)"x-1499");
  lit_144 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_145 = YPPlist(1,YPPsym((P)"return"));
  lit_146 = YPPsym((P)"x-1502");
  lit_147 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_148 = YPPlist(1,YPPsym((P)"return"));
  lit_149 = YPPsym((P)"x-1505");
  lit_150 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_151 = YPPlist(1,YPPsym((P)"return"));
  lit_152 = YPPsym((P)"x-1508");
  lit_153 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_154 = YPPlist(1,YPPsym((P)"return"));
  lit_155 = YPPsym((P)"x-1511");
  lit_156 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_157 = YPPlist(1,YPPsym((P)"return"));
  lit_158 = YPPsym((P)"x-1514");
  lit_159 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_160 = YPPlist(1,YPPsym((P)"return"));
  lit_161 = YPPsym((P)"x-1517");
  lit_162 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_163 = YPPlist(1,YPPsym((P)"return"));
  lit_164 = YPPsym((P)"x-1520");
  lit_165 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_166 = YPPlist(1,YPPsym((P)"return"));
  lit_167 = YPPsym((P)"x-1523");
  lit_168 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_169 = YPPlist(1,YPPsym((P)"return"));
  lit_170 = YPPsym((P)"x-1526");
  lit_171 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_172 = YPPlist(1,YPPsym((P)"return"));
  lit_173 = YPPsym((P)"x-1529");
  lit_174 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_175 = YPPlist(1,YPPsym((P)"return"));
  lit_176 = YPPsym((P)"x-1532");
  lit_177 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_178 = YPsb((P)"=> ");
  lit_179 = YPPsym((P)"cmd_frame-var");
  lit_180 = YPsb((P)"=> ");
  lit_181 = YPPsym((P)"cmd_frame");
  lit_182 = YPPsym((P)"cmd_backtrace");
  lit_183 = YPPsym((P)"cmd_bt");
  lit_184 = YPPsym((P)"cmd_auto-eval");
  lit_185 = YPPsym((P)"cmd_ast-eval");
  lit_186 = YPPsym((P)"cmd_g2c-eval");
  lit_187 = YPPsym((P)"cmd_in");
  lit_188 = YPPsym((P)"cmd_restart");
  lit_189 = YPPsym((P)"cmd_restarts");
  lit_190 = YPPsym((P)"cmd_handlers");
  lit_191 = YPPsym((P)"cmd_top");
  lit_192 = YPPsym((P)"cmd_up");
  lit_193 = YPPsym((P)"cmd_quit");
  T188 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T188,ENVNUL,PNUL,YPfalse);
  T187 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T187,ENVNUL,PNUL,sloc(185));
  T186 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T185,ENVNUL,PNUL,sloc(196));
  T184 = YPsig(LITREF(lit_177),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1532_52 = YPmet(FUNCODEREF(fun_x_1532_52),LITREF(lit_176),T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1529_54 = YPmet(FUNCODEREF(fun_x_1529_54),LITREF(lit_173),T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1526_56 = YPmet(FUNCODEREF(fun_x_1526_56),LITREF(lit_170),T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1523_58 = YPmet(FUNCODEREF(fun_x_1523_58),LITREF(lit_167),T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1520_60 = YPmet(FUNCODEREF(fun_x_1520_60),LITREF(lit_164),T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1517_62 = YPmet(FUNCODEREF(fun_x_1517_62),LITREF(lit_161),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1514_64 = YPmet(FUNCODEREF(fun_x_1514_64),LITREF(lit_158),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1511_66 = YPmet(FUNCODEREF(fun_x_1511_66),LITREF(lit_155),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1508_68 = YPmet(FUNCODEREF(fun_x_1508_68),LITREF(lit_152),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1505_70 = YPmet(FUNCODEREF(fun_x_1505_70),LITREF(lit_149),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1502_72 = YPmet(FUNCODEREF(fun_x_1502_72),LITREF(lit_146),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1499_74 = YPmet(FUNCODEREF(fun_x_1499_74),LITREF(lit_143),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1496_76 = YPmet(FUNCODEREF(fun_x_1496_76),LITREF(lit_140),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1493_78 = YPmet(FUNCODEREF(fun_x_1493_78),LITREF(lit_137),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_136),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T156,ENVNUL,PNUL,sloc(197));
  T155 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T155,ENVNUL,PNUL,sloc(240));
  T154 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T154,ENVNUL,PNUL,sloc(183));
  T153 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_44),T153,ENVNUL,PNUL,sloc(182));
  T152 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T152,ENVNUL,PNUL,sloc(181));
  T151 = YPsig(LITREF(lit_126),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_85 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_85),LITREF(lit_125),T151,ENVNUL,PNUL,sloc(179));
  T191 = BOUNDP(YevalStopYPPtopPPtop_in);
  if (T191 != YPfalse) {
    T190 = VARREF(YevalStopYPPtopPPtop_in);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_PPtopPPtop_in_85;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YevalStopYPPtopPPtop_in,T189);
  lit_194 = YPPsym((P)"top");
  lit_195 = YPPlist(1,YPPsym((P)"modname"));
  lit_196 = YPPlist(1,YPPsym((P)"quit"));
  lit_197 = YPsb((P)"Exit the top-level interpreter");
  lit_198 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_199 = YPPlist(1,YPPsym((P)"top"));
  T199 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T199,ENVNUL,PNUL,YPfalse);
  T198 = YPsig(LITREF(lit_198),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T198,ENVNUL,PNUL,sloc(247));
  T197 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T197,ENVNUL,PNUL,sloc(249));
  T196 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_44),T196,ENVNUL,PNUL,sloc(248));
  T195 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T195,ENVNUL,PNUL,sloc(251));
  T194 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T194,ENVNUL,PNUL,sloc(244));
  T193 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_92 = YPmet(FUNCODEREF(fun_top_92),LITREF(lit_194),T193,ENVNUL,PNUL,sloc(243));
  T202 = BOUNDP(YevalStopYtop);
  if (T202 != YPfalse) {
    T201 = VARREF(YevalStopYtop);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_top_92;
  T200 = XCALL2(1,VARREF(YPdefine_method),T201,T203);
  VARSET(YevalStopYtop,T200);
  lit_200 = YPPsym((P)"save-image");
  lit_201 = YPPlist(1,YPPsym((P)"image-name"));
  lit_202 = YPPsym((P)"goo/user");
  T205 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T205,ENVNUL,PNUL,sloc(254));
  T204 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_200),T204,ENVNUL,PNUL,sloc(253));
  T206 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T206);
  T207 = YPfalse;
  return T207;
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
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;

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
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"atan", &module_info_gooSmath, "atan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"elt!", &module_info_gooScolsScolx, "elt!"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"if", &module_info_gooSboot, "if"},
  {"def-list", &module_info_gooScolsSlst, "def-list"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, "sexpr-function-definition-adjectives"},
  {"1-", &module_info_gooSmath, "1-"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"try", &module_info_gooSboot, "try"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"src-loc-line", &module_info_gooSboot, "src-loc-line"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%binding-value-of", &module_info_evalSast_eval, "%binding-value-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"-", &module_info_gooSmath, "-"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"find", &module_info_gooScolsScol, "find"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"t?", &module_info_gooStypes, "t?"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"==", &module_info_gooSmacros, "=="},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"time", &module_info_gooSsystem, "time"},
  {"len", &module_info_gooStypes, "len"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"dl", &module_info_gooSboot, "dl"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"ast-error", &module_info_evalSdependency, "ast-error"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"case", &module_info_gooSmacros, "case"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%met", &module_info_gooSboot, "%met"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"match", &module_info_gooSmacros, "match"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"$e", &module_info_gooSmath, "$e"},
  {"^", &module_info_gooSmath, "^"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"~=", &module_info_gooSmath, "~="},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"rep", &module_info_gooSboot, "rep"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"tail", &module_info_gooSboot, "tail"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"df", &module_info_gooSboot, "df"},
  {"close", &module_info_gooSioSport, "close"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"%im", &module_info_gooSboot, "%im"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"t=", &module_info_gooStypes, "t="},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {"max", &module_info_gooSmag, "max"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"logn", &module_info_gooSmath, "logn"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"dc", &module_info_gooSboot, "dc"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"loc", &module_info_gooSboot, "loc"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"until", &module_info_gooSmacros, "until"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"min", &module_info_gooSmag, "min"},
  {"choose-handler", &module_info_gooSconditions, "choose-handler"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, "build-condition-for-handler-interactively"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"default-handler-description", &module_info_gooSconditions, "default-handler-description"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"open", &module_info_gooSioSport, "open"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"below", &module_info_gooScolsSseq, "below"},
  {">>", &module_info_gooSmath, ">>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"%binding-value-of-setter", &module_info_evalSast_eval, "%binding-value-of-setter"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"+", &module_info_gooSmath, "+"},
  {"=", &module_info_gooSmath, "="},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"esc", &module_info_gooSboot, "esc"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"module-uses-c-libraries", &module_info_evalSast, "module-uses-c-libraries"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<=", &module_info_gooSmag, "<="},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"mod", &module_info_gooSmath, "mod"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"read", &module_info_gooSconditions, "read"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"program-bindings", &module_info_evalSast_linearize, "program-bindings"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"describe-handler", &module_info_gooSconditions, "describe-handler"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"log", &module_info_gooSmath, "log"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"*current-handlers*", &module_info_gooSconditions, "*current-handlers*"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"invoke-handler-interactively", &module_info_gooSconditions, "invoke-handler-interactively"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun", &module_info_gooSboot, "fun"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"<directory-error>", &module_info_gooSsystem, "<directory-error>"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"not", &module_info_gooSboot, "not"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"round", &module_info_gooSmath, "round"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"/", &module_info_gooSmath, "/"},
  {"def", &module_info_gooSboot, "def"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"col", &module_info_gooScolsScol, "col"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"new", &module_info_gooSboot, "new"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"tan", &module_info_gooSmath, "tan"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"always", &module_info_gooSruntime, "always"},
  {"~", &module_info_gooSmath, "~"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"div", &module_info_gooSmath, "div"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"%binding-bound-of?", &module_info_evalSast_eval, "%binding-bound-of?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"as", &module_info_gooStypes, "as"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"list-handlers", &module_info_gooSconditions, "list-handlers"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"program-line", &module_info_evalSast, "program-line"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"ct", &module_info_gooSboot, "ct"},
  {"in", &module_info_gooSioSport, "in"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"@<", &module_info_gooSboot, "@<"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"%src-loc", &module_info_gooSboot, "%src-loc"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"last", &module_info_gooSmacros, "last"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"put", &module_info_gooSioSport, "put"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"out", &module_info_gooSioSport, "out"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"op", &module_info_gooSmacros, "op"},
  {"*", &module_info_gooSmath, "*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"&", &module_info_gooSmath, "&"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"dss", &module_info_gooSboot, "dss"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"tup", &module_info_gooSboot, "tup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"export", &module_info_gooSboot, "export"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"build-condition-interactively", &module_info_gooSconditions, "build-condition-interactively"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"or", &module_info_gooSmacros, "or"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<pathname-error>", &module_info_gooSsystem, "<pathname-error>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"and", &module_info_gooSmacros, "and"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"read-file", CVAR, &YevalStopYread_file},
  {"frame", CVAR, &YevalStopYframe},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"load-file", CVAR, &YevalStopYload_file},
  {"parse", CVAR, &YevalStopYparse},
  {"msg-src-loc", CVAR, &YevalStopYmsg_src_loc},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"load", CVAR, &YevalStopYload},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"esctst", CVAR, &YevalStopYesctst},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"$", CVAR, &YevalStopYD},
  {"bt", CVAR, &YevalStopYbt},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"run", DVAR, &YevalStopYrun},
  {"for-frames", PVAR, NULL},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"for-user-frames", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"$$", CVAR, &YevalStopYDD},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"$$$", CVAR, &YevalStopYDDD},
  {"top", CVAR, &YevalStopYtop},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"read-file", "read-file"},
  {"g2c-eval", "g2c-eval"},
  {"frame", "frame"},
  {"load-file", "load-file"},
  {"frame-var", "frame-var"},
  {"do-stack-frames", "do-stack-frames"},
  {"esctst", "esctst"},
  {"top", "top"},
  {"load", "load"},
  {"bt", "bt"},
  {"backtrace", "backtrace"},
  {"parse-in", "parse-in"},
  {"eval", "eval"},
  {"$$", "$$"},
  {"save-image", "save-image"},
  {"$$$", "$$$"},
  {"$", "$"},
  {"auto-eval", "auto-eval"},
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
