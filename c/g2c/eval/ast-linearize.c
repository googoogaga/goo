/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-linearize");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-linearize */

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
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
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
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
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
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
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
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
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
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
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
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
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
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yprops_of,"goo/boot","props-of");
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
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
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
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
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
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
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
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
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
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
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
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
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
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
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
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
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
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
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
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YOmemQ,"goo/boot","@mem?");
DEF(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YsubtypeQ,"goo/boot","subtype?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
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
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
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
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
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
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
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
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSast_linearizeYprogram_bindings_setter,"eval/ast-linearize","program-bindings-setter");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
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
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
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
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
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
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
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
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_23);
DEFLIT(lit_55);
DEFLIT(lit_3);
DEFLIT(lit_152);
DEFLIT(lit_147);
DEFLIT(lit_20);
DEFLIT(lit_58);
DEFLIT(lit_157);
DEFLIT(lit_26);
DEFLIT(lit_88);
DEFLIT(lit_13);
DEFLIT(lit_67);
DEFLIT(lit_116);
DEFLIT(lit_167);
DEFLIT(lit_114);
DEFLIT(lit_24);
DEFLIT(lit_126);
DEFLIT(lit_138);
DEFLIT(lit_90);
DEFLIT(lit_78);
DEFLIT(lit_40);
DEFLIT(lit_125);
DEFLIT(lit_82);
DEFLIT(lit_51);
DEFLIT(lit_104);
DEFLIT(lit_151);
DEFLIT(lit_120);
DEFLIT(lit_65);
DEFLIT(lit_139);
DEFLIT(lit_75);
DEFLIT(lit_60);
DEFLIT(lit_29);
DEFLIT(lit_118);
DEFLIT(lit_39);
DEFLIT(lit_150);
DEFLIT(lit_145);
DEFLIT(lit_117);
DEFLIT(lit_85);
DEFLIT(lit_31);
DEFLIT(lit_155);
DEFLIT(lit_109);
DEFLIT(lit_6);
DEFLIT(lit_100);
DEFLIT(lit_107);
DEFLIT(lit_69);
DEFLIT(lit_140);
DEFLIT(lit_50);
DEFLIT(lit_12);
DEFLIT(lit_108);
DEFLIT(lit_25);
DEFLIT(lit_68);
DEFLIT(lit_36);
DEFLIT(lit_128);
DEFLIT(lit_0);
DEFLIT(lit_113);
DEFLIT(lit_92);
DEFLIT(lit_133);
DEFLIT(lit_89);
DEFLIT(lit_136);
DEFLIT(lit_106);
DEFLIT(lit_34);
DEFLIT(lit_30);
DEFLIT(lit_76);
DEFLIT(lit_130);
DEFLIT(lit_160);
DEFLIT(lit_70);
DEFLIT(lit_101);
DEFLIT(lit_154);
DEFLIT(lit_41);
DEFLIT(lit_143);
DEFLIT(lit_91);
DEFLIT(lit_42);
DEFLIT(lit_141);
DEFLIT(lit_137);
DEFLIT(lit_142);
DEFLIT(lit_4);
DEFLIT(lit_156);
DEFLIT(lit_53);
DEFLIT(lit_16);
DEFLIT(lit_28);
DEFLIT(lit_102);
DEFLIT(lit_17);
DEFLIT(lit_72);
DEFLIT(lit_124);
DEFLIT(lit_93);
DEFLIT(lit_22);
DEFLIT(lit_71);
DEFLIT(lit_96);
DEFLIT(lit_123);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_59);
DEFLIT(lit_159);
DEFLIT(lit_163);
DEFLIT(lit_135);
DEFLIT(lit_27);
DEFLIT(lit_158);
DEFLIT(lit_37);
DEFLIT(lit_32);
DEFLIT(lit_105);
DEFLIT(lit_165);
DEFLIT(lit_94);
DEFLIT(lit_122);
DEFLIT(lit_99);
DEFLIT(lit_35);
DEFLIT(lit_95);
DEFLIT(lit_161);
DEFLIT(lit_15);
DEFLIT(lit_162);
DEFLIT(lit_21);
DEFLIT(lit_127);
DEFLIT(lit_62);
DEFLIT(lit_54);
DEFLIT(lit_84);
DEFLIT(lit_112);
DEFLIT(lit_19);
DEFLIT(lit_79);
DEFLIT(lit_2);
DEFLIT(lit_74);
DEFLIT(lit_80);
DEFLIT(lit_46);
DEFLIT(lit_153);
DEFLIT(lit_57);
DEFLIT(lit_129);
DEFLIT(lit_77);
DEFLIT(lit_148);
DEFLIT(lit_111);
DEFLIT(lit_86);
DEFLIT(lit_134);
DEFLIT(lit_97);
DEFLIT(lit_44);
DEFLIT(lit_10);
DEFLIT(lit_14);
DEFLIT(lit_38);
DEFLIT(lit_64);
DEFLIT(lit_56);
DEFLIT(lit_45);
DEFLIT(lit_81);
DEFLIT(lit_164);
DEFLIT(lit_110);
DEFLIT(lit_131);
DEFLIT(lit_33);
DEFLIT(lit_144);
DEFLIT(lit_47);
DEFLIT(lit_8);
DEFLIT(lit_119);
DEFLIT(lit_18);
DEFLIT(lit_115);
DEFLIT(lit_48);
DEFLIT(lit_83);
DEFLIT(lit_49);
DEFLIT(lit_66);
DEFLIT(lit_9);
DEFLIT(lit_146);
DEFLIT(lit_103);
DEFLIT(lit_166);
DEFLIT(lit_52);
DEFLIT(lit_149);
DEFLIT(lit_121);
DEFLIT(lit_87);
DEFLIT(lit_61);
DEFLIT(lit_132);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_43);
DEFLIT(lit_73);
DEFLIT(lit_63);
DEFLIT(lit_98);

/* FUNCTIONS: */

