/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/typist");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/typist */

EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalStypistYLknow_callG,"eval/typist","<know-call>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DEF(YevalStypistYLfold_callG,"eval/typist","<fold-call>");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
DEF(YevalStypistYdynamic_compute_program,"eval/typist","dynamic-compute-program");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalStypistYact_val,"eval/typist","act-val");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
DEF(YevalStypistYLfoldG,"eval/typist","<fold>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YevalStypistYknown_callQ,"eval/typist","known-call?");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
DEF(YevalStypistYdo_type_infer,"eval/typist","do-type-infer");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
DEF(YevalStypistYoptimize_method,"eval/typist","optimize-method");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
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
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
DEF(YevalStypistYtype_union,"eval/typist","type-union");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalStypistYtype_value,"eval/typist","type-value");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YevalStypistYLdispatchG,"eval/typist","<dispatch>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
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
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yprops_of,"goo/boot","props-of");
DEF(YevalStypistYtypeAopt_exp,"eval/typist","type+opt-exp");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
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
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
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
DEF(YevalStypistYarity_checkQ,"eval/typist","arity-check?");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYas,"goo/types","as");
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
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalStypistYLfold_ifG,"eval/typist","<fold-if>");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalStypistYcp,"eval/typist","cp");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalStypistYLactG,"eval/typist","<act>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalStypistYdync,"eval/typist","dync");
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
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
DEF(YevalStypistYtype_infer_check,"eval/typist","type-infer-check");
DEF(YevalStypistYdo_surgeryX,"eval/typist","do-surgery!");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
DEF(YevalStypistYact_sorted,"eval/typist","act-sorted");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
DEF(YevalStypistYtype_infer_all,"eval/typist","type-infer-all");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalStypistYtype_infer_binding,"eval/typist","type-infer-binding");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YevalStypistYact_test,"eval/typist","act-test");
EXT(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalStypistYtype_exp,"eval/typist","type-exp");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
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
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
DEF(YevalStypistYtype_infer,"eval/typist","type-infer");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
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
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YsubtypeQ,"goo/boot","subtype?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
DEF(YevalStypistYsurgeryX,"eval/typist","surgery!");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
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
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
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
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
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
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
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
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YOnew,"goo/boot","@new");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
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
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_7);
DEFLIT(lit_66);
DEFLIT(lit_38);
DEFLIT(lit_37);
DEFLIT(lit_28);
DEFLIT(lit_68);
DEFLIT(lit_65);
DEFLIT(lit_17);
DEFLIT(lit_30);
DEFLIT(lit_63);
DEFLIT(lit_94);
DEFLIT(lit_40);
DEFLIT(lit_86);
DEFLIT(lit_70);
DEFLIT(lit_56);
DEFLIT(lit_72);
DEFLIT(lit_10);
DEFLIT(lit_81);
DEFLIT(lit_49);
DEFLIT(lit_43);
DEFLIT(lit_92);
DEFLIT(lit_74);
DEFLIT(lit_64);
DEFLIT(lit_31);
DEFLIT(lit_44);
DEFLIT(lit_19);
DEFLIT(lit_5);
DEFLIT(lit_51);
DEFLIT(lit_55);
DEFLIT(lit_11);
DEFLIT(lit_62);
DEFLIT(lit_24);
DEFLIT(lit_25);
DEFLIT(lit_15);
DEFLIT(lit_98);
DEFLIT(lit_32);
DEFLIT(lit_3);
DEFLIT(lit_0);
DEFLIT(lit_76);
DEFLIT(lit_87);
DEFLIT(lit_36);
DEFLIT(lit_90);
DEFLIT(lit_41);
DEFLIT(lit_29);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_75);
DEFLIT(lit_50);
DEFLIT(lit_22);
DEFLIT(lit_46);
DEFLIT(lit_42);
DEFLIT(lit_54);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_88);
DEFLIT(lit_59);
DEFLIT(lit_8);
DEFLIT(lit_58);
DEFLIT(lit_97);
DEFLIT(lit_45);
DEFLIT(lit_85);
DEFLIT(lit_82);
DEFLIT(lit_47);
DEFLIT(lit_60);
DEFLIT(lit_78);
DEFLIT(lit_67);
DEFLIT(lit_13);
DEFLIT(lit_91);
DEFLIT(lit_12);
DEFLIT(lit_79);
DEFLIT(lit_4);
DEFLIT(lit_9);
DEFLIT(lit_18);
DEFLIT(lit_80);
DEFLIT(lit_26);
DEFLIT(lit_83);
DEFLIT(lit_48);
DEFLIT(lit_84);
DEFLIT(lit_73);
DEFLIT(lit_96);
DEFLIT(lit_61);
DEFLIT(lit_52);
DEFLIT(lit_53);
DEFLIT(lit_33);
DEFLIT(lit_39);
DEFLIT(lit_93);
DEFLIT(lit_23);
DEFLIT(lit_95);
DEFLIT(lit_27);
DEFLIT(lit_69);
DEFLIT(lit_35);
DEFLIT(lit_71);
DEFLIT(lit_21);
DEFLIT(lit_14);
DEFLIT(lit_89);
DEFLIT(lit_6);
DEFLIT(lit_16);
DEFLIT(lit_77);
DEFLIT(lit_57);

/* FUNCTIONS: */

LOCFOR(fun_type_union_0);
LOCFOR(fun_act_sorted_1);
LOCFOR(fun_act_test_2);
LOCFOR(fun_act_val_3);
LOCFOR(fun_type_infer_check_4);
LOCFOR(fun_type_infer_all_5);
LOCFOR(fun_type_infer_6);
LOCFOR(fun_do_type_infer_7);
LOCFOR(fun_8);
LOCFOR(fun_do_type_infer_9);
LOCFOR(fun_do_type_infer_10);
LOCFOR(fun_do_type_infer_11);
LOCFOR(fun_type_infer_binding_12);
LOCFOR(fun_type_infer_binding_13);
LOCFOR(fun_type_value_14);
LOCFOR(fun_type_value_15);
LOCFOR(fun_type_infer_binding_16);
LOCFOR(fun_do_type_infer_17);
LOCFOR(fun_do_type_infer_18);
LOCFOR(fun_do_type_infer_19);
LOCFOR(fun_do_type_infer_20);
LOCFOR(fun_do_type_infer_21);
LOCFOR(fun_do_type_infer_22);
LOCFOR(fun_23);
LOCFOR(fun_do_type_infer_24);
LOCFOR(fun_do_type_infer_25);
LOCFOR(fun_subtypeQ_26);
LOCFOR(fun_27);
LOCFOR(fun_do_type_infer_28);
LOCFOR(fun_29);
LOCFOR(fun_recurse_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_do_type_infer_33);
LOCFOR(fun_34);
LOCFOR(fun_do_type_infer_35);
LOCFOR(fun_36);
LOCFOR(fun_do_type_infer_37);
LOCFOR(fun_arity_checkQ_38);
LOCFOR(fun_known_callQ_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_do_type_infer_42);
LOCFOR(fun_do_type_infer_43);
LOCFOR(fun_do_type_infer_44);
LOCFOR(fun_do_type_infer_45);
LOCFOR(fun_surgeryX_46);
LOCFOR(fun_do_surgeryX_47);
LOCFOR(fun_do_surgeryX_48);
LOCFOR(fun_do_surgeryX_49);
LOCFOR(fun_do_surgeryX_50);
LOCFOR(fun_do_surgeryX_51);
LOCFOR(fun_surgeryX_52);
LOCFOR(fun_surgeryX_53);
FUNFOR(YevalStypistYtype_exp);
FUNFOR(YevalStypistYtypeAopt_exp);
LOCFOR(fun_dynamic_compute_program_56);
LOCFOR(fun_optimize_method_57);
extern P YevalStypistY___main_0___ ();
extern P YevalStypistY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_type_union_0) {
  P x_,y_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YsubtypeQ),x_,y_);
  if (T1 != YPfalse) {
    T0 = y_;
  } else {
    T3 = CALL2(1,VARREF(YsubtypeQ),y_,x_);
    if (T3 != YPfalse) {
      T2 = x_;
    } else {
      T5 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLunionG));
      if (T5 != YPfalse) {
        T8 = CALL2(1,VARREF(YisaQ),y_,VARREF(YLunionG));
        if (T8 != YPfalse) {
          T9 = CALL2(1,VARREF(YgooSmacrosYcat),x_,y_);
          T7 = T9;
        } else {
          T10 = CALL2(1,VARREF(YgooSmacrosYpair),y_,x_);
          T7 = T10;
        }
        T6 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T7);
        T4 = T6;
      } else {
        if (YPtrue != YPfalse) {
          T14 = CALL2(1,VARREF(YisaQ),y_,VARREF(YLunionG));
          if (T14 != YPfalse) {
            T15 = CALL2(1,VARREF(YgooSmacrosYpair),x_,y_);
            T13 = T15;
          } else {
            T16 = CALL2(1,VARREF(Ylst),x_,y_);
            T13 = T16;
          }
          T12 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T13);
          T11 = T12;
        } else {
          T11 = YPfalse;
        }
        T4 = T11;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_act_sorted_1) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYact_sorted));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_act_test_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYact_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_act_val_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYact_val));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_check_4) {
  P a_,t_,acts_;
  P typeF5822;
  P inferred_typeF5821;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(a_, 0);
  ARG(t_, 1);
  ARG(acts_, 2);
  T4 = CALL2(1,VARREF(YevalStypistYtype_infer),a_,acts_);
  inferred_typeF5821 = T4;
  T3 = CALL2(1,VARREF(YevalStypistYtype_infer),t_,acts_);
  T2 = CALL1(1,VARREF(YevalStypistYtype_value),T3);
  typeF5822 = T2;
  CALL3(1,VARREF(YgooSioSwriteYpost),LITREF(lit_16),inferred_typeF5821,typeF5822);
  T1 = CALL2(1,VARREF(YsubtypeQ),inferred_typeF5821,typeF5822);
  if (T1 != YPfalse) {
    T0 = inferred_typeF5821;
  } else {
    T0 = typeF5822;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_all_5) {
  P x_;
  P actsF5823;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  actsF5823 = T0;
  CALL2(1,VARREF(YevalStypistYtype_infer),x_,actsF5823);
UNLINK_STACK();
  QRET(actsF5823);
}

LOCCODEDEF(fun_type_infer_6) {
  P x_,acts_;
  P resF5825;
  P UF5824;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_21),x_);
  T3 = CALL1(1,VARREF(YevalSastYprogram_type),x_);
  UF5824 = T3;
  T2 = CALL2(1,VARREF(YevalStypistYdo_type_infer),x_,acts_);
  T1 = CALL2(1,VARREF(YevalStypistYtype_union),UF5824,T2);
  T0 = CALL2(1,VARREF(YevalSastYprogram_type_setter),T1,x_);
  resF5825 = T0;
  CALL3(1,VARREF(YgooSioSwriteYpost),LITREF(lit_22),x_,resF5825);
