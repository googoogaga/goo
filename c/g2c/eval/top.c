/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/top");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/top */

EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalStopYD,"eval/top","$");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(Ytail,"goo/boot","tail");
DEF(YevalStopYtop,"eval/top","top");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YevalStopYmsg_src_loc,"eval/top","msg-src-loc");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
DEF(YevalStopYload,"eval/top","load");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalStopYparse_in,"eval/top","parse-in");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YOnew,"goo/boot","@new");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalStopYPPbottomPPvm_run,"eval/top","%%bottom%%vm-run");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DEF(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YOrev,"goo/boot","@rev");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
DEF(YevalStopYDD,"eval/top","$$");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSmathYT,"goo/math","*");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_29);
DEFLIT(lit_178);
DEFLIT(lit_80);
DEFLIT(lit_168);
DEFLIT(lit_148);
DEFLIT(lit_65);
DEFLIT(lit_137);
DEFLIT(lit_143);
DEFLIT(lit_202);
DEFLIT(lit_58);
DEFLIT(lit_13);
DEFLIT(lit_76);
DEFLIT(lit_131);
DEFLIT(lit_206);
DEFLIT(lit_184);
DEFLIT(lit_57);
DEFLIT(lit_75);
DEFLIT(lit_10);
DEFLIT(lit_33);
DEFLIT(lit_170);
DEFLIT(lit_4);
DEFLIT(lit_67);
DEFLIT(lit_25);
DEFLIT(lit_99);
DEFLIT(lit_138);
DEFLIT(lit_191);
DEFLIT(lit_173);
DEFLIT(lit_175);
DEFLIT(lit_104);
DEFLIT(lit_84);
DEFLIT(lit_90);
DEFLIT(lit_69);
DEFLIT(lit_23);
DEFLIT(lit_126);
DEFLIT(lit_185);
DEFLIT(lit_88);
DEFLIT(lit_140);
DEFLIT(lit_112);
DEFLIT(lit_139);
DEFLIT(lit_199);
DEFLIT(lit_32);
DEFLIT(lit_195);
DEFLIT(lit_142);
DEFLIT(lit_60);
DEFLIT(lit_123);
DEFLIT(lit_111);
DEFLIT(lit_2);
DEFLIT(lit_188);
DEFLIT(lit_107);
DEFLIT(lit_159);
DEFLIT(lit_121);
DEFLIT(lit_49);
DEFLIT(lit_156);
DEFLIT(lit_45);
DEFLIT(lit_190);
DEFLIT(lit_66);
DEFLIT(lit_113);
DEFLIT(lit_155);
DEFLIT(lit_51);
DEFLIT(lit_96);
DEFLIT(lit_54);
DEFLIT(lit_194);
DEFLIT(lit_63);
DEFLIT(lit_15);
DEFLIT(lit_172);
DEFLIT(lit_20);
DEFLIT(lit_157);
DEFLIT(lit_180);
DEFLIT(lit_36);
DEFLIT(lit_117);
DEFLIT(lit_149);
DEFLIT(lit_47);
DEFLIT(lit_174);
DEFLIT(lit_164);
DEFLIT(lit_132);
DEFLIT(lit_163);
DEFLIT(lit_151);
DEFLIT(lit_162);
DEFLIT(lit_34);
DEFLIT(lit_40);
DEFLIT(lit_136);
DEFLIT(lit_166);
DEFLIT(lit_182);
DEFLIT(lit_62);
DEFLIT(lit_133);
DEFLIT(lit_12);
DEFLIT(lit_87);
DEFLIT(lit_89);
DEFLIT(lit_72);
DEFLIT(lit_198);
DEFLIT(lit_130);
DEFLIT(lit_120);
DEFLIT(lit_116);
DEFLIT(lit_110);
DEFLIT(lit_48);
DEFLIT(lit_169);
DEFLIT(lit_161);
DEFLIT(lit_41);
DEFLIT(lit_19);
DEFLIT(lit_135);
DEFLIT(lit_103);
DEFLIT(lit_28);
DEFLIT(lit_77);
DEFLIT(lit_83);
DEFLIT(lit_105);
DEFLIT(lit_106);
DEFLIT(lit_73);
DEFLIT(lit_109);
DEFLIT(lit_7);
DEFLIT(lit_61);
DEFLIT(lit_27);
DEFLIT(lit_39);
DEFLIT(lit_193);
DEFLIT(lit_144);
DEFLIT(lit_71);
DEFLIT(lit_38);
DEFLIT(lit_68);
DEFLIT(lit_124);
DEFLIT(lit_50);
DEFLIT(lit_37);
DEFLIT(lit_114);
DEFLIT(lit_171);
DEFLIT(lit_56);
DEFLIT(lit_0);
DEFLIT(lit_134);
DEFLIT(lit_179);
DEFLIT(lit_119);
DEFLIT(lit_42);
DEFLIT(lit_128);
DEFLIT(lit_43);
DEFLIT(lit_160);
DEFLIT(lit_91);
DEFLIT(lit_187);
DEFLIT(lit_86);
DEFLIT(lit_6);
DEFLIT(lit_201);
DEFLIT(lit_26);
DEFLIT(lit_203);
DEFLIT(lit_11);
DEFLIT(lit_158);
DEFLIT(lit_115);
DEFLIT(lit_108);
DEFLIT(lit_186);
DEFLIT(lit_205);
DEFLIT(lit_97);
DEFLIT(lit_98);
DEFLIT(lit_141);
DEFLIT(lit_1);
DEFLIT(lit_101);
DEFLIT(lit_16);
DEFLIT(lit_177);
DEFLIT(lit_94);
DEFLIT(lit_22);
DEFLIT(lit_165);
DEFLIT(lit_46);
DEFLIT(lit_8);
DEFLIT(lit_153);
DEFLIT(lit_200);
DEFLIT(lit_82);
DEFLIT(lit_150);
DEFLIT(lit_167);
DEFLIT(lit_21);
DEFLIT(lit_92);
DEFLIT(lit_17);
DEFLIT(lit_196);
DEFLIT(lit_192);
DEFLIT(lit_129);
DEFLIT(lit_70);
DEFLIT(lit_154);
DEFLIT(lit_55);
DEFLIT(lit_31);
DEFLIT(lit_14);
DEFLIT(lit_30);
DEFLIT(lit_44);
DEFLIT(lit_183);
DEFLIT(lit_100);
DEFLIT(lit_53);
DEFLIT(lit_24);
DEFLIT(lit_122);
DEFLIT(lit_5);
DEFLIT(lit_95);
DEFLIT(lit_207);
DEFLIT(lit_118);
DEFLIT(lit_9);
DEFLIT(lit_85);
DEFLIT(lit_81);
DEFLIT(lit_74);
DEFLIT(lit_35);
DEFLIT(lit_125);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_204);
DEFLIT(lit_152);
DEFLIT(lit_78);
DEFLIT(lit_181);
DEFLIT(lit_64);
DEFLIT(lit_145);
DEFLIT(lit_93);
DEFLIT(lit_127);
DEFLIT(lit_102);
DEFLIT(lit_189);
DEFLIT(lit_79);
DEFLIT(lit_176);
DEFLIT(lit_52);
DEFLIT(lit_59);
DEFLIT(lit_147);
DEFLIT(lit_146);
DEFLIT(lit_197);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
FUNFOR(YevalStopYesctst);
LOCFOR(fun_parse_in_4);
LOCFOR(fun_parse_5);
LOCFOR(fun_str_parse_in_6);
LOCFOR(fun_str_parse_7);
FUNFOR(YevalStopYPPbottomPPvm_run);
FUNFOR(YevalStopYPPbottomPPast_run);
FUNFOR(YevalStopYPPbottomPPg2c_run);
FUNFOR(YevalStopYauto_run);
FUNFOR(YevalStopYauto_eval);
LOCFOR(fun_eval_in_13);
LOCFOR(fun_eval_14);
LOCFOR(fun_str_eval_in_15);
LOCFOR(fun_str_eval_16);
FUNFOR(YevalStopYcompiled_fileQ);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_read_file_20);
LOCFOR(fun_load_in_21);
LOCFOR(fun_load_file_22);
LOCFOR(fun_load_23);
LOCFOR(fun_prompt_for_command_expression_24);
LOCFOR(fun_print_result_expression_25);
LOCFOR(fun_do_stack_frames_26);
LOCFOR(fun_x_2383_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_2387_30);
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
LOCFOR(fun_x_2434_52);
LOCFOR(fun_53);
LOCFOR(fun_x_2431_54);
LOCFOR(fun_55);
LOCFOR(fun_x_2428_56);
LOCFOR(fun_57);
LOCFOR(fun_x_2425_58);
LOCFOR(fun_59);
LOCFOR(fun_x_2422_60);
LOCFOR(fun_61);
LOCFOR(fun_x_2419_62);
LOCFOR(fun_63);
LOCFOR(fun_x_2416_64);
LOCFOR(fun_65);
LOCFOR(fun_x_2413_66);
LOCFOR(fun_67);
LOCFOR(fun_x_2410_68);
LOCFOR(fun_69);
LOCFOR(fun_x_2407_70);
LOCFOR(fun_71);
LOCFOR(fun_x_2404_72);
LOCFOR(fun_73);
LOCFOR(fun_x_2401_74);
LOCFOR(fun_75);
LOCFOR(fun_x_2398_76);
LOCFOR(fun_77);
LOCFOR(fun_x_2395_78);
LOCFOR(fun_79);
LOCFOR(fun_x_2392_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_PPtopPPtop_in_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
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
  T0 = CALL1(1,FREEREF(0),LITREF(lit_3));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
LINK_STACK();
  CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(fun_2) {
  P exit_;
  P T0,T1;
LINK_STACK();
  ARG(exit_, 0);
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
  T1 = fun_2;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_in_4) {
  P s_,ct_env_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYread_from_string),s_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_5) {
  P s_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_6) {
  P s_,ct_env_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
  T1 = CALL2(1,VARREF(YevalStopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_16),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_7) {
  P s_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPvm_run) {
  P ast_,ct_env_;
  P T0;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
  T0 = CALL2(1,VARREF(YevalStopYvm_evaluate),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPast_run) {
  P ast_,ct_env_;
  P T0;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPg2c_run) {
  P ast_,ct_env_;
  P T0;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
  T0 = CALL2(1,VARREF(YevalStopYg2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYauto_run) {
  P ast_,ct_env_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YevalSastYast_contains_funQ),ast_);
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
  P astF9390;
  P T0,T1;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF9390 = T1;
  T0 = CALL2(1,DYNREF(YevalStopYrun),astF9390,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_13) {
  P x_,ct_env_;
  P eF9392;
  P oF9391;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF9391 = T1;
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),oF9391);
  eF9392 = T0;
UNLINK_STACK();
  QRET(eF9392);
}

FUNCODEDEF(fun_eval_14) {
  P x_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_15) {
  P x_,ct_env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
  T2 = CALL1(1,VARREF(YgooSioSreadYread_from_string),x_);
  T1 = CALL2(1,VARREF(YevalStopYeval_in),T2,ct_env_);
  T0 = CALL1(1,VARREF(YgooSioSwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_16) {
  P x_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYcompiled_fileQ) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_44));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P xF9394;
  P formsF9393;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  formsF9393 = Ynil;
  LOOP_441: {
    P a441_0;
    T8 = BOXGET(FREEREF(0));
    T7 = CALL1(1,VARREF(YgooSconditionsYread),T8);
    xF9394 = T7;
    T2 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF9394);
    if (T2 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF9393);
      T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
      T1 = T3;
    } else {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),xF9394,formsF9393);
      a441_0 = T6;
      formsF9393 = a441_0;
      goto LOOP_441;
      T1 = T5;
    }
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_file_20) {
  P filename_;
  P portF9395;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  portF9395 = YPfalse;
  portF9395 = BOXFAB(portF9395);
  T2 = FUNFAB(fun_18,2,portF9395,filename_);
  T3 = FUNFAB(fun_19,1,portF9395);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF9397;
  P xF9396;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YevalStopYcompiled_fileQ),filename_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYso_load),filename_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalStopYread_file),filename_);
    xF9396 = T5;
    T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF9396,ct_env_,YPfalse);
    oF9397 = T4;
    T3 = CALL2(1,DYNREF(YevalStopYrun),oF9397,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_file_22) {
  P filename_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalSastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_23) {
  P name_,modname_;
  P realfileF9398;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
  T3 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF9398 = T3;
  T0 = CALL1(1,VARREF(Ynot),realfileF9398);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T2 = CALL2(1,VARREF(YevalStopYload_file),realfileF9398,modname_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF9401;
  P arg_strF9400;
  P formF9399;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_55),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T13 = CALL1(1,VARREF(YgooSconditionsYread),VARREF(YgooSioSportYin));
  formF9399 = T13;
  T4 = CALL2(1,VARREF(YisaQ),formF9399,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yhead),formF9399);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_56));
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  if (T3 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF9400 = T12;
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_57),arg_strF9400,LITREF(lit_58));
    T10 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T11);
    argsF9401 = T10;
    T9 = CALL1(1,VARREF(YgooSmacrosY2nd),formF9399);
    T8 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_59),T9);
    T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,argsF9401);
    T2 = T7;
  } else {
    T2 = formF9399;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_25) {
  P env_,level_,label_,result_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_62),T0,level_,label_);
  T2 = CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_26) {
  P fun_;
  P T0;
LINK_STACK();
  ARG(fun_, 0);
  T0 = (P)YPdo_stack_frames(fun_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2383_27) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_69),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_2382F9418;
  P x_2382F9417;
  P x_2382F9416;
  P x_2382F9415;
  P x_2382F9414;
  P x_2382F9413;
  P x_2382F9412;
  P x_2382F9411;
  P x_2382F9410;
  P x_2382F9409;
  P x_2382F9408;
  P bodyF9407;
  P argsF9406;
  P fF9405;
  P numF9404;
  P x_2382F9403;
  P x_2383F9402;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
