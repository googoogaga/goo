/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/top");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/top */

EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YLclassG,"goo/boot","<class>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YPfalse,"goo/boot","%false");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DEF(YevalStopYDD,"eval/top","$$");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYc_inline_strs,"eval/ast","c-inline-strs");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(Yclass_id,"goo/boot","class-id");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
DEF(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSastYc_inline_exprQ,"eval/ast","c-inline-expr?");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSastYc_inline_refs,"eval/ast","c-inline-refs");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSastYLc_inlineG,"eval/ast","<c-inline>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YOlit,"goo/boot","@lit");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
DEF(YevalStopYmsg_src_loc,"eval/top","msg-src-loc");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalStopYtop,"eval/top","top");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YevalStopYload,"eval/top","load");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSmoduleYmodule_c_forms,"eval/module","module-c-forms");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
DEF(YevalStopYPPbottomPPvm_run,"eval/top","%%bottom%%vm-run");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
DEF(YevalStopYD,"eval/top","$");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DYNDEF(YevalStopYrun,"eval/top","run");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YPtrue,"goo/boot","%true");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yunexec,"goo/boot","unexec");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YevalSast_evalYbinding_value_or,"eval/ast-eval","binding-value-or");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_30);
DEFLIT(lit_66);
DEFLIT(lit_167);
DEFLIT(lit_132);
DEFLIT(lit_112);
DEFLIT(lit_32);
DEFLIT(lit_39);
DEFLIT(lit_33);
DEFLIT(lit_176);
DEFLIT(lit_177);
DEFLIT(lit_166);
DEFLIT(lit_64);
DEFLIT(lit_141);
DEFLIT(lit_73);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_127);
DEFLIT(lit_109);
DEFLIT(lit_13);
DEFLIT(lit_205);
DEFLIT(lit_54);
DEFLIT(lit_6);
DEFLIT(lit_191);
DEFLIT(lit_130);
DEFLIT(lit_88);
DEFLIT(lit_16);
DEFLIT(lit_106);
DEFLIT(lit_164);
DEFLIT(lit_46);
DEFLIT(lit_47);
DEFLIT(lit_157);
DEFLIT(lit_12);
DEFLIT(lit_10);
DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_199);
DEFLIT(lit_107);
DEFLIT(lit_196);
DEFLIT(lit_95);
DEFLIT(lit_61);
DEFLIT(lit_155);
DEFLIT(lit_128);
DEFLIT(lit_48);
DEFLIT(lit_26);
DEFLIT(lit_120);
DEFLIT(lit_51);
DEFLIT(lit_50);
DEFLIT(lit_43);
DEFLIT(lit_84);
DEFLIT(lit_81);
DEFLIT(lit_180);
DEFLIT(lit_14);
DEFLIT(lit_137);
DEFLIT(lit_194);
DEFLIT(lit_186);
DEFLIT(lit_149);
DEFLIT(lit_178);
DEFLIT(lit_92);
DEFLIT(lit_184);
DEFLIT(lit_152);
DEFLIT(lit_20);
DEFLIT(lit_59);
DEFLIT(lit_115);
DEFLIT(lit_129);
DEFLIT(lit_75);
DEFLIT(lit_126);
DEFLIT(lit_35);
DEFLIT(lit_21);
DEFLIT(lit_65);
DEFLIT(lit_79);
DEFLIT(lit_148);
DEFLIT(lit_90);
DEFLIT(lit_162);
DEFLIT(lit_158);
DEFLIT(lit_62);
DEFLIT(lit_202);
DEFLIT(lit_185);
DEFLIT(lit_58);
DEFLIT(lit_190);
DEFLIT(lit_15);
DEFLIT(lit_156);
DEFLIT(lit_87);
DEFLIT(lit_56);
DEFLIT(lit_36);
DEFLIT(lit_25);
DEFLIT(lit_160);
DEFLIT(lit_57);
DEFLIT(lit_96);
DEFLIT(lit_163);
DEFLIT(lit_172);
DEFLIT(lit_144);
DEFLIT(lit_175);
DEFLIT(lit_203);
DEFLIT(lit_145);
DEFLIT(lit_143);
DEFLIT(lit_195);
DEFLIT(lit_105);
DEFLIT(lit_168);
DEFLIT(lit_17);
DEFLIT(lit_82);
DEFLIT(lit_142);
DEFLIT(lit_72);
DEFLIT(lit_89);
DEFLIT(lit_53);
DEFLIT(lit_100);
DEFLIT(lit_136);
DEFLIT(lit_113);
DEFLIT(lit_71);
DEFLIT(lit_38);
DEFLIT(lit_201);
DEFLIT(lit_70);
DEFLIT(lit_91);
DEFLIT(lit_118);
DEFLIT(lit_174);
DEFLIT(lit_44);
DEFLIT(lit_108);
DEFLIT(lit_208);
DEFLIT(lit_7);
DEFLIT(lit_68);
DEFLIT(lit_1);
DEFLIT(lit_122);
DEFLIT(lit_2);
DEFLIT(lit_94);
DEFLIT(lit_151);
DEFLIT(lit_63);
DEFLIT(lit_134);
DEFLIT(lit_114);
DEFLIT(lit_104);
DEFLIT(lit_77);
DEFLIT(lit_209);
DEFLIT(lit_116);
DEFLIT(lit_42);
DEFLIT(lit_74);
DEFLIT(lit_182);
DEFLIT(lit_193);
DEFLIT(lit_121);
DEFLIT(lit_169);
DEFLIT(lit_41);
DEFLIT(lit_189);
DEFLIT(lit_183);
DEFLIT(lit_99);
DEFLIT(lit_86);
DEFLIT(lit_179);
DEFLIT(lit_204);
DEFLIT(lit_28);
DEFLIT(lit_98);
DEFLIT(lit_78);
DEFLIT(lit_150);
DEFLIT(lit_181);
DEFLIT(lit_171);
DEFLIT(lit_146);
DEFLIT(lit_187);
DEFLIT(lit_3);
DEFLIT(lit_102);
DEFLIT(lit_31);
DEFLIT(lit_93);
DEFLIT(lit_76);
DEFLIT(lit_206);
DEFLIT(lit_123);
DEFLIT(lit_119);
DEFLIT(lit_4);
DEFLIT(lit_101);
DEFLIT(lit_159);
DEFLIT(lit_135);
DEFLIT(lit_198);
DEFLIT(lit_97);
DEFLIT(lit_49);
DEFLIT(lit_11);
DEFLIT(lit_153);
DEFLIT(lit_124);
DEFLIT(lit_8);
DEFLIT(lit_103);
DEFLIT(lit_29);
DEFLIT(lit_200);
DEFLIT(lit_69);
DEFLIT(lit_111);
DEFLIT(lit_133);
DEFLIT(lit_117);
DEFLIT(lit_140);
DEFLIT(lit_60);
DEFLIT(lit_170);
DEFLIT(lit_23);
DEFLIT(lit_173);
DEFLIT(lit_192);
DEFLIT(lit_210);
DEFLIT(lit_147);
DEFLIT(lit_67);
DEFLIT(lit_55);
DEFLIT(lit_40);
DEFLIT(lit_45);
DEFLIT(lit_197);
DEFLIT(lit_110);
DEFLIT(lit_165);
DEFLIT(lit_131);
DEFLIT(lit_80);
DEFLIT(lit_125);
DEFLIT(lit_27);
DEFLIT(lit_139);
DEFLIT(lit_188);
DEFLIT(lit_83);
DEFLIT(lit_37);
DEFLIT(lit_85);
DEFLIT(lit_207);
DEFLIT(lit_5);
DEFLIT(lit_34);
DEFLIT(lit_154);
DEFLIT(lit_52);
DEFLIT(lit_161);
DEFLIT(lit_138);
DEFLIT(lit_19);
DEFLIT(lit_9);

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
LOCFOR(fun_x_1548_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_x_1552_36);
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
LOCFOR(fun_x_1599_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1596_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1593_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1590_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1587_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1584_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1581_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1578_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1575_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1572_80);
LOCFOR(fun_81);
LOCFOR(fun_x_1569_82);
LOCFOR(fun_83);
LOCFOR(fun_x_1566_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1563_86);
LOCFOR(fun_87);
LOCFOR(fun_x_1560_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1557_90);
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