LOCFOR(fun_box_reference_0);
LOCFOR(fun_box_reference_setter_1);
LOCFOR(fun_box_reference_2);
LOCFOR(fun_box_reference_setter_3);
LOCFOR(fun_box_form_4);
LOCFOR(fun_box_form_setter_5);
LOCFOR(fun_box_reference_6);
LOCFOR(fun_box_reference_setter_7);
LOCFOR(fun_insert_boxX_8);
LOCFOR(fun_insert_boxX_9);
LOCFOR(fun_insert_boxX_10);
LOCFOR(fun_insert_boxX_11);
LOCFOR(fun_insert_boxX_12);
LOCFOR(fun_insert_boxX_13);
LOCFOR(fun_insert_boxX_14);
LOCFOR(fun_boxify_mutable_bindings_15);
LOCFOR(fun_reference_offset_16);
LOCFOR(fun_reference_offset_setter_17);
LOCFOR(fun_reference_selfQ_18);
LOCFOR(fun_reference_selfQ_setter_19);
LOCFOR(fun_liftX_20);
LOCFOR(fun_lift_proceduresX_21);
LOCFOR(fun_lift_proceduresX_22);
LOCFOR(fun_adjoin_free_bindingX_23);
LOCFOR(fun_lift_proceduresX_24);
LOCFOR(fun_lift_proceduresX_25);
LOCFOR(fun_lift_proceduresX_26);
LOCFOR(fun_lift_proceduresX_27);
LOCFOR(fun_lift_proceduresX_28);
LOCFOR(fun_program_form_29);
LOCFOR(fun_program_form_setter_30);
LOCFOR(fun_program_quotations_31);
LOCFOR(fun_program_quotations_setter_32);
LOCFOR(fun_33);
LOCFOR(fun_program_bindings_34);
LOCFOR(fun_program_bindings_setter_35);
LOCFOR(fun_36);
LOCFOR(fun_program_definitions_37);
LOCFOR(fun_program_definitions_setter_38);
LOCFOR(fun_39);
LOCFOR(fun_form_program_40);
LOCFOR(fun_form_program_setter_41);
LOCFOR(fun_form_quotations_42);
LOCFOR(fun_form_quotations_setter_43);
LOCFOR(fun_44);
LOCFOR(fun_form_definitions_45);
LOCFOR(fun_form_definitions_setter_46);
LOCFOR(fun_47);
LOCFOR(fun_closure_creation_index_48);
LOCFOR(fun_closure_creation_index_setter_49);
LOCFOR(fun_closure_creation_free_50);
LOCFOR(fun_closure_creation_free_setter_51);
LOCFOR(fun_flatten_seqs_52);
LOCFOR(fun_flatten_seqs_53);
LOCFOR(fun_54);
LOCFOR(fun_as_top_level_forms_55);
LOCFOR(fun_56);
LOCFOR(fun_extract_thingsX_57);
LOCFOR(fun_extractX_58);
LOCFOR(fun_extractX_59);
LOCFOR(fun_extractX_60);
LOCFOR(fun_61);
LOCFOR(fun_extractX_62);
LOCFOR(fun_extractX_63);
LOCFOR(fun_adjoin_definitionX_64);
LOCFOR(fun_split_program_65);
LOCFOR(fun_split_program_66);
LOCFOR(fun_closurize_mainX_67);
LOCFOR(fun_assoc_key_68);
LOCFOR(fun_assoc_key_setter_69);
LOCFOR(fun_assoc_value_70);
LOCFOR(fun_assoc_value_setter_71);
FUNFOR(YevalSast_linearizeYassoc);
LOCFOR(fun_assocq_73);
LOCFOR(fun_74);
LOCFOR(fun_gather_temporariesX_75);
LOCFOR(fun_collect_temporariesX_76);
LOCFOR(fun_collect_temporariesX_77);
FUNFOR(YevalSast_linearizeYprepend_renamings);
LOCFOR(fun_collect_temporariesX_79);
LOCFOR(fun_80);
LOCFOR(fun_collect_temporariesX_81);
LOCFOR(fun_collect_temporariesX_82);
LOCFOR(fun_adjoin_temporary_variablesX_83);
LOCFOR(fun_binding_index_84);
LOCFOR(fun_binding_index_setter_85);
LOCFOR(fun_new_renamed_binding_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_register_allocateX_90);
FUNFOR(YevalSast_linearizeYallocate_register);
LOCFOR(fun_collect_registersX_92);
LOCFOR(fun_collect_registersX_93);
LOCFOR(fun_collect_registersX_94);
LOCFOR(fun_95);
LOCFOR(fun_collect_registersX_96);
LOCFOR(fun_collect_registersX_97);
LOCFOR(fun_collect_registersX_98);
LOCFOR(fun_collect_registersX_99);
LOCFOR(fun_collect_registersX_100);
LOCFOR(fun_collect_registersX_101);
extern P YevalSast_linearizeY___main_0___ ();
extern P YevalSast_linearizeY___main_1___ ();
extern P YevalSast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_box_reference_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_box_reference_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_box_reference_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_box_reference_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_box_form_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_box_form_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_box_reference_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_box_reference_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_insert_boxX_8) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_insert_boxX_9) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),o_);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_insert_boxX_10) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
    T2 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_insert_boxX_11) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),T1,VARREF(YevalSast_linearizeYbox_form),T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_insert_boxX_12) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_insert_boxX_13) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_insert_boxX_14) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_boxify_mutable_bindings_15) {
  P form_,bindings_;
  P creatorF5724;
  P bindingF5723;
  P bindingsF5722;
  P resF5721;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
  resF5721 = Ynil;
  bindingsF5722 = bindings_;
  LOOP_271: {
    P a271_0,a271_1;
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5722);
    if (T2 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),form_,resF5721);
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),T4);
      T1 = T3;
    } else {
      T14 = CALL1(1,VARREF(Yhead),bindingsF5722);
      bindingF5723 = T14;
      T6 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF5723);
      if (T6 != YPfalse) {
        T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF5723);
        T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T11);
        creatorF5724 = T10;
        T8 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF5724,resF5721);
        T9 = CALL1(1,VARREF(Ytail),bindingsF5722);
        a271_0 = T8;
        a271_1 = T9;
        resF5721 = a271_0;
        bindingsF5722 = a271_1;
        goto LOOP_271;
        T5 = T7;
      } else {
        T13 = CALL1(1,VARREF(Ytail),bindingsF5722);
        a271_0 = resF5721;
        a271_1 = T13;
        resF5721 = a271_0;
        bindingsF5722 = a271_1;
        goto LOOP_271;
        T5 = T12;
      }
      T1 = T5;
    }
  }
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_offset_16) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_offset_setter_17) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_selfQ_18) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_selfQ_setter_19) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_liftX_20) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_lift_proceduresX_21) {
  P o_,flat_fun_,bindings_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_lift_proceduresX_22) {
  P o_,flat_fun_,bindings_;
  P offsetF5726;
  P bF5725;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T7 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF5725 = T7;
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF5725);
  if (T1 != YPfalse) {
    T0 = o_;
  } else {
    T6 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF5726 = T6;
    CALL2(1,VARREF(YevalSastYbinding_closed_overQ_setter),YPtrue,bF5725);
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T5 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,T5);
    T2 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF5725,VARREF(YevalSast_linearizeYreference_offset),offsetF5726,VARREF(YevalSast_linearizeYreference_selfQ),T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_adjoin_free_bindingX_23) {
  P flat_fun_,ref_;
  P tailF5731;
  P freeTF5730;
  P new_envF5729;
  P freeTF5728;
  P iF5727;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
  check_type(YPint((P)0),VARREF(YLintG));
  iF5727 = YPint((P)0);
  T21 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  freeTF5728 = T21;
  LOOP_272: {
    P a272_0,a272_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),freeTF5728);
    if (T1 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfree_environmentG));
      T11 = CALL2(1,VARREF(YevalSastYfree_environment),ref_,T12);
      new_envF5729 = T11;
      T3 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
      T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),T3);
      if (T2 != YPfalse) {
        T4 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF5729,flat_fun_);
      } else {
        T10 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
        freeTF5730 = T10;
        LOOP_273: {
          P a273_0;
          T9 = CALL1(1,VARREF(Ytail),freeTF5730);
          tailF5731 = T9;
          T6 = CALL1(1,VARREF(YgooSmacrosYnulQ),tailF5731);
          if (T6 != YPfalse) {
            T7 = CALL2(1,VARREF(Ytail_setter),new_envF5729,freeTF5730);
            T5 = T7;
          } else {
            a273_0 = tailF5731;
            freeTF5730 = a273_0;
            goto LOOP_273;
            T5 = T8;
          }
        }
      }
      T0 = iF5727;
    } else {
      T15 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
      T17 = CALL1(1,VARREF(Yhead),freeTF5728);
      T16 = CALL1(1,VARREF(YevalSastYreference_binding),T17);
      T14 = CALL2(1,VARREF(YgooSmacrosYEE),T15,T16);
      if (T14 != YPfalse) {
        T13 = iF5727;
      } else {
        T19 = CALL2(1,VARREF(YgooSmathYA),iF5727,YPint((P)1));
        T20 = CALL1(1,VARREF(Ytail),freeTF5728);
        a272_0 = T19;
        a272_1 = T20;
        iF5727 = a272_0;
        freeTF5728 = a272_1;
        goto LOOP_272;
        T13 = T18;
      }
      T0 = T13;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_lift_proceduresX_24) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF5732;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,bindings_);
  new_bindingsF5732 = T4;
  T3 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T3,flat_fun_,new_bindingsF5732);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_lift_proceduresX_25) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF5733;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T6 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T5 = CALL2(1,VARREF(YgooSmacrosYcat),T6,bindings_);
  new_bindingsF5733 = T5;
  T1 = CALL3(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF5733);
  T2 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T4,flat_fun_,new_bindingsF5733);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_lift_proceduresX_26) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_lift_proceduresX_27) {
  P o_,flat_fun_,bindings_;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_lift_proceduresX_28) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_program_form_29) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_form_setter_30) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_quotations_31) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_quotations_setter_32) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_33) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_bindings_34) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_bindings_setter_35) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_36) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_definitions_37) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_program_definitions_setter_38) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_39) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_form_program_40) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_form_program_setter_41) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_form_quotations_42) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_form_quotations_setter_43) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_44) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_form_definitions_45) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_form_definitions_setter_46) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_47) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_closure_creation_index_48) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_closure_creation_index_setter_49) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_closure_creation_free_50) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_closure_creation_free_setter_51) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_flatten_seqs_52) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_flatten_seqs_53) {
  P o_;
  P rF5737;
  P ssF5736;
  P rF5735;
  P sF5734;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  sF5734 = o_;
  rF5735 = Ynil;
  LOOP_274: {
    P a274_0,a274_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),sF5734);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),rF5735);
      T0 = T2;
    } else {
      T12 = CALL1(1,VARREF(Yhead),sF5734);
      T11 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T12);
      ssF5736 = T11;
      rF5737 = rF5735;
      LOOP_275: {
        P a275_0,a275_1;
        T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),ssF5736);
        if (T4 != YPfalse) {
          T6 = CALL1(1,VARREF(Ytail),sF5734);
          a274_0 = T6;
          a274_1 = rF5737;
          sF5734 = a274_0;
          rF5735 = a274_1;
          goto LOOP_274;
          T3 = T5;
        } else {
          T8 = CALL1(1,VARREF(Ytail),ssF5736);
          T10 = CALL1(1,VARREF(Yhead),ssF5736);
          T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,rF5737);
          a275_0 = T8;
          a275_1 = T9;
          ssF5736 = a275_0;
          rF5737 = a275_1;
          goto LOOP_275;
          T3 = T7;
        }
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_54) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_top_level_forms_55) {
  P programs_;
  P T0,T1;
LINK_STACK();
  ARG(programs_, 0);
  T1 = fun_54;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_56) {
  P form_;
  P T0;
LINK_STACK();
  ARG(form_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_extract_thingsX_57) {
  P o_;
  P resultF5739;
  P formsF5738;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  T5 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T5);
  formsF5738 = T4;
  T3 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF5739 = T3;
  T2 = FUNFAB(fun_56,1,resultF5739);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,formsF5738);
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),T1);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T0,resultF5739);
UNLINK_STACK();
  QRET(resultF5739);
}

LOCCODEDEF(fun_extractX_58) {
  P o_,form_,result_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_extractX_59) {
  P o_,form_,result_;
  P qbF5748;
  P probeF5747;
  P indexF5746;
  P qbTF5745;
  P tmpF5744;
  P tmpF5743;
  P tmpF5742;
  P tmpF5741;
  P valueF5740;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T19 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF5740 = T19;
  T9 = CALL2(1,VARREF(YgooSmacrosYEE),valueF5740,YPfalse);
  tmpF5741 = T9;
  if (tmpF5741 != YPfalse) {
    T1 = tmpF5741;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),valueF5740,YPtrue);
    tmpF5742 = T8;
    if (tmpF5742 != YPfalse) {
      T2 = tmpF5742;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF5740,Ynil);
      tmpF5743 = T7;
      if (tmpF5743 != YPfalse) {
        T3 = tmpF5743;
      } else {
        T6 = CALL2(1,VARREF(YisaQ),valueF5740,VARREF(YLintG));
        tmpF5744 = T6;
        if (tmpF5744 != YPfalse) {
          T4 = tmpF5744;
        } else {
          T5 = CALL2(1,VARREF(YisaQ),valueF5740,VARREF(YLchrG));
          T4 = T5;
        }
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T0 = o_;
  } else {
    T18 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),result_);
    qbTF5745 = T18;
    T17 = CALL1(1,VARREF(YgooStypesYlen),qbTF5745);
    indexF5746 = T17;
    T16 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF5745,valueF5740,YPfalse);
    probeF5747 = T16;
    if (probeF5747 != YPfalse) {
      T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF5747);
      T10 = T11;
    } else {
      T15 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_102),VARREF(YevalSmoduleYbinding_name),indexF5746,VARREF(YevalSmoduleYbinding_info),valueF5740);
      qbF5748 = T15;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF5748,qbTF5745,valueF5740);
      T13 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),form_);
      T12 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T13,qbF5748);
      CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T12,form_);
      T14 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF5748);
      T10 = T14;
    }
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_extractX_60) {
  P o_,form_,result_;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_61) {
  P binding_;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_type),binding_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(YevalSmoduleYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_extractX_62) {
  P o_,form_,result_;
  P indexF5751;
  P free_bindingsF5750;
  P freeF5749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_61,2,form_,result_);
  T7 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
  T11 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  freeF5749 = T11;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF5749);
  free_bindingsF5750 = T10;
  T9 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF5751 = T9;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF5751,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF5750,o_);
  T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF5751,VARREF(YevalSast_linearizeYclosure_creation_free),freeF5749);
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_extractX_63) {
  P o_,form_,result_;
  P primF5752;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF5752 = T6;
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),primF5752);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,primF5752);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T2 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T3,primF5752);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T2,result_);
  T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T5,form_,result_);
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_adjoin_definitionX_64) {
  P form_,result_,x_;
  P new_indexF5753;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  new_indexF5753 = T4;
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T1,x_);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T0,result_);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),form_);
  T2 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T3,x_);
  CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T2,form_);
UNLINK_STACK();
  QRET(new_indexF5753);
}

