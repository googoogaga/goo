/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-linearize */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalSast_linearizeYdo_do_analysisX,"eval/ast-linearize","do-do-analysis!");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
DEF(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSast_linearizeYdo_analysisX,"eval/ast-linearize","do-analysis!");
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
DEF(YevalSast_linearizeYast_walk,"eval/ast-linearize","ast-walk");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(Ytup,"goo/boot","tup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YLcolG,"goo/boot","<col>");
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_41);
DEFLIT(lit_59);
DEFLIT(lit_6);
DEFLIT(lit_48);
DEFLIT(lit_8);
DEFLIT(lit_61);
DEFLIT(lit_94);
DEFLIT(lit_58);
DEFLIT(lit_19);
DEFLIT(lit_47);
DEFLIT(lit_43);
DEFLIT(lit_18);
DEFLIT(lit_3);
DEFLIT(lit_39);
DEFLIT(lit_92);
DEFLIT(lit_117);
DEFLIT(lit_109);
DEFLIT(lit_72);
DEFLIT(lit_78);
DEFLIT(lit_27);
DEFLIT(lit_87);
DEFLIT(lit_68);
DEFLIT(lit_0);
DEFLIT(lit_108);
DEFLIT(lit_14);
DEFLIT(lit_12);
DEFLIT(lit_5);
DEFLIT(lit_32);
DEFLIT(lit_15);
DEFLIT(lit_34);
DEFLIT(lit_73);
DEFLIT(lit_90);
DEFLIT(lit_10);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_93);
DEFLIT(lit_96);
DEFLIT(lit_55);
DEFLIT(lit_52);
DEFLIT(lit_102);
DEFLIT(lit_84);
DEFLIT(lit_54);
DEFLIT(lit_112);
DEFLIT(lit_51);
DEFLIT(lit_97);
DEFLIT(lit_42);
DEFLIT(lit_20);
DEFLIT(lit_111);
DEFLIT(lit_113);
DEFLIT(lit_1);
DEFLIT(lit_65);
DEFLIT(lit_31);
DEFLIT(lit_110);
DEFLIT(lit_103);
DEFLIT(lit_116);
DEFLIT(lit_57);
DEFLIT(lit_63);
DEFLIT(lit_75);
DEFLIT(lit_82);
DEFLIT(lit_46);
DEFLIT(lit_7);
DEFLIT(lit_21);
DEFLIT(lit_101);
DEFLIT(lit_70);
DEFLIT(lit_71);
DEFLIT(lit_95);
DEFLIT(lit_83);
DEFLIT(lit_53);
DEFLIT(lit_37);
DEFLIT(lit_38);
DEFLIT(lit_69);
DEFLIT(lit_74);
DEFLIT(lit_76);
DEFLIT(lit_118);
DEFLIT(lit_56);
DEFLIT(lit_17);
DEFLIT(lit_29);
DEFLIT(lit_4);
DEFLIT(lit_67);
DEFLIT(lit_106);
DEFLIT(lit_64);
DEFLIT(lit_28);
DEFLIT(lit_88);
DEFLIT(lit_60);
DEFLIT(lit_86);
DEFLIT(lit_107);
DEFLIT(lit_2);
DEFLIT(lit_26);
DEFLIT(lit_50);
DEFLIT(lit_89);
DEFLIT(lit_24);
DEFLIT(lit_79);
DEFLIT(lit_49);
DEFLIT(lit_11);
DEFLIT(lit_85);
DEFLIT(lit_80);
DEFLIT(lit_9);
DEFLIT(lit_45);
DEFLIT(lit_36);
DEFLIT(lit_91);
DEFLIT(lit_40);
DEFLIT(lit_104);
DEFLIT(lit_105);
DEFLIT(lit_44);
DEFLIT(lit_77);
DEFLIT(lit_35);
DEFLIT(lit_66);
DEFLIT(lit_100);
DEFLIT(lit_114);
DEFLIT(lit_25);
DEFLIT(lit_16);
DEFLIT(lit_81);
DEFLIT(lit_98);
DEFLIT(lit_99);
DEFLIT(lit_22);
DEFLIT(lit_115);
DEFLIT(lit_13);
DEFLIT(lit_62);
DEFLIT(lit_30);

/* FUNCTIONS: */

LOCFOR(fun_x_1448_0);
LOCFOR(fun_update_walkX_1);
LOCFOR(fun_x_1450_2);
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