UNLINK_STACK();
  QRET(resF5825);
}

LOCCODEDEF(fun_do_type_infer_7) {
  P x_,acts_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL3(1,VARREF(Yerror),LITREF(lit_25),T1,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_8) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_9) {
  P x_,acts_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T0 = FUNFAB(fun_8,1,acts_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,x_);
  T2 = CALL1(1,VARREF(YgooSmacrosYlast),x_);
  T1 = CALL1(1,VARREF(YevalSastYprogram_type),T2);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_do_type_infer_10) {
  P x_,acts_;
  P x_1972F5827;
  P x_1971F5826;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T6 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
  x_1971F5826 = T6;
  x_1972F5827 = VARREF(YisaQ);
  T1 = CALL2(1,x_1972F5827,x_1971F5826,VARREF(YLlogG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
    T2 = CALL1(1,VARREF(YgooStypesYtE),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
    T4 = CALL1(1,VARREF(YgooSclassYclass_of),T5);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_11) {
  P x_,acts_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),x_);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),T1,acts_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_binding_12) {
  P x_,acts_;
  P tmpF5831;
  P x_1974F5830;
  P x_1973F5829;
  P valF5828;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T5 = CALL2(1,VARREF(YevalSast_evalYbinding_value_or),x_,YPfalse);
  valF5828 = T5;
  x_1973F5829 = valF5828;
  x_1974F5830 = VARREF(YisaQ);
  T3 = CALL2(1,x_1974F5830,x_1973F5829,VARREF(YLgenG));
  tmpF5831 = T3;
  if (tmpF5831 != YPfalse) {
    T1 = tmpF5831;
  } else {
    T2 = CALL2(1,x_1974F5830,x_1973F5829,VARREF(YLtypeG));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooStypesYtE),valF5828);
    T0 = T4;
  } else {
    T0 = VARREF(YLanyG);
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_binding_13) {
  P x_,acts_;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_type_value_14) {
  P t_;
LINK_STACK();
  ARG(t_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

LOCCODEDEF(fun_type_value_15) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL1(1,VARREF(Ytype_object),t_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_infer_binding_16) {
  P x_,acts_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T1 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),x_);
  if (T1 != YPfalse) {
    T0 = VARREF(YLanyG);
  } else {
    T3 = CALL1(1,VARREF(YevalSastYbinding_value),x_);
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(YevalSastYbinding_value),x_);
      T4 = CALL1(1,VARREF(YgooStypesYtE),T5);
      T2 = T4;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL1(1,VARREF(YevalSmoduleYbinding_inferred_type),x_);
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_17) {
  P x_,acts_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),x_);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer_binding),T1,acts_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_18) {
  P x_,acts_;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
UNLINK_STACK();
  QRET(VARREF(YLlogG));
}

LOCCODEDEF(fun_do_type_infer_19) {
  P x_,acts_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T0 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_20) {
  P x_,acts_;
  P bF5833;
  P x_1975F5832;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T9 = CALL1(1,VARREF(YevalSastYfunction_bindings),x_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  x_1975F5832 = T8;
  LOOP_284: {
    P a284_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1975F5832);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1975F5832);
      bF5833 = T7;
      T4 = CALL1(1,VARREF(YevalSmoduleYbinding_type),x_);
      T3 = CALL2(1,VARREF(YevalStypistYtype_infer),T4,acts_);
      CALL2(1,VARREF(YevalSmoduleYbinding_inferred_type_setter),T3,bF5833);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1975F5832);
      a284_0 = T6;
      x_1975F5832 = a284_0;
      goto LOOP_284;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  T10 = CALL1(1,VARREF(YevalSastYfunction_body),x_);
  CALL2(1,VARREF(YevalStypistYtype_infer),T10,acts_);
UNLINK_STACK();
  QRET(VARREF(YLmetG));
}

LOCCODEDEF(fun_do_type_infer_21) {
  P x_,acts_;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
UNLINK_STACK();
  QRET(VARREF(YLgenG));
}

LOCCODEDEF(fun_do_type_infer_22) {
  P x_,acts_;
  P test_typeF5834;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T20 = CALL1(1,VARREF(YevalSastYalternative_condition),x_);
  T19 = CALL2(1,VARREF(YevalStypistYtype_infer),T20,acts_);
  test_typeF5834 = T19;
  T2 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T1 = CALL2(1,VARREF(YevalSoptimizeYtype_equivQ),test_typeF5834,T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(YevalStypistYLfold_ifG),VARREF(YevalStypistYact_test),YPfalse);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T3,acts_,x_);
    T5 = CALL1(1,VARREF(YevalSastYalternative_alternant),x_);
    T4 = CALL2(1,VARREF(YevalStypistYtype_infer),T5,acts_);
    T0 = T4;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
    T8 = CALL2(1,VARREF(YevalSoptimizeYpotentially_jointQ),test_typeF5834,T9);
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YevalStypistYLfold_ifG),VARREF(YevalStypistYact_test),YPtrue);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T10,acts_,x_);
      T12 = CALL1(1,VARREF(YevalSastYalternative_consequent),x_);
      T11 = CALL2(1,VARREF(YevalStypistYtype_infer),T12,acts_);
      T6 = T11;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL1(1,VARREF(YevalSastYalternative_consequent),x_);
        T15 = CALL2(1,VARREF(YevalStypistYtype_infer),T16,acts_);
        T18 = CALL1(1,VARREF(YevalSastYalternative_alternant),x_);
        T17 = CALL2(1,VARREF(YevalStypistYtype_infer),T18,acts_);
        T14 = CALL2(1,VARREF(YevalStypistYtype_union),T15,T17);
        T13 = T14;
      } else {
        T13 = YPfalse;
      }
      T6 = T13;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_23) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_24) {
  P x_,acts_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T0 = FUNFAB(fun_23,1,acts_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,x_);
  T2 = CALL1(1,VARREF(YgooSmacrosYlast),x_);
  T1 = CALL2(1,VARREF(YevalStypistYtype_infer),T2,acts_);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_do_type_infer_25) {
  P x_,acts_;
  P bindingF5842;
  P typeF5841;
  P argF5840;
  P tmpF5839;
  P tmpF5838;
  P x_1977F5837;
  P x_1978F5836;
  P x_1979F5835;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T20 = CALL1(1,VARREF(YevalSastYfix_let_arguments),x_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_1979F5835 = T19;
  T22 = CALL1(1,VARREF(YevalSastYfix_let_types),x_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1978F5836 = T21;
  T24 = CALL1(1,VARREF(YevalSastYfix_let_bindings),x_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1977F5837 = T23;
  LOOP_285: {
    P a285_0,a285_1,a285_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1979F5835);
    tmpF5838 = T6;
    if (tmpF5838 != YPfalse) {
      T2 = tmpF5838;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1978F5836);
      tmpF5839 = T5;
      if (tmpF5839 != YPfalse) {
        T3 = tmpF5839;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1977F5837);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1979F5835);
      argF5840 = T18;
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1978F5836);
      typeF5841 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1977F5837);
      bindingF5842 = T16;
      T8 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF5842);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(YevalSmoduleYbinding_type),bindingF5842);
        T10 = CALL3(1,VARREF(YevalStypistYtype_infer_check),argF5840,T11,acts_);
        T9 = CALL2(1,VARREF(YevalSmoduleYbinding_inferred_type_setter),T10,bindingF5842);
      } else {
      }
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1979F5835);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1978F5836);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1977F5837);
      a285_0 = T13;
      a285_1 = T14;
      a285_2 = T15;
      x_1979F5835 = a285_0;
      x_1978F5836 = a285_1;
      x_1977F5837 = a285_2;
      goto LOOP_285;
      T0 = T12;
    } else {
      T0 = YPfalse;
    }
  }
  T26 = CALL1(1,VARREF(YevalSastYfix_let_body),x_);
  T25 = CALL2(1,VARREF(YevalStypistYtype_infer),T26,acts_);
