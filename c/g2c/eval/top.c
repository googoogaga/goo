/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/top */

EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
DEF(YevalStopYLkeyboard_interruptG,"eval/top","<keyboard-interrupt>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
DEF(YevalStopYtop,"eval/top","top");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLproductG,"goo/boot","<product>");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalStopYload,"eval/top","load");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalStopYframe,"eval/top","frame");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YevalStopYrun,"eval/top","run");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
DEF(YevalStopYparse,"eval/top","parse");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(Ynot,"goo/boot","not");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalStopYload_file,"eval/top","load-file");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YtT,"goo/boot","t*");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_141);
DEFLIT(lit_28);
DEFLIT(lit_57);
DEFLIT(lit_81);
DEFLIT(lit_82);
DEFLIT(lit_6);
DEFLIT(lit_112);
DEFLIT(lit_53);
DEFLIT(lit_21);
DEFLIT(lit_116);
DEFLIT(lit_77);
DEFLIT(lit_10);
DEFLIT(lit_94);
DEFLIT(lit_52);
DEFLIT(lit_72);
DEFLIT(lit_125);
DEFLIT(lit_98);
DEFLIT(lit_48);
DEFLIT(lit_120);
DEFLIT(lit_140);
DEFLIT(lit_101);
DEFLIT(lit_128);
DEFLIT(lit_4);
DEFLIT(lit_68);
DEFLIT(lit_65);
DEFLIT(lit_132);
DEFLIT(lit_67);
DEFLIT(lit_103);
DEFLIT(lit_36);
DEFLIT(lit_136);
DEFLIT(lit_42);
DEFLIT(lit_131);
DEFLIT(lit_63);
DEFLIT(lit_89);
DEFLIT(lit_78);
DEFLIT(lit_11);
DEFLIT(lit_109);
DEFLIT(lit_62);
DEFLIT(lit_49);
DEFLIT(lit_56);
DEFLIT(lit_142);
DEFLIT(lit_22);
DEFLIT(lit_107);
DEFLIT(lit_118);
DEFLIT(lit_45);
DEFLIT(lit_66);
DEFLIT(lit_124);
DEFLIT(lit_108);
DEFLIT(lit_96);
DEFLIT(lit_26);
DEFLIT(lit_115);
DEFLIT(lit_70);
DEFLIT(lit_110);
DEFLIT(lit_91);
DEFLIT(lit_117);
DEFLIT(lit_3);
DEFLIT(lit_138);
DEFLIT(lit_97);
DEFLIT(lit_130);
DEFLIT(lit_143);
DEFLIT(lit_14);
DEFLIT(lit_8);
DEFLIT(lit_84);
DEFLIT(lit_76);
DEFLIT(lit_100);
DEFLIT(lit_92);
DEFLIT(lit_16);
DEFLIT(lit_17);
DEFLIT(lit_33);
DEFLIT(lit_18);
DEFLIT(lit_46);
DEFLIT(lit_61);
DEFLIT(lit_1);
DEFLIT(lit_20);
DEFLIT(lit_39);
DEFLIT(lit_64);
DEFLIT(lit_13);
DEFLIT(lit_133);
DEFLIT(lit_34);
DEFLIT(lit_50);
DEFLIT(lit_105);
DEFLIT(lit_79);
DEFLIT(lit_119);
DEFLIT(lit_90);
DEFLIT(lit_126);
DEFLIT(lit_135);
DEFLIT(lit_60);
DEFLIT(lit_113);
DEFLIT(lit_86);
DEFLIT(lit_85);
DEFLIT(lit_83);
DEFLIT(lit_43);
DEFLIT(lit_58);
DEFLIT(lit_27);
DEFLIT(lit_137);
DEFLIT(lit_145);
DEFLIT(lit_69);
DEFLIT(lit_104);
DEFLIT(lit_35);
DEFLIT(lit_38);
DEFLIT(lit_114);
DEFLIT(lit_74);
DEFLIT(lit_12);
DEFLIT(lit_32);
DEFLIT(lit_139);
DEFLIT(lit_134);
DEFLIT(lit_95);
DEFLIT(lit_123);
DEFLIT(lit_37);
DEFLIT(lit_122);
DEFLIT(lit_47);
DEFLIT(lit_111);
DEFLIT(lit_71);
DEFLIT(lit_5);
DEFLIT(lit_93);
DEFLIT(lit_15);
DEFLIT(lit_144);
DEFLIT(lit_29);
DEFLIT(lit_23);
DEFLIT(lit_121);
DEFLIT(lit_44);
DEFLIT(lit_24);
DEFLIT(lit_129);
DEFLIT(lit_41);
DEFLIT(lit_106);
DEFLIT(lit_99);
DEFLIT(lit_40);
DEFLIT(lit_30);
DEFLIT(lit_73);
DEFLIT(lit_19);
DEFLIT(lit_80);
DEFLIT(lit_55);
DEFLIT(lit_51);
DEFLIT(lit_127);
DEFLIT(lit_87);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_31);
DEFLIT(lit_54);
DEFLIT(lit_75);
DEFLIT(lit_9);
DEFLIT(lit_25);
DEFLIT(lit_88);
DEFLIT(lit_59);
DEFLIT(lit_0);
DEFLIT(lit_102);

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
LOCFOR(fun_x_3200_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_3204_30);
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
LOCFOR(fun_x_3243_52);
LOCFOR(fun_53);
LOCFOR(fun_x_3240_54);
LOCFOR(fun_55);
LOCFOR(fun_x_3237_56);
LOCFOR(fun_57);
LOCFOR(fun_x_3234_58);
LOCFOR(fun_59);
LOCFOR(fun_x_3231_60);
LOCFOR(fun_61);
LOCFOR(fun_x_3228_62);
LOCFOR(fun_63);
LOCFOR(fun_x_3225_64);
LOCFOR(fun_65);
LOCFOR(fun_x_3222_66);
LOCFOR(fun_67);
LOCFOR(fun_x_3219_68);
LOCFOR(fun_69);
LOCFOR(fun_x_3216_70);
LOCFOR(fun_71);
LOCFOR(fun_x_3213_72);
LOCFOR(fun_73);
LOCFOR(fun_x_3210_74);
LOCFOR(fun_75);
LOCFOR(fun_x_3207_76);
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
  P astF7887;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF7887 = T1;
  T2 = CALL2(1,VARREF(YevalStopYrun),astF7887,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF7889;
  P oF7888;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF7888 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF7888);
  eF7889 = T3;
  T2 = eF7889;
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
  P xF7890;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF7890 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF7890);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF7890,forms_);
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
  P loopF7891;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF7891 = T2;
  FUNINIT(loopF7891, 2,FREEREF(0),loopF7891);
  T3 = CALL1(0,loopF7891,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF7892;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF7892 = T1;
  if (tmpF7892 != YPfalse) {
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
  P portF7893;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF7893 = YPfalse;
  portF7893 = BOXFAB(portF7893);
  T3 = FUNFAB(fun_18,2,portF7893,filename_);
  T4 = FUNFAB(fun_19,1,portF7893);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF7895;
  P xF7894;
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
    xF7894 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF7894,ct_env_,YPfalse);
    oF7895 = T6;
    T7 = CALL2(1,VARREF(YevalStopYrun),oF7895,ct_env_);
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
  P realfileF7896;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF7896 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF7896);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_38),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF7896,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF7900;
  P arg_strF7899;
  P tmpF7898;
  P formF7897;
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
  formF7897 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF7897,VARREF(YLlstG));
  tmpF7898 = T6;
  if (tmpF7898 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF7897);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_44));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF7899 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_45),arg_strF7899,LITREF(lit_46));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF7900 = T13;
    T17 = CALL1(1,VARREF(YgooStypesY2nd),formF7897);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_47),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF7900);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF7897;
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

