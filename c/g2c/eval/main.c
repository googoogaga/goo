/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/main */

EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YevalStopYDD,"eval/top","$$");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_7);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_11);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF4011;
  P fileF4010;
  P tmpF4009;
  P fileF4008;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  lit_0 = YPsb((P)"0.148");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"SEP 06, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
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
  T0 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF4008 = T0;
  tmpF4009 = fileF4008;
  if (tmpF4009 != YPfalse) {
    T3 = XCALL2(1,VARREF(YevalStopYload_file),fileF4008,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF4010 = T4;
  tmpF4011 = fileF4010;
  if (tmpF4011 != YPfalse) {
    T7 = XCALL2(1,VARREF(YevalStopYload_file),fileF4010,LITREF(lit_10));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  T9 = XCALL1(1,VARREF(YevalStopYtop),LITREF(lit_10));
  T8 = T9;
  return T8;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSg2c;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_timeSevent;
extern MODULE_INFO module_info_colsSpipe;
extern MODULE_INFO module_info_gooSrandom;
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSg2c},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {&module_info_timeSevent},
  {&module_info_colsSpipe},
  {&module_info_gooSrandom},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"components-basename", &module_info_gooSsystem, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"g2c-build-app", &module_info_evalSg2c, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"random-unit", &module_info_gooSrandom, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"random-using", &module_info_gooSrandom, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"g2c-clean", &module_info_evalSg2c, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"g2c-exp", &module_info_evalSg2c, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"enq!", &module_info_colsSpipe, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"g2c-def-app", &module_info_evalSg2c, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"g2c-top", &module_info_evalSg2c, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<pipe>", &module_info_colsSpipe, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"deq!", &module_info_colsSpipe, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"random-unit-using", &module_info_gooSrandom, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"g2c-ast", &module_info_evalSg2c, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"$", &module_info_evalStop, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"top", &module_info_evalStop, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"g2c-goo", &module_info_evalSg2c, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"g2c-test", &module_info_evalSg2c, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"random", &module_info_gooSrandom, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {">", &module_info_gooSmag, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"load", &module_info_evalStop, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"fab-random", &module_info_gooSrandom, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
  {"---main-0---", PVAR, NULL},
  {"*goo-date*", CVAR, &YevalSmainYTgoo_dateT},
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
extern void load_module_timeSthreads (void);
extern void load_module_timeSlock (void);
extern void load_module_timeSevent (void);
extern void load_module_colsSpipe (void);
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
  load_module_timeSthreads();
  load_module_timeSlock();
  load_module_timeSevent();
  load_module_colsSpipe();
  load_module_gooSrandom();
  load_module_gooSuser();

  (P)YevalSmainY___main_0___();

}

/* END OF GENERATED CODE. */
