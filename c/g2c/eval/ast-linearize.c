/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-linearize */

EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ytail,"goo/boot","tail");
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
DEF(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSast_linearizeYdo_do_analysisX,"eval/ast-linearize","do-do-analysis!");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSast_linearizeYdo_analysisX,"eval/ast-linearize","do-analysis!");
DEF(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYT,"goo/math","*");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLprim_intG,"goo/boot","<prim-int>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YevalSast_linearizeYast_walk,"eval/ast-linearize","ast-walk");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSmathY_,"goo/math","-");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_56);
DEFLIT(lit_108);
DEFLIT(lit_20);
DEFLIT(lit_49);
DEFLIT(lit_37);
DEFLIT(lit_68);
DEFLIT(lit_43);
DEFLIT(lit_34);
DEFLIT(lit_3);
DEFLIT(lit_113);
DEFLIT(lit_89);
DEFLIT(lit_23);
DEFLIT(lit_62);
DEFLIT(lit_47);
DEFLIT(lit_64);
DEFLIT(lit_59);
DEFLIT(lit_25);
DEFLIT(lit_102);
DEFLIT(lit_15);
DEFLIT(lit_33);
DEFLIT(lit_105);
DEFLIT(lit_58);
DEFLIT(lit_18);
DEFLIT(lit_85);
DEFLIT(lit_52);
DEFLIT(lit_107);
DEFLIT(lit_38);
DEFLIT(lit_36);
DEFLIT(lit_72);
DEFLIT(lit_22);
DEFLIT(lit_51);
DEFLIT(lit_1);
DEFLIT(lit_78);
DEFLIT(lit_118);
DEFLIT(lit_73);
DEFLIT(lit_19);
DEFLIT(lit_86);
DEFLIT(lit_53);
DEFLIT(lit_60);
DEFLIT(lit_81);
DEFLIT(lit_103);
DEFLIT(lit_80);
DEFLIT(lit_63);
DEFLIT(lit_16);
DEFLIT(lit_67);
DEFLIT(lit_82);
DEFLIT(lit_71);
DEFLIT(lit_31);
DEFLIT(lit_9);
DEFLIT(lit_77);
DEFLIT(lit_75);
DEFLIT(lit_99);
DEFLIT(lit_116);
DEFLIT(lit_21);
DEFLIT(lit_87);
DEFLIT(lit_10);
DEFLIT(lit_69);
DEFLIT(lit_5);
DEFLIT(lit_97);
DEFLIT(lit_101);
DEFLIT(lit_4);
DEFLIT(lit_90);
DEFLIT(lit_55);
DEFLIT(lit_88);
DEFLIT(lit_8);
DEFLIT(lit_24);
DEFLIT(lit_70);
DEFLIT(lit_94);
DEFLIT(lit_95);
DEFLIT(lit_41);
DEFLIT(lit_46);
DEFLIT(lit_61);
DEFLIT(lit_91);
DEFLIT(lit_100);
DEFLIT(lit_11);
DEFLIT(lit_2);
DEFLIT(lit_54);
DEFLIT(lit_57);
DEFLIT(lit_45);
DEFLIT(lit_83);
DEFLIT(lit_30);
DEFLIT(lit_74);
DEFLIT(lit_93);
DEFLIT(lit_39);
DEFLIT(lit_98);
DEFLIT(lit_40);
DEFLIT(lit_7);
DEFLIT(lit_111);
DEFLIT(lit_84);
DEFLIT(lit_17);
DEFLIT(lit_44);
DEFLIT(lit_104);
DEFLIT(lit_96);
DEFLIT(lit_13);
DEFLIT(lit_92);
DEFLIT(lit_79);
DEFLIT(lit_115);
DEFLIT(lit_14);
DEFLIT(lit_110);
DEFLIT(lit_29);
DEFLIT(lit_35);
DEFLIT(lit_114);
DEFLIT(lit_0);
DEFLIT(lit_65);
DEFLIT(lit_12);
DEFLIT(lit_66);
DEFLIT(lit_76);
DEFLIT(lit_48);
DEFLIT(lit_27);
DEFLIT(lit_117);
DEFLIT(lit_106);
DEFLIT(lit_28);
DEFLIT(lit_50);
DEFLIT(lit_42);
DEFLIT(lit_26);
DEFLIT(lit_32);
DEFLIT(lit_109);
DEFLIT(lit_6);
DEFLIT(lit_112);

/* FUNCTIONS: */

LOCFOR(fun_x_1455_0);
LOCFOR(fun_update_walkX_1);
LOCFOR(fun_x_1457_2);
LOCFOR(fun_ast_walk_3);
LOCFOR(fun_box_reference_4);
LOCFOR(fun_box_reference_setter_5);
LOCFOR(fun_box_reference_6);
LOCFOR(fun_box_reference_setter_7);
LOCFOR(fun_box_form_8);
LOCFOR(fun_box_form_setter_9);
LOCFOR(fun_box_reference_10);
LOCFOR(fun_box_reference_setter_11);
LOCFOR(fun_insert_boxX_12);
LOCFOR(fun_insert_boxX_13);
LOCFOR(fun_insert_boxX_14);
LOCFOR(fun_insert_boxX_15);
LOCFOR(fun_insert_boxX_16);
LOCFOR(fun_insert_boxX_17);
LOCFOR(fun_insert_boxX_18);
LOCFOR(fun_loop_19);
LOCFOR(fun_boxify_mutable_bindings_20);
LOCFOR(fun_unconstrained_typeQ_21);
LOCFOR(fun_unconstrained_typeQ_22);
LOCFOR(fun_unconstrained_typeQ_23);
LOCFOR(fun_do_do_analysisX_24);
LOCFOR(fun_do_analysisX_25);
LOCFOR(fun_do_analysisX_26);
LOCFOR(fun_27);
LOCFOR(fun_do_analysisX_28);
LOCFOR(fun_analyze_ast_29);
LOCFOR(fun_reference_offset_30);
LOCFOR(fun_reference_offset_setter_31);
LOCFOR(fun_reference_selfQ_32);
LOCFOR(fun_reference_selfQ_setter_33);
LOCFOR(fun_liftX_34);
LOCFOR(fun_lift_proceduresX_35);
LOCFOR(fun_lift_proceduresX_36);
LOCFOR(fun_add_37);
LOCFOR(fun_check_38);
LOCFOR(fun_adjoin_free_bindingX_39);
LOCFOR(fun_lift_proceduresX_40);
LOCFOR(fun_lift_proceduresX_41);
LOCFOR(fun_lift_proceduresX_42);
LOCFOR(fun_lift_proceduresX_43);
LOCFOR(fun_lift_proceduresX_44);
LOCFOR(fun_program_form_45);
LOCFOR(fun_program_form_setter_46);
LOCFOR(fun_program_quotations_47);
LOCFOR(fun_program_quotations_setter_48);
LOCFOR(fun_49);
LOCFOR(fun_program_definitions_50);
LOCFOR(fun_program_definitions_setter_51);
LOCFOR(fun_52);
LOCFOR(fun_form_program_53);
LOCFOR(fun_form_program_setter_54);
LOCFOR(fun_form_quotations_55);
LOCFOR(fun_form_quotations_setter_56);
LOCFOR(fun_57);
LOCFOR(fun_form_definitions_58);
LOCFOR(fun_form_definitions_setter_59);
LOCFOR(fun_60);
LOCFOR(fun_closure_creation_index_61);
LOCFOR(fun_closure_creation_index_setter_62);
LOCFOR(fun_closure_creation_free_63);
LOCFOR(fun_closure_creation_free_setter_64);
LOCFOR(fun_flatten_seqs_65);
LOCFOR(fun_inner_66);
LOCFOR(fun_loop_67);
LOCFOR(fun_flatten_seqs_68);
LOCFOR(fun_69);
LOCFOR(fun_as_top_level_forms_70);
LOCFOR(fun_71);
LOCFOR(fun_extract_thingsX_72);
LOCFOR(fun_extractX_73);
LOCFOR(fun_extractX_74);
LOCFOR(fun_extractX_75);
LOCFOR(fun_76);
LOCFOR(fun_extractX_77);
LOCFOR(fun_extractX_78);
LOCFOR(fun_adjoin_definitionX_79);
LOCFOR(fun_split_program_80);
LOCFOR(fun_inner_81);
LOCFOR(fun_loop_82);
LOCFOR(fun_split_program_83);
LOCFOR(fun_loop_84);
LOCFOR(fun_closurize_mainX_85);
LOCFOR(fun_assoc_key_86);
LOCFOR(fun_assoc_key_setter_87);
LOCFOR(fun_assoc_value_88);
LOCFOR(fun_assoc_value_setter_89);
FUNFOR(YevalSast_linearizeYassoc);
LOCFOR(fun_assocq_91);
LOCFOR(fun_92);
LOCFOR(fun_gather_temporariesX_93);
LOCFOR(fun_collect_temporariesX_94);
LOCFOR(fun_collect_temporariesX_95);
LOCFOR(fun_loop_96);
FUNFOR(YevalSast_linearizeYprepend_renamings);
LOCFOR(fun_collect_temporariesX_98);
LOCFOR(fun_collect_temporariesX_99);
LOCFOR(fun_adjoin_100);
LOCFOR(fun_adjoin_temporary_variablesX_101);
LOCFOR(fun_binding_index_102);
LOCFOR(fun_binding_index_setter_103);
LOCFOR(fun_new_renamed_binding_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_107);
LOCFOR(fun_register_allocateX_108);
FUNFOR(YevalSast_linearizeYallocate_register);
LOCFOR(fun_collect_registersX_110);
LOCFOR(fun_loop_111);
LOCFOR(fun_collect_registersX_112);
LOCFOR(fun_collect_registersX_113);
LOCFOR(fun_114);
LOCFOR(fun_collect_registersX_115);
LOCFOR(fun_collect_registersX_116);
LOCFOR(fun_collect_registersX_117);
LOCFOR(fun_ast_contains_funQ_118);
LOCFOR(fun_walk_119);
LOCFOR(fun_120);
LOCFOR(fun_ast_contains_funQ_121);
extern P YevalSast_linearizeY___main_0___ ();
extern P YevalSast_linearizeY___main_1___ ();
extern P YevalSast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1455_0) {
  P x_1454_;
  P xF1946;
  P setterF1945;
  P getterF1944;
  P propF1943;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(x_1454_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1454_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1454_);
    propF1943 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1943);
    getterF1944 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF1943);
    setterF1945 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1944,VARREF(YevalSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1944);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF1944,FREEREF(0));
        xF1946 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF1946,VARREF(YevalSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF1946,FREEREF(2));
          T17 = CALL2(1,setterF1945,T18,FREEREF(0));
          T15 = T17;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T11 = T13;
      } else {
        T11 = YPfalse;
      }
    } else {
    }
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1454_);
    a1 = T20;
    x_1454_ = a1;
    goto loop;
    T7 = T19;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_update_walkX_1) {
  P g_,o_,args_;
  P x_1455F1947;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1455_0,4);
  x_1455F1947 = T0;
  FUNINIT(x_1455F1947, 4,o_,g_,args_,x_1455F1947);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1455F1947,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1457_2) {
  P x_1456_;
  P xF1950;
  P getterF1949;
  P propF1948;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(x_1456_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1456_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1456_);
    propF1948 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1948);
    getterF1949 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1949,VARREF(YevalSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1949);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF1949,FREEREF(0));
        xF1950 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF1950,VARREF(YevalSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF1950,FREEREF(2));
          T13 = T15;
        } else {
          T13 = YPfalse;
        }
        T11 = T13;
        T9 = T11;
      } else {
        T9 = YPfalse;
      }
    } else {
    }
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1456_);
    a1 = T17;
    x_1456_ = a1;
    goto loop;
    T5 = T16;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walk_3) {
  P g_,o_,args_;
  P x_1457F1951;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1457_2,4);
  x_1457F1951 = T0;
  FUNINIT(x_1457F1951, 4,o_,g_,args_,x_1457F1951);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1457F1951,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_box_reference_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_12) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSast_linearizeYupdate_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_13) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
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

