/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-eval */

EXT(Yclass_props,"goo/boot","class-props");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSast_evalYTstackT,"eval/ast-eval","*stack*");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Ynew,"goo/boot","new");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YevalSast_evalYenv_values_setter,"eval/ast-eval","env-values-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSast_evalYenv_names_setter,"eval/ast-eval","env-names-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSast_evalYenv_function_setter,"eval/ast-eval","env-function-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYload_in,"eval/ast","load-in");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
DEF(YevalSast_evalYenv_parent_setter,"eval/ast-eval","env-parent-setter");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_30);
DEFLIT(lit_5);
DEFLIT(lit_26);
DEFLIT(lit_23);
DEFLIT(lit_38);
DEFLIT(lit_65);
DEFLIT(lit_51);
DEFLIT(lit_13);
DEFLIT(lit_36);
DEFLIT(lit_78);
DEFLIT(lit_63);
DEFLIT(lit_54);
DEFLIT(lit_19);
DEFLIT(lit_15);
DEFLIT(lit_3);
DEFLIT(lit_43);
DEFLIT(lit_77);
DEFLIT(lit_47);
DEFLIT(lit_1);
DEFLIT(lit_56);
DEFLIT(lit_72);
DEFLIT(lit_42);
DEFLIT(lit_76);
DEFLIT(lit_64);
DEFLIT(lit_57);
DEFLIT(lit_0);
DEFLIT(lit_79);
DEFLIT(lit_16);
DEFLIT(lit_74);
DEFLIT(lit_69);
DEFLIT(lit_68);
DEFLIT(lit_18);
DEFLIT(lit_62);
DEFLIT(lit_7);
DEFLIT(lit_71);
DEFLIT(lit_53);
DEFLIT(lit_60);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_37);
DEFLIT(lit_2);
DEFLIT(lit_81);
DEFLIT(lit_67);
DEFLIT(lit_39);
DEFLIT(lit_40);
DEFLIT(lit_80);
DEFLIT(lit_70);
DEFLIT(lit_35);
DEFLIT(lit_33);
DEFLIT(lit_75);
DEFLIT(lit_17);
DEFLIT(lit_41);
DEFLIT(lit_9);
DEFLIT(lit_45);
DEFLIT(lit_14);
DEFLIT(lit_66);
DEFLIT(lit_29);
DEFLIT(lit_52);
DEFLIT(lit_44);
DEFLIT(lit_58);
DEFLIT(lit_4);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_8);
DEFLIT(lit_59);
DEFLIT(lit_10);
DEFLIT(lit_27);
DEFLIT(lit_21);
DEFLIT(lit_61);
DEFLIT(lit_48);
DEFLIT(lit_22);
DEFLIT(lit_25);
DEFLIT(lit_32);
DEFLIT(lit_49);
DEFLIT(lit_55);
DEFLIT(lit_73);
DEFLIT(lit_50);
DEFLIT(lit_24);
DEFLIT(lit_28);
DEFLIT(lit_46);
DEFLIT(lit_6);
DEFLIT(lit_31);

/* FUNCTIONS: */