UNLINK_STACK();
  QRET(T25);
}

LOCCODEDEF(fun_subtypeQ_26) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_27) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_28) {
  P x_,acts_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T0 = FUNFAB(fun_27,1,acts_);
  T1 = CALL1(1,VARREF(YevalSastYlocals_functions),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T3 = CALL1(1,VARREF(YevalSastYlocals_body),x_);
  T2 = CALL2(1,VARREF(YevalStypistYtype_infer),T3,acts_);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_29) {
  P b_,a_;
  P UF5843;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  ARG(a_, 1);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_inferred_type),b_);
  UF5843 = T2;
  T1 = CALL2(1,VARREF(YevalStypistYtype_union),UF5843,a_);
  T0 = CALL2(1,VARREF(YevalSmoduleYbinding_inferred_type_setter),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurse_30) {
  P arg_types_;
  P new_param_typesF5845;
  P param_typesF5844;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(arg_types_, 0);
  T9 = CALL1(1,VARREF(YevalSastYloop_bindings),FREEREF(0));
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_inferred_type),T9);
  param_typesF5844 = T8;
  T6 = fun_29;
  T7 = CALL1(1,VARREF(YevalSastYloop_bindings),FREEREF(0));
  T5 = CALL3(1,VARREF(YgooSmacrosYmap2),T6,T7,arg_types_);
  new_param_typesF5845 = T5;
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_55),param_typesF5844);
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_56),arg_types_);
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_57),new_param_typesF5845);
  T1 = CALL3(1,VARREF(YgooStypesYall2Q),VARREF(YevalSoptimizeYtype_equivQ),param_typesF5844,new_param_typesF5845);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYprogram_type),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYloop_body),FREEREF(0));
    T3 = CALL2(1,VARREF(YevalStypistYtype_infer),T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_31) {
  P T0,T1,T2;
LINK_STACK();
  T0 = FUNFAB(fun_recurse_30,2,FREEREF(0),FREEREF(1));
  CALL2(1,VARREF(YevalSastYloop_continue_setter),T0,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYloop_body),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalStypistYtype_infer),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_32) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSastYloop_continue_setter),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_33) {
  P x_,acts_;
  P x_1981F5846;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T3 = CALL1(1,VARREF(YevalSastYloop_continue),x_);
  x_1981F5846 = T3;
  T1 = FUNFAB(fun_31,2,x_,acts_);
  T2 = FUNFAB(fun_32,2,x_1981F5846,x_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_34) {
  P a_,b_;
  P T0,T1;
LINK_STACK();
  ARG(a_, 0);
  ARG(b_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_type),b_);
  T0 = CALL3(1,VARREF(YevalStypistYtype_infer_check),a_,T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_35) {
  P x_,acts_;
  P loopF5847;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T6 = CALL1(1,VARREF(YevalSastYapplication_loop),x_);
  loopF5847 = T6;
  T5 = CALL1(1,VARREF(YevalSastYloop_continue),loopF5847);
  T2 = FUNFAB(fun_34,1,acts_);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  T4 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF5847);
  T1 = CALL3(1,VARREF(YgooSmacrosYmap2),T2,T3,T4);
  T0 = CALL1(1,T5,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_36) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_37) {
  P x_,acts_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T0 = FUNFAB(fun_36,1,acts_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_arity_checkQ_38) {
  P naryQ_,arity_,x_,acts_;
  P lenF5848;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(naryQ_, 0);
  ARG(arity_, 1);
  ARG(x_, 2);
  ARG(acts_, 3);
  T4 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  lenF5848 = T3;
  if (naryQ_ != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmagYGE),lenF5848,arity_);
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSlogYE),lenF5848,arity_);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_known_callQ_39) {
  P naryQ_,arity_,arg_types_,fun_types_,x_,acts_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(naryQ_, 0);
  ARG(arity_, 1);
  ARG(arg_types_, 2);
  ARG(fun_types_, 3);
  ARG(x_, 4);
  ARG(acts_, 5);
  T2 = CALL4(1,VARREF(YevalStypistYarity_checkQ),naryQ_,arity_,x_,acts_);
  if (T2 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooStypesYall2Q),VARREF(YsubtypeQ),arg_types_,fun_types_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Ynew),VARREF(YevalStypistYLknow_callG));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T4,acts_,x_);
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_40) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_41) {
  P U1_;
  P T0,T1;
LINK_STACK();
  ARG(U1_, 0);
  T1 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
  T0 = CALL1(1,VARREF(YevalStypistYtype_value),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_42) {
  P x_,acts_;
  P fun_typesF5859;
  P tmpF5858;
  P othersF5857;
  P sortedF5856;
  P tup41F5855;
  P x_1983F5854;
  P x_1982F5853;
  P fF5852;
  P fun_typeF5851;
  P fnF5850;
  P arg_typesF5849;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
  T45 = FUNFAB(fun_40,1,acts_);
  T46 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  T44 = CALL2(1,VARREF(YgooSmacrosYmap),T45,T46);
  arg_typesF5849 = T44;
  T43 = CALL1(1,VARREF(YevalSastYapplication_function),x_);
  fnF5850 = T43;
  T42 = CALL2(1,VARREF(YevalStypistYtype_infer),fnF5850,acts_);
  fun_typeF5851 = T42;
  T1 = CALL2(1,VARREF(YisaQ),fun_typeF5851,VARREF(YLsingletonG));
  if (T1 != YPfalse) {
    T41 = CALL1(1,VARREF(Ytype_object),fun_typeF5851);
    fF5852 = T41;
    x_1982F5853 = fF5852;
    x_1983F5854 = VARREF(YisaQ);
    T3 = CALL2(1,x_1983F5854,x_1982F5853,VARREF(YLgenG));
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSfunYfun_naryQ),fF5852);
      T7 = CALL1(1,VARREF(YgooSfunYfun_arity),fF5852);
      T5 = CALL4(1,VARREF(YevalStypistYarity_checkQ),T6,T7,x_,acts_);
      if (T5 != YPfalse) {
        T21 = CALL1(1,VARREF(Yfun_mets),fF5852);
        T20 = CALL2(1,VARREF(YevalSoptimizeYsorted_applicable_methods_using_types),T21,arg_typesF5849);
        tup41F5855 = T20;
        T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F5855,YPint((P)0));
        sortedF5856 = T19;
        T18 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F5855,YPint((P)1));
        othersF5857 = T18;
        CALL5(1,VARREF(YgooSioSwriteYpost),LITREF(lit_68),fF5852,arg_typesF5849,sortedF5856,othersF5857);
        T12 = CALL1(1,VARREF(YgooSmacrosYnulQ),sortedF5856);
        tmpF5858 = T12;
        if (tmpF5858 != YPfalse) {
          T9 = tmpF5858;
        } else {
          T11 = CALL1(1,VARREF(YgooSmacrosYnulQ),othersF5857);
          T10 = CALL1(1,VARREF(Ynot),T11);
          T9 = T10;
        }
        if (T9 != YPfalse) {
          T13 = CALL1(1,VARREF(Ynew),VARREF(YevalStypistYLknow_callG));
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),T13,acts_,x_);
          T14 = CALL1(1,VARREF(YgooSfunYfun_val),fF5852);
          T8 = T14;
        } else {
          CALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_69));
          T15 = CALL3(1,VARREF(Ynew),VARREF(YevalStypistYLdispatchG),VARREF(YevalStypistYact_sorted),sortedF5856);
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),T15,acts_,x_);
          T17 = CALL1(1,VARREF(Yhead),sortedF5856);
          T16 = CALL1(1,VARREF(YgooSfunYfun_val),T17);
          T8 = T16;
        }
        T4 = T8;
      } else {
        T22 = CALL1(1,VARREF(YgooSfunYfun_val),fF5852);
        T4 = T22;
      }
      T2 = T4;
    } else {
      T24 = CALL2(1,x_1983F5854,x_1982F5853,VARREF(YevalSastYLast_methodG));
      if (T24 != YPfalse) {
        T33 = FUNFAB(fun_41,1,acts_);
        T34 = CALL1(1,VARREF(YevalSastYfunction_specs),fF5852);
        T32 = CALL2(1,VARREF(YgooSmacrosYmap),T33,T34);
        fun_typesF5859 = T32;
        T27 = CALL1(1,VARREF(YevalSastYfunction_naryQ),fF5852);
        T28 = CALL1(1,VARREF(YevalSastYfunction_arity),fF5852);
        T26 = CALLN(1,VARREF(YevalStypistYknown_callQ),6,T27,T28,arg_typesF5849,fun_typesF5859,x_,acts_);
        if (T26 != YPfalse) {
          T31 = CALL1(1,VARREF(YevalSastYfunction_value),fF5852);
          T30 = CALL2(1,VARREF(YevalStypistYtype_infer),T31,acts_);
          T29 = CALL1(1,VARREF(YevalStypistYtype_value),T30);
          T25 = T29;
        } else {
          T25 = VARREF(YLanyG);
        }
        T23 = T25;
      } else {
        T36 = CALL2(1,x_1983F5854,x_1982F5853,VARREF(YLfunG));
        if (T36 != YPfalse) {
          T37 = CALL1(1,VARREF(YgooSfunYfun_naryQ),fF5852);
          T38 = CALL1(1,VARREF(YgooSfunYfun_arity),fF5852);
          T39 = CALL1(1,VARREF(YgooSfunYfun_specs),fF5852);
          CALLN(1,VARREF(YevalStypistYknown_callQ),6,T37,T38,arg_typesF5849,T39,x_,acts_);
          T40 = CALL1(1,VARREF(YgooSfunYfun_val),fF5852);
          T35 = T40;
        } else {
          T35 = VARREF(YLanyG);
        }
        T23 = T35;
      }
      T2 = T23;
    }
    T0 = T2;
  } else {
    T0 = VARREF(YLanyG);
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_43) {
  P x_,acts_;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_do_type_infer_44) {
  P x_,acts_;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_do_type_infer_45) {
  P x_,acts_;
LINK_STACK();
  ARG(x_, 0);
  ARG(acts_, 1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_surgeryX_46) {
  P o_,acts_,r_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(acts_, 1);
  ARG(r_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalStypistYsurgeryX),o_,acts_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_surgeryX_47) {
  P o_,act_,r_;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_do_surgeryX_48) {
  P o_,act_,r_;
  P metsF5860;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  T7 = CALL1(1,VARREF(YevalStypistYact_sorted),act_);
  metsF5860 = T7;
  T1 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
  T3 = CALL1(1,VARREF(Yhead),metsF5860);
  T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),T3);
  T5 = CALL1(1,VARREF(Ytail),metsF5860);
  T4 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),T5);
  T6 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_arguments),T1,VARREF(YevalSastYapplication_function),T2,VARREF(YevalSastYapplication_next_methods),T4,VARREF(YevalSastYapplication_tailQ),T6);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_surgeryX_49) {
  P o_,act_,r_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalStypistYact_val),act_);
  T2 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),T1,r_,YPtrue,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_surgeryX_50) {
  P o_,act_,r_;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  CALL2(1,VARREF(YevalSastYapplication_knownQ_setter),YPtrue,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_do_surgeryX_51) {
  P o_,act_,r_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalStypistYact_test),act_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYalternative_consequent),o_);
    T0 = T2;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYalternative_alternant),o_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_surgeryX_52) {
  P o_,acts_,r_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(acts_, 1);
  ARG(r_, 2);
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_83),acts_);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),acts_,o_,YPfalse);
  CALL3(1,VARREF(YgooSioSwriteYpost),LITREF(lit_84),o_,T0);
  CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalStypistYsurgeryX),o_,acts_,r_);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),acts_,o_,YPfalse);
  T1 = CALL3(1,VARREF(YevalStypistYdo_surgeryX),o_,T2,r_);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_surgeryX_53) {
  P o_,acts_,r_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(acts_, 1);
  ARG(r_, 2);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),acts_,o_,YPfalse);
  T0 = CALL3(1,VARREF(YevalStypistYdo_surgeryX),o_,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStypistYtype_exp) {
  P x_;
  P astF5862;
  P rF5861;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),LITREF(lit_88));
  rF5861 = T1;
  T0 = CALL2(1,VARREF(YevalStypistYcp),x_,rF5861);
  astF5862 = T0;
  CALL1(1,VARREF(YevalStypistYtype_infer_all),astF5862);