/* C-FORMS: */


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
  P x_1542F4410;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
  x_1542F4410 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_4,2,s_,ct_env_);
  T2 = FUNFAB(fun_5,1,x_1542F4410);
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
  P astF4411;
  P T0,T1;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  CALL1(1,VARREF(YevalSmoduleYzap_referenced_bindingsX),FREEREF(0));
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),FREEREF(1),FREEREF(0),YPtrue,YPfalse);
  astF4411 = T1;
  T0 = CALL2(1,DYNREF(YevalStopYrun),astF4411,FREEREF(0));
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
  P x_1543F4412;
  P T0,T1,T2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
  x_1543F4412 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_14,2,ct_env_,form_);
  T2 = FUNFAB(fun_15,1,x_1543F4412);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_eval_in_17) {
  P x_,ct_env_;
  P eF4414;
  P oF4413;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPtrue,YPfalse);
  oF4413 = T1;
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),oF4413);
  eF4414 = T0;
UNLINK_STACK();
  QRET(eF4414);
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
  P xF4416;
  P formsF4415;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  formsF4415 = Ynil;
  LOOP_199: {
    P a199_0;
    T8 = BOXGET(FREEREF(0));
    T7 = CALL1(1,VARREF(YgooSconditionsYread),T8);
    xF4416 = T7;
    T2 = CALL1(1,VARREF(YgooSchrYeof_objectQ),xF4416);
    if (T2 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF4415);
      T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
      T1 = T3;
    } else {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),xF4416,formsF4415);
      a199_0 = T6;
      formsF4415 = a199_0;
      goto LOOP_199;
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
  P portF4417;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  portF4417 = YPfalse;
  portF4417 = BOXFAB(portF4417);
  T2 = FUNFAB(fun_22,2,portF4417,filename_);
  T3 = FUNFAB(fun_23,1,portF4417);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_25) {
  P oF4419;
  P xF4418;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  T2 = CALL1(1,VARREF(YevalStopYread_file),FREEREF(0));
  xF4418 = T2;
  CALL1(1,VARREF(YevalSmoduleYzap_referenced_bindingsX),FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),xF4418,FREEREF(1),YPfalse,YPfalse);
  oF4419 = T1;
  T0 = CALL2(1,DYNREF(YevalStopYrun),oF4419,FREEREF(1));
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
  P x_1544F4420;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YevalStopYcompiled_fileQ),filename_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYso_load),filename_);
    T0 = T2;
  } else {
    x_1544F4420 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
    T4 = FUNFAB(fun_25,2,filename_,ct_env_);
    T5 = FUNFAB(fun_26,1,x_1544F4420);
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
  P realfileF4421;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
  T3 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF4421 = T3;
  T0 = CALL1(1,VARREF(Ynot),realfileF4421);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T2 = CALL2(1,VARREF(YevalStopYload_file),realfileF4421,modname_);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_prompt_for_command_expression_30) {
  P env_,level_,prompt_;
  P argsF4424;
  P arg_strF4423;
  P formF4422;
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
  formF4422 = T13;
  T4 = CALL2(1,VARREF(YisaQ),formF4422,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yhead),formF4422);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_56));
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  if (T3 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF4423 = T12;
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_57),arg_strF4423,LITREF(lit_58));
    T10 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T11);
    argsF4424 = T10;
    T9 = CALL1(1,VARREF(YgooSmacrosY2nd),formF4422);
    T8 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_59),T9);
    T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,argsF4424);
    T2 = T7;
  } else {
    T2 = formF4422;
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

LOCCODEDEF(fun_x_1548_33) {
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
  P x_1547F4439;
  P x_1547F4438;
  P x_1547F4437;
  P x_1547F4436;
  P x_1547F4435;
  P x_1547F4434;
  P x_1547F4433;
  P x_1547F4432;
  P x_1547F4431;
  P bodyF4430;
  P argsF4429;
  P fF4428;
  P numF4427;
  P x_1547F4426;
  P x_1548F4425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
LINK_STACK();
  ARG(return_, 0);
  T55 = FUNSHELL(0,fun_x_1548_33,2);
  x_1548F4425 = T55;
  FUNINIT(x_1548F4425, 2,FREEREF(0),return_);
  x_1547F4426 = FREEREF(0);
  numF4427 = YPfalse;
  fF4428 = YPfalse;
  argsF4429 = YPfalse;
  bodyF4430 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1547F4426,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1547F4426,LITREF(lit_69),x_1548F4425);
    x_1547F4431 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1547F4431,x_1548F4425);
    x_1547F4432 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1547F4432,x_1548F4425);
    numF4427 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1547F4432);
    x_1547F4433 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1547F4433,x_1548F4425);
    fF4428 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1547F4433);
    x_1547F4434 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1547F4434,x_1548F4425);
    argsF4429 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1547F4434);
    x_1547F4435 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1547F4435,x_1548F4425);
    x_1547F4436 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1547F4436,x_1548F4425);
    T9 = CALL1(1,VARREF(Ytail),x_1547F4435);
    x_1547F4437 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1547F4437,x_1548F4425);
    T17 = CALL1(1,VARREF(Ytail),x_1547F4431);
    x_1547F4438 = T17;
    bodyF4430 = x_1547F4438;
    x_1547F4439 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1547F4439,x_1548F4425);
  } else {
    T19 = CALL2(1,x_1548F4425,LITREF(lit_70),x_1547F4426);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T27 = numF4427;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T28 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T28,LITREF(lit_72));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_72));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T38 = fF4428;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_72));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T44 = argsF4429;
  T43 = CALL1(1,VARREF(Ylst),T44);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T48,LITREF(lit_72));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T45,LITREF(lit_72));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T49 = bodyF4430;
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T54 = numF4427;
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