LOCFOR(fun_env_global_binding_value_0);
LOCFOR(fun_env_global_binding_value_setter_1);
LOCFOR(fun_env_global_binding_boundQ_2);
LOCFOR(fun_env_runtime_value_3);
LOCFOR(fun_env_runtime_value_setter_4);
LOCFOR(fun_env_parent_5);
LOCFOR(fun_env_parent_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_env_function_8);
LOCFOR(fun_env_function_setter_9);
LOCFOR(fun_10);
LOCFOR(fun_env_names_11);
LOCFOR(fun_env_names_setter_12);
LOCFOR(fun_13);
LOCFOR(fun_env_values_14);
LOCFOR(fun_env_values_setter_15);
LOCFOR(fun_env_frameX_16);
LOCFOR(fun_env_local_value_17);
LOCFOR(fun_env_local_value_setter_18);
LOCFOR(fun_loop_19);
LOCFOR(fun_env_binding_value_20);
LOCFOR(fun_loop_21);
LOCFOR(fun_env_binding_value_setter_22);
LOCFOR(fun_ast_evaluate_23);
LOCFOR(fun_ast_eval_24);
LOCFOR(fun_ast_eval_25);
LOCFOR(fun_ast_eval_26);
LOCFOR(fun_loop_27);
LOCFOR(fun_ast_eval_specs_28);
FUNFOR(YevalSast_evalYarrange_arguments);
LOCFOR(fun_x_7658_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_as_fun_name_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
LOCFOR(fun_39);
LOCFOR(fun_export_goo_method_40);
LOCFOR(fun_41);
LOCFOR(fun_ast_eval_42);
LOCFOR(fun_ast_eval_43);
LOCFOR(fun_env_local_reference_value_44);
LOCFOR(fun_env_local_reference_value_setter_45);
LOCFOR(fun_ast_eval_46);
LOCFOR(fun_ast_eval_47);
LOCFOR(fun_ast_eval_48);
LOCFOR(fun_ast_eval_49);
LOCFOR(fun_ast_eval_boundQ_50);
LOCFOR(fun_ast_eval_boundQ_51);
LOCFOR(fun_ast_eval_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_ast_eval_55);
LOCFOR(fun_env_define_bindingX_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_eval_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_eval_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_66);
LOCFOR(fun_ast_eval_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_ast_eval_73);
LOCFOR(fun_ast_eval_74);
FUNFOR(YevalSastYinit_environment_for_eval);
extern P YevalSast_evalYPdefine_binding (P,P);
extern P YevalSast_evalYPlookup_binding (P,P);
extern P YevalSast_evalYPensure_binding (P,P);
extern P YevalSast_evalYPdlvar_binding (P);
extern P YevalSast_evalYPbinding_boundQ (P);
extern P YevalSast_evalYPbinding_value (P);
extern P YevalSast_evalYPbinding_value_setter (P,P);
extern P YevalSast_evalY___main_0___ ();
extern P YevalSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF24406;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF24406 = T1;
  if (boxF24406 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYglobal_box_value),boxF24406);
    T2 = T3;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(Yerror),LITREF(lit_2),T5);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF24407;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF24407 = T1;
  boxF24407 = BOXFAB(boxF24407);
  T4 = BOXVAL(boxF24407);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(YevalSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF24407) = T6;
  } else {
  }
  T9 = BOXVAL(boxF24407);
  T8 = CALL2(1,VARREF(YevalSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF24408;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF24408 = T1;
  if (boxF24408 != YPfalse) {
    T2 = YPtrue;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_runtime_value_3) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_runtime_value_setter_4) {
  P v_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYloc_val_setter),v_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_function_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_function_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_names_11) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_names_setter_12) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_env_values_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_values_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_frameX_16) {
  P env_,function_,names_,args_;
  P valuesF24409;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),args_);
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T3,VARREF(Ynul));
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_intoX),T2,args_);
  valuesF24409 = T1;
  T4 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF24409,VARREF(YevalSast_evalYenv_names),names_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_17) {
  P env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_value_setter_18) {
  P v_,env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),v_,T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_19) {
  P names_,i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),FREEREF(0));
    T2 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),T3,FREEREF(1));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),FREEREF(0));
      T7 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T10;
      a2 = T11;
      names_ = a1;
      i_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_20) {
  P env_,name_;
  P loopF24410;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(YevalSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = FUNSHELL(1,fun_loop_19,3);
    loopF24410 = T3;
    FUNINIT(loopF24410, 3,env_,name_,loopF24410);
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    T4 = CALL2(0,loopF24410,T5,YPint((P)0));
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_21) {
  P names_,i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),FREEREF(1));
    T2 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),FREEREF(0),T3,FREEREF(2));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(2),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),FREEREF(1));
      T7 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(0),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T10;
      a2 = T11;
      names_ = a1;
      i_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_setter_22) {
  P v_,env_,name_;
  P loopF24411;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_21,4);
  loopF24411 = T1;
  FUNINIT(loopF24411, 4,v_,env_,name_,loopF24411);
  T3 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  T2 = CALL2(0,loopF24411,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_23) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),e_,VARREF(YevalSast_evalYDnul_loc_env));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_24) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_25) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  P e_,ee_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P res_,specs_,i_;
  P typeF24413;
  P specF24412;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(specs_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),specs_);
    specF24412 = T4;
    if (specF24412 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF24412,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF24413 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF24413,res_);
    T10 = CALL1(1,VARREF(Ytail),specs_);
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T9;
    a2 = T10;
    a3 = T11;
    res_ = a1;
    specs_ = a2;
    i_ = a3;
    goto loop;
    T5 = T8;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_specs_28) {
  P specs_,naryQ_,env_;
  P loopF24415;
  P nreqF24414;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T1 = T4;
  }
  nreqF24414 = T1;
  T6 = FUNSHELL(1,fun_loop_27,3);
  loopF24415 = T6;
  FUNINIT(loopF24415, 3,nreqF24414,env_,loopF24415);
  T7 = CALL3(0,loopF24415,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF24416;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF24416 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYL),countF24416,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
      T5 = CALL4(1,VARREF(Yerror),LITREF(lit_45),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF24416);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YgooSmathYNEE),countF24416,arity_);
    if (T12 != YPfalse) {
      T14 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
      T13 = CALL4(1,VARREF(Yerror),LITREF(lit_46),T14,args_,arity_);
      T11 = T13;
    } else {
      T11 = args_;
    }
    T2 = T11;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_7658_30) {
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
  P x_7657F24431;
  P x_7657F24430;
  P x_7657F24429;
  P x_7657F24428;
  P x_7657F24427;
  P x_7657F24426;
  P x_7657F24425;
  P bodyF24424;
  P namesF24423;
  P arityF24422;
  P naryQF24421;
  P fF24420;
  P envF24419;
  P x_7657F24418;
  P x_7658F24417;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_7658_30,1);
  x_7658F24417 = T1;
  FUNINIT(x_7658F24417, 1,return_);
  x_7657F24418 = FREEREF(0);
  envF24419 = YPfalse;
  envF24419 = BOXFAB(envF24419);
  fF24420 = YPfalse;
  fF24420 = BOXFAB(fF24420);
  naryQF24421 = YPfalse;
  naryQF24421 = BOXFAB(naryQF24421);
  arityF24422 = YPfalse;
  arityF24422 = BOXFAB(arityF24422);
  namesF24423 = YPfalse;
  namesF24423 = BOXFAB(namesF24423);
  bodyF24424 = YPfalse;
  bodyF24424 = BOXFAB(bodyF24424);
  T15 = CALL2(1,VARREF(YisaQ),x_7657F24418,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_7657F24418,LITREF(lit_51),x_7658F24417);
    x_7657F24425 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7657F24425,x_7658F24417);
    BOXVAL(envF24419) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_7657F24425);
    x_7657F24426 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7657F24426,x_7658F24417);
    BOXVAL(fF24420) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_7657F24426);
    x_7657F24427 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7657F24427,x_7658F24417);
    BOXVAL(naryQF24421) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_7657F24427);
    x_7657F24428 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7657F24428,x_7658F24417);
    BOXVAL(arityF24422) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_7657F24428);
    x_7657F24429 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7657F24429,x_7658F24417);
    BOXVAL(namesF24423) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_7657F24429);
    x_7657F24430 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_7657F24430,x_7658F24417);
    BOXVAL(bodyF24424) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_7657F24430);
    x_7657F24431 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_7657F24431,x_7658F24417);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_7658F24417,LITREF(lit_52),x_7657F24418);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T54,T55,T56,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T66 = CALL2(1,VARREF(YgooSmacrosYcat),T67,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALL4(1,VARREF(YgooSmacrosYcat),T63,T64,T65,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
  T76 = BOXVAL(envF24419);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF24420);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T83 = BOXVAL(namesF24423);
  T82 = CALL1(1,VARREF(Ylst),T83);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T84,Ynil);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T96 = CALL3(1,VARREF(YgooSmacrosYcat),T97,T98,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T92 = CALL4(1,VARREF(YgooSmacrosYcat),T93,T94,T95,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T73 = CALLN(1,VARREF(YgooSmacrosYcat),6,T74,T75,T77,T79,T91,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T102 = BOXVAL(bodyF24424);
  T101 = CALL1(1,VARREF(Ylst),T102);
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T100 = CALL3(1,VARREF(YgooSmacrosYcat),T101,T103,Ynil);
  T99 = CALL1(1,VARREF(Ylst),T100);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),7,T39,T40,T46,T61,T68,T99,Ynil);
  T13 = T38;
  T11 = T13;
  T9 = T11;
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

FUNCODEDEF(fun_as_fun_name_33) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Yfun_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_34) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_38) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_39) {
  P arg_vector_;
  P frameF24434;
  P nmsF24433;
  P argsF24432;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF24432 = T1;
  T4 = (P)YPnext_methods();
  nmsF24433 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF24433);
  T9 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF24432,T10);
  T6 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T7,T9);
  frameF24434 = T6;
  T11 = CALL1(1,FREEREF(5),frameF24434);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_40) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF24436;
  P arityF24435;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3,a4,a5,a6,a7;