LINK_STACK();
  ARG(return_, 0);
  T58 = FUNSHELL(0,fun_x_2383_27,2);
  x_2383F9402 = T58;
  FUNINIT(x_2383F9402, 2,FREEREF(0),return_);
  x_2382F9403 = FREEREF(0);
  numF9404 = YPfalse;
  fF9405 = YPfalse;
  argsF9406 = YPfalse;
  bodyF9407 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_2382F9403,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2382F9403,LITREF(lit_69),x_2383F9402);
    x_2382F9408 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2382F9408,x_2383F9402);
    x_2382F9409 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2382F9409,x_2383F9402);
    numF9404 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_2382F9409);
    x_2382F9410 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2382F9410,x_2383F9402);
    fF9405 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2382F9410);
    x_2382F9411 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2382F9411,x_2383F9402);
    argsF9406 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2382F9411);
    x_2382F9412 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2382F9412,x_2383F9402);
    x_2382F9413 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2382F9413,x_2383F9402);
    T12 = CALL1(1,VARREF(Ytail),x_2382F9412);
    x_2382F9414 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2382F9414,x_2383F9402);
    T20 = CALL1(1,VARREF(Ytail),x_2382F9408);
    x_2382F9415 = T20;
    bodyF9407 = x_2382F9415;
    x_2382F9416 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2382F9416,x_2383F9402);
    x_2382F9417 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2382F9417,x_2383F9402);
    T8 = CALL1(1,VARREF(Ytail),x_2382F9416);
    x_2382F9418 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2382F9418,x_2383F9402);
  } else {
    T22 = CALL2(1,x_2383F9402,LITREF(lit_70),x_2382F9403);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T30 = numF9404;
  T29 = CALL1(1,VARREF(Ylst),T30);
  T31 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T31,LITREF(lit_72));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_72));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T41 = fF9405;
  T40 = CALL1(1,VARREF(Ylst),T41);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T42,LITREF(lit_72));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T47 = argsF9406;
  T46 = CALL1(1,VARREF(Ylst),T47);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_72));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T48,LITREF(lit_72));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T52 = bodyF9407;
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T57 = numF9404;
  T56 = CALL1(1,VARREF(Ylst),T57);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,LITREF(lit_72));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),6,T37,T38,T43,T52,T53,LITREF(lit_72));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_72));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T32,LITREF(lit_72));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_29) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_28,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2387_30) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_82),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P return_;
  P x_2386F9435;
  P x_2386F9434;
  P x_2386F9433;
  P x_2386F9432;
  P x_2386F9431;
  P x_2386F9430;
  P x_2386F9429;
  P x_2386F9428;
  P x_2386F9427;
  P x_2386F9426;
  P x_2386F9425;
  P bodyF9424;
  P argsF9423;
  P fF9422;
  P numF9421;
  P x_2386F9420;
  P x_2387F9419;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113;