FUNCODEDEF(fun_insert_boxX_14) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL2(1,VARREF(YevalSast_linearizeYupdate_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
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

FUNCODEDEF(fun_insert_boxX_15) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),T1,VARREF(YevalSast_linearizeYbox_form),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_16) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_17) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
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

FUNCODEDEF(fun_insert_boxX_18) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
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

FUNCODEDEF(fun_loop_19) {
  P res_,bindings_;
  P creatorF1953;
  P bindingF1952;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(0),res_);
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    bindingF1952 = T5;
    T7 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF1952);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF1952);
      T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T10);
      creatorF1953 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF1953,res_);
      T13 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T12;
      a2 = T13;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T8 = T11;
      T6 = T8;
    } else {
      T15 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = res_;
      a2 = T15;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T6 = T14;
    }
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boxify_mutable_bindings_20) {
  P form_,bindings_;
  P loopF1954;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_19,2);
  loopF1954 = T2;
  FUNINIT(loopF1954, 2,form_,loopF1954);
  T3 = CALL2(0,loopF1954,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_21) {
  P b_;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_unconstrained_typeQ_22) {
  P b_;
  P tmpF1955;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_26));
  tmpF1955 = T1;
  if (tmpF1955 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_27));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_23) {
  P o_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_do_analysisX_24) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSast_linearizeYast_walk),VARREF(YevalSast_linearizeYdo_analysisX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_analysisX_25) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYdo_do_analysisX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_analysisX_26) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(YevalSast_linearizeYdo_do_analysisX),o_);
  T1 = CALL1(1,VARREF(YevalSastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T2 = CALL2(1,VARREF(YevalSastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_27) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_type),x_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_analysisX_28) {
  P o_;
  P tmpF1960;
  P tmpF1959;
  P tmpF1958;
  P tmpF1957;
  P metF1956;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(YevalSast_linearizeYdo_do_analysisX),o_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),T5);
    T3 = CALL1(1,VARREF(YevalSastYbinding_value),T4);
    metF1956 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF1956,VARREF(YevalSastYLast_functionG));
    tmpF1957 = T8;
    if (tmpF1957 != YPfalse) {
      T12 = fun_27;
      T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF1956);
      T11 = CALL2(1,VARREF(YgooScolsScolYallQ),T12,T13);
      tmpF1958 = T11;
      if (tmpF1958 != YPfalse) {
        T17 = CALL1(1,VARREF(YevalSastYfunction_value),metF1956);
        T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T17);
        tmpF1959 = T16;
        if (tmpF1959 != YPfalse) {
          T21 = CALL1(1,VARREF(YevalSastYfunction_naryQ),metF1956);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF1960 = T20;
          if (tmpF1960 != YPfalse) {
            T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF1956);
            T26 = CALL1(1,VARREF(YgooStypesYlen),T27);
            T23 = CALL2(1,VARREF(YgooSmathYE),T24,T26);
            T22 = T23;
          } else {
            T22 = YPfalse;
          }
          T19 = T22;
          T18 = T19;
        } else {
          T18 = YPfalse;
        }
        T15 = T18;
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
      T10 = T14;
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T7 = T9;
    if (T7 != YPfalse) {
      T28 = CALL2(1,VARREF(YevalSastYapplication_knownQ_setter),YPtrue,o_);
      T6 = T28;
    } else {
      T6 = YPfalse;
    }
    T2 = T6;
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_ast_29) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYdo_analysisX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_30) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_31) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_32) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_33) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_liftX_34) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_35) {
  P o_,flat_fun_,bindings_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T0 = CALL4(1,VARREF(YevalSast_linearizeYupdate_walkX),VARREF(YevalSast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_36) {
  P o_,flat_fun_,bindings_;
  P offsetF1962;
  P bF1961;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF1961 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF1961);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1962 = T5;
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF1961,VARREF(YevalSast_linearizeYreference_offset),offsetF1962,VARREF(YevalSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_37) {
  P freeT_;
  P tailF1963;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF1963 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF1963);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF1963;
    freeT_ = a1;
    goto loop;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_38) {
  P i_,freeT_;
  P addF1965;
  P new_envF1964;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfree_environmentG));
    T3 = CALL2(1,VARREF(YevalSastYfree_environment),FREEREF(0),T4);
    new_envF1964 = T3;
    T6 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF1964,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_37,2);
      addF1965 = T9;
      FUNINIT(addF1965, 2,new_envF1964,addF1965);
      T11 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF1965,T11);
      T8 = T10;
    }
    T2 = i_;
    T0 = T2;
  } else {
    T14 = CALL1(1,VARREF(YevalSastYreference_binding),FREEREF(0));
    T16 = CALL1(1,VARREF(Yhead),freeT_);
    T15 = CALL1(1,VARREF(YevalSastYreference_binding),T16);
    T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,T15);
    if (T13 != YPfalse) {
      T12 = i_;
    } else {
      T18 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T19 = CALL1(1,VARREF(Ytail),freeT_);
      a1 = T18;
      a2 = T19;
      i_ = a1;
      freeT_ = a2;
      goto loop;
      T12 = T17;
    }
    T0 = T12;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_free_bindingX_39) {
  P flat_fun_,ref_;
  P checkF1966;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_38,3);
  checkF1966 = T1;
  FUNINIT(checkF1966, 3,ref_,flat_fun_,checkF1966);
  T3 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF1966,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_40) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1967;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,bindings_);
  new_bindingsF1967 = T3;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF1967);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_41) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1968;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF1968 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1968);
  T5 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF1968);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_42) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_43) {
  P o_,flat_fun_,bindings_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_44) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
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

