/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/ast-eval */

EXT(YLlstG,"goo/boot","<lst>");
EXT(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yx8rSastYapplication_function,"x8r/ast","application-function");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
EXT(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
EXT(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
EXT(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
DEF(Yx8rSast_evalYenv_parent_setter,"x8r/ast-eval","env-parent-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
EXT(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yx8rSastYfunction_free,"x8r/ast","function-free");
EXT(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
DEF(Yx8rSast_evalYenv_local_value_setter,"x8r/ast-eval","env-local-value-setter");
EXT(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
EXT(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
DEF(Yx8rSast_evalYenv_global_binding_value,"x8r/ast-eval","env-global-binding-value");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(Yx8rSast_evalYDnul_loc_env,"x8r/ast-eval","$nul-loc-env");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
EXT(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(Ynul,"goo/boot","nul");
EXT(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(Yx8rSastYbinding_info,"x8r/ast","binding-info");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yx8rSastYmodule_name,"x8r/ast","module-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
DEF(Yx8rSast_evalYarrange_arguments,"x8r/ast-eval","arrange-arguments");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(Yx8rSast_evalYenv_parent,"x8r/ast-eval","env-parent");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yx8rSastYfunction_source,"x8r/ast","function-source");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
EXT(Yx8rSastYbinding_index,"x8r/ast","binding-index");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
DEF(Yx8rSast_evalYenv_function_setter,"x8r/ast-eval","env-function-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(Yx8rSastYsignature_value,"x8r/ast","signature-value");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(Yx8rSastYsignature_names,"x8r/ast","signature-names");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yx8rSastYLbindingG,"x8r/ast","<binding>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yx8rSastYload_in,"x8r/ast","load-in");
EXT(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
DEF(Yx8rSast_evalYast_eval_boundQ,"x8r/ast-eval","ast-eval-bound?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(Yx8rSast_evalYLloc_envG,"x8r/ast-eval","<loc-env>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(Yx8rSastYconstant_value,"x8r/ast","constant-value");
EXT(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(Yx8rSast_evalYas_fun_name,"x8r/ast-eval","as-fun-name");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
DEF(Yx8rSast_evalYenv_function,"x8r/ast-eval","env-function");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(Yx8rSast_evalYast_eval_specs,"x8r/ast-eval","ast-eval-specs");
EXT(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(Yx8rSast_evalYenv_local_value,"x8r/ast-eval","env-local-value");
EXT(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
EXT(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
EXT(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(YLsymG,"goo/boot","<sym>");
DEF(Yx8rSast_evalYenv_runtime_value_setter,"x8r/ast-eval","env-runtime-value-setter");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
EXT(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(Ynew,"goo/boot","new");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(Yx8rSast_evalYenv_global_binding_boundQ,"x8r/ast-eval","env-global-binding-bound?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
DEF(Yx8rSast_evalYenv_local_reference_value,"x8r/ast-eval","env-local-reference-value");
EXT(Yx8rSastYfunction_index,"x8r/ast","function-index");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(Yx8rSast_evalYenv_names_setter,"x8r/ast-eval","env-names-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
DEF(Yx8rSast_evalYenv_runtime_value,"x8r/ast-eval","env-runtime-value");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(Yx8rSast_evalYTstackT,"x8r/ast-eval","*stack*");
DEF(Yx8rSast_evalYast_eval,"x8r/ast-eval","ast-eval");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YPprop,"goo/boot","%prop");
EXT(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
EXT(Yx8rSastYbinding_name,"x8r/ast","binding-name");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPisa,"goo/boot","%isa");
EXT(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(Yx8rSast_evalYenv_binding_value,"x8r/ast-eval","env-binding-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(Yx8rSast_evalYenv_values_setter,"x8r/ast-eval","env-values-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yx8rSastYLapplicationG,"x8r/ast","<application>");
EXT(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(Yx8rSast_evalYexport_goo_method,"x8r/ast-eval","export-goo-method");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
EXT(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
DEF(Yx8rSast_evalYenv_local_reference_value_setter,"x8r/ast-eval","env-local-reference-value-setter");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmathYT,"goo/math","*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
DEF(Yx8rSast_evalYenv_frameX,"x8r/ast-eval","env-frame!");
EXT(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
EXT(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
EXT(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(Yx8rSast_evalYenv_names,"x8r/ast-eval","env-names");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
EXT(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSvecYpop_lastX,"goo/cols/vec","pop-last!");
EXT(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(Yx8rSastYfree_environment,"x8r/ast","free-environment");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
EXT(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(YgooScolsSvecYpush_lastX,"goo/cols/vec","push-last!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
EXT(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
EXT(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
EXT(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(Yx8rSast_evalYenv_binding_value_setter,"x8r/ast-eval","env-binding-value-setter");
EXT(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(Yx8rSast_evalYenv_global_binding_value_setter,"x8r/ast-eval","env-global-binding-value-setter");
EXT(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
EXT(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
EXT(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ylst,"goo/boot","lst");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
EXT(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yx8rSastYprogram_register,"x8r/ast","program-register");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(Ytail,"goo/boot","tail");
DEF(Yx8rSast_evalYenv_values,"x8r/ast-eval","env-values");
EXT(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yerror,"goo/boot","error");
EXT(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
EXT(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
EXT(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
DEF(Yx8rSast_evalYenv_define_bindingX,"x8r/ast-eval","env-define-binding!");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_36);
DEFLIT(lit_60);
DEFLIT(lit_29);
DEFLIT(lit_46);
DEFLIT(lit_37);
DEFLIT(lit_44);
DEFLIT(lit_50);
DEFLIT(lit_47);
DEFLIT(lit_75);
DEFLIT(lit_48);
DEFLIT(lit_74);
DEFLIT(lit_27);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_33);
DEFLIT(lit_70);
DEFLIT(lit_25);
DEFLIT(lit_49);
DEFLIT(lit_28);
DEFLIT(lit_15);
DEFLIT(lit_23);
DEFLIT(lit_24);
DEFLIT(lit_58);
DEFLIT(lit_30);
DEFLIT(lit_39);
DEFLIT(lit_17);
DEFLIT(lit_59);
DEFLIT(lit_65);
DEFLIT(lit_78);
DEFLIT(lit_43);
DEFLIT(lit_10);
DEFLIT(lit_2);
DEFLIT(lit_57);
DEFLIT(lit_67);
DEFLIT(lit_61);
DEFLIT(lit_41);
DEFLIT(lit_32);
DEFLIT(lit_19);
DEFLIT(lit_62);
DEFLIT(lit_76);
DEFLIT(lit_21);
DEFLIT(lit_34);
DEFLIT(lit_77);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_73);
DEFLIT(lit_81);
DEFLIT(lit_0);
DEFLIT(lit_56);
DEFLIT(lit_80);
DEFLIT(lit_31);
DEFLIT(lit_13);
DEFLIT(lit_40);
DEFLIT(lit_68);
DEFLIT(lit_53);
DEFLIT(lit_1);
DEFLIT(lit_55);
DEFLIT(lit_79);
DEFLIT(lit_51);
DEFLIT(lit_35);
DEFLIT(lit_7);
DEFLIT(lit_54);
DEFLIT(lit_5);
DEFLIT(lit_64);
DEFLIT(lit_72);
DEFLIT(lit_4);
DEFLIT(lit_26);
DEFLIT(lit_8);
DEFLIT(lit_52);
DEFLIT(lit_3);
DEFLIT(lit_69);
DEFLIT(lit_42);
DEFLIT(lit_9);
DEFLIT(lit_38);
DEFLIT(lit_71);
DEFLIT(lit_66);
DEFLIT(lit_14);
DEFLIT(lit_16);
DEFLIT(lit_63);
DEFLIT(lit_12);
DEFLIT(lit_45);
DEFLIT(lit_11);

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
FUNFOR(Yx8rSast_evalYarrange_arguments);
LOCFOR(fun_x_1466_30);
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
FUNFOR(Yx8rSastYinit_environment_for_eval);
extern P Yx8rSast_evalYPdefine_binding (P,P);
extern P Yx8rSast_evalYPlookup_binding (P,P);
extern P Yx8rSast_evalYPensure_binding (P,P);
extern P Yx8rSast_evalYPdlvar_binding (P);
extern P Yx8rSast_evalYPbinding_boundQ (P);
extern P Yx8rSast_evalYPbinding_value (P);
extern P Yx8rSast_evalYPbinding_value_setter (P,P);
extern P Yx8rSast_evalY___main_0___ ();
extern P Yx8rSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF1938;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),b_);
  boxF1938 = T1;
  if (boxF1938 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYglobal_box_value),boxF1938);
    T2 = T3;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(Yerror),LITREF(lit_2),T5);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF1939;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),b_);
  boxF1939 = T1;
  boxF1939 = BOXFAB(boxF1939);
  T4 = BOXVAL(boxF1939);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(Yx8rSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF1939) = T6;
  } else {
  }
  T9 = BOXVAL(boxF1939);
  T8 = CALL2(1,VARREF(Yx8rSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF1940;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),b_);
  boxF1940 = T1;
  if (boxF1940 != YPfalse) {
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_evalYenv_parent));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_evalYenv_function));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_evalYenv_names));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_evalYenv_values));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_frameX_16) {
  P env_,function_,names_,args_;
  P valuesF1941;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),args_);
  valuesF1941 = T1;
  T2 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_parent),env_,VARREF(Yx8rSast_evalYenv_function),function_,VARREF(Yx8rSast_evalYenv_values),valuesF1941,VARREF(Yx8rSast_evalYenv_names),names_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_17) {
  P env_,i_,j_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YgooSmacrosYelt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(Yx8rSast_evalYenv_local_value),T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_value_setter_18) {
  P v_,env_,i_,j_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALLN(1,VARREF(Yx8rSast_evalYenv_local_value_setter),4,v_,T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_19) {
  P names_,i_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_parent),FREEREF(0));
    T2 = CALL2(1,VARREF(Yx8rSast_evalYenv_binding_value),T3,FREEREF(1));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Yx8rSast_evalYenv_values),FREEREF(0));
      T7 = CALL2(1,VARREF(YgooSmacrosYelt),T8,i_);
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
  P loopF1942;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(Yx8rSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = FUNSHELL(1,fun_loop_19,3);
    loopF1942 = T3;
    FUNINIT(loopF1942, 3,env_,name_,loopF1942);
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_names),env_);
    T4 = CALL2(0,loopF1942,T5,YPint((P)0));
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_21) {
  P names_,i_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_parent),FREEREF(1));
    T2 = CALL3(1,VARREF(Yx8rSast_evalYenv_binding_value_setter),FREEREF(0),T3,FREEREF(2));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(2),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Yx8rSast_evalYenv_values),FREEREF(1));
      T7 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),FREEREF(0),T8,i_);
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
  P loopF1943;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_21,4);
  loopF1943 = T1;
  FUNINIT(loopF1943, 4,v_,env_,name_,loopF1943);
  T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_names),env_);
  T2 = CALL2(0,loopF1943,T3,YPint((P)0));
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
  T0 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),e_,VARREF(Yx8rSast_evalYDnul_loc_env));
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
  T0 = CALL1(1,VARREF(Yx8rSastYconstant_value),e_);
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
  T0 = CALL1(1,VARREF(Yx8rSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  P e_,ee_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(Yx8rSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P res_,specs_,i_;
  P typeF1945;
  P specF1944;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    specF1944 = T4;
    if (specF1944 != YPfalse) {
      T7 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),specF1944,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF1945 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF1945,res_);
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
  P loopF1947;
  P nreqF1946;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  nreqF1946 = T1;
  T6 = FUNSHELL(1,fun_loop_27,3);
  loopF1947 = T6;
  FUNINIT(loopF1947, 3,nreqF1946,env_,loopF1947);
  T7 = CALL3(0,loopF1947,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF1948;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF1948 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYL),countF1948,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),f_);
      T5 = CALLN(1,VARREF(Yerror),4,LITREF(lit_45),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF1948);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YgooSmathYNEE),countF1948,arity_);
    if (T12 != YPfalse) {
      T14 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),f_);
      T13 = CALLN(1,VARREF(Yerror),4,LITREF(lit_46),T14,args_,arity_);
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