LINK_STACK();
  ARG(return_, 0);
  T113 = FUNSHELL(0,fun_x_2387_30,2);
  x_2387F9419 = T113;
  FUNINIT(x_2387F9419, 2,FREEREF(0),return_);
  x_2386F9420 = FREEREF(0);
  numF9421 = YPfalse;
  fF9422 = YPfalse;
  argsF9423 = YPfalse;
  bodyF9424 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_2386F9420,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2386F9420,LITREF(lit_82),x_2387F9419);
    x_2386F9425 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2386F9425,x_2387F9419);
    x_2386F9426 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2386F9426,x_2387F9419);
    numF9421 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_2386F9426);
    x_2386F9427 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2386F9427,x_2387F9419);
    fF9422 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2386F9427);
    x_2386F9428 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2386F9428,x_2387F9419);
    argsF9423 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2386F9428);
    x_2386F9429 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2386F9429,x_2387F9419);
    x_2386F9430 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2386F9430,x_2387F9419);
    T12 = CALL1(1,VARREF(Ytail),x_2386F9429);
    x_2386F9431 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2386F9431,x_2387F9419);
    T20 = CALL1(1,VARREF(Ytail),x_2386F9425);
    x_2386F9432 = T20;
    bodyF9424 = x_2386F9432;
    x_2386F9433 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2386F9433,x_2387F9419);
    x_2386F9434 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2386F9434,x_2387F9419);
    T8 = CALL1(1,VARREF(Ytail),x_2386F9433);
    x_2386F9435 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2386F9435,x_2387F9419);
  } else {
    T22 = CALL2(1,x_2387F9419,LITREF(lit_70),x_2386F9420);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T30 = CALL1(1,VARREF(Ylst),YPfalse);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_72));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T35 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,LITREF(lit_72));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T43 = fF9422;
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = argsF9423;
  T44 = CALL1(1,VARREF(Ylst),T45);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T44,LITREF(lit_72));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T57 = fF9422;
  T56 = CALL1(1,VARREF(Ylst),T57);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,LITREF(lit_72));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T66 = fF9422;
  T65 = CALL1(1,VARREF(Ylst),T66);
  T63 = CALL3(1,VARREF(YgooSmacrosYcat),T64,T65,LITREF(lit_72));
  T62 = CALL1(1,VARREF(Ylst),T63);
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,LITREF(lit_72));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T51 = CALL5(1,VARREF(YgooSmacrosYcat),T52,T53,T58,T67,LITREF(lit_72));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_72));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T72 = numF9421;
  T71 = CALL1(1,VARREF(Ylst),T72);
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T74 = CALL4(1,VARREF(YgooSmacrosYcat),T75,T76,T77,LITREF(lit_72));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T73,LITREF(lit_72));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T87 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T88 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T86 = CALL4(1,VARREF(YgooSmacrosYcat),T87,T88,T89,LITREF(lit_72));
  T85 = CALL1(1,VARREF(Ylst),T86);
  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T93 = CALL1(1,VARREF(Ylst),YPfalse);
  T91 = CALL3(1,VARREF(YgooSmacrosYcat),T92,T93,LITREF(lit_72));
  T90 = CALL1(1,VARREF(Ylst),T91);
  T83 = CALL4(1,VARREF(YgooSmacrosYcat),T84,T85,T90,LITREF(lit_72));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T94 = bodyF9424;
  T79 = CALL5(1,VARREF(YgooSmacrosYcat),T80,T81,T82,T94,LITREF(lit_72));
  T78 = CALL1(1,VARREF(Ylst),T79);
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T100 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T101 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T102 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T99 = CALL4(1,VARREF(YgooSmacrosYcat),T100,T101,T102,LITREF(lit_72));
  T98 = CALL1(1,VARREF(Ylst),T99);
  T105 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T106 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T104 = CALL4(1,VARREF(YgooSmacrosYcat),T105,T106,T107,LITREF(lit_72));
  T103 = CALL1(1,VARREF(Ylst),T104);
  T110 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T111 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T112 = CALL1(1,VARREF(Ylst),YPtrue);
  T109 = CALL4(1,VARREF(YgooSmacrosYcat),T110,T111,T112,LITREF(lit_72));
  T108 = CALL1(1,VARREF(Ylst),T109);
  T96 = CALL5(1,VARREF(YgooSmacrosYcat),T97,T98,T103,T108,LITREF(lit_72));
  T95 = CALL1(1,VARREF(Ylst),T96);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),7,T38,T39,T46,T68,T78,T95,LITREF(lit_72));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T23 = CALLN(1,VARREF(YgooSmacrosYcat),6,T24,T25,T26,T31,T36,LITREF(lit_72));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_32) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_31,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_msg_src_loc_33) {
  P f_;
  P slF9436;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  T1 = CALL2(1,VARREF(YisaQ),f_,VARREF(YLmetG));
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(Yfun_src),f_);
    slF9436 = T7;
    T3 = CALL2(1,VARREF(YisaQ),slF9436,VARREF(YLsrc_locG));
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(Ysrc_loc_file),slF9436);
      T6 = CALL1(1,VARREF(Ysrc_loc_line),slF9436);
      T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_103),T5,T6);
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P f_,Uargs_;
  P numF9439;
  P UnameF9438;
  P argsF9437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF9437 = T16;
  T13 = CALL1(1,VARREF(Yfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(Yfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_93);
  }
  UnameF9438 = T12;
  T10 = BOXGET(FREEREF(0));
  T11 = BOXGET(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF9439 = T9;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF9438,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_107),numF9439,f_,argsF9437);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF9438,LITREF(lit_98));
  if (T4 != YPfalse) {
    BOXPUT(numF9439,FREEREF(1));
    T5 = BOXPUT(YPtrue,FREEREF(2));
  } else {
  }
  T8 = BOXGET(FREEREF(0));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXPUT(T7,FREEREF(0));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_35) {
  P break_;
  P UnumF9442;
  P Utop_numF9441;
  P Useen_topF9440;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF9440 = YPfalse;
  Useen_topF9440 = BOXFAB(Useen_topF9440);
  Utop_numF9441 = YPint((P)0);
  Utop_numF9441 = BOXFAB(Utop_numF9441);
  UnumF9442 = YPint((P)0);
  UnumF9442 = BOXFAB(UnumF9442);
  T4 = FUNFAB(fun_34,4,UnumF9442,Utop_numF9441,Useen_topF9440,break_);
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_backtrace_36) {
  P T0,T1;
LINK_STACK();
  T1 = fun_35;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P f_,Uargs_;
  P numF9445;
  P UnameF9444;
  P argsF9443;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T18 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF9443 = T18;
  T15 = CALL1(1,VARREF(Yfun_name),f_);
  if (T15 != YPfalse) {
    T17 = CALL1(1,VARREF(Yfun_name),f_);
    T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T17);
    T14 = T16;
  } else {
    T14 = LITREF(lit_93);
  }
  UnameF9444 = T14;
  T12 = BOXGET(FREEREF(0));
  T13 = BOXGET(FREEREF(1));
  T11 = CALL2(1,VARREF(YgooSmathY_),T12,T13);
  numF9445 = T11;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF9444,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF9445);
    if (T4 != YPfalse) {
      CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_112),numF9445,f_,argsF9443);
      CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
      T5 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF9444,LITREF(lit_98));
  if (T6 != YPfalse) {
    BOXPUT(numF9445,FREEREF(1));
    T7 = BOXPUT(YPtrue,FREEREF(2));
  } else {
  }
  T10 = BOXGET(FREEREF(0));
  T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
  T8 = BOXPUT(T9,FREEREF(0));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_38) {
  P break_;
  P UnumF9448;
  P Utop_numF9447;
  P Useen_topF9446;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF9446 = YPfalse;
  Useen_topF9446 = BOXFAB(Useen_topF9446);
  Utop_numF9447 = YPint((P)0);
  Utop_numF9447 = BOXFAB(Utop_numF9447);
  UnumF9448 = YPint((P)0);
  UnumF9448 = BOXFAB(UnumF9448);
  T4 = FUNFAB(fun_37,5,UnumF9448,Utop_numF9447,Useen_topF9446,break_,FREEREF(0));
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_frame_39) {
  P n_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  T1 = FUNFAB(fun_38,1,n_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P f_,Uargs_;
  P numF9451;
  P UnameF9450;
  P argsF9449;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T21 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF9449 = T21;
  T18 = CALL1(1,VARREF(Yfun_name),f_);
  if (T18 != YPfalse) {
    T20 = CALL1(1,VARREF(Yfun_name),f_);
    T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
    T17 = T19;
  } else {
    T17 = LITREF(lit_93);
  }
  UnameF9450 = T17;
  T15 = BOXGET(FREEREF(0));
  T16 = BOXGET(FREEREF(1));
  T14 = CALL2(1,VARREF(YgooSmathY_),T15,T16);
  numF9451 = T14;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF9450,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF9451);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSfunYfun_names),f_);
      T7 = CALL2(1,VARREF(YgooScolsSseqYpos),T8,FREEREF(5));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),argsF9449,T7);
      T5 = CALL1(1,FREEREF(6),T6);
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T9 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF9450,LITREF(lit_98));
  if (T9 != YPfalse) {
    BOXPUT(numF9451,FREEREF(1));
    T10 = BOXPUT(YPtrue,FREEREF(2));
  } else {
  }
  T13 = BOXGET(FREEREF(0));
  T12 = CALL2(1,VARREF(YgooSmathYA),T13,YPint((P)1));
  T11 = BOXPUT(T12,FREEREF(0));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_41) {
  P break_;
  P UnumF9454;
  P Utop_numF9453;
  P Useen_topF9452;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF9452 = YPfalse;
  Useen_topF9452 = BOXFAB(Useen_topF9452);
  Utop_numF9453 = YPint((P)0);
  Utop_numF9453 = BOXFAB(Utop_numF9453);
  UnumF9454 = YPint((P)0);
  UnumF9454 = BOXFAB(UnumF9454);
  T4 = FUNFAB(fun_40,7,UnumF9454,Utop_numF9453,Useen_topF9452,break_,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_42) {
  P ret_;
  P T0;
LINK_STACK();
  ARG(ret_, 0);
  T0 = FUNFAB(fun_41,3,FREEREF(0),FREEREF(1),ret_);
  with_exit(T0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_43) {
  P n_,name_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
  T1 = FUNFAB(fun_42,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P f_,Uargs_;
  P numF9457;
  P UnameF9456;
  P argsF9455;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF9455 = T16;
  T13 = CALL1(1,VARREF(Yfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(Yfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_93);
  }
  UnameF9456 = T12;
  T10 = BOXGET(FREEREF(0));
  T11 = BOXGET(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF9457 = T9;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF9456,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_121),numF9457,f_);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF9456,LITREF(lit_98));
  if (T4 != YPfalse) {
    BOXPUT(numF9457,FREEREF(1));
    T5 = BOXPUT(YPtrue,FREEREF(2));
  } else {
  }
  T8 = BOXGET(FREEREF(0));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXPUT(T7,FREEREF(0));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_45) {
  P break_;
  P UnumF9460;
  P Utop_numF9459;
  P Useen_topF9458;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF9458 = YPfalse;
  Useen_topF9458 = BOXFAB(Useen_topF9458);
  Utop_numF9459 = YPint((P)0);
  Utop_numF9459 = BOXFAB(Utop_numF9459);
  UnumF9460 = YPint((P)0);
  UnumF9460 = BOXFAB(UnumF9460);
  T4 = FUNFAB(fun_44,4,UnumF9460,Utop_numF9459,Useen_topF9458,break_);
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_bt_46) {
  P T0,T1;
LINK_STACK();
  T1 = fun_45;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYdo_restart) {
  P restarts_,n_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_124));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T5 = CALL2(1,VARREF(YgooSmagYLE),n_,T6);
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_125),n_);
  } else {
  }
  T10 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T10);
  T8 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T9,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_48) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_49) {
  P c_,r_;
  P x_2389F9462;
  P x_2388F9461;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  x_2388F9461 = c_;
  x_2389F9462 = VARREF(YisaQ);
  T1 = CALL2(0,x_2389F9462,x_2388F9461,VARREF(YgooSconditionsYLkeyboard_interruptG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_131));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
    T3 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_132),T4);
    T0 = T3;
  }
  T5 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T6 = BOXGET(FREEREF(3));
  CALL5(1,VARREF(YevalStopYPPtopPPtop_in),T5,FREEREF(1),FREEREF(2),YPtrue,T6);
  T7 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_50) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_51) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2434_52) {
  P msg_,args_;
  P x_2438F9467;
  P x_2437F9466;
  P x_2436F9465;
  P x_2435F9464;
  P resF9463;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T7 = BOXGET(FREEREF(1));
  T6 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T7);
  resF9463 = T6;
  T2 = BOXGET(FREEREF(1));
  T3 = resF9463;
  CALL4(1,VARREF(YevalStopYprint_result_expression),T2,FREEREF(2),LITREF(lit_182),T3);
  x_2435F9464 = VARREF(YevalStopYDDD);
  x_2436F9465 = VARREF(YevalStopYDD);
  x_2437F9466 = VARREF(YevalStopYD);
  T5 = resF9463;
  x_2438F9467 = T5;
  VARSET(YevalStopYDDD,x_2436F9465);
  VARSET(YevalStopYDD,x_2437F9466);
  VARSET(YevalStopYD,x_2438F9467);
  T4 = resF9463 = x_2435F9464;
  T0 = CALL1(1,FREEREF(3),T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_2433F9476;
  P x_2433F9475;
  P x_2433F9474;
  P x_2433F9473;
  P x_2433F9472;
  P nameF9471;
  P nF9470;
  P x_2433F9469;
  P x_2434F9468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_2434_52,4);
  x_2434F9468 = T18;
  FUNINIT(x_2434F9468, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_2433F9469 = FREEREF(3);
  nF9470 = YPfalse;
  nameF9471 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2433F9469,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2433F9469,LITREF(lit_183),x_2434F9468);
    x_2433F9472 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2433F9472,x_2434F9468);
    nF9470 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2433F9472);
    x_2433F9473 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2433F9473,x_2434F9468);
    nameF9471 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2433F9473);
    x_2433F9474 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2433F9474,x_2434F9468);
    x_2433F9475 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2433F9475,x_2434F9468);
    T6 = CALL1(1,VARREF(Ytail),x_2433F9474);
    x_2433F9476 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2433F9476,x_2434F9468);
  } else {
    T12 = CALL2(1,x_2434F9468,LITREF(lit_70),x_2433F9469);
  }
  T14 = BOXGET(FREEREF(1));
  T16 = nF9470;
  T17 = nameF9471;
  T15 = CALL2(1,VARREF(YevalStopYframe_var),T16,T17);
  T13 = CALL4(1,VARREF(YevalStopYprint_result_expression),T14,FREEREF(2),LITREF(lit_184),T15);
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_x_2431_54) {
  P msg_,args_;
  P x_2432F9477;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2432F9477 = FREEREF(0);
  T2 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_2432F9477);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_2430F9484;
  P x_2430F9483;
  P x_2430F9482;
  P x_2430F9481;
  P nF9480;
  P x_2430F9479;
  P x_2431F9478;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(return_, 0);
  T12 = FUNSHELL(0,fun_x_2431_54,5);
  x_2431F9478 = T12;
  FUNINIT(x_2431F9478, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2430F9479 = FREEREF(0);
  nF9480 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2430F9479,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2430F9479,LITREF(lit_185),x_2431F9478);
    x_2430F9481 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2430F9481,x_2431F9478);
    nF9480 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_2430F9481);
    x_2430F9482 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2430F9482,x_2431F9478);
    x_2430F9483 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2430F9483,x_2431F9478);
    T5 = CALL1(1,VARREF(Ytail),x_2430F9482);
    x_2430F9484 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2430F9484,x_2431F9478);
  } else {
    T9 = CALL2(1,x_2431F9478,LITREF(lit_70),x_2430F9479);
  }
  T11 = nF9480;
  T10 = CALL1(1,VARREF(YevalStopYframe),T11);
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_x_2428_56) {
  P msg_,args_;
  P x_2429F9485;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2429F9485 = FREEREF(0);
  T2 = FUNFAB(fun_55,4,x_2429F9485,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_2427F9490;
  P x_2427F9489;
  P x_2427F9488;
  P x_2427F9487;
  P x_2428F9486;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2428_56,5);
  x_2428F9486 = T8;
  FUNINIT(x_2428F9486, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2427F9487 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2427F9487,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2427F9487,LITREF(lit_186),x_2428F9486);
    x_2427F9488 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2427F9488,x_2428F9486);
    x_2427F9489 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2427F9489,x_2428F9486);
    T4 = CALL1(1,VARREF(Ytail),x_2427F9488);
    x_2427F9490 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2427F9490,x_2428F9486);
  } else {
    T6 = CALL2(1,x_2428F9486,LITREF(lit_70),x_2427F9487);
  }
  T7 = CALL0(1,VARREF(YevalStopYbacktrace));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2425_58) {
  P msg_,args_;
  P x_2426F9491;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2426F9491 = FREEREF(0);
  T2 = FUNFAB(fun_57,4,x_2426F9491,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_2424F9496;
  P x_2424F9495;
  P x_2424F9494;
  P x_2424F9493;
  P x_2425F9492;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2425_58,5);
  x_2425F9492 = T8;
  FUNINIT(x_2425F9492, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2424F9493 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2424F9493,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2424F9493,LITREF(lit_187),x_2425F9492);
    x_2424F9494 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2424F9494,x_2425F9492);
    x_2424F9495 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2424F9495,x_2425F9492);
    T4 = CALL1(1,VARREF(Ytail),x_2424F9494);
    x_2424F9496 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2424F9496,x_2425F9492);
  } else {
    T6 = CALL2(1,x_2425F9492,LITREF(lit_70),x_2424F9493);
  }
  T7 = CALL0(1,VARREF(YevalStopYbt));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2422_60) {
  P msg_,args_;
  P x_2423F9497;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2423F9497 = FREEREF(0);
  T2 = FUNFAB(fun_59,4,x_2423F9497,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_2421F9502;
  P x_2421F9501;
  P x_2421F9500;
  P x_2421F9499;
  P x_2422F9498;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_2422_60,5);
  x_2422F9498 = T9;
  FUNINIT(x_2422F9498, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2421F9499 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2421F9499,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2421F9499,LITREF(lit_188),x_2422F9498);
    x_2421F9500 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2421F9500,x_2422F9498);
    x_2421F9501 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2421F9501,x_2422F9498);
    T4 = CALL1(1,VARREF(Ytail),x_2421F9500);
    x_2421F9502 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2421F9502,x_2422F9498);
  } else {
    T6 = CALL2(1,x_2422F9498,LITREF(lit_70),x_2421F9499);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T8 = DYNSET(YevalStopYrun,VARREF(YevalStopYauto_run));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2419_62) {
  P msg_,args_;
  P x_2420F9503;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2420F9503 = FREEREF(0);
  T2 = FUNFAB(fun_61,4,x_2420F9503,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_2418F9508;
  P x_2418F9507;
  P x_2418F9506;
  P x_2418F9505;
  P x_2419F9504;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2419_62,5);
  x_2419F9504 = T8;
  FUNINIT(x_2419F9504, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2418F9505 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2418F9505,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2418F9505,LITREF(lit_189),x_2419F9504);
    x_2418F9506 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2418F9506,x_2419F9504);
    x_2418F9507 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2418F9507,x_2419F9504);
    T4 = CALL1(1,VARREF(Ytail),x_2418F9506);
    x_2418F9508 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2418F9508,x_2419F9504);
  } else {
    T6 = CALL2(1,x_2419F9504,LITREF(lit_70),x_2418F9505);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPvm_run));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2416_64) {
  P msg_,args_;
  P x_2417F9509;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2417F9509 = FREEREF(0);
  T2 = FUNFAB(fun_63,4,x_2417F9509,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_2415F9514;
  P x_2415F9513;
  P x_2415F9512;
  P x_2415F9511;
  P x_2416F9510;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2416_64,5);
  x_2416F9510 = T8;
  FUNINIT(x_2416F9510, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2415F9511 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2415F9511,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2415F9511,LITREF(lit_190),x_2416F9510);
    x_2415F9512 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2415F9512,x_2416F9510);
    x_2415F9513 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2415F9513,x_2416F9510);
    T4 = CALL1(1,VARREF(Ytail),x_2415F9512);
    x_2415F9514 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2415F9514,x_2416F9510);
  } else {
    T6 = CALL2(1,x_2416F9510,LITREF(lit_70),x_2415F9511);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2413_66) {
  P msg_,args_;
  P x_2414F9515;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2414F9515 = FREEREF(0);
  T2 = FUNFAB(fun_65,4,x_2414F9515,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P x_2412F9520;
  P x_2412F9519;
  P x_2412F9518;
  P x_2412F9517;
  P x_2413F9516;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_2413_66,5);
  x_2413F9516 = T9;
  FUNINIT(x_2413F9516, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2412F9517 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2412F9517,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2412F9517,LITREF(lit_191),x_2413F9516);
    x_2412F9518 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2412F9518,x_2413F9516);
    x_2412F9519 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2412F9519,x_2413F9516);
    T4 = CALL1(1,VARREF(Ytail),x_2412F9518);
    x_2412F9520 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2412F9520,x_2413F9516);
  } else {
    T6 = CALL2(1,x_2413F9516,LITREF(lit_70),x_2412F9517);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T8 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPg2c_run));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2410_68) {
  P msg_,args_;
  P x_2411F9521;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2411F9521 = FREEREF(0);
  T2 = FUNFAB(fun_67,4,x_2411F9521,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P new_envF9529;
  P x_2409F9528;
  P x_2409F9527;
  P x_2409F9526;
  P x_2409F9525;
  P mF9524;
  P x_2409F9523;
  P x_2410F9522;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2410_68,5);
  x_2410F9522 = T13;
  FUNINIT(x_2410F9522, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2409F9523 = FREEREF(0);
  mF9524 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2409F9523,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2409F9523,LITREF(lit_192),x_2410F9522);
    x_2409F9525 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2409F9525,x_2410F9522);
    mF9524 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_2409F9525);
    x_2409F9526 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2409F9526,x_2410F9522);
    x_2409F9527 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2409F9527,x_2410F9522);
    T5 = CALL1(1,VARREF(Ytail),x_2409F9526);
    x_2409F9528 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2409F9528,x_2410F9522);
  } else {
    T9 = CALL2(1,x_2410F9522,LITREF(lit_70),x_2409F9523);
  }
  T12 = mF9524;
  T11 = CALL1(1,VARREF(YevalSastYruntime_environment),T12);
  new_envF9529 = T11;
  T10 = BOXPUT(new_envF9529,FREEREF(2));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_x_2407_70) {
  P msg_,args_;
  P x_2408F9530;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2408F9530 = FREEREF(0);
  T2 = FUNFAB(fun_69,4,x_2408F9530,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_2406F9537;
  P x_2406F9536;
  P x_2406F9535;
  P x_2406F9534;
  P nF9533;
  P x_2406F9532;
  P x_2407F9531;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_2407_70,5);
  x_2407F9531 = T13;
  FUNINIT(x_2407F9531, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_2406F9532 = FREEREF(0);
  nF9533 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2406F9532,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2406F9532,LITREF(lit_193),x_2407F9531);
    x_2406F9534 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2406F9534,x_2407F9531);
    nF9533 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_2406F9534);
    x_2406F9535 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2406F9535,x_2407F9531);
    x_2406F9536 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2406F9536,x_2407F9531);
    T5 = CALL1(1,VARREF(Ytail),x_2406F9535);
    x_2406F9537 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2406F9537,x_2407F9531);
  } else {
    T9 = CALL2(1,x_2407F9531,LITREF(lit_70),x_2406F9532);
  }
  T11 = BOXGET(FREEREF(4));
  T12 = nF9533;
  T10 = CALL2(1,VARREF(YevalStopYdo_restart),T11,T12);
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_x_2404_72) {
  P msg_,args_;
  P x_2405F9538;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2405F9538 = FREEREF(0);
  T2 = FUNFAB(fun_71,5,x_2405F9538,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_2403F9543;
  P x_2403F9542;
  P x_2403F9541;
  P x_2403F9540;
  P x_2404F9539;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2404_72,6);
  x_2404F9539 = T8;
  FUNINIT(x_2404F9539, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_2403F9540 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2403F9540,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2403F9540,LITREF(lit_194),x_2404F9539);
    x_2403F9541 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2403F9541,x_2404F9539);
    x_2403F9542 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2403F9542,x_2404F9539);
    T4 = CALL1(1,VARREF(Ytail),x_2403F9541);
    x_2403F9543 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2403F9543,x_2404F9539);
  } else {
    T6 = CALL2(1,x_2404F9539,LITREF(lit_70),x_2403F9540);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2401_74) {
  P msg_,args_;
  P x_2402F9544;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2402F9544 = FREEREF(0);
  T2 = FUNFAB(fun_73,5,x_2402F9544,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_2400F9549;
  P x_2400F9548;
  P x_2400F9547;
  P x_2400F9546;
  P x_2401F9545;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2401_74,6);
  x_2401F9545 = T8;
  FUNINIT(x_2401F9545, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_2400F9546 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2400F9546,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2400F9546,LITREF(lit_195),x_2401F9545);
    x_2400F9547 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2400F9547,x_2401F9545);
    x_2400F9548 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2400F9548,x_2401F9545);
    T4 = CALL1(1,VARREF(Ytail),x_2400F9547);
    x_2400F9549 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2400F9549,x_2401F9545);
  } else {
    T6 = CALL2(1,x_2401F9545,LITREF(lit_70),x_2400F9546);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2398_76) {
  P msg_,args_;
  P x_2399F9550;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2399F9550 = FREEREF(0);
  T2 = FUNFAB(fun_75,5,x_2399F9550,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_2397F9555;
  P x_2397F9554;
  P x_2397F9553;
  P x_2397F9552;
  P x_2398F9551;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2398_76,6);
  x_2398F9551 = T8;
  FUNINIT(x_2398F9551, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_2397F9552 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2397F9552,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2397F9552,LITREF(lit_196),x_2398F9551);
    x_2397F9553 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2397F9553,x_2398F9551);
    x_2397F9554 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2397F9554,x_2398F9551);
    T4 = CALL1(1,VARREF(Ytail),x_2397F9553);
    x_2397F9555 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2397F9555,x_2398F9551);
  } else {
    T6 = CALL2(1,x_2398F9551,LITREF(lit_70),x_2397F9552);
  }
  T7 = CALL1(0,FREEREF(5),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2395_78) {
  P msg_,args_;
  P x_2396F9556;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2396F9556 = FREEREF(0);
  T2 = FUNFAB(fun_77,6,x_2396F9556,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_2394F9561;
  P x_2394F9560;
  P x_2394F9559;
  P x_2394F9558;
  P x_2395F9557;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2395_78,7);
  x_2395F9557 = T8;
  FUNINIT(x_2395F9557, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_2394F9558 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2394F9558,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2394F9558,LITREF(lit_197),x_2395F9557);
    x_2394F9559 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2394F9559,x_2395F9557);
    x_2394F9560 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2394F9560,x_2395F9557);
    T4 = CALL1(1,VARREF(Ytail),x_2394F9559);
    x_2394F9561 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2394F9561,x_2395F9557);
  } else {
    T6 = CALL2(1,x_2395F9557,LITREF(lit_70),x_2394F9558);
  }
  T7 = CALL1(0,FREEREF(6),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_x_2392_80) {
  P msg_,args_;
  P x_2393F9562;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2393F9562 = FREEREF(0);
  T2 = FUNFAB(fun_79,7,x_2393F9562,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P return_;
  P x_2391F9567;
  P x_2391F9566;
  P x_2391F9565;
  P x_2391F9564;
  P x_2392F9563;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_2392_80,8);
  x_2392F9563 = T8;
  FUNINIT(x_2392F9563, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_2391F9564 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2391F9564,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2391F9564,LITREF(lit_198),x_2392F9563);
    x_2391F9565 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2391F9565,x_2392F9563);
    x_2391F9566 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2391F9566,x_2392F9563);
    T4 = CALL1(1,VARREF(Ytail),x_2391F9565);
    x_2391F9567 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2391F9567,x_2392F9563);
  } else {
    T6 = CALL2(1,x_2392F9563,LITREF(lit_70),x_2391F9564);
  }
  T7 = CALL1(0,FREEREF(7),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_82) {
  P x_2390F9569;
  P formF9568;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXGET(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_135));
    T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
    BOXPUT(T1,FREEREF(1));
    T2 = BOXPUT(YPfalse,FREEREF(0));
  } else {
  }
  T9 = BOXGET(FREEREF(2));
  T8 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T9,FREEREF(3),LITREF(lit_136));
  formF9568 = T8;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF9568);
  if (T4 != YPfalse) {
    T5 = CALL1(1,FREEREF(4),YPfalse);
    T3 = T5;
  } else {
    x_2390F9569 = formF9568;
    T7 = FUNFAB(fun_81,8,x_2390F9569,formF9568,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
    T6 = with_exit(T7);
    T3 = T6;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_83) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_133),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_50;
  T4 = FUNFAB(fun_51,1,FREEREF(1));
  T5 = FUNFAB(fun_82,7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6),FREEREF(7));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  P continue_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(continue_, 0);
  T1 = fun_48;
  T2 = FUNFAB(fun_49,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_83,8,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(6));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLconditionG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P blow_;
  P T0,T1;