FUNCODEDEF(fun_program_form_45) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_46) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_47) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_48) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_50) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_51) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_53) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_54) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_55) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_56) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_58) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_59) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_61) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_62) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_63) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_64) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_65) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_66) {
  P ss_,r_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),FREEREF(0));
    T2 = CALL2(0,FREEREF(1),T3,r_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),ss_);
    T7 = CALL1(1,VARREF(Yhead),ss_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,r_);
    a1 = T5;
    a2 = T6;
    ss_ = a1;
    r_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_67) {
  P s_,r_;
  P innerF1969;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),r_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_inner_66,3);
    innerF1969 = T4;
    FUNINIT(innerF1969, 3,s_,FREEREF(0),innerF1969);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF1969,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_68) {
  P o_;
  P loopF1970;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_67,1);
  loopF1970 = T1;
  FUNINIT(loopF1970, 1,loopF1970);
  T2 = CALL2(0,loopF1970,o_,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_70) {
  P programs_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(programs_, 0);
loop:
  T1 = fun_69;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_72) {
  P o_;
  P resultF1972;
  P formsF1971;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T2);
  formsF1971 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF1972 = T4;
  T7 = FUNFAB(fun_71,1,resultF1972);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF1971);
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),T6);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T5,resultF1972);
  T3 = resultF1972;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_73) {
  P o_,form_,result_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T0 = CALL4(1,VARREF(YevalSast_linearizeYupdate_walkX),VARREF(YevalSast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_74) {
  P o_,form_,result_;
  P x_1458F1982;
  P qbF1981;
  P probeF1980;
  P indexF1979;
  P qbTF1978;
  P tmpF1977;
  P tmpF1976;
  P tmpF1975;
  P tmpF1974;
  P valueF1973;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF1973 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1973,YPfalse);
  tmpF1974 = T4;
  if (tmpF1974 != YPfalse) {
    T5 = tmpF1974;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1973,YPtrue);
    tmpF1975 = T7;
    if (tmpF1975 != YPfalse) {
      T8 = tmpF1975;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1973,Ynil);
      tmpF1976 = T10;
      if (tmpF1976 != YPfalse) {
        T11 = tmpF1976;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF1973,VARREF(YLintG));
        tmpF1977 = T13;
        if (tmpF1977 != YPfalse) {
          T14 = tmpF1977;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF1973,VARREF(YLchrG));
          T14 = T15;
        }
        T12 = T14;
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T17 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),result_);
    qbTF1978 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF1978);
    indexF1979 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF1978,valueF1973,YPfalse);
    probeF1980 = T21;
    if (probeF1980 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF1980);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_75),VARREF(YevalSastYbinding_name),indexF1979,VARREF(YevalSastYbinding_info),valueF1973);
      qbF1981 = T25;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF1981,qbTF1978,valueF1973);
      x_1458F1982 = form_;
      T28 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),x_1458F1982);
      T27 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T28,qbF1981);
      T26 = CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T27,x_1458F1982);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF1981);
      T24 = T29;
      T22 = T24;
    }
    T20 = T22;
    T18 = T20;
    T16 = T18;
    T2 = T16;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_75) {
  P o_,form_,result_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_76) {
  P binding_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(YevalSastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_77) {
  P o_,form_,result_;
  P indexF1985;
  P free_bindingsF1984;
  P freeF1983;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_76,2,form_,result_);
  T7 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
  T9 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  freeF1983 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF1983);
  free_bindingsF1984 = T11;
  T13 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF1985 = T13;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF1985,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF1984,o_);
  T14 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF1985,VARREF(YevalSast_linearizeYclosure_creation_free),freeF1983);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_78) {
  P o_,form_,result_;
  P x_1459F1987;
  P primF1986;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF1986 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),primF1986);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T2,primF1986);
  x_1459F1987 = result_;
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1459F1987);
  T5 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,primF1986);
  T4 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T5,x_1459F1987);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_79) {
  P form_,result_,x_;
  P x_1461F1990;
  P x_1460F1989;
  P new_indexF1988;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF1988 = T1;
  x_1460F1989 = result_;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1460F1989);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T4,x_1460F1989);
  x_1461F1990 = form_;
  T8 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),x_1461F1990);
  T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,x_);
  T6 = CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T7,x_1461F1990);
  T0 = new_indexF1988;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_80) {
  P o_,max_count_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_81) {
  P res_,es_,count_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(es_, 1);
  ARG(count_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),es_);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T4 = CALL1(1,VARREF(YevalSastYsequentialize),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
      T10 = CALL1(1,VARREF(YevalSastYsequentialize),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,FREEREF(0));
      T8 = CALL2(0,FREEREF(2),T9,es_);
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T15 = CALL1(1,VARREF(Yhead),es_);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,res_);
        T16 = CALL1(1,VARREF(Ytail),es_);
        T17 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
        a1 = T14;
        a2 = T16;
        a3 = T17;
        res_ = a1;
        es_ = a2;
        count_ = a3;
        goto loop;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T6 = T12;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_82) {
  P forms_,s_;
  P innerF1991;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_81,4);
  innerF1991 = T1;
  FUNINIT(innerF1991, 4,forms_,FREEREF(0),FREEREF(1),innerF1991);
  T2 = CALL3(0,innerF1991,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_83) {
  P o_,max_count_;
  P loopF1992;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_82,2);
  loopF1992 = T1;
  FUNINIT(loopF1992, 2,max_count_,loopF1992);
  T2 = CALL2(0,loopF1992,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_84) {
  P calls_,defns_,i_,forms_;
  P callF1996;
  P defnF1995;
  P bindingF1994;
  P nameF1993;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(calls_, 0);
  ARG(defns_, 1);
  ARG(i_, 2);
  ARG(forms_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),forms_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),calls_);
    T4 = CALL1(1,VARREF(YevalSastYsequentialize),T5);
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    T3 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),T4,VARREF(YevalSast_linearizeYform_definitions),T6);
    CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T8 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_86),i_,LITREF(lit_87));
    nameF1993 = T8;
    T10 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(1),nameF1993,YPfalse,LITREF(lit_88));
    bindingF1994 = T10;
    T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF1993,YPint((P)4));
    T14 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF1994,VARREF(YevalSastYfunction_debug_name),T13,VARREF(YevalSastYfunction_signature),T14,VARREF(YevalSastYfunction_body),T15);
    defnF1995 = T12;
    T18 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF1994,VARREF(YevalSastYapplication_arguments),T18,VARREF(YevalSastYapplication_tailQ),YPfalse);
    callF1996 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF1996,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF1995,defns_);
    T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T23 = CALL1(1,VARREF(Ytail),forms_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    a4 = T23;
    calls_ = a1;
    defns_ = a2;
    i_ = a3;
    forms_ = a4;
    goto loop;
    T16 = T19;
    T11 = T16;
    T9 = T11;
    T7 = T9;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_85) {
  P o_,r_,max_count_;
  P loopF1999;
  P base_indexF1998;
  P formsF1997;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T2,max_count_);
  formsF1997 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF1998 = T4;
  T7 = FUNSHELL(1,fun_loop_84,3);
  loopF1999 = T7;
  FUNINIT(loopF1999, 3,o_,r_,loopF1999);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T8 = CALL4(0,loopF1999,Ynil,T9,YPint((P)0),formsF1997);
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assoc_key_86) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_87) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_88) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_89) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYassoc) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),x_,VARREF(YevalSast_linearizeYassoc_value),y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_91) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
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

FUNCODEDEF(fun_92) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_93) {
  P o_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = fun_92;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_94) {
  P o_,flat_fun_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL4(1,VARREF(YevalSast_linearizeYupdate_walkX),VARREF(YevalSast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_95) {
  P o_,flat_fun_,r_;
  P bF2001;
  P bindingF2000;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF2000 = T1;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF2000,r_);
  bF2001 = T3;
  if (bF2001 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF2001);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),T6);
    T4 = T5;
  } else {
    T4 = o_;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_96) {
  P z_,x_,y_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = z_;
  } else {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T6 = CALL1(1,VARREF(Yhead),y_);
    T4 = CALL2(1,VARREF(YevalSast_linearizeYassoc),T5,T6);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,z_);
    T7 = CALL1(1,VARREF(Ytail),x_);
    T8 = CALL1(1,VARREF(Ytail),y_);
    a1 = T3;
    a2 = T7;
    a3 = T8;
    z_ = a1;
    x_ = a2;
    y_ = a3;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYprepend_renamings) {
  P x_,y_,r_;
  P loopF2002;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_96,1);
  loopF2002 = T1;
  FUNINIT(loopF2002, 1,loopF2002);
  T2 = CALL3(0,loopF2002,r_,x_,y_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_98) {
  P o_,flat_fun_,r_;
  P new_rF2004;
  P new_bindingsF2003;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T4);
  new_bindingsF2003 = T3;
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T7,new_bindingsF2003,r_);
  new_rF2004 = T6;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2003);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF2003,o_);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T8 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T9,flat_fun_,new_rF2004);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T8,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_99) {
  P o_,flat_fun_,r_;
  P new_rF2006;
  P new_bindingsF2005;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF2005 = T1;
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF2005,r_);
  new_rF2006 = T4;
  T7 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF2006);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,T8);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T6,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2005);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF2005,o_);
  T10 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T9 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF2006);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T9,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_100) {
  P temps_,bindings_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSastYfunction_temporaries_setter),temps_,FREEREF(0));
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),temps_,T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = temps_;
      a2 = T7;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T6;
    } else {
      T10 = CALL1(1,VARREF(Yhead),bindings_);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,temps_);
      T11 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T9;
      a2 = T11;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_temporary_variablesX_101) {
  P flat_fun_,new_bindings_;
  P adjoinF2007;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_100,2);
  adjoinF2007 = T1;
  FUNINIT(adjoinF2007, 2,flat_fun_,adjoinF2007);
  T3 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF2007,T3,new_bindings_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_102) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_103) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_renamed_binding_104) {
  P binding_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  DYNSET(YevalSast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YevalSastYbinding_type),binding_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_type),T3,VARREF(YevalSastYbinding_dynamic_extentQ),T4,VARREF(YevalSastYbinding_index),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_105) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P T0,T1,T2;