LOCCODEDEF(fun_split_program_65) {
  P o_,max_count_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_split_program_66) {
  P o_,max_count_;
  P countF5758;
  P esF5757;
  P resF5756;
  P sF5755;
  P formsF5754;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
  formsF5754 = Ynil;
  sF5755 = o_;
  LOOP_276: {
    P a276_0,a276_1;
    resF5756 = Ynil;
    esF5757 = sF5755;
    countF5758 = YPint((P)0);
    LOOP_277: {
      P a277_0,a277_1,a277_2;
      T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),esF5757);
      if (T1 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooSmacrosYrevX),resF5756);
        T4 = CALL1(1,VARREF(YevalSastYsequentialize),T5);
        T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,formsF5754);
        T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
        T0 = T2;
      } else {
        T7 = CALL2(1,VARREF(YgooSlogYE),countF5758,max_count_);
        if (T7 != YPfalse) {
          T11 = CALL1(1,VARREF(YgooSmacrosYrevX),resF5756);
          T10 = CALL1(1,VARREF(YevalSastYsequentialize),T11);
          T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,formsF5754);
          a276_0 = T9;
          a276_1 = esF5757;
          formsF5754 = a276_0;
          sF5755 = a276_1;
          goto LOOP_276;
          T6 = T8;
        } else {
          if (YPtrue != YPfalse) {
            T15 = CALL1(1,VARREF(Yhead),esF5757);
            T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,resF5756);
            T16 = CALL1(1,VARREF(Ytail),esF5757);
            T17 = CALL2(1,VARREF(YgooSmathYA),countF5758,YPint((P)1));
            a277_0 = T14;
            a277_1 = T16;
            a277_2 = T17;
            resF5756 = a277_0;
            esF5757 = a277_1;
            countF5758 = a277_2;
            goto LOOP_277;
            T12 = T13;
          } else {
            T12 = YPfalse;
          }
          T6 = T12;
        }
        T0 = T6;
      }
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_closurize_mainX_67) {
  P o_,r_,max_count_;
  P callF5768;
  P defnF5767;
  P bindingF5766;
  P nameF5765;
  P formsF5764;
  P iF5763;
  P defnsF5762;
  P callsF5761;
  P base_indexF5760;
  P formsF5759;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
  T24 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T23 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T24,max_count_);
  formsF5759 = T23;
  T22 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T21 = CALL1(1,VARREF(YgooStypesYlen),T22);
  base_indexF5760 = T21;
  callsF5761 = Ynil;
  T20 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  defnsF5762 = T20;
  iF5763 = YPint((P)0);
  formsF5764 = formsF5759;
  LOOP_278: {
    P a278_0,a278_1,a278_2,a278_3;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),formsF5764);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),defnsF5762);
      CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T2,o_);
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),callsF5761);
      T4 = CALL1(1,VARREF(YevalSastYsequentialize),T5);
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),defnsF5762);
      T3 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),T4,VARREF(YevalSast_linearizeYform_definitions),T6);
      CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T3,o_);
      T0 = o_;
    } else {
      T19 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_114),iF5763,LITREF(lit_115));
      nameF5765 = T19;
      T18 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF5765,YPfalse,LITREF(lit_116));
      bindingF5766 = T18;
      T15 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF5765,YPint((P)4));
      T16 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,r_);
      T17 = CALL1(1,VARREF(Yhead),formsF5764);
      T14 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF5766,VARREF(YevalSastYfunction_debug_name),T15,VARREF(YevalSastYfunction_signature),T16,VARREF(YevalSastYfunction_body),T17);
      defnF5767 = T14;
      T13 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLargumentsG));
      T12 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF5766,VARREF(YevalSastYapplication_arguments),T13,VARREF(YevalSastYapplication_tailQ),YPfalse);
      callF5768 = T12;
      T8 = CALL2(1,VARREF(YgooSmacrosYpair),callF5768,callsF5761);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),defnF5767,defnsF5762);
      T10 = CALL2(1,VARREF(YgooSmathYA),iF5763,YPint((P)1));
      T11 = CALL1(1,VARREF(Ytail),formsF5764);
      a278_0 = T8;
      a278_1 = T9;
      a278_2 = T10;
      a278_3 = T11;
      callsF5761 = a278_0;
      defnsF5762 = a278_1;
      iF5763 = a278_2;
      formsF5764 = a278_3;
      goto LOOP_278;
      T0 = T7;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_assoc_key_68) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assoc_key_setter_69) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assoc_value_70) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assoc_value_setter_71) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYassoc) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),x_,VARREF(YevalSast_linearizeYassoc_value),y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_assocq_73) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YevalSast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_74) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gather_temporariesX_75) {
  P o_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T1 = fun_74;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_collect_temporariesX_76) {
  P o_,flat_fun_,r_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_collect_temporariesX_77) {
  P o_,flat_fun_,r_;
  P bF5770;
  P bindingF5769;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T4 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF5769 = T4;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF5769,r_);
  bF5770 = T3;
  if (bF5770 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF5770);
    T1 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),T2);
    T0 = T1;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYprepend_renamings) {
  P x_,y_,r_;
  P yF5773;
  P xF5772;
  P zF5771;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
  zF5771 = r_;
  xF5772 = x_;
  yF5773 = y_;
  LOOP_279: {
    P a279_0,a279_1,a279_2;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF5772);
    if (T1 != YPfalse) {
      T0 = zF5771;
    } else {
      T5 = CALL1(1,VARREF(Yhead),xF5772);
      T6 = CALL1(1,VARREF(Yhead),yF5773);
      T4 = CALL2(1,VARREF(YevalSast_linearizeYassoc),T5,T6);
      T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,zF5771);
      T7 = CALL1(1,VARREF(Ytail),xF5772);
      T8 = CALL1(1,VARREF(Ytail),yF5773);
      a279_0 = T3;
      a279_1 = T7;
      a279_2 = T8;
      zF5771 = a279_0;
      xF5772 = a279_1;
      yF5773 = a279_2;
      goto LOOP_279;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_collect_temporariesX_79) {
  P o_,flat_fun_,r_;
  P new_rF5775;
  P new_bindingsF5774;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T7);
  new_bindingsF5774 = T6;
  T5 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF5774,r_);
  new_rF5775 = T4;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF5774);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF5774,o_);
  T3 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T3,flat_fun_,new_rF5775);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_80) {
  P b_;
  P nbF5776;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL2(1,VARREF(YevalSast_linearizeYassocq),b_,FREEREF(0));
  nbF5776 = T2;
  if (nbF5776 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),nbF5776);
    T0 = T1;
  } else {
    T0 = b_;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_collect_temporariesX_81) {
  P o_,flat_fun_,r_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T1 = FUNFAB(fun_80,1,r_);
  T2 = CALL1(1,VARREF(YevalSastYloop_bindings),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSastYloop_bindings_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYloop_body),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T4,flat_fun_,r_);
  CALL2(1,VARREF(YevalSastYloop_body_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_collect_temporariesX_82) {
  P o_,flat_fun_,r_;
  P new_rF5778;
  P new_bindingsF5777;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T8 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T8);
  new_bindingsF5777 = T7;
  T6 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T6,new_bindingsF5777,r_);
  new_rF5778 = T5;
  T1 = CALL3(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF5778);
  T2 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T0,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF5777);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF5777,o_);
  T4 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T4,flat_fun_,new_rF5778);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_adjoin_temporary_variablesX_83) {
  P flat_fun_,new_bindings_;
  P bindingsF5780;
  P tempsF5779;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
  T12 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  tempsF5779 = T12;
  bindingsF5780 = new_bindings_;
  LOOP_280: {
    P a280_0,a280_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5780);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YevalSastYfunction_temporaries_setter),tempsF5779,flat_fun_);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(Yhead),bindingsF5780);
      T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),tempsF5779,T5);
      if (T4 != YPfalse) {
        T7 = CALL1(1,VARREF(Ytail),bindingsF5780);
        a280_0 = tempsF5779;
        a280_1 = T7;
        tempsF5779 = a280_0;
        bindingsF5780 = a280_1;
        goto LOOP_280;
        T3 = T6;
      } else {
        T10 = CALL1(1,VARREF(Yhead),bindingsF5780);
        T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,tempsF5779);
        T11 = CALL1(1,VARREF(Ytail),bindingsF5780);
        a280_0 = T9;
        a280_1 = T11;
        tempsF5779 = a280_0;
        bindingsF5780 = a280_1;
        goto LOOP_280;
        T3 = T8;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_index_84) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_index_setter_85) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_new_renamed_binding_86) {
  P binding_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  DYNSET(YevalSast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YevalSmoduleYbinding_type),binding_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),binding_);
  T5 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSmoduleYbinding_name),T2,VARREF(YevalSmoduleYbinding_type),T3,VARREF(YevalSastYbinding_dynamic_extentQ),T4,VARREF(YevalSastYbinding_closed_overQ),T5,VARREF(YevalSastYbinding_index),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_87) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_88) {
  P T0,T1,T2;
LINK_STACK();
  VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_87;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_89) {
  P T0;
LINK_STACK();
  T0 = VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_register_allocateX_90) {
  P o_,register_passiveQ_;
  P x_1960F5781;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
  x_1960F5781 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_88,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_89,1,x_1960F5781);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,f_,valQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  if (valQ_ != YPfalse) {
    if (f_ != YPfalse) {
      T4 = CALL1(1,VARREF(YevalSastYprogram_register),o_);
      T3 = CALL1(1,VARREF(Ynot),T4);
      T2 = T3;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYfunction_registers),f_);
    T5 = CALL1(1,VARREF(YgooStypesYlen),T6);
    CALL2(1,VARREF(YevalSastYprogram_register_setter),T5,o_);
    T8 = CALL1(1,VARREF(YevalSastYfunction_registers),f_);
    T7 = CALL2(1,VARREF(YgooScolsScolxYaddX),T8,o_);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_collect_registersX_92) {
  P o_,f_,valQ_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,f_,valQ_);
  T0 = CALL4(1,VARREF(YevalSastYast_walk),VARREF(YevalSast_linearizeYcollect_registersX),o_,f_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_collect_registersX_93) {
  P o_,f_,valQ_;
  P next_xF5783;
  P xF5782;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  xF5782 = o_;
  LOOP_281: {
    P a281_0;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF5782);
    if (T1 != YPfalse) {
      T0 = o_;
    } else {
      T6 = CALL1(1,VARREF(Ytail),xF5782);
      next_xF5783 = T6;
      T2 = CALL1(1,VARREF(Yhead),xF5782);
      if (valQ_ != YPfalse) {
        T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),next_xF5783);
        T3 = T4;
      } else {
        T3 = YPfalse;
      }
      CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,f_,T3);
      a281_0 = next_xF5783;
      xF5782 = a281_0;
      goto LOOP_281;
      T0 = T5;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_collect_registersX_94) {
  P o_,f_,valQ_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  if (VARREF(YevalSast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,f_,valQ_);
  } else {
  }
  T1 = CALL4(1,VARREF(YevalSastYast_walk),VARREF(YevalSast_linearizeYcollect_registersX),o_,f_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_95) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_collect_registersX_96) {
  P o_,f_,valQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,f_,valQ_);
  T0 = FUNFAB(fun_95,2,f_,valQ_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYform_program),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T3,f_,valQ_);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_collect_registersX_97) {
  P o_,f_,valQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,f_,valQ_);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,f_,YPtrue);
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T1,o_,YPtrue);
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T3,o_,YPtrue);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_collect_registersX_98) {
  P o_,f_,valQ_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T1,o_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_collect_registersX_99) {
  P o_,f_,valQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  T0 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,f_,YPtrue);
  T2 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,f_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_collect_registersX_100) {
  P o_,f_,valQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  T0 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,f_,YPtrue);
  T2 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,f_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_collect_registersX_101) {
  P o_,f_,valQ_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  T1 = CALL1(1,VARREF(YevalSastYloop_body),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T1,f_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_linearizeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154;
DEFCREGS();
  lit_0 = YPPsym((P)"<box-read>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YevalSast_linearizeYLbox_readG,T0);
  lit_1 = YPPsym((P)"box-reference");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_0 = YPfab_met(FUNCODEREF(fun_box_reference_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(11),YPsb((P)"(fun ((_x <box-read>)) (prop-value _x box-reference))"));
  T4 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T5 = fun_box_reference_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSast_linearizeYbox_reference,T3);
  lit_3 = YPPsym((P)"box-reference-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_1 = YPfab_met(FUNCODEREF(fun_box_reference_setter_1),T6,LITREF(lit_3),LITREF(lit_4),sloc(11),YPsb((P)"(fun ((_z <any>) (_x <box-read>)) (prop-value-setter _z _x box-reference))"));
  T8 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T9 = fun_box_reference_setter_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSast_linearizeYbox_reference_setter,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<box-write>");
  T11 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_5),T11);
  VARSET(YevalSast_linearizeYLbox_writeG,T10);
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_2 = YPfab_met(FUNCODEREF(fun_box_reference_2),T12,LITREF(lit_1),LITREF(lit_6),sloc(14),YPsb((P)"(fun ((_x <box-write>)) (prop-value _x box-reference))"));
  T14 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T15 = fun_box_reference_2;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSast_linearizeYbox_reference,T13);
  lit_7 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_3 = YPfab_met(FUNCODEREF(fun_box_reference_setter_3),T16,LITREF(lit_3),LITREF(lit_7),sloc(14),YPsb((P)"(fun ((_z <any>) (_x <box-write>)) (prop-value-setter _z _x box-reference))"));
  T18 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T19 = fun_box_reference_setter_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSast_linearizeYbox_reference_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_8 = YPPsym((P)"box-form");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_4 = YPfab_met(FUNCODEREF(fun_box_form_4),T20,LITREF(lit_8),LITREF(lit_9),sloc(15),YPsb((P)"(fun ((_x <box-write>)) (prop-value _x box-form))"));
  T22 = VARREF_OR(YevalSast_linearizeYbox_form,YPfalse);
  T23 = fun_box_form_4;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSast_linearizeYbox_form,T21);
  lit_10 = YPPsym((P)"box-form-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_5 = YPfab_met(FUNCODEREF(fun_box_form_setter_5),T24,LITREF(lit_10),LITREF(lit_11),sloc(15),YPsb((P)"(fun ((_z <any>) (_x <box-write>)) (prop-value-setter _z _x box-form))"));
  T26 = VARREF_OR(YevalSast_linearizeYbox_form_setter,YPfalse);
  T27 = fun_box_form_setter_5;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSast_linearizeYbox_form_setter,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_form),VARREF(YevalSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"<box-creation>");
  T29 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_12),T29);
  VARSET(YevalSast_linearizeYLbox_creationG,T28);
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_6 = YPfab_met(FUNCODEREF(fun_box_reference_6),T30,LITREF(lit_1),LITREF(lit_13),sloc(18),YPsb((P)"(fun ((_x <box-creation>)) (prop-value _x box-reference))"));
  T32 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T33 = fun_box_reference_6;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSast_linearizeYbox_reference,T31);
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_7 = YPfab_met(FUNCODEREF(fun_box_reference_setter_7),T34,LITREF(lit_3),LITREF(lit_14),sloc(18),YPsb((P)"(fun ((_z <any>) (_x <box-creation>)) (prop-value-setter _z _x box-reference))"));
  T36 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T37 = fun_box_reference_setter_7;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSast_linearizeYbox_reference_setter,T35);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"insert-box!");
  lit_16 = YPPlist(1,YPPsym((P)"o"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_8 = YPfab_met(FUNCODEREF(fun_insert_boxX_8),T38,LITREF(lit_15),LITREF(lit_16),sloc(20),YPsb((P)"(fun ((o <program>)) (ast-walk! insert-box! o))"));
  T40 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T41 = fun_insert_boxX_8;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSast_linearizeYinsert_boxX,T39);
  lit_17 = YPPlist(1,YPPsym((P)"o"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_9 = YPfab_met(FUNCODEREF(fun_insert_boxX_9),T42,LITREF(lit_15),LITREF(lit_17),sloc(23),YPsb((P)"(fun ((o <local-reference>)) (if (binding-mutable? (reference-binding o)) (new <box-read> box-reference o) o))"));
  T44 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T45 = fun_insert_boxX_9;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSast_linearizeYinsert_boxX,T43);
  lit_18 = YPPlist(1,YPPsym((P)"o"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_10 = YPfab_met(FUNCODEREF(fun_insert_boxX_10),T46,LITREF(lit_15),LITREF(lit_18),sloc(29),YPsb((P)"(fun ((o <regular-application>)) (ast-walk! insert-box! o) (when (isa? (application-function o) <local-reference>) (set (reference-called-function? (application-function o)) #t)) o)"));
  T48 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T49 = fun_insert_boxX_10;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSast_linearizeYinsert_boxX,T47);
  lit_19 = YPPlist(1,YPPsym((P)"o"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_11 = YPfab_met(FUNCODEREF(fun_insert_boxX_11),T50,LITREF(lit_15),LITREF(lit_19),sloc(35),YPsb((P)"(fun ((o <local-assignment>)) (new <box-write> box-reference (assignment-reference o) box-form (insert-box! (assignment-form o))))"));
  T52 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T53 = fun_insert_boxX_11;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSast_linearizeYinsert_boxX,T51);
  lit_20 = YPPlist(1,YPPsym((P)"o"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_12 = YPfab_met(FUNCODEREF(fun_insert_boxX_12),T54,LITREF(lit_15),LITREF(lit_20),sloc(40),YPsb((P)"(fun ((o <ast-method>)) (set (function-body o) (insert-box! (boxify-mutable-bindings (function-body o) (function-bindings o)))) o)"));
  T56 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T57 = fun_insert_boxX_12;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSast_linearizeYinsert_boxX,T55);
  lit_21 = YPPlist(1,YPPsym((P)"o"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_13 = YPfab_met(FUNCODEREF(fun_insert_boxX_13),T58,LITREF(lit_15),LITREF(lit_21),sloc(46),YPsb((P)"(fun ((o <fix-let>)) (set (fix-let-arguments o) (insert-box! (fix-let-arguments o))) (set (fix-let-body o) (insert-box! (boxify-mutable-bindings (fix-let-body o) (fix-let-bindings o)))) o)"));
  T60 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T61 = fun_insert_boxX_13;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSast_linearizeYinsert_boxX,T59);
  lit_22 = YPPlist(1,YPPsym((P)"o"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_14 = YPfab_met(FUNCODEREF(fun_insert_boxX_14),T62,LITREF(lit_15),LITREF(lit_22),sloc(54),YPsb((P)"(fun ((o <locals>)) (set (locals-functions o) (map insert-box! (locals-functions o))) (set (locals-body o) (insert-box! (boxify-mutable-bindings (locals-body o) (locals-bindings o)))) o)"));
  T64 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T65 = fun_insert_boxX_14;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSast_linearizeYinsert_boxX,T63);
  lit_23 = YPPsym((P)"boxify-mutable-bindings");
  lit_24 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"bindings"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_15 = YPfab_met(FUNCODEREF(fun_boxify_mutable_bindings_15),T66,LITREF(lit_23),LITREF(lit_24),sloc(62),YPsb((P)"(fun (form (bindings <lst>)) (sequentialize (rep loop ((res '()) (bindings bindings)) (if (nul? bindings) (rev! (pair form res)) (let ((binding (head bindings))) (if (binding-mutable? binding) (let ((creator (new <box-creation> box-reference (new <local-reference> reference-binding binding)))) (loop (pair creator res) (tail bindings))) (loop res (tail bindings))))))))"));
  T68 = VARREF_OR(YevalSast_linearizeYboxify_mutable_bindings,YPfalse);
  T69 = fun_boxify_mutable_bindings_15;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSast_linearizeYboxify_mutable_bindings,T67);
  lit_25 = YPPsym((P)"<free-reference>");
  T71 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLreal_referenceG),Ynil);
  T70 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_25),T71);
  VARSET(YevalSast_linearizeYLfree_referenceG,T70);
  lit_26 = YPPsym((P)"reference-offset");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_16 = YPfab_met(FUNCODEREF(fun_reference_offset_16),T72,LITREF(lit_26),LITREF(lit_27),sloc(79),YPsb((P)"(fun ((_x <free-reference>)) (prop-value _x reference-offset))"));
  T74 = VARREF_OR(YevalSast_linearizeYreference_offset,YPfalse);
  T75 = fun_reference_offset_16;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSast_linearizeYreference_offset,T73);
  lit_28 = YPPsym((P)"reference-offset-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T76 = YPfab_sig(YPPlist(2,T77,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_17 = YPfab_met(FUNCODEREF(fun_reference_offset_setter_17),T76,LITREF(lit_28),LITREF(lit_29),sloc(79),YPsb((P)"(fun ((_z (t? <int>)) (_x <free-reference>)) (prop-value-setter _z _x reference-offset))"));
  T79 = VARREF_OR(YevalSast_linearizeYreference_offset_setter,YPfalse);
  T80 = fun_reference_offset_setter_17;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSast_linearizeYreference_offset_setter,T78);
  T81 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_offset),VARREF(YevalSast_linearizeYreference_offset_setter),T81,VARREF(YPprop_unbound_error));
  lit_30 = YPPsym((P)"reference-self?");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_18 = YPfab_met(FUNCODEREF(fun_reference_selfQ_18),T82,LITREF(lit_30),LITREF(lit_31),sloc(80),YPsb((P)"(fun ((_x <free-reference>)) (prop-value _x reference-self?))"));
  T84 = VARREF_OR(YevalSast_linearizeYreference_selfQ,YPfalse);
  T85 = fun_reference_selfQ_18;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSast_linearizeYreference_selfQ,T83);
  lit_32 = YPPsym((P)"reference-self?-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T86 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_19 = YPfab_met(FUNCODEREF(fun_reference_selfQ_setter_19),T86,LITREF(lit_32),LITREF(lit_33),sloc(80),YPsb((P)"(fun ((_z <log>) (_x <free-reference>)) (prop-value-setter _z _x reference-self?))"));
  T88 = VARREF_OR(YevalSast_linearizeYreference_selfQ_setter,YPfalse);
  T89 = fun_reference_selfQ_setter_19;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSast_linearizeYreference_selfQ_setter,T87);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_selfQ),VARREF(YevalSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_34 = YPPsym((P)"lift!");
  lit_35 = YPPlist(1,YPPsym((P)"o"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_20 = YPfab_met(FUNCODEREF(fun_liftX_20),T90,LITREF(lit_34),LITREF(lit_35),sloc(82),YPsb((P)"(fun (o) (lift-procedures! o #f '()))"));
  T92 = VARREF_OR(YevalSast_linearizeYliftX,YPfalse);
  T93 = fun_liftX_20;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSast_linearizeYliftX,T91);
  lit_36 = YPPsym((P)"lift-procedures!");
  lit_37 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T94 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_21 = YPfab_met(FUNCODEREF(fun_lift_proceduresX_21),T94,LITREF(lit_36),LITREF(lit_37),sloc(85),YPsb((P)"(fun ((o <program>) flat-fun bindings) (ast-walk! lift-procedures! o flat-fun bindings))"));
  T96 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T97 = fun_lift_proceduresX_21;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSast_linearizeYlift_proceduresX,T95);
  lit_38 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T98 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_22 = YPfab_met(FUNCODEREF(fun_lift_proceduresX_22),T98,LITREF(lit_36),LITREF(lit_38),sloc(88),YPsb((P)"(fun ((o <local-reference>) flat-fun bindings) (def b (reference-binding o)) (if (mem? bindings b) o (let ((offset (adjoin-free-binding! flat-fun o))) (set (binding-closed-over? b) #t) (new <free-reference> reference-binding b reference-offset offset reference-self? (== (reference-binding o) (function-binding flat-fun))))))"));
  T100 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T101 = fun_lift_proceduresX_22;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSast_linearizeYlift_proceduresX,T99);
  lit_39 = YPPsym((P)"adjoin-free-binding!");
  lit_40 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"ref"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_23 = YPfab_met(FUNCODEREF(fun_adjoin_free_bindingX_23),T102,LITREF(lit_39),LITREF(lit_40),sloc(100),YPsb((P)"(fun ((flat-fun <ast-method>) ref => <int>) (rep check (((i <int>) 0) (free* (function-free flat-fun))) (if (nul? free*) (let ((new-env (free-environment ref (nul <free-environment>)))) (if (nul? (function-free flat-fun)) (set (function-free flat-fun) new-env) (rep add ((free* (function-free flat-fun))) (def tail (tail free*)) (if (nul? tail) (set (tail free*) new-env) (add tail)))) i) (if (== (reference-binding ref) (reference-binding (head free*))) i (check (+ i 1) (tail free*))))))"));
  T104 = VARREF_OR(YevalSast_linearizeYadjoin_free_bindingX,YPfalse);
  T105 = fun_adjoin_free_bindingX_23;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSast_linearizeYadjoin_free_bindingX,T103);
  lit_41 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T106 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_24 = YPfab_met(FUNCODEREF(fun_lift_proceduresX_24),T106,LITREF(lit_36),LITREF(lit_41),sloc(117),YPsb((P)"(fun ((o <fix-let>) flat-fun bindings) (set (fix-let-arguments o) (lift-procedures! (fix-let-arguments o) flat-fun bindings)) (def new-bindings (cat (fix-let-bindings o) bindings)) (set (fix-let-body o) (lift-procedures! (fix-let-body o) flat-fun new-bindings)) o)"));
  T108 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T109 = fun_lift_proceduresX_24;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSast_linearizeYlift_proceduresX,T107);
  lit_42 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T110 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_25 = YPfab_met(FUNCODEREF(fun_lift_proceduresX_25),T110,LITREF(lit_36),LITREF(lit_42),sloc(125),YPsb((P)"(fun ((o <locals>) flat-fun bindings) (def new-bindings (cat (locals-bindings o) bindings)) (set (locals-functions o) (map (rcurry lift-procedures! flat-fun new-bindings) (locals-functions o))) (set (locals-body o) (lift-procedures! (locals-body o) flat-fun new-bindings)) o)"));
  T112 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T113 = fun_lift_proceduresX_25;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSast_linearizeYlift_proceduresX,T111);
  lit_43 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T114 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_26 = YPfab_met(FUNCODEREF(fun_lift_proceduresX_26),T114,LITREF(lit_36),LITREF(lit_43),sloc(134),YPsb((P)"(fun ((o <ast-primitive>) flat-fun bindings) (set (function-body o) (lift-procedures! (function-body o) #f (function-bindings o))) o)"));
  T116 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T117 = fun_lift_proceduresX_26;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSast_linearizeYlift_proceduresX,T115);
  lit_44 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T118 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_27 = YPfab_met(FUNCODEREF(fun_lift_proceduresX_27),T118,LITREF(lit_36),LITREF(lit_44),sloc(139),YPsb((P)"(fun ((o <ast-generic>) flat-fun bindings) o)"));
  T120 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T121 = fun_lift_proceduresX_27;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSast_linearizeYlift_proceduresX,T119);
  lit_45 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T122 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_28 = YPfab_met(FUNCODEREF(fun_lift_proceduresX_28),T122,LITREF(lit_36),LITREF(lit_45),sloc(142),YPsb((P)"(fun ((o <ast-method>) flat-fun bindings) (set (function-body o) (lift-procedures! (function-body o) o (function-bindings o))) (set (function-free o) (lift-procedures! (function-free o) flat-fun bindings)) o)"));
  T124 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T125 = fun_lift_proceduresX_28;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSast_linearizeYlift_proceduresX,T123);
  lit_46 = YPPsym((P)"<flattened-program>");
  T127 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T126 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_46),T127);
  VARSET(YevalSast_linearizeYLflattened_programG,T126);
  lit_47 = YPPsym((P)"program-form");
  lit_48 = YPPlist(1,YPPsym((P)"_x"));
  T128 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_29 = YPfab_met(FUNCODEREF(fun_program_form_29),T128,LITREF(lit_47),LITREF(lit_48),sloc(152),YPsb((P)"(fun ((_x <flattened-program>)) (prop-value _x program-form))"));
  T130 = VARREF_OR(YevalSast_linearizeYprogram_form,YPfalse);
  T131 = fun_program_form_29;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSast_linearizeYprogram_form,T129);
  lit_49 = YPPsym((P)"program-form-setter");
  lit_50 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  T132 = YPfab_sig(YPPlist(2,T133,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_30 = YPfab_met(FUNCODEREF(fun_program_form_setter_30),T132,LITREF(lit_49),LITREF(lit_50),sloc(152),YPsb((P)"(fun ((_z (t? <program>)) (_x <flattened-program>)) (prop-value-setter _z _x program-form))"));
  T135 = VARREF_OR(YevalSast_linearizeYprogram_form_setter,YPfalse);
  T136 = fun_program_form_setter_30;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSast_linearizeYprogram_form_setter,T134);
  T137 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_form),VARREF(YevalSast_linearizeYprogram_form_setter),T137,VARREF(YPprop_unbound_error));
  lit_51 = YPPsym((P)"program-quotations");
  lit_52 = YPPlist(1,YPPsym((P)"_x"));
  T138 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_31 = YPfab_met(FUNCODEREF(fun_program_quotations_31),T138,LITREF(lit_51),LITREF(lit_52),sloc(153),YPsb((P)"(fun ((_x <flattened-program>)) (prop-value _x program-quotations))"));
  T140 = VARREF_OR(YevalSast_linearizeYprogram_quotations,YPfalse);
  T141 = fun_program_quotations_31;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  VARSET(YevalSast_linearizeYprogram_quotations,T139);
  lit_53 = YPPsym((P)"program-quotations-setter");
  lit_54 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T142 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_32 = YPfab_met(FUNCODEREF(fun_program_quotations_setter_32),T142,LITREF(lit_53),LITREF(lit_54),sloc(153),YPsb((P)"(fun ((_z <any>) (_x <flattened-program>)) (prop-value-setter _z _x program-quotations))"));
  T144 = VARREF_OR(YevalSast_linearizeYprogram_quotations_setter,YPfalse);
  T145 = fun_program_quotations_setter_32;
  T143 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T144,T145);
  VARSET(YevalSast_linearizeYprogram_quotations_setter,T143);
  lit_55 = YPPlist(1,YPPsym((P)"x"));
  T146 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T146,YPfalse,LITREF(lit_55),sloc(153),YPsb((P)"(fun ((x <any>)) (fab <tab> 40))"));
  T147 = fun_33;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_quotations),VARREF(YevalSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T147);
  lit_56 = YPPsym((P)"program-bindings");
  lit_57 = YPPlist(1,YPPsym((P)"_x"));
  T150 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T149 = fun_program_bindings_34 = YPfab_met(FUNCODEREF(fun_program_bindings_34),T150,LITREF(lit_56),LITREF(lit_57),sloc(154),YPsb((P)"(fun ((_x <flattened-program>)) (prop-value _x program-bindings))"));
  T153 = VARREF_OR(YevalSast_linearizeYprogram_bindings,YPfalse);
  T154 = fun_program_bindings_34;
  T152 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T153,T154);
  T151 = VARSET(YevalSast_linearizeYprogram_bindings,T152);
  T148 = T151;
  return T148;
}