UNLINK_STACK();
  QRET(astF5862);
}

FUNCODEDEF(YevalStypistYtypeAopt_exp) {
  P x_;
  P actsF5865;
  P astF5864;
  P rF5863;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),LITREF(lit_88));
  rF5863 = T3;
  T2 = CALL2(1,VARREF(YevalStypistYcp),x_,rF5863);
  astF5864 = T2;
  T1 = CALL1(1,VARREF(YevalStypistYtype_infer_all),astF5864);
  actsF5865 = T1;
  T0 = CALL3(1,VARREF(YevalStypistYsurgeryX),astF5864,actsF5865,rF5863);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_dynamic_compute_program_56) {
  P exp_,env_;
  P lftF5869;
  P boxF5868;
  P anaF5867;
  P astF5866;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T3 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,YPtrue,YPfalse);
  astF5866 = T3;
  T2 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),astF5866,env_);
  anaF5867 = T2;
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF5867);
  boxF5868 = T1;
  T0 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF5868);
  lftF5869 = T0;
UNLINK_STACK();
  QRET(lftF5869);
}

LOCCODEDEF(fun_optimize_method_57) {
  P m_;
  P oastF5877;
  P actsF5876;
  P astF5875;
  P patchF5874;
  P rF5873;
  P modF5872;
  P srclF5871;
  P srcF5870;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(m_, 0);
  T18 = CALL1(1,VARREF(YgooSfunYfun_src),m_);
  T17 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T18);
  srcF5870 = T17;
  T16 = CALL1(1,VARREF(YgooSfunYfun_src_loc),m_);
  srclF5871 = T16;
  T15 = CALL1(1,VARREF(Ysrc_loc_file),srclF5871);
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T15);
  modF5872 = T14;
  T13 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),modF5872);
  rF5873 = T13;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T8 = CALL1(1,VARREF(Ylst),m_);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_97));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T12 = CALL1(1,VARREF(Ylst),srcF5870);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_97));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,LITREF(lit_97));
  patchF5874 = T3;
  T2 = CALL2(1,VARREF(YevalStypistYdynamic_compute_program),patchF5874,rF5873);
  astF5875 = T2;
  T1 = CALL1(1,VARREF(YevalStypistYtype_infer_all),astF5875);
  actsF5876 = T1;
  T0 = CALL3(1,VARREF(YevalStypistYsurgeryX),astF5875,actsF5876,rF5873);
  oastF5877 = T0;
  CALL2(1,VARREF(YevalStypistYdync),oastF5877,rF5873);
UNLINK_STACK();
  QRET(oastF5877);
}