LINK_STACK();
loop:
  VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_105;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_108) {
  P o_,register_passiveQ_;
  P x_1462F2008;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1462F2008 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_106,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_107,1,x_1462F2008);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,flat_fun_,valQ_;
  P tmpF2010;
  P tmpF2009;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF2009 = valQ_;
  if (tmpF2009 != YPfalse) {
    tmpF2010 = flat_fun_;
    if (tmpF2010 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYprogram_register),o_);
      T5 = CALL1(1,VARREF(Ynot),T6);
      T4 = T5;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYfunction_registers),flat_fun_);
    T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
    CALL2(1,VARREF(YevalSastYprogram_register_setter),T7,o_);
    T10 = CALL1(1,VARREF(YevalSastYfunction_registers),flat_fun_);
    T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),T10,o_);
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_110) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL4(1,VARREF(YevalSast_linearizeYupdate_walkX),VARREF(YevalSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_111) {
  P x_;
  P tmpF2012;
  P next_xF2011;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL1(1,VARREF(Ytail),x_);
    next_xF2011 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF2012 = FREEREF(2);
    if (tmpF2012 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF2011);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF2011;
    x_ = a1;
    goto loop;
    T2 = T8;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_112) {
  P o_,flat_fun_,valQ_;
  P loopF2013;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_111,4);
  loopF2013 = T1;
  FUNINIT(loopF2013, 4,o_,flat_fun_,valQ_,loopF2013);
  T2 = CALL1(0,loopF2013,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_113) {
  P o_,flat_fun_,valQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  if (VARREF(YevalSast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  } else {
  }
  T1 = CALL4(1,VARREF(YevalSast_linearizeYupdate_walkX),VARREF(YevalSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_114) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_115) {
  P o_,flat_fun_,valQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_114,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_116) {
  P o_,flat_fun_,valQ_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_registersX),flat_fun_,YPtrue);
  T2 = CALL1(1,VARREF(YevalSastYfunction_data_refs),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_117) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_contains_funQ_118) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_119) {
  P y_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(YevalSastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalSast_linearizeYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_120) {
  P return_;
  P walkF2014;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_119,2);
  walkF2014 = T0;
  FUNINIT(walkF2014, 2,return_,walkF2014);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYast_walk),walkF2014,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_121) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_120,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
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
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"update-walk!");
  lit_1 = YPPsym((P)"g");
  lit_2 = YPPsym((P)"o");
  lit_3 = YPPsym((P)"args");
  lit_4 = YPPsym((P)"x-1455");
  lit_5 = YPPsym((P)"x-1454");
  T1 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1455_0 = YPmet(FUNCODEREF(fun_x_1455_0),LITREF(lit_4),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_3)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_update_walkX_1 = YPmet(FUNCODEREF(fun_update_walkX_1),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YevalSast_linearizeYupdate_walkX);
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSast_linearizeYupdate_walkX);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_update_walkX_1;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YevalSast_linearizeYupdate_walkX,T2);
  lit_6 = YPPsym((P)"ast-walk");
  lit_7 = YPPsym((P)"x-1457");
  lit_8 = YPPsym((P)"x-1456");
  T7 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1457_2 = YPmet(FUNCODEREF(fun_x_1457_2),LITREF(lit_7),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_3)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_3 = YPmet(FUNCODEREF(fun_ast_walk_3),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSast_linearizeYast_walk);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSast_linearizeYast_walk);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_ast_walk_3;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSast_linearizeYast_walk,T8);
  lit_9 = YPPsym((P)"<box-read>");
  T13 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_9),T13);
  VARSET(YevalSast_linearizeYLbox_readG,T12);
  lit_10 = YPPsym((P)"box-reference");
  lit_11 = YPPsym((P)"_x");
  T14 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_4 = YPmet(FUNCODEREF(fun_box_reference_4),LITREF(lit_10),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSast_linearizeYbox_reference);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSast_linearizeYbox_reference);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_box_reference_4;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSast_linearizeYbox_reference,T15);
  lit_12 = YPPsym((P)"box-reference-setter");
  lit_13 = YPPsym((P)"_z");
  T19 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_5 = YPmet(FUNCODEREF(fun_box_reference_setter_5),LITREF(lit_12),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSast_linearizeYbox_reference_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSast_linearizeYbox_reference_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_box_reference_setter_5;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSast_linearizeYbox_reference_setter,T20);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"<box-write>");
  T25 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T24 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_14),T25);
  VARSET(YevalSast_linearizeYLbox_writeG,T24);
  T26 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_6 = YPmet(FUNCODEREF(fun_box_reference_6),LITREF(lit_10),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSast_linearizeYbox_reference);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSast_linearizeYbox_reference);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_box_reference_6;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSast_linearizeYbox_reference,T27);
  T31 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_7 = YPmet(FUNCODEREF(fun_box_reference_setter_7),LITREF(lit_12),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YevalSast_linearizeYbox_reference_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YevalSast_linearizeYbox_reference_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_box_reference_setter_7;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YevalSast_linearizeYbox_reference_setter,T32);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"box-form");
  T36 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_8 = YPmet(FUNCODEREF(fun_box_form_8),LITREF(lit_15),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSast_linearizeYbox_form);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSast_linearizeYbox_form);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_box_form_8;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSast_linearizeYbox_form,T37);
  lit_16 = YPPsym((P)"box-form-setter");
  T41 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_9 = YPmet(FUNCODEREF(fun_box_form_setter_9),LITREF(lit_16),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSast_linearizeYbox_form_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSast_linearizeYbox_form_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_box_form_setter_9;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSast_linearizeYbox_form_setter,T42);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_form),VARREF(YevalSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_17 = YPPsym((P)"<box-creation>");
  T47 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T46 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_17),T47);
  VARSET(YevalSast_linearizeYLbox_creationG,T46);
  T48 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_10 = YPmet(FUNCODEREF(fun_box_reference_10),LITREF(lit_10),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YevalSast_linearizeYbox_reference);
  if (T51 != YPfalse) {
    T50 = VARREF(YevalSast_linearizeYbox_reference);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_box_reference_10;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YevalSast_linearizeYbox_reference,T49);
  T53 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_11 = YPmet(FUNCODEREF(fun_box_reference_setter_11),LITREF(lit_12),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YevalSast_linearizeYbox_reference_setter);
  if (T56 != YPfalse) {
    T55 = VARREF(YevalSast_linearizeYbox_reference_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_box_reference_setter_11;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YevalSast_linearizeYbox_reference_setter,T54);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"insert-box!");
  T58 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_12 = YPmet(FUNCODEREF(fun_insert_boxX_12),LITREF(lit_18),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T61 != YPfalse) {
    T60 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_insert_boxX_12;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YevalSast_linearizeYinsert_boxX,T59);
  T63 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_13 = YPmet(FUNCODEREF(fun_insert_boxX_13),LITREF(lit_18),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_insert_boxX_13;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSast_linearizeYinsert_boxX,T64);
  T68 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),LITREF(lit_18),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_insert_boxX_14;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSast_linearizeYinsert_boxX,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_15 = YPmet(FUNCODEREF(fun_insert_boxX_15),LITREF(lit_18),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_insert_boxX_15;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSast_linearizeYinsert_boxX,T74);
  T78 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_16 = YPmet(FUNCODEREF(fun_insert_boxX_16),LITREF(lit_18),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_insert_boxX_16;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalSast_linearizeYinsert_boxX,T79);
  T83 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_17 = YPmet(FUNCODEREF(fun_insert_boxX_17),LITREF(lit_18),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_insert_boxX_17;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalSast_linearizeYinsert_boxX,T84);
  T88 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_18 = YPmet(FUNCODEREF(fun_insert_boxX_18),LITREF(lit_18),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T91 != YPfalse) {
    T90 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_insert_boxX_18;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YevalSast_linearizeYinsert_boxX,T89);
  lit_19 = YPPsym((P)"boxify-mutable-bindings");
  lit_20 = YPPsym((P)"form");
  lit_21 = YPPsym((P)"bindings");
  lit_22 = YPPsym((P)"loop");
  lit_23 = YPPsym((P)"res");
  T94 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_21)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_19 = YPmet(FUNCODEREF(fun_loop_19),LITREF(lit_22),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_20 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_20),LITREF(lit_19),T93,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSast_linearizeYboxify_mutable_bindings);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSast_linearizeYboxify_mutable_bindings);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_boxify_mutable_bindings_20;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSast_linearizeYboxify_mutable_bindings,T95);
  lit_24 = YPPsym((P)"unconstrained-type?");
  lit_25 = YPPsym((P)"b");
  T99 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_21 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_21),LITREF(lit_24),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_unconstrained_typeQ_21;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T100);
  lit_26 = YPPsym((P)"goo/boot");
  lit_27 = YPPsym((P)"<any>");
  T104 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_22 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_22),LITREF(lit_24),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T107 != YPfalse) {
    T106 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_unconstrained_typeQ_22;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T105);
  T109 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_23 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_23),LITREF(lit_24),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T112 != YPfalse) {
    T111 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_unconstrained_typeQ_23;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T110);
  lit_28 = YPPsym((P)"do-do-analysis!");
  T114 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_analysisX_24 = YPmet(FUNCODEREF(fun_do_do_analysisX_24),LITREF(lit_28),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSast_linearizeYdo_do_analysisX);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSast_linearizeYdo_do_analysisX);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_do_do_analysisX_24;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSast_linearizeYdo_do_analysisX,T115);
  lit_29 = YPPsym((P)"do-analysis!");
  T119 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_25 = YPmet(FUNCODEREF(fun_do_analysisX_25),LITREF(lit_29),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_do_analysisX_25;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSast_linearizeYdo_analysisX,T120);
  T124 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_26 = YPmet(FUNCODEREF(fun_do_analysisX_26),LITREF(lit_29),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_do_analysisX_26;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSast_linearizeYdo_analysisX,T125);
  lit_30 = YPPsym((P)"x");
  T130 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_28 = YPmet(FUNCODEREF(fun_do_analysisX_28),LITREF(lit_29),T129,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_do_analysisX_28;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSast_linearizeYdo_analysisX,T131);
  lit_31 = YPPsym((P)"analyze-ast");
  T135 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_ast_29 = YPmet(FUNCODEREF(fun_analyze_ast_29),LITREF(lit_31),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YevalSast_linearizeYanalyze_ast);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSast_linearizeYanalyze_ast);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_analyze_ast_29;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSast_linearizeYanalyze_ast,T136);
  lit_32 = YPPsym((P)"<free-reference>");
  T141 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T140 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_32),T141);
  VARSET(YevalSast_linearizeYLfree_referenceG,T140);
  lit_33 = YPPsym((P)"reference-offset");
  T142 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_30 = YPmet(FUNCODEREF(fun_reference_offset_30),LITREF(lit_33),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YevalSast_linearizeYreference_offset);
  if (T145 != YPfalse) {
    T144 = VARREF(YevalSast_linearizeYreference_offset);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_reference_offset_30;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YevalSast_linearizeYreference_offset,T143);
  lit_34 = YPPsym((P)"reference-offset-setter");
  T148 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T147 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,T148,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_31 = YPmet(FUNCODEREF(fun_reference_offset_setter_31),LITREF(lit_34),T147,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YevalSast_linearizeYreference_offset_setter);
  if (T151 != YPfalse) {
    T150 = VARREF(YevalSast_linearizeYreference_offset_setter);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_reference_offset_setter_31;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YevalSast_linearizeYreference_offset_setter,T149);
  T153 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_offset),VARREF(YevalSast_linearizeYreference_offset_setter),T153,VARREF(YPprop_unbound_error));
  lit_35 = YPPsym((P)"reference-self?");
  T154 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_32 = YPmet(FUNCODEREF(fun_reference_selfQ_32),LITREF(lit_35),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YevalSast_linearizeYreference_selfQ);
  if (T157 != YPfalse) {
    T156 = VARREF(YevalSast_linearizeYreference_selfQ);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_reference_selfQ_32;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YevalSast_linearizeYreference_selfQ,T155);
  lit_36 = YPPsym((P)"reference-self?-setter");
  T159 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_33 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_33),LITREF(lit_36),T159,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YevalSast_linearizeYreference_selfQ_setter);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSast_linearizeYreference_selfQ_setter);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_reference_selfQ_setter_33;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSast_linearizeYreference_selfQ_setter,T160);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_selfQ),VARREF(YevalSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_37 = YPPsym((P)"lift!");
  T164 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_34 = YPmet(FUNCODEREF(fun_liftX_34),LITREF(lit_37),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YevalSast_linearizeYliftX);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSast_linearizeYliftX);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_liftX_34;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSast_linearizeYliftX,T165);
  lit_38 = YPPsym((P)"lift-procedures!");
  lit_39 = YPPsym((P)"flat-fun");
  T169 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_21)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_35 = YPmet(FUNCODEREF(fun_lift_proceduresX_35),LITREF(lit_38),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_lift_proceduresX_35;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSast_linearizeYlift_proceduresX,T170);
  T174 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_21)),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_36 = YPmet(FUNCODEREF(fun_lift_proceduresX_36),LITREF(lit_38),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_lift_proceduresX_36;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSast_linearizeYlift_proceduresX,T175);
  lit_40 = YPPsym((P)"adjoin-free-binding!");
  lit_41 = YPPsym((P)"ref");
  lit_42 = YPPsym((P)"check");
  lit_43 = YPPsym((P)"i");
  lit_44 = YPPsym((P)"free*");
  lit_45 = YPPsym((P)"add");
  T181 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_37 = YPmet(FUNCODEREF(fun_add_37),LITREF(lit_45),T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(2,LITREF(lit_43),LITREF(lit_44)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_38 = YPmet(FUNCODEREF(fun_check_38),LITREF(lit_42),T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_41)),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_39 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_39),LITREF(lit_40),T179,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSast_linearizeYadjoin_free_bindingX);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSast_linearizeYadjoin_free_bindingX);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_adjoin_free_bindingX_39;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSast_linearizeYadjoin_free_bindingX,T182);
  T186 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_21)),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_40 = YPmet(FUNCODEREF(fun_lift_proceduresX_40),LITREF(lit_38),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_lift_proceduresX_40;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSast_linearizeYlift_proceduresX,T187);
  T191 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_21)),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_41 = YPmet(FUNCODEREF(fun_lift_proceduresX_41),LITREF(lit_38),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_lift_proceduresX_41;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSast_linearizeYlift_proceduresX,T192);
  T196 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_21)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_42 = YPmet(FUNCODEREF(fun_lift_proceduresX_42),LITREF(lit_38),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_lift_proceduresX_42;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSast_linearizeYlift_proceduresX,T197);
  T201 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_21)),YPPlist(3,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_43 = YPmet(FUNCODEREF(fun_lift_proceduresX_43),LITREF(lit_38),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_lift_proceduresX_43;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSast_linearizeYlift_proceduresX,T202);
  T206 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_21)),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_44 = YPmet(FUNCODEREF(fun_lift_proceduresX_44),LITREF(lit_38),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_lift_proceduresX_44;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSast_linearizeYlift_proceduresX,T207);
  lit_46 = YPPsym((P)"<flattened-program>");
  T212 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T211 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_46),T212);
  VARSET(YevalSast_linearizeYLflattened_programG,T211);
  lit_47 = YPPsym((P)"program-form");
  T213 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_45 = YPmet(FUNCODEREF(fun_program_form_45),LITREF(lit_47),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSast_linearizeYprogram_form);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSast_linearizeYprogram_form);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_program_form_45;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSast_linearizeYprogram_form,T214);
  lit_48 = YPPsym((P)"program-form-setter");
  T219 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  T218 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,T219,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_46 = YPmet(FUNCODEREF(fun_program_form_setter_46),LITREF(lit_48),T218,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSast_linearizeYprogram_form_setter);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSast_linearizeYprogram_form_setter);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_program_form_setter_46;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSast_linearizeYprogram_form_setter,T220);
  T224 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_form),VARREF(YevalSast_linearizeYprogram_form_setter),T224,VARREF(YPprop_unbound_error));
  lit_49 = YPPsym((P)"program-quotations");
  T225 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_47 = YPmet(FUNCODEREF(fun_program_quotations_47),LITREF(lit_49),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YevalSast_linearizeYprogram_quotations);
  if (T228 != YPfalse) {
    T227 = VARREF(YevalSast_linearizeYprogram_quotations);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_program_quotations_47;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YevalSast_linearizeYprogram_quotations,T226);
  lit_50 = YPPsym((P)"program-quotations-setter");
  T230 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_48 = YPmet(FUNCODEREF(fun_program_quotations_setter_48),LITREF(lit_50),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSast_linearizeYprogram_quotations_setter);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSast_linearizeYprogram_quotations_setter);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_program_quotations_setter_48;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSast_linearizeYprogram_quotations_setter,T231);
  T237 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T236 = fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T237,ENVNUL,PNUL,YPfalse);
  T239 = fun_49;
  T238 = XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_quotations),VARREF(YevalSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T239);
  T235 = T238;
  return T235;
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268;
DEFCREGS();
loop:
  lit_51 = YPPsym((P)"program-definitions");
  T0 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_50 = YPmet(FUNCODEREF(fun_program_definitions_50),LITREF(lit_51),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_linearizeYprogram_definitions);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_linearizeYprogram_definitions);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_program_definitions_50;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_linearizeYprogram_definitions,T1);
  lit_52 = YPPsym((P)"program-definitions-setter");
  T5 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_51 = YPmet(FUNCODEREF(fun_program_definitions_setter_51),LITREF(lit_52),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSast_linearizeYprogram_definitions_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSast_linearizeYprogram_definitions_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_program_definitions_setter_51;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSast_linearizeYprogram_definitions_setter,T6);
  T10 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T11 = fun_52;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_definitions),VARREF(YevalSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T11);
  lit_53 = YPPsym((P)"<top-level-form>");
  T13 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_53),T13);
  VARSET(YevalSast_linearizeYLtop_level_formG,T12);
  lit_54 = YPPsym((P)"form-program");
  T14 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_53 = YPmet(FUNCODEREF(fun_form_program_53),LITREF(lit_54),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSast_linearizeYform_program);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSast_linearizeYform_program);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_form_program_53;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSast_linearizeYform_program,T15);
  lit_55 = YPPsym((P)"form-program-setter");
  T19 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_54 = YPmet(FUNCODEREF(fun_form_program_setter_54),LITREF(lit_55),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSast_linearizeYform_program_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSast_linearizeYform_program_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_form_program_setter_54;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSast_linearizeYform_program_setter,T20);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),VARREF(YevalSast_linearizeYform_program_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_56 = YPPsym((P)"form-quotations");
  T24 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_55 = YPmet(FUNCODEREF(fun_form_quotations_55),LITREF(lit_56),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSast_linearizeYform_quotations);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSast_linearizeYform_quotations);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_form_quotations_55;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSast_linearizeYform_quotations,T25);
  lit_57 = YPPsym((P)"form-quotations-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_56 = YPmet(FUNCODEREF(fun_form_quotations_setter_56),LITREF(lit_57),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSast_linearizeYform_quotations_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSast_linearizeYform_quotations_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_form_quotations_setter_56;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSast_linearizeYform_quotations_setter,T30);
  T34 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T35 = fun_57;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_quotations),VARREF(YevalSast_linearizeYform_quotations_setter),VARREF(YLanyG),T35);
  lit_58 = YPPsym((P)"form-definitions");
  T36 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_58 = YPmet(FUNCODEREF(fun_form_definitions_58),LITREF(lit_58),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSast_linearizeYform_definitions);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSast_linearizeYform_definitions);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_form_definitions_58;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSast_linearizeYform_definitions,T37);
  lit_59 = YPPsym((P)"form-definitions-setter");
  T41 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_59 = YPmet(FUNCODEREF(fun_form_definitions_setter_59),LITREF(lit_59),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSast_linearizeYform_definitions_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSast_linearizeYform_definitions_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_form_definitions_setter_59;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSast_linearizeYform_definitions_setter,T42);
  T46 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T47 = fun_60;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_definitions),VARREF(YevalSast_linearizeYform_definitions_setter),VARREF(YLanyG),T47);
  lit_60 = YPPsym((P)"<closure-creation>");
  T49 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T48 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_60),T49);
  VARSET(YevalSast_linearizeYLclosure_creationG,T48);
  lit_61 = YPPsym((P)"closure-creation-index");
  T50 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_61 = YPmet(FUNCODEREF(fun_closure_creation_index_61),LITREF(lit_61),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSast_linearizeYclosure_creation_index);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSast_linearizeYclosure_creation_index);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_closure_creation_index_61;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSast_linearizeYclosure_creation_index,T51);
  lit_62 = YPPsym((P)"closure-creation-index-setter");
  T55 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_62 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_62),LITREF(lit_62),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSast_linearizeYclosure_creation_index_setter);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSast_linearizeYclosure_creation_index_setter);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_closure_creation_index_setter_62;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSast_linearizeYclosure_creation_index_setter,T56);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),VARREF(YevalSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_63 = YPPsym((P)"closure-creation-free");
  T60 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_63 = YPmet(FUNCODEREF(fun_closure_creation_free_63),LITREF(lit_63),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalSast_linearizeYclosure_creation_free);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSast_linearizeYclosure_creation_free);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_closure_creation_free_63;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSast_linearizeYclosure_creation_free,T61);
  lit_64 = YPPsym((P)"closure-creation-free-setter");
  T65 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_64 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_64),LITREF(lit_64),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSast_linearizeYclosure_creation_free_setter);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSast_linearizeYclosure_creation_free_setter);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_closure_creation_free_setter_64;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSast_linearizeYclosure_creation_free_setter,T66);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_free),VARREF(YevalSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_65 = YPPsym((P)"flatten-seqs");
  T70 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_65 = YPmet(FUNCODEREF(fun_flatten_seqs_65),LITREF(lit_65),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSast_linearizeYflatten_seqs);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSast_linearizeYflatten_seqs);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_flatten_seqs_65;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSast_linearizeYflatten_seqs,T71);
  lit_66 = YPPsym((P)"s");
  lit_67 = YPPsym((P)"r");
  lit_68 = YPPsym((P)"inner");
  lit_69 = YPPsym((P)"ss");
  T77 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_67)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_66 = YPmet(FUNCODEREF(fun_inner_66),LITREF(lit_68),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(2,LITREF(lit_66),LITREF(lit_67)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_67 = YPmet(FUNCODEREF(fun_loop_67),LITREF(lit_22),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_68 = YPmet(FUNCODEREF(fun_flatten_seqs_68),LITREF(lit_65),T75,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSast_linearizeYflatten_seqs);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSast_linearizeYflatten_seqs);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_flatten_seqs_68;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSast_linearizeYflatten_seqs,T78);
  lit_70 = YPPsym((P)"as-top-level-forms");
  lit_71 = YPPsym((P)"programs");
  T83 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(1,LITREF(lit_71)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_70 = YPmet(FUNCODEREF(fun_as_top_level_forms_70),LITREF(lit_70),T82,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YevalSast_linearizeYas_top_level_forms);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalSast_linearizeYas_top_level_forms);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_as_top_level_forms_70;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalSast_linearizeYas_top_level_forms,T84);
  lit_72 = YPPsym((P)"extract-things!");
  T89 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_72 = YPmet(FUNCODEREF(fun_extract_thingsX_72),LITREF(lit_72),T88,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YevalSast_linearizeYextract_thingsX);
  if (T92 != YPfalse) {
    T91 = VARREF(YevalSast_linearizeYextract_thingsX);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_extract_thingsX_72;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YevalSast_linearizeYextract_thingsX,T90);
  lit_73 = YPPsym((P)"extract!");
  lit_74 = YPPsym((P)"result");
  T94 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_20),LITREF(lit_74)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_73 = YPmet(FUNCODEREF(fun_extractX_73),LITREF(lit_73),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSast_linearizeYextractX);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_extractX_73;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSast_linearizeYextractX,T95);
  lit_75 = YPPsym((P)"quotation");
  T99 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_20),LITREF(lit_74)),YPPlist(3,VARREF(YevalSastYLconstantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_74 = YPmet(FUNCODEREF(fun_extractX_74),LITREF(lit_73),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YevalSast_linearizeYextractX);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_extractX_74;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSast_linearizeYextractX,T100);
  T104 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_20),LITREF(lit_74)),YPPlist(3,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_75 = YPmet(FUNCODEREF(fun_extractX_75),LITREF(lit_73),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YevalSast_linearizeYextractX);
  if (T107 != YPfalse) {
    T106 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_extractX_75;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YevalSast_linearizeYextractX,T105);
  lit_76 = YPPsym((P)"binding");
  T110 = YPsig(YPPlist(1,LITREF(lit_76)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_20),LITREF(lit_74)),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_77 = YPmet(FUNCODEREF(fun_extractX_77),LITREF(lit_73),T109,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSast_linearizeYextractX);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_extractX_77;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSast_linearizeYextractX,T111);
  T115 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_20),LITREF(lit_74)),YPPlist(3,VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_78 = YPmet(FUNCODEREF(fun_extractX_78),LITREF(lit_73),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSast_linearizeYextractX);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_extractX_78;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSast_linearizeYextractX,T116);
  lit_77 = YPPsym((P)"adjoin-definition!");
  T120 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_74),LITREF(lit_30)),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_79 = YPmet(FUNCODEREF(fun_adjoin_definitionX_79),LITREF(lit_77),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSast_linearizeYadjoin_definitionX);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSast_linearizeYadjoin_definitionX);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_adjoin_definitionX_79;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSast_linearizeYadjoin_definitionX,T121);
  lit_78 = YPPsym((P)"split-program");
  lit_79 = YPPsym((P)"max-count");
  T125 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_79)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_80 = YPmet(FUNCODEREF(fun_split_program_80),LITREF(lit_78),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YevalSast_linearizeYsplit_program);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSast_linearizeYsplit_program);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_split_program_80;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSast_linearizeYsplit_program,T126);
  lit_80 = YPPsym((P)"forms");
  lit_81 = YPPsym((P)"es");
  lit_82 = YPPsym((P)"count");
  T132 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_81),LITREF(lit_82)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_81 = YPmet(FUNCODEREF(fun_inner_81),LITREF(lit_68),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(2,LITREF(lit_80),LITREF(lit_66)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_82 = YPmet(FUNCODEREF(fun_loop_82),LITREF(lit_22),T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_79)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_83 = YPmet(FUNCODEREF(fun_split_program_83),LITREF(lit_78),T130,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSast_linearizeYsplit_program);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSast_linearizeYsplit_program);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_split_program_83;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSast_linearizeYsplit_program,T133);
  lit_83 = YPPsym((P)"closurize-main!");
  lit_84 = YPPsym((P)"calls");
  lit_85 = YPPsym((P)"defns");
  lit_86 = YPsb((P)"---main-");
  lit_87 = YPsb((P)"---");
  lit_88 = YPPsym((P)"predefined");
  T138 = YPsig(YPPlist(4,LITREF(lit_84),LITREF(lit_85),LITREF(lit_43),LITREF(lit_80)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_84 = YPmet(FUNCODEREF(fun_loop_84),LITREF(lit_22),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_67),LITREF(lit_79)),YPPlist(3,VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_85 = YPmet(FUNCODEREF(fun_closurize_mainX_85),LITREF(lit_83),T137,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YevalSast_linearizeYclosurize_mainX);
  if (T141 != YPfalse) {
    T140 = VARREF(YevalSast_linearizeYclosurize_mainX);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_closurize_mainX_85;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YevalSast_linearizeYclosurize_mainX,T139);
  lit_89 = YPPsym((P)"<assoc>");
  T144 = (P)YPpair(VARREF(YLanyG),Ynil);
  T143 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_89),T144);
  VARSET(YevalSast_linearizeYLassocG,T143);
  lit_90 = YPPsym((P)"assoc-key");
  T145 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_86 = YPmet(FUNCODEREF(fun_assoc_key_86),LITREF(lit_90),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSast_linearizeYassoc_key);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSast_linearizeYassoc_key);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_assoc_key_86;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSast_linearizeYassoc_key,T146);
  lit_91 = YPPsym((P)"assoc-key-setter");
  T150 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_87 = YPmet(FUNCODEREF(fun_assoc_key_setter_87),LITREF(lit_91),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSast_linearizeYassoc_key_setter);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSast_linearizeYassoc_key_setter);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_assoc_key_setter_87;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSast_linearizeYassoc_key_setter,T151);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),VARREF(YevalSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_92 = YPPsym((P)"assoc-value");
  T155 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_88 = YPmet(FUNCODEREF(fun_assoc_value_88),LITREF(lit_92),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSast_linearizeYassoc_value);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSast_linearizeYassoc_value);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_assoc_value_88;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSast_linearizeYassoc_value,T156);
  lit_93 = YPPsym((P)"assoc-value-setter");
  T160 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_89 = YPmet(FUNCODEREF(fun_assoc_value_setter_89),LITREF(lit_93),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSast_linearizeYassoc_value_setter);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSast_linearizeYassoc_value_setter);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_assoc_value_setter_89;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSast_linearizeYassoc_value_setter,T161);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_value),VARREF(YevalSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_94 = YPPsym((P)"assoc");
  lit_95 = YPPsym((P)"y");
  T165 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_95)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSast_linearizeYLassocG),Ynil);
  YevalSast_linearizeYassoc = YPmet(FUNCODEREF(YevalSast_linearizeYassoc),LITREF(lit_94),T165,ENVNUL,PNUL,YPfalse);
  T166 = YevalSast_linearizeYassoc;
  VARSET(YevalSast_linearizeYassoc,T166);
  lit_96 = YPPsym((P)"assocq");
  lit_97 = YPPsym((P)"l");
  T167 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_97)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_91 = YPmet(FUNCODEREF(fun_assocq_91),LITREF(lit_96),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSast_linearizeYassocq);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSast_linearizeYassocq);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_assocq_91;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSast_linearizeYassocq,T168);
  lit_98 = YPPsym((P)"gather-temporaries!");
  lit_99 = YPPsym((P)"def");
  T173 = YPsig(YPPlist(1,LITREF(lit_99)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_93 = YPmet(FUNCODEREF(fun_gather_temporariesX_93),LITREF(lit_98),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSast_linearizeYgather_temporariesX);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSast_linearizeYgather_temporariesX);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_gather_temporariesX_93;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSast_linearizeYgather_temporariesX,T174);
  lit_100 = YPPsym((P)"collect-temporaries!");
  T178 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_67)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_94 = YPmet(FUNCODEREF(fun_collect_temporariesX_94),LITREF(lit_100),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_collect_temporariesX_94;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T179);
  T183 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_67)),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_95 = YPmet(FUNCODEREF(fun_collect_temporariesX_95),LITREF(lit_100),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_collect_temporariesX_95;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T184);
  lit_101 = YPPsym((P)"prepend-renamings");
  lit_102 = YPPsym((P)"z");
  T189 = YPsig(YPPlist(3,LITREF(lit_102),LITREF(lit_30),LITREF(lit_95)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_96 = YPmet(FUNCODEREF(fun_loop_96),LITREF(lit_22),T189,ENVNUL,PNUL,YPfalse);
  T188 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_95),LITREF(lit_67)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYprepend_renamings = YPmet(FUNCODEREF(YevalSast_linearizeYprepend_renamings),LITREF(lit_101),T188,ENVNUL,PNUL,YPfalse);
  T190 = YevalSast_linearizeYprepend_renamings;
  VARSET(YevalSast_linearizeYprepend_renamings,T190);
  T191 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_67)),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_98 = YPmet(FUNCODEREF(fun_collect_temporariesX_98),LITREF(lit_100),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_collect_temporariesX_98;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T192);
  T196 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_67)),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_99 = YPmet(FUNCODEREF(fun_collect_temporariesX_99),LITREF(lit_100),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_collect_temporariesX_99;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T197);
  lit_103 = YPPsym((P)"adjoin-temporary-variables!");
  lit_104 = YPPsym((P)"new-bindings");
  lit_105 = YPPsym((P)"adjoin");
  lit_106 = YPPsym((P)"temps");
  T202 = YPsig(YPPlist(2,LITREF(lit_106),LITREF(lit_21)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_100 = YPmet(FUNCODEREF(fun_adjoin_100),LITREF(lit_105),T202,ENVNUL,PNUL,YPfalse);
  T201 = YPsig(YPPlist(2,LITREF(lit_39),LITREF(lit_104)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_101 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_101),LITREF(lit_103),T201,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSast_linearizeYadjoin_temporary_variablesX);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSast_linearizeYadjoin_temporary_variablesX);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_adjoin_temporary_variablesX_101;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSast_linearizeYadjoin_temporary_variablesX,T203);
  lit_107 = YPPsym((P)"<renamed-local-binding>");
  T208 = (P)YPpair(VARREF(YevalSastYLlocal_bindingG),Ynil);
  T207 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_107),T208);
  VARSET(YevalSast_linearizeYLrenamed_local_bindingG,T207);
  lit_108 = YPPsym((P)"binding-index");
  T209 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_102 = YPmet(FUNCODEREF(fun_binding_index_102),LITREF(lit_108),T209,ENVNUL,PNUL,YPfalse);
  T212 = BOUNDP(YevalSastYbinding_index);
  if (T212 != YPfalse) {
    T211 = VARREF(YevalSastYbinding_index);
  } else {
    T211 = YPfalse;
  }
  T213 = fun_binding_index_102;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T213);
  VARSET(YevalSastYbinding_index,T210);
  lit_109 = YPPsym((P)"binding-index-setter");
  T214 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_103 = YPmet(FUNCODEREF(fun_binding_index_setter_103),LITREF(lit_109),T214,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YevalSastYbinding_index_setter);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSastYbinding_index_setter);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_binding_index_setter_103;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSastYbinding_index_setter,T215);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  DYNDEFSET(YevalSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_110 = YPPsym((P)"new-renamed-binding");
  T219 = YPsig(YPPlist(1,LITREF(lit_76)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_104 = YPmet(FUNCODEREF(fun_new_renamed_binding_104),LITREF(lit_110),T219,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSast_linearizeYnew_renamed_binding);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSast_linearizeYnew_renamed_binding);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_new_renamed_binding_104;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSast_linearizeYnew_renamed_binding,T220);
  VARSET(YevalSast_linearizeYTregister_passiveQT,YPfalse);
  lit_111 = YPPsym((P)"register-allocate!");
  lit_112 = YPPsym((P)"register-passive?");
  T227 = YPsig(YPPlist(1,LITREF(lit_99)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T227,ENVNUL,PNUL,YPfalse);
  T226 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T226,ENVNUL,PNUL,YPfalse);
  T225 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T225,ENVNUL,PNUL,YPfalse);
  T224 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_112)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_108 = YPmet(FUNCODEREF(fun_register_allocateX_108),LITREF(lit_111),T224,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(YevalSast_linearizeYregister_allocateX);
  if (T230 != YPfalse) {
    T229 = VARREF(YevalSast_linearizeYregister_allocateX);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_register_allocateX_108;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YevalSast_linearizeYregister_allocateX,T228);
  lit_113 = YPPsym((P)"allocate-register");
  lit_114 = YPPsym((P)"val?");
  T232 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_114)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYallocate_register = YPmet(FUNCODEREF(YevalSast_linearizeYallocate_register),LITREF(lit_113),T232,ENVNUL,PNUL,YPfalse);
  T233 = YevalSast_linearizeYallocate_register;
  VARSET(YevalSast_linearizeYallocate_register,T233);
  lit_115 = YPPsym((P)"collect-registers!");
  T234 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_114)),YPPlist(3,VARREF(YevalSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_110 = YPmet(FUNCODEREF(fun_collect_registersX_110),LITREF(lit_115),T234,ENVNUL,PNUL,YPfalse);
  T237 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T237 != YPfalse) {
    T236 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_collect_registersX_110;
  T235 = XCALL2(1,VARREF(YPdefine_method),T236,T238);
  VARSET(YevalSast_linearizeYcollect_registersX,T235);
  T240 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_111 = YPmet(FUNCODEREF(fun_loop_111),LITREF(lit_22),T240,ENVNUL,PNUL,YPfalse);
  T239 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_114)),YPPlist(3,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_112 = YPmet(FUNCODEREF(fun_collect_registersX_112),LITREF(lit_115),T239,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T243 != YPfalse) {
    T242 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_collect_registersX_112;
  T241 = XCALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(YevalSast_linearizeYcollect_registersX,T241);
  T245 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_114)),YPPlist(3,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_113 = YPmet(FUNCODEREF(fun_collect_registersX_113),LITREF(lit_115),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T248 != YPfalse) {
    T247 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_collect_registersX_113;
  T246 = XCALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YevalSast_linearizeYcollect_registersX,T246);
  T251 = YPsig(YPPlist(1,LITREF(lit_99)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T251,ENVNUL,PNUL,YPfalse);
  T250 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_114)),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_115 = YPmet(FUNCODEREF(fun_collect_registersX_115),LITREF(lit_115),T250,ENVNUL,PNUL,YPfalse);
  T254 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T254 != YPfalse) {
    T253 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T253 = YPfalse;
  }
  T255 = fun_collect_registersX_115;
  T252 = XCALL2(1,VARREF(YPdefine_method),T253,T255);
  VARSET(YevalSast_linearizeYcollect_registersX,T252);
  T256 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_114)),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_115),T256,ENVNUL,PNUL,YPfalse);
  T259 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T259 != YPfalse) {
    T258 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T258 = YPfalse;
  }
  T260 = fun_collect_registersX_116;
  T257 = XCALL2(1,VARREF(YPdefine_method),T258,T260);
  VARSET(YevalSast_linearizeYcollect_registersX,T257);
  T263 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_39),LITREF(lit_114)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T262 = fun_collect_registersX_117 = YPmet(FUNCODEREF(fun_collect_registersX_117),LITREF(lit_115),T263,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T267 != YPfalse) {
    T266 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_collect_registersX_117;
  T265 = XCALL2(1,VARREF(YPdefine_method),T266,T268);
  T264 = VARSET(YevalSast_linearizeYcollect_registersX,T265);
  T261 = T264;
  return T261;
}