LOCCODEDEF(fun_x_1552_36) {
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
  P x_1551F4454;
  P x_1551F4453;
  P x_1551F4452;
  P x_1551F4451;
  P x_1551F4450;
  P x_1551F4449;
  P x_1551F4448;
  P x_1551F4447;
  P x_1551F4446;
  P bodyF4445;
  P argsF4444;
  P fF4443;
  P numF4442;
  P x_1551F4441;
  P x_1552F4440;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110;
LINK_STACK();
  ARG(return_, 0);
  T110 = FUNSHELL(0,fun_x_1552_36,2);
  x_1552F4440 = T110;
  FUNINIT(x_1552F4440, 2,FREEREF(0),return_);
  x_1551F4441 = FREEREF(0);
  numF4442 = YPfalse;
  fF4443 = YPfalse;
  argsF4444 = YPfalse;
  bodyF4445 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1551F4441,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1551F4441,LITREF(lit_82),x_1552F4440);
    x_1551F4446 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1551F4446,x_1552F4440);
    x_1551F4447 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1551F4447,x_1552F4440);
    numF4442 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1551F4447);
    x_1551F4448 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1551F4448,x_1552F4440);
    fF4443 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1551F4448);
    x_1551F4449 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1551F4449,x_1552F4440);
    argsF4444 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1551F4449);
    x_1551F4450 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1551F4450,x_1552F4440);
    x_1551F4451 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1551F4451,x_1552F4440);
    T9 = CALL1(1,VARREF(Ytail),x_1551F4450);
    x_1551F4452 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1551F4452,x_1552F4440);
    T17 = CALL1(1,VARREF(Ytail),x_1551F4446);
    x_1551F4453 = T17;
    bodyF4445 = x_1551F4453;
    x_1551F4454 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1551F4454,x_1552F4440);
  } else {
    T19 = CALL2(1,x_1552F4440,LITREF(lit_70),x_1551F4441);
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
  T40 = fF4443;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T42 = argsF4444;
  T41 = CALL1(1,VARREF(Ylst),T42);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T41,LITREF(lit_72));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T54 = fF4443;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,LITREF(lit_72));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T63 = fF4443;
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
  T69 = numF4442;
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
  T91 = bodyF4445;
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
  P slF4455;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  T1 = CALL2(1,VARREF(YisaQ),f_,VARREF(YLmetG));
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSfunYfun_src_loc),f_);
    slF4455 = T7;
    T3 = CALL2(1,VARREF(YisaQ),slF4455,VARREF(YLsrc_locG));
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(Ysrc_loc_file),slF4455);
      T6 = CALL1(1,VARREF(Ysrc_loc_line),slF4455);
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
  P numF4458;
  P UnameF4457;
  P argsF4456;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF4456 = T16;
  T13 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_93);
  }
  UnameF4457 = T12;
  T10 = BOXGET(FREEREF(0));
  T11 = BOXGET(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF4458 = T9;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4457,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_107),numF4458,f_,argsF4456);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4457,LITREF(lit_98));
  if (T4 != YPfalse) {
    BOXPUT(numF4458,FREEREF(1));
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
  P UnumF4461;
  P Utop_numF4460;
  P Useen_topF4459;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF4459 = YPfalse;
  Useen_topF4459 = BOXFAB(Useen_topF4459);
  Utop_numF4460 = YPint((P)0);
  Utop_numF4460 = BOXFAB(Utop_numF4460);
  UnumF4461 = YPint((P)0);
  UnumF4461 = BOXFAB(UnumF4461);
  T4 = FUNFAB(fun_40,4,UnumF4461,Utop_numF4460,Useen_topF4459,break_);
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
  P numF4464;
  P UnameF4463;
  P argsF4462;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T18 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF4462 = T18;
  T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T15 != YPfalse) {
    T17 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T17);
    T14 = T16;
  } else {
    T14 = LITREF(lit_93);
  }
  UnameF4463 = T14;
  T12 = BOXGET(FREEREF(0));
  T13 = BOXGET(FREEREF(1));
  T11 = CALL2(1,VARREF(YgooSmathY_),T12,T13);
  numF4464 = T11;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4463,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF4464);
    if (T4 != YPfalse) {
      CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_112),numF4464,f_,argsF4462);
      CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
      T5 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4463,LITREF(lit_98));
  if (T6 != YPfalse) {
    BOXPUT(numF4464,FREEREF(1));
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
  P UnumF4467;
  P Utop_numF4466;
  P Useen_topF4465;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF4465 = YPfalse;
  Useen_topF4465 = BOXFAB(Useen_topF4465);
  Utop_numF4466 = YPint((P)0);
  Utop_numF4466 = BOXFAB(Utop_numF4466);
  UnumF4467 = YPint((P)0);
  UnumF4467 = BOXFAB(UnumF4467);
  T4 = FUNFAB(fun_43,5,UnumF4467,Utop_numF4466,Useen_topF4465,break_,FREEREF(0));
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
  P numF4470;
  P UnameF4469;
  P argsF4468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T21 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF4468 = T21;
  T18 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T18 != YPfalse) {
    T20 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
    T17 = T19;
  } else {
    T17 = LITREF(lit_93);
  }
  UnameF4469 = T17;
  T15 = BOXGET(FREEREF(0));
  T16 = BOXGET(FREEREF(1));
  T14 = CALL2(1,VARREF(YgooSmathY_),T15,T16);
  numF4470 = T14;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4469,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF4470);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSfunYfun_names),f_);
      T7 = CALL2(1,VARREF(YgooScolsSseqYpos),T8,FREEREF(5));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),argsF4468,T7);
      T5 = CALL1(1,FREEREF(6),T6);
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T9 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4469,LITREF(lit_98));
  if (T9 != YPfalse) {
    BOXPUT(numF4470,FREEREF(1));
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
  P UnumF4473;
  P Utop_numF4472;
  P Useen_topF4471;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF4471 = YPfalse;
  Useen_topF4471 = BOXFAB(Useen_topF4471);
  Utop_numF4472 = YPint((P)0);
  Utop_numF4472 = BOXFAB(Utop_numF4472);
  UnumF4473 = YPint((P)0);
  UnumF4473 = BOXFAB(UnumF4473);
  T4 = FUNFAB(fun_46,7,UnumF4473,Utop_numF4472,Useen_topF4471,break_,FREEREF(0),FREEREF(1),FREEREF(2));
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
  P numF4476;
  P UnameF4475;
  P argsF4474;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF4474 = T16;
  T13 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_93);
  }
  UnameF4475 = T12;
  T10 = BOXGET(FREEREF(0));
  T11 = BOXGET(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF4476 = T9;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4475,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_121),numF4476,f_);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF4475,LITREF(lit_98));
  if (T4 != YPfalse) {
    BOXPUT(numF4476,FREEREF(1));
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
  P UnumF4479;
  P Utop_numF4478;
  P Useen_topF4477;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF4477 = YPfalse;
  Useen_topF4477 = BOXFAB(Useen_topF4477);
  Utop_numF4478 = YPint((P)0);
  Utop_numF4478 = BOXFAB(Utop_numF4478);
  UnumF4479 = YPint((P)0);
  UnumF4479 = BOXFAB(UnumF4479);
  T4 = FUNFAB(fun_50,4,UnumF4479,Utop_numF4478,Useen_topF4477,break_);
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
  P x_1554F4481;
  P x_1553F4480;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  x_1553F4480 = c_;
  x_1554F4481 = VARREF(YisaQ);
  T1 = CALL2(0,x_1554F4481,x_1553F4480,VARREF(YgooSconditionsYLkeyboard_interruptG));
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

LOCCODEDEF(fun_x_1599_62) {
  P msg_,args_;
  P x_1603F4486;
  P x_1602F4485;
  P x_1601F4484;
  P x_1600F4483;
  P resF4482;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T7 = BOXGET(FREEREF(1));
  T6 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T7);
  resF4482 = T6;
  T2 = BOXGET(FREEREF(1));
  T3 = resF4482;
  CALL4(1,VARREF(YevalStopYprint_result_expression),T2,FREEREF(2),LITREF(lit_185),T3);
  x_1600F4483 = VARREF(YevalStopYDDD);
  x_1601F4484 = VARREF(YevalStopYDD);
  x_1602F4485 = VARREF(YevalStopYD);
  T5 = resF4482;
  x_1603F4486 = T5;
  VARSET(YevalStopYDDD,x_1601F4484);
  VARSET(YevalStopYDD,x_1602F4485);
  VARSET(YevalStopYD,x_1603F4486);
  T4 = resF4482 = x_1600F4483;
  T0 = CALL1(1,FREEREF(3),T4);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_63) {
  P return_;
  P x_1598F4495;
  P x_1598F4494;
  P x_1598F4493;
  P x_1598F4492;
  P x_1598F4491;
  P nameF4490;
  P nF4489;
  P x_1598F4488;
  P x_1599F4487;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1599_62,4);
  x_1599F4487 = T18;
  FUNINIT(x_1599F4487, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1598F4488 = FREEREF(3);
  nF4489 = YPfalse;
  nameF4490 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1598F4488,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1598F4488,LITREF(lit_186),x_1599F4487);
    x_1598F4491 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1598F4491,x_1599F4487);
    nF4489 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1598F4491);
    x_1598F4492 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1598F4492,x_1599F4487);
    nameF4490 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1598F4492);
    x_1598F4493 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1598F4493,x_1599F4487);
    x_1598F4494 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1598F4494,x_1599F4487);
    T6 = CALL1(1,VARREF(Ytail),x_1598F4493);
    x_1598F4495 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1598F4495,x_1599F4487);
  } else {
    T12 = CALL2(1,x_1599F4487,LITREF(lit_70),x_1598F4488);
  }
  T14 = BOXGET(FREEREF(1));
  T16 = nF4489;
  T17 = nameF4490;
  T15 = CALL2(1,VARREF(YevalStopYframe_var),T16,T17);
  T13 = CALL4(1,VARREF(YevalStopYprint_result_expression),T14,FREEREF(2),LITREF(lit_187),T15);
