/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/top");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/top */

EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSsyntaxYDsexpr_propX_tag,"eval/syntax","$sexpr-prop!-tag");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
DEF(YevalStopYtop,"eval/top","top");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
DEF(YevalStopYload,"eval/top","load");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSsyntaxYDsexpr_define_constant_tag,"eval/syntax","$sexpr-define-constant-tag");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yarity_error,"goo/boot","arity-error");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YevalStopYD,"eval/top","$");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
DEF(YevalStopYDD,"eval/top","$$");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YsubtypeQ,"goo/boot","subtype?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalStopYPPbottomPPvm_run,"eval/top","%%bottom%%vm-run");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSast_evalYbinding_value_or,"eval/ast-eval","binding-value-or");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YevalStopYmsg_src_loc,"eval/top","msg-src-loc");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalStopYesctst,"eval/top","esctst");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YOnew,"goo/boot","@new");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YOrev,"goo/boot","@rev");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_174);
DEFLIT(lit_207);
DEFLIT(lit_68);
DEFLIT(lit_86);
DEFLIT(lit_44);
DEFLIT(lit_61);
DEFLIT(lit_54);
DEFLIT(lit_64);
DEFLIT(lit_146);
DEFLIT(lit_201);
DEFLIT(lit_149);
DEFLIT(lit_12);
DEFLIT(lit_206);
DEFLIT(lit_185);
DEFLIT(lit_209);
DEFLIT(lit_22);
DEFLIT(lit_153);
DEFLIT(lit_39);
DEFLIT(lit_169);
DEFLIT(lit_57);
DEFLIT(lit_17);
DEFLIT(lit_33);
DEFLIT(lit_150);
DEFLIT(lit_186);
DEFLIT(lit_158);
DEFLIT(lit_55);
DEFLIT(lit_58);
DEFLIT(lit_135);
DEFLIT(lit_97);
DEFLIT(lit_73);
DEFLIT(lit_161);
DEFLIT(lit_72);
DEFLIT(lit_66);
DEFLIT(lit_131);
DEFLIT(lit_110);
DEFLIT(lit_71);
DEFLIT(lit_105);
DEFLIT(lit_210);
DEFLIT(lit_188);
DEFLIT(lit_127);
DEFLIT(lit_16);
DEFLIT(lit_76);
DEFLIT(lit_132);
DEFLIT(lit_195);
DEFLIT(lit_41);
DEFLIT(lit_126);
DEFLIT(lit_200);
DEFLIT(lit_69);
DEFLIT(lit_98);
DEFLIT(lit_23);
DEFLIT(lit_94);
DEFLIT(lit_176);
DEFLIT(lit_32);
DEFLIT(lit_35);
DEFLIT(lit_170);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_77);
DEFLIT(lit_183);
DEFLIT(lit_189);
DEFLIT(lit_171);
DEFLIT(lit_99);
DEFLIT(lit_205);
DEFLIT(lit_56);
DEFLIT(lit_20);
DEFLIT(lit_154);
DEFLIT(lit_38);
DEFLIT(lit_27);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_166);
DEFLIT(lit_147);
DEFLIT(lit_112);
DEFLIT(lit_136);
DEFLIT(lit_172);
DEFLIT(lit_124);
DEFLIT(lit_198);
DEFLIT(lit_11);
DEFLIT(lit_204);
DEFLIT(lit_187);
DEFLIT(lit_160);
DEFLIT(lit_129);
DEFLIT(lit_159);
DEFLIT(lit_43);
DEFLIT(lit_119);
DEFLIT(lit_5);
DEFLIT(lit_202);
DEFLIT(lit_121);
DEFLIT(lit_45);
DEFLIT(lit_179);
DEFLIT(lit_34);
DEFLIT(lit_118);
DEFLIT(lit_8);
DEFLIT(lit_122);
DEFLIT(lit_2);
DEFLIT(lit_208);
DEFLIT(lit_28);
DEFLIT(lit_101);
DEFLIT(lit_102);
DEFLIT(lit_168);
DEFLIT(lit_123);
DEFLIT(lit_63);
DEFLIT(lit_130);
DEFLIT(lit_133);
DEFLIT(lit_145);
DEFLIT(lit_140);
DEFLIT(lit_82);
DEFLIT(lit_79);
DEFLIT(lit_134);
DEFLIT(lit_156);
DEFLIT(lit_108);
DEFLIT(lit_51);
DEFLIT(lit_89);
DEFLIT(lit_113);
DEFLIT(lit_80);
DEFLIT(lit_137);
DEFLIT(lit_6);
DEFLIT(lit_96);
DEFLIT(lit_70);
DEFLIT(lit_191);
DEFLIT(lit_40);
DEFLIT(lit_25);
DEFLIT(lit_83);
DEFLIT(lit_50);
DEFLIT(lit_52);
DEFLIT(lit_175);
DEFLIT(lit_177);
DEFLIT(lit_13);
DEFLIT(lit_144);
DEFLIT(lit_120);
DEFLIT(lit_109);
DEFLIT(lit_180);
DEFLIT(lit_152);
DEFLIT(lit_167);
DEFLIT(lit_114);
DEFLIT(lit_0);
DEFLIT(lit_138);
DEFLIT(lit_103);
DEFLIT(lit_117);
DEFLIT(lit_151);
DEFLIT(lit_15);
DEFLIT(lit_194);
DEFLIT(lit_21);
DEFLIT(lit_62);
DEFLIT(lit_7);
DEFLIT(lit_88);
DEFLIT(lit_142);
DEFLIT(lit_181);
DEFLIT(lit_164);
DEFLIT(lit_85);
DEFLIT(lit_107);
DEFLIT(lit_155);
DEFLIT(lit_47);
DEFLIT(lit_193);
DEFLIT(lit_31);
DEFLIT(lit_143);
DEFLIT(lit_75);
DEFLIT(lit_165);
DEFLIT(lit_37);
DEFLIT(lit_192);
DEFLIT(lit_162);
DEFLIT(lit_163);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_182);
DEFLIT(lit_148);
DEFLIT(lit_3);
DEFLIT(lit_60);
DEFLIT(lit_42);
DEFLIT(lit_36);
DEFLIT(lit_111);
DEFLIT(lit_139);
DEFLIT(lit_91);
DEFLIT(lit_125);
DEFLIT(lit_30);
DEFLIT(lit_173);
DEFLIT(lit_24);
DEFLIT(lit_92);
DEFLIT(lit_115);
DEFLIT(lit_197);
DEFLIT(lit_100);
DEFLIT(lit_116);
DEFLIT(lit_178);
DEFLIT(lit_78);
DEFLIT(lit_49);
DEFLIT(lit_48);
DEFLIT(lit_104);
DEFLIT(lit_184);
DEFLIT(lit_87);
DEFLIT(lit_29);
DEFLIT(lit_26);
DEFLIT(lit_84);
DEFLIT(lit_46);
DEFLIT(lit_106);
DEFLIT(lit_128);
DEFLIT(lit_93);
DEFLIT(lit_59);
DEFLIT(lit_190);
DEFLIT(lit_9);
DEFLIT(lit_81);
DEFLIT(lit_74);
DEFLIT(lit_53);
DEFLIT(lit_95);
DEFLIT(lit_196);
DEFLIT(lit_90);
DEFLIT(lit_65);
DEFLIT(lit_157);
DEFLIT(lit_67);
DEFLIT(lit_203);
DEFLIT(lit_141);
DEFLIT(lit_199);

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
LOCFOR(fun_x_1904_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_x_1908_36);
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
LOCFOR(fun_x_1955_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1952_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1949_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1946_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1943_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1940_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1937_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1934_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1931_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1928_80);
LOCFOR(fun_81);
LOCFOR(fun_x_1925_82);
LOCFOR(fun_83);
LOCFOR(fun_x_1922_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1919_86);
LOCFOR(fun_87);
LOCFOR(fun_x_1916_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1913_90);
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
  P x_1898F5535;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
  x_1898F5535 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_4,2,s_,ct_env_);
  T2 = FUNFAB(fun_5,1,x_1898F5535);
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
  P astF5536;
  P T0,T1;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  CALL1(1,VARREF(YevalSmoduleYzap_referenced_bindingsX),FREEREF(0));
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),FREEREF(1),FREEREF(0),YPtrue,YPfalse);
  astF5536 = T1;
  T0 = CALL2(1,DYNREF(YevalStopYrun),astF5536,FREEREF(0));
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
  P x_1899F5537;
  P T0,T1,T2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
  x_1899F5537 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_14,2,ct_env_,form_);
  T2 = FUNFAB(fun_15,1,x_1899F5537);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_eval_in_17) {
  P x_,ct_env_;
  P eF5539;
  P oF5538;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPtrue,YPfalse);
  oF5538 = T1;
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),oF5538);
  eF5539 = T0;
UNLINK_STACK();
  QRET(eF5539);
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
  P xF5541;
  P formsF5540;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  formsF5540 = Ynil;
  LOOP_268: {
    P a268_0;
    T8 = BOXGET(FREEREF(0));
    T7 = CALL1(1,VARREF(YgooSconditionsYread),T8);
    xF5541 = T7;
    T2 = CALL1(1,VARREF(YgooSchrYeof_objectQ),xF5541);
    if (T2 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF5540);
      T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
      T1 = T3;
    } else {
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),xF5541,formsF5540);
      a268_0 = T6;
      formsF5540 = a268_0;
      goto LOOP_268;
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
  P portF5542;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  portF5542 = YPfalse;
  portF5542 = BOXFAB(portF5542);
  T2 = FUNFAB(fun_22,2,portF5542,filename_);
  T3 = FUNFAB(fun_23,1,portF5542);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_25) {
  P oF5544;
  P xF5543;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  T2 = CALL1(1,VARREF(YevalStopYread_file),FREEREF(0));
  xF5543 = T2;
  CALL1(1,VARREF(YevalSmoduleYzap_referenced_bindingsX),FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),xF5543,FREEREF(1),YPfalse,YPfalse);
  oF5544 = T1;
  T0 = CALL2(1,DYNREF(YevalStopYrun),oF5544,FREEREF(1));
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
  P x_1900F5545;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T1 = CALL1(1,VARREF(YevalStopYcompiled_fileQ),filename_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYso_load),filename_);
    T0 = T2;
  } else {
    x_1900F5545 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
    T4 = FUNFAB(fun_25,2,filename_,ct_env_);
    T5 = FUNFAB(fun_26,1,x_1900F5545);
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
  P realfileF5546;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
  T3 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF5546 = T3;
  T0 = CALL1(1,VARREF(Ynot),realfileF5546);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yfile_opening_error),name_);
  } else {
  }
  T2 = CALL2(1,VARREF(YevalStopYload_file),realfileF5546,modname_);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_prompt_for_command_expression_30) {
  P env_,level_,prompt_;
  P argsF5549;
  P arg_strF5548;
  P formF5547;
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
  formF5547 = T13;
  T4 = CALL2(1,VARREF(YisaQ),formF5547,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yhead),formF5547);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_56));
    T3 = T5;
  } else {
    T3 = YPfalse;
  }
  if (T3 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF5548 = T12;
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_57),arg_strF5548,LITREF(lit_58));
    T10 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T11);
    argsF5549 = T10;
    T9 = CALL1(1,VARREF(YgooSmacrosY2nd),formF5547);
    T8 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_59),T9);
    T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,argsF5549);
    T2 = T7;
  } else {
    T2 = formF5547;
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

LOCCODEDEF(fun_x_1904_33) {
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
  P x_1903F5566;
  P x_1903F5565;
  P x_1903F5564;
  P x_1903F5563;
  P x_1903F5562;
  P x_1903F5561;
  P x_1903F5560;
  P x_1903F5559;
  P x_1903F5558;
  P x_1903F5557;
  P x_1903F5556;
  P bodyF5555;
  P argsF5554;
  P fF5553;
  P numF5552;
  P x_1903F5551;
  P x_1904F5550;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
LINK_STACK();
  ARG(return_, 0);
  T58 = FUNSHELL(0,fun_x_1904_33,2);
  x_1904F5550 = T58;
  FUNINIT(x_1904F5550, 2,FREEREF(0),return_);
  x_1903F5551 = FREEREF(0);
  numF5552 = YPfalse;
  fF5553 = YPfalse;
  argsF5554 = YPfalse;
  bodyF5555 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1903F5551,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1903F5551,LITREF(lit_69),x_1904F5550);
    x_1903F5556 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1903F5556,x_1904F5550);
    x_1903F5557 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1903F5557,x_1904F5550);
    numF5552 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1903F5557);
    x_1903F5558 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1903F5558,x_1904F5550);
    fF5553 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1903F5558);
    x_1903F5559 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1903F5559,x_1904F5550);
    argsF5554 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1903F5559);
    x_1903F5560 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1903F5560,x_1904F5550);
    x_1903F5561 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1903F5561,x_1904F5550);
    T12 = CALL1(1,VARREF(Ytail),x_1903F5560);
    x_1903F5562 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1903F5562,x_1904F5550);
    T20 = CALL1(1,VARREF(Ytail),x_1903F5556);
    x_1903F5563 = T20;
    bodyF5555 = x_1903F5563;
    x_1903F5564 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1903F5564,x_1904F5550);
    x_1903F5565 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1903F5565,x_1904F5550);
    T8 = CALL1(1,VARREF(Ytail),x_1903F5564);
    x_1903F5566 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1903F5566,x_1904F5550);
  } else {
    T22 = CALL2(1,x_1904F5550,LITREF(lit_70),x_1903F5551);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T30 = numF5552;
  T29 = CALL1(1,VARREF(Ylst),T30);
  T31 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T31,LITREF(lit_72));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_72));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T41 = fF5553;
  T40 = CALL1(1,VARREF(Ylst),T41);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T42,LITREF(lit_72));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T47 = argsF5554;
  T46 = CALL1(1,VARREF(Ylst),T47);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_72));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T48,LITREF(lit_72));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T52 = bodyF5555;
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T57 = numF5552;
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