P YevalStypistY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140;
DEFCREGS();
  lit_0 = YPPsym((P)"type-union");
  lit_1 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_type_union_0 = YPfab_met(FUNCODEREF(fun_type_union_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(13),YPsb((P)"(fun ((x <type>) (y <type>) => <type>) (cond ((subtype? x y) y) ((subtype? y x) x) ((isa? x <union>) (new <union> union-elts (if (isa? y <union>) (cat x y) (pair y x)))) (#t (new <union> union-elts (if (isa? y <union>) (pair x y) (lst x y))))))"));
  T2 = VARREF_OR(YevalStypistYtype_union,YPfalse);
  T3 = fun_type_union_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalStypistYtype_union,T1);
  lit_2 = YPPsym((P)"<act>");
  T5 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_2),T5);
  VARSET(YevalStypistYLactG,T4);
  lit_3 = YPPsym((P)"<dispatch>");
  T7 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLactG),Ynil);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_3),T7);
  VARSET(YevalStypistYLdispatchG,T6);
  lit_4 = YPPsym((P)"act-sorted");
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLdispatchG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_act_sorted_1 = YPfab_met(FUNCODEREF(fun_act_sorted_1),T8,LITREF(lit_4),LITREF(lit_5),sloc(25),YPsb((P)"(fun ((_x <dispatch>)) (prop-value _x act-sorted))"));
  T10 = VARREF_OR(YevalStypistYact_sorted,YPfalse);
  T11 = fun_act_sorted_1;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalStypistYact_sorted,T9);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLdispatchG),VARREF(YevalStypistYact_sorted),YPfalse,VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_6 = YPPsym((P)"<know-call>");
  T13 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLactG),Ynil);
  T12 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_6),T13);
  VARSET(YevalStypistYLknow_callG,T12);
  lit_7 = YPPsym((P)"<fold>");
  T15 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLactG),Ynil);
  T14 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_7),T15);
  VARSET(YevalStypistYLfoldG,T14);
  lit_8 = YPPsym((P)"<fold-if>");
  T17 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLfoldG),Ynil);
  T16 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_8),T17);
  VARSET(YevalStypistYLfold_ifG,T16);
  lit_9 = YPPsym((P)"act-test");
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLfold_ifG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_act_test_2 = YPfab_met(FUNCODEREF(fun_act_test_2),T18,LITREF(lit_9),LITREF(lit_10),sloc(32),YPsb((P)"(fun ((_x <fold-if>)) (prop-value _x act-test))"));
  T20 = VARREF_OR(YevalStypistYact_test,YPfalse);
  T21 = fun_act_test_2;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalStypistYact_test,T19);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLfold_ifG),VARREF(YevalStypistYact_test),YPfalse,VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_11 = YPPsym((P)"<fold-call>");
  T23 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLfoldG),Ynil);
  T22 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_11),T23);
  VARSET(YevalStypistYLfold_callG,T22);
  lit_12 = YPPsym((P)"act-val");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLfold_callG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_act_val_3 = YPfab_met(FUNCODEREF(fun_act_val_3),T24,LITREF(lit_12),LITREF(lit_13),sloc(35),YPsb((P)"(fun ((_x <fold-call>)) (prop-value _x act-val))"));
  T26 = VARREF_OR(YevalStypistYact_val,YPfalse);
  T27 = fun_act_val_3;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalStypistYact_val,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLfold_callG),VARREF(YevalStypistYact_val),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"type-infer-check");
  lit_15 = YPPlist(3,YPPsym((P)"a"),YPPsym((P)"t"),YPPsym((P)"acts"));
  lit_16 = YPsb((P)"IT %= T %=\n");
  T28 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_type_infer_check_4 = YPfab_met(FUNCODEREF(fun_type_infer_check_4),T28,LITREF(lit_14),LITREF(lit_15),sloc(37),YPsb((P)"(fun (a t acts) (def inferred-type (type-infer a acts)) (def type (type-value (type-infer t acts))) (post IT %= T %=\n inferred-type type) (if (subtype? inferred-type type) inferred-type type))"));
  T30 = VARREF_OR(YevalStypistYtype_infer_check,YPfalse);
  T31 = fun_type_infer_check_4;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalStypistYtype_infer_check,T29);
  lit_17 = YPPsym((P)"type-infer-all");
  lit_18 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_infer_all_5 = YPfab_met(FUNCODEREF(fun_type_infer_all_5),T32,LITREF(lit_17),LITREF(lit_18),sloc(45),YPsb((P)"(fun ((x <program>)) (let ((acts (fab <tab> 0))) (type-infer x acts) acts))"));
  T34 = VARREF_OR(YevalStypistYtype_infer_all,YPfalse);
  T35 = fun_type_infer_all_5;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalStypistYtype_infer_all,T33);
  lit_19 = YPPsym((P)"type-infer");
  lit_20 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_21 = YPsb((P)"TYPING %= \n");
  lit_22 = YPsb((P)"TYPING %= => %t\n");
  T36 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_infer_6 = YPfab_met(FUNCODEREF(fun_type_infer_6),T36,LITREF(lit_19),LITREF(lit_20),sloc(50),YPsb((P)"(fun ((x <program>) (acts <tab>)) (post TYPING %= \n x) (def res (opf (program-type x) (type-union _ (do-type-infer x acts)))) (post TYPING %= => %t\n x res) res)"));
  T38 = VARREF_OR(YevalStypistYtype_infer,YPfalse);
  T39 = fun_type_infer_6;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalStypistYtype_infer,T37);
  lit_23 = YPPsym((P)"do-type-infer");
  lit_24 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_25 = YPsb((P)"NYI %t: %=");
  T40 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_7 = YPfab_met(FUNCODEREF(fun_do_type_infer_7),T40,LITREF(lit_23),LITREF(lit_24),sloc(56),YPsb((P)"(fun ((x <program>) (acts <tab>)) (error NYI %t: %= (class-of x) x))"));
  T42 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T43 = fun_do_type_infer_7;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalStypistYdo_type_infer,T41);
  lit_26 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_27 = YPPlist(1,YPPsym((P)"_1"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T45,YPfalse,LITREF(lit_27),sloc(60),YPsb((P)"(fun (_1) (type-infer _1 acts))"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_9 = YPfab_met(FUNCODEREF(fun_do_type_infer_9),T44,LITREF(lit_23),LITREF(lit_26),sloc(59),YPsb((P)"(fun ((x <sequential>) (acts <tab>)) (do (op type-infer _ acts) x) (program-type (last x)))"));
  T47 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T48 = fun_do_type_infer_9;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YevalStypistYdo_type_infer,T46);
  lit_28 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T49 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_10 = YPfab_met(FUNCODEREF(fun_do_type_infer_10),T49,LITREF(lit_23),LITREF(lit_28),sloc(63),YPsb((P)"(fun ((x <constant>) (acts <tab>)) (case-by (constant-value x) isa? ((<log>) (t= (constant-value x))) (#t (class-of (constant-value x)))))"));
  T51 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T52 = fun_do_type_infer_10;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalStypistYdo_type_infer,T50);
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLassignmentG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_11 = YPfab_met(FUNCODEREF(fun_do_type_infer_11),T53,LITREF(lit_23),LITREF(lit_29),sloc(68),YPsb((P)"(fun ((x <assignment>) (acts <tab>)) (type-infer (assignment-form x) acts))"));
  T55 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T56 = fun_do_type_infer_11;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalStypistYdo_type_infer,T54);
  lit_30 = YPPsym((P)"type-infer-binding");
  lit_31 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_infer_binding_12 = YPfab_met(FUNCODEREF(fun_type_infer_binding_12),T57,LITREF(lit_30),LITREF(lit_31),sloc(71),YPsb((P)"(fun ((x <module-binding>) (acts <tab>)) (let ((val (binding-value-or x #f))) (case-by val isa? ((<gen> <type>) (t= val)) (#t <any>))))"));
  T59 = VARREF_OR(YevalStypistYtype_infer_binding,YPfalse);
  T60 = fun_type_infer_binding_12;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalStypistYtype_infer_binding,T58);
  lit_32 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T61 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_infer_binding_13 = YPfab_met(FUNCODEREF(fun_type_infer_binding_13),T61,LITREF(lit_30),LITREF(lit_32),sloc(77),YPsb((P)"(fun ((x <binding>) (acts <tab>)) <any>)"));
  T63 = VARREF_OR(YevalStypistYtype_infer_binding,YPfalse);
  T64 = fun_type_infer_binding_13;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalStypistYtype_infer_binding,T62);
  lit_33 = YPPsym((P)"type-value");
  lit_34 = YPPlist(1,YPPsym((P)"t"));
  T65 = YPfab_sig(YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_type_value_14 = YPfab_met(FUNCODEREF(fun_type_value_14),T65,LITREF(lit_33),LITREF(lit_34),sloc(81),YPsb((P)"(fun ((t <type>) => <type>) <any>)"));
  T67 = VARREF_OR(YevalStypistYtype_value,YPfalse);
  T68 = fun_type_value_14;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalStypistYtype_value,T66);
  lit_35 = YPPlist(1,YPPsym((P)"t"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_type_value_15 = YPfab_met(FUNCODEREF(fun_type_value_15),T69,LITREF(lit_33),LITREF(lit_35),sloc(84),YPsb((P)"(fun ((t <singleton>) => <type>) (type-object t))"));
  T71 = VARREF_OR(YevalStypistYtype_value,YPfalse);
  T72 = fun_type_value_15;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalStypistYtype_value,T70);
  lit_36 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_infer_binding_16 = YPfab_met(FUNCODEREF(fun_type_infer_binding_16),T73,LITREF(lit_30),LITREF(lit_36),sloc(87),YPsb((P)"(fun ((x <local-binding>) (acts <tab>)) (cond ((binding-mutable? x) <any>) ((binding-value x) (t= (binding-value x))) (#t (binding-inferred-type x))))"));
  T75 = VARREF_OR(YevalStypistYtype_infer_binding,YPfalse);
  T76 = fun_type_infer_binding_16;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalStypistYtype_infer_binding,T74);
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLreal_referenceG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_17 = YPfab_met(FUNCODEREF(fun_do_type_infer_17),T77,LITREF(lit_23),LITREF(lit_37),sloc(96),YPsb((P)"(fun ((x <real-reference>) (acts <tab>)) (type-infer-binding (reference-binding x) acts))"));
  T79 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T80 = fun_do_type_infer_17;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalStypistYdo_type_infer,T78);
  lit_38 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T81 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_18 = YPfab_met(FUNCODEREF(fun_do_type_infer_18),T81,LITREF(lit_23),LITREF(lit_38),sloc(99),YPsb((P)"(fun ((x <bound?>) (acts <tab>)) <log>)"));
  T83 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T84 = fun_do_type_infer_18;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalStypistYdo_type_infer,T82);
  lit_39 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_19 = YPfab_met(FUNCODEREF(fun_do_type_infer_19),T85,LITREF(lit_23),LITREF(lit_39),sloc(102),YPsb((P)"(fun ((x <definition>) (acts <tab>)) (t= #f))"));
  T87 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T88 = fun_do_type_infer_19;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YevalStypistYdo_type_infer,T86);
  lit_40 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T89 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_20 = YPfab_met(FUNCODEREF(fun_do_type_infer_20),T89,LITREF(lit_23),LITREF(lit_40),sloc(105),YPsb((P)"(fun ((x <ast-method>) (acts <tab>)) (for ((b (function-bindings x))) (set (binding-inferred-type b) (type-infer (binding-type x) acts))) (type-infer (function-body x) acts) <met>)"));
  T91 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T92 = fun_do_type_infer_20;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YevalStypistYdo_type_infer,T90);
  lit_41 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T93 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_21 = YPfab_met(FUNCODEREF(fun_do_type_infer_21),T93,LITREF(lit_23),LITREF(lit_41),sloc(112),YPsb((P)"(fun ((x <ast-generic>) (acts <tab>)) <gen>)"));
  T95 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T96 = fun_do_type_infer_21;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalStypistYdo_type_infer,T94);
  lit_42 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_22 = YPfab_met(FUNCODEREF(fun_do_type_infer_22),T97,LITREF(lit_23),LITREF(lit_42),sloc(115),YPsb((P)"(fun ((x <alternative>) (acts <tab>)) (def test-type (type-infer (alternative-condition x) acts)) (cond ((type-equiv? test-type (t= #f)) (set (elt acts x) (new <fold-if> act-test #f)) (type-infer (alternative-alternant x) acts)) ((not (potentially-joint? test-type (t= #f))) (set (elt acts x) (new <fold-if> act-test #t)) (type-infer (alternative-consequent x) acts)) (#t (type-union (type-infer (alternative-consequent x) acts) (type-infer (alternative-alternant x) acts)))))"));
  T99 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T100 = fun_do_type_infer_22;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalStypistYdo_type_infer,T98);
  lit_43 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_44 = YPPlist(1,YPPsym((P)"_1"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T102,YPfalse,LITREF(lit_44),sloc(128),YPsb((P)"(fun (_1) (type-infer _1 acts))"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_24 = YPfab_met(FUNCODEREF(fun_do_type_infer_24),T101,LITREF(lit_23),LITREF(lit_43),sloc(127),YPsb((P)"(fun ((x <sequential>) (acts <tab>)) (do (op type-infer _ acts) x) (type-infer (last x) acts))"));
  T104 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T105 = fun_do_type_infer_24;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalStypistYdo_type_infer,T103);
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_25 = YPfab_met(FUNCODEREF(fun_do_type_infer_25),T106,LITREF(lit_23),LITREF(lit_45),sloc(131),YPsb((P)"(fun ((x <fix-let>) (acts <tab>)) (for ((binding (fix-let-bindings x)) (type (fix-let-types x)) (arg (fix-let-arguments x))) (unless (binding-mutable? binding) (set (binding-inferred-type binding) (type-infer-check arg (binding-type binding) acts)))) (type-infer (fix-let-body x) acts))"));
  T108 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T109 = fun_do_type_infer_25;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalStypistYdo_type_infer,T107);
  lit_46 = YPPsym((P)"subtype?");
  lit_47 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YgooStypesYLbotG),VARREF(YgooStypesYLbotG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_26 = YPfab_met(FUNCODEREF(fun_subtypeQ_26),T110,LITREF(lit_46),LITREF(lit_47),sloc(143),YPsb((P)"(fun ((x <bot>) (y <bot>) => <log>) #t)"));
  T112 = VARREF_OR(YsubtypeQ,YPfalse);
  T113 = fun_subtypeQ_26;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YsubtypeQ,T111);
  lit_48 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_49 = YPPlist(1,YPPsym((P)"_1"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T115,YPfalse,LITREF(lit_49),sloc(146),YPsb((P)"(fun (_1) (type-infer _1 acts))"));
  T114 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_28 = YPfab_met(FUNCODEREF(fun_do_type_infer_28),T114,LITREF(lit_23),LITREF(lit_48),sloc(145),YPsb((P)"(fun ((x <locals>) (acts <tab>)) (do (op type-infer _ acts) (locals-functions x)) (type-infer (locals-body x) acts))"));
  T117 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T118 = fun_do_type_infer_28;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalStypistYdo_type_infer,T116);
  lit_50 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_51 = Ynil;
  lit_52 = YPPsym((P)"recurse");
  lit_53 = YPPlist(1,YPPsym((P)"arg-types"));
  lit_54 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"a"));
  lit_55 = YPsb((P)"PARAM TYPES %=\n");
  lit_56 = YPsb((P)"ARGUM TYPES %=\n");
  lit_57 = YPsb((P)"NEW-PARAM TYPES %=\n");
  T123 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T123,YPfalse,LITREF(lit_54),YPfalse,YPsb((P)"(fun (b a) (opf (binding-inferred-type b) (type-union _ a)))"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recurse_30 = YPfab_met(FUNCODEREF(fun_recurse_30),T122,LITREF(lit_52),LITREF(lit_53),sloc(150),YPsb((P)"(fun (arg-types) (def param-types (map binding-inferred-type (loop-bindings x))) (def new-param-types (map2 (fun (b a) (opf (binding-inferred-type b) (type-union _ a))) (loop-bindings x) arg-types)) (post PARAM TYPES %=\n param-types) (post ARGUM TYPES %=\n arg-types) (post NEW-PARAM TYPES %=\n new-param-types) (if (all2? type-equiv? param-types new-param-types) (program-type x) (type-infer (loop-body x) acts)))"));
  T121 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T121,YPfalse,LITREF(lit_51),sloc(162),YPsb((P)"(fun () (seq (set (loop-continue x) recurse) (dlet () (type-infer (loop-body x) acts))))"));
  T120 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T120,YPfalse,LITREF(lit_51),sloc(162),YPsb((P)"(fun () (set (loop-continue x) x-1981))"));
  T119 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_33 = YPfab_met(FUNCODEREF(fun_do_type_infer_33),T119,LITREF(lit_23),LITREF(lit_50),sloc(149),YPsb((P)"(fun ((x <loop>) (acts <tab>)) (loc ((recurse (arg-types) (def param-types (map binding-inferred-type (loop-bindings x))) (def new-param-types (map2 (fun (b a) (opf (binding-inferred-type b) (type-union _ a))) (loop-bindings x) arg-types)) (post PARAM TYPES %=\n param-types) (post ARGUM TYPES %=\n arg-types) (post NEW-PARAM TYPES %=\n new-param-types) (if (all2? type-equiv? param-types new-param-types) (program-type x) (type-infer (loop-body x) acts)))) (dlet (((loop-continue x) recurse)) (type-infer (loop-body x) acts))))"));
  T125 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T126 = fun_do_type_infer_33;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalStypistYdo_type_infer,T124);
  lit_58 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_59 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"b"));
  T128 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T128,YPfalse,LITREF(lit_59),sloc(168),YPsb((P)"(fun (a b) (type-infer-check a (binding-type b) acts))"));
  T127 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloop_applicationG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_35 = YPfab_met(FUNCODEREF(fun_do_type_infer_35),T127,LITREF(lit_23),LITREF(lit_58),sloc(165),YPsb((P)"(fun ((x <loop-application>) (acts <tab>)) (let ((loop (application-loop x))) ((loop-continue loop) (map2 (fun (a b) (type-infer-check a (binding-type b) acts)) (application-arguments x) (loop-bindings loop)))))"));
  T130 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T131 = fun_do_type_infer_35;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalStypistYdo_type_infer,T129);
  lit_60 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_61 = YPPlist(1,YPPsym((P)"_1"));
  T136 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T135 = fun_36 = YPfab_met(FUNCODEREF(fun_36),T136,YPfalse,LITREF(lit_61),sloc(173),YPsb((P)"(fun (_1) (type-infer _1 acts))"));
  T134 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T133 = fun_do_type_infer_37 = YPfab_met(FUNCODEREF(fun_do_type_infer_37),T134,LITREF(lit_23),LITREF(lit_60),sloc(172),YPsb((P)"(fun ((x <predefined-application>) (acts <tab>)) (do (op type-infer _ acts) (application-arguments x)) <any>)"));
  T139 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T140 = fun_do_type_infer_37;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  T137 = VARSET(YevalStypistYdo_type_infer,T138);
  T132 = T137;
  return T132;
}