P YevalSast_linearizeY___main_1___() {
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170;
DEFCREGS();
  lit_58 = YPPsym((P)"program-bindings-setter");
  lit_59 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_bindings_setter_35 = YPfab_met(FUNCODEREF(fun_program_bindings_setter_35),T0,LITREF(lit_58),LITREF(lit_59),sloc(154),YPsb((P)"(fun ((_z <any>) (_x <flattened-program>)) (prop-value-setter _z _x program-bindings))"));
  T2 = VARREF_OR(YevalSast_linearizeYprogram_bindings_setter,YPfalse);
  T3 = fun_program_bindings_setter_35;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSast_linearizeYprogram_bindings_setter,T1);
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T4,YPfalse,LITREF(lit_60),sloc(154),YPsb((P)"(fun ((x <any>)) (fab <tab> 40))"));
  T5 = fun_36;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_bindings),VARREF(YevalSast_linearizeYprogram_bindings_setter),VARREF(YLanyG),T5);
  lit_61 = YPPsym((P)"program-definitions");
  lit_62 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_37 = YPfab_met(FUNCODEREF(fun_program_definitions_37),T6,LITREF(lit_61),LITREF(lit_62),sloc(155),YPsb((P)"(fun ((_x <flattened-program>)) (prop-value _x program-definitions))"));
  T8 = VARREF_OR(YevalSast_linearizeYprogram_definitions,YPfalse);
  T9 = fun_program_definitions_37;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSast_linearizeYprogram_definitions,T7);
  lit_63 = YPPsym((P)"program-definitions-setter");
  lit_64 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_38 = YPfab_met(FUNCODEREF(fun_program_definitions_setter_38),T10,LITREF(lit_63),LITREF(lit_64),sloc(155),YPsb((P)"(fun ((_z <any>) (_x <flattened-program>)) (prop-value-setter _z _x program-definitions))"));
  T12 = VARREF_OR(YevalSast_linearizeYprogram_definitions_setter,YPfalse);
  T13 = fun_program_definitions_setter_38;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSast_linearizeYprogram_definitions_setter,T11);
  lit_65 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T14,YPfalse,LITREF(lit_65),sloc(155),YPsb((P)"(fun ((x <any>)) '())"));
  T15 = fun_39;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_definitions),VARREF(YevalSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T15);
  lit_66 = YPPsym((P)"<top-level-form>");
  T17 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T16 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_66),T17);
  VARSET(YevalSast_linearizeYLtop_level_formG,T16);
  lit_67 = YPPsym((P)"form-program");
  lit_68 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_40 = YPfab_met(FUNCODEREF(fun_form_program_40),T18,LITREF(lit_67),LITREF(lit_68),sloc(158),YPsb((P)"(fun ((_x <top-level-form>)) (prop-value _x form-program))"));
  T20 = VARREF_OR(YevalSast_linearizeYform_program,YPfalse);
  T21 = fun_form_program_40;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSast_linearizeYform_program,T19);
  lit_69 = YPPsym((P)"form-program-setter");
  lit_70 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_41 = YPfab_met(FUNCODEREF(fun_form_program_setter_41),T22,LITREF(lit_69),LITREF(lit_70),sloc(158),YPsb((P)"(fun ((_z <program>) (_x <top-level-form>)) (prop-value-setter _z _x form-program))"));
  T24 = VARREF_OR(YevalSast_linearizeYform_program_setter,YPfalse);
  T25 = fun_form_program_setter_41;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSast_linearizeYform_program_setter,T23);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),VARREF(YevalSast_linearizeYform_program_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_71 = YPPsym((P)"form-quotations");
  lit_72 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_42 = YPfab_met(FUNCODEREF(fun_form_quotations_42),T26,LITREF(lit_71),LITREF(lit_72),sloc(159),YPsb((P)"(fun ((_x <top-level-form>)) (prop-value _x form-quotations))"));
  T28 = VARREF_OR(YevalSast_linearizeYform_quotations,YPfalse);
  T29 = fun_form_quotations_42;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSast_linearizeYform_quotations,T27);
  lit_73 = YPPsym((P)"form-quotations-setter");
  lit_74 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_43 = YPfab_met(FUNCODEREF(fun_form_quotations_setter_43),T30,LITREF(lit_73),LITREF(lit_74),sloc(159),YPsb((P)"(fun ((_z <any>) (_x <top-level-form>)) (prop-value-setter _z _x form-quotations))"));
  T32 = VARREF_OR(YevalSast_linearizeYform_quotations_setter,YPfalse);
  T33 = fun_form_quotations_setter_43;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSast_linearizeYform_quotations_setter,T31);
  lit_75 = YPPlist(1,YPPsym((P)"x"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T34,YPfalse,LITREF(lit_75),sloc(159),YPsb((P)"(fun ((x <any>)) '())"));
  T35 = fun_44;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_quotations),VARREF(YevalSast_linearizeYform_quotations_setter),VARREF(YLanyG),T35);
  lit_76 = YPPsym((P)"form-definitions");
  lit_77 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_45 = YPfab_met(FUNCODEREF(fun_form_definitions_45),T36,LITREF(lit_76),LITREF(lit_77),sloc(160),YPsb((P)"(fun ((_x <top-level-form>)) (prop-value _x form-definitions))"));
  T38 = VARREF_OR(YevalSast_linearizeYform_definitions,YPfalse);
  T39 = fun_form_definitions_45;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSast_linearizeYform_definitions,T37);
  lit_78 = YPPsym((P)"form-definitions-setter");
  lit_79 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_46 = YPfab_met(FUNCODEREF(fun_form_definitions_setter_46),T40,LITREF(lit_78),LITREF(lit_79),sloc(160),YPsb((P)"(fun ((_z <any>) (_x <top-level-form>)) (prop-value-setter _z _x form-definitions))"));
  T42 = VARREF_OR(YevalSast_linearizeYform_definitions_setter,YPfalse);
  T43 = fun_form_definitions_setter_46;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSast_linearizeYform_definitions_setter,T41);
  lit_80 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T44,YPfalse,LITREF(lit_80),sloc(160),YPsb((P)"(fun ((x <any>)) '())"));
  T45 = fun_47;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_definitions),VARREF(YevalSast_linearizeYform_definitions_setter),VARREF(YLanyG),T45);
  lit_81 = YPPsym((P)"<closure-creation>");
  T47 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLcomputed_programG),Ynil);
  T46 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_81),T47);
  VARSET(YevalSast_linearizeYLclosure_creationG,T46);
  lit_82 = YPPsym((P)"closure-creation-index");
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_48 = YPfab_met(FUNCODEREF(fun_closure_creation_index_48),T48,LITREF(lit_82),LITREF(lit_83),sloc(163),YPsb((P)"(fun ((_x <closure-creation>)) (prop-value _x closure-creation-index))"));
  T50 = VARREF_OR(YevalSast_linearizeYclosure_creation_index,YPfalse);
  T51 = fun_closure_creation_index_48;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSast_linearizeYclosure_creation_index,T49);
  lit_84 = YPPsym((P)"closure-creation-index-setter");
  lit_85 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_49 = YPfab_met(FUNCODEREF(fun_closure_creation_index_setter_49),T52,LITREF(lit_84),LITREF(lit_85),sloc(163),YPsb((P)"(fun ((_z <any>) (_x <closure-creation>)) (prop-value-setter _z _x closure-creation-index))"));
  T54 = VARREF_OR(YevalSast_linearizeYclosure_creation_index_setter,YPfalse);
  T55 = fun_closure_creation_index_setter_49;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSast_linearizeYclosure_creation_index_setter,T53);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),VARREF(YevalSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_86 = YPPsym((P)"closure-creation-free");
  lit_87 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_50 = YPfab_met(FUNCODEREF(fun_closure_creation_free_50),T56,LITREF(lit_86),LITREF(lit_87),sloc(164),YPsb((P)"(fun ((_x <closure-creation>)) (prop-value _x closure-creation-free))"));
  T58 = VARREF_OR(YevalSast_linearizeYclosure_creation_free,YPfalse);
  T59 = fun_closure_creation_free_50;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSast_linearizeYclosure_creation_free,T57);
  lit_88 = YPPsym((P)"closure-creation-free-setter");
  lit_89 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_51 = YPfab_met(FUNCODEREF(fun_closure_creation_free_setter_51),T60,LITREF(lit_88),LITREF(lit_89),sloc(164),YPsb((P)"(fun ((_z <any>) (_x <closure-creation>)) (prop-value-setter _z _x closure-creation-free))"));
  T62 = VARREF_OR(YevalSast_linearizeYclosure_creation_free_setter,YPfalse);
  T63 = fun_closure_creation_free_setter_51;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSast_linearizeYclosure_creation_free_setter,T61);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_free),VARREF(YevalSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_90 = YPPsym((P)"flatten-seqs");
  lit_91 = YPPlist(1,YPPsym((P)"o"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_52 = YPfab_met(FUNCODEREF(fun_flatten_seqs_52),T64,LITREF(lit_90),LITREF(lit_91),sloc(166),YPsb((P)"(fun (o) (lst o))"));
  T66 = VARREF_OR(YevalSast_linearizeYflatten_seqs,YPfalse);
  T67 = fun_flatten_seqs_52;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSast_linearizeYflatten_seqs,T65);
  lit_92 = YPPlist(1,YPPsym((P)"o"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_53 = YPfab_met(FUNCODEREF(fun_flatten_seqs_53),T68,LITREF(lit_90),LITREF(lit_92),sloc(169),YPsb((P)"(fun ((o <sequential>)) (rep loop ((s o) (r '())) (if (nul? s) (rev! r) (rep inner ((ss (flatten-seqs (head s))) (r r)) (if (nul? ss) (loop (tail s) r) (inner (tail ss) (pair (head ss) r)))))))"));
  T70 = VARREF_OR(YevalSast_linearizeYflatten_seqs,YPfalse);
  T71 = fun_flatten_seqs_53;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSast_linearizeYflatten_seqs,T69);
  lit_93 = YPPsym((P)"as-top-level-forms");
  lit_94 = YPPlist(1,YPPsym((P)"programs"));
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T73,YPfalse,LITREF(lit_95),sloc(179),YPsb((P)"(fun (x) (new <top-level-form> form-program x))"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_55 = YPfab_met(FUNCODEREF(fun_as_top_level_forms_55),T72,LITREF(lit_93),LITREF(lit_94),sloc(178),YPsb((P)"(fun (programs) (map (fun (x) (new <top-level-form> form-program x)) programs))"));
  T75 = VARREF_OR(YevalSast_linearizeYas_top_level_forms,YPfalse);
  T76 = fun_as_top_level_forms_55;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSast_linearizeYas_top_level_forms,T74);
  lit_96 = YPPsym((P)"extract-things!");
  lit_97 = YPPlist(1,YPPsym((P)"o"));
  lit_98 = YPPlist(1,YPPsym((P)"form"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPfab_met(FUNCODEREF(fun_56),T78,YPfalse,LITREF(lit_98),sloc(185),YPsb((P)"(fun (form) (extract! form form result))"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_57 = YPfab_met(FUNCODEREF(fun_extract_thingsX_57),T77,LITREF(lit_96),LITREF(lit_97),sloc(181),YPsb((P)"(fun (o) (def forms (as-top-level-forms (flatten-seqs o))) (def result (new <flattened-program>)) (set (program-form result) (sequentialize (map (fun (form) (extract! form form result)) forms))) result)"));
  T80 = VARREF_OR(YevalSast_linearizeYextract_thingsX,YPfalse);
  T81 = fun_extract_thingsX_57;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSast_linearizeYextract_thingsX,T79);
  lit_99 = YPPsym((P)"extract!");
  lit_100 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T82 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_58 = YPfab_met(FUNCODEREF(fun_extractX_58),T82,LITREF(lit_99),LITREF(lit_100),sloc(188),YPsb((P)"(fun ((o <program>) (form <top-level-form>) (result <flattened-program>)) (ast-walk! extract! o form result))"));
  T84 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T85 = fun_extractX_58;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSast_linearizeYextractX,T83);
  lit_101 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_102 = YPPsym((P)"quotation");
  T86 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLconstantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_59 = YPfab_met(FUNCODEREF(fun_extractX_59),T86,LITREF(lit_99),LITREF(lit_101),sloc(191),YPsb((P)"(fun ((o <constant>) (form <top-level-form>) (result <flattened-program>)) (def value (constant-value o)) (if (or (== value #f) (== value #t) (== value '()) (isa? value <int>) (isa? value <chr>)) o (let ((qb* (program-quotations result)) (index (len qb*)) (probe (elt-or qb* value #f))) (if probe (new <global-reference> reference-binding probe) (let ((qb (new <module-binding> binding-kind 'quotation binding-name index binding-info value))) (set (elt qb* value) qb) (pushf (form-quotations form) qb) (new <global-reference> reference-binding qb))))))"));
  T88 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T89 = fun_extractX_59;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSast_linearizeYextractX,T87);
  lit_103 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T90 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_60 = YPfab_met(FUNCODEREF(fun_extractX_60),T90,LITREF(lit_99),LITREF(lit_103),sloc(209),YPsb((P)"(fun ((o <raw-constant>) (form <top-level-form>) (result <flattened-program>)) o)"));
  T92 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T93 = fun_extractX_60;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSast_linearizeYextractX,T91);
  lit_104 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_105 = YPPlist(1,YPPsym((P)"binding"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPfab_met(FUNCODEREF(fun_61),T95,YPfalse,LITREF(lit_105),sloc(218),YPsb((P)"(fun (binding) (set (binding-type binding) (extract! (binding-type binding) form result)))"));
  T94 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_62 = YPfab_met(FUNCODEREF(fun_extractX_62),T94,LITREF(lit_99),LITREF(lit_104),sloc(212),YPsb((P)"(fun ((o <ast-method>) (form <top-level-form>) (result <flattened-program>)) (set (function-debug-name o) (extract! (function-debug-name o) form result)) (set (function-signature o) (extract! (function-signature o) form result)) (set (function-body o) (extract! (function-body o) form result)) (do (fun (binding) (set (binding-type binding) (extract! (binding-type binding) form result))) (function-bindings o)) (def free (function-free o)) (def free-bindings (map reference-binding free)) (def index (adjoin-definition! form result o)) (set (function-index o) index) (set (function-free o) free-bindings) (new <closure-creation> closure-creation-index index closure-creation-free free))"));
  T97 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T98 = fun_extractX_62;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YevalSast_linearizeYextractX,T96);
  lit_106 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T99 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_63 = YPfab_met(FUNCODEREF(fun_extractX_63),T99,LITREF(lit_99),LITREF(lit_106),sloc(230),YPsb((P)"(fun ((o <ast-primitive-definition>) (form <top-level-form>) (result <flattened-program>)) (def prim (assignment-form o)) (set (function-body prim) (extract! (function-body prim) form result)) (pushf (program-definitions result) prim) (extract! (new <constant> constant-value #f) form result))"));
  T101 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T102 = fun_extractX_63;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YevalSast_linearizeYextractX,T100);
  lit_107 = YPPsym((P)"adjoin-definition!");
  lit_108 = YPPlist(3,YPPsym((P)"form"),YPPsym((P)"result"),YPPsym((P)"x"));
  T103 = YPfab_sig(YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_64 = YPfab_met(FUNCODEREF(fun_adjoin_definitionX_64),T103,LITREF(lit_107),LITREF(lit_108),sloc(238),YPsb((P)"(fun ((form <top-level-form>) (result <flattened-program>) x) (def new-index (len (program-definitions result))) (pushf (program-definitions result) x) (pushf (form-definitions form) x) new-index)"));
  T105 = VARREF_OR(YevalSast_linearizeYadjoin_definitionX,YPfalse);
  T106 = fun_adjoin_definitionX_64;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSast_linearizeYadjoin_definitionX,T104);
  lit_109 = YPPsym((P)"split-program");
  lit_110 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_65 = YPfab_met(FUNCODEREF(fun_split_program_65),T107,LITREF(lit_109),LITREF(lit_110),sloc(246),YPsb((P)"(fun (o (max-count <int>)) (lst o))"));
  T109 = VARREF_OR(YevalSast_linearizeYsplit_program,YPfalse);
  T110 = fun_split_program_65;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSast_linearizeYsplit_program,T108);
  lit_111 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  T111 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_66 = YPfab_met(FUNCODEREF(fun_split_program_66),T111,LITREF(lit_109),LITREF(lit_111),sloc(249),YPsb((P)"(fun ((o <sequential>) (max-count <int>)) (rep loop ((forms '()) (s o)) (rep inner ((res '()) (es s) (count 0)) (cond ((nul? es) (rev! (pair (sequentialize (rev! res)) forms))) ((= count max-count) (loop (pair (sequentialize (rev! res)) forms) es)) (#t (inner (pair (head es) res) (tail es) (+ count 1)))))))"));
  T113 = VARREF_OR(YevalSast_linearizeYsplit_program,YPfalse);
  T114 = fun_split_program_66;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YevalSast_linearizeYsplit_program,T112);
  lit_112 = YPPsym((P)"closurize-main!");
  lit_113 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"max-count"));
  lit_114 = YPsb((P)"---main-");
  lit_115 = YPsb((P)"---");
  lit_116 = YPPsym((P)"predefined");
  T115 = YPfab_sig(YPPlist(3,VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_67 = YPfab_met(FUNCODEREF(fun_closurize_mainX_67),T115,LITREF(lit_112),LITREF(lit_113),sloc(259),YPsb((P)"(fun ((o <flattened-program>) r max-count => <flattened-program>) (def forms (split-program (program-form o) max-count)) (def base-index (len (program-definitions o))) (rep loop ((calls '()) (defns (program-definitions o)) (i 0) (forms forms)) (if (nul? forms) (seq (set (program-definitions o) (rev! defns)) (set (program-form o) (new <top-level-form> form-program (sequentialize (rev! calls)) form-definitions (rev! defns))) o) (let ((name (cat-sym ---main- i ---)) (binding (ast-define-binding r name #f 'predefined)) (defn (new <ast-primitive> function-binding binding function-debug-name (objectify-quotation name 4) function-signature (objectify-signature '() r) function-body (head forms))) (call (new <predefined-application> application-binding binding application-arguments (nul <arguments>) application-tail? #f))) (loop (pair call calls) (pair defn defns) (+ i 1) (tail forms))))))"));
  T117 = VARREF_OR(YevalSast_linearizeYclosurize_mainX,YPfalse);
  T118 = fun_closurize_mainX_67;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSast_linearizeYclosurize_mainX,T116);
  lit_117 = YPPsym((P)"<assoc>");
  T120 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T119 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_117),T120);
  VARSET(YevalSast_linearizeYLassocG,T119);
  lit_118 = YPPsym((P)"assoc-key");
  lit_119 = YPPlist(1,YPPsym((P)"_x"));
  T121 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_68 = YPfab_met(FUNCODEREF(fun_assoc_key_68),T121,LITREF(lit_118),LITREF(lit_119),sloc(293),YPsb((P)"(fun ((_x <assoc>)) (prop-value _x assoc-key))"));
  T123 = VARREF_OR(YevalSast_linearizeYassoc_key,YPfalse);
  T124 = fun_assoc_key_68;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSast_linearizeYassoc_key,T122);
  lit_120 = YPPsym((P)"assoc-key-setter");
  lit_121 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T125 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_69 = YPfab_met(FUNCODEREF(fun_assoc_key_setter_69),T125,LITREF(lit_120),LITREF(lit_121),sloc(293),YPsb((P)"(fun ((_z <any>) (_x <assoc>)) (prop-value-setter _z _x assoc-key))"));
  T127 = VARREF_OR(YevalSast_linearizeYassoc_key_setter,YPfalse);
  T128 = fun_assoc_key_setter_69;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSast_linearizeYassoc_key_setter,T126);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),VARREF(YevalSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_122 = YPPsym((P)"assoc-value");
  lit_123 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_70 = YPfab_met(FUNCODEREF(fun_assoc_value_70),T129,LITREF(lit_122),LITREF(lit_123),sloc(294),YPsb((P)"(fun ((_x <assoc>)) (prop-value _x assoc-value))"));
  T131 = VARREF_OR(YevalSast_linearizeYassoc_value,YPfalse);
  T132 = fun_assoc_value_70;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSast_linearizeYassoc_value,T130);
  lit_124 = YPPsym((P)"assoc-value-setter");
  lit_125 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_71 = YPfab_met(FUNCODEREF(fun_assoc_value_setter_71),T133,LITREF(lit_124),LITREF(lit_125),sloc(294),YPsb((P)"(fun ((_z <any>) (_x <assoc>)) (prop-value-setter _z _x assoc-value))"));
  T135 = VARREF_OR(YevalSast_linearizeYassoc_value_setter,YPfalse);
  T136 = fun_assoc_value_setter_71;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSast_linearizeYassoc_value_setter,T134);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_value),VARREF(YevalSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_126 = YPPsym((P)"assoc");
  lit_127 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T137 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSast_linearizeYLassocG),Ynil);
  YevalSast_linearizeYassoc = YPfab_met(FUNCODEREF(YevalSast_linearizeYassoc),T137,LITREF(lit_126),LITREF(lit_127),sloc(295),YPsb((P)"(fun (x y => <assoc>) (new <assoc> assoc-key x assoc-value y))"));
  T138 = YevalSast_linearizeYassoc;
  VARSET(YevalSast_linearizeYassoc,T138);
  lit_128 = YPPsym((P)"assocq");
  lit_129 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T139 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_73 = YPfab_met(FUNCODEREF(fun_assocq_73),T139,LITREF(lit_128),LITREF(lit_129),sloc(298),YPsb((P)"(fun (x (l <lst>) => <any>) (if (nul? l) #f (if (== x (assoc-key (head l))) (head l) (assocq x (tail l)))))"));
  T141 = VARREF_OR(YevalSast_linearizeYassocq,YPfalse);
  T142 = fun_assocq_73;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSast_linearizeYassocq,T140);
  lit_130 = YPPsym((P)"gather-temporaries!");
  lit_131 = YPPlist(1,YPPsym((P)"o"));
  lit_132 = YPPlist(1,YPPsym((P)"def"));
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPfab_met(FUNCODEREF(fun_74),T144,YPfalse,LITREF(lit_132),sloc(307),YPsb((P)"(fun (def) (collect-temporaries! def def '()))"));
  T143 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_75 = YPfab_met(FUNCODEREF(fun_gather_temporariesX_75),T143,LITREF(lit_130),LITREF(lit_131),sloc(305),YPsb((P)"(fun ((o <program>)) (set (program-definitions o) (map (fun (def) (collect-temporaries! def def '())) (program-definitions o))) o)"));
  T146 = VARREF_OR(YevalSast_linearizeYgather_temporariesX,YPfalse);
  T147 = fun_gather_temporariesX_75;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSast_linearizeYgather_temporariesX,T145);
  lit_133 = YPPsym((P)"collect-temporaries!");
  lit_134 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T148 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_76 = YPfab_met(FUNCODEREF(fun_collect_temporariesX_76),T148,LITREF(lit_133),LITREF(lit_134),sloc(311),YPsb((P)"(fun ((o <program>) flat-fun r) (ast-walk! collect-temporaries! o flat-fun r))"));
  T150 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T151 = fun_collect_temporariesX_76;
  T149 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T150,T151);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T149);
  lit_135 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T152 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_77 = YPfab_met(FUNCODEREF(fun_collect_temporariesX_77),T152,LITREF(lit_133),LITREF(lit_135),sloc(314),YPsb((P)"(fun ((o <local-reference>) flat-fun r) (def binding (reference-binding o)) (def b (assocq binding r)) (if b (new <local-reference> reference-binding (assoc-value b)) o))"));
  T154 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T155 = fun_collect_temporariesX_77;
  T153 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T154,T155);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T153);
  lit_136 = YPPsym((P)"prepend-renamings");
  lit_137 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"r"));
  T156 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYprepend_renamings = YPfab_met(FUNCODEREF(YevalSast_linearizeYprepend_renamings),T156,LITREF(lit_136),LITREF(lit_137),sloc(321),YPsb((P)"(fun (x y r) (rep loop ((z r) (x x) (y y)) (if (nul? x) z (loop (pair (assoc (head x) (head y)) z) (tail x) (tail y)))))"));
  T157 = YevalSast_linearizeYprepend_renamings;
  VARSET(YevalSast_linearizeYprepend_renamings,T157);
  lit_138 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T158 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_79 = YPfab_met(FUNCODEREF(fun_collect_temporariesX_79),T158,LITREF(lit_133),LITREF(lit_138),sloc(328),YPsb((P)"(fun ((o <fix-let>) flat-fun r) (set (fix-let-arguments o) (collect-temporaries! (fix-let-arguments o) flat-fun r)) (def new-bindings (map new-renamed-binding (fix-let-bindings o))) (def new-r (prepend-renamings (fix-let-bindings o) new-bindings r)) (adjoin-temporary-variables! flat-fun new-bindings) (set (fix-let-bindings o) new-bindings) (set (fix-let-body o) (collect-temporaries! (fix-let-body o) flat-fun new-r)) o)"));
  T160 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T161 = fun_collect_temporariesX_79;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T159);
  lit_139 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  lit_140 = YPPlist(1,YPPsym((P)"b"));
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T165 = fun_80 = YPfab_met(FUNCODEREF(fun_80),T166,YPfalse,LITREF(lit_140),sloc(340),YPsb((P)"(fun (b) (def nb (assocq b r)) (if nb (assoc-value nb) b))"));
  T164 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T163 = fun_collect_temporariesX_81 = YPfab_met(FUNCODEREF(fun_collect_temporariesX_81),T164,LITREF(lit_133),LITREF(lit_139),sloc(338),YPsb((P)"(fun ((o <loop>) flat-fun r) (set (loop-bindings o) (map (fun (b) (def nb (assocq b r)) (if nb (assoc-value nb) b)) (loop-bindings o))) (set (loop-body o) (collect-temporaries! (loop-body o) flat-fun r)) o)"));
  T169 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T170 = fun_collect_temporariesX_81;
  T168 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T169,T170);
  T167 = VARSET(YevalSast_linearizeYcollect_temporariesX,T168);
  T162 = T167;
  return T162;
}