LOCCODEDEF(fun_x_1908_36) {
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
  P x_1907F5583;
  P x_1907F5582;
  P x_1907F5581;
  P x_1907F5580;
  P x_1907F5579;
  P x_1907F5578;
  P x_1907F5577;
  P x_1907F5576;
  P x_1907F5575;
  P x_1907F5574;
  P x_1907F5573;
  P bodyF5572;
  P argsF5571;
  P fF5570;
  P numF5569;
  P x_1907F5568;
  P x_1908F5567;
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
  T113 = FUNSHELL(0,fun_x_1908_36,2);
  x_1908F5567 = T113;
  FUNINIT(x_1908F5567, 2,FREEREF(0),return_);
  x_1907F5568 = FREEREF(0);
  numF5569 = YPfalse;
  fF5570 = YPfalse;
  argsF5571 = YPfalse;
  bodyF5572 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1907F5568,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1907F5568,LITREF(lit_82),x_1908F5567);
    x_1907F5573 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1907F5573,x_1908F5567);
    x_1907F5574 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1907F5574,x_1908F5567);
    numF5569 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1907F5574);
    x_1907F5575 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1907F5575,x_1908F5567);
    fF5570 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1907F5575);
    x_1907F5576 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1907F5576,x_1908F5567);
    argsF5571 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1907F5576);
    x_1907F5577 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1907F5577,x_1908F5567);
    x_1907F5578 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1907F5578,x_1908F5567);
    T12 = CALL1(1,VARREF(Ytail),x_1907F5577);
    x_1907F5579 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1907F5579,x_1908F5567);
    T20 = CALL1(1,VARREF(Ytail),x_1907F5573);
    x_1907F5580 = T20;
    bodyF5572 = x_1907F5580;
    x_1907F5581 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1907F5581,x_1908F5567);
    x_1907F5582 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1907F5582,x_1908F5567);
    T8 = CALL1(1,VARREF(Ytail),x_1907F5581);
    x_1907F5583 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1907F5583,x_1908F5567);
  } else {
    T22 = CALL2(1,x_1908F5567,LITREF(lit_70),x_1907F5568);
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
  T43 = fF5570;
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = argsF5571;
  T44 = CALL1(1,VARREF(Ylst),T45);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T44,LITREF(lit_72));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T57 = fF5570;
  T56 = CALL1(1,VARREF(Ylst),T57);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,LITREF(lit_72));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T66 = fF5570;
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
  T72 = numF5569;
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
  T94 = bodyF5572;
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
  P slF5584;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  T1 = CALL2(1,VARREF(YisaQ),f_,VARREF(YLmetG));
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSfunYfun_src_loc),f_);
    slF5584 = T7;
    T3 = CALL2(1,VARREF(YisaQ),slF5584,VARREF(YLsrc_locG));
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(Ysrc_loc_file),slF5584);
      T6 = CALL1(1,VARREF(Ysrc_loc_line),slF5584);
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
  P numF5587;
  P UnameF5586;
  P argsF5585;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF5585 = T16;
  T13 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_93);
  }
  UnameF5586 = T12;
  T10 = BOXGET(FREEREF(0));
  T11 = BOXGET(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF5587 = T9;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF5586,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_107),numF5587,f_,argsF5585);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF5586,LITREF(lit_98));
  if (T4 != YPfalse) {
    BOXPUT(numF5587,FREEREF(1));
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
  P UnumF5590;
  P Utop_numF5589;
  P Useen_topF5588;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF5588 = YPfalse;
  Useen_topF5588 = BOXFAB(Useen_topF5588);
  Utop_numF5589 = YPint((P)0);
  Utop_numF5589 = BOXFAB(Utop_numF5589);
  UnumF5590 = YPint((P)0);
  UnumF5590 = BOXFAB(UnumF5590);
  T4 = FUNFAB(fun_40,4,UnumF5590,Utop_numF5589,Useen_topF5588,break_);
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
  P numF5593;
  P UnameF5592;
  P argsF5591;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T18 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF5591 = T18;
  T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T15 != YPfalse) {
    T17 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T17);
    T14 = T16;
  } else {
    T14 = LITREF(lit_93);
  }
  UnameF5592 = T14;
  T12 = BOXGET(FREEREF(0));
  T13 = BOXGET(FREEREF(1));
  T11 = CALL2(1,VARREF(YgooSmathY_),T12,T13);
  numF5593 = T11;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF5592,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF5593);
    if (T4 != YPfalse) {
      CALL5(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_112),numF5593,f_,argsF5591);
      CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
      T5 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF5592,LITREF(lit_98));
  if (T6 != YPfalse) {
    BOXPUT(numF5593,FREEREF(1));
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
  P UnumF5596;
  P Utop_numF5595;
  P Useen_topF5594;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF5594 = YPfalse;
  Useen_topF5594 = BOXFAB(Useen_topF5594);
  Utop_numF5595 = YPint((P)0);
  Utop_numF5595 = BOXFAB(Utop_numF5595);
  UnumF5596 = YPint((P)0);
  UnumF5596 = BOXFAB(UnumF5596);
  T4 = FUNFAB(fun_43,5,UnumF5596,Utop_numF5595,Useen_topF5594,break_,FREEREF(0));
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
  P numF5599;
  P UnameF5598;
  P argsF5597;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T21 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF5597 = T21;
  T18 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T18 != YPfalse) {
    T20 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
    T17 = T19;
  } else {
    T17 = LITREF(lit_93);
  }
  UnameF5598 = T17;
  T15 = BOXGET(FREEREF(0));
  T16 = BOXGET(FREEREF(1));
  T14 = CALL2(1,VARREF(YgooSmathY_),T15,T16);
  numF5599 = T14;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF5598,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF5599);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSfunYfun_names),f_);
      T7 = CALL2(1,VARREF(YgooScolsSseqYpos),T8,FREEREF(5));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),argsF5597,T7);
      T5 = CALL1(1,FREEREF(6),T6);
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
  } else {
  }
  T9 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF5598,LITREF(lit_98));
  if (T9 != YPfalse) {
    BOXPUT(numF5599,FREEREF(1));
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
  P UnumF5602;
  P Utop_numF5601;
  P Useen_topF5600;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF5600 = YPfalse;
  Useen_topF5600 = BOXFAB(Useen_topF5600);
  Utop_numF5601 = YPint((P)0);
  Utop_numF5601 = BOXFAB(Utop_numF5601);
  UnumF5602 = YPint((P)0);
  UnumF5602 = BOXFAB(UnumF5602);
  T4 = FUNFAB(fun_46,7,UnumF5602,Utop_numF5601,Useen_topF5600,break_,FREEREF(0),FREEREF(1),FREEREF(2));
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
  P numF5605;
  P UnameF5604;
  P argsF5603;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
  T16 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF5603 = T16;
  T13 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
  if (T13 != YPfalse) {
    T15 = CALL1(1,VARREF(YgooSfunYfun_name),f_);
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T15);
    T12 = T14;
  } else {
    T12 = LITREF(lit_93);
  }
  UnameF5604 = T12;
  T10 = BOXGET(FREEREF(0));
  T11 = BOXGET(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathY_),T10,T11);
  numF5605 = T9;
  T0 = BOXGET(FREEREF(2));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF5604,LITREF(lit_97));
    if (T1 != YPfalse) {
      T2 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_121),numF5605,f_);
    CALL1(1,VARREF(YevalStopYmsg_src_loc),f_);
    T3 = CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF5604,LITREF(lit_98));
  if (T4 != YPfalse) {
    BOXPUT(numF5605,FREEREF(1));
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
  P UnumF5608;
  P Utop_numF5607;
  P Useen_topF5606;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(break_, 0);
  Useen_topF5606 = YPfalse;
  Useen_topF5606 = BOXFAB(Useen_topF5606);
  Utop_numF5607 = YPint((P)0);
  Utop_numF5607 = BOXFAB(Utop_numF5607);
  UnumF5608 = YPint((P)0);
  UnumF5608 = BOXFAB(UnumF5608);
  T4 = FUNFAB(fun_50,4,UnumF5608,Utop_numF5607,Useen_topF5606,break_);
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
  P x_1910F5610;
  P x_1909F5609;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  x_1909F5609 = c_;
  x_1910F5610 = VARREF(YisaQ);
  T1 = CALL2(0,x_1910F5610,x_1909F5609,VARREF(YgooSconditionsYLkeyboard_interruptG));
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

LOCCODEDEF(fun_x_1955_62) {
  P msg_,args_;
  P x_1959F5615;
  P x_1958F5614;
  P x_1957F5613;
  P x_1956F5612;
  P resF5611;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T7 = BOXGET(FREEREF(1));
  T6 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T7);
  resF5611 = T6;
  T2 = BOXGET(FREEREF(1));
  T3 = resF5611;
  CALL4(1,VARREF(YevalStopYprint_result_expression),T2,FREEREF(2),LITREF(lit_185),T3);
  x_1956F5612 = VARREF(YevalStopYDDD);
  x_1957F5613 = VARREF(YevalStopYDD);
  x_1958F5614 = VARREF(YevalStopYD);
  T5 = resF5611;
  x_1959F5615 = T5;
  VARSET(YevalStopYDDD,x_1957F5613);
  VARSET(YevalStopYDD,x_1958F5614);
  VARSET(YevalStopYD,x_1959F5615);
  T4 = resF5611 = x_1956F5612;
  T0 = CALL1(1,FREEREF(3),T4);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_63) {
  P return_;
  P x_1954F5624;
  P x_1954F5623;
  P x_1954F5622;
  P x_1954F5621;
  P x_1954F5620;
  P nameF5619;
  P nF5618;
  P x_1954F5617;
  P x_1955F5616;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1955_62,4);
  x_1955F5616 = T18;
  FUNINIT(x_1955F5616, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1954F5617 = FREEREF(3);
  nF5618 = YPfalse;
  nameF5619 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1954F5617,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1954F5617,LITREF(lit_186),x_1955F5616);
    x_1954F5620 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1954F5620,x_1955F5616);
    nF5618 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1954F5620);
    x_1954F5621 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1954F5621,x_1955F5616);
    nameF5619 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1954F5621);
    x_1954F5622 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1954F5622,x_1955F5616);
    x_1954F5623 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1954F5623,x_1955F5616);
    T6 = CALL1(1,VARREF(Ytail),x_1954F5622);
    x_1954F5624 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1954F5624,x_1955F5616);
  } else {
    T12 = CALL2(1,x_1955F5616,LITREF(lit_70),x_1954F5617);
  }
  T14 = BOXGET(FREEREF(1));
  T16 = nF5618;
  T17 = nameF5619;
  T15 = CALL2(1,VARREF(YevalStopYframe_var),T16,T17);
  T13 = CALL4(1,VARREF(YevalStopYprint_result_expression),T14,FREEREF(2),LITREF(lit_187),T15);