FUNCODEDEF(fun_x_1448_0) {
  P x_1447_;
  P xF1917;
  P setterF1916;
  P getterF1915;
  P propF1914;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(x_1447_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1447_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1447_);
    propF1914 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1914);
    getterF1915 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF1914);
    setterF1916 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1915,VARREF(YevalSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1915);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF1915,FREEREF(0));
        xF1917 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF1917,VARREF(YevalSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF1917,FREEREF(2));
          T17 = CALL2(1,setterF1916,T18,FREEREF(0));
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
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1447_);
    a1 = T20;
    x_1447_ = a1;
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
  P x_1448F1918;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1448_0,4);
  x_1448F1918 = T0;
  FUNINIT(x_1448F1918, 4,o_,g_,args_,x_1448F1918);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1448F1918,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1450_2) {
  P x_1449_;
  P xF1921;
  P getterF1920;
  P propF1919;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(x_1449_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1449_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1449_);
    propF1919 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1919);
    getterF1920 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1920,VARREF(YevalSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1920);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF1920,FREEREF(0));
        xF1921 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF1921,VARREF(YevalSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF1921,FREEREF(2));
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
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1449_);
    a1 = T17;
    x_1449_ = a1;
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
  P x_1450F1922;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1450_2,4);
  x_1450F1922 = T0;
  FUNINIT(x_1450F1922, 4,o_,g_,args_,x_1450F1922);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1450F1922,T2);
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
  P creatorF1924;
  P bindingF1923;
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
    bindingF1923 = T5;
    T7 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF1923);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF1923);
      T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T10);
      creatorF1924 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF1924,res_);
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
  P loopF1925;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_19,2);
  loopF1925 = T2;
  FUNINIT(loopF1925, 2,form_,loopF1925);
  T3 = CALL2(0,loopF1925,Ynil,bindings_);
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
  P tmpF1926;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_26));
  tmpF1926 = T1;
  if (tmpF1926 != YPfalse) {
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
  P tmpF1931;
  P tmpF1930;
  P tmpF1929;
  P tmpF1928;
  P metF1927;
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
    metF1927 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF1927,VARREF(YevalSastYLast_functionG));
    tmpF1928 = T8;
    if (tmpF1928 != YPfalse) {
      T12 = fun_27;
      T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF1927);
      T11 = CALL2(1,VARREF(YgooScolsScolYallQ),T12,T13);
      tmpF1929 = T11;
      if (tmpF1929 != YPfalse) {
        T17 = CALL1(1,VARREF(YevalSastYfunction_value),metF1927);
        T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T17);
        tmpF1930 = T16;
        if (tmpF1930 != YPfalse) {
          T21 = CALL1(1,VARREF(YevalSastYfunction_naryQ),metF1927);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF1931 = T20;
          if (tmpF1931 != YPfalse) {
            T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF1927);
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
  P offsetF1933;
  P bF1932;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF1932 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF1932);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1933 = T5;
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF1932,VARREF(YevalSast_linearizeYreference_offset),offsetF1933,VARREF(YevalSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_37) {
  P freeT_;
  P tailF1934;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF1934 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF1934);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF1934;
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
  P addF1936;
  P new_envF1935;
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
    new_envF1935 = T3;
    T6 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF1935,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_37,2);
      addF1936 = T9;
      FUNINIT(addF1936, 2,new_envF1935,addF1936);
      T11 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF1936,T11);
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
  P checkF1937;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_38,3);
  checkF1937 = T1;
  FUNINIT(checkF1937, 3,ref_,flat_fun_,checkF1937);
  T3 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF1937,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_40) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1938;
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
  new_bindingsF1938 = T3;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF1938);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_41) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1939;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF1939 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1939);
  T5 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF1939);
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
  P innerF1940;
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
    innerF1940 = T4;
    FUNINIT(innerF1940, 3,s_,FREEREF(0),innerF1940);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF1940,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_68) {
  P o_;
  P loopF1941;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_67,1);
  loopF1941 = T1;
  FUNINIT(loopF1941, 1,loopF1941);
  T2 = CALL2(0,loopF1941,o_,Ynil);
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
  P resultF1943;
  P formsF1942;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T2);
  formsF1942 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF1943 = T4;
  T7 = FUNFAB(fun_71,1,resultF1943);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF1942);
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),T6);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T5,resultF1943);
  T3 = resultF1943;
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
  P x_1451F1953;
  P qbF1952;
  P probeF1951;
  P indexF1950;
  P qbTF1949;
  P tmpF1948;
  P tmpF1947;
  P tmpF1946;
  P tmpF1945;
  P valueF1944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF1944 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1944,YPfalse);
  tmpF1945 = T4;
  if (tmpF1945 != YPfalse) {
    T5 = tmpF1945;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1944,YPtrue);
    tmpF1946 = T7;
    if (tmpF1946 != YPfalse) {
      T8 = tmpF1946;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1944,Ynil);
      tmpF1947 = T10;
      if (tmpF1947 != YPfalse) {
        T11 = tmpF1947;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF1944,VARREF(YLintG));
        tmpF1948 = T13;
        if (tmpF1948 != YPfalse) {
          T14 = tmpF1948;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF1944,VARREF(YLchrG));
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
    qbTF1949 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF1949);
    indexF1950 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF1949,valueF1944,YPfalse);
    probeF1951 = T21;
    if (probeF1951 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF1951);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_75),VARREF(YevalSastYbinding_name),indexF1950,VARREF(YevalSastYbinding_info),valueF1944);
      qbF1952 = T25;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF1952,qbTF1949,valueF1944);
      x_1451F1953 = form_;
      T28 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),x_1451F1953);
      T27 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T28,qbF1952);
      T26 = CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T27,x_1451F1953);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF1952);
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
  P indexF1956;
  P free_bindingsF1955;
  P freeF1954;
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
  freeF1954 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF1954);
  free_bindingsF1955 = T11;
  T13 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF1956 = T13;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF1956,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF1955,o_);
  T14 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF1956,VARREF(YevalSast_linearizeYclosure_creation_free),freeF1954);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_78) {
  P o_,form_,result_;
  P x_1452F1958;
  P primF1957;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF1957 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),primF1957);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T2,primF1957);
  x_1452F1958 = result_;
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1452F1958);
  T5 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,primF1957);
  T4 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T5,x_1452F1958);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_79) {
  P form_,result_,x_;
  P x_1454F1961;
  P x_1453F1960;
  P new_indexF1959;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF1959 = T1;
  x_1453F1960 = result_;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1453F1960);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T4,x_1453F1960);
  x_1454F1961 = form_;
  T8 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),x_1454F1961);
  T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,x_);
  T6 = CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T7,x_1454F1961);
  T0 = new_indexF1959;
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
  P innerF1962;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_81,4);
  innerF1962 = T1;
  FUNINIT(innerF1962, 4,forms_,FREEREF(0),FREEREF(1),innerF1962);
  T2 = CALL3(0,innerF1962,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_83) {
  P o_,max_count_;
  P loopF1963;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_82,2);
  loopF1963 = T1;
  FUNINIT(loopF1963, 2,max_count_,loopF1963);
  T2 = CALL2(0,loopF1963,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_84) {
  P calls_,defns_,i_,forms_;
  P callF1967;
  P defnF1966;
  P bindingF1965;
  P nameF1964;
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
    nameF1964 = T8;
    T10 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(1),nameF1964,YPfalse,LITREF(lit_88));
    bindingF1965 = T10;
    T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF1964,YPint((P)4));
    T14 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF1965,VARREF(YevalSastYfunction_debug_name),T13,VARREF(YevalSastYfunction_signature),T14,VARREF(YevalSastYfunction_body),T15);
    defnF1966 = T12;
    T18 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF1965,VARREF(YevalSastYapplication_arguments),T18,VARREF(YevalSastYapplication_tailQ),YPfalse);
    callF1967 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF1967,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF1966,defns_);
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
  P loopF1970;
  P base_indexF1969;
  P formsF1968;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T2,max_count_);
  formsF1968 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF1969 = T4;
  T7 = FUNSHELL(1,fun_loop_84,3);
  loopF1970 = T7;
  FUNINIT(loopF1970, 3,o_,r_,loopF1970);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T8 = CALL4(0,loopF1970,Ynil,T9,YPint((P)0),formsF1968);
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
  P bF1972;
  P bindingF1971;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF1971 = T1;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF1971,r_);
  bF1972 = T3;
  if (bF1972 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF1972);
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
  P loopF1973;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_96,1);
  loopF1973 = T1;
  FUNINIT(loopF1973, 1,loopF1973);
  T2 = CALL3(0,loopF1973,r_,x_,y_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_98) {
  P o_,flat_fun_,r_;
  P new_rF1975;
  P new_bindingsF1974;
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
  new_bindingsF1974 = T3;
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T7,new_bindingsF1974,r_);
  new_rF1975 = T6;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1974);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF1974,o_);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T8 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T9,flat_fun_,new_rF1975);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T8,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_99) {
  P o_,flat_fun_,r_;
  P new_rF1977;
  P new_bindingsF1976;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF1976 = T1;
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF1976,r_);
  new_rF1977 = T4;
  T7 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF1977);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,T8);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T6,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1976);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF1976,o_);
  T10 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T9 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF1977);
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
  P adjoinF1978;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_100,2);
  adjoinF1978 = T1;
  FUNINIT(adjoinF1978, 2,flat_fun_,adjoinF1978);
  T3 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF1978,T3,new_bindings_);
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
  P x_1455F1979;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1455F1979 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_106,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_107,1,x_1455F1979);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,flat_fun_,valQ_;
  P tmpF1981;
  P tmpF1980;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF1980 = valQ_;
  if (tmpF1980 != YPfalse) {
    tmpF1981 = flat_fun_;
    if (tmpF1981 != YPfalse) {
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
  P tmpF1983;
  P next_xF1982;
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
    next_xF1982 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF1983 = FREEREF(2);
    if (tmpF1983 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF1982);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF1982;
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
  P loopF1984;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_111,4);
  loopF1984 = T1;
  FUNINIT(loopF1984, 4,o_,flat_fun_,valQ_,loopF1984);
  T2 = CALL1(0,loopF1984,o_);
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
  P walkF1985;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_119,2);
  walkF1985 = T0;
  FUNINIT(walkF1985, 2,return_,walkF1985);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYast_walk),walkF1985,FREEREF(0));
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
  lit_4 = YPPsym((P)"x-1448");
  lit_5 = YPPsym((P)"x-1447");
  T1 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1448_0 = YPmet(FUNCODEREF(fun_x_1448_0),LITREF(lit_4),T1,ENVNUL,PNUL,YPfalse);
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
  lit_7 = YPPsym((P)"x-1450");
  lit_8 = YPPsym((P)"x-1449");
  T7 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1450_2 = YPmet(FUNCODEREF(fun_x_1450_2),LITREF(lit_7),T7,ENVNUL,PNUL,YPfalse);
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
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrange;

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
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"match", &module_info_gooSmacros, "match"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {">", &module_info_gooSmag, ">"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<", &module_info_gooSmag, "<"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"|", &module_info_gooSmath, "|"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {"read", &module_info_gooSruntime, "read"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"~=", &module_info_gooSmath, "~="},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"t?", &module_info_gooStypes, "t?"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"<=", &module_info_gooSmag, "<="},
  {"program-type", &module_info_evalSast, "program-type"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"items", &module_info_gooScolsScol, "items"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"df", &module_info_gooSboot, "df"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"while", &module_info_gooSmacros, "while"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"round", &module_info_gooSmath, "round"},
  {"%str", &module_info_gooSboot, "%str"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dv", &module_info_gooSboot, "dv"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"head", &module_info_gooSboot, "head"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"1+", &module_info_gooSmath, "1+"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"floor", &module_info_gooSmath, "floor"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"into", &module_info_gooScolsScol, "into"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"-", &module_info_gooSmath, "-"},
  {"and", &module_info_gooSmacros, "and"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"when", &module_info_gooSmacros, "when"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"op", &module_info_gooSmacros, "op"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"try", &module_info_gooSboot, "try"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"^", &module_info_gooSmath, "^"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"==", &module_info_gooSmacros, "=="},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-1---", PVAR, NULL},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {"update-walk!", CVAR, &YevalSast_linearizeYupdate_walkX},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"do-do-analysis!", CVAR, &YevalSast_linearizeYdo_do_analysisX},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"ast-contains-fun?", CVAR, &YevalSast_linearizeYast_contains_funQ},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {"---main-0---", PVAR, NULL},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"analyze-ast", CVAR, &YevalSast_linearizeYanalyze_ast},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"do-analysis!", CVAR, &YevalSast_linearizeYdo_analysisX},
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"ast-walk", CVAR, &YevalSast_linearizeYast_walk},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {"unconstrained-type?", CVAR, &YevalSast_linearizeYunconstrained_typeQ},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"---main-2---", PVAR, NULL},
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"insert-box!", "insert-box!"},
  {"update-walk!", "update-walk!"},
  {"extract-things!", "extract-things!"},
  {"<box-read>", "<box-read>"},
  {"box-reference", "box-reference"},
  {"closurize-main!", "closurize-main!"},
  {"<box-write>", "<box-write>"},
  {"<free-reference>", "<free-reference>"},
  {"*register-passive?*", "*register-passive?*"},
  {"lift!", "lift!"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"analyze-ast", "analyze-ast"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"form-program", "form-program"},
  {"reference-self?", "reference-self?"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"<top-level-form>", "<top-level-form>"},
  {"<closure-creation>", "<closure-creation>"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"box-form", "box-form"},
  {"<box-creation>", "<box-creation>"},
  {"closure-creation-index", "closure-creation-index"},
  {"program-definitions", "program-definitions"},
  {"program-quotations", "program-quotations"},
  {"form-definitions", "form-definitions"},
  {"form-quotations", "form-quotations"},
  {"register-allocate!", "register-allocate!"},
  {"closure-creation-free", "closure-creation-free"},
  {"flatten-seqs", "flatten-seqs"},
  {"program-form", "program-form"},
  {"reference-offset", "reference-offset"},
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