FUNCODEDEF(fun_x_1466_30) {
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
  P x_1465F1963;
  P x_1465F1962;
  P x_1465F1961;
  P x_1465F1960;
  P x_1465F1959;
  P x_1465F1958;
  P x_1465F1957;
  P bodyF1956;
  P namesF1955;
  P arityF1954;
  P naryQF1953;
  P fF1952;
  P envF1951;
  P x_1465F1950;
  P x_1466F1949;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1466_30,1);
  x_1466F1949 = T1;
  FUNINIT(x_1466F1949, 1,return_);
  x_1465F1950 = FREEREF(0);
  envF1951 = YPfalse;
  envF1951 = BOXFAB(envF1951);
  fF1952 = YPfalse;
  fF1952 = BOXFAB(fF1952);
  naryQF1953 = YPfalse;
  naryQF1953 = BOXFAB(naryQF1953);
  arityF1954 = YPfalse;
  arityF1954 = BOXFAB(arityF1954);
  namesF1955 = YPfalse;
  namesF1955 = BOXFAB(namesF1955);
  bodyF1956 = YPfalse;
  bodyF1956 = BOXFAB(bodyF1956);
  T15 = CALL2(1,VARREF(YisaQ),x_1465F1950,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1465F1950,LITREF(lit_51),x_1466F1949);
    x_1465F1957 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1465F1957,x_1466F1949);
    BOXVAL(envF1951) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1465F1957);
    x_1465F1958 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1465F1958,x_1466F1949);
    BOXVAL(fF1952) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1465F1958);
    x_1465F1959 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1465F1959,x_1466F1949);
    BOXVAL(naryQF1953) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1465F1959);
    x_1465F1960 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1465F1960,x_1466F1949);
    BOXVAL(arityF1954) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1465F1960);
    x_1465F1961 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1465F1961,x_1466F1949);
    BOXVAL(namesF1955) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1465F1961);
    x_1465F1962 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1465F1962,x_1466F1949);
    BOXVAL(bodyF1956) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1465F1962);
    x_1465F1963 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1465F1963,x_1466F1949);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_1466F1949,LITREF(lit_52),x_1465F1950);
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
  T57 = CALLN(1,VARREF(YgooSmacrosYcat),4,T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T54,T55,T56,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALLN(1,VARREF(YgooSmacrosYcat),4,T48,T49,T50,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T66 = CALL2(1,VARREF(YgooSmacrosYcat),T67,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALLN(1,VARREF(YgooSmacrosYcat),4,T63,T64,T65,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
  T76 = BOXVAL(envF1951);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF1952);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T83 = BOXVAL(namesF1955);
  T82 = CALL1(1,VARREF(Ylst),T83);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T80 = CALLN(1,VARREF(YgooSmacrosYcat),4,T81,T82,T84,Ynil);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T96 = CALL3(1,VARREF(YgooSmacrosYcat),T97,T98,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T92 = CALLN(1,VARREF(YgooSmacrosYcat),4,T93,T94,T95,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T73 = CALLN(1,VARREF(YgooSmacrosYcat),6,T74,T75,T77,T79,T91,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T69 = CALLN(1,VARREF(YgooSmacrosYcat),4,T70,T71,T72,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T102 = BOXVAL(bodyF1956);
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
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),T1);
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
  T0 = CALL1(1,VARREF(Yx8rSastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),T1);
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
  P frameF1966;
  P nmsF1965;
  P argsF1964;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALLN(1,VARREF(Yx8rSast_evalYarrange_arguments),4,FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF1964 = T1;
  T4 = (P)YPnext_methods();
  nmsF1965 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF1965);
  T9 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF1964,T10);
  T6 = CALLN(1,VARREF(Yx8rSast_evalYenv_frameX),4,FREEREF(3),FREEREF(0),T7,T9);
  frameF1966 = T6;
  T11 = CALL1(1,FREEREF(5),frameF1966);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_40) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF1968;
  P arityF1967;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  arityF1967 = T1;
  T6 = FUNFAB(fun_39,6,f_,naryQ_,arityF1967,env_,names_,body_);
  efunF1968 = T6;
  T7 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF1968);
  T9 = CALL3(1,VARREF(Yx8rSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF1967,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF1968);
  T5 = efunF1968;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_42) {
  P e_,env_;
  P evalF1970;
  P paramsF1969;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),e_);
  paramsF1969 = T1;
  T3 = FUNFAB(fun_41,1,e_);
  evalF1970 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),paramsF1969);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_type),paramsF1969);
  T7 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(Yx8rSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(Yx8rSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF1970,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P specsF1974;
  P namesF1973;
  P naryQF1972;
  P paramsF1971;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),e_);
  paramsF1971 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),e_);
  naryQF1972 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),paramsF1971);
  namesF1973 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_type),paramsF1971);
  T7 = CALL3(1,VARREF(Yx8rSast_evalYast_eval_specs),T8,naryQF1972,env_);
  specsF1974 = T7;
  T10 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),5,T10,namesF1973,specsF1974,naryQF1972,Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_44) {
  P env_,ref_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(Yx8rSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(Yx8rSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_45) {
  P val_,env_,ref_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(Yx8rSastYreference_frame_offset),ref_);
  T0 = CALLN(1,VARREF(Yx8rSast_evalYenv_local_value_setter),4,val_,env_,T1,T2);
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
  T0 = CALL2(1,VARREF(Yx8rSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_47) {
  P e_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(Yx8rSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(Yx8rSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_49) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(Yx8rSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_50) {
  P e_,binding_,env_;
  P x_1468F1976;
  P x_1467F1975;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),binding_);
  x_1467F1975 = T1;
  x_1468F1976 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1468F1976,x_1467F1975,LITREF(lit_74));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_global_binding_boundQ),binding_);
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
  P valueF1977;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  valueF1977 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(Yx8rSast_evalYenv_global_binding_value_setter),valueF1977,T4);
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
  P valueF1978;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  valueF1978 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(Yx8rSast_evalYenv_runtime_value_setter),valueF1978,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_55) {
  P e_,env_;
  P valueF1979;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  valueF1979 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(Yx8rSast_evalYenv_local_reference_value_setter),valueF1979,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_56) {
  P b_,v_;
  P x_1470F1981;
  P x_1469F1980;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
  x_1469F1980 = T1;
  x_1470F1981 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1470F1981,x_1469F1980,LITREF(lit_76));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(Yx8rSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1470F1981,x_1469F1980,LITREF(lit_74));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(Yx8rSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
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
  P valueF1982;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  valueF1982 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  CALL2(1,VARREF(Yx8rSast_evalYenv_define_bindingX),T3,valueF1982);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYalternative_condition),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yx8rSastYalternative_consequent),e_);
    T3 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(Yx8rSastYalternative_alternant),e_);
    T5 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_59) {
  P e_;
  P valF1984;
  P nxtF1983;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF1983 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T4,FREEREF(0));
  valF1984 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF1983);
  if (T6 != YPfalse) {
    T5 = valF1984;
  } else {
    a1 = nxtF1983;
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
  P evalF1985;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_59,2);
  evalF1985 = T1;
  FUNINIT(evalF1985, 2,env_,evalF1985);
  T2 = CALL1(0,evalF1985,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_61) {
  P res_,args_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
    T5 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T6,FREEREF(1));
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
  P evalF1986;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_61,2);
  evalF1986 = T1;
  FUNINIT(evalF1986, 2,evalF1986,env_);
  T2 = CALL2(0,evalF1986,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P argsF1988;
  P fF1987;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  fF1987 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T5,env_);
  argsF1988 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF1987,YPfalse,argsF1988);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF1992;
  P fF1991;
  P nmsF1990;
  P bF1989;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYapplication_binding),e_);
  bF1989 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_name),bF1989);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yx8rSast_evalYenv_binding_value),env_,LITREF(lit_60));
    nmsF1990 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF1990,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF1990;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(Yx8rSastYbinding_info),bF1989);
    fF1991 = T10;
    T13 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T13,env_);
    argsF1992 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF1991,YPfalse,argsF1992);
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
  P nenvF1994;
  P argsF1993;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  argsF1993 = T1;
  T6 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),T6);
  T4 = CALLN(1,VARREF(Yx8rSast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1993);
  nenvF1994 = T4;
  T8 = CALL1(1,VARREF(Yx8rSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T8,nenvF1994);
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
  T0 = CALL3(1,VARREF(Yx8rSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_67) {
  P e_,env_;
  P new_envF1996;
  P bindingsF1995;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),e_);
  bindingsF1995 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),bindingsF1995);
  T6 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF1995);
  T3 = CALLN(1,VARREF(Yx8rSast_evalYenv_frameX),4,env_,YPfalse,T4,T5);
  new_envF1996 = T3;
  T7 = FUNFAB(fun_66,1,new_envF1996);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),bindingsF1995);
  T10 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSast_evalYast_eval),new_envF1996);
  T11 = CALL1(1,VARREF(Yx8rSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScolsScolYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(Yx8rSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T13,new_envF1996);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,VARREF(Yx8rSast_evalYenv_binding_value),env_,LITREF(lit_7));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P exitF1998;
  P rprocF1997;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_68,1,return_);
  rprocF1997 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(Yx8rSast_evalYexport_goo_method),7,rprocF1997,T4,T5,YPfalse,YPfalse,rprocF1997,FREEREF(0));
  exitF1998 = T3;
  T8 = CALL1(1,VARREF(Yx8rSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF1998);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  P e_,env_;
  P T1,T0;
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
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_73) {
  P e_,env_;
  P T2,T1,T0;
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
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmonitor_type),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  T4 = CALL1(1,VARREF(Yx8rSastYmonitor_info),e_);
  T3 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T4,env_);
  T6 = CALL1(1,VARREF(Yx8rSastYmonitor_test),e_);
  T5 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T6,env_);
  T8 = CALL1(1,VARREF(Yx8rSastYmonitor_handler),e_);
  T7 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T8,env_);
  T10 = CALL1(1,VARREF(Yx8rSastYmonitor_main_thunk),e_);
  T9 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T10,env_);
  T0 = CALLN(1,VARREF(YPwith_monitor),5,T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYinit_environment_for_eval) {
  P env_;
  P bF1999;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALLN(1,VARREF(Yx8rSastYast_define_binding),4,env_,LITREF(lit_60),YPfalse,LITREF(lit_80));
  T1 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,env_,LITREF(lit_81),YPfalse,LITREF(lit_74));
  bF1999 = T1;
  T2 = CALL2(1,VARREF(Yx8rSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF1999);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P Yx8rSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF2000;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(Yx8rSastYunchecked_runtime_environment),T2);
  eF2000 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,eF2000,T4,YPfalse,LITREF(lit_74));
  T0 = T3;
  return T0;
}