FUNCODEDEF(fun_x_3200_27) {
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
  P x_3199F7913;
  P x_3199F7912;
  P x_3199F7911;
  P x_3199F7910;
  P x_3199F7909;
  P x_3199F7908;
  P x_3199F7907;
  P bodyF7906;
  P argsF7905;
  P fF7904;
  P numF7903;
  P x_3199F7902;
  P x_3200F7901;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3200_27,1);
  x_3200F7901 = T1;
  FUNINIT(x_3200F7901, 1,return_);
  x_3199F7902 = FREEREF(0);
  numF7903 = YPfalse;
  numF7903 = BOXFAB(numF7903);
  fF7904 = YPfalse;
  fF7904 = BOXFAB(fF7904);
  argsF7905 = YPfalse;
  argsF7905 = BOXFAB(argsF7905);
  bodyF7906 = YPfalse;
  bodyF7906 = BOXFAB(bodyF7906);
  T11 = CALL2(1,VARREF(YisaQ),x_3199F7902,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3199F7902,LITREF(lit_58),x_3200F7901);
    x_3199F7907 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3199F7907,x_3200F7901);
    x_3199F7908 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3199F7908,x_3200F7901);
    BOXVAL(numF7903) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_3199F7908);
    x_3199F7909 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3199F7909,x_3200F7901);
    BOXVAL(fF7904) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_3199F7909);
    x_3199F7910 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3199F7910,x_3200F7901);
    BOXVAL(argsF7905) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_3199F7910);
    x_3199F7911 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3199F7911,x_3200F7901);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_3199F7907);
    x_3199F7912 = T26;
    BOXVAL(bodyF7906) = x_3199F7912;
    x_3199F7913 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3199F7913,x_3200F7901);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_3200F7901,LITREF(lit_59),x_3199F7902);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T37 = BOXVAL(numF7903);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T48 = BOXVAL(fF7904);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T54 = BOXVAL(argsF7905);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF7906);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T64 = BOXVAL(numF7903);
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

