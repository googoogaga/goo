/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/top");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/top */

EXT(Yclass_children,"goo/boot","class-children");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Ynot,"goo/boot","not");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YOrev,"goo/boot","@rev");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YevalStopYDD,"eval/top","$$");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YOnew,"goo/boot","@new");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YPtrue,"goo/boot","%true");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalStopYPPbottomPPvm_run,"eval/top","%%bottom%%vm-run");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yerror,"goo/boot","error");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSfunctionalYalways,"goo/functional","always");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
DEF(YevalStopYD,"eval/top","$");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YPfalse,"goo/boot","%false");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YOpick,"goo/boot","@pick");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalStopYmsg_src_loc,"eval/top","msg-src-loc");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YevalSast_evalYbinding_value_or,"eval/ast-eval","binding-value-or");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOrevX,"goo/boot","@rev!");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YevalStopYtop,"eval/top","top");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
DEF(YevalStopYload,"eval/top","load");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_100);
DEFLIT(lit_151);
DEFLIT(lit_71);
DEFLIT(lit_87);
DEFLIT(lit_85);
DEFLIT(lit_182);
DEFLIT(lit_70);
DEFLIT(lit_62);
DEFLIT(lit_208);
DEFLIT(lit_113);
DEFLIT(lit_24);
DEFLIT(lit_105);
DEFLIT(lit_134);
DEFLIT(lit_79);
DEFLIT(lit_165);
DEFLIT(lit_126);
DEFLIT(lit_94);
DEFLIT(lit_108);
DEFLIT(lit_139);
DEFLIT(lit_196);
DEFLIT(lit_1);
DEFLIT(lit_77);
DEFLIT(lit_103);
DEFLIT(lit_144);
DEFLIT(lit_22);
DEFLIT(lit_47);
DEFLIT(lit_18);
DEFLIT(lit_40);
DEFLIT(lit_54);
DEFLIT(lit_186);
DEFLIT(lit_99);
DEFLIT(lit_14);
DEFLIT(lit_66);
DEFLIT(lit_73);
DEFLIT(lit_69);
DEFLIT(lit_191);
DEFLIT(lit_19);
DEFLIT(lit_175);
DEFLIT(lit_171);
DEFLIT(lit_146);
DEFLIT(lit_158);
DEFLIT(lit_127);
DEFLIT(lit_35);
DEFLIT(lit_168);
DEFLIT(lit_78);
DEFLIT(lit_179);
DEFLIT(lit_81);
DEFLIT(lit_9);
DEFLIT(lit_124);
DEFLIT(lit_43);
DEFLIT(lit_27);
DEFLIT(lit_180);
DEFLIT(lit_164);
DEFLIT(lit_178);
DEFLIT(lit_119);
DEFLIT(lit_84);
DEFLIT(lit_116);
DEFLIT(lit_38);
DEFLIT(lit_4);
DEFLIT(lit_33);
DEFLIT(lit_5);
DEFLIT(lit_12);
DEFLIT(lit_8);
DEFLIT(lit_203);
DEFLIT(lit_10);
DEFLIT(lit_20);
DEFLIT(lit_72);
DEFLIT(lit_102);
DEFLIT(lit_17);
DEFLIT(lit_207);
DEFLIT(lit_15);
DEFLIT(lit_60);
DEFLIT(lit_104);
DEFLIT(lit_49);
DEFLIT(lit_152);
DEFLIT(lit_56);
DEFLIT(lit_156);
DEFLIT(lit_21);
DEFLIT(lit_16);
DEFLIT(lit_161);
DEFLIT(lit_93);
DEFLIT(lit_157);
DEFLIT(lit_106);
DEFLIT(lit_199);
DEFLIT(lit_183);
DEFLIT(lit_75);
DEFLIT(lit_210);
DEFLIT(lit_32);
DEFLIT(lit_198);
DEFLIT(lit_185);
DEFLIT(lit_114);
DEFLIT(lit_125);
DEFLIT(lit_6);
DEFLIT(lit_133);
DEFLIT(lit_97);
DEFLIT(lit_76);
DEFLIT(lit_142);
DEFLIT(lit_121);
DEFLIT(lit_150);
DEFLIT(lit_67);
DEFLIT(lit_55);
DEFLIT(lit_52);
DEFLIT(lit_88);
DEFLIT(lit_65);
DEFLIT(lit_147);
DEFLIT(lit_201);
DEFLIT(lit_82);
DEFLIT(lit_44);
DEFLIT(lit_64);
DEFLIT(lit_173);
DEFLIT(lit_89);
DEFLIT(lit_131);
DEFLIT(lit_123);
DEFLIT(lit_3);
DEFLIT(lit_145);
DEFLIT(lit_112);
DEFLIT(lit_13);
DEFLIT(lit_206);
DEFLIT(lit_172);
DEFLIT(lit_120);
DEFLIT(lit_115);
DEFLIT(lit_51);
DEFLIT(lit_110);
DEFLIT(lit_137);
DEFLIT(lit_128);
DEFLIT(lit_132);
DEFLIT(lit_138);
DEFLIT(lit_117);
DEFLIT(lit_46);
DEFLIT(lit_176);
DEFLIT(lit_59);
DEFLIT(lit_162);
DEFLIT(lit_41);
DEFLIT(lit_205);
DEFLIT(lit_31);
DEFLIT(lit_155);
DEFLIT(lit_163);
DEFLIT(lit_80);
DEFLIT(lit_160);
DEFLIT(lit_130);
DEFLIT(lit_135);
DEFLIT(lit_193);
DEFLIT(lit_189);
DEFLIT(lit_174);
DEFLIT(lit_92);
DEFLIT(lit_111);
DEFLIT(lit_129);
DEFLIT(lit_169);
DEFLIT(lit_39);
DEFLIT(lit_141);
DEFLIT(lit_58);
DEFLIT(lit_30);
DEFLIT(lit_170);
DEFLIT(lit_187);
DEFLIT(lit_57);
DEFLIT(lit_86);
DEFLIT(lit_29);
DEFLIT(lit_122);
DEFLIT(lit_50);
DEFLIT(lit_140);
DEFLIT(lit_83);
DEFLIT(lit_109);
DEFLIT(lit_37);
DEFLIT(lit_45);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_149);
DEFLIT(lit_188);
DEFLIT(lit_68);
DEFLIT(lit_36);
DEFLIT(lit_28);
DEFLIT(lit_61);
DEFLIT(lit_90);
DEFLIT(lit_167);
DEFLIT(lit_148);
DEFLIT(lit_107);
DEFLIT(lit_91);
DEFLIT(lit_184);
DEFLIT(lit_197);
DEFLIT(lit_190);
DEFLIT(lit_11);
DEFLIT(lit_194);
DEFLIT(lit_159);
DEFLIT(lit_195);
DEFLIT(lit_181);
DEFLIT(lit_200);
DEFLIT(lit_25);
DEFLIT(lit_23);
DEFLIT(lit_143);
DEFLIT(lit_166);
DEFLIT(lit_48);
DEFLIT(lit_177);
DEFLIT(lit_96);
DEFLIT(lit_209);
DEFLIT(lit_118);
DEFLIT(lit_74);
DEFLIT(lit_192);
DEFLIT(lit_153);
DEFLIT(lit_202);
DEFLIT(lit_136);
DEFLIT(lit_204);
DEFLIT(lit_63);
DEFLIT(lit_53);
DEFLIT(lit_101);
DEFLIT(lit_42);
DEFLIT(lit_34);
DEFLIT(lit_0);
DEFLIT(lit_26);
DEFLIT(lit_95);
DEFLIT(lit_98);
DEFLIT(lit_154);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
FUNFOR(YevalStopYesctst);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_parse_in_6);
LOCFOR(fun_parse_7);
LOCFOR(fun_str_parse_in_8);
LOCFOR(fun_str_parse_9);
FUNFOR(YevalStopYPPbottomPPvm_run);
FUNFOR(YevalStopYPPbottomPPast_run);
FUNFOR(YevalStopYPPbottomPPg2c_run);
FUNFOR(YevalStopYauto_run);
LOCFOR(fun_14);
LOCFOR(fun_15);
FUNFOR(YevalStopYauto_eval);
LOCFOR(fun_eval_in_17);
LOCFOR(fun_eval_18);
LOCFOR(fun_str_eval_in_19);
LOCFOR(fun_str_eval_20);
FUNFOR(YevalStopYcompiled_fileQ);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_read_file_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_load_in_27);
LOCFOR(fun_load_file_28);
LOCFOR(fun_load_29);
LOCFOR(fun_prompt_for_command_expression_30);
LOCFOR(fun_print_result_expression_31);
LOCFOR(fun_do_stack_frames_32);
LOCFOR(fun_x_1542_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_x_1546_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_msg_src_loc_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_backtrace_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_frame_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_frame_var_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_bt_52);
FUNFOR(YevalStopYdo_restart);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1593_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1590_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1587_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1584_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1581_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1578_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1575_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1572_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1569_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1566_80);
LOCFOR(fun_81);
LOCFOR(fun_x_1563_82);
LOCFOR(fun_83);
LOCFOR(fun_x_1560_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1557_86);
LOCFOR(fun_87);
LOCFOR(fun_x_1554_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1551_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_PPtopPPtop_in_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_top_102);
LOCFOR(fun_103);
FUNFOR(YevalStopYsave_image);
extern P YevalStopY___main_0___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_0) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,FREEREF(0),LITREF(lit_3));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
LINK_STACK();
  CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

LOCCODEDEF(fun_2) {
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

LOCCODEDEF(fun_4) {
  P T0,T1;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPfalse);
  T1 = CALL1(1,VARREF(YgooSioSreadYread_from_string),FREEREF(0));
  T0 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),T1,FREEREF(1),YPtrue,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_parse_in_6) {
  P s_,ct_env_;
  P x_1536F4366;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
  x_1536F4366 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_4,2,s_,ct_env_);
  T2 = FUNFAB(fun_5,1,x_1536F4366);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_parse_7) {
  P s_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_str_parse_in_8) {
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

LOCCODEDEF(fun_str_parse_9) {
  P s_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),modname_);
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