P YevalSast_linearizeY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
DEFCREGS();
loop:
  lit_116 = YPPsym((P)"ast-contains-fun?");
  T0 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_118 = YPmet(FUNCODEREF(fun_ast_contains_funQ_118),LITREF(lit_116),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_linearizeYast_contains_funQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_linearizeYast_contains_funQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ast_contains_funQ_118;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_linearizeYast_contains_funQ,T1);
  lit_117 = YPPsym((P)"return");
  lit_118 = YPPsym((P)"walk");
  T7 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_119 = YPmet(FUNCODEREF(fun_walk_119),LITREF(lit_118),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_121 = YPmet(FUNCODEREF(fun_ast_contains_funQ_121),LITREF(lit_116),T5,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSast_linearizeYast_contains_funQ);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSast_linearizeYast_contains_funQ);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_ast_contains_funQ_121;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSast_linearizeYast_contains_funQ,T8);
  T12 = YPfalse;
  return T12;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSpacker},
  {&module_info_gooSruntime},
  {&module_info_evalSast},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fin", &module_info_gooSboot, "fin"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"app", &module_info_gooSmacros, "app"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"export", &module_info_gooSboot, "export"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"tup", &module_info_gooSboot, "tup"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"or", &module_info_gooSmacros, "or"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"new", &module_info_gooSboot, "new"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"tail", &module_info_gooSboot, "tail"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"min", &module_info_gooSmag, "min"},
  {"nul", &module_info_gooSboot, "nul"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"~==", &module_info_gooSmath, "~=="},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"%str", &module_info_gooSboot, "%str"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"^", &module_info_gooSmath, "^"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"==", &module_info_gooSmacros, "=="},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"match", &module_info_gooSmacros, "match"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"cos", &module_info_gooSmath, "cos"},
  {"now", &module_info_gooScolsScol, "now"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"mod", &module_info_gooSmath, "mod"},
  {"pair", &module_info_gooSmacros, "pair"},
  {">=", &module_info_gooSmag, ">="},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"~=", &module_info_gooSmath, "~="},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"try", &module_info_gooSboot, "try"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<=", &module_info_gooSmag, "<="},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"col", &module_info_gooScolsScol, "col"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"when", &module_info_gooSmacros, "when"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"ds", &module_info_gooSboot, "ds"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"ct", &module_info_gooSboot, "ct"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"|", &module_info_gooSmath, "|"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"dss", &module_info_gooSboot, "dss"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"head", &module_info_gooSboot, "head"},
  {"%get", &module_info_gooSboot, "%get"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"into", &module_info_gooScolsScol, "into"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"div", &module_info_gooSmath, "div"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"t?", &module_info_gooStypes, "t?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"error", &module_info_gooSboot, "error"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"always", &module_info_gooSruntime, "always"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"quote", &module_info_gooSboot, "quote"},
  {"*", &module_info_gooSmath, "*"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"%su", &module_info_gooSboot, "%su"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"df", &module_info_gooSboot, "df"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"packing", &module_info_gooSpacker, "packing"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<prim-int>", &module_info_gooSboot, "<prim-int>"},
  {"while", &module_info_gooSmacros, "while"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"if", &module_info_gooSboot, "if"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"t=", &module_info_gooStypes, "t="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"dc", &module_info_gooSboot, "dc"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"for", &module_info_gooSmacros, "for"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"~", &module_info_gooSmath, "~"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"round", &module_info_gooSmath, "round"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"map", &module_info_gooSmacros, "map"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"t+", &module_info_gooStypes, "t+"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"+", &module_info_gooSmath, "+"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"neg", &module_info_gooSmath, "neg"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"let", &module_info_gooSboot, "let"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"len", &module_info_gooStypes, "len"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"set", &module_info_gooSboot, "set"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"even?", &module_info_gooSmath, "even?"},
  {">>", &module_info_gooSmath, ">>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"read", &module_info_gooSruntime, "read"},
  {"<<", &module_info_gooSmath, "<<"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"rem", &module_info_gooSmath, "rem"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"logn", &module_info_gooSmath, "logn"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"add", &module_info_gooScolsScol, "add"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"-", &module_info_gooSmath, "-"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"log", &module_info_gooSmath, "log"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"as", &module_info_gooStypes, "as"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"def", &module_info_gooSboot, "def"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"find", &module_info_gooScolsScol, "find"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"@+", &module_info_gooSboot, "@+"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"&", &module_info_gooSmath, "&"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"do", &module_info_gooSmacros, "do"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"op", &module_info_gooSmacros, "op"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {">", &module_info_gooSmag, ">"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"@len", &module_info_gooSboot, "@len"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"@<", &module_info_gooSboot, "@<"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"<", &module_info_gooSmag, "<"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"use", &module_info_gooSboot, "use"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"$e", &module_info_gooSmath, "$e"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"=", &module_info_gooSmath, "="},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"max", &module_info_gooSmag, "max"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"ast-contains-fun?", CVAR, &YevalSast_linearizeYast_contains_funQ},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"do-do-analysis!", CVAR, &YevalSast_linearizeYdo_do_analysisX},
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"do-analysis!", CVAR, &YevalSast_linearizeYdo_analysisX},
  {"analyze-ast", CVAR, &YevalSast_linearizeYanalyze_ast},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"update-walk!", CVAR, &YevalSast_linearizeYupdate_walkX},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"---main-0---", PVAR, NULL},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"ast-walk", CVAR, &YevalSast_linearizeYast_walk},
  {"---main-1---", PVAR, NULL},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"unconstrained-type?", CVAR, &YevalSast_linearizeYunconstrained_typeQ},
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"---main-2---", PVAR, NULL},
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<top-level-form>", "<top-level-form>"},
  {"form-quotations", "form-quotations"},
  {"register-allocate!", "register-allocate!"},
  {"form-program", "form-program"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"insert-box!", "insert-box!"},
  {"program-definitions", "program-definitions"},
  {"extract-things!", "extract-things!"},
  {"closurize-main!", "closurize-main!"},
  {"program-form", "program-form"},
  {"reference-offset", "reference-offset"},
  {"reference-self?", "reference-self?"},
  {"<free-reference>", "<free-reference>"},
  {"lift!", "lift!"},
  {"program-quotations", "program-quotations"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"*register-passive?*", "*register-passive?*"},
  {"update-walk!", "update-walk!"},
  {"<box-read>", "<box-read>"},
  {"<box-creation>", "<box-creation>"},
  {"<box-write>", "<box-write>"},
  {"analyze-ast", "analyze-ast"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"box-form", "box-form"},
  {"<closure-creation>", "<closure-creation>"},
  {"box-reference", "box-reference"},
  {"closure-creation-index", "closure-creation-index"},
  {"form-definitions", "form-definitions"},
  {"flatten-seqs", "flatten-seqs"},
  {"closure-creation-free", "closure-creation-free"},
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

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooSruntime (void);
extern void load_module_evalSast (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_evalSast_linearize (void);

void load_module_evalSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSpacker();
  load_module_gooSruntime();
  load_module_evalSast();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();

  (P)YevalSast_linearizeY___main_0___();
  (P)YevalSast_linearizeY___main_1___();
  (P)YevalSast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