FUNCODEDEF(fun_x_3204_30) {
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
  P x_3203F7926;
  P x_3203F7925;
  P x_3203F7924;
  P x_3203F7923;
  P x_3203F7922;
  P x_3203F7921;
  P x_3203F7920;
  P bodyF7919;
  P argsF7918;
  P fF7917;
  P numF7916;
  P x_3203F7915;
  P x_3204F7914;
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
  T1 = FUNSHELL(0,fun_x_3204_30,1);
  x_3204F7914 = T1;
  FUNINIT(x_3204F7914, 1,return_);
  x_3203F7915 = FREEREF(0);
  numF7916 = YPfalse;
  numF7916 = BOXFAB(numF7916);
  fF7917 = YPfalse;
  fF7917 = BOXFAB(fF7917);
  argsF7918 = YPfalse;
  argsF7918 = BOXFAB(argsF7918);
  bodyF7919 = YPfalse;
  bodyF7919 = BOXFAB(bodyF7919);
  T11 = CALL2(1,VARREF(YisaQ),x_3203F7915,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3203F7915,LITREF(lit_66),x_3204F7914);
    x_3203F7920 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3203F7920,x_3204F7914);
    x_3203F7921 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3203F7921,x_3204F7914);
    BOXVAL(numF7916) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_3203F7921);
    x_3203F7922 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3203F7922,x_3204F7914);
    BOXVAL(fF7917) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_3203F7922);
    x_3203F7923 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3203F7923,x_3204F7914);
    BOXVAL(argsF7918) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_3203F7923);
    x_3203F7924 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3203F7924,x_3204F7914);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_3203F7920);
    x_3203F7925 = T26;
    BOXVAL(bodyF7919) = x_3203F7925;
    x_3203F7926 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3203F7926,x_3204F7914);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_3204F7914,LITREF(lit_59),x_3203F7915);
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
  T50 = BOXVAL(fF7917);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(argsF7918);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T51,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T64 = BOXVAL(fF7917);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T73 = BOXVAL(fF7917);
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
  T79 = BOXVAL(numF7916);
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
  T101 = BOXVAL(bodyF7919);
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
  P numF7929;
  P UnameF7928;
  P argsF7927;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF7927 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF7928 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF7929 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF7928,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_87),numF7929,f_,argsF7927);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF7928,LITREF(lit_82));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF7929;
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
  P UnumF7932;
  P Utop_numF7931;
  P Useen_topF7930;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF7930 = YPfalse;
  Useen_topF7930 = BOXFAB(Useen_topF7930);
  Utop_numF7931 = YPint((P)0);
  Utop_numF7931 = BOXFAB(Utop_numF7931);
  UnumF7932 = YPint((P)0);
  UnumF7932 = BOXFAB(UnumF7932);
  T7 = FUNFAB(fun_33,4,UnumF7932,Utop_numF7931,Useen_topF7930,break_);
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
  P numF7935;
  P UnameF7934;
  P argsF7933;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF7933 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF7934 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF7935 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF7934,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF7935);
    if (T15 != YPfalse) {
      T16 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_90),numF7935,f_,argsF7933);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF7934,LITREF(lit_82));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF7935;
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
  P UnumF7938;
  P Utop_numF7937;
  P Useen_topF7936;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF7936 = YPfalse;
  Useen_topF7936 = BOXFAB(Useen_topF7936);
  Utop_numF7937 = YPint((P)0);
  Utop_numF7937 = BOXFAB(Utop_numF7937);
  UnumF7938 = YPint((P)0);
  UnumF7938 = BOXFAB(UnumF7938);
  T7 = FUNFAB(fun_36,5,UnumF7938,Utop_numF7937,Useen_topF7936,break_,FREEREF(0));
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
  P numF7941;
  P UnameF7940;
  P argsF7939;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF7939 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF7940 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF7941 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF7940,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF7941);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF7939,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF7940,LITREF(lit_82));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF7941;
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
  P UnumF7944;
  P Utop_numF7943;
  P Useen_topF7942;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF7942 = YPfalse;
  Useen_topF7942 = BOXFAB(Useen_topF7942);
  Utop_numF7943 = YPint((P)0);
  Utop_numF7943 = BOXFAB(Utop_numF7943);
  UnumF7944 = YPint((P)0);
  UnumF7944 = BOXFAB(UnumF7944);
  T7 = FUNFAB(fun_39,7,UnumF7944,Utop_numF7943,Useen_topF7942,break_,FREEREF(0),FREEREF(1),FREEREF(2));
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
  P numF7947;
  P UnameF7946;
  P argsF7945;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF7945 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_77);
  }
  UnameF7946 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF7947 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF7946,LITREF(lit_81));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_94),numF7947,f_);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF7946,LITREF(lit_82));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF7947;
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
  P UnumF7950;
  P Utop_numF7949;
  P Useen_topF7948;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF7948 = YPfalse;
  Useen_topF7948 = BOXFAB(Useen_topF7948);
  Utop_numF7949 = YPint((P)0);
  Utop_numF7949 = BOXFAB(Utop_numF7949);
  UnumF7950 = YPint((P)0);
  UnumF7950 = BOXFAB(UnumF7950);
  T7 = FUNFAB(fun_43,4,UnumF7950,Utop_numF7949,Useen_topF7948,break_);
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
  P tmpF7951;
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
  tmpF7951 = T4;
  if (tmpF7951 != YPfalse) {
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

FUNCODEDEF(fun_x_3243_52) {
  P msg_,args_;
  P resF7952;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF7952 = T2;
  T5 = BOXVAL(FREEREF(1));
  T4 = CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_127),resF7952);
  T1 = T4;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_3242F7959;
  P x_3242F7958;
  P x_3242F7957;
  P nameF7956;
  P nF7955;
  P x_3242F7954;
  P x_3243F7953;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3243_52,4);
  x_3243F7953 = T1;
  FUNINIT(x_3243F7953, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_3242F7954 = FREEREF(3);
  nF7955 = YPfalse;
  nF7955 = BOXFAB(nF7955);
  nameF7956 = YPfalse;
  nameF7956 = BOXFAB(nameF7956);
  T7 = CALL2(1,VARREF(YisaQ),x_3242F7954,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3242F7954,LITREF(lit_128),x_3243F7953);
    x_3242F7957 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3242F7957,x_3243F7953);
    BOXVAL(nF7955) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_3242F7957);
    x_3242F7958 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3242F7958,x_3243F7953);
    BOXVAL(nameF7956) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_3242F7958);
    x_3242F7959 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3242F7959,x_3243F7953);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_3243F7953,LITREF(lit_59),x_3242F7954);
  }
  T19 = BOXVAL(FREEREF(1));
  T21 = BOXVAL(nF7955);
  T22 = BOXVAL(nameF7956);
  T20 = CALL2(1,VARREF(YevalStopYframe_var),T21,T22);
  T18 = CALL4(1,VARREF(YevalStopYprint_result_expression),T19,FREEREF(2),LITREF(lit_129),T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3240_54) {
  P msg_,args_;
  P x_3241F7960;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3241F7960 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_3241F7960);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_3239F7965;
  P x_3239F7964;
  P nF7963;
  P x_3239F7962;
  P x_3240F7961;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3240_54,5);
  x_3240F7961 = T1;
  FUNINIT(x_3240F7961, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_3239F7962 = FREEREF(0);
  nF7963 = YPfalse;
  nF7963 = BOXFAB(nF7963);
  T5 = CALL2(1,VARREF(YisaQ),x_3239F7962,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3239F7962,LITREF(lit_130),x_3240F7961);
    x_3239F7964 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3239F7964,x_3240F7961);
    BOXVAL(nF7963) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_3239F7964);
    x_3239F7965 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3239F7965,x_3240F7961);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_3240F7961,LITREF(lit_59),x_3239F7962);
  }
  T14 = BOXVAL(nF7963);
  T13 = CALL1(1,VARREF(YevalStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3237_56) {
  P msg_,args_;
  P x_3238F7966;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3238F7966 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_3238F7966,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_3236F7969;
  P x_3236F7968;
  P x_3237F7967;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3237_56,5);
  x_3237F7967 = T1;
  FUNINIT(x_3237F7967, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_3236F7968 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3236F7968,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3236F7968,LITREF(lit_131),x_3237F7967);
    x_3236F7969 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3236F7969,x_3237F7967);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3237F7967,LITREF(lit_59),x_3236F7968);
  }
  T8 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3234_58) {
  P msg_,args_;
  P x_3235F7970;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3235F7970 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_3235F7970,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_3233F7973;
  P x_3233F7972;
  P x_3234F7971;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3234_58,5);
  x_3234F7971 = T1;
  FUNINIT(x_3234F7971, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_3233F7972 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3233F7972,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3233F7972,LITREF(lit_132),x_3234F7971);
    x_3233F7973 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3233F7973,x_3234F7971);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3234F7971,LITREF(lit_59),x_3233F7972);
  }
  T8 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3231_60) {
  P msg_,args_;
  P x_3232F7974;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3232F7974 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_3232F7974,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_3230F7977;
  P x_3230F7976;
  P x_3231F7975;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3231_60,5);
  x_3231F7975 = T1;
  FUNINIT(x_3231F7975, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_3230F7976 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3230F7976,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3230F7976,LITREF(lit_133),x_3231F7975);
    x_3230F7977 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3230F7977,x_3231F7975);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3231F7975,LITREF(lit_59),x_3230F7976);
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