LOCCODEDEF(fun_14) {
  P astF4367;
  P T0,T1;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  CALL1(1,VARREF(YevalSmoduleYzap_referenced_bindingsX),FREEREF(0));
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),FREEREF(1),FREEREF(0),YPtrue,YPfalse);
  astF4367 = T1;
  T0 = CALL2(1,DYNREF(YevalStopYrun),astF4367,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYauto_eval) {
  P form_,ct_env_;
  P x_1537F4368;
  P T0,T1,T2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
  x_1537F4368 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_14,2,ct_env_,form_);
  T2 = FUNFAB(fun_15,1,x_1537F4368);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_eval_in_17) {
  P x_,ct_env_;
  P eF4370;
  P oF4369;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPtrue,YPfalse);
  oF4369 = T1;
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),oF4369);
  eF4370 = T0;
UNLINK_STACK();
  QRET(eF4370);
}

LOCCODEDEF(fun_eval_18) {
  P x_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_str_eval_in_19) {
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

LOCCODEDEF(fun_str_eval_20) {
  P x_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),modname_);
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

LOCCODEDEF(fun_22) {
  P xF4372;
  P formsF4371;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  formsF4371 = Ynil;
  LOOP_195: {
    P a195_0;
    T8 = BOXGET(FREEREF(0));
    T7 = CALL1(1,VARREF(YgooSconditionsYread),T8);
    xF4372 = T7;
    T2 = CALL1(1,VARREF(YgooSchrYeof_objectQ),xF4372);
    if (T2 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF4371);
      T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
      T1 = T3;
    } else {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),xF4372,formsF4371);
      a195_0 = T6;
      formsF4371 = a195_0;
      goto LOOP_195;
      T1 = T5;
    }
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_23) {
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

LOCCODEDEF(fun_read_file_24) {
  P filename_;
  P portF4373;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  portF4373 = YPfalse;
  portF4373 = BOXFAB(portF4373);
  T2 = FUNFAB(fun_22,2,portF4373,filename_);
  T3 = FUNFAB(fun_23,1,portF4373);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_25) {
  P oF4375;
  P xF4374;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  T2 = CALL1(1,VARREF(YevalStopYread_file),FREEREF(0));
  xF4374 = T2;
  CALL1(1,VARREF(YevalSmoduleYzap_referenced_bindingsX),FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),xF4374,FREEREF(1),YPfalse,YPfalse);
  oF4375 = T1;
  T0 = CALL2(1,DYNREF(YevalStopYrun),oF4375,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_26) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_load_in_27) {
  P filename_,ct_env_;
  P x_1538F4376;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YevalStopYcompiled_fileQ),filename_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYso_load),filename_);
    T0 = T2;
  } else {
    x_1538F4376 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
    T4 = FUNFAB(fun_25,2,filename_,ct_env_);
    T5 = FUNFAB(fun_26,1,x_1538F4376);
    T3 = with_cleanup(T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_load_file_28) {
  P filename_,modname_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalSmoduleYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_load_29) {
  P name_,modname_;
  P realfileF4377;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
  T3 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF4377 = T3;
  T0 = CALL1(1,VARREF(Ynot),realfileF4377);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T2 = CALL2(1,VARREF(YevalStopYload_file),realfileF4377,modname_);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_prompt_for_command_expression_30) {
  P env_,level_,prompt_;
  P argsF4380;
  P arg_strF4379;
  P formF4378;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
  T1 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),T1);
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_55),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T13 = CALL1(1,VARREF(YgooSconditionsYread),VARREF(YgooSioSportYin));
  formF4378 = T13;
  T4 = CALL2(1,VARREF(YisaQ),formF4378,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yhead),formF4378);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_56));
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  if (T3 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF4379 = T12;
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_57),arg_strF4379,LITREF(lit_58));
    T10 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T11);
    argsF4380 = T10;
    T9 = CALL1(1,VARREF(YgooSmacrosY2nd),formF4378);
    T8 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_59),T9);
    T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,argsF4380);
    T2 = T7;
  } else {
    T2 = formF4378;
  }
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_print_result_expression_31) {
  P env_,level_,label_,result_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
  T1 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),T1);
  CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_62),T0,level_,label_);
  T2 = CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),result_);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_do_stack_frames_32) {
  P fun_;
  P T0;
LINK_STACK();
  ARG(fun_, 0);
  T0 = (P)YPdo_stack_frames(fun_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1542_33) {
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

LOCCODEDEF(fun_34) {
  P return_;
  P x_1541F4395;
  P x_1541F4394;
  P x_1541F4393;
  P x_1541F4392;
  P x_1541F4391;
  P x_1541F4390;
  P x_1541F4389;
  P x_1541F4388;
  P x_1541F4387;
  P bodyF4386;
  P argsF4385;
  P fF4384;
  P numF4383;
  P x_1541F4382;
  P x_1542F4381;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
LINK_STACK();
  ARG(return_, 0);
  T55 = FUNSHELL(0,fun_x_1542_33,2);
  x_1542F4381 = T55;
  FUNINIT(x_1542F4381, 2,FREEREF(0),return_);
  x_1541F4382 = FREEREF(0);
  numF4383 = YPfalse;
  fF4384 = YPfalse;
  argsF4385 = YPfalse;
  bodyF4386 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1541F4382,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1541F4382,LITREF(lit_69),x_1542F4381);
    x_1541F4387 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1541F4387,x_1542F4381);
    x_1541F4388 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1541F4388,x_1542F4381);
    numF4383 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1541F4388);
    x_1541F4389 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1541F4389,x_1542F4381);
    fF4384 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1541F4389);
    x_1541F4390 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1541F4390,x_1542F4381);
    argsF4385 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1541F4390);
    x_1541F4391 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1541F4391,x_1542F4381);
    x_1541F4392 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1541F4392,x_1542F4381);
    T9 = CALL1(1,VARREF(Ytail),x_1541F4391);
    x_1541F4393 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1541F4393,x_1542F4381);
    T17 = CALL1(1,VARREF(Ytail),x_1541F4387);
    x_1541F4394 = T17;
    bodyF4386 = x_1541F4394;
    x_1541F4395 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1541F4395,x_1542F4381);
  } else {
    T19 = CALL2(1,x_1542F4381,LITREF(lit_70),x_1541F4382);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T27 = numF4383;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T28 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T28,LITREF(lit_72));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_72));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T38 = fF4384;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_72));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T44 = argsF4385;
  T43 = CALL1(1,VARREF(Ylst),T44);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T48,LITREF(lit_72));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T45,LITREF(lit_72));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T49 = bodyF4386;
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T54 = numF4383;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,LITREF(lit_72));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T33 = CALLN(1,VARREF(YgooSmacrosYcat),6,T34,T35,T40,T49,T50,LITREF(lit_72));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_72));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T29,LITREF(lit_72));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_35) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_34,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1546_36) {
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

LOCCODEDEF(fun_37) {
  P return_;
  P x_1545F4410;
  P x_1545F4409;
  P x_1545F4408;
  P x_1545F4407;
  P x_1545F4406;
  P x_1545F4405;
  P x_1545F4404;
  P x_1545F4403;
  P x_1545F4402;
  P bodyF4401;
  P argsF4400;
  P fF4399;
  P numF4398;
  P x_1545F4397;
  P x_1546F4396;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110;
LINK_STACK();
  ARG(return_, 0);
  T110 = FUNSHELL(0,fun_x_1546_36,2);
  x_1546F4396 = T110;
  FUNINIT(x_1546F4396, 2,FREEREF(0),return_);
  x_1545F4397 = FREEREF(0);
  numF4398 = YPfalse;
  fF4399 = YPfalse;
  argsF4400 = YPfalse;
  bodyF4401 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1545F4397,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1545F4397,LITREF(lit_82),x_1546F4396);
    x_1545F4402 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1545F4402,x_1546F4396);
    x_1545F4403 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1545F4403,x_1546F4396);
    numF4398 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1545F4403);
    x_1545F4404 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1545F4404,x_1546F4396);
    fF4399 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1545F4404);
    x_1545F4405 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1545F4405,x_1546F4396);
    argsF4400 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1545F4405);
    x_1545F4406 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1545F4406,x_1546F4396);
    x_1545F4407 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1545F4407,x_1546F4396);
    T9 = CALL1(1,VARREF(Ytail),x_1545F4406);
    x_1545F4408 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1545F4408,x_1546F4396);
    T17 = CALL1(1,VARREF(Ytail),x_1545F4402);
    x_1545F4409 = T17;
    bodyF4401 = x_1545F4409;
    x_1545F4410 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1545F4410,x_1546F4396);
  } else {
    T19 = CALL2(1,x_1546F4396,LITREF(lit_70),x_1545F4397);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T27 = CALL1(1,VARREF(Ylst),YPfalse);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_72));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T32 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,LITREF(lit_72));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T40 = fF4399;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T42 = argsF4400;
  T41 = CALL1(1,VARREF(Ylst),T42);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T41,LITREF(lit_72));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T54 = fF4399;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,LITREF(lit_72));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T63 = fF4399;
  T62 = CALL1(1,VARREF(Ylst),T63);
  T60 = CALL3(1,VARREF(YgooSmacrosYcat),T61,T62,LITREF(lit_72));
  T59 = CALL1(1,VARREF(Ylst),T60);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T59,LITREF(lit_72));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T48 = CALL5(1,VARREF(YgooSmacrosYcat),T49,T50,T55,T64,LITREF(lit_72));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_72));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T69 = numF4398;
  T68 = CALL1(1,VARREF(Ylst),T69);
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T71 = CALL4(1,VARREF(YgooSmacrosYcat),T72,T73,T74,LITREF(lit_72));
  T70 = CALL1(1,VARREF(Ylst),T71);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T68,T70,LITREF(lit_72));
  T65 = CALL1(1,VARREF(Ylst),T66);
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T78 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T85 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T83 = CALL4(1,VARREF(YgooSmacrosYcat),T84,T85,T86,LITREF(lit_72));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T90 = CALL1(1,VARREF(Ylst),YPfalse);
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,LITREF(lit_72));
  T87 = CALL1(1,VARREF(Ylst),T88);
  T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T87,LITREF(lit_72));
  T79 = CALL1(1,VARREF(Ylst),T80);
  T91 = bodyF4401;
  T76 = CALL5(1,VARREF(YgooSmacrosYcat),T77,T78,T79,T91,LITREF(lit_72));
  T75 = CALL1(1,VARREF(Ylst),T76);
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T99 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T96 = CALL4(1,VARREF(YgooSmacrosYcat),T97,T98,T99,LITREF(lit_72));
  T95 = CALL1(1,VARREF(Ylst),T96);
  T102 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T104 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T101 = CALL4(1,VARREF(YgooSmacrosYcat),T102,T103,T104,LITREF(lit_72));
  T100 = CALL1(1,VARREF(Ylst),T101);
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T108 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T109 = CALL1(1,VARREF(Ylst),YPtrue);
  T106 = CALL4(1,VARREF(YgooSmacrosYcat),T107,T108,T109,LITREF(lit_72));
  T105 = CALL1(1,VARREF(Ylst),T106);
  T93 = CALL5(1,VARREF(YgooSmacrosYcat),T94,T95,T100,T105,LITREF(lit_72));
  T92 = CALL1(1,VARREF(Ylst),T93);
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),7,T35,T36,T43,T65,T75,T92,LITREF(lit_72));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T20 = CALLN(1,VARREF(YgooSmacrosYcat),6,T21,T22,T23,T28,T33,LITREF(lit_72));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_38) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_37,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_msg_src_loc_39) {
  P f_;
  P slF4411;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  T1 = CALL2(1,VARREF(YisaQ),f_,VARREF(YLmetG));
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSfunYfun_src_loc),f_);
    slF4411 = T7;
    T3 = CALL2(1,VARREF(YisaQ),slF4411,VARREF(YLsrc_locG));
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(Ysrc_loc_file),slF4411);
      T6 = CALL1(1,VARREF(Ysrc_loc_line),slF4411);
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