P YevalSast_linearizeY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68;
DEFCREGS();
  lit_141 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T0 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_82 = YPfab_met(FUNCODEREF(fun_collect_temporariesX_82),T0,LITREF(lit_133),LITREF(lit_141),sloc(347),YPsb((P)"(fun ((o <locals>) flat-fun r) (def new-bindings (map new-renamed-binding (locals-bindings o))) (def new-r (prepend-renamings (locals-bindings o) new-bindings r)) (set (locals-functions o) (map (rcurry collect-temporaries! flat-fun new-r) (locals-functions o))) (adjoin-temporary-variables! flat-fun new-bindings) (set (locals-bindings o) new-bindings) (set (locals-body o) (collect-temporaries! (locals-body o) flat-fun new-r)) o)"));
  T2 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T3 = fun_collect_temporariesX_82;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T1);
  lit_142 = YPPsym((P)"adjoin-temporary-variables!");
  lit_143 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"new-bindings"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_83 = YPfab_met(FUNCODEREF(fun_adjoin_temporary_variablesX_83),T4,LITREF(lit_142),LITREF(lit_143),sloc(359),YPsb((P)"(fun (flat-fun new-bindings) (rep adjoin ((temps (function-temporaries flat-fun)) (bindings new-bindings)) (if (nul? bindings) (set (function-temporaries flat-fun) temps) (if (mem? temps (head bindings)) (adjoin temps (tail bindings)) (adjoin (pair (head bindings) temps) (tail bindings))))))"));
  T6 = VARREF_OR(YevalSast_linearizeYadjoin_temporary_variablesX,YPfalse);
  T7 = fun_adjoin_temporary_variablesX_83;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSast_linearizeYadjoin_temporary_variablesX,T5);
  lit_144 = YPPsym((P)"<renamed-local-binding>");
  T9 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSastYLlocal_bindingG),Ynil);
  T8 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_144),T9);
  VARSET(YevalSast_linearizeYLrenamed_local_bindingG,T8);
  lit_145 = YPPsym((P)"binding-index");
  lit_146 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_84 = YPfab_met(FUNCODEREF(fun_binding_index_84),T10,LITREF(lit_145),LITREF(lit_146),sloc(369),YPsb((P)"(fun ((_x <renamed-local-binding>)) (prop-value _x binding-index))"));
  T12 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T13 = fun_binding_index_84;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYbinding_index,T11);
  lit_147 = YPPsym((P)"binding-index-setter");
  lit_148 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_85 = YPfab_met(FUNCODEREF(fun_binding_index_setter_85),T14,LITREF(lit_147),LITREF(lit_148),sloc(369),YPsb((P)"(fun ((_z <any>) (_x <renamed-local-binding>)) (prop-value-setter _z _x binding-index))"));
  T16 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T17 = fun_binding_index_setter_85;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYbinding_index_setter,T15);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  DYNDEFSET(YevalSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_149 = YPPsym((P)"new-renamed-binding");
  lit_150 = YPPlist(1,YPPsym((P)"binding"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_86 = YPfab_met(FUNCODEREF(fun_new_renamed_binding_86),T18,LITREF(lit_149),LITREF(lit_150),sloc(373),YPsb((P)"(fun ((binding <local-binding>)) (set *renaming-bindings-counter* (+ *renaming-bindings-counter* 1)) (new <renamed-local-binding> binding-name (binding-name binding) binding-type (binding-type binding) binding-dynamic-extent? (binding-dynamic-extent? binding) binding-closed-over? (binding-closed-over? binding) binding-index *renaming-bindings-counter*))"));
  T20 = VARREF_OR(YevalSast_linearizeYnew_renamed_binding,YPfalse);
  T21 = fun_new_renamed_binding_86;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSast_linearizeYnew_renamed_binding,T19);
  VARSET(YevalSast_linearizeYTregister_passiveQT,YPfalse);
  lit_151 = YPPsym((P)"register-allocate!");
  lit_152 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"register-passive?"));
  lit_153 = Ynil;
  lit_154 = YPPlist(1,YPPsym((P)"def"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T25,YPfalse,LITREF(lit_154),sloc(388),YPsb((P)"(fun (def) (collect-registers! def #f #t))"));
  T24 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_88 = YPfab_met(FUNCODEREF(fun_88),T24,YPfalse,LITREF(lit_153),sloc(387),YPsb((P)"(fun () (seq (set *register-passive?* register-passive?) (dlet () (do (fun (def) (collect-registers! def #f #t)) (program-definitions o)))))"));
  T23 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T23,YPfalse,LITREF(lit_153),sloc(387),YPsb((P)"(fun () (set *register-passive?* x-1960))"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_90 = YPfab_met(FUNCODEREF(fun_register_allocateX_90),T22,LITREF(lit_151),LITREF(lit_152),sloc(386),YPsb((P)"(fun ((o <program>) (register-passive? <log>)) (dlet ((*register-passive?* register-passive?)) (do (fun (def) (collect-registers! def #f #t)) (program-definitions o))) o)"));
  T27 = VARREF_OR(YevalSast_linearizeYregister_allocateX,YPfalse);
  T28 = fun_register_allocateX_90;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSast_linearizeYregister_allocateX,T26);
  lit_155 = YPPsym((P)"allocate-register");
  lit_156 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T29 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYallocate_register = YPfab_met(FUNCODEREF(YevalSast_linearizeYallocate_register),T29,LITREF(lit_155),LITREF(lit_156),sloc(391),YPsb((P)"(fun ((o <program>) f val?) (when (and val? f (not (program-register o))) (set (program-register o) (len (function-registers f))) (add! (function-registers f) o)))"));
  T30 = YevalSast_linearizeYallocate_register;
  VARSET(YevalSast_linearizeYallocate_register,T30);
  lit_157 = YPPsym((P)"collect-registers!");
  lit_158 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T31 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_92 = YPfab_met(FUNCODEREF(fun_collect_registersX_92),T31,LITREF(lit_157),LITREF(lit_158),sloc(397),YPsb((P)"(fun ((o <computed-program>) f val?) (allocate-register o f val?) (ast-walk collect-registers! o f #t))"));
  T33 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T34 = fun_collect_registersX_92;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSast_linearizeYcollect_registersX,T32);
  lit_159 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T35 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_93 = YPfab_met(FUNCODEREF(fun_collect_registersX_93),T35,LITREF(lit_157),LITREF(lit_159),sloc(401),YPsb((P)"(fun ((o <sequential>) f val?) (rep loop ((x o)) (if (nul? x) o (let ((next-x (tail x))) (collect-registers! (head x) f (and val? (nul? next-x))) (loop next-x)))))"));
  T37 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T38 = fun_collect_registersX_93;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YevalSast_linearizeYcollect_registersX,T36);
  lit_160 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T39 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_94 = YPfab_met(FUNCODEREF(fun_collect_registersX_94),T39,LITREF(lit_157),LITREF(lit_160),sloc(409),YPsb((P)"(fun ((o <passive-program>) f val?) (when *register-passive?* (allocate-register o f val?)) (ast-walk collect-registers! o f #t))"));
  T41 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T42 = fun_collect_registersX_94;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSast_linearizeYcollect_registersX,T40);
  lit_161 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  lit_162 = YPPlist(1,YPPsym((P)"def"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPfab_met(FUNCODEREF(fun_95),T44,YPfalse,LITREF(lit_162),sloc(416),YPsb((P)"(fun (def) (collect-registers! def f val?))"));
  T43 = YPfab_sig(YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_96 = YPfab_met(FUNCODEREF(fun_collect_registersX_96),T43,LITREF(lit_157),LITREF(lit_161),sloc(414),YPsb((P)"(fun ((o <top-level-form>) f val?) (allocate-register o f val?) (do (fun (def) (collect-registers! def f val?)) (form-definitions o)) (collect-registers! (form-program o) f val?))"));
  T46 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T47 = fun_collect_registersX_96;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSast_linearizeYcollect_registersX,T45);
  lit_163 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T48 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_97 = YPfab_met(FUNCODEREF(fun_collect_registersX_97),T48,LITREF(lit_157),LITREF(lit_163),sloc(419),YPsb((P)"(fun ((o <ast-method>) f val?) (allocate-register o f val?) (collect-registers! (function-signature o) f #t) (collect-registers! (function-debug-name o) o #t) (collect-registers! (function-body o) o #t))"));
  T50 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T51 = fun_collect_registersX_97;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSast_linearizeYcollect_registersX,T49);
  lit_164 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T52 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_98 = YPfab_met(FUNCODEREF(fun_collect_registersX_98),T52,LITREF(lit_157),LITREF(lit_164),sloc(425),YPsb((P)"(fun ((o <ast-primitive>) f val?) (collect-registers! (function-body o) o #t))"));
  T54 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T55 = fun_collect_registersX_98;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSast_linearizeYcollect_registersX,T53);
  lit_165 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T56 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_99 = YPfab_met(FUNCODEREF(fun_collect_registersX_99),T56,LITREF(lit_157),LITREF(lit_165),sloc(428),YPsb((P)"(fun ((o <locals>) f val?) (collect-registers! (locals-body o) f #t) (collect-registers! (locals-functions o) f #t))"));
  T58 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T59 = fun_collect_registersX_99;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSast_linearizeYcollect_registersX,T57);
  lit_166 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T60 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_100 = YPfab_met(FUNCODEREF(fun_collect_registersX_100),T60,LITREF(lit_157),LITREF(lit_166),sloc(432),YPsb((P)"(fun ((o <fix-let>) f val?) (collect-registers! (fix-let-body o) f #t) (collect-registers! (fix-let-arguments o) f #t))"));
  T62 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T63 = fun_collect_registersX_100;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSast_linearizeYcollect_registersX,T61);
  lit_167 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T64 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_101 = YPfab_met(FUNCODEREF(fun_collect_registersX_101),T64,LITREF(lit_157),LITREF(lit_167),sloc(436),YPsb((P)"(fun ((o <loop>) f val?) (collect-registers! (loop-body o) f #t))"));
  T66 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T67 = fun_collect_registersX_101;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSast_linearizeYcollect_registersX,T65);
  T68 = YPfalse;
  return T68;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooStypes;
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
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_evalSdependency;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_evalSast},
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
  {"@fold", &module_info_gooSboot, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
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
  {"@int?", &module_info_gooSboot, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
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
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
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
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
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
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
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
  {"find-getter", &module_info_gooSclass, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
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
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
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
  {"@mem?", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
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
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-value", &module_info_gooSboot, NULL},
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
  {"%loc-off", &module_info_gooSboot, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
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
  {"req-sig-specs", &module_info_evalSast, NULL},
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
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
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
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
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
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"---main-1---", PVAR, NULL},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"---main-2---", PVAR, NULL},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"---main-0---", PVAR, NULL},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {"program-bindings", CVAR, &YevalSast_linearizeYprogram_bindings},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"program-bindings-setter", CVAR, &YevalSast_linearizeYprogram_bindings_setter},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"extract-things!", NULL},
  {"<box-creation>", NULL},
  {"register-allocate!", NULL},
  {"form-definitions", NULL},
  {"gather-temporaries!", NULL},
  {"program-bindings", NULL},
  {"closure-creation-free", NULL},
  {"<box-read>", NULL},
  {"<box-write>", NULL},
  {"closurize-main!", NULL},
  {"closure-creation-index", NULL},
  {"form-quotations", NULL},
  {"insert-box!", NULL},
  {"<renamed-local-binding>", NULL},
  {"*register-passive?*", NULL},
  {"program-definitions", NULL},
  {"<closure-creation>", NULL},
  {"box-form", NULL},
  {"lift!", NULL},
  {"box-reference", NULL},
  {"flatten-seqs", NULL},
  {"program-quotations", NULL},
  {"<top-level-form>", NULL},
  {"reference-offset", NULL},
  {"form-program", NULL},
  {"program-form", NULL},
  {"reference-self?", NULL},
  {"<free-reference>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast_linearize;
MODULE_INFO module_info_evalSast_linearize = {
  "eval/ast-linearize",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSast_linearize (void);

void load_module_evalSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_evalSast();

  (P)YevalSast_linearizeY___main_0___();
  (P)YevalSast_linearizeY___main_1___();
  (P)YevalSast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