FUNCODEDEF(fun_x_3228_62) {
  P msg_,args_;
  P x_3229F7978;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3229F7978 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_3229F7978,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_3227F7981;
  P x_3227F7980;
  P x_3228F7979;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3228_62,5);
  x_3228F7979 = T1;
  FUNINIT(x_3228F7979, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_3227F7980 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3227F7980,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3227F7980,LITREF(lit_134),x_3228F7979);
    x_3227F7981 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3227F7981,x_3228F7979);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3228F7979,LITREF(lit_59),x_3227F7980);
  }
  T8 = VARSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3225_64) {
  P msg_,args_;
  P x_3226F7982;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3226F7982 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_3226F7982,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_3224F7985;
  P x_3224F7984;
  P x_3225F7983;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3225_64,5);
  x_3225F7983 = T1;
  FUNINIT(x_3225F7983, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_3224F7984 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3224F7984,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3224F7984,LITREF(lit_135),x_3225F7983);
    x_3224F7985 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3224F7985,x_3225F7983);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3225F7983,LITREF(lit_59),x_3224F7984);
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

FUNCODEDEF(fun_x_3222_66) {
  P msg_,args_;
  P x_3223F7986;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3223F7986 = FREEREF(0);
  T3 = FUNFAB(fun_65,4,x_3223F7986,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P new_envF7992;
  P x_3221F7991;
  P x_3221F7990;
  P mF7989;
  P x_3221F7988;
  P x_3222F7987;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3222_66,5);
  x_3222F7987 = T1;
  FUNINIT(x_3222F7987, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_3221F7988 = FREEREF(0);
  mF7989 = YPfalse;
  mF7989 = BOXFAB(mF7989);
  T5 = CALL2(1,VARREF(YisaQ),x_3221F7988,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3221F7988,LITREF(lit_136),x_3222F7987);
    x_3221F7990 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3221F7990,x_3222F7987);
    BOXVAL(mF7989) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_3221F7990);
    x_3221F7991 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3221F7991,x_3222F7987);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_3222F7987,LITREF(lit_59),x_3221F7988);
  }
  T15 = BOXVAL(mF7989);
  T14 = CALL1(1,VARREF(YevalSastYruntime_environment),T15);
  new_envF7992 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF7992;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3219_68) {
  P msg_,args_;
  P x_3220F7993;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3220F7993 = FREEREF(0);
  T3 = FUNFAB(fun_67,4,x_3220F7993,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_3218F7998;
  P x_3218F7997;
  P nF7996;
  P x_3218F7995;
  P x_3219F7994;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3219_68,5);
  x_3219F7994 = T1;
  FUNINIT(x_3219F7994, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_3218F7995 = FREEREF(0);
  nF7996 = YPfalse;
  nF7996 = BOXFAB(nF7996);
  T5 = CALL2(1,VARREF(YisaQ),x_3218F7995,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3218F7995,LITREF(lit_137),x_3219F7994);
    x_3218F7997 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3218F7997,x_3219F7994);
    BOXVAL(nF7996) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_3218F7997);
    x_3218F7998 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3218F7998,x_3219F7994);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_3219F7994,LITREF(lit_59),x_3218F7995);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF7996);
  T13 = CALL2(1,VARREF(YevalStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3216_70) {
  P msg_,args_;
  P x_3217F7999;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3217F7999 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_3217F7999,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_3215F8002;
  P x_3215F8001;
  P x_3216F8000;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3216_70,6);
  x_3216F8000 = T1;
  FUNINIT(x_3216F8000, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_3215F8001 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3215F8001,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3215F8001,LITREF(lit_138),x_3216F8000);
    x_3215F8002 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3215F8002,x_3216F8000);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3216F8000,LITREF(lit_59),x_3215F8001);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3213_72) {
  P msg_,args_;
  P x_3214F8003;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3214F8003 = FREEREF(0);
  T3 = FUNFAB(fun_71,5,x_3214F8003,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_3212F8006;
  P x_3212F8005;
  P x_3213F8004;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3213_72,6);
  x_3213F8004 = T1;
  FUNINIT(x_3213F8004, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_3212F8005 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3212F8005,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3212F8005,LITREF(lit_139),x_3213F8004);
    x_3212F8006 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3212F8006,x_3213F8004);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3213F8004,LITREF(lit_59),x_3212F8005);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3210_74) {
  P msg_,args_;
  P x_3211F8007;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3211F8007 = FREEREF(0);
  T3 = FUNFAB(fun_73,5,x_3211F8007,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_3209F8010;
  P x_3209F8009;
  P x_3210F8008;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3210_74,6);
  x_3210F8008 = T1;
  FUNINIT(x_3210F8008, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_3209F8009 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3209F8009,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3209F8009,LITREF(lit_140),x_3210F8008);
    x_3209F8010 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3209F8010,x_3210F8008);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3210F8008,LITREF(lit_59),x_3209F8009);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3207_76) {
  P msg_,args_;
  P x_3208F8011;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_3208F8011 = FREEREF(0);
  T3 = FUNFAB(fun_75,6,x_3208F8011,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_3206F8014;
  P x_3206F8013;
  P x_3207F8012;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3207_76,7);
  x_3207F8012 = T1;
  FUNINIT(x_3207F8012, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_3206F8013 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_3206F8013,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3206F8013,LITREF(lit_141),x_3207F8012);
    x_3206F8014 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3206F8014,x_3207F8012);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_3207F8012,LITREF(lit_59),x_3206F8013);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P x_3205F8016;
  P formF8015;
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
  formF8015 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF8015,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_3205F8016 = formF8015;
    T12 = FUNFAB(fun_77,7,x_3205F8016,formF8015,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(4));
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
  P loopF8017;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_81,8);
  loopF8017 = T1;
  FUNINIT(loopF8017, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF8017);
  T2 = CALL0(0,loopF8017);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_83) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF8018;
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
  restartsF8018 = YPfalse;
  restartsF8018 = BOXFAB(restartsF8018);
  T5 = FUNFAB(fun_82,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF8018);
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
  P loopF8019;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_87,3);
  loopF8019 = T1;
  FUNINIT(loopF8019, 3,FREEREF(0),FREEREF(1),loopF8019);
  T2 = CALL0(0,loopF8019);
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
  lit_55 = YPPsym((P)"x-3200");
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
  fun_x_3200_27 = YPmet(FUNCODEREF(fun_x_3200_27),LITREF(lit_55),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T101 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T101);
  lit_65 = YPPsym((P)"x-3204");
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
  fun_x_3204_30 = YPmet(FUNCODEREF(fun_x_3204_30),LITREF(lit_65),T104,ENVNUL,PNUL,YPfalse);
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
  lit_112 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_113 = YPsb((P)"<= ");
  lit_114 = YPPsym((P)"x-3207");
  lit_115 = YPPsym((P)"x-3210");
  lit_116 = YPPsym((P)"x-3213");
  lit_117 = YPPsym((P)"x-3216");
  lit_118 = YPPsym((P)"x-3219");
  lit_119 = YPPsym((P)"x-3222");
  lit_120 = YPPsym((P)"x-3225");
  lit_121 = YPPsym((P)"x-3228");
  lit_122 = YPPsym((P)"x-3231");
  lit_123 = YPPsym((P)"x-3234");
  lit_124 = YPPsym((P)"x-3237");
  lit_125 = YPPsym((P)"x-3240");
  lit_126 = YPPsym((P)"x-3243");
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
  fun_x_3243_52 = YPmet(FUNCODEREF(fun_x_3243_52),LITREF(lit_126),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3240_54 = YPmet(FUNCODEREF(fun_x_3240_54),LITREF(lit_125),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3237_56 = YPmet(FUNCODEREF(fun_x_3237_56),LITREF(lit_124),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3234_58 = YPmet(FUNCODEREF(fun_x_3234_58),LITREF(lit_123),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3231_60 = YPmet(FUNCODEREF(fun_x_3231_60),LITREF(lit_122),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3228_62 = YPmet(FUNCODEREF(fun_x_3228_62),LITREF(lit_121),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3225_64 = YPmet(FUNCODEREF(fun_x_3225_64),LITREF(lit_120),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3222_66 = YPmet(FUNCODEREF(fun_x_3222_66),LITREF(lit_119),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3219_68 = YPmet(FUNCODEREF(fun_x_3219_68),LITREF(lit_118),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3216_70 = YPmet(FUNCODEREF(fun_x_3216_70),LITREF(lit_117),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3213_72 = YPmet(FUNCODEREF(fun_x_3213_72),LITREF(lit_116),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3210_74 = YPmet(FUNCODEREF(fun_x_3210_74),LITREF(lit_115),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_54)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3207_76 = YPmet(FUNCODEREF(fun_x_3207_76),LITREF(lit_114),T148,ENVNUL,PNUL,YPfalse);
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
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSvec;

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
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {">", &module_info_gooSmag, ">"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"set", &module_info_gooSboot, "set"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find", &module_info_gooScolsScol, "find"},
  {"tan", &module_info_gooSmath, "tan"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"error", &module_info_gooSboot, "error"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"+", &module_info_gooSmath, "+"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"put", &module_info_gooSioSport, "put"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%im", &module_info_gooSboot, "%im"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"t?", &module_info_gooStypes, "t?"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"=", &module_info_gooSmath, "="},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"when", &module_info_gooSmacros, "when"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"%str", &module_info_gooSboot, "%str"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"items", &module_info_gooScolsScol, "items"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"<<", &module_info_gooSmath, "<<"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"|", &module_info_gooSmath, "|"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"~", &module_info_gooSmath, "~"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"rem", &module_info_gooSmath, "rem"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"if", &module_info_gooSboot, "if"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"round", &module_info_gooSmath, "round"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"mif", &module_info_gooSboot, "mif"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"dv", &module_info_gooSboot, "dv"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"~=", &module_info_gooSmath, "~="},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"esc", &module_info_gooSboot, "esc"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"nul", &module_info_gooSboot, "nul"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"t=", &module_info_gooStypes, "t="},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"in", &module_info_gooSioSport, "in"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"app", &module_info_gooSmacros, "app"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"close", &module_info_gooSioSport, "close"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"read", &module_info_gooSruntime, "read"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"max", &module_info_gooSmag, "max"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"log", &module_info_gooSmath, "log"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"add", &module_info_gooScolsScol, "add"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"&", &module_info_gooSmath, "&"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"logn", &module_info_gooSmath, "logn"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"export", &module_info_gooSboot, "export"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"application-function", &module_info_evalSast, "application-function"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"match", &module_info_gooSmacros, "match"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"always", &module_info_gooSruntime, "always"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"for", &module_info_gooSmacros, "for"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"df", &module_info_gooSboot, "df"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"abs", &module_info_gooSmath, "abs"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"*", &module_info_gooSmath, "*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {">=", &module_info_gooSmag, ">="},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {">>", &module_info_gooSmath, ">>"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"until", &module_info_gooSmacros, "until"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"open", &module_info_gooSioSport, "open"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"len", &module_info_gooStypes, "len"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"out", &module_info_gooSioSport, "out"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"<=", &module_info_gooSmag, "<="},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"op", &module_info_gooSmacros, "op"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"do", &module_info_gooSmacros, "do"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"^", &module_info_gooSmath, "^"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"now", &module_info_gooScolsScol, "now"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"@+", &module_info_gooSboot, "@+"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"do-stack-frames", &YevalStopYdo_stack_frames},
  {"esctst", &YevalStopYesctst},
  {"for-user-frames", NULL},
  {"<keyboard-interrupt>", &YevalStopYLkeyboard_interruptG},
  {"str-eval-in", &YevalStopYstr_eval_in},
  {"auto-run", &YevalStopYauto_run},
  {"bt", &YevalStopYbt},
  {"%%bottom%%g2c-run", &YevalStopYPPbottomPPg2c_run},
  {"%%bottom%%ast-run", &YevalStopYPPbottomPPast_run},
  {"auto-eval", &YevalStopYauto_eval},
  {"compiled-file?", &YevalStopYcompiled_fileQ},
  {"frame-var", &YevalStopYframe_var},
  {"parse-in", &YevalStopYparse_in},
  {"top", &YevalStopYtop},
  {"backtrace", &YevalStopYbacktrace},
  {"load", &YevalStopYload},
  {"frame", &YevalStopYframe},
  {"for-frames", NULL},
  {"run", &YevalStopYrun},
  {"str-eval", &YevalStopYstr_eval},
  {"str-parse", &YevalStopYstr_parse},
  {"parse", &YevalStopYparse},
  {"do-restart", &YevalStopYdo_restart},
  {"$g2c-eval?", &YevalStopYDg2c_evalQ},
  {"g2c-eval", &YevalStopYg2c_eval},
  {"eval-in", &YevalStopYeval_in},
  {"read-file", &YevalStopYread_file},
  {"load-file", &YevalStopYload_file},
  {"%%top%%top-in", &YevalStopYPPtopPPtop_in},
  {"---main-0---", NULL},
  {"save-image", &YevalStopYsave_image},
  {"prompt-for-command-expression", &YevalStopYprompt_for_command_expression},
  {"str-parse-in", &YevalStopYstr_parse_in},
  {"print-result-expression", &YevalStopYprint_result_expression},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"auto-eval", "auto-eval"},
  {"bt", "bt"},
  {"esctst", "esctst"},
  {"frame", "frame"},
  {"frame-var", "frame-var"},
  {"parse-in", "parse-in"},
  {"top", "top"},
  {"backtrace", "backtrace"},
  {"load", "load"},
  {"eval", "eval"},
  {"do-stack-frames", "do-stack-frames"},
  {"g2c-eval", "g2c-eval"},
  {"read-file", "read-file"},
  {"load-file", "load-file"},
  {"save-image", "save-image"},
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
