/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/main */

EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(Ynot,"goo/boot","not");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YevalStopYD,"eval/top","$");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_0);
DEFLIT(lit_7);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_6);
DEFLIT(lit_3);
DEFLIT(lit_11);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF3812;
  P fileF3811;
  P tmpF3810;
  P fileF3809;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
loop:
  lit_0 = YPsb((P)"0.144");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"AUG 29, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  XCALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T0 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF3809 = T0;
  tmpF3810 = fileF3809;
  if (tmpF3810 != YPfalse) {
    T3 = XCALL2(1,VARREF(YevalStopYload_file),fileF3809,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF3811 = T4;
  tmpF3812 = fileF3811;
  if (tmpF3812 != YPfalse) {
    T7 = XCALL2(1,VARREF(YevalStopYload_file),fileF3811,LITREF(lit_10));
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
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;
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
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"elt!", &module_info_gooScolsScolx, "elt!"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"if", &module_info_gooSboot, "if"},
  {"def-list", &module_info_gooScolsSlst, "def-list"},
  {"1-", &module_info_gooSmath, "1-"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"try", &module_info_gooSboot, "try"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"frame", &module_info_evalStop, "frame"},
  {"-", &module_info_gooSmath, "-"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"random", &module_info_gooSrandom, "random"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"find", &module_info_gooScolsScol, "find"},
  {"event-signal", &module_info_timeSevent, "event-signal"},
  {"t?", &module_info_gooStypes, "t?"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"==", &module_info_gooSmacros, "=="},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"time", &module_info_gooSsystem, "time"},
  {"len", &module_info_gooStypes, "len"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"g2c-exp", &module_info_evalSg2c, "g2c-exp"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"g2c-top", &module_info_evalSg2c, "g2c-top"},
  {"random-unit", &module_info_gooSrandom, "random-unit"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"ast-error", &module_info_evalSdependency, "ast-error"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"case", &module_info_gooSmacros, "case"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"match", &module_info_gooSmacros, "match"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"dp", &module_info_gooSboot, "dp"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"$e", &module_info_gooSmath, "$e"},
  {"^", &module_info_gooSmath, "^"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"~=", &module_info_gooSmath, "~="},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"rep", &module_info_gooSboot, "rep"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"tail", &module_info_gooSboot, "tail"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"df", &module_info_gooSboot, "df"},
  {"close", &module_info_gooSioSport, "close"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"event-name", &module_info_timeSevent, "event-name"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"t=", &module_info_gooStypes, "t="},
  {"dg", &module_info_gooSboot, "dg"},
  {"max", &module_info_gooSmag, "max"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"logn", &module_info_gooSmath, "logn"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"error", &module_info_gooSboot, "error"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"sin", &module_info_gooSmath, "sin"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"dc", &module_info_gooSboot, "dc"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"loc", &module_info_gooSboot, "loc"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"min", &module_info_gooSmag, "min"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"open", &module_info_gooSioSport, "open"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {">>", &module_info_gooSmath, ">>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"g2c-ast", &module_info_evalSg2c, "g2c-ast"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"1+", &module_info_gooSmath, "1+"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"event-wait", &module_info_timeSevent, "event-wait"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"+", &module_info_gooSmath, "+"},
  {"event-wait-timed", &module_info_timeSevent, "event-wait-timed"},
  {"=", &module_info_gooSmath, "="},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"<pipe>", &module_info_colsSpipe, "<pipe>"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"thread-function", &module_info_timeSthreads, "thread-function"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"esc", &module_info_gooSboot, "esc"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"module-uses-c-libraries", &module_info_evalSast, "module-uses-c-libraries"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<=", &module_info_gooSmag, "<="},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"g2c-def-app", &module_info_evalSg2c, "g2c-def-app"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"mod", &module_info_gooSmath, "mod"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"read", &module_info_gooSconditions, "read"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"spawn", &module_info_timeSthreads, "spawn"},
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"<<", &module_info_gooSmath, "<<"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"top", &module_info_evalStop, "top"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"dm", &module_info_gooSboot, "dm"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"log", &module_info_gooSmath, "log"},
  {"dv", &module_info_gooSboot, "dv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun", &module_info_gooSboot, "fun"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"deq!", &module_info_colsSpipe, "deq!"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"<directory-error>", &module_info_gooSsystem, "<directory-error>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"g2c-clean", &module_info_evalSg2c, "g2c-clean"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"not", &module_info_gooSboot, "not"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"g2c-goo", &module_info_evalSg2c, "g2c-goo"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"event-reset", &module_info_timeSevent, "event-reset"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"round", &module_info_gooSmath, "round"},
  {"load", &module_info_evalStop, "load"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"/", &module_info_gooSmath, "/"},
  {"def", &module_info_gooSboot, "def"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"col", &module_info_gooScolsScol, "col"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"new", &module_info_gooSboot, "new"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"tan", &module_info_gooSmath, "tan"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"bt", &module_info_evalStop, "bt"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"always", &module_info_gooSruntime, "always"},
  {"~", &module_info_gooSmath, "~"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"div", &module_info_gooSmath, "div"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"$", &module_info_evalStop, "$"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"random-unit-using", &module_info_gooSrandom, "random-unit-using"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"as", &module_info_gooStypes, "as"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"thread-name", &module_info_timeSthreads, "thread-name"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"program-line", &module_info_evalSast, "program-line"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"ct", &module_info_gooSboot, "ct"},
  {"in", &module_info_gooSioSport, "in"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"fab-random", &module_info_gooSrandom, "fab-random"},
  {"$$", &module_info_evalStop, "$$"},
  {"random-using", &module_info_gooSrandom, "random-using"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"g2c-test", &module_info_evalSg2c, "g2c-test"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"<event>", &module_info_timeSevent, "<event>"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"$$$", &module_info_evalStop, "$$$"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"event-broadcast", &module_info_timeSevent, "event-broadcast"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"last", &module_info_gooSmacros, "last"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"put", &module_info_gooSioSport, "put"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"out", &module_info_gooSioSport, "out"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"op", &module_info_gooSmacros, "op"},
  {"*", &module_info_gooSmath, "*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"items", &module_info_gooScolsScol, "items"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"quote", &module_info_gooSboot, "quote"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"clone", &module_info_gooSboot, "clone"},
  {"now", &module_info_gooScolsScol, "now"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"&", &module_info_gooSmath, "&"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"tup", &module_info_gooSboot, "tup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"enq!", &module_info_colsSpipe, "enq!"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"export", &module_info_gooSboot, "export"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"or", &module_info_gooSmacros, "or"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<pathname-error>", &module_info_gooSsystem, "<pathname-error>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"and", &module_info_gooSmacros, "and"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"g2c-build-app", &module_info_evalSg2c, "g2c-build-app"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
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