LINK_STACK();
  ARG(f_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(value_, 4);
  ARG(body_, 5);
  ARG(env_, 6);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T1 = T4;
  }
  arityF24435 = T1;
  T6 = FUNFAB(fun_39,6,f_,naryQ_,arityF24435,env_,names_,body_);
  efunF24436 = T6;
  T7 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF24436);
  T9 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF24435,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF24436);
  T5 = efunF24436;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P env_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_42) {
  P e_,env_;
  P evalF24438;
  P paramsF24437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF24437 = T1;
  T3 = FUNFAB(fun_41,1,e_);
  evalF24438 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF24437);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF24437);
  T7 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF24438,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P specsF24442;
  P namesF24441;
  P naryQF24440;
  P paramsF24439;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF24439 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF24440 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF24439);
  namesF24441 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF24439);
  T7 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T8,naryQF24440,env_);
  specsF24442 = T7;
  T10 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),6,T10,namesF24441,specsF24442,naryQF24440,VARREF(YLanyG),Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_44) {
  P env_,ref_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_45) {
  P val_,env_,ref_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_46) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_47) {
  P e_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_49) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(YevalSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_50) {
  P e_,binding_,env_;
  P x_7660F24444;
  P x_7659F24443;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_7659F24443 = T1;
  x_7660F24444 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_7660F24444,x_7659F24443,LITREF(lit_74));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_boundQ),binding_);
    T3 = T5;
  } else {
    T3 = YPtrue;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_51) {
  P e_,binding_,env_;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_ast_eval_52) {
  P e_,env_;
  P valueF24445;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF24445 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF24445,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P valueF24446;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF24446 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF24446,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_55) {
  P e_,env_;
  P valueF24447;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF24447 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF24447,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_56) {
  P b_,v_;
  P x_7662F24449;
  P x_7661F24448;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_7661F24448 = T1;
  x_7662F24449 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_7662F24449,x_7661F24448,LITREF(lit_76));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_7662F24449,x_7661F24448,LITREF(lit_74));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
      T10 = CALL2(1,VARREF(Yerror),LITREF(lit_77),T11);
      T7 = T10;
    }
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P valueF24450;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF24450 = T1;
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T3,valueF24450);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_59) {
  P e_;
  P valF24452;
  P nxtF24451;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF24451 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,FREEREF(0));
  valF24452 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF24451);
  if (T6 != YPfalse) {
    T5 = valF24452;
  } else {
    a1 = nxtF24451;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P evalF24453;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_59,2);
  evalF24453 = T1;
  FUNINIT(evalF24453, 2,env_,evalF24453);
  T2 = CALL1(0,evalF24453,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_61) {
  P res_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),args_);
    T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,FREEREF(0));
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,res_);
    T7 = CALL1(1,VARREF(Ytail),args_);
    a1 = T4;
    a2 = T7;
    res_ = a1;
    args_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_62) {
  P e_,env_;
  P evalF24454;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_61,2);
  evalF24454 = T1;
  FUNINIT(evalF24454, 2,env_,evalF24454);
  T2 = CALL2(0,evalF24454,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P argsF24456;
  P fF24455;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  fF24455 = T1;
  T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
  argsF24456 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF24455,YPfalse,argsF24456);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF24460;
  P fF24459;
  P nmsF24458;
  P bF24457;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF24457 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),bF24457);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_60));
    nmsF24458 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF24458,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF24458;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YevalSastYbinding_info),bF24457);
    fF24459 = T10;
    T13 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,env_);
    argsF24460 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF24459,YPfalse,argsF24460);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P nenvF24462;
  P argsF24461;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF24461 = T1;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),T6);
  T4 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T5,argsF24461);
  nenvF24462 = T4;
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,nenvF24462);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P name_,value_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_67) {
  P e_,env_;
  P new_envF24464;
  P bindingsF24463;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF24463 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF24463);
  T6 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF24463);
  T3 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T4,T5);
  new_envF24464 = T3;
  T7 = FUNFAB(fun_66,1,new_envF24464);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF24463);
  T10 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_evalYast_eval),new_envF24464);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,new_envF24464);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P env_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_7));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P exitF24466;
  P rprocF24465;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_68,1,return_);
  rprocF24465 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF24465,T4,T5,YPfalse,YPfalse,rprocF24465,FREEREF(0));
  exitF24466 = T3;
  T8 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF24466);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  P e_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_69,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_73) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_71,2,e_,env_);
  T2 = FUNFAB(fun_72,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_74) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  T6 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
  T8 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,env_);
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  T9 = CALL2(1,VARREF(YevalSast_evalYast_eval),T10,env_);
  T0 = CALL5(1,VARREF(YPwith_monitor),T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_environment_for_eval) {
  P env_;
  P bF24467;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_60),YPfalse,LITREF(lit_80));
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_81),YPfalse,LITREF(lit_74));
  bF24467 = T1;
  T2 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF24467);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF24468;
  P T0,T1,T2,T3,T4;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF24468 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),eF24468,T4,YPfalse,LITREF(lit_74));
  T0 = T3;
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF24469;
  P T0,T1,T2,T3,T4;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF24469 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL2(1,VARREF(YevalSastYfind_binding),T4,eF24469);
  T0 = T3;
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF24470;
  P T0,T1,T2,T3;
  P a1,a2;