LINK_STACK();
  ARG(blow_, 0);
  LOOP_442: {
    T0 = FUNFAB(fun_84,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_);
    with_exit(T0);
    goto LOOP_442;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_PPtopPPtop_in_86) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF9570;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF9570 = YPfalse;
  restartsF9570 = BOXFAB(restartsF9570);
  T4 = FUNFAB(fun_85,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF9570);
  T3 = with_exit(T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_87) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_88) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P top_;
  P T0,T1;
LINK_STACK();
  ARG(top_, 0);
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),FREEREF(1));
  T0 = CALL5(1,VARREF(YevalStopYPPtopPPtop_in),YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  P T0,T1;
LINK_STACK();
  LOOP_443: {
    T0 = FUNFAB(fun_89,2,FREEREF(0),FREEREF(1));
    with_exit(T0);
    goto LOOP_443;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_91) {
  P quit_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(quit_, 0);
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_202),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_87;
  T4 = FUNFAB(fun_88,1,quit_);
  T5 = FUNFAB(fun_90,2,quit_,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_92) {
  P modname_;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = FUNFAB(fun_91,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_207));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYsave_image) {
  P image_name_;
  P T0,T1;
LINK_STACK();
  ARG(image_name_, 0);
  T1 = fun_93;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YevalStopY___main_0___() {
  P tmpF9572;
  P modeF9571;
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
  P T176,T177,T178,T179,T180,T181,T182,T183;
DEFCREGS();
  lit_0 = YPPsym((P)"esctst");
  lit_1 = Ynil;
  lit_2 = YPPlist(1,YPPsym((P)"exit"));
  lit_3 = YPPsym((P)"exit");
  lit_4 = YPsb((P)"CLEANUP\n");
  lit_5 = YPPsym((P)"cleanup");
  lit_6 = YPsb((P)"DO\n");
  lit_7 = YPPsym((P)"done");
  T3 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_0 = YPmet(FUNCODEREF(fun_0),YPfalse,T3,ENVNUL,PNUL,sloc(13));
  T2 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T2,ENVNUL,PNUL,sloc(14));
  T1 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T1,ENVNUL,PNUL,sloc(12));
  T0 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalStopYesctst = YPmet(FUNCODEREF(YevalStopYesctst),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(11));
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
  fun_parse_in_4 = YPmet(FUNCODEREF(fun_parse_in_4),LITREF(lit_10),T7,ENVNUL,PNUL,sloc(21));
  T9 = VARREF_OR(YevalStopYparse_in,YPfalse);
  T10 = fun_parse_in_4;
  T8 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T9,T10);
  VARSET(YevalStopYparse_in,T8);
  lit_12 = YPPsym((P)"parse");
  lit_13 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T11 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_12),T11,ENVNUL,PNUL,sloc(24));
  T13 = VARREF_OR(YevalStopYparse,YPfalse);
  T14 = fun_parse_5;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YevalStopYparse,T12);
  lit_14 = YPPsym((P)"str-parse-in");
  lit_15 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"ct-env"));
  lit_16 = YPsb((P)"%=\n");
  T15 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_14),T15,ENVNUL,PNUL,sloc(27));
  T17 = VARREF_OR(YevalStopYstr_parse_in,YPfalse);
  T18 = fun_str_parse_in_6;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YevalStopYstr_parse_in,T16);
  lit_17 = YPPsym((P)"str-parse");
  lit_18 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T19 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_17),T19,ENVNUL,PNUL,sloc(30));
  T21 = VARREF_OR(YevalStopYstr_parse,YPfalse);
  T22 = fun_str_parse_7;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YevalStopYstr_parse,T20);
  lit_19 = YPPsym((P)"vm-evaluate");
  lit_20 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T24 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_19),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalStopYvm_evaluate,T23);
  lit_21 = YPPsym((P)"%%bottom%%vm-run");
  lit_22 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T25 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPvm_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPvm_run),LITREF(lit_21),T25,ENVNUL,PNUL,sloc(35));
  T26 = YevalStopYPPbottomPPvm_run;
  VARSET(YevalStopYPPbottomPPvm_run,T26);
  lit_23 = YPPsym((P)"%%bottom%%ast-run");
  lit_24 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T27 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPast_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPast_run),LITREF(lit_23),T27,ENVNUL,PNUL,sloc(38));
  T28 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T28);
  lit_25 = YPPsym((P)"%%bottom%%g2c-run");
  lit_26 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T29 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPg2c_run),LITREF(lit_25),T29,ENVNUL,PNUL,sloc(41));
  T30 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T30);
  lit_27 = YPPsym((P)"auto-run");
  lit_28 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T31 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPmet(FUNCODEREF(YevalStopYauto_run),LITREF(lit_27),T31,ENVNUL,PNUL,sloc(44));
  T32 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T32);
  lit_29 = YPPsym((P)"auto-eval");
  lit_30 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"ct-env"));
  T33 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPmet(FUNCODEREF(YevalStopYauto_eval),LITREF(lit_29),T33,ENVNUL,PNUL,sloc(49));
  T34 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T34);
  lit_31 = YPsb((P)"GOO_EVAL_MODE");
  lit_32 = YPsb((P)"ast");
  lit_33 = YPsb((P)"g2c");
  T40 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_31));
  modeF9571 = T40;
  T37 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF9571,LITREF(lit_32));
  T36 = XCALL1(1,VARREF(Ynot),T37);
  if (T36 != YPfalse) {
    T39 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF9571,LITREF(lit_33));
    tmpF9572 = T39;
    if (tmpF9572 != YPfalse) {
      T38 = tmpF9572;
    } else {
      T38 = YPtrue;
    }
    T35 = T38;
  } else {
    T35 = YPfalse;
  }
  VARSET(YevalStopYDg2c_evalQ,T35);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T41 = VARREF(YevalStopYauto_run);
  } else {
    T41 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T41);
  lit_34 = YPPsym((P)"eval-in");
  lit_35 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T42 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_13 = YPmet(FUNCODEREF(fun_eval_in_13),LITREF(lit_34),T42,ENVNUL,PNUL,sloc(61));
  T44 = VARREF_OR(YevalStopYeval_in,YPfalse);
  T45 = fun_eval_in_13;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalStopYeval_in,T43);
  lit_36 = YPPsym((P)"eval");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T46 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_14 = YPmet(FUNCODEREF(fun_eval_14),LITREF(lit_36),T46,ENVNUL,PNUL,sloc(66));
  T48 = VARREF_OR(YevalSsyntaxYeval,YPfalse);
  T49 = fun_eval_14;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSsyntaxYeval,T47);
  lit_38 = YPPsym((P)"str-eval-in");
  lit_39 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T50 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_15 = YPmet(FUNCODEREF(fun_str_eval_in_15),LITREF(lit_38),T50,ENVNUL,PNUL,sloc(69));
  T52 = VARREF_OR(YevalStopYstr_eval_in,YPfalse);
  T53 = fun_str_eval_in_15;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalStopYstr_eval_in,T51);
  lit_40 = YPPsym((P)"str-eval");
  lit_41 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T54 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_16 = YPmet(FUNCODEREF(fun_str_eval_16),LITREF(lit_40),T54,ENVNUL,PNUL,sloc(72));
  T56 = VARREF_OR(YevalStopYstr_eval,YPfalse);
  T57 = fun_str_eval_16;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalStopYstr_eval,T55);
  lit_42 = YPPsym((P)"compiled-file?");
  lit_43 = YPPlist(1,YPPsym((P)"name"));
  lit_44 = YPsb((P)".gooc");
  T58 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_42),T58,ENVNUL,PNUL,sloc(75));
  T59 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T59);
  lit_45 = YPPsym((P)"read-file");
  lit_46 = YPPlist(1,YPPsym((P)"filename"));
  T62 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T62,ENVNUL,PNUL,sloc(79));
  T61 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T61,ENVNUL,PNUL,sloc(79));
  T60 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_45),T60,ENVNUL,PNUL,sloc(78));
  T64 = VARREF_OR(YevalStopYread_file,YPfalse);
  T65 = fun_read_file_20;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalStopYread_file,T63);
  lit_47 = YPPsym((P)"load-in");
  lit_48 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  T66 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_47),T66,ENVNUL,PNUL,sloc(86));
  T68 = VARREF_OR(YevalSastYload_in,YPfalse);
  T69 = fun_load_in_21;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSastYload_in,T67);
  lit_49 = YPPsym((P)"load-file");
  lit_50 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"modname"));
  T70 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_49),T70,ENVNUL,PNUL,sloc(96));
  T72 = VARREF_OR(YevalStopYload_file,YPfalse);
  T73 = fun_load_file_22;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalStopYload_file,T71);
  lit_51 = YPPsym((P)"load");
  lit_52 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"modname"));
  T74 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_51),T74,ENVNUL,PNUL,sloc(99));
  T76 = VARREF_OR(YevalStopYload,YPfalse);
  T77 = fun_load_23;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalStopYload,T75);
  lit_53 = YPPsym((P)"prompt-for-command-expression");
  lit_54 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"prompt"));
  lit_55 = YPsb((P)"%s %=%s");
  lit_56 = YPPsym((P)"unquote");
  lit_57 = YPsb((P)"(");
  lit_58 = YPsb((P)")");
  lit_59 = YPsb((P)"cmd_");
  T78 = YPsig(LITREF(lit_54),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_53),T78,ENVNUL,PNUL,sloc(105));
  T80 = VARREF_OR(YevalStopYprompt_for_command_expression,YPfalse);
  T81 = fun_prompt_for_command_expression_24;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalStopYprompt_for_command_expression,T79);
  lit_60 = YPPsym((P)"print-result-expression");
  lit_61 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"label"),YPPsym((P)"result"));
  lit_62 = YPsb((P)"%s %=%s");
  T82 = YPsig(LITREF(lit_61),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_60),T82,ENVNUL,PNUL,sloc(115));
  T84 = VARREF_OR(YevalStopYprint_result_expression,YPfalse);
  T85 = fun_print_result_expression_25;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalStopYprint_result_expression,T83);
  lit_63 = YPPsym((P)"do-stack-frames");
  lit_64 = YPPlist(1,YPPsym((P)"fun"));
  T86 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_63),T86,ENVNUL,PNUL,sloc(119));
  T88 = VARREF_OR(YevalStopYdo_stack_frames,YPfalse);
  T89 = fun_do_stack_frames_26;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalStopYdo_stack_frames,T87);
  lit_65 = YPPlist(1,YPPsym((P)"exp"));
  lit_66 = YPPlist(1,YPPsym((P)"return"));
  lit_67 = YPPsym((P)"x-2383");
  lit_68 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_69 = YPPsym((P)"for-frames");
  lit_70 = YPsb((P)"Match Pattern Failure");
  lit_71 = YPPsym((P)"let");
  lit_72 = Ynil;
  lit_73 = YPPsym((P)"fun");
  lit_74 = YPPsym((P)"_args");
  lit_75 = YPPsym((P)"def");
  lit_76 = YPPsym((P)"rev");
  lit_77 = YPPsym((P)"incf");
  T92 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2383_27 = YPmet(FUNCODEREF(fun_x_2383_27),LITREF(lit_67),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T93 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T93);
  lit_78 = YPPlist(1,YPPsym((P)"exp"));
  lit_79 = YPPlist(1,YPPsym((P)"return"));
  lit_80 = YPPsym((P)"x-2387");
  lit_81 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_82 = YPPsym((P)"for-user-frames");
  lit_83 = YPPsym((P)"esc");
  lit_84 = YPPsym((P)"break");
  lit_85 = YPPsym((P)"_seen-top");
  lit_86 = YPPsym((P)"_top-num");
  lit_87 = YPPsym((P)"_num");
  lit_88 = YPPsym((P)"_name");
  lit_89 = YPPsym((P)"if");
  lit_90 = YPPsym((P)"fun-name");
  lit_91 = YPPsym((P)"as");
  lit_92 = YPPsym((P)"<str>");
  lit_93 = YPsb((P)"");
  lit_94 = YPPsym((P)"-");
  lit_95 = YPPsym((P)"when");
  lit_96 = YPPsym((P)"prefix?");
  lit_97 = YPsb((P)"%%bottom%%");
  lit_98 = YPsb((P)"%%top%%");
  lit_99 = YPPsym((P)"set");
  lit_100 = YPPsym((P)"num");
  T96 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2387_30 = YPmet(FUNCODEREF(fun_x_2387_30),LITREF(lit_80),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T97 = fun_32;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T97);
  lit_101 = YPPsym((P)"msg-src-loc");
  lit_102 = YPPlist(1,YPPsym((P)"f"));
  lit_103 = YPsb((P)" %s:%d");
  T98 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_msg_src_loc_33 = YPmet(FUNCODEREF(fun_msg_src_loc_33),LITREF(lit_101),T98,ENVNUL,PNUL,sloc(142));
  T100 = VARREF_OR(YevalStopYmsg_src_loc,YPfalse);
  T101 = fun_msg_src_loc_33;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalStopYmsg_src_loc,T99);
  lit_104 = YPPsym((P)"backtrace");
  lit_105 = YPPlist(1,YPPsym((P)"break"));
  lit_106 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_107 = YPsb((P)"[%=] %= %=");
  T104 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T104,ENVNUL,PNUL,sloc(149));
  T103 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T103,ENVNUL,PNUL,sloc(149));
  T102 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_36 = YPmet(FUNCODEREF(fun_backtrace_36),LITREF(lit_104),T102,ENVNUL,PNUL,sloc(148));
  T106 = VARREF_OR(YevalStopYbacktrace,YPfalse);
  T107 = fun_backtrace_36;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalStopYbacktrace,T105);
  lit_108 = YPPsym((P)"frame");
  lit_109 = YPPlist(1,YPPsym((P)"n"));
  lit_110 = YPPlist(1,YPPsym((P)"break"));
  lit_111 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_112 = YPsb((P)"[%=] %= %=");
  T110 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T110,ENVNUL,PNUL,sloc(153));
  T109 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T109,ENVNUL,PNUL,sloc(153));
  T108 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_39 = YPmet(FUNCODEREF(fun_frame_39),LITREF(lit_108),T108,ENVNUL,PNUL,sloc(152));
  T112 = VARREF_OR(YevalStopYframe,YPfalse);
  T113 = fun_frame_39;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalStopYframe,T111);
  lit_113 = YPPsym((P)"frame-var");
  lit_114 = YPPlist(2,YPPsym((P)"n"),YPPsym((P)"name"));
  lit_115 = YPPlist(1,YPPsym((P)"ret"));
  lit_116 = YPPlist(1,YPPsym((P)"break"));
  lit_117 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  T117 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T117,ENVNUL,PNUL,sloc(159));
  T116 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T116,ENVNUL,PNUL,sloc(159));
  T115 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T115,ENVNUL,PNUL,sloc(158));
  T114 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_43 = YPmet(FUNCODEREF(fun_frame_var_43),LITREF(lit_113),T114,ENVNUL,PNUL,sloc(157));
  T119 = VARREF_OR(YevalStopYframe_var,YPfalse);
  T120 = fun_frame_var_43;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalStopYframe_var,T118);
  lit_118 = YPPsym((P)"bt");
  lit_119 = YPPlist(1,YPPsym((P)"break"));
  lit_120 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_121 = YPsb((P)"[%=] %=");
  T123 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T123,ENVNUL,PNUL,sloc(166));
  T122 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T122,ENVNUL,PNUL,sloc(166));
  T121 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_46 = YPmet(FUNCODEREF(fun_bt_46),LITREF(lit_118),T121,ENVNUL,PNUL,sloc(165));
  T125 = VARREF_OR(YevalStopYbt,YPfalse);
  T126 = fun_bt_46;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalStopYbt,T124);
  lit_122 = YPPsym((P)"do-restart");
  lit_123 = YPPlist(2,YPPsym((P)"restarts"),YPPsym((P)"n"));
  lit_124 = YPsb((P)"No restarts available.\n");
  lit_125 = YPsb((P)"No restart #%d.\n");
  T127 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_122),T127,ENVNUL,PNUL,sloc(169));
  T128 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T128);
  VARSET(YevalStopYD,YPfalse);
  VARSET(YevalStopYDD,YPfalse);
  VARSET(YevalStopYDDD,YPfalse);
  lit_126 = YPPsym((P)"%%top%%top-in");
  lit_127 = YPPlist(5,YPPsym((P)"level"),YPPsym((P)"top"),YPPsym((P)"quit"),YPPsym((P)"show-restarts?"),YPPsym((P)"ct-env"));
  lit_128 = YPPlist(1,YPPsym((P)"blow"));
  lit_129 = YPPlist(1,YPPsym((P)"continue"));
  lit_130 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_131 = YPsb((P)"BREAK");
  lit_132 = YPsb((P)"ERROR: %s");
  lit_133 = YPsb((P)"Return to interpreter level %d");
  lit_134 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_135 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_136 = YPsb((P)"<= ");
  lit_137 = YPPlist(1,YPPsym((P)"return"));
  lit_138 = YPPsym((P)"x-2392");
  lit_139 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_140 = YPPlist(1,YPPsym((P)"return"));
  lit_141 = YPPsym((P)"x-2395");
  lit_142 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_143 = YPPlist(1,YPPsym((P)"return"));
  lit_144 = YPPsym((P)"x-2398");
  lit_145 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-2401");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPPlist(1,YPPsym((P)"return"));
  lit_150 = YPPsym((P)"x-2404");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPPlist(1,YPPsym((P)"return"));
  lit_153 = YPPsym((P)"x-2407");
  lit_154 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_155 = YPPlist(1,YPPsym((P)"return"));
  lit_156 = YPPsym((P)"x-2410");
  lit_157 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_158 = YPPlist(1,YPPsym((P)"return"));
  lit_159 = YPPsym((P)"x-2413");
  lit_160 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_161 = YPPlist(1,YPPsym((P)"return"));
  lit_162 = YPPsym((P)"x-2416");
  lit_163 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_164 = YPPlist(1,YPPsym((P)"return"));
  lit_165 = YPPsym((P)"x-2419");
  lit_166 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-2422");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPPlist(1,YPPsym((P)"return"));
  lit_171 = YPPsym((P)"x-2425");
  lit_172 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_173 = YPPlist(1,YPPsym((P)"return"));
  lit_174 = YPPsym((P)"x-2428");
  lit_175 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_176 = YPPlist(1,YPPsym((P)"return"));
  lit_177 = YPPsym((P)"x-2431");
  lit_178 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_179 = YPPlist(1,YPPsym((P)"return"));
  lit_180 = YPPsym((P)"x-2434");
  lit_181 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_182 = YPsb((P)"=> ");
  lit_183 = YPPsym((P)"cmd_frame-var");
  lit_184 = YPsb((P)"=> ");
  lit_185 = YPPsym((P)"cmd_frame");
  lit_186 = YPPsym((P)"cmd_backtrace");
  lit_187 = YPPsym((P)"cmd_bt");
  lit_188 = YPPsym((P)"cmd_auto-eval");
  lit_189 = YPPsym((P)"cmd_vm-eval");
  lit_190 = YPPsym((P)"cmd_ast-eval");
  lit_191 = YPPsym((P)"cmd_g2c-eval");
  lit_192 = YPPsym((P)"cmd_in");
  lit_193 = YPPsym((P)"cmd_restart");
  lit_194 = YPPsym((P)"cmd_restarts");
  lit_195 = YPPsym((P)"cmd_handlers");
  lit_196 = YPPsym((P)"cmd_top");
  lit_197 = YPPsym((P)"cmd_up");
  lit_198 = YPPsym((P)"cmd_quit");
  T167 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T166,ENVNUL,PNUL,sloc(188));
  T165 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T164,ENVNUL,PNUL,sloc(199));
  T163 = YPsig(LITREF(lit_181),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2434_52 = YPmet(FUNCODEREF(fun_x_2434_52),LITREF(lit_180),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_179),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2431_54 = YPmet(FUNCODEREF(fun_x_2431_54),LITREF(lit_177),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2428_56 = YPmet(FUNCODEREF(fun_x_2428_56),LITREF(lit_174),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2425_58 = YPmet(FUNCODEREF(fun_x_2425_58),LITREF(lit_171),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2422_60 = YPmet(FUNCODEREF(fun_x_2422_60),LITREF(lit_168),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2419_62 = YPmet(FUNCODEREF(fun_x_2419_62),LITREF(lit_165),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2416_64 = YPmet(FUNCODEREF(fun_x_2416_64),LITREF(lit_162),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2413_66 = YPmet(FUNCODEREF(fun_x_2413_66),LITREF(lit_159),T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2410_68 = YPmet(FUNCODEREF(fun_x_2410_68),LITREF(lit_156),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2407_70 = YPmet(FUNCODEREF(fun_x_2407_70),LITREF(lit_153),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2404_72 = YPmet(FUNCODEREF(fun_x_2404_72),LITREF(lit_150),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2401_74 = YPmet(FUNCODEREF(fun_x_2401_74),LITREF(lit_147),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2398_76 = YPmet(FUNCODEREF(fun_x_2398_76),LITREF(lit_144),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2395_78 = YPmet(FUNCODEREF(fun_x_2395_78),LITREF(lit_141),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2392_80 = YPmet(FUNCODEREF(fun_x_2392_80),LITREF(lit_138),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T133,ENVNUL,PNUL,sloc(200));
  T132 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T132,ENVNUL,PNUL,sloc(245));
  T131 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T131,ENVNUL,PNUL,sloc(186));
  T130 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T130,ENVNUL,PNUL,sloc(184));
  T129 = YPsig(LITREF(lit_127),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_86 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_86),LITREF(lit_126),T129,ENVNUL,PNUL,sloc(182));
  T169 = VARREF_OR(YevalStopYPPtopPPtop_in,YPfalse);
  T170 = fun_PPtopPPtop_in_86;
  T168 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T169,T170);
  VARSET(YevalStopYPPtopPPtop_in,T168);
  lit_199 = YPPsym((P)"top");
  lit_200 = YPPlist(1,YPPsym((P)"modname"));
  lit_201 = YPPlist(1,YPPsym((P)"quit"));
  lit_202 = YPsb((P)"Exit the top-level interpreter");
  lit_203 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_204 = YPPlist(1,YPPsym((P)"top"));
  T176 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(LITREF(lit_203),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T175,ENVNUL,PNUL,sloc(252));
  T174 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T174,ENVNUL,PNUL,sloc(254));
  T173 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T173,ENVNUL,PNUL,sloc(256));
  T172 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T172,ENVNUL,PNUL,sloc(249));
  T171 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_92 = YPmet(FUNCODEREF(fun_top_92),LITREF(lit_199),T171,ENVNUL,PNUL,sloc(248));
  T178 = VARREF_OR(YevalStopYtop,YPfalse);
  T179 = fun_top_92;
  T177 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T178,T179);
  VARSET(YevalStopYtop,T177);
  lit_205 = YPPsym((P)"save-image");
  lit_206 = YPPlist(1,YPPsym((P)"image-name"));
  lit_207 = YPPsym((P)"goo/user");
  T181 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T181,ENVNUL,PNUL,sloc(259));
  T180 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_205),T180,ENVNUL,PNUL,sloc(258));
  T182 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T182);
  T183 = YPfalse;
  return T183;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSast_eval;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSsystem},
  {&module_info_gooSconditions},
  {&module_info_evalSsyntax},
  {&module_info_evalSast},
  {&module_info_evalSast_eval},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%binding-value-or-of", &module_info_evalSast_eval, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"$sexpr-define-constant-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"%binding-value-of", &module_info_evalSast_eval, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"$sexpr-prop!-tag", &module_info_evalSsyntax, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"%binding-value-or", &module_info_evalSast_eval, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"bt", CVAR, &YevalStopYbt},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"run", DVAR, &YevalStopYrun},
  {"for-user-frames", PVAR, NULL},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"read-file", CVAR, &YevalStopYread_file},
  {"$", CVAR, &YevalStopYD},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"top", CVAR, &YevalStopYtop},
  {"msg-src-loc", CVAR, &YevalStopYmsg_src_loc},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"load", CVAR, &YevalStopYload},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"load-file", CVAR, &YevalStopYload_file},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"parse", CVAR, &YevalStopYparse},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"%%bottom%%vm-run", CVAR, &YevalStopYPPbottomPPvm_run},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"$$$", CVAR, &YevalStopYDDD},
  {"esctst", CVAR, &YevalStopYesctst},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"frame", CVAR, &YevalStopYframe},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"vm-evaluate", CVAR, &YevalStopYvm_evaluate},
  {"---main-0---", PVAR, NULL},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"for-frames", PVAR, NULL},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"$$", CVAR, &YevalStopYDD},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"frame", NULL},
  {"bt", NULL},
  {"g2c-eval", NULL},
  {"load", NULL},
  {"frame-var", NULL},
  {"do-stack-frames", NULL},
  {"auto-eval", NULL},
  {"read-file", NULL},
  {"$", NULL},
  {"load-file", NULL},
  {"eval", NULL},
  {"save-image", NULL},
  {"$$$", NULL},
  {"esctst", NULL},
  {"parse-in", NULL},
  {"vm-evaluate", NULL},
  {"top", NULL},
  {"backtrace", NULL},
  {"$$", NULL},
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
  load_module_evalSast_eval();

  (P)YevalStopY___main_0___();

}

/* END OF GENERATED CODE. */
