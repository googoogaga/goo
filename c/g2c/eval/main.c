/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/main */

EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(Ytail,"goo/boot","tail");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
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
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(Ylst,"goo/boot","lst");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalStopYesctst,"eval/top","esctst");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_11);
DEFLIT(lit_8);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_4);
DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_2);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF2693;
  P fileF2692;
  P tmpF2691;
  P fileF2690;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
loop:
  lit_0 = YPsb((P)"0.140");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"JUL 19, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T0 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF2690 = T0;
  tmpF2691 = fileF2690;
  if (tmpF2691 != YPfalse) {
    T3 = XCALL2(1,VARREF(YevalStopYload_file),fileF2690,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF2692 = T4;
  tmpF2693 = fileF2692;
  if (tmpF2693 != YPfalse) {
    T7 = XCALL2(1,VARREF(YevalStopYload_file),fileF2692,LITREF(lit_10));
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
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
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
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fin", &module_info_gooSboot, "fin"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"random-using", &module_info_gooSrandom, "random-using"},
  {"export", &module_info_gooSboot, "export"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"tup", &module_info_gooSboot, "tup"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"event-broadcast", &module_info_timeSevent, "event-broadcast"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"spawn", &module_info_timeSthreads, "spawn"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"tail", &module_info_gooSboot, "tail"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"thread-function", &module_info_timeSthreads, "thread-function"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"acos", &module_info_gooSmath, "acos"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"min", &module_info_gooSmag, "min"},
  {"nul", &module_info_gooSboot, "nul"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"~==", &module_info_gooSmath, "~=="},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"items", &module_info_gooScolsScol, "items"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"^", &module_info_gooSmath, "^"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"event-name", &module_info_timeSevent, "event-name"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"not", &module_info_gooSboot, "not"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"==", &module_info_gooSmacros, "=="},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"match", &module_info_gooSmacros, "match"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"g2c-ast", &module_info_evalSg2c, "g2c-ast"},
  {"fun", &module_info_gooSboot, "fun"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"cos", &module_info_gooSmath, "cos"},
  {"now", &module_info_gooScolsScol, "now"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"any?", &module_info_gooStypes, "any?"},
  {"case", &module_info_gooSmacros, "case"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"mod", &module_info_gooSmath, "mod"},
  {"pair", &module_info_gooSmacros, "pair"},
  {">=", &module_info_gooSmag, ">="},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"g2c-clean", &module_info_evalSg2c, "g2c-clean"},
  {"~=", &module_info_gooSmath, "~="},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"event-wait-timed", &module_info_timeSevent, "event-wait-timed"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"random-unit-using", &module_info_gooSrandom, "random-unit-using"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"fab-random", &module_info_gooSrandom, "fab-random"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"try", &module_info_gooSboot, "try"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"random", &module_info_gooSrandom, "random"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"<=", &module_info_gooSmag, "<="},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"col", &module_info_gooScolsScol, "col"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"event-signal", &module_info_timeSevent, "event-signal"},
  {"<<", &module_info_gooSmath, "<<"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
  {"g2c-top", &module_info_evalSg2c, "g2c-top"},
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"in", &module_info_gooSioSport, "in"},
  {"frame", &module_info_evalStop, "frame"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"ct", &module_info_gooSboot, "ct"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"out", &module_info_gooSioSport, "out"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"|", &module_info_gooSmath, "|"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"head", &module_info_gooSboot, "head"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"loc", &module_info_gooSboot, "loc"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"g2c-test", &module_info_evalSg2c, "g2c-test"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"deq!", &module_info_colsSpipe, "deq!"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"into", &module_info_gooScolsScol, "into"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"asin", &module_info_gooSmath, "asin"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"get", &module_info_gooSioSport, "get"},
  {"div", &module_info_gooSmath, "div"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"t?", &module_info_gooStypes, "t?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"error", &module_info_gooSboot, "error"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"1+", &module_info_gooSmath, "1+"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"always", &module_info_gooSruntime, "always"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"del", &module_info_gooScolsScol, "del"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"event-wait", &module_info_timeSevent, "event-wait"},
  {"for", &module_info_gooSmacros, "for"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"*", &module_info_gooSmath, "*"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"df", &module_info_gooSboot, "df"},
  {"packing", &module_info_gooSpacker, "packing"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"put", &module_info_gooSioSport, "put"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"<event>", &module_info_timeSevent, "<event>"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"g2c-build-app", &module_info_evalSg2c, "g2c-build-app"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"dm", &module_info_gooSboot, "dm"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"while", &module_info_gooSmacros, "while"},
  {"if", &module_info_gooSboot, "if"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"t=", &module_info_gooStypes, "t="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"top", &module_info_evalStop, "top"},
  {"random-unit", &module_info_gooSrandom, "random-unit"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"~", &module_info_gooSmath, "~"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"round", &module_info_gooSmath, "round"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"map", &module_info_gooSmacros, "map"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"t+", &module_info_gooStypes, "t+"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"+", &module_info_gooSmath, "+"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"find", &module_info_gooScolsScol, "find"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"esc", &module_info_gooSboot, "esc"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"let", &module_info_gooSboot, "let"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"load", &module_info_evalStop, "load"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"len", &module_info_gooStypes, "len"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"enq!", &module_info_colsSpipe, "enq!"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"g2c-goo", &module_info_evalSg2c, "g2c-goo"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"set", &module_info_gooSboot, "set"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"even?", &module_info_gooSmath, "even?"},
  {"read", &module_info_gooSruntime, "read"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"rem", &module_info_gooSmath, "rem"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"logn", &module_info_gooSmath, "logn"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"open", &module_info_gooSioSport, "open"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"-", &module_info_gooSmath, "-"},
  {"<pipe>", &module_info_colsSpipe, "<pipe>"},
  {"log", &module_info_gooSmath, "log"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {">>", &module_info_gooSmath, ">>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"as", &module_info_gooStypes, "as"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"event-reset", &module_info_timeSevent, "event-reset"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"def", &module_info_gooSboot, "def"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"g2c-def-app", &module_info_evalSg2c, "g2c-def-app"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"=", &module_info_gooSmath, "="},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"&", &module_info_gooSmath, "&"},
  {"tan", &module_info_gooSmath, "tan"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"bt", &module_info_evalStop, "bt"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do", &module_info_gooSmacros, "do"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"op", &module_info_gooSmacros, "op"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {">", &module_info_gooSmag, ">"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"g2c-exp", &module_info_evalSg2c, "g2c-exp"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"thread-name", &module_info_timeSthreads, "thread-name"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"<", &module_info_gooSmag, "<"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"use", &module_info_gooSboot, "use"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"time", &module_info_gooSsystem, "time"},
  {"$e", &module_info_gooSmath, "$e"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"max", &module_info_gooSmag, "max"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"close", &module_info_gooSioSport, "close"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-date*", CVAR, &YevalSmainYTgoo_dateT},
  {"---main-0---", PVAR, NULL},
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
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