loop:
  T1 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF24470 = T1;
  if (tmpF24470 != YPfalse) {
    T2 = tmpF24470;
  } else {
    T3 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P bF24471;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
loop:
  T1 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF24471 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF24471,T4);
  if (T3 != YPfalse) {
    T7 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T8 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T6 = (P)YevalSast_evalYPensure_binding(T7,T8);
    T5 = (P)YevalSast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF24471;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF24473;
  P bF24472;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
loop:
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  bF24472 = T1;
  tmpF24473 = bF24472;
  if (tmpF24473 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_info),bF24472);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P YevalSast_evalYPbinding_value(P dlvar_) {
  P bindingF24474;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  bindingF24474 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_kind),bindingF24474);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),bindingF24474);
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T6);
    T2 = T5;
  } else {
    T7 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),bindingF24474);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P bindingF24475;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  bindingF24475 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_kind),bindingF24475);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),bindingF24475);
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T6);
    T2 = T5;
  } else {
    T7 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),val_,bindingF24475);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalY___main_0___() {
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
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267;
loop:
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPsym((P)"b");
  lit_2 = YPsb((P)"Unbound binding: %=");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_evalYenv_global_binding_value);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_evalYenv_global_binding_value);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_global_binding_value_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_evalYenv_global_binding_value,T1);
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_3),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSast_evalYenv_global_binding_value_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSast_evalYenv_global_binding_value_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSast_evalYenv_global_binding_value_setter,T6);
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSast_evalYenv_global_binding_boundQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSast_evalYenv_global_binding_boundQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSast_evalYenv_global_binding_boundQ,T11);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSast_evalYenv_runtime_value);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSast_evalYenv_runtime_value);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_env_runtime_value_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSast_evalYenv_runtime_value,T16);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSast_evalYenv_runtime_value_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSast_evalYenv_runtime_value_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_env_runtime_value_setter_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSast_evalYenv_runtime_value_setter,T21);
  lit_10 = YPPsym((P)"<loc-env>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T26);
  VARSET(YevalSast_evalYLloc_envG,T25);
  lit_11 = YPPsym((P)"env-parent");
  lit_12 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),LITREF(lit_11),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSast_evalYenv_parent);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSast_evalYenv_parent);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_env_parent_5;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSast_evalYenv_parent,T28);
  lit_13 = YPPsym((P)"env-parent-setter");
  lit_14 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),LITREF(lit_13),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSast_evalYenv_parent_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSast_evalYenv_parent_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_env_parent_setter_6;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSast_evalYenv_parent_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_7;
  CALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),VARREF(YevalSast_evalYenv_parent_setter),VARREF(YLanyG),T38);
  lit_15 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),LITREF(lit_15),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSast_evalYenv_function);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSast_evalYenv_function);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_env_function_8;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSast_evalYenv_function,T40);
  lit_16 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),LITREF(lit_16),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSast_evalYenv_function_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSast_evalYenv_function_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_env_function_setter_9;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSast_evalYenv_function_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_10;
  CALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_function),VARREF(YevalSast_evalYenv_function_setter),VARREF(YLanyG),T50);
  lit_17 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),LITREF(lit_17),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSast_evalYenv_names);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSast_evalYenv_names);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_env_names_11;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSast_evalYenv_names,T52);
  lit_18 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLlstG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),LITREF(lit_18),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSast_evalYenv_names_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSast_evalYenv_names_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_env_names_setter_12;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSast_evalYenv_names_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_13;
  CALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_names),VARREF(YevalSast_evalYenv_names_setter),VARREF(YLlstG),T62);
  lit_19 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),LITREF(lit_19),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSast_evalYenv_values);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSast_evalYenv_values);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_env_values_14;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSast_evalYenv_values,T64);
  lit_20 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLrepG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),LITREF(lit_20),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSast_evalYenv_values_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSast_evalYenv_values_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_env_values_setter_15;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSast_evalYenv_values_setter,T69);
  CALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_values),VARREF(YevalSast_evalYenv_values_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  T73 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_evalYLloc_envG));
  VARSET(YevalSast_evalYDnul_loc_env,T73);
  lit_21 = YPPsym((P)"env-frame!");
  lit_22 = YPPsym((P)"env");
  lit_23 = YPPsym((P)"function");
  lit_24 = YPPsym((P)"names");
  lit_25 = YPPsym((P)"args");
  T74 = YPsig(YPPlist(4,LITREF(lit_22),LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(4,VARREF(YevalSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YevalSast_evalYLloc_envG),Ynil);
  fun_env_frameX_16 = YPmet(FUNCODEREF(fun_env_frameX_16),LITREF(lit_21),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSast_evalYenv_frameX);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSast_evalYenv_frameX);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_env_frameX_16;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSast_evalYenv_frameX,T75);
  lit_26 = YPPsym((P)"env-local-value");
  lit_27 = YPPsym((P)"i");
  lit_28 = YPPsym((P)"j");
  T79 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(3,VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_17 = YPmet(FUNCODEREF(fun_env_local_value_17),LITREF(lit_26),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSast_evalYenv_local_value);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSast_evalYenv_local_value);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_env_local_value_17;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSast_evalYenv_local_value,T80);
  lit_29 = YPPsym((P)"env-local-value-setter");
  T84 = YPsig(YPPlist(4,LITREF(lit_9),LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(4,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_18 = YPmet(FUNCODEREF(fun_env_local_value_setter_18),LITREF(lit_29),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSast_evalYenv_local_value_setter);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSast_evalYenv_local_value_setter);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_env_local_value_setter_18;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSast_evalYenv_local_value_setter,T85);
  lit_30 = YPPsym((P)"env-binding-value");
  lit_31 = YPPsym((P)"name");
  lit_32 = YPPsym((P)"loop");
  T90 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_19 = YPmet(FUNCODEREF(fun_loop_19),LITREF(lit_32),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_31)),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_20 = YPmet(FUNCODEREF(fun_env_binding_value_20),LITREF(lit_30),T89,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSast_evalYenv_binding_value);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSast_evalYenv_binding_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_env_binding_value_20;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSast_evalYenv_binding_value,T91);
  lit_33 = YPPsym((P)"env-binding-value-setter");
  T96 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_32),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_9),LITREF(lit_22),LITREF(lit_31)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_22 = YPmet(FUNCODEREF(fun_env_binding_value_setter_22),LITREF(lit_33),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSast_evalYenv_binding_value_setter);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSast_evalYenv_binding_value_setter);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_env_binding_value_setter_22;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSast_evalYenv_binding_value_setter,T97);
  lit_34 = YPPsym((P)"ast-evaluate");
  lit_35 = YPPsym((P)"e");
  T101 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_23 = YPmet(FUNCODEREF(fun_ast_evaluate_23),LITREF(lit_34),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSastYast_evaluate);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSastYast_evaluate);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_ast_evaluate_23;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSastYast_evaluate,T102);
  lit_36 = YPPsym((P)"ast-eval");
  T107 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T106 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T107,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSast_evalYast_eval,T106);
  T108 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_24 = YPmet(FUNCODEREF(fun_ast_eval_24),LITREF(lit_36),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalSast_evalYast_eval);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSast_evalYast_eval);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_ast_eval_24;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSast_evalYast_eval,T109);
  T113 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),LITREF(lit_36),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalSast_evalYast_eval);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSast_evalYast_eval);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_ast_eval_25;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSast_evalYast_eval,T114);
  lit_37 = YPPsym((P)"ee");
  T118 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_37)),YPPlist(2,VARREF(YevalSastYLcompile_timeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_36),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSast_evalYast_eval);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSast_evalYast_eval);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_ast_eval_26;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSast_evalYast_eval,T119);
  lit_38 = YPPsym((P)"ast-eval-specs");
  lit_39 = YPPsym((P)"specs");
  lit_40 = YPPsym((P)"nary?");
  lit_41 = YPPsym((P)"res");
  T124 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_39),LITREF(lit_27)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_32),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(3,LITREF(lit_39),LITREF(lit_40),LITREF(lit_22)),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_28 = YPmet(FUNCODEREF(fun_ast_eval_specs_28),LITREF(lit_38),T123,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSast_evalYast_eval_specs);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSast_evalYast_eval_specs);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_ast_eval_specs_28;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSast_evalYast_eval_specs,T125);
  T129 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  VARSET(YevalSast_evalYTstackT,T129);
  lit_42 = YPPsym((P)"arrange-arguments");
  lit_43 = YPPsym((P)"f");
  lit_44 = YPPsym((P)"arity");
  lit_45 = YPsb((P)"%= called with %=; needs at least %d arguments");
  lit_46 = YPsb((P)"%= called with %=; needs %d arguments");
  T130 = YPsig(YPPlist(4,LITREF(lit_43),LITREF(lit_40),LITREF(lit_44),LITREF(lit_25)),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YevalSast_evalYarrange_arguments = YPmet(FUNCODEREF(YevalSast_evalYarrange_arguments),LITREF(lit_42),T130,ENVNUL,PNUL,YPfalse);
  T131 = YevalSast_evalYarrange_arguments;
  VARSET(YevalSast_evalYarrange_arguments,T131);
  lit_47 = YPPsym((P)"exp");
  lit_48 = YPPsym((P)"return");
  lit_49 = YPPsym((P)"x-7658");
  lit_50 = YPPsym((P)"msg");
  lit_51 = YPPsym((P)"ifun");
  lit_52 = YPsb((P)"Match Pattern Failure");
  lit_53 = YPPsym((P)"fun");
  lit_54 = YPPsym((P)"arg-vector");
  lit_55 = YPPsym((P)"...");
  lit_56 = YPPsym((P)"def");
  lit_57 = YPPsym((P)"as");
  lit_58 = YPPsym((P)"<lst>");
  lit_59 = YPPsym((P)"nms");
  lit_60 = YPPsym((P)"%next-methods");
  lit_61 = YPPsym((P)"frame");
  lit_62 = YPPsym((P)"cat2");
  lit_63 = YPPsym((P)"lst");
  lit_64 = YPPsym((P)"quote");
  T134 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_25)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7658_30 = YPmet(FUNCODEREF(fun_x_7658_30),LITREF(lit_49),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_32;
  YPmacro(YPPsym((P)"eval/ast-eval"),YPPsym((P)"ifun"),T135);
  lit_65 = YPPsym((P)"as-fun-name");
  T136 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_33 = YPmet(FUNCODEREF(fun_as_fun_name_33),LITREF(lit_65),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_as_fun_name_33;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSast_evalYas_fun_name,T137);
  T141 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),LITREF(lit_65),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_as_fun_name_34;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSast_evalYas_fun_name,T142);
  T146 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_65),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_as_fun_name_35;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSast_evalYas_fun_name,T147);
  T151 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_65),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_as_fun_name_36;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSast_evalYas_fun_name,T152);
  T156 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_65),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_as_fun_name_37;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSast_evalYas_fun_name,T157);
  T161 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_65),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_as_fun_name_38;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSast_evalYas_fun_name,T162);
  lit_66 = YPPsym((P)"export-goo-method");
  lit_67 = YPPsym((P)"body");
  T167 = YPsig(YPPlist(1,LITREF(lit_54)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(7,LITREF(lit_43),LITREF(lit_24),LITREF(lit_39),LITREF(lit_40),LITREF(lit_4),LITREF(lit_67),LITREF(lit_22)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_40 = YPmet(FUNCODEREF(fun_export_goo_method_40),LITREF(lit_66),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSast_evalYexport_goo_method);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSast_evalYexport_goo_method);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_export_goo_method_40;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSast_evalYexport_goo_method,T168);
  T173 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_42 = YPmet(FUNCODEREF(fun_ast_eval_42),LITREF(lit_36),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSast_evalYast_eval);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSast_evalYast_eval);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_ast_eval_42;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSast_evalYast_eval,T174);
  T178 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPmet(FUNCODEREF(fun_ast_eval_43),LITREF(lit_36),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YevalSast_evalYast_eval);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSast_evalYast_eval);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_ast_eval_43;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSast_evalYast_eval,T179);
  lit_68 = YPPsym((P)"env-local-reference-value");
  lit_69 = YPPsym((P)"ref");
  T183 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_69)),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_44 = YPmet(FUNCODEREF(fun_env_local_reference_value_44),LITREF(lit_68),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YevalSast_evalYenv_local_reference_value);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalSast_evalYenv_local_reference_value);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_env_local_reference_value_44;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalSast_evalYenv_local_reference_value,T184);
  lit_70 = YPPsym((P)"env-local-reference-value-setter");
  lit_71 = YPPsym((P)"val");
  T188 = YPsig(YPPlist(3,LITREF(lit_71),LITREF(lit_22),LITREF(lit_69)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_45 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_45),LITREF(lit_70),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YevalSast_evalYenv_local_reference_value_setter);
  if (T191 != YPfalse) {
    T190 = VARREF(YevalSast_evalYenv_local_reference_value_setter);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_env_local_reference_value_setter_45;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YevalSast_evalYenv_local_reference_value_setter,T189);
  T193 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_46 = YPmet(FUNCODEREF(fun_ast_eval_46),LITREF(lit_36),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YevalSast_evalYast_eval);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSast_evalYast_eval);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_ast_eval_46;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSast_evalYast_eval,T194);
  T198 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_47 = YPmet(FUNCODEREF(fun_ast_eval_47),LITREF(lit_36),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSast_evalYast_eval);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSast_evalYast_eval);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_ast_eval_47;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSast_evalYast_eval,T199);
  T203 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_36),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSast_evalYast_eval);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSast_evalYast_eval);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_ast_eval_48;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSast_evalYast_eval,T204);
  T208 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_36),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSast_evalYast_eval);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSast_evalYast_eval);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_ast_eval_49;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSast_evalYast_eval,T209);
  lit_72 = YPPsym((P)"ast-eval-bound?");
  lit_73 = YPPsym((P)"binding");
  lit_74 = YPPsym((P)"global");
  T213 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_50 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_50),LITREF(lit_72),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSast_evalYast_eval_boundQ);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSast_evalYast_eval_boundQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_ast_eval_boundQ_50;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSast_evalYast_eval_boundQ,T214);
  T218 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_51 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_51),LITREF(lit_72),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSast_evalYast_eval_boundQ);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSast_evalYast_eval_boundQ);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_ast_eval_boundQ_51;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YevalSast_evalYast_eval_boundQ,T219);
  T223 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),LITREF(lit_36),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YevalSast_evalYast_eval);
  if (T226 != YPfalse) {
    T225 = VARREF(YevalSast_evalYast_eval);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_ast_eval_52;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YevalSast_evalYast_eval,T224);
  T228 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_36),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(YevalSast_evalYast_eval);
  if (T231 != YPfalse) {
    T230 = VARREF(YevalSast_evalYast_eval);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_ast_eval_53;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YevalSast_evalYast_eval,T229);
  T233 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),LITREF(lit_36),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YevalSast_evalYast_eval);
  if (T236 != YPfalse) {
    T235 = VARREF(YevalSast_evalYast_eval);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_ast_eval_54;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YevalSast_evalYast_eval,T234);
  T238 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),LITREF(lit_36),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YevalSast_evalYast_eval);
  if (T241 != YPfalse) {
    T240 = VARREF(YevalSast_evalYast_eval);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_ast_eval_55;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YevalSast_evalYast_eval,T239);
  lit_75 = YPPsym((P)"env-define-binding!");
  lit_76 = YPPsym((P)"runtime");
  lit_77 = YPsb((P)"Defining invalid binding kind %=");
  T243 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_56 = YPmet(FUNCODEREF(fun_env_define_bindingX_56),LITREF(lit_75),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YevalSast_evalYenv_define_bindingX);
  if (T246 != YPfalse) {
    T245 = VARREF(YevalSast_evalYenv_define_bindingX);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_env_define_bindingX_56;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YevalSast_evalYenv_define_bindingX,T244);
  T248 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),LITREF(lit_36),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(YevalSast_evalYast_eval);
  if (T251 != YPfalse) {
    T250 = VARREF(YevalSast_evalYast_eval);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_ast_eval_57;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YevalSast_evalYast_eval,T249);
  T253 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_36),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YevalSast_evalYast_eval);
  if (T256 != YPfalse) {
    T255 = VARREF(YevalSast_evalYast_eval);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_ast_eval_58;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YevalSast_evalYast_eval,T254);
  lit_78 = YPPsym((P)"eval");
  T262 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T261 = fun_eval_59 = YPmet(FUNCODEREF(fun_eval_59),LITREF(lit_78),T262,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T259 = fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),LITREF(lit_36),T260,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(YevalSast_evalYast_eval);
  if (T266 != YPfalse) {
    T265 = VARREF(YevalSast_evalYast_eval);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_ast_eval_60;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  T263 = VARSET(YevalSast_evalYast_eval,T264);
  T258 = T263;
  return T258;
}