UNLINK_STACK();
  QRET(T13);
}

LOCCODEDEF(fun_x_1596_64) {
  P msg_,args_;
  P x_1597F4496;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1597F4496 = FREEREF(0);
  T2 = FUNFAB(fun_63,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1597F4496);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_65) {
  P return_;
  P x_1595F4503;
  P x_1595F4502;
  P x_1595F4501;
  P x_1595F4500;
  P nF4499;
  P x_1595F4498;
  P x_1596F4497;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(return_, 0);
  T12 = FUNSHELL(0,fun_x_1596_64,5);
  x_1596F4497 = T12;
  FUNINIT(x_1596F4497, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1595F4498 = FREEREF(0);
  nF4499 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1595F4498,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1595F4498,LITREF(lit_188),x_1596F4497);
    x_1595F4500 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1595F4500,x_1596F4497);
    nF4499 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1595F4500);
    x_1595F4501 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1595F4501,x_1596F4497);
    x_1595F4502 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1595F4502,x_1596F4497);
    T5 = CALL1(1,VARREF(Ytail),x_1595F4501);
    x_1595F4503 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1595F4503,x_1596F4497);
  } else {
    T9 = CALL2(1,x_1596F4497,LITREF(lit_70),x_1595F4498);
  }
  T11 = nF4499;
  T10 = CALL1(1,VARREF(YevalStopYframe),T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1593_66) {
  P msg_,args_;
  P x_1594F4504;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1594F4504 = FREEREF(0);
  T2 = FUNFAB(fun_65,4,x_1594F4504,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_67) {
  P return_;
  P x_1592F4509;
  P x_1592F4508;
  P x_1592F4507;
  P x_1592F4506;
  P x_1593F4505;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1593_66,5);
  x_1593F4505 = T8;
  FUNINIT(x_1593F4505, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1592F4506 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1592F4506,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1592F4506,LITREF(lit_189),x_1593F4505);
    x_1592F4507 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1592F4507,x_1593F4505);
    x_1592F4508 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1592F4508,x_1593F4505);
    T4 = CALL1(1,VARREF(Ytail),x_1592F4507);
    x_1592F4509 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1592F4509,x_1593F4505);
  } else {
    T6 = CALL2(1,x_1593F4505,LITREF(lit_70),x_1592F4506);
  }
  T7 = CALL0(1,VARREF(YevalStopYbacktrace));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1590_68) {
  P msg_,args_;
  P x_1591F4510;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1591F4510 = FREEREF(0);
  T2 = FUNFAB(fun_67,4,x_1591F4510,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_69) {
  P return_;
  P x_1589F4515;
  P x_1589F4514;
  P x_1589F4513;
  P x_1589F4512;
  P x_1590F4511;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1590_68,5);
  x_1590F4511 = T8;
  FUNINIT(x_1590F4511, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1589F4512 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1589F4512,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1589F4512,LITREF(lit_190),x_1590F4511);
    x_1589F4513 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1589F4513,x_1590F4511);
    x_1589F4514 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1589F4514,x_1590F4511);
    T4 = CALL1(1,VARREF(Ytail),x_1589F4513);
    x_1589F4515 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1589F4515,x_1590F4511);
  } else {
    T6 = CALL2(1,x_1590F4511,LITREF(lit_70),x_1589F4512);
  }
  T7 = CALL0(1,VARREF(YevalStopYbt));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1587_70) {
  P msg_,args_;
  P x_1588F4516;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1588F4516 = FREEREF(0);
  T2 = FUNFAB(fun_69,4,x_1588F4516,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_71) {
  P return_;
  P x_1586F4521;
  P x_1586F4520;
  P x_1586F4519;
  P x_1586F4518;
  P x_1587F4517;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_1587_70,5);
  x_1587F4517 = T9;
  FUNINIT(x_1587F4517, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1586F4518 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1586F4518,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1586F4518,LITREF(lit_191),x_1587F4517);
    x_1586F4519 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1586F4519,x_1587F4517);
    x_1586F4520 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1586F4520,x_1587F4517);
    T4 = CALL1(1,VARREF(Ytail),x_1586F4519);
    x_1586F4521 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1586F4521,x_1587F4517);
  } else {
    T6 = CALL2(1,x_1587F4517,LITREF(lit_70),x_1586F4518);
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

LOCCODEDEF(fun_x_1584_72) {
  P msg_,args_;
  P x_1585F4522;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1585F4522 = FREEREF(0);
  T2 = FUNFAB(fun_71,4,x_1585F4522,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P return_;
  P x_1583F4527;
  P x_1583F4526;
  P x_1583F4525;
  P x_1583F4524;
  P x_1584F4523;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1584_72,5);
  x_1584F4523 = T8;
  FUNINIT(x_1584F4523, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1583F4524 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1583F4524,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1583F4524,LITREF(lit_192),x_1584F4523);
    x_1583F4525 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1583F4525,x_1584F4523);
    x_1583F4526 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1583F4526,x_1584F4523);
    T4 = CALL1(1,VARREF(Ytail),x_1583F4525);
    x_1583F4527 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1583F4527,x_1584F4523);
  } else {
    T6 = CALL2(1,x_1584F4523,LITREF(lit_70),x_1583F4524);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPvm_run));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1581_74) {
  P msg_,args_;
  P x_1582F4528;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1582F4528 = FREEREF(0);
  T2 = FUNFAB(fun_73,4,x_1582F4528,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_75) {
  P return_;
  P x_1580F4533;
  P x_1580F4532;
  P x_1580F4531;
  P x_1580F4530;
  P x_1581F4529;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1581_74,5);
  x_1581F4529 = T8;
  FUNINIT(x_1581F4529, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1580F4530 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1580F4530,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1580F4530,LITREF(lit_193),x_1581F4529);
    x_1580F4531 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1580F4531,x_1581F4529);
    x_1580F4532 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1580F4532,x_1581F4529);
    T4 = CALL1(1,VARREF(Ytail),x_1580F4531);
    x_1580F4533 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1580F4533,x_1581F4529);
  } else {
    T6 = CALL2(1,x_1581F4529,LITREF(lit_70),x_1580F4530);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1578_76) {
  P msg_,args_;
  P x_1579F4534;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1579F4534 = FREEREF(0);
  T2 = FUNFAB(fun_75,4,x_1579F4534,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_77) {
  P return_;
  P x_1577F4539;
  P x_1577F4538;
  P x_1577F4537;
  P x_1577F4536;
  P x_1578F4535;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_1578_76,5);
  x_1578F4535 = T9;
  FUNINIT(x_1578F4535, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1577F4536 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1577F4536,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1577F4536,LITREF(lit_194),x_1578F4535);
    x_1577F4537 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1577F4537,x_1578F4535);
    x_1577F4538 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1577F4538,x_1578F4535);
    T4 = CALL1(1,VARREF(Ytail),x_1577F4537);
    x_1577F4539 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1577F4539,x_1578F4535);
  } else {
    T6 = CALL2(1,x_1578F4535,LITREF(lit_70),x_1577F4536);
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

LOCCODEDEF(fun_x_1575_78) {
  P msg_,args_;
  P x_1576F4540;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1576F4540 = FREEREF(0);
  T2 = FUNFAB(fun_77,4,x_1576F4540,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_79) {
  P return_;
  P new_envF4548;
  P x_1574F4547;
  P x_1574F4546;
  P x_1574F4545;
  P x_1574F4544;
  P mF4543;
  P x_1574F4542;
  P x_1575F4541;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1575_78,5);
  x_1575F4541 = T13;
  FUNINIT(x_1575F4541, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1574F4542 = FREEREF(0);
  mF4543 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1574F4542,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1574F4542,LITREF(lit_195),x_1575F4541);
    x_1574F4544 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1574F4544,x_1575F4541);
    mF4543 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1574F4544);
    x_1574F4545 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1574F4545,x_1575F4541);
    x_1574F4546 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1574F4546,x_1575F4541);
    T5 = CALL1(1,VARREF(Ytail),x_1574F4545);
    x_1574F4547 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1574F4547,x_1575F4541);
  } else {
    T9 = CALL2(1,x_1575F4541,LITREF(lit_70),x_1574F4542);
  }
  T12 = mF4543;
  T11 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),T12);
  new_envF4548 = T11;
  T10 = BOXPUT(new_envF4548,FREEREF(2));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1572_80) {
  P msg_,args_;
  P x_1573F4549;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1573F4549 = FREEREF(0);
  T2 = FUNFAB(fun_79,4,x_1573F4549,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_81) {
  P return_;
  P x_1571F4556;
  P x_1571F4555;
  P x_1571F4554;
  P x_1571F4553;
  P nF4552;
  P x_1571F4551;
  P x_1572F4550;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1572_80,5);
  x_1572F4550 = T13;
  FUNINIT(x_1572F4550, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1571F4551 = FREEREF(0);
  nF4552 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1571F4551,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1571F4551,LITREF(lit_196),x_1572F4550);
    x_1571F4553 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1571F4553,x_1572F4550);
    nF4552 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1571F4553);
    x_1571F4554 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1571F4554,x_1572F4550);
    x_1571F4555 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1571F4555,x_1572F4550);
    T5 = CALL1(1,VARREF(Ytail),x_1571F4554);
    x_1571F4556 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1571F4556,x_1572F4550);
  } else {
    T9 = CALL2(1,x_1572F4550,LITREF(lit_70),x_1571F4551);
  }
  T11 = BOXGET(FREEREF(4));
  T12 = nF4552;
  T10 = CALL2(1,VARREF(YevalStopYdo_restart),T11,T12);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1569_82) {
  P msg_,args_;
  P x_1570F4557;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1570F4557 = FREEREF(0);
  T2 = FUNFAB(fun_81,5,x_1570F4557,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_83) {
  P return_;
  P x_1568F4562;
  P x_1568F4561;
  P x_1568F4560;
  P x_1568F4559;
  P x_1569F4558;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1569_82,6);
  x_1569F4558 = T8;
  FUNINIT(x_1569F4558, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1568F4559 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1568F4559,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1568F4559,LITREF(lit_197),x_1569F4558);
    x_1568F4560 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1568F4560,x_1569F4558);
    x_1568F4561 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1568F4561,x_1569F4558);
    T4 = CALL1(1,VARREF(Ytail),x_1568F4560);
    x_1568F4562 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1568F4562,x_1569F4558);
  } else {
    T6 = CALL2(1,x_1569F4558,LITREF(lit_70),x_1568F4559);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1566_84) {
  P msg_,args_;
  P x_1567F4563;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1567F4563 = FREEREF(0);
  T2 = FUNFAB(fun_83,5,x_1567F4563,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_85) {
  P return_;
  P x_1565F4568;
  P x_1565F4567;
  P x_1565F4566;
  P x_1565F4565;
  P x_1566F4564;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1566_84,6);
  x_1566F4564 = T8;
  FUNINIT(x_1566F4564, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1565F4565 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1565F4565,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1565F4565,LITREF(lit_198),x_1566F4564);
    x_1565F4566 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1565F4566,x_1566F4564);
    x_1565F4567 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1565F4567,x_1566F4564);
    T4 = CALL1(1,VARREF(Ytail),x_1565F4566);
    x_1565F4568 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1565F4568,x_1566F4564);
  } else {
    T6 = CALL2(1,x_1566F4564,LITREF(lit_70),x_1565F4565);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1563_86) {
  P msg_,args_;
  P x_1564F4569;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1564F4569 = FREEREF(0);
  T2 = FUNFAB(fun_85,5,x_1564F4569,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_87) {
  P return_;
  P x_1562F4574;
  P x_1562F4573;
  P x_1562F4572;
  P x_1562F4571;
  P x_1563F4570;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1563_86,6);
  x_1563F4570 = T8;
  FUNINIT(x_1563F4570, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1562F4571 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1562F4571,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1562F4571,LITREF(lit_199),x_1563F4570);
    x_1562F4572 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1562F4572,x_1563F4570);
    x_1562F4573 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1562F4573,x_1563F4570);
    T4 = CALL1(1,VARREF(Ytail),x_1562F4572);
    x_1562F4574 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1562F4574,x_1563F4570);
  } else {
    T6 = CALL2(1,x_1563F4570,LITREF(lit_70),x_1562F4571);
  }
  T7 = CALL1(0,FREEREF(5),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1560_88) {
  P msg_,args_;
  P x_1561F4575;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1561F4575 = FREEREF(0);
  T2 = FUNFAB(fun_87,6,x_1561F4575,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_89) {
  P return_;
  P x_1559F4580;
  P x_1559F4579;
  P x_1559F4578;
  P x_1559F4577;
  P x_1560F4576;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1560_88,7);
  x_1560F4576 = T8;
  FUNINIT(x_1560F4576, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1559F4577 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1559F4577,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1559F4577,LITREF(lit_200),x_1560F4576);
    x_1559F4578 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1559F4578,x_1560F4576);
    x_1559F4579 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1559F4579,x_1560F4576);
    T4 = CALL1(1,VARREF(Ytail),x_1559F4578);
    x_1559F4580 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1559F4580,x_1560F4576);
  } else {
    T6 = CALL2(1,x_1560F4576,LITREF(lit_70),x_1559F4577);
  }
  T7 = CALL1(0,FREEREF(6),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1557_90) {
  P msg_,args_;
  P x_1558F4581;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1558F4581 = FREEREF(0);
  T2 = FUNFAB(fun_89,7,x_1558F4581,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_91) {
  P return_;
  P x_1556F4586;
  P x_1556F4585;
  P x_1556F4584;
  P x_1556F4583;
  P x_1557F4582;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1557_90,8);
  x_1557F4582 = T8;
  FUNINIT(x_1557F4582, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1556F4583 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1556F4583,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1556F4583,LITREF(lit_201),x_1557F4582);
    x_1556F4584 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1556F4584,x_1557F4582);
    x_1556F4585 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1556F4585,x_1557F4582);
    T4 = CALL1(1,VARREF(Ytail),x_1556F4584);
    x_1556F4586 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1556F4586,x_1557F4582);
  } else {
    T6 = CALL2(1,x_1557F4582,LITREF(lit_70),x_1556F4583);
  }
  T7 = CALL1(0,FREEREF(7),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_92) {
  P x_1555F4588;
  P formF4587;
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
  formF4587 = T8;
  T4 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF4587);
  if (T4 != YPfalse) {
    T5 = CALL1(1,FREEREF(4),YPfalse);
    T3 = T5;
  } else {
    x_1555F4588 = formF4587;
    T7 = FUNFAB(fun_91,8,x_1555F4588,formF4587,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
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
  LOOP_200: {
    T0 = FUNFAB(fun_94,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_);
    with_exit(T0);
    goto LOOP_200;
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_PPtopPPtop_in_96) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF4589;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF4589 = YPfalse;
  restartsF4589 = BOXFAB(restartsF4589);
  T4 = FUNFAB(fun_95,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF4589);
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
  LOOP_201: {
    T0 = FUNFAB(fun_99,2,FREEREF(0),FREEREF(1));
    with_exit(T0);
    goto LOOP_201;
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
  P tmpF4591;
  P modeF4590;
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
  modeF4590 = T44;
  T41 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF4590,LITREF(lit_32));
  T40 = XCALL1(1,VARREF(Ynot),T41);
  if (T40 != YPfalse) {
    T43 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF4590,LITREF(lit_33));
    tmpF4591 = T43;
    if (tmpF4591 != YPfalse) {
      T42 = tmpF4591;
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
  lit_67 = YPPsym((P)"x-1548");
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
  fun_x_1548_33 = YPfab_met(FUNCODEREF(fun_x_1548_33),T98,LITREF(lit_67),LITREF(lit_68),YPfalse,YPfalse);
  T97 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T97,YPfalse,LITREF(lit_66),YPfalse,YPfalse);
  T96 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPfab_met(FUNCODEREF(fun_35),T96,YPfalse,LITREF(lit_65),YPfalse,YPfalse);
  T99 = fun_35;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T99);
  lit_78 = YPPlist(1,YPPsym((P)"exp"));
  lit_79 = YPPlist(1,YPPsym((P)"return"));
  lit_80 = YPPsym((P)"x-1552");
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
  fun_x_1552_36 = YPfab_met(FUNCODEREF(fun_x_1552_36),T102,LITREF(lit_80),LITREF(lit_81),YPfalse,YPfalse);
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
  lit_141 = YPPsym((P)"x-1557");
  lit_142 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_143 = YPPlist(1,YPPsym((P)"return"));
  lit_144 = YPPsym((P)"x-1560");
  lit_145 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-1563");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPPlist(1,YPPsym((P)"return"));
  lit_150 = YPPsym((P)"x-1566");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPPlist(1,YPPsym((P)"return"));
  lit_153 = YPPsym((P)"x-1569");
  lit_154 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_155 = YPPlist(1,YPPsym((P)"return"));
  lit_156 = YPPsym((P)"x-1572");
  lit_157 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_158 = YPPlist(1,YPPsym((P)"return"));
  lit_159 = YPPsym((P)"x-1575");
  lit_160 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_161 = YPPlist(1,YPPsym((P)"return"));
  lit_162 = YPPsym((P)"x-1578");
  lit_163 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_164 = YPPlist(1,YPPsym((P)"return"));
  lit_165 = YPPsym((P)"x-1581");
  lit_166 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-1584");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPPlist(1,YPPsym((P)"return"));
  lit_171 = YPPsym((P)"x-1587");
  lit_172 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_173 = YPPlist(1,YPPsym((P)"return"));
  lit_174 = YPPsym((P)"x-1590");
  lit_175 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_176 = YPPlist(1,YPPsym((P)"return"));
  lit_177 = YPPsym((P)"x-1593");
  lit_178 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_179 = YPPlist(1,YPPsym((P)"return"));
  lit_180 = YPPsym((P)"x-1596");
  lit_181 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_182 = YPPlist(1,YPPsym((P)"return"));
  lit_183 = YPPsym((P)"x-1599");
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
  fun_x_1599_62 = YPfab_met(FUNCODEREF(fun_x_1599_62),T169,LITREF(lit_183),LITREF(lit_184),YPfalse,YPfalse);
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T168,YPfalse,LITREF(lit_182),YPfalse,YPfalse);
  T167 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1596_64 = YPfab_met(FUNCODEREF(fun_x_1596_64),T167,LITREF(lit_180),LITREF(lit_181),YPfalse,YPfalse);
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T166,YPfalse,LITREF(lit_179),YPfalse,YPfalse);
  T165 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1593_66 = YPfab_met(FUNCODEREF(fun_x_1593_66),T165,LITREF(lit_177),LITREF(lit_178),YPfalse,YPfalse);
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPfab_met(FUNCODEREF(fun_67),T164,YPfalse,LITREF(lit_176),YPfalse,YPfalse);
  T163 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1590_68 = YPfab_met(FUNCODEREF(fun_x_1590_68),T163,LITREF(lit_174),LITREF(lit_175),YPfalse,YPfalse);
  T162 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T162,YPfalse,LITREF(lit_173),YPfalse,YPfalse);
  T161 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1587_70 = YPfab_met(FUNCODEREF(fun_x_1587_70),T161,LITREF(lit_171),LITREF(lit_172),YPfalse,YPfalse);
  T160 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPfab_met(FUNCODEREF(fun_71),T160,YPfalse,LITREF(lit_170),YPfalse,YPfalse);
  T159 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1584_72 = YPfab_met(FUNCODEREF(fun_x_1584_72),T159,LITREF(lit_168),LITREF(lit_169),YPfalse,YPfalse);
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T158,YPfalse,LITREF(lit_167),YPfalse,YPfalse);
  T157 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1581_74 = YPfab_met(FUNCODEREF(fun_x_1581_74),T157,LITREF(lit_165),LITREF(lit_166),YPfalse,YPfalse);
  T156 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T156,YPfalse,LITREF(lit_164),YPfalse,YPfalse);
  T155 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1578_76 = YPfab_met(FUNCODEREF(fun_x_1578_76),T155,LITREF(lit_162),LITREF(lit_163),YPfalse,YPfalse);
  T154 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPfab_met(FUNCODEREF(fun_77),T154,YPfalse,LITREF(lit_161),YPfalse,YPfalse);
  T153 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1575_78 = YPfab_met(FUNCODEREF(fun_x_1575_78),T153,LITREF(lit_159),LITREF(lit_160),YPfalse,YPfalse);
  T152 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T152,YPfalse,LITREF(lit_158),YPfalse,YPfalse);
  T151 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1572_80 = YPfab_met(FUNCODEREF(fun_x_1572_80),T151,LITREF(lit_156),LITREF(lit_157),YPfalse,YPfalse);
  T150 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPfab_met(FUNCODEREF(fun_81),T150,YPfalse,LITREF(lit_155),YPfalse,YPfalse);
  T149 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1569_82 = YPfab_met(FUNCODEREF(fun_x_1569_82),T149,LITREF(lit_153),LITREF(lit_154),YPfalse,YPfalse);
  T148 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPfab_met(FUNCODEREF(fun_83),T148,YPfalse,LITREF(lit_152),YPfalse,YPfalse);
  T147 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1566_84 = YPfab_met(FUNCODEREF(fun_x_1566_84),T147,LITREF(lit_150),LITREF(lit_151),YPfalse,YPfalse);
  T146 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPfab_met(FUNCODEREF(fun_85),T146,YPfalse,LITREF(lit_149),YPfalse,YPfalse);
  T145 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1563_86 = YPfab_met(FUNCODEREF(fun_x_1563_86),T145,LITREF(lit_147),LITREF(lit_148),YPfalse,YPfalse);
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T144,YPfalse,LITREF(lit_146),YPfalse,YPfalse);
  T143 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1560_88 = YPfab_met(FUNCODEREF(fun_x_1560_88),T143,LITREF(lit_144),LITREF(lit_145),YPfalse,YPfalse);
  T142 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T142,YPfalse,LITREF(lit_143),YPfalse,YPfalse);
  T141 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1557_90 = YPfab_met(FUNCODEREF(fun_x_1557_90),T141,LITREF(lit_141),LITREF(lit_142),YPfalse,YPfalse);
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
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSmap;

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
  {"@add-new", &module_info_gooSboot, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"$sexpr-prop!-tag", &module_info_evalSsyntax, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"c-inline-strs", &module_info_evalSast, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%binding-value-or-of", &module_info_evalSast_eval, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"c-inline-expr?", &module_info_evalSast, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"c-inline-refs", &module_info_evalSast, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"<c-inline>", &module_info_evalSast, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"module-c-forms", &module_info_evalSmodule, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"$sexpr-define-constant-tag", &module_info_evalSsyntax, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"%binding-value-of", &module_info_evalSast_eval, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"binding-value-or", &module_info_evalSast_eval, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%binding-value-or", &module_info_evalSast_eval, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"for-frames", PVAR, NULL},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"---main-0---", PVAR, NULL},
  {"$$", CVAR, &YevalStopYDD},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"esctst", CVAR, &YevalStopYesctst},
  {"vm-evaluate", CVAR, &YevalStopYvm_evaluate},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"load-file", CVAR, &YevalStopYload_file},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"for-user-frames", PVAR, NULL},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"msg-src-loc", CVAR, &YevalStopYmsg_src_loc},
  {"bt", CVAR, &YevalStopYbt},
  {"top", CVAR, &YevalStopYtop},
  {"load", CVAR, &YevalStopYload},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"%%bottom%%vm-run", CVAR, &YevalStopYPPbottomPPvm_run},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"$", CVAR, &YevalStopYD},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"run", DVAR, &YevalStopYrun},
  {"frame", CVAR, &YevalStopYframe},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"$$$", CVAR, &YevalStopYDDD},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"read-file", CVAR, &YevalStopYread_file},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"parse", CVAR, &YevalStopYparse},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$$", NULL},
  {"eval", NULL},
  {"backtrace", NULL},
  {"esctst", NULL},
  {"vm-evaluate", NULL},
  {"$$$", NULL},
  {"parse-in", NULL},
  {"load-file", NULL},
  {"save-image", NULL},
  {"top", NULL},
  {"frame", NULL},
  {"frame-var", NULL},
  {"$", NULL},
  {"g2c-eval", NULL},
  {"do-stack-frames", NULL},
  {"load", NULL},
  {"bt", NULL},
  {"read-file", NULL},
  {"auto-eval", NULL},
  {"*dynamic-compilation?*", NULL},
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
