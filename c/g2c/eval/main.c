/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/main */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalStopYload,"eval/top","load");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yclass_props,"goo/boot","class-props");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynew,"goo/boot","new");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(Ytup,"goo/boot","tup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalStopYD,"eval/top","$");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclone,"goo/boot","clone");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLnumG,"goo/boot","<num>");
EXT(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_2);
DEFLIT(lit_6);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_9);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_1);
DEFLIT(lit_4);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF3778;
  P fileF3777;
  P tmpF3776;
  P fileF3775;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
loop:
  lit_0 = YPsb((P)"0.147");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"SEP 05, 2002");
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
  fileF3775 = T0;
  tmpF3776 = fileF3775;
  if (tmpF3776 != YPfalse) {
    T3 = XCALL2(1,VARREF(YevalStopYload_file),fileF3775,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF3777 = T4;
  tmpF3778 = fileF3777;
  if (tmpF3778 != YPfalse) {
    T7 = XCALL2(1,VARREF(YevalStopYload_file),fileF3777,LITREF(lit_10));
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
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSlate_macros;

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
  {"type-object", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"top", &module_info_evalStop, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"g2c-ast", &module_info_evalSg2c, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"load", &module_info_evalStop, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"function-self-recursive?", &module_info_evalSast, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"fab-random", &module_info_gooSrandom, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"g2c-test", &module_info_evalSg2c, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"<pipe>", &module_info_colsSpipe, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"g2c-clean", &module_info_evalSg2c, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"g2c-def-app", &module_info_evalSg2c, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"random-using", &module_info_gooSrandom, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"g2c-exp", &module_info_evalSg2c, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"enq!", &module_info_colsSpipe, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"g2c-build-app", &module_info_evalSg2c, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"g2c-top", &module_info_evalSg2c, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"random-unit-using", &module_info_gooSrandom, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"random", &module_info_gooSrandom, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"random-unit", &module_info_gooSrandom, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"$", &module_info_evalStop, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"function-self-recursive?-setter", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"g2c-goo", &module_info_evalSg2c, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"deq!", &module_info_colsSpipe, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
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