P Yx8rSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF2001;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(Yx8rSastYunchecked_runtime_environment),T2);
  eF2001 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL2(1,VARREF(Yx8rSastYfind_binding),T4,eF2001);
  T0 = T3;
  return T0;
}

P Yx8rSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF2002;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yx8rSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF2002 = T1;
  if (tmpF2002 != YPfalse) {
    T2 = tmpF2002;
  } else {
    T3 = (P)Yx8rSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P Yx8rSast_evalYPdlvar_binding(P dlvar_) {
  P bF2003;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yx8rSast_evalYPdlvar(dlvar_);
  bF2003 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF2003,T4);
  if (T3 != YPfalse) {
    T7 = (P)Yx8rSast_evalYPdlvar_mod(dlvar_);
    T8 = (P)Yx8rSast_evalYPdlvar_nam(dlvar_);
    T6 = (P)Yx8rSast_evalYPensure_binding(T7,T8);
    T5 = (P)Yx8rSast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF2003;
  }
  T0 = T2;
  return T0;
}

P Yx8rSast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF2005;
  P bF2004;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)Yx8rSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)Yx8rSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)Yx8rSast_evalYPlookup_binding(T2,T3);
  bF2004 = T1;
  tmpF2005 = bF2004;
  if (tmpF2005 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_info),bF2004);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P Yx8rSast_evalYPbinding_value(P dlvar_) {
  P bindingF2006;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yx8rSast_evalYPdlvar_binding(dlvar_);
  bindingF2006 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_kind),bindingF2006);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_locative),bindingF2006);
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_runtime_value),T6);
    T2 = T5;
  } else {
    T7 = CALL1(1,VARREF(Yx8rSast_evalYenv_global_binding_value),bindingF2006);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yx8rSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P bindingF2007;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yx8rSast_evalYPdlvar_binding(dlvar_);
  bindingF2007 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_kind),bindingF2007);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_locative),bindingF2007);
    T5 = CALL2(1,VARREF(Yx8rSast_evalYenv_runtime_value_setter),val_,T6);
    T2 = T5;
  } else {
    T7 = CALL2(1,VARREF(Yx8rSast_evalYenv_global_binding_value_setter),val_,bindingF2007);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yx8rSast_evalY___main_0___() {
  P T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258;
  P T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242;
  P T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226;
  P T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210;
  P T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194;
  P T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178;
  P T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162;
  P T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146;
  P T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130;
  P T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114;
  P T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98;
  P T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPsym((P)"b");
  lit_2 = YPsb((P)"Unbound binding: %=");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSast_evalYenv_global_binding_value);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSast_evalYenv_global_binding_value);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_global_binding_value_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSast_evalYenv_global_binding_value,T1);
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_3),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSast_evalYenv_global_binding_value_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSast_evalYenv_global_binding_value_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSast_evalYenv_global_binding_value_setter,T6);
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSast_evalYenv_global_binding_boundQ);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSast_evalYenv_global_binding_boundQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSast_evalYenv_global_binding_boundQ,T11);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yx8rSast_evalYenv_runtime_value);
  if (T18 != YPfalse) {
    T17 = VARREF(Yx8rSast_evalYenv_runtime_value);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_env_runtime_value_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yx8rSast_evalYenv_runtime_value,T16);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yx8rSast_evalYenv_runtime_value_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(Yx8rSast_evalYenv_runtime_value_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_env_runtime_value_setter_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yx8rSast_evalYenv_runtime_value_setter,T21);
  lit_10 = YPPsym((P)"<loc-env>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T26);
  VARSET(Yx8rSast_evalYLloc_envG,T25);
  lit_11 = YPPsym((P)"env-parent");
  lit_12 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),LITREF(lit_11),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yx8rSast_evalYenv_parent);
  if (T30 != YPfalse) {
    T29 = VARREF(Yx8rSast_evalYenv_parent);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_env_parent_5;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yx8rSast_evalYenv_parent,T28);
  lit_13 = YPPsym((P)"env-parent-setter");
  lit_14 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),LITREF(lit_13),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(Yx8rSast_evalYenv_parent_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(Yx8rSast_evalYenv_parent_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_env_parent_setter_6;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(Yx8rSast_evalYenv_parent_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_7;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_parent),VARREF(Yx8rSast_evalYenv_parent_setter),VARREF(YLanyG),T38);
  lit_15 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),LITREF(lit_15),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yx8rSast_evalYenv_function);
  if (T42 != YPfalse) {
    T41 = VARREF(Yx8rSast_evalYenv_function);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_env_function_8;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yx8rSast_evalYenv_function,T40);
  lit_16 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),LITREF(lit_16),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(Yx8rSast_evalYenv_function_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(Yx8rSast_evalYenv_function_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_env_function_setter_9;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(Yx8rSast_evalYenv_function_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_10;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_function),VARREF(Yx8rSast_evalYenv_function_setter),VARREF(YLanyG),T50);
  lit_17 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),LITREF(lit_17),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(Yx8rSast_evalYenv_names);
  if (T54 != YPfalse) {
    T53 = VARREF(Yx8rSast_evalYenv_names);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_env_names_11;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(Yx8rSast_evalYenv_names,T52);
  lit_18 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLlstG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),LITREF(lit_18),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yx8rSast_evalYenv_names_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(Yx8rSast_evalYenv_names_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_env_names_setter_12;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yx8rSast_evalYenv_names_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_13;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_names),VARREF(Yx8rSast_evalYenv_names_setter),VARREF(YLlstG),T62);
  lit_19 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),LITREF(lit_19),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Yx8rSast_evalYenv_values);
  if (T66 != YPfalse) {
    T65 = VARREF(Yx8rSast_evalYenv_values);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_env_values_14;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yx8rSast_evalYenv_values,T64);
  lit_20 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),LITREF(lit_20),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rSast_evalYenv_values_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rSast_evalYenv_values_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_env_values_setter_15;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rSast_evalYenv_values_setter,T69);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_values),VARREF(Yx8rSast_evalYenv_values_setter),VARREF(YgooScolsSvecYLvecG),VARREF(YPprop_unbound_error));
  T73 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSast_evalYLloc_envG));
  VARSET(Yx8rSast_evalYDnul_loc_env,T73);
  lit_21 = YPPsym((P)"env-frame!");
  lit_22 = YPPsym((P)"env");
  lit_23 = YPPsym((P)"function");
  lit_24 = YPPsym((P)"names");
  lit_25 = YPPsym((P)"args");
  T74 = YPsig(YPPlist(4,LITREF(lit_22),LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(4,VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(Yx8rSast_evalYLloc_envG),Ynil);
  fun_env_frameX_16 = YPmet(FUNCODEREF(fun_env_frameX_16),LITREF(lit_21),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(Yx8rSast_evalYenv_frameX);
  if (T77 != YPfalse) {
    T76 = VARREF(Yx8rSast_evalYenv_frameX);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_env_frameX_16;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(Yx8rSast_evalYenv_frameX,T75);
  lit_26 = YPPsym((P)"env-local-value");
  lit_27 = YPPsym((P)"i");
  lit_28 = YPPsym((P)"j");
  T79 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(3,VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_17 = YPmet(FUNCODEREF(fun_env_local_value_17),LITREF(lit_26),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(Yx8rSast_evalYenv_local_value);
  if (T82 != YPfalse) {
    T81 = VARREF(Yx8rSast_evalYenv_local_value);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_env_local_value_17;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(Yx8rSast_evalYenv_local_value,T80);
  lit_29 = YPPsym((P)"env-local-value-setter");
  T84 = YPsig(YPPlist(4,LITREF(lit_9),LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(4,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_18 = YPmet(FUNCODEREF(fun_env_local_value_setter_18),LITREF(lit_29),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(Yx8rSast_evalYenv_local_value_setter);
  if (T87 != YPfalse) {
    T86 = VARREF(Yx8rSast_evalYenv_local_value_setter);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_env_local_value_setter_18;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(Yx8rSast_evalYenv_local_value_setter,T85);
  lit_30 = YPPsym((P)"env-binding-value");
  lit_31 = YPPsym((P)"name");
  lit_32 = YPPsym((P)"loop");
  T90 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_19 = YPmet(FUNCODEREF(fun_loop_19),LITREF(lit_32),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_31)),YPPlist(2,VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_20 = YPmet(FUNCODEREF(fun_env_binding_value_20),LITREF(lit_30),T89,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(Yx8rSast_evalYenv_binding_value);
  if (T93 != YPfalse) {
    T92 = VARREF(Yx8rSast_evalYenv_binding_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_env_binding_value_20;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(Yx8rSast_evalYenv_binding_value,T91);
  lit_33 = YPPsym((P)"env-binding-value-setter");
  T96 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_32),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_9),LITREF(lit_22),LITREF(lit_31)),YPPlist(3,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_22 = YPmet(FUNCODEREF(fun_env_binding_value_setter_22),LITREF(lit_33),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(Yx8rSast_evalYenv_binding_value_setter);
  if (T99 != YPfalse) {
    T98 = VARREF(Yx8rSast_evalYenv_binding_value_setter);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_env_binding_value_setter_22;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(Yx8rSast_evalYenv_binding_value_setter,T97);
  lit_34 = YPPsym((P)"ast-evaluate");
  lit_35 = YPPsym((P)"e");
  T101 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_23 = YPmet(FUNCODEREF(fun_ast_evaluate_23),LITREF(lit_34),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(Yx8rSastYast_evaluate);
  if (T104 != YPfalse) {
    T103 = VARREF(Yx8rSastYast_evaluate);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_ast_evaluate_23;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(Yx8rSastYast_evaluate,T102);
  lit_36 = YPPsym((P)"ast-eval");
  T107 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T106 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T107,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rSast_evalYast_eval,T106);
  T108 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_24 = YPmet(FUNCODEREF(fun_ast_eval_24),LITREF(lit_36),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T111 != YPfalse) {
    T110 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_ast_eval_24;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(Yx8rSast_evalYast_eval,T109);
  T113 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLraw_constantG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),LITREF(lit_36),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T116 != YPfalse) {
    T115 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_ast_eval_25;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(Yx8rSast_evalYast_eval,T114);
  lit_37 = YPPsym((P)"ee");
  T118 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_37)),YPPlist(2,VARREF(Yx8rSastYLcompile_timeG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_36),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T121 != YPfalse) {
    T120 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_ast_eval_26;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yx8rSast_evalYast_eval,T119);
  lit_38 = YPPsym((P)"ast-eval-specs");
  lit_39 = YPPsym((P)"specs");
  lit_40 = YPPsym((P)"nary?");
  lit_41 = YPPsym((P)"res");
  T124 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_39),LITREF(lit_27)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_32),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(3,LITREF(lit_39),LITREF(lit_40),LITREF(lit_22)),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_28 = YPmet(FUNCODEREF(fun_ast_eval_specs_28),LITREF(lit_38),T123,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(Yx8rSast_evalYast_eval_specs);
  if (T127 != YPfalse) {
    T126 = VARREF(Yx8rSast_evalYast_eval_specs);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_ast_eval_specs_28;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(Yx8rSast_evalYast_eval_specs,T125);
  T129 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  VARSET(Yx8rSast_evalYTstackT,T129);
  lit_42 = YPPsym((P)"arrange-arguments");
  lit_43 = YPPsym((P)"f");
  lit_44 = YPPsym((P)"arity");
  lit_45 = YPsb((P)"%= called with %=; needs at least %d arguments");
  lit_46 = YPsb((P)"%= called with %=; needs %d arguments");
  T130 = YPsig(YPPlist(4,LITREF(lit_43),LITREF(lit_40),LITREF(lit_44),LITREF(lit_25)),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  Yx8rSast_evalYarrange_arguments = YPmet(FUNCODEREF(Yx8rSast_evalYarrange_arguments),LITREF(lit_42),T130,ENVNUL,PNUL,YPfalse);
  T131 = Yx8rSast_evalYarrange_arguments;
  VARSET(Yx8rSast_evalYarrange_arguments,T131);
  lit_47 = YPPsym((P)"exp");
  lit_48 = YPPsym((P)"return");
  lit_49 = YPPsym((P)"x-1466");
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
  fun_x_1466_30 = YPmet(FUNCODEREF(fun_x_1466_30),LITREF(lit_49),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_32;
  YPmacro(YPPsym((P)"x8r/ast-eval"),YPPsym((P)"ifun"),T135);
  lit_65 = YPPsym((P)"as-fun-name");
  T136 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_33 = YPmet(FUNCODEREF(fun_as_fun_name_33),LITREF(lit_65),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T139 != YPfalse) {
    T138 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_as_fun_name_33;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(Yx8rSast_evalYas_fun_name,T137);
  T141 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),LITREF(lit_65),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T144 != YPfalse) {
    T143 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_as_fun_name_34;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(Yx8rSast_evalYas_fun_name,T142);
  T146 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_65),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T149 != YPfalse) {
    T148 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_as_fun_name_35;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(Yx8rSast_evalYas_fun_name,T147);
  T151 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(Yx8rSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_65),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T154 != YPfalse) {
    T153 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_as_fun_name_36;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(Yx8rSast_evalYas_fun_name,T152);
  T156 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_65),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T159 != YPfalse) {
    T158 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_as_fun_name_37;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(Yx8rSast_evalYas_fun_name,T157);
  T161 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_65),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T164 != YPfalse) {
    T163 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_as_fun_name_38;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(Yx8rSast_evalYas_fun_name,T162);
  lit_66 = YPPsym((P)"export-goo-method");
  lit_67 = YPPsym((P)"body");
  T167 = YPsig(YPPlist(1,LITREF(lit_54)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(7,LITREF(lit_43),LITREF(lit_24),LITREF(lit_39),LITREF(lit_40),LITREF(lit_4),LITREF(lit_67),LITREF(lit_22)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_40 = YPmet(FUNCODEREF(fun_export_goo_method_40),LITREF(lit_66),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(Yx8rSast_evalYexport_goo_method);
  if (T170 != YPfalse) {
    T169 = VARREF(Yx8rSast_evalYexport_goo_method);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_export_goo_method_40;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(Yx8rSast_evalYexport_goo_method,T168);
  T173 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLast_methodG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_42 = YPmet(FUNCODEREF(fun_ast_eval_42),LITREF(lit_36),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T176 != YPfalse) {
    T175 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_ast_eval_42;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(Yx8rSast_evalYast_eval,T174);
  T178 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLast_genericG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPmet(FUNCODEREF(fun_ast_eval_43),LITREF(lit_36),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T181 != YPfalse) {
    T180 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_ast_eval_43;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yx8rSast_evalYast_eval,T179);
  lit_68 = YPPsym((P)"env-local-reference-value");
  lit_69 = YPPsym((P)"ref");
  T183 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_69)),YPPlist(2,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_44 = YPmet(FUNCODEREF(fun_env_local_reference_value_44),LITREF(lit_68),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yx8rSast_evalYenv_local_reference_value);
  if (T186 != YPfalse) {
    T185 = VARREF(Yx8rSast_evalYenv_local_reference_value);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_env_local_reference_value_44;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yx8rSast_evalYenv_local_reference_value,T184);
  lit_70 = YPPsym((P)"env-local-reference-value-setter");
  lit_71 = YPPsym((P)"val");
  T188 = YPsig(YPPlist(3,LITREF(lit_71),LITREF(lit_22),LITREF(lit_69)),YPPlist(3,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_45 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_45),LITREF(lit_70),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(Yx8rSast_evalYenv_local_reference_value_setter);
  if (T191 != YPfalse) {
    T190 = VARREF(Yx8rSast_evalYenv_local_reference_value_setter);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_env_local_reference_value_setter_45;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(Yx8rSast_evalYenv_local_reference_value_setter,T189);
  T193 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_46 = YPmet(FUNCODEREF(fun_ast_eval_46),LITREF(lit_36),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T196 != YPfalse) {
    T195 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_ast_eval_46;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(Yx8rSast_evalYast_eval,T194);
  T198 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_47 = YPmet(FUNCODEREF(fun_ast_eval_47),LITREF(lit_36),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T201 != YPfalse) {
    T200 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_ast_eval_47;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(Yx8rSast_evalYast_eval,T199);
  T203 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLruntime_referenceG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_36),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T206 != YPfalse) {
    T205 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_ast_eval_48;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(Yx8rSast_evalYast_eval,T204);
  T208 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_36),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T211 != YPfalse) {
    T210 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_ast_eval_49;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(Yx8rSast_evalYast_eval,T209);
  lit_72 = YPPsym((P)"ast-eval-bound?");
  lit_73 = YPPsym((P)"binding");
  lit_74 = YPPsym((P)"global");
  T213 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_50 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_50),LITREF(lit_72),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(Yx8rSast_evalYast_eval_boundQ);
  if (T216 != YPfalse) {
    T215 = VARREF(Yx8rSast_evalYast_eval_boundQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_ast_eval_boundQ_50;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(Yx8rSast_evalYast_eval_boundQ,T214);
  T218 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_51 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_51),LITREF(lit_72),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(Yx8rSast_evalYast_eval_boundQ);
  if (T221 != YPfalse) {
    T220 = VARREF(Yx8rSast_evalYast_eval_boundQ);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_ast_eval_boundQ_51;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(Yx8rSast_evalYast_eval_boundQ,T219);
  T223 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLglobal_assignmentG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),LITREF(lit_36),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T226 != YPfalse) {
    T225 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_ast_eval_52;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(Yx8rSast_evalYast_eval,T224);
  T228 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLast_macro_definitionG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_36),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T231 != YPfalse) {
    T230 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_ast_eval_53;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(Yx8rSast_evalYast_eval,T229);
  T233 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLruntime_assignmentG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),LITREF(lit_36),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T236 != YPfalse) {
    T235 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_ast_eval_54;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(Yx8rSast_evalYast_eval,T234);
  T238 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLlocal_assignmentG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),LITREF(lit_36),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T241 != YPfalse) {
    T240 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_ast_eval_55;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(Yx8rSast_evalYast_eval,T239);
  lit_75 = YPPsym((P)"env-define-binding!");
  lit_76 = YPPsym((P)"runtime");
  lit_77 = YPsb((P)"Defining invalid binding kind %=");
  T243 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(Yx8rSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_56 = YPmet(FUNCODEREF(fun_env_define_bindingX_56),LITREF(lit_75),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(Yx8rSast_evalYenv_define_bindingX);
  if (T246 != YPfalse) {
    T245 = VARREF(Yx8rSast_evalYenv_define_bindingX);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_env_define_bindingX_56;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(Yx8rSast_evalYenv_define_bindingX,T244);
  T248 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLdefinitionG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),LITREF(lit_36),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T251 != YPfalse) {
    T250 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_ast_eval_57;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(Yx8rSast_evalYast_eval,T249);
  T253 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLalternativeG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_36),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T256 != YPfalse) {
    T255 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_ast_eval_58;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(Yx8rSast_evalYast_eval,T254);
  lit_78 = YPPsym((P)"eval");
  T259 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eval_59 = YPmet(FUNCODEREF(fun_eval_59),LITREF(lit_78),T259,ENVNUL,PNUL,YPfalse);
  T258 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLsequentialG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),LITREF(lit_36),T258,ENVNUL,PNUL,YPfalse);
  T262 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T262 != YPfalse) {
    T261 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_ast_eval_60;
  T260 = CALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(Yx8rSast_evalYast_eval,T260);
  T268 = YPsig(YPPlist(2,LITREF(lit_41),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T267 = fun_eval_61 = YPmet(FUNCODEREF(fun_eval_61),LITREF(lit_78),T268,ENVNUL,PNUL,YPfalse);
  T266 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLargumentsG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T265 = fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),LITREF(lit_36),T266,ENVNUL,PNUL,YPfalse);
  T272 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T272 != YPfalse) {
    T271 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T271 = YPfalse;
  }
  T273 = fun_ast_eval_62;
  T270 = CALL2(1,VARREF(YPdefine_method),T271,T273);
  T269 = VARSET(Yx8rSast_evalYast_eval,T270);
  T264 = T269;
  return T264;
}

P Yx8rSast_evalY___main_1___() {
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLregular_applicationG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_36),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ast_eval_63;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSast_evalYast_eval,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLpredefined_applicationG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_36),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_ast_eval_64;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSast_evalYast_eval,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_36),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_ast_eval_65;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSast_evalYast_eval,T11);
  T16 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLlocalsG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),LITREF(lit_36),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_eval_67;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yx8rSast_evalYast_eval,T17);
  T23 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLbind_exitG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),LITREF(lit_36),T21,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T26 != YPfalse) {
    T25 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_ast_eval_70;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(Yx8rSast_evalYast_eval,T24);
  T30 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLunwind_protectG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_73 = YPmet(FUNCODEREF(fun_ast_eval_73),LITREF(lit_36),T28,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_ast_eval_73;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSast_evalYast_eval,T31);
  T35 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLmonitorG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),LITREF(lit_36),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_ast_eval_74;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rSast_evalYast_eval,T36);
  lit_79 = YPPsym((P)"init-environment-for-eval");
  lit_80 = YPPsym((P)"predefined");
  lit_81 = YPPsym((P)"%pair");
  T40 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYinit_environment_for_eval = YPmet(FUNCODEREF(Yx8rSastYinit_environment_for_eval),LITREF(lit_79),T40,ENVNUL,PNUL,YPfalse);
  T41 = Yx8rSastYinit_environment_for_eval;
  VARSET(Yx8rSastYinit_environment_for_eval,T41);
  T42 = YPfalse;
  return T42;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_x8rSast;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_x8rSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_goo},
  {&module_info_x8rSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"quote", &module_info_gooSboot, "quote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"environment-module", &module_info_x8rSast, "environment-module"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"constant-index", &module_info_x8rSast, "constant-index"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"def-list", &module_info_x8rSast, "def-list"},
  {"alternative-alternant", &module_info_x8rSast, "alternative-alternant"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"items", &module_info_gooScolsScol, "items"},
  {"round", &module_info_gooSmath, "round"},
  {"application-function", &module_info_x8rSast, "application-function"},
  {"loc", &module_info_gooSboot, "loc"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"function-body", &module_info_x8rSast, "function-body"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"bound?-reference", &module_info_x8rSast, "bound?-reference"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"<runtime-reference>", &module_info_x8rSast, "<runtime-reference>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"len", &module_info_gooStypes, "len"},
  {"application-tail?", &module_info_x8rSast, "application-tail?"},
  {"function-index-setter", &module_info_x8rSast, "function-index-setter"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"min", &module_info_gooSmag, "min"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"find", &module_info_gooScolsScol, "find"},
  {"as", &module_info_gooStypes, "as"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"fix-let-types", &module_info_x8rSast, "fix-let-types"},
  {"do-module-loader-modules", &module_info_x8rSast, "do-module-loader-modules"},
  {"do-named-static-global-bindings", &module_info_x8rSast, "do-named-static-global-bindings"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"compile-time-program", &module_info_x8rSast, "compile-time-program"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"module-name-to-relpath", &module_info_x8rSast, "module-name-to-relpath"},
  {"log", &module_info_gooSmath, "log"},
  {"binding-index-setter", &module_info_x8rSast, "binding-index-setter"},
  {"binding-dotted?-setter", &module_info_x8rSast, "binding-dotted?-setter"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"environment-bindings", &module_info_x8rSast, "environment-bindings"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"remove-modules-by-name!", &module_info_x8rSast, "remove-modules-by-name!"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"signature-value-setter", &module_info_x8rSast, "signature-value-setter"},
  {"application-known?-setter", &module_info_x8rSast, "application-known?-setter"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"function-data-refs", &module_info_x8rSast, "function-data-refs"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"$e", &module_info_gooSmath, "$e"},
  {">", &module_info_gooSmag, ">"},
  {"function-free", &module_info_x8rSast, "function-free"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<passive-program>", &module_info_x8rSast, "<passive-program>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"signature-arity", &module_info_x8rSast, "signature-arity"},
  {"signature-bindings", &module_info_x8rSast, "signature-bindings"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"signature-names-setter", &module_info_x8rSast, "signature-names-setter"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"ast-define-binding", &module_info_x8rSast, "ast-define-binding"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"fix-let-arguments-setter", &module_info_x8rSast, "fix-let-arguments-setter"},
  {"monitor-handler", &module_info_x8rSast, "monitor-handler"},
  {"monitor-test", &module_info_x8rSast, "monitor-test"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"always", &module_info_gooSruntime, "always"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"~", &module_info_gooSmath, "~"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"df", &module_info_gooSboot, "df"},
  {"floor", &module_info_gooSmath, "floor"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"function-binding", &module_info_x8rSast, "function-binding"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"for", &module_info_gooSmacros, "for"},
  {"reference-called-function?", &module_info_x8rSast, "reference-called-function?"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {">=", &module_info_gooSmag, ">="},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<", &module_info_gooSmag, "<"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"dv", &module_info_gooSboot, "dv"},
  {"-", &module_info_gooSmath, "-"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<module>", &module_info_x8rSast, "<module>"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"module-syntax-environment", &module_info_x8rSast, "module-syntax-environment"},
  {"function-temporaries", &module_info_x8rSast, "function-temporaries"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"if", &module_info_gooSboot, "if"},
  {"install-initial-bindings", &module_info_x8rSast, "install-initial-bindings"},
  {"objectify-signature", &module_info_x8rSast, "objectify-signature"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"binding-info", &module_info_x8rSast, "binding-info"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"module-name", &module_info_x8rSast, "module-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"binding-locative", &module_info_x8rSast, "binding-locative"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"function-registers-setter", &module_info_x8rSast, "function-registers-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"dg", &module_info_gooSboot, "dg"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<local-reference>", &module_info_x8rSast, "<local-reference>"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"fix-let-body-setter", &module_info_x8rSast, "fix-let-body-setter"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"function-source", &module_info_x8rSast, "function-source"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<local-assignment>", &module_info_x8rSast, "<local-assignment>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<module-binding-reference>", &module_info_x8rSast, "<module-binding-reference>"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"function-debug-name", &module_info_x8rSast, "function-debug-name"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<ast-function>", &module_info_x8rSast, "<ast-function>"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"init-ast", &module_info_x8rSast, "init-ast"},
  {"binding-dotted?", &module_info_x8rSast, "binding-dotted?"},
  {"binding-index", &module_info_x8rSast, "binding-index"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"unwind-protect-protected-thunk", &module_info_x8rSast, "unwind-protect-protected-thunk"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"module-exports", &module_info_x8rSast, "module-exports"},
  {"%str", &module_info_gooSboot, "%str"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"signature-value", &module_info_x8rSast, "signature-value"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<<", &module_info_gooSmath, "<<"},
  {"not", &module_info_gooSboot, "not"},
  {"op", &module_info_gooSmacros, "op"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"fab-g2c-module", &module_info_x8rSast, "fab-g2c-module"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"probe-module", &module_info_x8rSast, "probe-module"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"export", &module_info_gooSboot, "export"},
  {"<=", &module_info_gooSmag, "<="},
  {"locals-body", &module_info_x8rSast, "locals-body"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"into", &module_info_gooScolsScol, "into"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"assignment-binding", &module_info_x8rSast, "assignment-binding"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"runtime-environment", &module_info_x8rSast, "runtime-environment"},
  {"<ast-macro-definition>", &module_info_x8rSast, "<ast-macro-definition>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"signature-names", &module_info_x8rSast, "signature-names"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"function-temporaries-setter", &module_info_x8rSast, "function-temporaries-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"binding-inferred-type-setter", &module_info_x8rSast, "binding-inferred-type-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"<binding>", &module_info_x8rSast, "<binding>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<global-reference>", &module_info_x8rSast, "<global-reference>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"let", &module_info_gooSboot, "let"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"load-in", &module_info_x8rSast, "load-in"},
  {"or", &module_info_gooSmacros, "or"},
  {"fix-let-arguments", &module_info_x8rSast, "fix-let-arguments"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<ast-generic>", &module_info_x8rSast, "<ast-generic>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%su", &module_info_gooSboot, "%su"},
  {"binding-type-setter", &module_info_x8rSast, "binding-type-setter"},
  {"function-bindings", &module_info_x8rSast, "function-bindings"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fix-let-bindings-setter", &module_info_x8rSast, "fix-let-bindings-setter"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"binding-native-to?", &module_info_x8rSast, "binding-native-to?"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"binding-type", &module_info_x8rSast, "binding-type"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%im", &module_info_gooSboot, "%im"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"as-lst", &module_info_x8rSast, "as-lst"},
  {"t*", &module_info_gooStypes, "t*"},
  {"constant-value", &module_info_x8rSast, "constant-value"},
  {"program-register-setter", &module_info_x8rSast, "program-register-setter"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"<ast-primitive-definition>", &module_info_x8rSast, "<ast-primitive-definition>"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"function-data-refs-setter", &module_info_x8rSast, "function-data-refs-setter"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"&", &module_info_gooSmath, "&"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"alternative-condition", &module_info_x8rSast, "alternative-condition"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"module-binding", &module_info_x8rSast, "module-binding"},
  {"<ast-method>", &module_info_x8rSast, "<ast-method>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"locals-body-setter", &module_info_x8rSast, "locals-body-setter"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"objectify-with-subtransaction", &module_info_x8rSast, "objectify-with-subtransaction"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<bind-exit>", &module_info_x8rSast, "<bind-exit>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"atan", &module_info_gooSmath, "atan"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"report-undefined-global-bindings", &module_info_x8rSast, "report-undefined-global-bindings"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"bind-exit-main-fun", &module_info_x8rSast, "bind-exit-main-fun"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"function-signature-setter", &module_info_x8rSast, "function-signature-setter"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"program-type", &module_info_x8rSast, "program-type"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"binding-global-box-setter", &module_info_x8rSast, "binding-global-box-setter"},
  {"<fab-list>", &module_info_x8rSast, "<fab-list>"},
  {"function-source-setter", &module_info_x8rSast, "function-source-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<module-binding>", &module_info_x8rSast, "<module-binding>"},
  {"<locals>", &module_info_x8rSast, "<locals>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"ast-evaluate", &module_info_x8rSast, "ast-evaluate"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"~=", &module_info_gooSmath, "~="},
  {"<static-global-environment>", &module_info_x8rSast, "<static-global-environment>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"application-binding", &module_info_x8rSast, "application-binding"},
  {"mif", &module_info_gooSboot, "mif"},
  {"new", &module_info_gooSboot, "new"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"function-index", &module_info_x8rSast, "function-index"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<compile-time>", &module_info_x8rSast, "<compile-time>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<real-reference>", &module_info_x8rSast, "<real-reference>"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"load-module", &module_info_x8rSast, "load-module"},
  {"signature-nary?-setter", &module_info_x8rSast, "signature-nary?-setter"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"monitor-info", &module_info_x8rSast, "monitor-info"},
  {"binding-value-setter", &module_info_x8rSast, "binding-value-setter"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"binding-global-box", &module_info_x8rSast, "binding-global-box"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"binding-mutable?", &module_info_x8rSast, "binding-mutable?"},
  {"init-environment-for-eval", &module_info_x8rSast, "init-environment-for-eval"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"global-box-value-setter", &module_info_x8rSast, "global-box-value-setter"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"objectify-quotation", &module_info_x8rSast, "objectify-quotation"},
  {"del", &module_info_gooScolsScol, "del"},
  {"locals-bindings-setter", &module_info_x8rSast, "locals-bindings-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"tup", &module_info_gooSboot, "tup"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"out", &module_info_gooSioSport, "out"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"unchecked-runtime-environment", &module_info_x8rSast, "unchecked-runtime-environment"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"<reference>", &module_info_x8rSast, "<reference>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"set-module-environments", &module_info_x8rSast, "set-module-environments"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"function-debug-name-setter", &module_info_x8rSast, "function-debug-name-setter"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"function-registers", &module_info_x8rSast, "function-registers"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"isa", &module_info_gooSboot, "isa"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"def-programs", &module_info_x8rSast, "def-programs"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"reference-frame-number", &module_info_x8rSast, "reference-frame-number"},
  {"binding-name", &module_info_x8rSast, "binding-name"},
  {"set", &module_info_gooSboot, "set"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<global-box>", &module_info_x8rSast, "<global-box>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun", &module_info_gooSboot, "fun"},
  {"dm", &module_info_gooSboot, "dm"},
  {"close", &module_info_gooSioSport, "close"},
  {"unwind-protect-cleanup-thunk", &module_info_x8rSast, "unwind-protect-cleanup-thunk"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<global-assignment>", &module_info_x8rSast, "<global-assignment>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<raw-constant>", &module_info_x8rSast, "<raw-constant>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"1-", &module_info_gooSmath, "1-"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"module-loader-module-type", &module_info_x8rSast, "module-loader-module-type"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"constant-index-setter", &module_info_x8rSast, "constant-index-setter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"t?", &module_info_gooStypes, "t?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"when", &module_info_gooSmacros, "when"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"signature-specs-setter", &module_info_x8rSast, "signature-specs-setter"},
  {"put", &module_info_gooSioSport, "put"},
  {"round/", &module_info_gooSmath, "round/"},
  {"rem", &module_info_gooSmath, "rem"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<application>", &module_info_x8rSast, "<application>"},
  {"<programs>", &module_info_x8rSast, "<programs>"},
  {"=", &module_info_gooSmath, "="},
  {"function-value", &module_info_x8rSast, "function-value"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%get", &module_info_gooSboot, "%get"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"match", &module_info_gooSmacros, "match"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"global-box-value", &module_info_x8rSast, "global-box-value"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"reference-called-function?-setter", &module_info_x8rSast, "reference-called-function?-setter"},
  {"binding-dynamic-extent?-setter", &module_info_x8rSast, "binding-dynamic-extent?-setter"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"+", &module_info_gooSmath, "+"},
  {"fix-let-body", &module_info_x8rSast, "fix-let-body"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"sequentialize", &module_info_x8rSast, "sequentialize"},
  {"<local-binding>", &module_info_x8rSast, "<local-binding>"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"binding-kind", &module_info_x8rSast, "binding-kind"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"fix-let-types-setter", &module_info_x8rSast, "fix-let-types-setter"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"in", &module_info_gooSioSport, "in"},
  {"*", &module_info_gooSmath, "*"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"signature-nary?", &module_info_x8rSast, "signature-nary?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"def", &module_info_gooSboot, "def"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"binding-value", &module_info_x8rSast, "binding-value"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"assignment-reference", &module_info_x8rSast, "assignment-reference"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"function-signature", &module_info_x8rSast, "function-signature"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<predefined-application>", &module_info_x8rSast, "<predefined-application>"},
  {"function-free-setter", &module_info_x8rSast, "function-free-setter"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<immediate-constant>", &module_info_x8rSast, "<immediate-constant>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<constant>", &module_info_x8rSast, "<constant>"},
  {"<bound?>", &module_info_x8rSast, "<bound?>"},
  {"function-self-recursive?-setter", &module_info_x8rSast, "function-self-recursive?-setter"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<sequential>", &module_info_x8rSast, "<sequential>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"<arguments>", &module_info_x8rSast, "<arguments>"},
  {"signature-bindings-setter", &module_info_x8rSast, "signature-bindings-setter"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"locals-functions-setter", &module_info_x8rSast, "locals-functions-setter"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"assignment-form-setter", &module_info_x8rSast, "assignment-form-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"try", &module_info_gooSboot, "try"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"@len", &module_info_gooSboot, "@len"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"locals-bindings", &module_info_x8rSast, "locals-bindings"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"reference-frame-offset", &module_info_x8rSast, "reference-frame-offset"},
  {"monitor-type", &module_info_x8rSast, "monitor-type"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<definition>", &module_info_x8rSast, "<definition>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"pop-last!", &module_info_gooScolsSvec, "pop-last!"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"application-known?", &module_info_x8rSast, "application-known?"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"pow", &module_info_gooSmath, "pow"},
  {"rep", &module_info_gooSboot, "rep"},
  {"function-self-recursive?", &module_info_x8rSast, "function-self-recursive?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"free-environment", &module_info_x8rSast, "free-environment"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<assignment>", &module_info_x8rSast, "<assignment>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"and", &module_info_gooSmacros, "and"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"program-type-setter", &module_info_x8rSast, "program-type-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"t=", &module_info_gooStypes, "t="},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"function-nary?", &module_info_x8rSast, "function-nary?"},
  {"do-static-global-bindings", &module_info_x8rSast, "do-static-global-bindings"},
  {"push-last!", &module_info_gooScolsSvec, "push-last!"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"app", &module_info_gooSmacros, "app"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"application-arguments", &module_info_x8rSast, "application-arguments"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"find-environment-module", &module_info_x8rSast, "find-environment-module"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"function-body-setter", &module_info_x8rSast, "function-body-setter"},
  {"env-object-name", &module_info_x8rSast, "env-object-name"},
  {"==", &module_info_gooSmacros, "=="},
  {"signature-specs", &module_info_x8rSast, "signature-specs"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<module-loader>", &module_info_x8rSast, "<module-loader>"},
  {"$goo-boot-module-name", &module_info_x8rSast, "$goo-boot-module-name"},
  {"cos", &module_info_gooSmath, "cos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<alternative>", &module_info_x8rSast, "<alternative>"},
  {"binding-inferred-type", &module_info_x8rSast, "binding-inferred-type"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"environment-uses-modules", &module_info_x8rSast, "environment-uses-modules"},
  {"assignment-form", &module_info_x8rSast, "assignment-form"},
  {"alternative-consequent", &module_info_x8rSast, "alternative-consequent"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"lst", &module_info_gooSboot, "lst"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"open", &module_info_gooSioSport, "open"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<free-environment>", &module_info_x8rSast, "<free-environment>"},
  {"find-binding", &module_info_x8rSast, "find-binding"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"binding-dynamic-extent?", &module_info_x8rSast, "binding-dynamic-extent?"},
  {"format", &module_info_gooSruntime, "format"},
  {"signature-arity-setter", &module_info_x8rSast, "signature-arity-setter"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"fix-let-bindings", &module_info_x8rSast, "fix-let-bindings"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<fix-let>", &module_info_x8rSast, "<fix-let>"},
  {"<monitor>", &module_info_x8rSast, "<monitor>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"max", &module_info_gooSmag, "max"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"program-register", &module_info_x8rSast, "program-register"},
  {"use", &module_info_gooSboot, "use"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"case", &module_info_gooSmacros, "case"},
  {"read", &module_info_gooSruntime, "read"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"binding-info-setter", &module_info_x8rSast, "binding-info-setter"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<runtime-assignment>", &module_info_x8rSast, "<runtime-assignment>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"error", &module_info_gooSboot, "error"},
  {"<ast-primitive>", &module_info_x8rSast, "<ast-primitive>"},
  {"reference-binding", &module_info_x8rSast, "reference-binding"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"tan", &module_info_gooSmath, "tan"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<computed-program>", &module_info_x8rSast, "<computed-program>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"monitor-main-thunk", &module_info_x8rSast, "monitor-main-thunk"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<ast-signature>", &module_info_x8rSast, "<ast-signature>"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"binding-module-name", &module_info_x8rSast, "binding-module-name"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<regular-application>", &module_info_x8rSast, "<regular-application>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"<unwind-protect>", &module_info_x8rSast, "<unwind-protect>"},
  {"locals-functions", &module_info_x8rSast, "locals-functions"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<program>", &module_info_x8rSast, "<program>"},
  {"module-target-environment", &module_info_x8rSast, "module-target-environment"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-parent-setter", &Yx8rSast_evalYenv_parent_setter},
  {"%binding-value", NULL},
  {"env-local-value-setter", &Yx8rSast_evalYenv_local_value_setter},
  {"env-global-binding-value", &Yx8rSast_evalYenv_global_binding_value},
  {"%dlvar-mod", NULL},
  {"$nul-loc-env", &Yx8rSast_evalYDnul_loc_env},
  {"ifun", NULL},
  {"arrange-arguments", &Yx8rSast_evalYarrange_arguments},
  {"env-parent", &Yx8rSast_evalYenv_parent},
  {"env-function-setter", &Yx8rSast_evalYenv_function_setter},
  {"%binding-value-setter", NULL},
  {"ast-eval-bound?", &Yx8rSast_evalYast_eval_boundQ},
  {"<loc-env>", &Yx8rSast_evalYLloc_envG},
  {"as-fun-name", &Yx8rSast_evalYas_fun_name},
  {"env-function", &Yx8rSast_evalYenv_function},
  {"ast-eval-specs", &Yx8rSast_evalYast_eval_specs},
  {"env-local-value", &Yx8rSast_evalYenv_local_value},
  {"env-runtime-value-setter", &Yx8rSast_evalYenv_runtime_value_setter},
  {"env-global-binding-bound?", &Yx8rSast_evalYenv_global_binding_boundQ},
  {"env-local-reference-value", &Yx8rSast_evalYenv_local_reference_value},
  {"%define-binding", NULL},
  {"env-names-setter", &Yx8rSast_evalYenv_names_setter},
  {"env-runtime-value", &Yx8rSast_evalYenv_runtime_value},
  {"%binding-bound?", NULL},
  {"%ensure-binding", NULL},
  {"*stack*", &Yx8rSast_evalYTstackT},
  {"ast-eval", &Yx8rSast_evalYast_eval},
  {"%dlvar-binding", NULL},
  {"---main-0---", NULL},
  {"env-binding-value", &Yx8rSast_evalYenv_binding_value},
  {"env-values-setter", &Yx8rSast_evalYenv_values_setter},
  {"export-goo-method", &Yx8rSast_evalYexport_goo_method},
  {"%dlvar-setter", NULL},
  {"env-local-reference-value-setter", &Yx8rSast_evalYenv_local_reference_value_setter},
  {"%dlvar-nam", NULL},
  {"env-frame!", &Yx8rSast_evalYenv_frameX},
  {"%lookup-binding", NULL},
  {"env-names", &Yx8rSast_evalYenv_names},
  {"---main-1---", NULL},
  {"%dlvar", NULL},
  {"env-binding-value-setter", &Yx8rSast_evalYenv_binding_value_setter},
  {"env-global-binding-value-setter", &Yx8rSast_evalYenv_global_binding_value_setter},
  {"env-values", &Yx8rSast_evalYenv_values},
  {"env-define-binding!", &Yx8rSast_evalYenv_define_bindingX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value-setter", "%binding-value-setter"},
  {"%binding-value", "%binding-value"},
  {"ast-evaluate", "ast-evaluate"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"%binding-bound?", "%binding-bound?"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSast_eval;
MODULE_INFO module_info_x8rSast_eval = {
  "x8r/ast-eval",
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
extern void load_module_x8rSast (void);

/* EXPRESSION: */

extern void load_module_x8rSast_eval (void);

void load_module_x8rSast_eval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_goo();
  load_module_x8rSast();

  (P)Yx8rSast_evalY___main_0___();
  (P)Yx8rSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
