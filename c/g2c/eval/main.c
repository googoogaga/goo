/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/main */

EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYc_inline_strs,"eval/ast","c-inline-strs");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYc_inline_refs,"eval/ast","c-inline-refs");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYLc_inlineG,"eval/ast","<c-inline>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYc_inline_exprQ,"eval/ast","c-inline-expr?");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalStopYtop,"eval/top","top");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSmoduleYmodule_c_forms,"eval/module","module-c-forms");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalStopYDD,"eval/top","$$");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSbignumYmpzUprint,"goo/bignum","mpz_print");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_11);
DEFLIT(lit_2);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_10);
DEFLIT(lit_4);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P fileF5384;
  P fileF5383;
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  lit_0 = YPsb((P)"0.155");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"NOV 17, 2003");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT CSAIL\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T2 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF5383 = T2;
  if (fileF5383 != YPfalse) {
    T1 = XCALL2(1,VARREF(YevalStopYload_file),fileF5383,LITREF(lit_10));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  lit_11 = YPsb((P)"init");
  T5 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF5384 = T5;
  if (fileF5384 != YPfalse) {
    T4 = XCALL2(1,VARREF(YevalStopYload_file),fileF5384,LITREF(lit_10));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T7 = XCALL1(1,VARREF(YevalStopYtop),LITREF(lit_10));
  T6 = T7;
  return T6;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSg2c;
extern MODULE_INFO module_info_gooSbignum;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_timeSevent;
extern MODULE_INFO module_info_gooSrandom;
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSg2c},
  {&module_info_gooSbignum},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {&module_info_timeSevent},
  {&module_info_gooSrandom},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fold+", &module_info_gooScolsScol, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"g2c-goo", &module_info_evalSg2c, NULL},
  {"random-unit", &module_info_gooSrandom, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"c-inline-strs", &module_info_evalSast, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"c-inline-refs", &module_info_evalSast, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"fab-random", &module_info_gooSrandom, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"g2c-clean", &module_info_evalSg2c, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"<c-inline>", &module_info_evalSast, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"c-inline-expr?", &module_info_evalSast, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"top", &module_info_evalStop, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"g2c-exp", &module_info_evalSg2c, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"$", &module_info_evalStop, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"load", &module_info_evalStop, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"g2c-def-app", &module_info_evalSg2c, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {"random", &module_info_gooSrandom, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"g2c-top", &module_info_evalSg2c, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"module-c-forms", &module_info_evalSmodule, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"random-unit-using", &module_info_gooSrandom, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"g2c-ast", &module_info_evalSg2c, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"random-using", &module_info_gooSrandom, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {">", &module_info_gooSmag, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"mpz_print", &module_info_gooSbignum, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"g2c-test", &module_info_evalSg2c, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"g2c-build-app", &module_info_evalSg2c, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-date*", CVAR, &YevalSmainYTgoo_dateT},
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSmain;
MODULE_INFO module_info_evalSmain = {
  "eval/main",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSeval (void);
extern void load_module_gooSsystem (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSg2c (void);
extern void load_module_gooSbignum (void);
extern void load_module_timeSthreads (void);
extern void load_module_timeSlock (void);
extern void load_module_timeSevent (void);
extern void load_module_gooSrandom (void);
extern void load_module_gooSuser (void);

/* EXPRESSION: */

extern void load_module_evalSmain (void);

void load_module_evalSmain (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSeval();
  load_module_gooSsystem();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSg2c();
  load_module_gooSbignum();
  load_module_timeSthreads();
  load_module_timeSlock();
  load_module_timeSevent();
  load_module_gooSrandom();
  load_module_gooSuser();

  (P)YevalSmainY___main_0___();

}

/* END OF GENERATED CODE. */