P YevalSast_evalY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
loop:
  T1 = YPsig(YPPlist(2,LITREF(lit_41),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_61 = YPmet(FUNCODEREF(fun_eval_61),LITREF(lit_78),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLargumentsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),LITREF(lit_36),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YevalSast_evalYast_eval);
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSast_evalYast_eval);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_ast_eval_62;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YevalSast_evalYast_eval,T2);
  T6 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_36),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YevalSast_evalYast_eval);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSast_evalYast_eval);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_ast_eval_63;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSast_evalYast_eval,T7);
  T11 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_36),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YevalSast_evalYast_eval);
  if (T14 != YPfalse) {
    T13 = VARREF(YevalSast_evalYast_eval);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_ast_eval_64;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YevalSast_evalYast_eval,T12);
  T16 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_36),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_eval_65;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSast_evalYast_eval,T17);
  T22 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),LITREF(lit_36),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSast_evalYast_eval);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSast_evalYast_eval);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_ast_eval_67;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSast_evalYast_eval,T23);
  T29 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),LITREF(lit_36),T27,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSast_evalYast_eval);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSast_evalYast_eval);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_ast_eval_70;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSast_evalYast_eval,T30);
  T36 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_73 = YPmet(FUNCODEREF(fun_ast_eval_73),LITREF(lit_36),T34,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSast_evalYast_eval);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSast_evalYast_eval);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_ast_eval_73;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSast_evalYast_eval,T37);
  T41 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),LITREF(lit_36),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSast_evalYast_eval);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSast_evalYast_eval);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_ast_eval_74;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSast_evalYast_eval,T42);
  lit_79 = YPPsym((P)"init-environment-for-eval");
  lit_80 = YPPsym((P)"predefined");
  lit_81 = YPPsym((P)"%pair");
  T46 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_environment_for_eval = YPmet(FUNCODEREF(YevalSastYinit_environment_for_eval),LITREF(lit_79),T46,ENVNUL,PNUL,YPfalse);
  T47 = YevalSastYinit_environment_for_eval;
  VARSET(YevalSastYinit_environment_for_eval,T47);
  T48 = YPfalse;
  return T48;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_goo},
  {&module_info_gooScolsSrep},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"<", &module_info_gooSmag, "<"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"new", &module_info_gooSboot, "new"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"until", &module_info_gooSmacros, "until"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"~=", &module_info_gooSmath, "~="},
  {"try", &module_info_gooSboot, "try"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"1-", &module_info_gooSmath, "1-"},
  {"=", &module_info_gooSmath, "="},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"@+", &module_info_gooSboot, "@+"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"sin", &module_info_gooSmath, "sin"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"~", &module_info_gooSmath, "~"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"function-index", &module_info_evalSast, "function-index"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"op", &module_info_gooSmacros, "op"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"def", &module_info_gooSboot, "def"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"@<", &module_info_gooSboot, "@<"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"even?", &module_info_gooSmath, "even?"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"dl", &module_info_gooSboot, "dl"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"|", &module_info_gooSmath, "|"},
  {"%su", &module_info_gooSboot, "%su"},
  {"do", &module_info_gooSmacros, "do"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"/", &module_info_gooSmath, "/"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"error", &module_info_gooSboot, "error"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"map", &module_info_gooSmacros, "map"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"+", &module_info_gooSmath, "+"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"put", &module_info_gooSioSport, "put"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"out", &module_info_gooSioSport, "out"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"round", &module_info_gooSmath, "round"},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"&", &module_info_gooSmath, "&"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"%put", &module_info_gooSboot, "%put"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"round/", &module_info_gooSmath, "round/"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"%get", &module_info_gooSboot, "%get"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"and", &module_info_gooSmacros, "and"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"when", &module_info_gooSmacros, "when"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"logn", &module_info_gooSmath, "logn"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"get", &module_info_gooSioSport, "get"},
  {"$e", &module_info_gooSmath, "$e"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"in", &module_info_gooSioSport, "in"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"max", &module_info_gooSmag, "max"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"dm", &module_info_gooSboot, "dm"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"head", &module_info_gooSboot, "head"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"cos", &module_info_gooSmath, "cos"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"if", &module_info_gooSboot, "if"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"read", &module_info_gooSruntime, "read"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%im", &module_info_gooSboot, "%im"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"mod", &module_info_gooSmath, "mod"},
  {"any?", &module_info_gooStypes, "any?"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"open", &module_info_gooSioSport, "open"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"len", &module_info_gooStypes, "len"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"loc", &module_info_gooSboot, "loc"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"tup", &module_info_gooSboot, "tup"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"app", &module_info_gooSmacros, "app"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"dss", &module_info_gooSboot, "dss"},
  {"*", &module_info_gooSmath, "*"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"packer", &module_info_gooSpacker, "packer"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"use", &module_info_gooSboot, "use"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%str", &module_info_gooSboot, "%str"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"close", &module_info_gooSioSport, "close"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"for", &module_info_gooSmacros, "for"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"match", &module_info_gooSmacros, "match"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"seq", &module_info_gooSboot, "seq"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"dp", &module_info_gooSboot, "dp"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"-", &module_info_gooSmath, "-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"find", &module_info_gooScolsScol, "find"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"@len", &module_info_gooSboot, "@len"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"<<", &module_info_gooSmath, "<<"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"as", &module_info_gooStypes, "as"},
  {"t*", &module_info_gooStypes, "t*"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ct", &module_info_gooSboot, "ct"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"always", &module_info_gooSruntime, "always"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*stack*", &YevalSast_evalYTstackT},
  {"env-define-binding!", &YevalSast_evalYenv_define_bindingX},
  {"<loc-env>", &YevalSast_evalYLloc_envG},
  {"%binding-value", NULL},
  {"ast-eval-bound?", &YevalSast_evalYast_eval_boundQ},
  {"env-values-setter", &YevalSast_evalYenv_values_setter},
  {"env-binding-value-setter", &YevalSast_evalYenv_binding_value_setter},
  {"env-names-setter", &YevalSast_evalYenv_names_setter},
  {"%dlvar-nam", NULL},
  {"env-local-reference-value", &YevalSast_evalYenv_local_reference_value},
  {"env-function-setter", &YevalSast_evalYenv_function_setter},
  {"env-global-binding-bound?", &YevalSast_evalYenv_global_binding_boundQ},
  {"%define-binding", NULL},
  {"%binding-value-setter", NULL},
  {"%dlvar-mod", NULL},
  {"env-local-reference-value-setter", &YevalSast_evalYenv_local_reference_value_setter},
  {"as-fun-name", &YevalSast_evalYas_fun_name},
  {"env-names", &YevalSast_evalYenv_names},
  {"env-local-value", &YevalSast_evalYenv_local_value},
  {"env-global-binding-value", &YevalSast_evalYenv_global_binding_value},
  {"$nul-loc-env", &YevalSast_evalYDnul_loc_env},
  {"%dlvar-setter", NULL},
  {"env-runtime-value-setter", &YevalSast_evalYenv_runtime_value_setter},
  {"env-parent", &YevalSast_evalYenv_parent},
  {"---main-0---", NULL},
  {"ifun", NULL},
  {"ast-eval-specs", &YevalSast_evalYast_eval_specs},
  {"ast-eval", &YevalSast_evalYast_eval},
  {"env-local-value-setter", &YevalSast_evalYenv_local_value_setter},
  {"%lookup-binding", NULL},
  {"%dlvar", NULL},
  {"env-parent-setter", &YevalSast_evalYenv_parent_setter},
  {"env-values", &YevalSast_evalYenv_values},
  {"env-function", &YevalSast_evalYenv_function},
  {"---main-1---", NULL},
  {"export-goo-method", &YevalSast_evalYexport_goo_method},
  {"env-global-binding-value-setter", &YevalSast_evalYenv_global_binding_value_setter},
  {"arrange-arguments", &YevalSast_evalYarrange_arguments},
  {"%binding-bound?", NULL},
  {"env-runtime-value", &YevalSast_evalYenv_runtime_value},
  {"%ensure-binding", NULL},
  {"env-binding-value", &YevalSast_evalYenv_binding_value},
  {"env-frame!", &YevalSast_evalYenv_frameX},
  {"%dlvar-binding", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value", "%binding-value"},
  {"ast-evaluate", "ast-evaluate"},
  {"%binding-value-setter", "%binding-value-setter"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"%binding-bound?", "%binding-bound?"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast_eval;
MODULE_INFO module_info_evalSast_eval = {
  "eval/ast-eval",
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
extern void load_module_goo (void);
extern void load_module_gooScolsSrep (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSast_eval (void);

void load_module_evalSast_eval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_goo();
  load_module_gooScolsSrep();
  load_module_evalSast();

  (P)YevalSast_evalY___main_0___();
  (P)YevalSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