LOCCODEDEF(fun_40) {
  P f_,Uargs_;
  P numF4414;
  P UnameF4413;
  P argsF4412;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF4412 = T16;
  T13 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_93);
  }
  UnameF4413 = T12;
  T10 = BOXGET(FREEREF(0));
  T11 = BOXGET(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF4414 = T9;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4413,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_107),numF4414,f_,argsF4412);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4413,LITREF(lit_98));
  if (T4 != YPfalse) {
    BOXPUT(numF4414,FREEREF(1));
    T5 = BOXPUT(YPtrue,FREEREF(2));
  } else {
  }
  T8 = BOXGET(FREEREF(0));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXPUT(T7,FREEREF(0));
UNLINK_STACK();
  QRET(T6);
}

LOCCODEDEF(fun_41) {
  P break_;
  P UnumF4417;
  P Utop_numF4416;
  P Useen_topF4415;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF4415 = YPfalse;
  Useen_topF4415 = BOXFAB(Useen_topF4415);
  Utop_numF4416 = YPint((P)0);
  Utop_numF4416 = BOXFAB(Utop_numF4416);
  UnumF4417 = YPint((P)0);
  UnumF4417 = BOXFAB(UnumF4417);
  T4 = FUNFAB(fun_40,4,UnumF4417,Utop_numF4416,Useen_topF4415,break_);
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_backtrace_42) {
  P T0,T1;
LINK_STACK();
  T1 = fun_41;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_43) {
  P f_,Uargs_;
  P numF4420;
  P UnameF4419;
  P argsF4418;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T18 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF4418 = T18;
  T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T15 != YPfalse) {
    T17 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T17);
    T14 = T16;
  } else {
    T14 = LITREF(lit_93);
  }
  UnameF4419 = T14;
  T12 = BOXGET(FREEREF(0));
  T13 = BOXGET(FREEREF(1));
  T11 = CALL2(1,VARREF(YgooSmathY_),T12,T13);
  numF4420 = T11;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4419,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF4420);
    if (T4 != YPfalse) {
      CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_112),numF4420,f_,argsF4418);
      CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
      T5 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4419,LITREF(lit_98));
  if (T6 != YPfalse) {
    BOXPUT(numF4420,FREEREF(1));
    T7 = BOXPUT(YPtrue,FREEREF(2));
  } else {
  }
  T10 = BOXGET(FREEREF(0));
  T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
  T8 = BOXPUT(T9,FREEREF(0));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_44) {
  P break_;
  P UnumF4423;
  P Utop_numF4422;
  P Useen_topF4421;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF4421 = YPfalse;
  Useen_topF4421 = BOXFAB(Useen_topF4421);
  Utop_numF4422 = YPint((P)0);
  Utop_numF4422 = BOXFAB(Utop_numF4422);
  UnumF4423 = YPint((P)0);
  UnumF4423 = BOXFAB(UnumF4423);
  T4 = FUNFAB(fun_43,5,UnumF4423,Utop_numF4422,Useen_topF4421,break_,FREEREF(0));
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_frame_45) {
  P n_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  T1 = FUNFAB(fun_44,1,n_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_46) {
  P f_,Uargs_;
  P numF4426;
  P UnameF4425;
  P argsF4424;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T21 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF4424 = T21;
  T18 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T18 != YPfalse) {
    T20 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
    T17 = T19;
  } else {
    T17 = LITREF(lit_93);
  }
  UnameF4425 = T17;
  T15 = BOXGET(FREEREF(0));
  T16 = BOXGET(FREEREF(1));
  T14 = CALL2(1,VARREF(YgooSmathY_),T15,T16);
  numF4426 = T14;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4425,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF4426);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSfunYfun_names),f_);
      T7 = CALL2(1,VARREF(YgooScolsSseqYpos),T8,FREEREF(5));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),argsF4424,T7);
      T5 = CALL1(1,FREEREF(6),T6);
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T9 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4425,LITREF(lit_98));
  if (T9 != YPfalse) {
    BOXPUT(numF4426,FREEREF(1));
    T10 = BOXPUT(YPtrue,FREEREF(2));
  } else {
  }
  T13 = BOXGET(FREEREF(0));
  T12 = CALL2(1,VARREF(YgooSmathYA),T13,YPint((P)1));
  T11 = BOXPUT(T12,FREEREF(0));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_47) {
  P break_;
  P UnumF4429;
  P Utop_numF4428;
  P Useen_topF4427;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF4427 = YPfalse;
  Useen_topF4427 = BOXFAB(Useen_topF4427);
  Utop_numF4428 = YPint((P)0);
  Utop_numF4428 = BOXFAB(Utop_numF4428);
  UnumF4429 = YPint((P)0);
  UnumF4429 = BOXFAB(UnumF4429);
  T4 = FUNFAB(fun_46,7,UnumF4429,Utop_numF4428,Useen_topF4427,break_,FREEREF(0),FREEREF(1),FREEREF(2));
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_48) {
  P ret_;
  P T0;
LINK_STACK();
  ARG(ret_, 0);
  T0 = FUNFAB(fun_47,3,FREEREF(0),FREEREF(1),ret_);
  with_exit(T0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_frame_var_49) {
  P n_,name_;
  P T0,T1;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
  T1 = FUNFAB(fun_48,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_50) {
  P f_,Uargs_;
  P numF4432;
  P UnameF4431;
  P argsF4430;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF4430 = T16;
  T13 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_93);
  }
  UnameF4431 = T12;
  T10 = BOXGET(FREEREF(0));
  T11 = BOXGET(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF4432 = T9;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4431,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_121),numF4432,f_);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4431,LITREF(lit_98));
  if (T4 != YPfalse) {
    BOXPUT(numF4432,FREEREF(1));
    T5 = BOXPUT(YPtrue,FREEREF(2));
  } else {
  }
  T8 = BOXGET(FREEREF(0));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXPUT(T7,FREEREF(0));
UNLINK_STACK();
  QRET(T6);
}

LOCCODEDEF(fun_51) {
  P break_;
  P UnumF4435;
  P Utop_numF4434;
  P Useen_topF4433;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF4433 = YPfalse;
  Useen_topF4433 = BOXFAB(Useen_topF4433);
  Utop_numF4434 = YPint((P)0);
  Utop_numF4434 = BOXFAB(Utop_numF4434);
  UnumF4435 = YPint((P)0);
  UnumF4435 = BOXFAB(UnumF4435);
  T4 = FUNFAB(fun_50,4,UnumF4435,Utop_numF4434,Useen_topF4433,break_);
  T3 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T4);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_bt_52) {
  P T0,T1;
LINK_STACK();
  T1 = fun_51;
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

LOCCODEDEF(fun_54) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_55) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_56) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  CALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_134));
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_57) {
  P T0,T1;
LINK_STACK();
  T1 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),FREEREF(0));
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_135),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_58) {
  P break_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(break_, 0);
  T1 = fun_55;
  T2 = FUNFAB(fun_56,1,break_);
  T3 = FUNFAB(fun_57,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLerrorG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_59) {
  P c_,r_;
  P x_1548F4437;
  P x_1547F4436;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  x_1547F4436 = c_;
  x_1548F4437 = VARREF(YisaQ);
  T1 = CALL2(0,x_1548F4437,x_1547F4436,VARREF(YgooSconditionsYLkeyboard_interruptG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_131));
    T0 = T2;
  } else {
    T4 = FUNFAB(fun_58,1,c_);
    T3 = with_exit(T4);
    T0 = T3;
  }
  T5 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T6 = BOXGET(FREEREF(3));
  CALL5(1,VARREF(YevalStopYPPtopPPtop_in),T5,FREEREF(1),FREEREF(2),YPtrue,T6);
  T7 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_60) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_61) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1593_62) {
  P msg_,args_;
  P x_1597F4442;
  P x_1596F4441;
  P x_1595F4440;
  P x_1594F4439;
  P resF4438;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T7 = BOXGET(FREEREF(1));
  T6 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T7);
  resF4438 = T6;
  T2 = BOXGET(FREEREF(1));
  T3 = resF4438;
  CALL4(1,VARREF(YevalStopYprint_result_expression),T2,FREEREF(2),LITREF(lit_185),T3);
  x_1594F4439 = VARREF(YevalStopYDDD);
  x_1595F4440 = VARREF(YevalStopYDD);
  x_1596F4441 = VARREF(YevalStopYD);
  T5 = resF4438;
  x_1597F4442 = T5;
  VARSET(YevalStopYDDD,x_1595F4440);
  VARSET(YevalStopYDD,x_1596F4441);
  VARSET(YevalStopYD,x_1597F4442);
  T4 = resF4438 = x_1594F4439;
  T0 = CALL1(1,FREEREF(3),T4);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_63) {
  P return_;
  P x_1592F4451;
  P x_1592F4450;
  P x_1592F4449;
  P x_1592F4448;
  P x_1592F4447;
  P nameF4446;
  P nF4445;
  P x_1592F4444;
  P x_1593F4443;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1593_62,4);
  x_1593F4443 = T18;
  FUNINIT(x_1593F4443, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1592F4444 = FREEREF(3);
  nF4445 = YPfalse;
  nameF4446 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1592F4444,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1592F4444,LITREF(lit_186),x_1593F4443);
    x_1592F4447 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1592F4447,x_1593F4443);
    nF4445 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1592F4447);
    x_1592F4448 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1592F4448,x_1593F4443);
    nameF4446 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1592F4448);
    x_1592F4449 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1592F4449,x_1593F4443);
    x_1592F4450 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1592F4450,x_1593F4443);
    T6 = CALL1(1,VARREF(Ytail),x_1592F4449);
    x_1592F4451 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1592F4451,x_1593F4443);
  } else {
    T12 = CALL2(1,x_1593F4443,LITREF(lit_70),x_1592F4444);
  }
  T14 = BOXGET(FREEREF(1));
  T16 = nF4445;
  T17 = nameF4446;
  T15 = CALL2(1,VARREF(YevalStopYframe_var),T16,T17);
  T13 = CALL4(1,VARREF(YevalStopYprint_result_expression),T14,FREEREF(2),LITREF(lit_187),T15);