P YevalStypistY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72;
DEFCREGS();
  lit_62 = YPPsym((P)"arity-check?");
  lit_63 = YPPlist(4,YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"x"),YPPsym((P)"acts"));
  T0 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)4),VARREF(YLlogG),Ynil);
  fun_arity_checkQ_38 = YPfab_met(FUNCODEREF(fun_arity_checkQ_38),T0,LITREF(lit_62),LITREF(lit_63),sloc(176),YPsb((P)"(fun (nary? arity (x <regular-application>) (acts <tab>) => <log>) (def len (len (application-arguments x))) (if nary? (>= len arity) (= len arity)))"));
  T2 = VARREF_OR(YevalStypistYarity_checkQ,YPfalse);
  T3 = fun_arity_checkQ_38;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalStypistYarity_checkQ,T1);
  lit_64 = YPPsym((P)"known-call?");
  lit_65 = YPPlist(6,YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"arg-types"),YPPsym((P)"fun-types"),YPPsym((P)"x"),YPPsym((P)"acts"));
  T4 = YPfab_sig(YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)6),VARREF(YLlogG),Ynil);
  fun_known_callQ_39 = YPfab_met(FUNCODEREF(fun_known_callQ_39),T4,LITREF(lit_64),LITREF(lit_65),sloc(180),YPsb((P)"(fun (nary? arity arg-types fun-types (x <regular-application>) (acts <tab>) => <log>) (if (and (arity-check? nary? arity x acts) (all2? subtype? arg-types fun-types)) (seq (set (elt acts x) (new <know-call>)) #t) #f))"));
  T6 = VARREF_OR(YevalStypistYknown_callQ,YPfalse);
  T7 = fun_known_callQ_39;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalStypistYknown_callQ,T5);
  lit_66 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  lit_67 = YPPlist(1,YPPsym((P)"_1"));
  lit_68 = YPsb((P)"APP-METS %= %= %= %=\n");
  lit_69 = YPsb((P)"REGISTERING ACT\n");
  lit_70 = YPPlist(1,YPPsym((P)"_1"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T10,YPfalse,LITREF(lit_67),sloc(188),YPsb((P)"(fun (_1) (type-infer _1 acts))"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPfab_met(FUNCODEREF(fun_41),T9,YPfalse,LITREF(lit_70),sloc(208),YPsb((P)"(fun (_1) (type-value (type-infer _1 acts)))"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_42 = YPfab_met(FUNCODEREF(fun_do_type_infer_42),T8,LITREF(lit_23),LITREF(lit_66),sloc(187),YPsb((P)"(fun ((x <regular-application>) (acts <tab>)) (def arg-types (map (op type-infer _ acts) (application-arguments x))) (def fn (application-function x)) (def fun-type (type-infer fn acts)) (if (isa? fun-type <singleton>) (let ((f (type-object fun-type))) (case-by f isa? ((<gen>) (if (arity-check? (fun-nary? f) (fun-arity f) x acts) (let (((tup sorted others) (sorted-applicable-methods-using-types (fun-mets f) arg-types))) (post APP-METS %= %= %= %=\n f arg-types sorted others) (if (or (nul? sorted) (not (nul? others))) (seq (set (elt acts x) (new <know-call>)) (fun-val f)) (seq (post REGISTERING ACT\n) (set (elt acts x) (new <dispatch> act-sorted sorted)) (fun-val (head sorted))))) (fun-val f))) ((<ast-method>) (def fun-types (map (op type-value (type-infer _ acts)) (function-specs f))) (if (known-call? (function-nary? f) (function-arity f) arg-types fun-types x acts) (type-value (type-infer (function-value f) acts)) <any>)) ((<fun>) (known-call? (fun-nary? f) (fun-arity f) arg-types (fun-specs f) x acts) (fun-val f)) (#t <any>))) <any>))"));
  T12 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T13 = fun_do_type_infer_42;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalStypistYdo_type_infer,T11);
  lit_71 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_43 = YPfab_met(FUNCODEREF(fun_do_type_infer_43),T14,LITREF(lit_23),LITREF(lit_71),sloc(221),YPsb((P)"(fun ((x <bind-exit>) (acts <tab>)) <any>)"));
  T16 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T17 = fun_do_type_infer_43;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalStypistYdo_type_infer,T15);
  lit_72 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_44 = YPfab_met(FUNCODEREF(fun_do_type_infer_44),T18,LITREF(lit_23),LITREF(lit_72),sloc(224),YPsb((P)"(fun ((x <unwind-protect>) (acts <tab>)) <any>)"));
  T20 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T21 = fun_do_type_infer_44;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalStypistYdo_type_infer,T19);
  lit_73 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"acts"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_45 = YPfab_met(FUNCODEREF(fun_do_type_infer_45),T22,LITREF(lit_23),LITREF(lit_73),sloc(227),YPsb((P)"(fun ((x <monitor>) (acts <tab>)) <any>)"));
  T24 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T25 = fun_do_type_infer_45;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalStypistYdo_type_infer,T23);
  lit_74 = YPPsym((P)"surgery!");
  lit_75 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"acts"),YPPsym((P)"r"));
  T26 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_surgeryX_46 = YPfab_met(FUNCODEREF(fun_surgeryX_46),T26,LITREF(lit_74),LITREF(lit_75),sloc(234),YPsb((P)"(fun ((o <program>) (acts <tab>) r) (ast-walk! surgery! o acts r))"));
  T28 = VARREF_OR(YevalStypistYsurgeryX,YPfalse);
  T29 = fun_surgeryX_46;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalStypistYsurgeryX,T27);
  lit_76 = YPPsym((P)"do-surgery!");
  lit_77 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T30 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_47 = YPfab_met(FUNCODEREF(fun_do_surgeryX_47),T30,LITREF(lit_76),LITREF(lit_77),sloc(237),YPsb((P)"(fun ((o <program>) act r) o)"));
  T32 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T33 = fun_do_surgeryX_47;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalStypistYdo_surgeryX,T31);
  lit_78 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T34 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLdispatchG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_48 = YPfab_met(FUNCODEREF(fun_do_surgeryX_48),T34,LITREF(lit_76),LITREF(lit_78),sloc(239),YPsb((P)"(fun ((o <regular-application>) (act <dispatch>) r) (def mets (act-sorted act)) (new <method-application> application-arguments (application-arguments o) application-function (new <constant> constant-value (head mets)) application-next-methods (new <constant> constant-value (tail mets)) application-tail? (application-tail? o)))"));
  T36 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T37 = fun_do_surgeryX_48;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalStypistYdo_surgeryX,T35);
  lit_79 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T38 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLfold_callG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_49 = YPfab_met(FUNCODEREF(fun_do_surgeryX_49),T38,LITREF(lit_76),LITREF(lit_79),sloc(247),YPsb((P)"(fun ((o <regular-application>) (act <fold-call>) r) (objectify-with-subtransaction (act-val act) r #t (application-tail? o)))"));
  T40 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T41 = fun_do_surgeryX_49;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalStypistYdo_surgeryX,T39);
  lit_80 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T42 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLknow_callG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_50 = YPfab_met(FUNCODEREF(fun_do_surgeryX_50),T42,LITREF(lit_76),LITREF(lit_80),sloc(250),YPsb((P)"(fun ((o <regular-application>) (act <know-call>) r) (set (application-known? o) #t) o)"));
  T44 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T45 = fun_do_surgeryX_50;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalStypistYdo_surgeryX,T43);
  lit_81 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T46 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLalternativeG),VARREF(YevalStypistYLfold_ifG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_51 = YPfab_met(FUNCODEREF(fun_do_surgeryX_51),T46,LITREF(lit_76),LITREF(lit_81),sloc(254),YPsb((P)"(fun ((o <alternative>) (act <fold-if>) r) (if (act-test act) (alternative-consequent o) (alternative-alternant o)))"));
  T48 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T49 = fun_do_surgeryX_51;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalStypistYdo_surgeryX,T47);
  lit_82 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"acts"),YPPsym((P)"r"));
  lit_83 = YPsb((P)"ACTS %=\n");
  lit_84 = YPsb((P)"VISITING APP %= ACT %=\n");
  T50 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_surgeryX_52 = YPfab_met(FUNCODEREF(fun_surgeryX_52),T50,LITREF(lit_74),LITREF(lit_82),sloc(259),YPsb((P)"(fun ((o <regular-application>) (acts <tab>) r) (post ACTS %=\n acts) (post VISITING APP %= ACT %=\n o (elt-or acts o #f)) (ast-walk! surgery! o acts r) (do-surgery! o (elt-or acts o #f) r))"));
  T52 = VARREF_OR(YevalStypistYsurgeryX,YPfalse);
  T53 = fun_surgeryX_52;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalStypistYsurgeryX,T51);
  lit_85 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"acts"),YPPsym((P)"r"));
  T54 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLalternativeG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_surgeryX_53 = YPfab_met(FUNCODEREF(fun_surgeryX_53),T54,LITREF(lit_74),LITREF(lit_85),sloc(265),YPsb((P)"(fun ((o <alternative>) (acts <tab>) r) (do-surgery! o (elt-or acts o #f) r))"));
  T56 = VARREF_OR(YevalStypistYsurgeryX,YPfalse);
  T57 = fun_surgeryX_53;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalStypistYsurgeryX,T55);
  VARSET(YevalStypistYcp,YPfalse);
  lit_86 = YPPsym((P)"type-exp");
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  lit_88 = YPPsym((P)"goo/user");
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStypistYtype_exp = YPfab_met(FUNCODEREF(YevalStypistYtype_exp),T58,LITREF(lit_86),LITREF(lit_87),sloc(272),YPsb((P)"(fun (x) (let ((r (runtime-environment 'goo/user)) (ast (cp x r))) (type-infer-all ast) ast))"));
  T59 = YevalStypistYtype_exp;
  VARSET(YevalStypistYtype_exp,T59);
  lit_89 = YPPsym((P)"type+opt-exp");
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStypistYtypeAopt_exp = YPfab_met(FUNCODEREF(YevalStypistYtypeAopt_exp),T60,LITREF(lit_89),LITREF(lit_90),sloc(278),YPsb((P)"(fun (x) (let ((r (runtime-environment 'goo/user)) (ast (cp x r)) (acts (type-infer-all ast))) (surgery! ast acts r)))"));
  T61 = YevalStypistYtypeAopt_exp;
  VARSET(YevalStypistYtypeAopt_exp,T61);
  lit_91 = YPPsym((P)"dynamic-compute-program");
  lit_92 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T62 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_dynamic_compute_program_56 = YPfab_met(FUNCODEREF(fun_dynamic_compute_program_56),T62,LITREF(lit_91),LITREF(lit_92),sloc(288),YPsb((P)"(fun (exp env) (def ast (objectify-with-subtransaction exp env #t #f)) (def ana (analyze-calls ast env)) (def box (insert-box! ana)) (def lft (lift! box)) lft)"));
  T64 = VARREF_OR(YevalStypistYdynamic_compute_program,YPfalse);
  T65 = fun_dynamic_compute_program_56;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalStypistYdynamic_compute_program,T63);
  VARSET(YevalStypistYdync,YPfalse);
  lit_93 = YPPsym((P)"optimize-method");
  lit_94 = YPPlist(1,YPPsym((P)"m"));
  lit_95 = YPPsym((P)"set");
  lit_96 = YPPsym((P)"%gen-code");
  lit_97 = Ynil;
  lit_98 = YPPsym((P)"%met-code");
  T68 = YPfab_sig(YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T67 = fun_optimize_method_57 = YPfab_met(FUNCODEREF(fun_optimize_method_57),T68,LITREF(lit_93),LITREF(lit_94),sloc(299),YPsb((P)"(fun ((m <met>)) (def src (read-from-string (fun-src m))) (def srcl (fun-src-loc m)) (def mod (as <sym> (src-loc-file srcl))) (def r (runtime-environment mod)) (def patch (quasiquote (set (%gen-code (unquote m)) (%met-code (unquote src))))) (def ast (dynamic-compute-program patch r)) (def acts (type-infer-all ast)) (def oast (surgery! ast acts r)) (dync oast r) oast)"));
  T71 = VARREF_OR(YevalStypistYoptimize_method,YPfalse);
  T72 = fun_optimize_method_57;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  T69 = VARSET(YevalStypistYoptimize_method,T70);
  T66 = T69;
  return T66;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_evalSast_eval;
extern MODULE_INFO module_info_evalSoptimize;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
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
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_evalSdependency;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooStypes},
  {&module_info_evalSast},
  {&module_info_evalSast_linearize},
  {&module_info_evalSast_eval},
  {&module_info_evalSoptimize},
  {&module_info_gooSioSread},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"div", &module_info_gooSmath, NULL},
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
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
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
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
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
  {"%cb", &module_info_gooSboot, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
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
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
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
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
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
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
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
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
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
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
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
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
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
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
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
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
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
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
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
  {"<sequential>", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"application-loop", &module_info_evalSast, NULL},
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
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
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
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"analyze-calls", &module_info_evalSoptimize, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"potentially-joint?", &module_info_evalSoptimize, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"unconstrained-type?", &module_info_evalSoptimize, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"sorted-applicable-methods-using-types", &module_info_evalSoptimize, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
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
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
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
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
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
  {"<col>", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"type-equiv?", &module_info_evalSoptimize, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
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
  {"%define-method", &module_info_gooSfun, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
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
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
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
  {"opts-location", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
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
  {"<local-reference>", &module_info_evalSast, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
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
  {"mod+", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
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
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"%snul", &module_info_gooSboot, NULL},
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
  {"app-args", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
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
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
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
  {"locals-body", &module_info_evalSast, NULL},
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
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
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
  {"<know-call>", CVAR, &YevalStypistYLknow_callG},
  {"<fold-call>", CVAR, &YevalStypistYLfold_callG},
  {"dynamic-compute-program", CVAR, &YevalStypistYdynamic_compute_program},
  {"act-val", CVAR, &YevalStypistYact_val},
  {"<fold>", CVAR, &YevalStypistYLfoldG},
  {"known-call?", CVAR, &YevalStypistYknown_callQ},
  {"do-type-infer", CVAR, &YevalStypistYdo_type_infer},
  {"optimize-method", CVAR, &YevalStypistYoptimize_method},
  {"type-union", CVAR, &YevalStypistYtype_union},
  {"type-value", CVAR, &YevalStypistYtype_value},
  {"<dispatch>", CVAR, &YevalStypistYLdispatchG},
  {"type+opt-exp", CVAR, &YevalStypistYtypeAopt_exp},
  {"---main-1---", PVAR, NULL},
  {"arity-check?", CVAR, &YevalStypistYarity_checkQ},
  {"<fold-if>", CVAR, &YevalStypistYLfold_ifG},
  {"cp", CVAR, &YevalStypistYcp},
  {"<act>", CVAR, &YevalStypistYLactG},
  {"dync", CVAR, &YevalStypistYdync},
  {"type-infer-check", CVAR, &YevalStypistYtype_infer_check},
  {"do-surgery!", CVAR, &YevalStypistYdo_surgeryX},
  {"act-sorted", CVAR, &YevalStypistYact_sorted},
  {"---main-0---", PVAR, NULL},
  {"type-infer-all", CVAR, &YevalStypistYtype_infer_all},
  {"type-infer-binding", CVAR, &YevalStypistYtype_infer_binding},
  {"act-test", CVAR, &YevalStypistYact_test},
  {"type-exp", CVAR, &YevalStypistYtype_exp},
  {"type-infer", CVAR, &YevalStypistYtype_infer},
  {"surgery!", CVAR, &YevalStypistYsurgeryX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"type-infer", NULL},
  {"potentially-joint?", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalStypist;
MODULE_INFO module_info_evalStypist = {
  "eval/typist",
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
extern void load_module_gooStypes (void);
extern void load_module_evalSast (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_evalSast_eval (void);
extern void load_module_evalSoptimize (void);
extern void load_module_gooSioSread (void);

/* EXPRESSION: */

extern void load_module_evalStypist (void);

void load_module_evalStypist (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooStypes();
  load_module_evalSast();
  load_module_evalSast_linearize();
  load_module_evalSast_eval();
  load_module_evalSoptimize();
  load_module_gooSioSread();

  (P)YevalStypistY___main_0___();
  (P)YevalStypistY___main_1___();

}

/* END OF GENERATED CODE. */