UNLINK_STACK();
  QRET(T13);
}

LOCCODEDEF(fun_x_1952_64) {
  P msg_,args_;
  P x_1953F5625;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1953F5625 = FREEREF(0);
  T2 = FUNFAB(fun_63,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1953F5625);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_65) {
  P return_;
  P x_1951F5632;
  P x_1951F5631;
  P x_1951F5630;
  P x_1951F5629;
  P nF5628;
  P x_1951F5627;
  P x_1952F5626;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(return_, 0);
  T12 = FUNSHELL(0,fun_x_1952_64,5);
  x_1952F5626 = T12;
  FUNINIT(x_1952F5626, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1951F5627 = FREEREF(0);
  nF5628 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1951F5627,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1951F5627,LITREF(lit_188),x_1952F5626);
    x_1951F5629 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1951F5629,x_1952F5626);
    nF5628 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1951F5629);
    x_1951F5630 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1951F5630,x_1952F5626);
    x_1951F5631 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1951F5631,x_1952F5626);
    T5 = CALL1(1,VARREF(Ytail),x_1951F5630);
    x_1951F5632 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1951F5632,x_1952F5626);
  } else {
    T9 = CALL2(1,x_1952F5626,LITREF(lit_70),x_1951F5627);
  }
  T11 = nF5628;
  T10 = CALL1(1,VARREF(YevalStopYframe),T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1949_66) {
  P msg_,args_;
  P x_1950F5633;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1950F5633 = FREEREF(0);
  T2 = FUNFAB(fun_65,4,x_1950F5633,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_67) {
  P return_;
  P x_1948F5638;
  P x_1948F5637;
  P x_1948F5636;
  P x_1948F5635;
  P x_1949F5634;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1949_66,5);
  x_1949F5634 = T8;
  FUNINIT(x_1949F5634, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1948F5635 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1948F5635,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1948F5635,LITREF(lit_189),x_1949F5634);
    x_1948F5636 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1948F5636,x_1949F5634);
    x_1948F5637 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1948F5637,x_1949F5634);
    T4 = CALL1(1,VARREF(Ytail),x_1948F5636);
    x_1948F5638 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1948F5638,x_1949F5634);
  } else {
    T6 = CALL2(1,x_1949F5634,LITREF(lit_70),x_1948F5635);
  }
  T7 = CALL0(1,VARREF(YevalStopYbacktrace));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1946_68) {
  P msg_,args_;
  P x_1947F5639;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1947F5639 = FREEREF(0);
  T2 = FUNFAB(fun_67,4,x_1947F5639,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_69) {
  P return_;
  P x_1945F5644;
  P x_1945F5643;
  P x_1945F5642;
  P x_1945F5641;
  P x_1946F5640;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1946_68,5);
  x_1946F5640 = T8;
  FUNINIT(x_1946F5640, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1945F5641 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1945F5641,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1945F5641,LITREF(lit_190),x_1946F5640);
    x_1945F5642 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1945F5642,x_1946F5640);
    x_1945F5643 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1945F5643,x_1946F5640);
    T4 = CALL1(1,VARREF(Ytail),x_1945F5642);
    x_1945F5644 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1945F5644,x_1946F5640);
  } else {
    T6 = CALL2(1,x_1946F5640,LITREF(lit_70),x_1945F5641);
  }
  T7 = CALL0(1,VARREF(YevalStopYbt));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1943_70) {
  P msg_,args_;
  P x_1944F5645;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1944F5645 = FREEREF(0);
  T2 = FUNFAB(fun_69,4,x_1944F5645,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_71) {
  P return_;
  P x_1942F5650;
  P x_1942F5649;
  P x_1942F5648;
  P x_1942F5647;
  P x_1943F5646;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_1943_70,5);
  x_1943F5646 = T9;
  FUNINIT(x_1943F5646, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1942F5647 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1942F5647,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1942F5647,LITREF(lit_191),x_1943F5646);
    x_1942F5648 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1942F5648,x_1943F5646);
    x_1942F5649 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1942F5649,x_1943F5646);
    T4 = CALL1(1,VARREF(Ytail),x_1942F5648);
    x_1942F5650 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1942F5650,x_1943F5646);
  } else {
    T6 = CALL2(1,x_1943F5646,LITREF(lit_70),x_1942F5647);
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

LOCCODEDEF(fun_x_1940_72) {
  P msg_,args_;
  P x_1941F5651;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1941F5651 = FREEREF(0);
  T2 = FUNFAB(fun_71,4,x_1941F5651,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P return_;
  P x_1939F5656;
  P x_1939F5655;
  P x_1939F5654;
  P x_1939F5653;
  P x_1940F5652;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1940_72,5);
  x_1940F5652 = T8;
  FUNINIT(x_1940F5652, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1939F5653 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1939F5653,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1939F5653,LITREF(lit_192),x_1940F5652);
    x_1939F5654 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1939F5654,x_1940F5652);
    x_1939F5655 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1939F5655,x_1940F5652);
    T4 = CALL1(1,VARREF(Ytail),x_1939F5654);
    x_1939F5656 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1939F5656,x_1940F5652);
  } else {
    T6 = CALL2(1,x_1940F5652,LITREF(lit_70),x_1939F5653);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPvm_run));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1937_74) {
  P msg_,args_;
  P x_1938F5657;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1938F5657 = FREEREF(0);
  T2 = FUNFAB(fun_73,4,x_1938F5657,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_75) {
  P return_;
  P x_1936F5662;
  P x_1936F5661;
  P x_1936F5660;
  P x_1936F5659;
  P x_1937F5658;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1937_74,5);
  x_1937F5658 = T8;
  FUNINIT(x_1937F5658, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1936F5659 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1936F5659,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1936F5659,LITREF(lit_193),x_1937F5658);
    x_1936F5660 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1936F5660,x_1937F5658);
    x_1936F5661 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1936F5661,x_1937F5658);
    T4 = CALL1(1,VARREF(Ytail),x_1936F5660);
    x_1936F5662 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1936F5662,x_1937F5658);
  } else {
    T6 = CALL2(1,x_1937F5658,LITREF(lit_70),x_1936F5659);
  }
  T7 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1934_76) {
  P msg_,args_;
  P x_1935F5663;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1935F5663 = FREEREF(0);
  T2 = FUNFAB(fun_75,4,x_1935F5663,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_77) {
  P return_;
  P x_1933F5668;
  P x_1933F5667;
  P x_1933F5666;
  P x_1933F5665;
  P x_1934F5664;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(return_, 0);
  T9 = FUNSHELL(0,fun_x_1934_76,5);
  x_1934F5664 = T9;
  FUNINIT(x_1934F5664, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1933F5665 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1933F5665,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1933F5665,LITREF(lit_194),x_1934F5664);
    x_1933F5666 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1933F5666,x_1934F5664);
    x_1933F5667 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1933F5667,x_1934F5664);
    T4 = CALL1(1,VARREF(Ytail),x_1933F5666);
    x_1933F5668 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1933F5668,x_1934F5664);
  } else {
    T6 = CALL2(1,x_1934F5664,LITREF(lit_70),x_1933F5665);
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

LOCCODEDEF(fun_x_1931_78) {
  P msg_,args_;
  P x_1932F5669;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1932F5669 = FREEREF(0);
  T2 = FUNFAB(fun_77,4,x_1932F5669,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_79) {
  P return_;
  P new_envF5677;
  P x_1930F5676;
  P x_1930F5675;
  P x_1930F5674;
  P x_1930F5673;
  P mF5672;
  P x_1930F5671;
  P x_1931F5670;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1931_78,5);
  x_1931F5670 = T13;
  FUNINIT(x_1931F5670, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1930F5671 = FREEREF(0);
  mF5672 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1930F5671,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1930F5671,LITREF(lit_195),x_1931F5670);
    x_1930F5673 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1930F5673,x_1931F5670);
    mF5672 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1930F5673);
    x_1930F5674 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1930F5674,x_1931F5670);
    x_1930F5675 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1930F5675,x_1931F5670);
    T5 = CALL1(1,VARREF(Ytail),x_1930F5674);
    x_1930F5676 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1930F5676,x_1931F5670);
  } else {
    T9 = CALL2(1,x_1931F5670,LITREF(lit_70),x_1930F5671);
  }
  T12 = mF5672;
  T11 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),T12);
  new_envF5677 = T11;
  T10 = BOXPUT(new_envF5677,FREEREF(2));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1928_80) {
  P msg_,args_;
  P x_1929F5678;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1929F5678 = FREEREF(0);
  T2 = FUNFAB(fun_79,4,x_1929F5678,FREEREF(1),FREEREF(2),FREEREF(3));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_81) {
  P return_;
  P x_1927F5685;
  P x_1927F5684;
  P x_1927F5683;
  P x_1927F5682;
  P nF5681;
  P x_1927F5680;
  P x_1928F5679;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1928_80,5);
  x_1928F5679 = T13;
  FUNINIT(x_1928F5679, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1927F5680 = FREEREF(0);
  nF5681 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1927F5680,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1927F5680,LITREF(lit_196),x_1928F5679);
    x_1927F5682 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1927F5682,x_1928F5679);
    nF5681 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1927F5682);
    x_1927F5683 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1927F5683,x_1928F5679);
    x_1927F5684 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1927F5684,x_1928F5679);
    T5 = CALL1(1,VARREF(Ytail),x_1927F5683);
    x_1927F5685 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1927F5685,x_1928F5679);
  } else {
    T9 = CALL2(1,x_1928F5679,LITREF(lit_70),x_1927F5680);
  }
  T11 = BOXGET(FREEREF(4));
  T12 = nF5681;
  T10 = CALL2(1,VARREF(YevalStopYdo_restart),T11,T12);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1925_82) {
  P msg_,args_;
  P x_1926F5686;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1926F5686 = FREEREF(0);
  T2 = FUNFAB(fun_81,5,x_1926F5686,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_83) {
  P return_;
  P x_1924F5691;
  P x_1924F5690;
  P x_1924F5689;
  P x_1924F5688;
  P x_1925F5687;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1925_82,6);
  x_1925F5687 = T8;
  FUNINIT(x_1925F5687, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1924F5688 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1924F5688,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1924F5688,LITREF(lit_197),x_1925F5687);
    x_1924F5689 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1924F5689,x_1925F5687);
    x_1924F5690 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1924F5690,x_1925F5687);
    T4 = CALL1(1,VARREF(Ytail),x_1924F5689);
    x_1924F5691 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1924F5691,x_1925F5687);
  } else {
    T6 = CALL2(1,x_1925F5687,LITREF(lit_70),x_1924F5688);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLrestartG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1922_84) {
  P msg_,args_;
  P x_1923F5692;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1923F5692 = FREEREF(0);
  T2 = FUNFAB(fun_83,5,x_1923F5692,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_85) {
  P return_;
  P x_1921F5697;
  P x_1921F5696;
  P x_1921F5695;
  P x_1921F5694;
  P x_1922F5693;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1922_84,6);
  x_1922F5693 = T8;
  FUNINIT(x_1922F5693, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1921F5694 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1921F5694,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1921F5694,LITREF(lit_198),x_1922F5693);
    x_1921F5695 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1921F5695,x_1922F5693);
    x_1921F5696 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1921F5696,x_1922F5693);
    T4 = CALL1(1,VARREF(Ytail),x_1921F5695);
    x_1921F5697 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1921F5697,x_1922F5693);
  } else {
    T6 = CALL2(1,x_1922F5693,LITREF(lit_70),x_1921F5694);
  }
  T7 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),VARREF(YgooSconditionsYLconditionG),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1919_86) {
  P msg_,args_;
  P x_1920F5698;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1920F5698 = FREEREF(0);
  T2 = FUNFAB(fun_85,5,x_1920F5698,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_87) {
  P return_;
  P x_1918F5703;
  P x_1918F5702;
  P x_1918F5701;
  P x_1918F5700;
  P x_1919F5699;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1919_86,6);
  x_1919F5699 = T8;
  FUNINIT(x_1919F5699, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1918F5700 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1918F5700,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1918F5700,LITREF(lit_199),x_1919F5699);
    x_1918F5701 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1918F5701,x_1919F5699);
    x_1918F5702 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1918F5702,x_1919F5699);
    T4 = CALL1(1,VARREF(Ytail),x_1918F5701);
    x_1918F5703 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1918F5703,x_1919F5699);
  } else {
    T6 = CALL2(1,x_1919F5699,LITREF(lit_70),x_1918F5700);
  }
  T7 = CALL1(0,FREEREF(5),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1916_88) {
  P msg_,args_;
  P x_1917F5704;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1917F5704 = FREEREF(0);
  T2 = FUNFAB(fun_87,6,x_1917F5704,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_89) {
  P return_;
  P x_1915F5709;
  P x_1915F5708;
  P x_1915F5707;
  P x_1915F5706;
  P x_1916F5705;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1916_88,7);
  x_1916F5705 = T8;
  FUNINIT(x_1916F5705, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1915F5706 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1915F5706,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1915F5706,LITREF(lit_200),x_1916F5705);
    x_1915F5707 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1915F5707,x_1916F5705);
    x_1915F5708 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1915F5708,x_1916F5705);
    T4 = CALL1(1,VARREF(Ytail),x_1915F5707);
    x_1915F5709 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1915F5709,x_1916F5705);
  } else {
    T6 = CALL2(1,x_1916F5705,LITREF(lit_70),x_1915F5706);
  }
  T7 = CALL1(0,FREEREF(6),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_x_1913_90) {
  P msg_,args_;
  P x_1914F5710;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1914F5710 = FREEREF(0);
  T2 = FUNFAB(fun_89,7,x_1914F5710,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_91) {
  P return_;
  P x_1912F5715;
  P x_1912F5714;
  P x_1912F5713;
  P x_1912F5712;
  P x_1913F5711;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = FUNSHELL(0,fun_x_1913_90,8);
  x_1913F5711 = T8;
  FUNINIT(x_1913F5711, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1912F5712 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1912F5712,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1912F5712,LITREF(lit_201),x_1913F5711);
    x_1912F5713 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1912F5713,x_1913F5711);
    x_1912F5714 = T3;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1912F5714,x_1913F5711);
    T4 = CALL1(1,VARREF(Ytail),x_1912F5713);
    x_1912F5715 = T4;
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1912F5715,x_1913F5711);
  } else {
    T6 = CALL2(1,x_1913F5711,LITREF(lit_70),x_1912F5712);
  }
  T7 = CALL1(0,FREEREF(7),YPfalse);
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_92) {
  P x_1911F5717;
  P formF5716;
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
  formF5716 = T8;
  T4 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF5716);
  if (T4 != YPfalse) {
    T5 = CALL1(1,FREEREF(4),YPfalse);
    T3 = T5;
  } else {
    x_1911F5717 = formF5716;
    T7 = FUNFAB(fun_91,8,x_1911F5717,formF5716,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
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
  LOOP_269: {
    T0 = FUNFAB(fun_94,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_);
    with_exit(T0);
    goto LOOP_269;
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_PPtopPPtop_in_96) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF5718;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF5718 = YPfalse;
  restartsF5718 = BOXFAB(restartsF5718);
  T4 = FUNFAB(fun_95,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF5718);
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
  LOOP_270: {
    T0 = FUNFAB(fun_99,2,FREEREF(0),FREEREF(1));
    with_exit(T0);
    goto LOOP_270;
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
  P tmpF5720;
  P modeF5719;
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
  fun_0 = YPfab_met(FUNCODEREF(fun_0),T3,YPfalse,LITREF(lit_1),sloc(14),YPsb((P)"(fun () (exit 'exit))"));
  T2 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T2,YPfalse,LITREF(lit_1),sloc(15),YPsb((P)"(fun () (msg out CLEANUP\n) 'cleanup)"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T1,YPfalse,LITREF(lit_2),sloc(13),YPsb((P)"(fun (exit) (fin (exit 'exit) (msg out CLEANUP\n) 'cleanup) (msg out DO\n) 'done)"));
  T0 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalStopYesctst = YPfab_met(FUNCODEREF(YevalStopYesctst),T0,LITREF(lit_0),LITREF(lit_1),sloc(12),YPsb((P)"(fun () (esc exit (fin (exit 'exit) (msg out CLEANUP\n) 'cleanup) (msg out DO\n) 'done))"));
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
  fun_4 = YPfab_met(FUNCODEREF(fun_4),T9,YPfalse,LITREF(lit_1),sloc(23),YPsb((P)"(fun () (seq (set *dynamic-compilation?* #f) (dlet () (objectify-with-subtransaction (read-from-string s) ct-env #t #f))))"));
  T8 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T8,YPfalse,LITREF(lit_1),sloc(23),YPsb((P)"(fun () (set *dynamic-compilation?* x-1898))"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_6 = YPfab_met(FUNCODEREF(fun_parse_in_6),T7,LITREF(lit_10),LITREF(lit_11),sloc(22),YPsb((P)"(fun ((s <str>) ct-env) (dlet ((*dynamic-compilation?* #f)) (objectify-with-subtransaction (read-from-string s) ct-env #t #f)))"));
  T11 = VARREF_OR(YevalStopYparse_in,YPfalse);
  T12 = fun_parse_in_6;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalStopYparse_in,T10);
  lit_12 = YPPsym((P)"parse");
  lit_13 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_7 = YPfab_met(FUNCODEREF(fun_parse_7),T13,LITREF(lit_12),LITREF(lit_13),sloc(26),YPsb((P)"(fun ((s <str>) (modname <sym>)) (parse-in s (runtime-environment modname)))"));
  T15 = VARREF_OR(YevalStopYparse,YPfalse);
  T16 = fun_parse_7;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalStopYparse,T14);
  lit_14 = YPPsym((P)"str-parse-in");
  lit_15 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"ct-env"));
  lit_16 = YPsb((P)"%=\n");
  T17 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_8 = YPfab_met(FUNCODEREF(fun_str_parse_in_8),T17,LITREF(lit_14),LITREF(lit_15),sloc(29),YPsb((P)"(fun ((s <str>) ct-env) (msg out %=\n (parse-in s ct-env)))"));
  T19 = VARREF_OR(YevalStopYstr_parse_in,YPfalse);
  T20 = fun_str_parse_in_8;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YevalStopYstr_parse_in,T18);
  lit_17 = YPPsym((P)"str-parse");
  lit_18 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"modname"));
  T21 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_9 = YPfab_met(FUNCODEREF(fun_str_parse_9),T21,LITREF(lit_17),LITREF(lit_18),sloc(32),YPsb((P)"(fun ((s <str>) (modname <sym>)) (str-parse-in s (runtime-environment modname)))"));
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
  YevalStopYPPbottomPPvm_run = YPfab_met(FUNCODEREF(YevalStopYPPbottomPPvm_run),T27,LITREF(lit_21),LITREF(lit_22),sloc(37),YPsb((P)"(fun (ast ct-env) (vm-evaluate ast ct-env))"));
  T28 = YevalStopYPPbottomPPvm_run;
  VARSET(YevalStopYPPbottomPPvm_run,T28);
  lit_23 = YPPsym((P)"%%bottom%%ast-run");
  lit_24 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPast_run = YPfab_met(FUNCODEREF(YevalStopYPPbottomPPast_run),T29,LITREF(lit_23),LITREF(lit_24),sloc(40),YPsb((P)"(fun (ast ct-env) (ast-evaluate ast))"));
  T30 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T30);
  lit_25 = YPPsym((P)"%%bottom%%g2c-run");
  lit_26 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPfab_met(FUNCODEREF(YevalStopYPPbottomPPg2c_run),T31,LITREF(lit_25),LITREF(lit_26),sloc(43),YPsb((P)"(fun (ast ct-env) (g2c-eval ast ct-env))"));
  T32 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T32);
  lit_27 = YPPsym((P)"auto-run");
  lit_28 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"ct-env"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPfab_met(FUNCODEREF(YevalStopYauto_run),T33,LITREF(lit_27),LITREF(lit_28),sloc(46),YPsb((P)"(fun (ast ct-env) (if (ast-contains-fun? ast) (%%bottom%%g2c-run ast ct-env) (%%bottom%%ast-run ast ct-env)))"));
  T34 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T34);
  lit_29 = YPPsym((P)"auto-eval");
  lit_30 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"ct-env"));
  T37 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T37,YPfalse,LITREF(lit_1),sloc(52),YPsb((P)"(fun () (seq (set *dynamic-compilation?* #t) (dlet () (zap-referenced-bindings! ct-env) (def ast (objectify-with-subtransaction form ct-env #t #f)) (run ast ct-env))))"));
  T36 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T36,YPfalse,LITREF(lit_1),sloc(52),YPsb((P)"(fun () (set *dynamic-compilation?* x-1899))"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPfab_met(FUNCODEREF(YevalStopYauto_eval),T35,LITREF(lit_29),LITREF(lit_30),sloc(51),YPsb((P)"(fun (form ct-env) (dlet ((*dynamic-compilation?* #t)) (zap-referenced-bindings! ct-env) (def ast (objectify-with-subtransaction form ct-env #t #f)) (run ast ct-env)))"));
  T38 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T38);
  lit_31 = YPsb((P)"GOO_EVAL_MODE");
  lit_32 = YPsb((P)"ast");
  lit_33 = YPsb((P)"g2c");
  T44 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_31));
  modeF5719 = T44;
  T41 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF5719,LITREF(lit_32));
  T40 = XCALL1(1,VARREF(Ynot),T41);
  if (T40 != YPfalse) {
    T43 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF5719,LITREF(lit_33));
    tmpF5720 = T43;
    if (tmpF5720 != YPfalse) {
      T42 = tmpF5720;
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
  fun_eval_in_17 = YPfab_met(FUNCODEREF(fun_eval_in_17),T46,LITREF(lit_34),LITREF(lit_35),sloc(65),YPsb((P)"(fun (x ct-env) (def o (objectify-with-subtransaction x ct-env #t #f)) (def e (ast-evaluate o)) e)"));
  T48 = VARREF_OR(YevalStopYeval_in,YPfalse);
  T49 = fun_eval_in_17;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalStopYeval_in,T47);
  lit_36 = YPPsym((P)"eval");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_18 = YPfab_met(FUNCODEREF(fun_eval_18),T50,LITREF(lit_36),LITREF(lit_37),sloc(70),YPsb((P)"(fun (x (modname <sym>)) (eval-in x (runtime-environment modname)))"));
  T52 = VARREF_OR(YevalSsyntaxYeval,YPfalse);
  T53 = fun_eval_18;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSsyntaxYeval,T51);
  lit_38 = YPPsym((P)"str-eval-in");
  lit_39 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ct-env"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_19 = YPfab_met(FUNCODEREF(fun_str_eval_in_19),T54,LITREF(lit_38),LITREF(lit_39),sloc(73),YPsb((P)"(fun ((x <str>) ct-env => <any>) (write-to-string (eval-in (read-from-string x) ct-env)))"));
  T56 = VARREF_OR(YevalStopYstr_eval_in,YPfalse);
  T57 = fun_str_eval_in_19;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalStopYstr_eval_in,T55);
  lit_40 = YPPsym((P)"str-eval");
  lit_41 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"modname"));
  T58 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_20 = YPfab_met(FUNCODEREF(fun_str_eval_20),T58,LITREF(lit_40),LITREF(lit_41),sloc(76),YPsb((P)"(fun ((x <str>) (modname <sym>)) (str-eval-in x (runtime-environment modname)))"));
  T60 = VARREF_OR(YevalStopYstr_eval,YPfalse);
  T61 = fun_str_eval_20;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalStopYstr_eval,T59);
  lit_42 = YPPsym((P)"compiled-file?");
  lit_43 = YPPlist(1,YPPsym((P)"name"));
  lit_44 = YPsb((P)".gooc");
  T62 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPfab_met(FUNCODEREF(YevalStopYcompiled_fileQ),T62,LITREF(lit_42),LITREF(lit_43),sloc(79),YPsb((P)"(fun ((name <str>)) (suffix? name .gooc))"));
  T63 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T63);
  lit_45 = YPPsym((P)"read-file");
  lit_46 = YPPlist(1,YPPsym((P)"filename"));
  T66 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T66,YPfalse,LITREF(lit_1),sloc(83),YPsb((P)"(fun () (seq (set port (open <file-in-port> filename)) (rep loop ((forms '())) (def x (read port)) (if (eof-object? x) (sexpr-sequence->begin (rev! forms)) (loop (pair x forms))))))"));
  T65 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T65,YPfalse,LITREF(lit_1),sloc(83),YPsb((P)"(fun () (and port (close port)))"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_24 = YPfab_met(FUNCODEREF(fun_read_file_24),T64,LITREF(lit_45),LITREF(lit_46),sloc(82),YPsb((P)"(fun ((filename <str>) => <any>) (with-port (port (open <file-in-port> filename)) (rep loop ((forms '())) (def x (read port)) (if (eof-object? x) (sexpr-sequence->begin (rev! forms)) (loop (pair x forms))))))"));
  T68 = VARREF_OR(YevalStopYread_file,YPfalse);
  T69 = fun_read_file_24;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalStopYread_file,T67);
  lit_47 = YPPsym((P)"load-in");
  lit_48 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  T72 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T72,YPfalse,LITREF(lit_1),sloc(93),YPsb((P)"(fun () (seq (set *dynamic-compilation?* #t) (dlet () (def x (read-file filename)) (zap-referenced-bindings! ct-env) (def o (objectify-with-subtransaction x ct-env #f #f)) (run o ct-env))))"));
  T71 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T71,YPfalse,LITREF(lit_1),sloc(93),YPsb((P)"(fun () (set *dynamic-compilation?* x-1900))"));
  T70 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_27 = YPfab_met(FUNCODEREF(fun_load_in_27),T70,LITREF(lit_47),LITREF(lit_48),sloc(90),YPsb((P)"(fun ((filename <str>) ct-env) (if (compiled-file? filename) (so-load filename) (dlet ((*dynamic-compilation?* #t)) (def x (read-file filename)) (zap-referenced-bindings! ct-env) (def o (objectify-with-subtransaction x ct-env #f #f)) (run o ct-env))))"));
  T74 = VARREF_OR(YevalSmoduleYload_in,YPfalse);
  T75 = fun_load_in_27;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSmoduleYload_in,T73);
  lit_49 = YPPsym((P)"load-file");
  lit_50 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"modname"));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_28 = YPfab_met(FUNCODEREF(fun_load_file_28),T76,LITREF(lit_49),LITREF(lit_50),sloc(102),YPsb((P)"(fun ((filename <str>) (modname <sym>)) (load-in filename (runtime-environment modname)))"));
  T78 = VARREF_OR(YevalStopYload_file,YPfalse);
  T79 = fun_load_file_28;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalStopYload_file,T77);
  lit_51 = YPPsym((P)"load");
  lit_52 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"modname"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_29 = YPfab_met(FUNCODEREF(fun_load_29),T80,LITREF(lit_51),LITREF(lit_52),sloc(105),YPsb((P)"(fun (name (modname <sym>)) (def realfile (find-goo-file-in-path name *module-search-path*)) (unless realfile (file-opening-error name)) (load-file realfile modname))"));
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
  fun_prompt_for_command_expression_30 = YPfab_met(FUNCODEREF(fun_prompt_for_command_expression_30),T84,LITREF(lit_53),LITREF(lit_54),sloc(111),YPsb((P)"(fun (env level prompt) (msg out %s %=%s (module-name (find-environment-module env)) level prompt) (force-out out) (def form (read in)) (if (and (isa? form <lst>) (== (head form) 'unquote)) (let ((arg-str (gets in)) (args (read-from-string (cat ( arg-str ))))) (pair (cat-sym cmd_ (2nd form)) args)) form))"));
  T86 = VARREF_OR(YevalStopYprompt_for_command_expression,YPfalse);
  T87 = fun_prompt_for_command_expression_30;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalStopYprompt_for_command_expression,T85);
  lit_60 = YPPsym((P)"print-result-expression");
  lit_61 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"level"),YPPsym((P)"label"),YPPsym((P)"result"));
  lit_62 = YPsb((P)"%s %=%s");
  T88 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_31 = YPfab_met(FUNCODEREF(fun_print_result_expression_31),T88,LITREF(lit_60),LITREF(lit_61),sloc(121),YPsb((P)"(fun (env level label result) (msg out %s %=%s (module-name (find-environment-module env)) level label) (write out result))"));
  T90 = VARREF_OR(YevalStopYprint_result_expression,YPfalse);
  T91 = fun_print_result_expression_31;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalStopYprint_result_expression,T89);
  lit_63 = YPPsym((P)"do-stack-frames");
  lit_64 = YPPlist(1,YPPsym((P)"fun"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_32 = YPfab_met(FUNCODEREF(fun_do_stack_frames_32),T92,LITREF(lit_63),LITREF(lit_64),sloc(125),YPsb((P)"(fun (fun) (%do-stack-frames fun))"));
  T94 = VARREF_OR(YevalStopYdo_stack_frames,YPfalse);
  T95 = fun_do_stack_frames_32;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalStopYdo_stack_frames,T93);
  lit_65 = YPPlist(1,YPPsym((P)"exp"));
  lit_66 = YPPlist(1,YPPsym((P)"return"));
  lit_67 = YPPsym((P)"x-1904");
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
  fun_x_1904_33 = YPfab_met(FUNCODEREF(fun_x_1904_33),T98,LITREF(lit_67),LITREF(lit_68),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'for-frames exp)))"));
  T97 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T97,YPfalse,LITREF(lit_66),YPfalse,YPsb((P)"(fun (return) (loc ((x-1904 ((msg <str>) (args ...)) (return (macro-error 'for-frames exp)))) (let ((x-1903 exp)) (let ((num #f) (f #f) (args #f) (body #f)) (if (isa? x-1903 <lst>) (let ((x-1903 (match-atom x-1903 'for-frames x-1904))) (let ((x-1903 (seq (let ((x-1903 (match-sublist x-1903 x-1904))) (let ((x-1903 (seq (set num (match-unquote x-1903 x-1904)) (tail x-1903)))) (let ((x-1903 (seq (set f (match-unquote x-1903 x-1904)) (tail x-1903)))) (let ((x-1903 (seq (set args (match-unquote x-1903 x-1904)) (tail x-1903)))) (let ((x-1903 (seq (let ((x-1903 (match-sublist x-1903 x-1904))) (match-nul-list x-1903 x-1904)) (tail x-1903)))) (match-nul-list x-1903 x-1904)))))) (tail x-1903)))) (let ((x-1903 (seq (set body x-1903) '()))) (let ((x-1903 (seq (let ((x-1903 (match-sublist x-1903 x-1904))) (match-nul-list x-1903 x-1904)) (tail x-1903)))) (match-nul-list x-1903 x-1904))))) (x-1904 Match Pattern Failure x-1903)) (quasiquote (let (((unquote num) 0)) (do-stack-frames (fun ((unquote f) _args) (def (unquote args) (rev _args)) (unquote-splicing body) (incf (unquote num))))))))))"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPfab_met(FUNCODEREF(fun_35),T96,YPfalse,LITREF(lit_65),YPfalse,YPsb((P)"(fun (exp) (mif ((for-frames ((unquote num) (unquote f) (unquote args)) (unquote-splicing body)) exp) (quasiquote (let (((unquote num) 0)) (do-stack-frames (fun ((unquote f) _args) (def (unquote args) (rev _args)) (unquote-splicing body) (incf (unquote num)))))) (macro-error 'for-frames exp)))"));
  T99 = fun_35;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T99);
  lit_78 = YPPlist(1,YPPsym((P)"exp"));
  lit_79 = YPPlist(1,YPPsym((P)"return"));
  lit_80 = YPPsym((P)"x-1908");
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
  fun_x_1908_36 = YPfab_met(FUNCODEREF(fun_x_1908_36),T102,LITREF(lit_80),LITREF(lit_81),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'for-user-frames exp)))"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T101,YPfalse,LITREF(lit_79),YPfalse,YPsb((P)"(fun (return) (loc ((x-1908 ((msg <str>) (args ...)) (return (macro-error 'for-user-frames exp)))) (let ((x-1907 exp)) (let ((num #f) (f #f) (args #f) (body #f)) (if (isa? x-1907 <lst>) (let ((x-1907 (match-atom x-1907 'for-user-frames x-1908))) (let ((x-1907 (seq (let ((x-1907 (match-sublist x-1907 x-1908))) (let ((x-1907 (seq (set num (match-unquote x-1907 x-1908)) (tail x-1907)))) (let ((x-1907 (seq (set f (match-unquote x-1907 x-1908)) (tail x-1907)))) (let ((x-1907 (seq (set args (match-unquote x-1907 x-1908)) (tail x-1907)))) (let ((x-1907 (seq (let ((x-1907 (match-sublist x-1907 x-1908))) (match-nul-list x-1907 x-1908)) (tail x-1907)))) (match-nul-list x-1907 x-1908)))))) (tail x-1907)))) (let ((x-1907 (seq (set body x-1907) '()))) (let ((x-1907 (seq (let ((x-1907 (match-sublist x-1907 x-1908))) (match-nul-list x-1907 x-1908)) (tail x-1907)))) (match-nul-list x-1907 x-1908))))) (x-1908 Match Pattern Failure x-1907)) (quasiquote (esc break (def _seen-top #f) (def _top-num 0) (for-frames (_num (unquote f) (unquote args)) (def _name (if (fun-name (unquote f)) (as <str> (fun-name (unquote f))) )) (def (unquote num) (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (unquote-splicing body)) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t)))))))))"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T100,YPfalse,LITREF(lit_78),YPfalse,YPsb((P)"(fun (exp) (mif ((for-user-frames ((unquote num) (unquote f) (unquote args)) (unquote-splicing body)) exp) (quasiquote (esc break (def _seen-top #f) (def _top-num 0) (for-frames (_num (unquote f) (unquote args)) (def _name (if (fun-name (unquote f)) (as <str> (fun-name (unquote f))) )) (def (unquote num) (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (unquote-splicing body)) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t))))) (macro-error 'for-user-frames exp)))"));
  T103 = fun_38;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T103);
  lit_101 = YPPsym((P)"msg-src-loc");
  lit_102 = YPPlist(1,YPPsym((P)"f"));
  lit_103 = YPsb((P)" %s:%d");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_msg_src_loc_39 = YPfab_met(FUNCODEREF(fun_msg_src_loc_39),T104,LITREF(lit_101),LITREF(lit_102),sloc(148),YPsb((P)"(fun (f) (when (isa? f <met>) (def sl (fun-src-loc f)) (when (isa? sl <src-loc>) (msg out  %s:%d (src-loc-file sl) (src-loc-line sl)))))"));
  T106 = VARREF_OR(YevalStopYmsg_src_loc,YPfalse);
  T107 = fun_msg_src_loc_39;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalStopYmsg_src_loc,T105);
  lit_104 = YPPsym((P)"backtrace");
  lit_105 = YPPlist(1,YPPsym((P)"break"));
  lit_106 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_107 = YPsb((P)"[%=] %= %=");
  T110 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T110,YPfalse,LITREF(lit_106),sloc(155),YPsb((P)"(fun (f _args) (def args (rev _args)) (def _name (if (fun-name f) (as <str> (fun-name f)) )) (def num (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (msg out [%=] %= %= num f args) (msg-src-loc f) (newline out)) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t)) (incf _num))"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPfab_met(FUNCODEREF(fun_41),T109,YPfalse,LITREF(lit_105),sloc(155),YPsb((P)"(fun (break) (def _seen-top #f) (def _top-num 0) (for-frames (_num f args) (def _name (if (fun-name f) (as <str> (fun-name f)) )) (def num (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (msg out [%=] %= %= num f args) (msg-src-loc f) (newline out)) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t))))"));
  T108 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_42 = YPfab_met(FUNCODEREF(fun_backtrace_42),T108,LITREF(lit_104),LITREF(lit_1),sloc(154),YPsb((P)"(fun () (for-user-frames (num f args) (msg out [%=] %= %= num f args) (msg-src-loc f) (newline out)))"));
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
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T116,YPfalse,LITREF(lit_111),sloc(159),YPsb((P)"(fun (f _args) (def args (rev _args)) (def _name (if (fun-name f) (as <str> (fun-name f)) )) (def num (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (when (== n num) (msg out [%=] %= %= num f args) (msg-src-loc f) (newline out))) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t)) (incf _num))"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T115,YPfalse,LITREF(lit_110),sloc(159),YPsb((P)"(fun (break) (def _seen-top #f) (def _top-num 0) (for-frames (_num f args) (def _name (if (fun-name f) (as <str> (fun-name f)) )) (def num (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (when (== n num) (msg out [%=] %= %= num f args) (msg-src-loc f) (newline out))) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t))))"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_45 = YPfab_met(FUNCODEREF(fun_frame_45),T114,LITREF(lit_108),LITREF(lit_109),sloc(158),YPsb((P)"(fun ((n <int>)) (for-user-frames (num f args) (when (== n num) (msg out [%=] %= %= num f args) (msg-src-loc f) (newline out))))"));
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
  fun_46 = YPfab_met(FUNCODEREF(fun_46),T123,YPfalse,LITREF(lit_117),sloc(165),YPsb((P)"(fun (f _args) (def args (rev _args)) (def _name (if (fun-name f) (as <str> (fun-name f)) )) (def num (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (when (== n num) (ret (elt args (pos (fun-names f) name))))) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t)) (incf _num))"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T122,YPfalse,LITREF(lit_116),sloc(165),YPsb((P)"(fun (break) (def _seen-top #f) (def _top-num 0) (for-frames (_num f args) (def _name (if (fun-name f) (as <str> (fun-name f)) )) (def num (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (when (== n num) (ret (elt args (pos (fun-names f) name))))) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t))))"));
  T121 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T121,YPfalse,LITREF(lit_115),sloc(164),YPsb((P)"(fun (ret) (for-user-frames (num f args) (when (== n num) (ret (elt args (pos (fun-names f) name))))) #f)"));
  T120 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_49 = YPfab_met(FUNCODEREF(fun_frame_var_49),T120,LITREF(lit_113),LITREF(lit_114),sloc(163),YPsb((P)"(fun ((n <int>) (name <sym>)) (esc ret (for-user-frames (num f args) (when (== n num) (ret (elt args (pos (fun-names f) name))))) #f))"));
  T125 = VARREF_OR(YevalStopYframe_var,YPfalse);
  T126 = fun_frame_var_49;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalStopYframe_var,T124);
  lit_118 = YPPsym((P)"bt");
  lit_119 = YPPlist(1,YPPsym((P)"break"));
  lit_120 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"_args"));
  lit_121 = YPsb((P)"[%=] %=");
  T129 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T129,YPfalse,LITREF(lit_120),sloc(172),YPsb((P)"(fun (f _args) (def args (rev _args)) (def _name (if (fun-name f) (as <str> (fun-name f)) )) (def num (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (msg out [%=] %= num f) (msg-src-loc f) (newline out)) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t)) (incf _num))"));
  T128 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T128,YPfalse,LITREF(lit_119),sloc(172),YPsb((P)"(fun (break) (def _seen-top #f) (def _top-num 0) (for-frames (_num f args) (def _name (if (fun-name f) (as <str> (fun-name f)) )) (def num (- _num _top-num)) (when _seen-top (when (prefix? _name %%bottom%%) (break #f)) (msg out [%=] %= num f) (msg-src-loc f) (newline out)) (when (prefix? _name %%top%%) (set _top-num num) (set _seen-top #t))))"));
  T127 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_52 = YPfab_met(FUNCODEREF(fun_bt_52),T127,LITREF(lit_118),LITREF(lit_1),sloc(171),YPsb((P)"(fun () (for-user-frames (num f args) (msg out [%=] %= num f) (msg-src-loc f) (newline out)))"));
  T131 = VARREF_OR(YevalStopYbt,YPfalse);
  T132 = fun_bt_52;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalStopYbt,T130);
  lit_122 = YPPsym((P)"do-restart");
  lit_123 = YPPlist(2,YPPsym((P)"restarts"),YPPsym((P)"n"));
  lit_124 = YPsb((P)"No restarts available.\n");
  lit_125 = YPsb((P)"No restart #%d.\n");
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPfab_met(FUNCODEREF(YevalStopYdo_restart),T133,LITREF(lit_122),LITREF(lit_123),sloc(175),YPsb((P)"(fun (restarts n) (unless restarts (error No restarts available.\n)) (unless (and (> n 0) (<= n (len restarts))) (error No restart #%d.\n n)) (invoke-handler-interactively (elt restarts (- n 1)) in out))"));
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
  lit_141 = YPPsym((P)"x-1913");
  lit_142 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_143 = YPPlist(1,YPPsym((P)"return"));
  lit_144 = YPPsym((P)"x-1916");
  lit_145 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-1919");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPPlist(1,YPPsym((P)"return"));
  lit_150 = YPPsym((P)"x-1922");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPPlist(1,YPPsym((P)"return"));
  lit_153 = YPPsym((P)"x-1925");
  lit_154 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_155 = YPPlist(1,YPPsym((P)"return"));
  lit_156 = YPPsym((P)"x-1928");
  lit_157 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_158 = YPPlist(1,YPPsym((P)"return"));
  lit_159 = YPPsym((P)"x-1931");
  lit_160 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_161 = YPPlist(1,YPPsym((P)"return"));
  lit_162 = YPPsym((P)"x-1934");
  lit_163 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_164 = YPPlist(1,YPPsym((P)"return"));
  lit_165 = YPPsym((P)"x-1937");
  lit_166 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-1940");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPPlist(1,YPPsym((P)"return"));
  lit_171 = YPPsym((P)"x-1943");
  lit_172 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_173 = YPPlist(1,YPPsym((P)"return"));
  lit_174 = YPPsym((P)"x-1946");
  lit_175 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_176 = YPPlist(1,YPPsym((P)"return"));
  lit_177 = YPPsym((P)"x-1949");
  lit_178 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_179 = YPPlist(1,YPPsym((P)"return"));
  lit_180 = YPPsym((P)"x-1952");
  lit_181 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_182 = YPPlist(1,YPPsym((P)"return"));
  lit_183 = YPPsym((P)"x-1955");
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
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T177,YPfalse,LITREF(lit_1),YPfalse,YPsb((P)"(fun () #t)"));
  T176 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_55 = YPfab_met(FUNCODEREF(fun_55),T176,YPfalse,LITREF(lit_1),YPfalse,YPsb((P)"(fun () #t)"));
  T175 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_56 = YPfab_met(FUNCODEREF(fun_56),T175,YPfalse,LITREF(lit_133),sloc(201),YPsb((P)"(fun (c r) (post <RECURSIVE ERROR ABORTING...>) (break #f))"));
  T174 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T174,YPfalse,LITREF(lit_1),sloc(204),YPsb((P)"(fun () (msg out ERROR: %s (describe-condition c)))"));
  T173 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPfab_met(FUNCODEREF(fun_58),T173,YPfalse,LITREF(lit_132),sloc(199),YPsb((P)"(fun (break) (try <error> (fun (c r) (post <RECURSIVE ERROR ABORTING...>) (break #f)) (msg out ERROR: %s (describe-condition c))))"));
  T172 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_59 = YPfab_met(FUNCODEREF(fun_59),T172,YPfalse,LITREF(lit_130),sloc(194),YPsb((P)"(fun (c r) (case-by c isa? ((<keyboard-interrupt>) (msg out BREAK)) (#t (esc break (try <error> (fun (c r) (post <RECURSIVE ERROR ABORTING...>) (break #f)) (msg out ERROR: %s (describe-condition c)))))) (%%top%%top-in (+ level 1) top quit #t ct-env) (continue #f))"));
  T171 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_60 = YPfab_met(FUNCODEREF(fun_60),T171,YPfalse,LITREF(lit_1),YPfalse,YPsb((P)"(fun () #t)"));
  T170 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_61 = YPfab_met(FUNCODEREF(fun_61),T170,YPfalse,LITREF(lit_137),sloc(210),YPsb((P)"(fun (c r) (continue #f))"));
  T169 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1955_62 = YPfab_met(FUNCODEREF(fun_x_1955_62),T169,LITREF(lit_183),LITREF(lit_184),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1953 (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T168,YPfalse,LITREF(lit_182),YPfalse,YPsb((P)"(fun (return) (loc ((x-1955 ((msg <str>) (args ...)) (return (match x-1953 (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1954 x-1953)) (let ((n #f) (name #f)) (if (isa? x-1954 <lst>) (let ((x-1954 (match-atom x-1954 'cmd_frame-var x-1955))) (let ((x-1954 (seq (set n (match-unquote x-1954 x-1955)) (tail x-1954)))) (let ((x-1954 (seq (set name (match-unquote x-1954 x-1955)) (tail x-1954)))) (let ((x-1954 (seq (let ((x-1954 (match-sublist x-1954 x-1955))) (match-nul-list x-1954 x-1955)) (tail x-1954)))) (match-nul-list x-1954 x-1955))))) (x-1955 Match Pattern Failure x-1954)) (seq (print-result-expression ct-env level =>  (frame-var n name)))))))"));
  T167 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1952_64 = YPfab_met(FUNCODEREF(fun_x_1952_64),T167,LITREF(lit_180),LITREF(lit_181),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1950 ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T166,YPfalse,LITREF(lit_179),YPfalse,YPsb((P)"(fun (return) (loc ((x-1952 ((msg <str>) (args ...)) (return (match x-1950 ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1951 x-1950)) (let ((n #f)) (if (isa? x-1951 <lst>) (let ((x-1951 (match-atom x-1951 'cmd_frame x-1952))) (let ((x-1951 (seq (set n (match-unquote x-1951 x-1952)) (tail x-1951)))) (let ((x-1951 (seq (let ((x-1951 (match-sublist x-1951 x-1952))) (match-nul-list x-1951 x-1952)) (tail x-1951)))) (match-nul-list x-1951 x-1952)))) (x-1952 Match Pattern Failure x-1951)) (seq (frame n))))))"));
  T165 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1949_66 = YPfab_met(FUNCODEREF(fun_x_1949_66),T165,LITREF(lit_177),LITREF(lit_178),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1947 ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPfab_met(FUNCODEREF(fun_67),T164,YPfalse,LITREF(lit_176),YPfalse,YPsb((P)"(fun (return) (loc ((x-1949 ((msg <str>) (args ...)) (return (match x-1947 ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1948 x-1947)) (let () (if (isa? x-1948 <lst>) (let ((x-1948 (match-atom x-1948 'cmd_backtrace x-1949))) (let ((x-1948 (seq (let ((x-1948 (match-sublist x-1948 x-1949))) (match-nul-list x-1948 x-1949)) (tail x-1948)))) (match-nul-list x-1948 x-1949))) (x-1949 Match Pattern Failure x-1948)) (seq (backtrace))))))"));
  T163 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1946_68 = YPfab_met(FUNCODEREF(fun_x_1946_68),T163,LITREF(lit_174),LITREF(lit_175),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1944 ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T162 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T162,YPfalse,LITREF(lit_173),YPfalse,YPsb((P)"(fun (return) (loc ((x-1946 ((msg <str>) (args ...)) (return (match x-1944 ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1945 x-1944)) (let () (if (isa? x-1945 <lst>) (let ((x-1945 (match-atom x-1945 'cmd_bt x-1946))) (let ((x-1945 (seq (let ((x-1945 (match-sublist x-1945 x-1946))) (match-nul-list x-1945 x-1946)) (tail x-1945)))) (match-nul-list x-1945 x-1946))) (x-1946 Match Pattern Failure x-1945)) (seq (bt))))))"));
  T161 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1943_70 = YPfab_met(FUNCODEREF(fun_x_1943_70),T161,LITREF(lit_171),LITREF(lit_172),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1941 ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T160 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPfab_met(FUNCODEREF(fun_71),T160,YPfalse,LITREF(lit_170),YPfalse,YPsb((P)"(fun (return) (loc ((x-1943 ((msg <str>) (args ...)) (return (match x-1941 ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1942 x-1941)) (let () (if (isa? x-1942 <lst>) (let ((x-1942 (match-atom x-1942 'cmd_auto-eval x-1943))) (let ((x-1942 (seq (let ((x-1942 (match-sublist x-1942 x-1943))) (match-nul-list x-1942 x-1943)) (tail x-1942)))) (match-nul-list x-1942 x-1943))) (x-1943 Match Pattern Failure x-1942)) (seq (when $g2c-eval? (set run auto-run)))))))"));
  T159 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1940_72 = YPfab_met(FUNCODEREF(fun_x_1940_72),T159,LITREF(lit_168),LITREF(lit_169),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1938 ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T158,YPfalse,LITREF(lit_167),YPfalse,YPsb((P)"(fun (return) (loc ((x-1940 ((msg <str>) (args ...)) (return (match x-1938 ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1939 x-1938)) (let () (if (isa? x-1939 <lst>) (let ((x-1939 (match-atom x-1939 'cmd_vm-eval x-1940))) (let ((x-1939 (seq (let ((x-1939 (match-sublist x-1939 x-1940))) (match-nul-list x-1939 x-1940)) (tail x-1939)))) (match-nul-list x-1939 x-1940))) (x-1940 Match Pattern Failure x-1939)) (seq (set run %%bottom%%vm-run))))))"));
  T157 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1937_74 = YPfab_met(FUNCODEREF(fun_x_1937_74),T157,LITREF(lit_165),LITREF(lit_166),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1935 ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T156 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T156,YPfalse,LITREF(lit_164),YPfalse,YPsb((P)"(fun (return) (loc ((x-1937 ((msg <str>) (args ...)) (return (match x-1935 ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1936 x-1935)) (let () (if (isa? x-1936 <lst>) (let ((x-1936 (match-atom x-1936 'cmd_ast-eval x-1937))) (let ((x-1936 (seq (let ((x-1936 (match-sublist x-1936 x-1937))) (match-nul-list x-1936 x-1937)) (tail x-1936)))) (match-nul-list x-1936 x-1937))) (x-1937 Match Pattern Failure x-1936)) (seq (set run %%bottom%%ast-run))))))"));
  T155 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1934_76 = YPfab_met(FUNCODEREF(fun_x_1934_76),T155,LITREF(lit_162),LITREF(lit_163),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1932 ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T154 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPfab_met(FUNCODEREF(fun_77),T154,YPfalse,LITREF(lit_161),YPfalse,YPsb((P)"(fun (return) (loc ((x-1934 ((msg <str>) (args ...)) (return (match x-1932 ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1933 x-1932)) (let () (if (isa? x-1933 <lst>) (let ((x-1933 (match-atom x-1933 'cmd_g2c-eval x-1934))) (let ((x-1933 (seq (let ((x-1933 (match-sublist x-1933 x-1934))) (match-nul-list x-1933 x-1934)) (tail x-1933)))) (match-nul-list x-1933 x-1934))) (x-1934 Match Pattern Failure x-1933)) (seq (when $g2c-eval? (set run %%bottom%%g2c-run)))))))"));
  T153 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1931_78 = YPfab_met(FUNCODEREF(fun_x_1931_78),T153,LITREF(lit_159),LITREF(lit_160),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1929 ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T152 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T152,YPfalse,LITREF(lit_158),YPfalse,YPsb((P)"(fun (return) (loc ((x-1931 ((msg <str>) (args ...)) (return (match x-1929 ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1930 x-1929)) (let ((m #f)) (if (isa? x-1930 <lst>) (let ((x-1930 (match-atom x-1930 'cmd_in x-1931))) (let ((x-1930 (seq (set m (match-unquote x-1930 x-1931)) (tail x-1930)))) (let ((x-1930 (seq (let ((x-1930 (match-sublist x-1930 x-1931))) (match-nul-list x-1930 x-1931)) (tail x-1930)))) (match-nul-list x-1930 x-1931)))) (x-1931 Match Pattern Failure x-1930)) (seq (def new-env (runtime-environment m)) (set ct-env new-env))))))"));
  T151 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1928_80 = YPfab_met(FUNCODEREF(fun_x_1928_80),T151,LITREF(lit_156),LITREF(lit_157),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1926 ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T150 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPfab_met(FUNCODEREF(fun_81),T150,YPfalse,LITREF(lit_155),YPfalse,YPsb((P)"(fun (return) (loc ((x-1928 ((msg <str>) (args ...)) (return (match x-1926 ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1927 x-1926)) (let ((n #f)) (if (isa? x-1927 <lst>) (let ((x-1927 (match-atom x-1927 'cmd_restart x-1928))) (let ((x-1927 (seq (set n (match-unquote x-1927 x-1928)) (tail x-1927)))) (let ((x-1927 (seq (let ((x-1927 (match-sublist x-1927 x-1928))) (match-nul-list x-1927 x-1928)) (tail x-1927)))) (match-nul-list x-1927 x-1928)))) (x-1928 Match Pattern Failure x-1927)) (seq (do-restart restarts n))))))"));
  T149 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1925_82 = YPfab_met(FUNCODEREF(fun_x_1925_82),T149,LITREF(lit_153),LITREF(lit_154),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1923 ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T148 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPfab_met(FUNCODEREF(fun_83),T148,YPfalse,LITREF(lit_152),YPfalse,YPsb((P)"(fun (return) (loc ((x-1925 ((msg <str>) (args ...)) (return (match x-1923 ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1924 x-1923)) (let () (if (isa? x-1924 <lst>) (let ((x-1924 (match-atom x-1924 'cmd_restarts x-1925))) (let ((x-1924 (seq (let ((x-1924 (match-sublist x-1924 x-1925))) (match-nul-list x-1924 x-1925)) (tail x-1924)))) (match-nul-list x-1924 x-1925))) (x-1925 Match Pattern Failure x-1924)) (seq (list-handlers <restart> out))))))"));
  T147 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1922_84 = YPfab_met(FUNCODEREF(fun_x_1922_84),T147,LITREF(lit_150),LITREF(lit_151),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1920 ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T146 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPfab_met(FUNCODEREF(fun_85),T146,YPfalse,LITREF(lit_149),YPfalse,YPsb((P)"(fun (return) (loc ((x-1922 ((msg <str>) (args ...)) (return (match x-1920 ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1921 x-1920)) (let () (if (isa? x-1921 <lst>) (let ((x-1921 (match-atom x-1921 'cmd_handlers x-1922))) (let ((x-1921 (seq (let ((x-1921 (match-sublist x-1921 x-1922))) (match-nul-list x-1921 x-1922)) (tail x-1921)))) (match-nul-list x-1921 x-1922))) (x-1922 Match Pattern Failure x-1921)) (seq (list-handlers <condition> out))))))"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1919_86 = YPfab_met(FUNCODEREF(fun_x_1919_86),T145,LITREF(lit_147),LITREF(lit_148),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1917 ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T144,YPfalse,LITREF(lit_146),YPfalse,YPsb((P)"(fun (return) (loc ((x-1919 ((msg <str>) (args ...)) (return (match x-1917 ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1918 x-1917)) (let () (if (isa? x-1918 <lst>) (let ((x-1918 (match-atom x-1918 'cmd_top x-1919))) (let ((x-1918 (seq (let ((x-1918 (match-sublist x-1918 x-1919))) (match-nul-list x-1918 x-1919)) (tail x-1918)))) (match-nul-list x-1918 x-1919))) (x-1919 Match Pattern Failure x-1918)) (seq (top #f))))))"));
  T143 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1916_88 = YPfab_met(FUNCODEREF(fun_x_1916_88),T143,LITREF(lit_144),LITREF(lit_145),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1914 ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T142 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T142,YPfalse,LITREF(lit_143),YPfalse,YPsb((P)"(fun (return) (loc ((x-1916 ((msg <str>) (args ...)) (return (match x-1914 ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1915 x-1914)) (let () (if (isa? x-1915 <lst>) (let ((x-1915 (match-atom x-1915 'cmd_up x-1916))) (let ((x-1915 (seq (let ((x-1915 (match-sublist x-1915 x-1916))) (match-nul-list x-1915 x-1916)) (tail x-1915)))) (match-nul-list x-1915 x-1916))) (x-1916 Match Pattern Failure x-1915)) (seq (blow #f))))))"));
  T141 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1913_90 = YPfab_met(FUNCODEREF(fun_x_1913_90),T141,LITREF(lit_141),LITREF(lit_142),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1911 ((cmd_up) (blow #f)) ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T140 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPfab_met(FUNCODEREF(fun_91),T140,YPfalse,LITREF(lit_140),YPfalse,YPsb((P)"(fun (return) (loc ((x-1913 ((msg <str>) (args ...)) (return (match x-1911 ((cmd_up) (blow #f)) ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))) (let ((x-1912 x-1911)) (let () (if (isa? x-1912 <lst>) (let ((x-1912 (match-atom x-1912 'cmd_quit x-1913))) (let ((x-1912 (seq (let ((x-1912 (match-sublist x-1912 x-1913))) (match-nul-list x-1912 x-1913)) (tail x-1912)))) (match-nul-list x-1912 x-1913))) (x-1913 Match Pattern Failure x-1912)) (seq (quit #f))))))"));
  T139 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_92 = YPfab_met(FUNCODEREF(fun_92),T139,YPfalse,LITREF(lit_1),sloc(211),YPsb((P)"(fun () (newline out) (when show-restarts? (msg out Type \",restart N\" to restart execution:\n) (set restarts (list-handlers <restart> out)) (set show-restarts? #f)) (def form (prompt-for-command-expression ct-env level <= )) (if (eof-object? form) (quit #f) (match form ((cmd_quit) (quit #f)) ((cmd_up) (blow #f)) ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))"));
  T138 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_93 = YPfab_met(FUNCODEREF(fun_93),T138,YPfalse,LITREF(lit_1),sloc(256),YPsb((P)"(fun () (try ((type <restart>) (description Return to interpreter level %d level)) (fun (c r) (continue #f)) (newline out) (when show-restarts? (msg out Type \",restart N\" to restart execution:\n) (set restarts (list-handlers <restart> out)) (set show-restarts? #f)) (def form (prompt-for-command-expression ct-env level <= )) (if (eof-object? form) (quit #f) (match form ((cmd_quit) (quit #f)) ((cmd_up) (blow #f)) ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res))))))"));
  T137 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPfab_met(FUNCODEREF(fun_94),T137,YPfalse,LITREF(lit_129),sloc(192),YPsb((P)"(fun (continue) (try <condition> (fun (c r) (case-by c isa? ((<keyboard-interrupt>) (msg out BREAK)) (#t (esc break (try <error> (fun (c r) (post <RECURSIVE ERROR ABORTING...>) (break #f)) (msg out ERROR: %s (describe-condition c)))))) (%%top%%top-in (+ level 1) top quit #t ct-env) (continue #f)) (try ((type <restart>) (description Return to interpreter level %d level)) (fun (c r) (continue #f)) (newline out) (when show-restarts? (msg out Type \",restart N\" to restart execution:\n) (set restarts (list-handlers <restart> out)) (set show-restarts? #f)) (def form (prompt-for-command-expression ct-env level <= )) (if (eof-object? form) (quit #f) (match form ((cmd_quit) (quit #f)) ((cmd_up) (blow #f)) ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res)))))))"));
  T136 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPfab_met(FUNCODEREF(fun_95),T136,YPfalse,LITREF(lit_128),sloc(190),YPsb((P)"(fun (blow) (rep loop () (esc continue (try <condition> (fun (c r) (case-by c isa? ((<keyboard-interrupt>) (msg out BREAK)) (#t (esc break (try <error> (fun (c r) (post <RECURSIVE ERROR ABORTING...>) (break #f)) (msg out ERROR: %s (describe-condition c)))))) (%%top%%top-in (+ level 1) top quit #t ct-env) (continue #f)) (try ((type <restart>) (description Return to interpreter level %d level)) (fun (c r) (continue #f)) (newline out) (when show-restarts? (msg out Type \",restart N\" to restart execution:\n) (set restarts (list-handlers <restart> out)) (set show-restarts? #f)) (def form (prompt-for-command-expression ct-env level <= )) (if (eof-object? form) (quit #f) (match form ((cmd_quit) (quit #f)) ((cmd_up) (blow #f)) ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res))))))) (loop)))"));
  T135 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_96 = YPfab_met(FUNCODEREF(fun_PPtopPPtop_in_96),T135,LITREF(lit_126),LITREF(lit_127),sloc(188),YPsb((P)"(fun (level top quit show-restarts? ct-env) (def restarts #f) (esc blow (rep loop () (esc continue (try <condition> (fun (c r) (case-by c isa? ((<keyboard-interrupt>) (msg out BREAK)) (#t (esc break (try <error> (fun (c r) (post <RECURSIVE ERROR ABORTING...>) (break #f)) (msg out ERROR: %s (describe-condition c)))))) (%%top%%top-in (+ level 1) top quit #t ct-env) (continue #f)) (try ((type <restart>) (description Return to interpreter level %d level)) (fun (c r) (continue #f)) (newline out) (when show-restarts? (msg out Type \",restart N\" to restart execution:\n) (set restarts (list-handlers <restart> out)) (set show-restarts? #f)) (def form (prompt-for-command-expression ct-env level <= )) (if (eof-object? form) (quit #f) (match form ((cmd_quit) (quit #f)) ((cmd_up) (blow #f)) ((cmd_top) (top #f)) ((cmd_handlers) (list-handlers <condition> out)) ((cmd_restarts) (list-handlers <restart> out)) ((cmd_restart (unquote n)) (do-restart restarts n)) ((cmd_in (unquote m)) (def new-env (runtime-environment m)) (set ct-env new-env)) ((cmd_g2c-eval) (when $g2c-eval? (set run %%bottom%%g2c-run))) ((cmd_ast-eval) (set run %%bottom%%ast-run)) ((cmd_vm-eval) (set run %%bottom%%vm-run)) ((cmd_auto-eval) (when $g2c-eval? (set run auto-run))) ((cmd_bt) (bt)) ((cmd_backtrace) (backtrace)) ((cmd_frame (unquote n)) (frame n)) ((cmd_frame-var (unquote n) (unquote name)) (print-result-expression ct-env level =>  (frame-var n name))) (#t (def res (auto-eval form ct-env)) (print-result-expression ct-env level =>  res) (rotf $$$ $$ $ res))))))) (loop))))"));
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
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T186,YPfalse,LITREF(lit_1),YPfalse,YPsb((P)"(fun () #t)"));
  T185 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_98 = YPfab_met(FUNCODEREF(fun_98),T185,YPfalse,LITREF(lit_206),sloc(263),YPsb((P)"(fun (c r) (quit #f))"));
  T184 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPfab_met(FUNCODEREF(fun_99),T184,YPfalse,LITREF(lit_207),sloc(265),YPsb((P)"(fun (top) (%%top%%top-in 0 top quit #f (runtime-environment modname)))"));
  T183 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T183,YPfalse,LITREF(lit_1),sloc(267),YPsb((P)"(fun () (rep loop () (esc top (%%top%%top-in 0 top quit #f (runtime-environment modname))) (loop)))"));
  T182 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPfab_met(FUNCODEREF(fun_101),T182,YPfalse,LITREF(lit_204),sloc(260),YPsb((P)"(fun (quit) (try ((type <restart>) (description Exit the top-level interpreter)) (fun (c r) (quit #f)) (rep loop () (esc top (%%top%%top-in 0 top quit #f (runtime-environment modname))) (loop))))"));
  T181 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_102 = YPfab_met(FUNCODEREF(fun_top_102),T181,LITREF(lit_202),LITREF(lit_203),sloc(259),YPsb((P)"(fun ((modname <sym>)) (esc quit (try ((type <restart>) (description Exit the top-level interpreter)) (fun (c r) (quit #f)) (rep loop () (esc top (%%top%%top-in 0 top quit #f (runtime-environment modname))) (loop)))))"));
  T188 = VARREF_OR(YevalStopYtop,YPfalse);
  T189 = fun_top_102;
  T187 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T188,T189);
  VARSET(YevalStopYtop,T187);
  lit_208 = YPPsym((P)"save-image");
  lit_209 = YPPlist(1,YPPsym((P)"image-name"));
  lit_210 = YPPsym((P)"goo/user");
  T191 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_103 = YPfab_met(FUNCODEREF(fun_103),T191,YPfalse,LITREF(lit_1),sloc(270),YPsb((P)"(fun () (top 'goo/user))"));
  T190 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPfab_met(FUNCODEREF(YevalStopYsave_image),T190,LITREF(lit_208),LITREF(lit_209),sloc(269),YPsb((P)"(fun ((image-name <str>)) (unexec image-name (fun () (top 'goo/user))))"));
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
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSloc;
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
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sexpr-def-value", &module_info_evalSsyntax, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"$sexpr-prop!-tag", &module_info_evalSsyntax, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"sexpr-method-signature", &module_info_evalSsyntax, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"sexpr-operands", &module_info_evalSsyntax, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"sexpr-method-body", &module_info_evalSsyntax, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"sexpr-prop-init?", &module_info_evalSsyntax, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"sexpr-function-signature", &module_info_evalSsyntax, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"$sexpr-method-tag", &module_info_evalSsyntax, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"sexpr-assignment-value", &module_info_evalSsyntax, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"$sexpr-set-tag", &module_info_evalSsyntax, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"sexpr-block-body", &module_info_evalSsyntax, NULL},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"sexpr-fab-setter", &module_info_evalSsyntax, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%binding-value-of", &module_info_evalSast_eval, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sexpr-make-method", &module_info_evalSsyntax, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"$sexpr-def-tag", &module_info_evalSsyntax, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"sexpr-prop-name", &module_info_evalSsyntax, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, NULL},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"sexpr-operator", &module_info_evalSsyntax, NULL},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"sexpr-if-else", &module_info_evalSsyntax, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"$sexpr-define-constant-tag", &module_info_evalSsyntax, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"sexpr-def?", &module_info_evalSsyntax, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"$sexpr-let-tag", &module_info_evalSsyntax, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%binding-value-or", &module_info_evalSast_eval, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"sexpr-block-name", &module_info_evalSsyntax, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"sexpr-signature-value", &module_info_evalSsyntax, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sexpr-fab-getter", &module_info_evalSsyntax, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"sexpr-definition-value", &module_info_evalSsyntax, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"sexpr-function-body", &module_info_evalSsyntax, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"$sexpr-if-tag", &module_info_evalSsyntax, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"sexpr-variable-type", &module_info_evalSsyntax, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"sexpr-if-then", &module_info_evalSsyntax, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"sexpr-make-application", &module_info_evalSsyntax, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"binding-value-or", &module_info_evalSast_eval, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"sexpr-prop-owner", &module_info_evalSsyntax, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"sexpr-make-begin", &module_info_evalSsyntax, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"$sexpr-define-tag", &module_info_evalSsyntax, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"sexpr-isa-parent", &module_info_evalSsyntax, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"sexpr-unquote?", &module_info_evalSsyntax, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"sexpr-let->combination", &module_info_evalSsyntax, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"sexpr-prop-type", &module_info_evalSsyntax, NULL},
  {"sexpr-variable-name", &module_info_evalSsyntax, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sexpr-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-prop-init", &module_info_evalSsyntax, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"sexpr-if-test", &module_info_evalSsyntax, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"sexpr-variable?", &module_info_evalSsyntax, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"sexpr-def-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, NULL},
  {"sexpr-define-class?", &module_info_evalSsyntax, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%binding-value-or-of", &module_info_evalSast_eval, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$$$", CVAR, &YevalStopYDDD},
  {"save-image", CVAR, &YevalStopYsave_image},
  {"top", CVAR, &YevalStopYtop},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"bt", CVAR, &YevalStopYbt},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"load-file", CVAR, &YevalStopYload_file},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"read-file", CVAR, &YevalStopYread_file},
  {"load", CVAR, &YevalStopYload},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"parse", CVAR, &YevalStopYparse},
  {"for-frames", PVAR, NULL},
  {"frame", CVAR, &YevalStopYframe},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"---main-0---", PVAR, NULL},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"$", CVAR, &YevalStopYD},
  {"$$", CVAR, &YevalStopYDD},
  {"for-user-frames", PVAR, NULL},
  {"run", DVAR, &YevalStopYrun},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"%%bottom%%vm-run", CVAR, &YevalStopYPPbottomPPvm_run},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"vm-evaluate", CVAR, &YevalStopYvm_evaluate},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"msg-src-loc", CVAR, &YevalStopYmsg_src_loc},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"esctst", CVAR, &YevalStopYesctst},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"top", NULL},
  {"frame-var", NULL},
  {"read-file", NULL},
  {"load", NULL},
  {"eval", NULL},
  {"$$$", NULL},
  {"save-image", NULL},
  {"bt", NULL},
  {"esctst", NULL},
  {"load-file", NULL},
  {"parse-in", NULL},
  {"$", NULL},
  {"$$", NULL},
  {"*dynamic-compilation?*", NULL},
  {"backtrace", NULL},
  {"auto-eval", NULL},
  {"do-stack-frames", NULL},
  {"g2c-eval", NULL},
  {"vm-evaluate", NULL},
  {"frame", NULL},
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