UNLINK_STACK();
  QRET(T13);
}

LOCCODEDEF(fun_x_1590_64) {
  P msg_,args_;
  P x_1591F4452;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1591F4452 = FREEREF(0);
  T2 = FUNFAB(fun_63,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1591F4452);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_65) {
  P return_;
  P x_1589F4459;
  P x_1589F4458;
  P x_1589F4457;
  P x_1589F4456;
  P nF4455;
  P x_1589F4454;
  P x_1590F4453;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(return_, 0);
  T12 = FUNSHELL(0,fun_x_1590_64,5);
  x_1590F4453 = T12;
  FUNINIT(x_1590F4453, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1589F4454 = FREEREF(0);
  nF4455 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1589F4454,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1589F4454,LITREF(lit_188),x_1590F4453);
    x_1589F4456 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1589F4456,x_1590F4453);
    nF4455 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1589F4456);
    x_1589F4457 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1589F4457,x_1590F4453);
    x_1589F4458 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1589F4458,x_1590F4453);
    T5 = CALL1(1,VARREF(Ytail),x_1589F4457);
    x_1589F4459 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1589F4459,x_1590F4453);
  } else {
    T9 = CALL2(1,x_1590F4453,LITREF(lit_70),x_1589F4454);
  }
  T11 = nF4455;
  T10 = CALL1(1,VARREF(YevalStopYframe),T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1587_66) {
  P msg_,args_;
  P x_1588F4460;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1588F4460 = FREEREF(0);
  T2 = FUNFAB(fun_65,4,x_1588F4460,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_67) {
  P return_;
  P x_1586F4465;
  P x_1586F4464;
  P x_1586F4463;
  P x_1586F4462;
  P x_1587F4461;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1587_66,5);
  x_1587F4461 = T8;
  FUNINIT(x_1587F4461, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1586F4462 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1586F4462,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1586F4462,LITREF(lit_189),x_1587F4461);
    x_1586F4463 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1586F4463,x_1587F4461);
    x_1586F4464 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1586F4464,x_1587F4461);
    T4 = CALL1(1,VARREF(Ytail),x_1586F4463);
    x_1586F4465 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1586F4465,x_1587F4461);
  } else {
    T6 = CALL2(1,x_1587F4461,LITREF(lit_70),x_1586F4462);
  }
  T7 = CALL0(1,VARREF(YevalStopYbacktrace));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1584_68) {
  P msg_,args_;
  P x_1585F4466;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1585F4466 = FREEREF(0);
  T2 = FUNFAB(fun_67,4,x_1585F4466,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_69) {
  P return_;
  P x_1583F4471;
  P x_1583F4470;
  P x_1583F4469;
  P x_1583F4468;
  P x_1584F4467;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1584_68,5);
  x_1584F4467 = T8;
  FUNINIT(x_1584F4467, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1583F4468 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1583F4468,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1583F4468,LITREF(lit_190),x_1584F4467);
    x_1583F4469 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1583F4469,x_1584F4467);
    x_1583F4470 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1583F4470,x_1584F4467);
    T4 = CALL1(1,VARREF(Ytail),x_1583F4469);
    x_1583F4471 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1583F4471,x_1584F4467);
  } else {
    T6 = CALL2(1,x_1584F4467,LITREF(lit_70),x_1583F4468);
  }
  T7 = CALL0(1,VARREF(YevalStopYbt));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1581_70) {
  P msg_,args_;
  P x_1582F4472;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1582F4472 = FREEREF(0);
  T2 = FUNFAB(fun_69,4,x_1582F4472,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_71) {
  P return_;
  P x_1580F4477;
  P x_1580F4476;
  P x_1580F4475;
  P x_1580F4474;
  P x_1581F4473;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_1581_70,5);
  x_1581F4473 = T9;
  FUNINIT(x_1581F4473, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1580F4474 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1580F4474,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1580F4474,LITREF(lit_191),x_1581F4473);
    x_1580F4475 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1580F4475,x_1581F4473);
    x_1580F4476 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1580F4476,x_1581F4473);
    T4 = CALL1(1,VARREF(Ytail),x_1580F4475);
    x_1580F4477 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1580F4477,x_1581F4473);
  } else {
    T6 = CALL2(1,x_1581F4473,LITREF(lit_70),x_1580F4474);
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

LOCCODEDEF(fun_x_1578_72) {
  P msg_,args_;
  P x_1579F4478;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1579F4478 = FREEREF(0);
  T2 = FUNFAB(fun_71,4,x_1579F4478,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P return_;
  P x_1577F4483;
  P x_1577F4482;
  P x_1577F4481;
  P x_1577F4480;
  P x_1578F4479;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1578_72,5);
  x_1578F4479 = T8;
  FUNINIT(x_1578F4479, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1577F4480 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1577F4480,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1577F4480,LITREF(lit_192),x_1578F4479);
    x_1577F4481 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1577F4481,x_1578F4479);
    x_1577F4482 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1577F4482,x_1578F4479);
    T4 = CALL1(1,VARREF(Ytail),x_1577F4481);
    x_1577F4483 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1577F4483,x_1578F4479);
  } else {
    T6 = CALL2(1,x_1578F4479,LITREF(lit_70),x_1577F4480);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPvm_run));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1575_74) {
  P msg_,args_;
  P x_1576F4484;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1576F4484 = FREEREF(0);
  T2 = FUNFAB(fun_73,4,x_1576F4484,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_75) {
  P return_;
  P x_1574F4489;
  P x_1574F4488;
  P x_1574F4487;
  P x_1574F4486;
  P x_1575F4485;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1575_74,5);
  x_1575F4485 = T8;
  FUNINIT(x_1575F4485, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1574F4486 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1574F4486,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1574F4486,LITREF(lit_193),x_1575F4485);
    x_1574F4487 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1574F4487,x_1575F4485);
    x_1574F4488 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1574F4488,x_1575F4485);
    T4 = CALL1(1,VARREF(Ytail),x_1574F4487);
    x_1574F4489 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1574F4489,x_1575F4485);
  } else {
    T6 = CALL2(1,x_1575F4485,LITREF(lit_70),x_1574F4486);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1572_76) {
  P msg_,args_;
  P x_1573F4490;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1573F4490 = FREEREF(0);
  T2 = FUNFAB(fun_75,4,x_1573F4490,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_77) {
  P return_;
  P x_1571F4495;
  P x_1571F4494;
  P x_1571F4493;
  P x_1571F4492;
  P x_1572F4491;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_1572_76,5);
  x_1572F4491 = T9;
  FUNINIT(x_1572F4491, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1571F4492 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1571F4492,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1571F4492,LITREF(lit_194),x_1572F4491);
    x_1571F4493 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1571F4493,x_1572F4491);
    x_1571F4494 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1571F4494,x_1572F4491);
    T4 = CALL1(1,VARREF(Ytail),x_1571F4493);
    x_1571F4495 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1571F4495,x_1572F4491);
  } else {
    T6 = CALL2(1,x_1572F4491,LITREF(lit_70),x_1571F4492);
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

LOCCODEDEF(fun_x_1569_78) {
  P msg_,args_;
  P x_1570F4496;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1570F4496 = FREEREF(0);
  T2 = FUNFAB(fun_77,4,x_1570F4496,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_79) {
  P return_;
  P new_envF4504;
  P x_1568F4503;
  P x_1568F4502;
  P x_1568F4501;
  P x_1568F4500;
  P mF4499;
  P x_1568F4498;
  P x_1569F4497;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1569_78,5);
  x_1569F4497 = T13;
  FUNINIT(x_1569F4497, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1568F4498 = FREEREF(0);
  mF4499 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1568F4498,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1568F4498,LITREF(lit_195),x_1569F4497);
    x_1568F4500 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1568F4500,x_1569F4497);
    mF4499 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1568F4500);
    x_1568F4501 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1568F4501,x_1569F4497);
    x_1568F4502 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1568F4502,x_1569F4497);
    T5 = CALL1(1,VARREF(Ytail),x_1568F4501);
    x_1568F4503 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1568F4503,x_1569F4497);
  } else {
    T9 = CALL2(1,x_1569F4497,LITREF(lit_70),x_1568F4498);
  }
  T12 = mF4499;
  T11 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),T12);
  new_envF4504 = T11;
  T10 = BOXPUT(new_envF4504,FREEREF(2));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1566_80) {
  P msg_,args_;
  P x_1567F4505;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1567F4505 = FREEREF(0);
  T2 = FUNFAB(fun_79,4,x_1567F4505,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_81) {
  P return_;
  P x_1565F4512;
  P x_1565F4511;
  P x_1565F4510;
  P x_1565F4509;
  P nF4508;
  P x_1565F4507;
  P x_1566F4506;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1566_80,5);
  x_1566F4506 = T13;
  FUNINIT(x_1566F4506, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1565F4507 = FREEREF(0);
  nF4508 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1565F4507,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1565F4507,LITREF(lit_196),x_1566F4506);
    x_1565F4509 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1565F4509,x_1566F4506);
    nF4508 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1565F4509);
    x_1565F4510 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1565F4510,x_1566F4506);
    x_1565F4511 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1565F4511,x_1566F4506);
    T5 = CALL1(1,VARREF(Ytail),x_1565F4510);
    x_1565F4512 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1565F4512,x_1566F4506);
  } else {
    T9 = CALL2(1,x_1566F4506,LITREF(lit_70),x_1565F4507);
  }
  T11 = BOXGET(FREEREF(4));
  T12 = nF4508;
  T10 = CALL2(1,VARREF(YevalStopYdo_restart),T11,T12);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1563_82) {
  P msg_,args_;
  P x_1564F4513;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1564F4513 = FREEREF(0);
  T2 = FUNFAB(fun_81,5,x_1564F4513,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_83) {
  P return_;
  P x_1562F4518;
  P x_1562F4517;
  P x_1562F4516;
  P x_1562F4515;
  P x_1563F4514;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1563_82,6);
  x_1563F4514 = T8;
  FUNINIT(x_1563F4514, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1562F4515 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1562F4515,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1562F4515,LITREF(lit_197),x_1563F4514);
    x_1562F4516 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1562F4516,x_1563F4514);
    x_1562F4517 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1562F4517,x_1563F4514);
    T4 = CALL1(1,VARREF(Ytail),x_1562F4516);
    x_1562F4518 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1562F4518,x_1563F4514);
  } else {
    T6 = CALL2(1,x_1563F4514,LITREF(lit_70),x_1562F4515);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1560_84) {
  P msg_,args_;
  P x_1561F4519;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1561F4519 = FREEREF(0);
  T2 = FUNFAB(fun_83,5,x_1561F4519,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_85) {
  P return_;
  P x_1559F4524;
  P x_1559F4523;
  P x_1559F4522;
  P x_1559F4521;
  P x_1560F4520;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1560_84,6);
  x_1560F4520 = T8;
  FUNINIT(x_1560F4520, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1559F4521 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1559F4521,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1559F4521,LITREF(lit_198),x_1560F4520);
    x_1559F4522 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1559F4522,x_1560F4520);
    x_1559F4523 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1559F4523,x_1560F4520);
    T4 = CALL1(1,VARREF(Ytail),x_1559F4522);
    x_1559F4524 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1559F4524,x_1560F4520);
  } else {
    T6 = CALL2(1,x_1560F4520,LITREF(lit_70),x_1559F4521);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1557_86) {
  P msg_,args_;
  P x_1558F4525;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1558F4525 = FREEREF(0);
  T2 = FUNFAB(fun_85,5,x_1558F4525,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_87) {
  P return_;
  P x_1556F4530;
  P x_1556F4529;
  P x_1556F4528;
  P x_1556F4527;
  P x_1557F4526;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1557_86,6);
  x_1557F4526 = T8;
  FUNINIT(x_1557F4526, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1556F4527 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1556F4527,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1556F4527,LITREF(lit_199),x_1557F4526);
    x_1556F4528 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1556F4528,x_1557F4526);
    x_1556F4529 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1556F4529,x_1557F4526);
    T4 = CALL1(1,VARREF(Ytail),x_1556F4528);
    x_1556F4530 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1556F4530,x_1557F4526);
  } else {
    T6 = CALL2(1,x_1557F4526,LITREF(lit_70),x_1556F4527);
  }
  T7 = CALL1(0,FREEREF(5),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1554_88) {
  P msg_,args_;
  P x_1555F4531;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1555F4531 = FREEREF(0);
  T2 = FUNFAB(fun_87,6,x_1555F4531,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_89) {
  P return_;
  P x_1553F4536;
  P x_1553F4535;
  P x_1553F4534;
  P x_1553F4533;
  P x_1554F4532;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1554_88,7);
  x_1554F4532 = T8;
  FUNINIT(x_1554F4532, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1553F4533 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1553F4533,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1553F4533,LITREF(lit_200),x_1554F4532);
    x_1553F4534 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1553F4534,x_1554F4532);
    x_1553F4535 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1553F4535,x_1554F4532);
    T4 = CALL1(1,VARREF(Ytail),x_1553F4534);
    x_1553F4536 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1553F4536,x_1554F4532);
  } else {
    T6 = CALL2(1,x_1554F4532,LITREF(lit_70),x_1553F4533);
  }
  T7 = CALL1(0,FREEREF(6),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1551_90) {
  P msg_,args_;
  P x_1552F4537;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1552F4537 = FREEREF(0);
  T2 = FUNFAB(fun_89,7,x_1552F4537,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_91) {
  P return_;
  P x_1550F4542;
  P x_1550F4541;
  P x_1550F4540;
  P x_1550F4539;
  P x_1551F4538;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1551_90,8);
  x_1551F4538 = T8;
  FUNINIT(x_1551F4538, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1550F4539 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1550F4539,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1550F4539,LITREF(lit_201),x_1551F4538);
    x_1550F4540 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1550F4540,x_1551F4538);
    x_1550F4541 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1550F4541,x_1551F4538);
    T4 = CALL1(1,VARREF(Ytail),x_1550F4540);
    x_1550F4542 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1550F4542,x_1551F4538);
  } else {
    T6 = CALL2(1,x_1551F4538,LITREF(lit_70),x_1550F4539);
  }
  T7 = CALL1(0,FREEREF(7),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_92) {
  P x_1549F4544;
  P formF4543;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXGET(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_138));
    T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
    BOXPUT(T1,FREEREF(1));
    T2 = BOXPUT(YPfalse,FREEREF(0));
  } else {
  }
  T9 = BOXGET(FREEREF(2));
  T8 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T9,FREEREF(3),LITREF(lit_139));
  formF4543 = T8;
  T4 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF4543);
  if (T4 != YPfalse) {
    T5 = CALL1(1,FREEREF(4),YPfalse);
    T3 = T5;
  } else {
    x_1549F4544 = formF4543;
    T7 = FUNFAB(fun_91,8,x_1549F4544,formF4543,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
    T6 = with_exit(T7);
    T3 = T6;
  }
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_93) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_136),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_60;
  T4 = FUNFAB(fun_61,1,FREEREF(1));
  T5 = FUNFAB(fun_92,7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6),FREEREF(7));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_94) {
  P continue_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(continue_, 0);
  T1 = fun_54;
  T2 = FUNFAB(fun_59,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_93,8,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(6));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLconditionG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_95) {
  P blow_;
  P T0,T1;
LINK_STACK();
  ARG(blow_, 0);
  LOOP_196: {
    T0 = FUNFAB(fun_94,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_);
    with_exit(T0);
    goto LOOP_196;
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_PPtopPPtop_in_96) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF4545;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF4545 = YPfalse;
  restartsF4545 = BOXFAB(restartsF4545);
  T4 = FUNFAB(fun_95,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF4545);
  T3 = with_exit(T4);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_97) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_98) {
  P c_,r_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_99) {
  P top_;
  P T0,T1;
LINK_STACK();
  ARG(top_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),FREEREF(1));
  T0 = CALL5(1,VARREF(YevalStopYPPtopPPtop_in),YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_100) {
  P T0,T1;
LINK_STACK();
  LOOP_197: {
    T0 = FUNFAB(fun_99,2,FREEREF(0),FREEREF(1));
    with_exit(T0);
    goto LOOP_197;
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_101) {
  P quit_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(quit_, 0);
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_205),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_97;
  T4 = FUNFAB(fun_98,1,quit_);
  T5 = FUNFAB(fun_100,2,quit_,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_top_102) {
  P modname_;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = FUNFAB(fun_101,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_103) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_210));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYsave_image) {
  P image_name_;
  P T0,T1;
LINK_STACK();
  ARG(image_name_, 0);
  T1 = fun_103;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YevalStopY___main_0___() {
  P tmpF4547;
  P modeF4546;
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
  P T192,T193;
DEFCREGS();
  lit_0 = YPPsym((P)"esctst");
  lit_1 = Ynil;
  lit_2 = YPPlist(1,YPPsym((P)"exit"));
  lit_3 = YPPsym((P)"exit");
  lit_4 = YPsb((P)"CLEANUP\n");
  lit_5 = YPPsym((P)"cleanup");
  lit_6 = YPsb((P)"DO\n");
  lit_7 = YPPsym((P)"done");
  T3 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_0 = YPfab_met(FUNCODEREF(fun_0),T3,YPfalse,LITREF(lit_1),sloc(14),YPfalse);
  T2 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T2,YPfalse,LITREF(lit_1),sloc(15),YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T1,YPfalse,LITREF(lit_2),sloc(13),YPfalse);
  T0 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalStopYesctst = YPfab_met(FUNCODEREF(YevalStopYesctst),T0,LITREF(lit_0),LITREF(lit_1),sloc(12),YPfalse);
  T4 = YevalStopYesctst;
  VARSET(YevalStopYesctst,T4);
  lit_8 = YPPsym((P)"g2c-eval");
  lit_9 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"ct-env"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T5 = YPfab_gen(T6,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YevalStopYg2c_eval,T5);
  lit_10 = YPPsym((P)"parse-in");
  lit_11 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"ct-env"));
  T9 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_4 = YPfab_met(FUNCODEREF(fun_4),T9,YPfalse,LITREF(lit_1),sloc(23),YPfalse);
  T8 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T8,YPfalse,LITREF(lit_1),sloc(23),YPfalse);
  T7 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_6 = YPfab_met(FUNCODEREF(fun_parse_in_6),T7,LITREF(lit_10),LITREF(lit_11),sloc(22),YPfalse);
  T11 = VARREF_OR(YevalStopYparse_in,YPfalse);
  T12 = fun_parse_in_6;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalStopYparse_in,T10);
  lit_12 = YPPsym((P)"parse");
  lit_13 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_7 = YPfab_met(FUNCODEREF(fun_parse_7),T13,LITREF(lit_12),LITREF(lit_13),sloc(26),YPfalse);
  T15 = VARREF_OR(YevalStopYparse,YPfalse);
  T16 = fun_parse_7;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalStopYparse,T14);
  lit_14 = YPPsym((P)"str-parse-in");
  lit_15 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"ct-env"));
  lit_16 = YPsb((P)"%=\n");
  T17 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_8 = YPfab_met(FUNCODEREF(fun_str_parse_in_8),T17,LITREF(lit_14),LITREF(lit_15),sloc(29),YPfalse);
  T19 = VARREF_OR(YevalStopYstr_parse_in,YPfalse);
  T20 = fun_str_parse_in_8;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YevalStopYstr_parse_in,T18);
  lit_17 = YPPsym((P)"str-parse");
  lit_18 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T21 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_9 = YPfab_met(FUNCODEREF(fun_str_parse_9),T21,LITREF(lit_17),LITREF(lit_18),sloc(32),YPfalse);
  T23 = VARREF_OR(YevalStopYstr_parse,YPfalse);
  T24 = fun_str_parse_9;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YevalStopYstr_parse,T22);
  lit_19 = YPPsym((P)"vm-evaluate");
  lit_20 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T25 = YPfab_gen(T26,LITREF(lit_19),LITREF(lit_20),YPfalse);
  VARSET(YevalStopYvm_evaluate,T25);
  lit_21 = YPPsym((P)"%%bottom%%vm-run");
  lit_22 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T27 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPvm_run = YPfab_met(FUNCODEREF(YevalStopYPPbottomPPvm_run),T27,LITREF(lit_21),LITREF(lit_22),sloc(37),YPfalse);
  T28 = YevalStopYPPbottomPPvm_run;
  VARSET(YevalStopYPPbottomPPvm_run,T28);
  lit_23 = YPPsym((P)"%%bottom%%ast-run");
  lit_24 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPast_run = YPfab_met(FUNCODEREF(YevalStopYPPbottomPPast_run),T29,LITREF(lit_23),LITREF(lit_24),sloc(40),YPfalse);
  T30 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T30);
  lit_25 = YPPsym((P)"%%bottom%%g2c-run");
  lit_26 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPfab_met(FUNCODEREF(YevalStopYPPbottomPPg2c_run),T31,LITREF(lit_25),LITREF(lit_26),sloc(43),YPfalse);
  T32 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T32);
  lit_27 = YPPsym((P)"auto-run");
  lit_28 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPfab_met(FUNCODEREF(YevalStopYauto_run),T33,LITREF(lit_27),LITREF(lit_28),sloc(46),YPfalse);
  T34 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T34);
  lit_29 = YPPsym((P)"auto-eval");
  lit_30 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"ct-env"));
  T37 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T37,YPfalse,LITREF(lit_1),sloc(52),YPfalse);
  T36 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T36,YPfalse,LITREF(lit_1),sloc(52),YPfalse);
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPfab_met(FUNCODEREF(YevalStopYauto_eval),T35,LITREF(lit_29),LITREF(lit_30),sloc(51),YPfalse);
  T38 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T38);
  lit_31 = YPsb((P)"GOO_EVAL_MODE");
  lit_32 = YPsb((P)"ast");
  lit_33 = YPsb((P)"g2c");
  T44 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_31));
  modeF4546 = T44;
  T41 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF4546,LITREF(lit_32));
  T40 = XCALL1(1,VARREF(Ynot),T41);
  if (T40 != YPfalse) {
    T43 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF4546,LITREF(lit_33));
    tmpF4547 = T43;
    if (tmpF4547 != YPfalse) {
      T42 = tmpF4547;
    } else {
      T42 = YPtrue;
    }
    T39 = T42;
  } else {
    T39 = YPfalse;
  }
  VARSET(YevalStopYDg2c_evalQ,T39);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T45 = VARREF(YevalStopYauto_run);
  } else {
    T45 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T45);
  lit_34 = YPPsym((P)"eval-in");
  lit_35 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_17 = YPfab_met(FUNCODEREF(fun_eval_in_17),T46,LITREF(lit_34),LITREF(lit_35),sloc(65),YPfalse);
  T48 = VARREF_OR(YevalStopYeval_in,YPfalse);
  T49 = fun_eval_in_17;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalStopYeval_in,T47);
  lit_36 = YPPsym((P)"eval");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_18 = YPfab_met(FUNCODEREF(fun_eval_18),T50,LITREF(lit_36),LITREF(lit_37),sloc(70),YPfalse);
  T52 = VARREF_OR(YevalSsyntaxYeval,YPfalse);
  T53 = fun_eval_18;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSsyntaxYeval,T51);
  lit_38 = YPPsym((P)"str-eval-in");
  lit_39 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_19 = YPfab_met(FUNCODEREF(fun_str_eval_in_19),T54,LITREF(lit_38),LITREF(lit_39),sloc(73),YPfalse);
  T56 = VARREF_OR(YevalStopYstr_eval_in,YPfalse);
  T57 = fun_str_eval_in_19;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalStopYstr_eval_in,T55);
  lit_40 = YPPsym((P)"str-eval");
  lit_41 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T58 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_20 = YPfab_met(FUNCODEREF(fun_str_eval_20),T58,LITREF(lit_40),LITREF(lit_41),sloc(76),YPfalse);
  T60 = VARREF_OR(YevalStopYstr_eval,YPfalse);
  T61 = fun_str_eval_20;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalStopYstr_eval,T59);
  lit_42 = YPPsym((P)"compiled-file?");
  lit_43 = YPPlist(1,YPPsym((P)"name"));
  lit_44 = YPsb((P)".gooc");
  T62 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPfab_met(FUNCODEREF(YevalStopYcompiled_fileQ),T62,LITREF(lit_42),LITREF(lit_43),sloc(79),YPfalse);
  T63 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T63);
  lit_45 = YPPsym((P)"read-file");
  lit_46 = YPPlist(1,YPPsym((P)"filename"));
  T66 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T66,YPfalse,LITREF(lit_1),sloc(83),YPfalse);
  T65 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T65,YPfalse,LITREF(lit_1),sloc(83),YPfalse);
  T64 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_24 = YPfab_met(FUNCODEREF(fun_read_file_24),T64,LITREF(lit_45),LITREF(lit_46),sloc(82),YPfalse);
  T68 = VARREF_OR(YevalStopYread_file,YPfalse);
  T69 = fun_read_file_24;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalStopYread_file,T67);
  lit_47 = YPPsym((P)"load-in");
  lit_48 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  T72 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T72,YPfalse,LITREF(lit_1),sloc(93),YPfalse);
  T71 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T71,YPfalse,LITREF(lit_1),sloc(93),YPfalse);
  T70 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_27 = YPfab_met(FUNCODEREF(fun_load_in_27),T70,LITREF(lit_47),LITREF(lit_48),sloc(90),YPfalse);
  T74 = VARREF_OR(YevalSmoduleYload_in,YPfalse);
  T75 = fun_load_in_27;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSmoduleYload_in,T73);
  lit_49 = YPPsym((P)"load-file");
  lit_50 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"modname"));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_28 = YPfab_met(FUNCODEREF(fun_load_file_28),T76,LITREF(lit_49),LITREF(lit_50),sloc(102),YPfalse);
  T78 = VARREF_OR(YevalStopYload_file,YPfalse);
  T79 = fun_load_file_28;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalStopYload_file,T77);
  lit_51 = YPPsym((P)"load");
  lit_52 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"modname"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_29 = YPfab_met(FUNCODEREF(fun_load_29),T80,LITREF(lit_51),LITREF(lit_52),sloc(105),YPfalse);
  T82 = VARREF_OR(YevalStopYload,YPfalse);
  T83 = fun_load_29;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalStopYload,T81);
  lit_53 = YPPsym((P)"prompt-for-command-expression");
  lit_54 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"prompt"));
  lit_55 = YPsb((P)"%s %=%s");
  lit_56 = YPPsym((P)"unquote");
  lit_57 = YPsb((P)"(");
  lit_58 = YPsb((P)")");
  lit_59 = YPsb((P)"cmd_");
  T84 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_30 = YPfab_met(FUNCODEREF(fun_prompt_for_command_expression_30),T84,LITREF(lit_53),LITREF(lit_54),sloc(111),YPfalse);
  T86 = VARREF_OR(YevalStopYprompt_for_command_expression,YPfalse);
  T87 = fun_prompt_for_command_expression_30;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalStopYprompt_for_command_expression,T85);
  lit_60 = YPPsym((P)"print-result-expression");
  lit_61 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"label"),YPPsym((P)"result"));
  lit_62 = YPsb((P)"%s %=%s");
  T88 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_31 = YPfab_met(FUNCODEREF(fun_print_result_expression_31),T88,LITREF(lit_60),LITREF(lit_61),sloc(121),YPfalse);
  T90 = VARREF_OR(YevalStopYprint_result_expression,YPfalse);
  T91 = fun_print_result_expression_31;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalStopYprint_result_expression,T89);
  lit_63 = YPPsym((P)"do-stack-frames");
  lit_64 = YPPlist(1,YPPsym((P)"fun"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_32 = YPfab_met(FUNCODEREF(fun_do_stack_frames_32),T92,LITREF(lit_63),LITREF(lit_64),sloc(125),YPfalse);
  T94 = VARREF_OR(YevalStopYdo_stack_frames,YPfalse);
  T95 = fun_do_stack_frames_32;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalStopYdo_stack_frames,T93);
  lit_65 = YPPlist(1,YPPsym((P)"exp"));
  lit_66 = YPPlist(1,YPPsym((P)"return"));
  lit_67 = YPPsym((P)"x-1542");
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
  T98 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1542_33 = YPfab_met(FUNCODEREF(fun_x_1542_33),T98,LITREF(lit_67),LITREF(lit_68),YPfalse,YPfalse);
  T97 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T97,YPfalse,LITREF(lit_66),YPfalse,YPfalse);
  T96 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPfab_met(FUNCODEREF(fun_35),T96,YPfalse,LITREF(lit_65),YPfalse,YPfalse);
  T99 = fun_35;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T99);
  lit_78 = YPPlist(1,YPPsym((P)"exp"));
  lit_79 = YPPlist(1,YPPsym((P)"return"));
  lit_80 = YPPsym((P)"x-1546");
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
  T102 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1546_36 = YPfab_met(FUNCODEREF(fun_x_1546_36),T102,LITREF(lit_80),LITREF(lit_81),YPfalse,YPfalse);
  T101 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T101,YPfalse,LITREF(lit_79),YPfalse,YPfalse);
  T100 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T100,YPfalse,LITREF(lit_78),YPfalse,YPfalse);
  T103 = fun_38;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T103);
  lit_101 = YPPsym((P)"msg-src-loc");
  lit_102 = YPPlist(1,YPPsym((P)"f"));
  lit_103 = YPsb((P)" %s:%d");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_msg_src_loc_39 = YPfab_met(FUNCODEREF(fun_msg_src_loc_39),T104,LITREF(lit_101),LITREF(lit_102),sloc(148),YPfalse);
  T106 = VARREF_OR(YevalStopYmsg_src_loc,YPfalse);
  T107 = fun_msg_src_loc_39;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalStopYmsg_src_loc,T105);
  lit_104 = YPPsym((P)"backtrace");
  lit_105 = YPPlist(1,YPPsym((P)"break"));
  lit_106 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_107 = YPsb((P)"[%=] %= %=");
  T110 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T110,YPfalse,LITREF(lit_106),sloc(155),YPfalse);
  T109 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPfab_met(FUNCODEREF(fun_41),T109,YPfalse,LITREF(lit_105),sloc(155),YPfalse);
  T108 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_42 = YPfab_met(FUNCODEREF(fun_backtrace_42),T108,LITREF(lit_104),LITREF(lit_1),sloc(154),YPfalse);
  T112 = VARREF_OR(YevalStopYbacktrace,YPfalse);
  T113 = fun_backtrace_42;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalStopYbacktrace,T111);
  lit_108 = YPPsym((P)"frame");
  lit_109 = YPPlist(1,YPPsym((P)"n"));
  lit_110 = YPPlist(1,YPPsym((P)"break"));
  lit_111 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_112 = YPsb((P)"[%=] %= %=");
  T116 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T116,YPfalse,LITREF(lit_111),sloc(159),YPfalse);
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T115,YPfalse,LITREF(lit_110),sloc(159),YPfalse);
  T114 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_45 = YPfab_met(FUNCODEREF(fun_frame_45),T114,LITREF(lit_108),LITREF(lit_109),sloc(158),YPfalse);
  T118 = VARREF_OR(YevalStopYframe,YPfalse);
  T119 = fun_frame_45;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalStopYframe,T117);
  lit_113 = YPPsym((P)"frame-var");
  lit_114 = YPPlist(2,YPPsym((P)"n"),YPPsym((P)"name"));
  lit_115 = YPPlist(1,YPPsym((P)"ret"));
  lit_116 = YPPlist(1,YPPsym((P)"break"));
  lit_117 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  T123 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_46 = YPfab_met(FUNCODEREF(fun_46),T123,YPfalse,LITREF(lit_117),sloc(165),YPfalse);
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T122,YPfalse,LITREF(lit_116),sloc(165),YPfalse);
  T121 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T121,YPfalse,LITREF(lit_115),sloc(164),YPfalse);
  T120 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_49 = YPfab_met(FUNCODEREF(fun_frame_var_49),T120,LITREF(lit_113),LITREF(lit_114),sloc(163),YPfalse);
  T125 = VARREF_OR(YevalStopYframe_var,YPfalse);
  T126 = fun_frame_var_49;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalStopYframe_var,T124);
  lit_118 = YPPsym((P)"bt");
  lit_119 = YPPlist(1,YPPsym((P)"break"));
  lit_120 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_121 = YPsb((P)"[%=] %=");
  T129 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T129,YPfalse,LITREF(lit_120),sloc(172),YPfalse);
  T128 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T128,YPfalse,LITREF(lit_119),sloc(172),YPfalse);
  T127 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_52 = YPfab_met(FUNCODEREF(fun_bt_52),T127,LITREF(lit_118),LITREF(lit_1),sloc(171),YPfalse);
  T131 = VARREF_OR(YevalStopYbt,YPfalse);
  T132 = fun_bt_52;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalStopYbt,T130);
  lit_122 = YPPsym((P)"do-restart");
  lit_123 = YPPlist(2,YPPsym((P)"restarts"),YPPsym((P)"n"));
  lit_124 = YPsb((P)"No restarts available.\n");
  lit_125 = YPsb((P)"No restart #%d.\n");
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPfab_met(FUNCODEREF(YevalStopYdo_restart),T133,LITREF(lit_122),LITREF(lit_123),sloc(175),YPfalse);
  T134 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T134);
  VARSET(YevalStopYD,YPfalse);
  VARSET(YevalStopYDD,YPfalse);
  VARSET(YevalStopYDDD,YPfalse);
  lit_126 = YPPsym((P)"%%top%%top-in");
  lit_127 = YPPlist(5,YPPsym((P)"level"),YPPsym((P)"top"),YPPsym((P)"quit"),YPPsym((P)"show-restarts?"),YPPsym((P)"ct-env"));
  lit_128 = YPPlist(1,YPPsym((P)"blow"));
  lit_129 = YPPlist(1,YPPsym((P)"continue"));
  lit_130 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_131 = YPsb((P)"BREAK");
  lit_132 = YPPlist(1,YPPsym((P)"break"));
  lit_133 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_134 = YPsb((P)"<RECURSIVE ERROR ABORTING...>");
  lit_135 = YPsb((P)"ERROR: %s");
  lit_136 = YPsb((P)"Return to interpreter level %d");
  lit_137 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_138 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_139 = YPsb((P)"<= ");
  lit_140 = YPPlist(1,YPPsym((P)"return"));
  lit_141 = YPPsym((P)"x-1551");
  lit_142 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_143 = YPPlist(1,YPPsym((P)"return"));
  lit_144 = YPPsym((P)"x-1554");
  lit_145 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-1557");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPPlist(1,YPPsym((P)"return"));
  lit_150 = YPPsym((P)"x-1560");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPPlist(1,YPPsym((P)"return"));
  lit_153 = YPPsym((P)"x-1563");
  lit_154 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_155 = YPPlist(1,YPPsym((P)"return"));
  lit_156 = YPPsym((P)"x-1566");
  lit_157 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_158 = YPPlist(1,YPPsym((P)"return"));
  lit_159 = YPPsym((P)"x-1569");
  lit_160 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_161 = YPPlist(1,YPPsym((P)"return"));
  lit_162 = YPPsym((P)"x-1572");
  lit_163 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_164 = YPPlist(1,YPPsym((P)"return"));
  lit_165 = YPPsym((P)"x-1575");
  lit_166 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-1578");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPPlist(1,YPPsym((P)"return"));
  lit_171 = YPPsym((P)"x-1581");
  lit_172 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_173 = YPPlist(1,YPPsym((P)"return"));
  lit_174 = YPPsym((P)"x-1584");
  lit_175 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_176 = YPPlist(1,YPPsym((P)"return"));
  lit_177 = YPPsym((P)"x-1587");
  lit_178 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_179 = YPPlist(1,YPPsym((P)"return"));
  lit_180 = YPPsym((P)"x-1590");
  lit_181 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_182 = YPPlist(1,YPPsym((P)"return"));
  lit_183 = YPPsym((P)"x-1593");
  lit_184 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_185 = YPsb((P)"=> ");
  lit_186 = YPPsym((P)"cmd_frame-var");
  lit_187 = YPsb((P)"=> ");
  lit_188 = YPPsym((P)"cmd_frame");
  lit_189 = YPPsym((P)"cmd_backtrace");
  lit_190 = YPPsym((P)"cmd_bt");
  lit_191 = YPPsym((P)"cmd_auto-eval");
  lit_192 = YPPsym((P)"cmd_vm-eval");
  lit_193 = YPPsym((P)"cmd_ast-eval");
  lit_194 = YPPsym((P)"cmd_g2c-eval");
  lit_195 = YPPsym((P)"cmd_in");
  lit_196 = YPPsym((P)"cmd_restart");
  lit_197 = YPPsym((P)"cmd_restarts");
  lit_198 = YPPsym((P)"cmd_handlers");
  lit_199 = YPPsym((P)"cmd_top");
  lit_200 = YPPsym((P)"cmd_up");
  lit_201 = YPPsym((P)"cmd_quit");
  T177 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T177,YPfalse,LITREF(lit_1),YPfalse,YPfalse);
  T176 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_55 = YPfab_met(FUNCODEREF(fun_55),T176,YPfalse,LITREF(lit_1),YPfalse,YPfalse);
  T175 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_56 = YPfab_met(FUNCODEREF(fun_56),T175,YPfalse,LITREF(lit_133),sloc(201),YPfalse);
  T174 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T174,YPfalse,LITREF(lit_1),sloc(204),YPfalse);
  T173 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPfab_met(FUNCODEREF(fun_58),T173,YPfalse,LITREF(lit_132),sloc(199),YPfalse);
  T172 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_59 = YPfab_met(FUNCODEREF(fun_59),T172,YPfalse,LITREF(lit_130),sloc(194),YPfalse);
  T171 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_60 = YPfab_met(FUNCODEREF(fun_60),T171,YPfalse,LITREF(lit_1),YPfalse,YPfalse);
  T170 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_61 = YPfab_met(FUNCODEREF(fun_61),T170,YPfalse,LITREF(lit_137),sloc(210),YPfalse);
  T169 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1593_62 = YPfab_met(FUNCODEREF(fun_x_1593_62),T169,LITREF(lit_183),LITREF(lit_184),YPfalse,YPfalse);
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T168,YPfalse,LITREF(lit_182),YPfalse,YPfalse);
  T167 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1590_64 = YPfab_met(FUNCODEREF(fun_x_1590_64),T167,LITREF(lit_180),LITREF(lit_181),YPfalse,YPfalse);
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T166,YPfalse,LITREF(lit_179),YPfalse,YPfalse);
  T165 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1587_66 = YPfab_met(FUNCODEREF(fun_x_1587_66),T165,LITREF(lit_177),LITREF(lit_178),YPfalse,YPfalse);
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPfab_met(FUNCODEREF(fun_67),T164,YPfalse,LITREF(lit_176),YPfalse,YPfalse);
  T163 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1584_68 = YPfab_met(FUNCODEREF(fun_x_1584_68),T163,LITREF(lit_174),LITREF(lit_175),YPfalse,YPfalse);
  T162 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T162,YPfalse,LITREF(lit_173),YPfalse,YPfalse);
  T161 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1581_70 = YPfab_met(FUNCODEREF(fun_x_1581_70),T161,LITREF(lit_171),LITREF(lit_172),YPfalse,YPfalse);
  T160 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPfab_met(FUNCODEREF(fun_71),T160,YPfalse,LITREF(lit_170),YPfalse,YPfalse);
  T159 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1578_72 = YPfab_met(FUNCODEREF(fun_x_1578_72),T159,LITREF(lit_168),LITREF(lit_169),YPfalse,YPfalse);
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T158,YPfalse,LITREF(lit_167),YPfalse,YPfalse);
  T157 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1575_74 = YPfab_met(FUNCODEREF(fun_x_1575_74),T157,LITREF(lit_165),LITREF(lit_166),YPfalse,YPfalse);
  T156 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T156,YPfalse,LITREF(lit_164),YPfalse,YPfalse);
  T155 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1572_76 = YPfab_met(FUNCODEREF(fun_x_1572_76),T155,LITREF(lit_162),LITREF(lit_163),YPfalse,YPfalse);
  T154 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPfab_met(FUNCODEREF(fun_77),T154,YPfalse,LITREF(lit_161),YPfalse,YPfalse);
  T153 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1569_78 = YPfab_met(FUNCODEREF(fun_x_1569_78),T153,LITREF(lit_159),LITREF(lit_160),YPfalse,YPfalse);
  T152 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T152,YPfalse,LITREF(lit_158),YPfalse,YPfalse);
  T151 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1566_80 = YPfab_met(FUNCODEREF(fun_x_1566_80),T151,LITREF(lit_156),LITREF(lit_157),YPfalse,YPfalse);
  T150 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPfab_met(FUNCODEREF(fun_81),T150,YPfalse,LITREF(lit_155),YPfalse,YPfalse);
  T149 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1563_82 = YPfab_met(FUNCODEREF(fun_x_1563_82),T149,LITREF(lit_153),LITREF(lit_154),YPfalse,YPfalse);
  T148 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPfab_met(FUNCODEREF(fun_83),T148,YPfalse,LITREF(lit_152),YPfalse,YPfalse);
  T147 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1560_84 = YPfab_met(FUNCODEREF(fun_x_1560_84),T147,LITREF(lit_150),LITREF(lit_151),YPfalse,YPfalse);
  T146 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPfab_met(FUNCODEREF(fun_85),T146,YPfalse,LITREF(lit_149),YPfalse,YPfalse);
  T145 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1557_86 = YPfab_met(FUNCODEREF(fun_x_1557_86),T145,LITREF(lit_147),LITREF(lit_148),YPfalse,YPfalse);
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T144,YPfalse,LITREF(lit_146),YPfalse,YPfalse);
  T143 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1554_88 = YPfab_met(FUNCODEREF(fun_x_1554_88),T143,LITREF(lit_144),LITREF(lit_145),YPfalse,YPfalse);
  T142 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T142,YPfalse,LITREF(lit_143),YPfalse,YPfalse);
  T141 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1551_90 = YPfab_met(FUNCODEREF(fun_x_1551_90),T141,LITREF(lit_141),LITREF(lit_142),YPfalse,YPfalse);
  T140 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPfab_met(FUNCODEREF(fun_91),T140,YPfalse,LITREF(lit_140),YPfalse,YPfalse);
  T139 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_92 = YPfab_met(FUNCODEREF(fun_92),T139,YPfalse,LITREF(lit_1),sloc(211),YPfalse);
  T138 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_93 = YPfab_met(FUNCODEREF(fun_93),T138,YPfalse,LITREF(lit_1),sloc(256),YPfalse);
  T137 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPfab_met(FUNCODEREF(fun_94),T137,YPfalse,LITREF(lit_129),sloc(192),YPfalse);
  T136 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPfab_met(FUNCODEREF(fun_95),T136,YPfalse,LITREF(lit_128),sloc(190),YPfalse);
  T135 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_96 = YPfab_met(FUNCODEREF(fun_PPtopPPtop_in_96),T135,LITREF(lit_126),LITREF(lit_127),sloc(188),YPfalse);
  T179 = VARREF_OR(YevalStopYPPtopPPtop_in,YPfalse);
  T180 = fun_PPtopPPtop_in_96;
  T178 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T179,T180);
  VARSET(YevalStopYPPtopPPtop_in,T178);
  lit_202 = YPPsym((P)"top");
  lit_203 = YPPlist(1,YPPsym((P)"modname"));
  lit_204 = YPPlist(1,YPPsym((P)"quit"));
  lit_205 = YPsb((P)"Exit the top-level interpreter");
  lit_206 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_207 = YPPlist(1,YPPsym((P)"top"));
  T186 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T186,YPfalse,LITREF(lit_1),YPfalse,YPfalse);
  T185 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_98 = YPfab_met(FUNCODEREF(fun_98),T185,YPfalse,LITREF(lit_206),sloc(263),YPfalse);
  T184 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPfab_met(FUNCODEREF(fun_99),T184,YPfalse,LITREF(lit_207),sloc(265),YPfalse);
  T183 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T183,YPfalse,LITREF(lit_1),sloc(267),YPfalse);
  T182 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPfab_met(FUNCODEREF(fun_101),T182,YPfalse,LITREF(lit_204),sloc(260),YPfalse);
  T181 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_102 = YPfab_met(FUNCODEREF(fun_top_102),T181,LITREF(lit_202),LITREF(lit_203),sloc(259),YPfalse);
  T188 = VARREF_OR(YevalStopYtop,YPfalse);
  T189 = fun_top_102;
  T187 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T188,T189);
  VARSET(YevalStopYtop,T187);
  lit_208 = YPPsym((P)"save-image");
  lit_209 = YPPlist(1,YPPsym((P)"image-name"));
  lit_210 = YPPsym((P)"goo/user");
  T191 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_103 = YPfab_met(FUNCODEREF(fun_103),T191,YPfalse,LITREF(lit_1),sloc(270),YPfalse);
  T190 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPfab_met(FUNCODEREF(YevalStopYsave_image),T190,LITREF(lit_208),LITREF(lit_209),sloc(269),YPfalse);
  T192 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T192);
  T193 = YPfalse;
  return T193;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSast_eval;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_evalSdependency;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSsystem},
  {&module_info_gooSconditions},
  {&module_info_evalSsyntax},
  {&module_info_evalSast},
  {&module_info_evalSast_eval},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-children", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%binding-value-or-of", &module_info_evalSast_eval, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"%binding-value-of", &module_info_evalSast_eval, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%binding-value-or", &module_info_evalSast_eval, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"$sexpr-define-constant-tag", &module_info_evalSsyntax, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"binding-value-or", &module_info_evalSast_eval, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"$sexpr-prop!-tag", &module_info_evalSsyntax, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"load-file", CVAR, &YevalStopYload_file},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"$$$", CVAR, &YevalStopYDDD},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"run", DVAR, &YevalStopYrun},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"esctst", CVAR, &YevalStopYesctst},
  {"$$", CVAR, &YevalStopYDD},
  {"vm-evaluate", CVAR, &YevalStopYvm_evaluate},
  {"for-user-frames", PVAR, NULL},
  {"for-frames", PVAR, NULL},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"frame", CVAR, &YevalStopYframe},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"%%bottom%%vm-run", CVAR, &YevalStopYPPbottomPPvm_run},
  {"bt", CVAR, &YevalStopYbt},
  {"---main-0---", PVAR, NULL},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"parse", CVAR, &YevalStopYparse},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"$", CVAR, &YevalStopYD},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"msg-src-loc", CVAR, &YevalStopYmsg_src_loc},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"top", CVAR, &YevalStopYtop},
  {"load", CVAR, &YevalStopYload},
  {"read-file", CVAR, &YevalStopYread_file},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"backtrace", NULL},
  {"$$$", NULL},
  {"do-stack-frames", NULL},
  {"g2c-eval", NULL},
  {"esctst", NULL},
  {"load-file", NULL},
  {"frame-var", NULL},
  {"top", NULL},
  {"auto-eval", NULL},
  {"save-image", NULL},
  {"eval", NULL},
  {"bt", NULL},
  {"$", NULL},
  {"$$", NULL},
  {"parse-in", NULL},
  {"*dynamic-compilation?*", NULL},
  {"vm-evaluate", NULL},
  {"frame", NULL},
  {"load", NULL},
  {"read-file", NULL},
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
extern void load_module_gooSfun (void);
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
  load_module_gooSfun();
  load_module_gooSsystem();
  load_module_gooSconditions();
  load_module_evalSsyntax();
  load_module_evalSast();
  load_module_evalSast_eval();

  (P)YevalStopY___main_0___();

}

/* END OF GENERATED CODE. */
