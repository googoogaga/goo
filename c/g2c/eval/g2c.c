/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/g2c");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
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
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalStopYframe,"eval/top","frame");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooStypesYtL,"goo/types","t<");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOall2Q,"goo/boot","@all2?");
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
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalStopYframe_var,"eval/top","frame-var");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalStopYload_file,"eval/top","load-file");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
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
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
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
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YevalSg2cYgenerate_self_recursive_call,"eval/g2c","generate-self-recursive-call");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
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
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
DEF(YevalSg2cYgenerate_shadow_args,"eval/g2c","generate-shadow-args");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YPsnul,"goo/boot","%snul");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YLlocG,"goo/boot","<loc>");
DYNDEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YPprop,"goo/boot","%prop");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalStopYload,"eval/top","load");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
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
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YevalStopYbt,"eval/top","bt");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YevalStopYD,"eval/top","$");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
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
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalStopYsave_image,"eval/top","save-image");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
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
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_718);
DEFLIT(lit_711);
DEFLIT(lit_214);
DEFLIT(lit_692);
DEFLIT(lit_523);
DEFLIT(lit_595);
DEFLIT(lit_244);
DEFLIT(lit_300);
DEFLIT(lit_55);
DEFLIT(lit_249);
DEFLIT(lit_69);
DEFLIT(lit_668);
DEFLIT(lit_278);
DEFLIT(lit_94);
DEFLIT(lit_255);
DEFLIT(lit_46);
DEFLIT(lit_678);
DEFLIT(lit_571);
DEFLIT(lit_103);
DEFLIT(lit_597);
DEFLIT(lit_691);
DEFLIT(lit_354);
DEFLIT(lit_12);
DEFLIT(lit_203);
DEFLIT(lit_226);
DEFLIT(lit_95);
DEFLIT(lit_589);
DEFLIT(lit_52);
DEFLIT(lit_368);
DEFLIT(lit_593);
DEFLIT(lit_91);
DEFLIT(lit_539);
DEFLIT(lit_483);
DEFLIT(lit_429);
DEFLIT(lit_686);
DEFLIT(lit_474);
DEFLIT(lit_357);
DEFLIT(lit_288);
DEFLIT(lit_197);
DEFLIT(lit_8);
DEFLIT(lit_177);
DEFLIT(lit_188);
DEFLIT(lit_125);
DEFLIT(lit_475);
DEFLIT(lit_721);
DEFLIT(lit_507);
DEFLIT(lit_358);
DEFLIT(lit_61);
DEFLIT(lit_254);
DEFLIT(lit_33);
DEFLIT(lit_408);
DEFLIT(lit_543);
DEFLIT(lit_343);
DEFLIT(lit_676);
DEFLIT(lit_420);
DEFLIT(lit_671);
DEFLIT(lit_521);
DEFLIT(lit_546);
DEFLIT(lit_545);
DEFLIT(lit_148);
DEFLIT(lit_152);
DEFLIT(lit_568);
DEFLIT(lit_572);
DEFLIT(lit_310);
DEFLIT(lit_116);
DEFLIT(lit_17);
DEFLIT(lit_439);
DEFLIT(lit_582);
DEFLIT(lit_337);
DEFLIT(lit_520);
DEFLIT(lit_336);
DEFLIT(lit_631);
DEFLIT(lit_619);
DEFLIT(lit_378);
DEFLIT(lit_102);
DEFLIT(lit_659);
DEFLIT(lit_43);
DEFLIT(lit_476);
DEFLIT(lit_412);
DEFLIT(lit_396);
DEFLIT(lit_160);
DEFLIT(lit_63);
DEFLIT(lit_516);
DEFLIT(lit_191);
DEFLIT(lit_174);
DEFLIT(lit_32);
DEFLIT(lit_611);
DEFLIT(lit_257);
DEFLIT(lit_628);
DEFLIT(lit_672);
DEFLIT(lit_237);
DEFLIT(lit_15);
DEFLIT(lit_441);
DEFLIT(lit_695);
DEFLIT(lit_74);
DEFLIT(lit_395);
DEFLIT(lit_26);
DEFLIT(lit_34);
DEFLIT(lit_144);
DEFLIT(lit_592);
DEFLIT(lit_428);
DEFLIT(lit_225);
DEFLIT(lit_170);
DEFLIT(lit_171);
DEFLIT(lit_180);
DEFLIT(lit_143);
DEFLIT(lit_713);
DEFLIT(lit_484);
DEFLIT(lit_111);
DEFLIT(lit_10);
DEFLIT(lit_680);
DEFLIT(lit_394);
DEFLIT(lit_465);
DEFLIT(lit_323);
DEFLIT(lit_16);
DEFLIT(lit_58);
DEFLIT(lit_96);
DEFLIT(lit_540);
DEFLIT(lit_338);
DEFLIT(lit_72);
DEFLIT(lit_653);
DEFLIT(lit_200);
DEFLIT(lit_566);
DEFLIT(lit_477);
DEFLIT(lit_570);
DEFLIT(lit_187);
DEFLIT(lit_684);
DEFLIT(lit_624);
DEFLIT(lit_417);
DEFLIT(lit_622);
DEFLIT(lit_621);
DEFLIT(lit_652);
DEFLIT(lit_464);
DEFLIT(lit_265);
DEFLIT(lit_529);
DEFLIT(lit_264);
DEFLIT(lit_599);
DEFLIT(lit_648);
DEFLIT(lit_400);
DEFLIT(lit_509);
DEFLIT(lit_287);
DEFLIT(lit_164);
DEFLIT(lit_352);
DEFLIT(lit_590);
DEFLIT(lit_438);
DEFLIT(lit_347);
DEFLIT(lit_511);
DEFLIT(lit_656);
DEFLIT(lit_134);
DEFLIT(lit_435);
DEFLIT(lit_393);
DEFLIT(lit_140);
DEFLIT(lit_302);
DEFLIT(lit_277);
DEFLIT(lit_353);
DEFLIT(lit_331);
DEFLIT(lit_562);
DEFLIT(lit_422);
DEFLIT(lit_494);
DEFLIT(lit_81);
DEFLIT(lit_634);
DEFLIT(lit_190);
DEFLIT(lit_216);
DEFLIT(lit_489);
DEFLIT(lit_275);
DEFLIT(lit_525);
DEFLIT(lit_248);
DEFLIT(lit_18);
DEFLIT(lit_179);
DEFLIT(lit_176);
DEFLIT(lit_350);
DEFLIT(lit_567);
DEFLIT(lit_195);
DEFLIT(lit_267);
DEFLIT(lit_550);
DEFLIT(lit_381);
DEFLIT(lit_503);
DEFLIT(lit_625);
DEFLIT(lit_675);
DEFLIT(lit_397);
DEFLIT(lit_471);
DEFLIT(lit_236);
DEFLIT(lit_59);
DEFLIT(lit_447);
DEFLIT(lit_360);
DEFLIT(lit_359);
DEFLIT(lit_497);
DEFLIT(lit_404);
DEFLIT(lit_14);
DEFLIT(lit_556);
DEFLIT(lit_617);
DEFLIT(lit_279);
DEFLIT(lit_615);
DEFLIT(lit_493);
DEFLIT(lit_298);
DEFLIT(lit_701);
DEFLIT(lit_356);
DEFLIT(lit_472);
DEFLIT(lit_316);
DEFLIT(lit_627);
DEFLIT(lit_641);
DEFLIT(lit_211);
DEFLIT(lit_693);
DEFLIT(lit_706);
DEFLIT(lit_371);
DEFLIT(lit_380);
DEFLIT(lit_683);
DEFLIT(lit_724);
DEFLIT(lit_348);
DEFLIT(lit_209);
DEFLIT(lit_505);
DEFLIT(lit_71);
DEFLIT(lit_549);
DEFLIT(lit_559);
DEFLIT(lit_80);
DEFLIT(lit_41);
DEFLIT(lit_626);
DEFLIT(lit_630);
DEFLIT(lit_6);
DEFLIT(lit_241);
DEFLIT(lit_115);
DEFLIT(lit_346);
DEFLIT(lit_682);
DEFLIT(lit_492);
DEFLIT(lit_276);
DEFLIT(lit_349);
DEFLIT(lit_467);
DEFLIT(lit_327);
DEFLIT(lit_470);
DEFLIT(lit_308);
DEFLIT(lit_286);
DEFLIT(lit_345);
DEFLIT(lit_723);
DEFLIT(lit_406);
DEFLIT(lit_28);
DEFLIT(lit_449);
DEFLIT(lit_498);
DEFLIT(lit_432);
DEFLIT(lit_27);
DEFLIT(lit_70);
DEFLIT(lit_252);
DEFLIT(lit_182);
DEFLIT(lit_311);
DEFLIT(lit_196);
DEFLIT(lit_169);
DEFLIT(lit_202);
DEFLIT(lit_266);
DEFLIT(lit_457);
DEFLIT(lit_594);
DEFLIT(lit_443);
DEFLIT(lit_491);
DEFLIT(lit_155);
DEFLIT(lit_712);
DEFLIT(lit_253);
DEFLIT(lit_564);
DEFLIT(lit_161);
DEFLIT(lit_646);
DEFLIT(lit_295);
DEFLIT(lit_660);
DEFLIT(lit_305);
DEFLIT(lit_542);
DEFLIT(lit_189);
DEFLIT(lit_696);
DEFLIT(lit_210);
DEFLIT(lit_258);
DEFLIT(lit_407);
DEFLIT(lit_299);
DEFLIT(lit_75);
DEFLIT(lit_577);
DEFLIT(lit_453);
DEFLIT(lit_289);
DEFLIT(lit_462);
DEFLIT(lit_326);
DEFLIT(lit_342);
DEFLIT(lit_488);
DEFLIT(lit_372);
DEFLIT(lit_658);
DEFLIT(lit_291);
DEFLIT(lit_145);
DEFLIT(lit_159);
DEFLIT(lit_647);
DEFLIT(lit_136);
DEFLIT(lit_238);
DEFLIT(lit_645);
DEFLIT(lit_504);
DEFLIT(lit_309);
DEFLIT(lit_344);
DEFLIT(lit_387);
DEFLIT(lit_284);
DEFLIT(lit_158);
DEFLIT(lit_175);
DEFLIT(lit_256);
DEFLIT(lit_303);
DEFLIT(lit_262);
DEFLIT(lit_496);
DEFLIT(lit_294);
DEFLIT(lit_662);
DEFLIT(lit_629);
DEFLIT(lit_466);
DEFLIT(lit_541);
DEFLIT(lit_609);
DEFLIT(lit_243);
DEFLIT(lit_548);
DEFLIT(lit_586);
DEFLIT(lit_147);
DEFLIT(lit_142);
DEFLIT(lit_392);
DEFLIT(lit_698);
DEFLIT(lit_85);
DEFLIT(lit_234);
DEFLIT(lit_138);
DEFLIT(lit_437);
DEFLIT(lit_128);
DEFLIT(lit_685);
DEFLIT(lit_334);
DEFLIT(lit_661);
DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_271);
DEFLIT(lit_122);
DEFLIT(lit_502);
DEFLIT(lit_442);
DEFLIT(lit_644);
DEFLIT(lit_99);
DEFLIT(lit_325);
DEFLIT(lit_9);
DEFLIT(lit_581);
DEFLIT(lit_245);
DEFLIT(lit_78);
DEFLIT(lit_461);
DEFLIT(lit_481);
DEFLIT(lit_479);
DEFLIT(lit_382);
DEFLIT(lit_561);
DEFLIT(lit_637);
DEFLIT(lit_454);
DEFLIT(lit_506);
DEFLIT(lit_544);
DEFLIT(lit_332);
DEFLIT(lit_198);
DEFLIT(lit_186);
DEFLIT(lit_501);
DEFLIT(lit_109);
DEFLIT(lit_601);
DEFLIT(lit_247);
DEFLIT(lit_386);
DEFLIT(lit_689);
DEFLIT(lit_403);
DEFLIT(lit_410);
DEFLIT(lit_19);
DEFLIT(lit_306);
DEFLIT(lit_514);
DEFLIT(lit_108);
DEFLIT(lit_389);
DEFLIT(lit_608);
DEFLIT(lit_269);
DEFLIT(lit_44);
DEFLIT(lit_208);
DEFLIT(lit_655);
DEFLIT(lit_654);
DEFLIT(lit_618);
DEFLIT(lit_227);
DEFLIT(lit_199);
DEFLIT(lit_235);
DEFLIT(lit_528);
DEFLIT(lit_124);
DEFLIT(lit_25);
DEFLIT(lit_45);
DEFLIT(lit_666);
DEFLIT(lit_580);
DEFLIT(lit_7);
DEFLIT(lit_167);
DEFLIT(lit_121);
DEFLIT(lit_413);
DEFLIT(lit_552);
DEFLIT(lit_285);
DEFLIT(lit_68);
DEFLIT(lit_221);
DEFLIT(lit_376);
DEFLIT(lit_51);
DEFLIT(lit_106);
DEFLIT(lit_495);
DEFLIT(lit_517);
DEFLIT(lit_224);
DEFLIT(lit_240);
DEFLIT(lit_557);
DEFLIT(lit_551);
DEFLIT(lit_681);
DEFLIT(lit_456);
DEFLIT(lit_375);
DEFLIT(lit_714);
DEFLIT(lit_23);
DEFLIT(lit_283);
DEFLIT(lit_112);
DEFLIT(lit_669);
DEFLIT(lit_391);
DEFLIT(lit_166);
DEFLIT(lit_297);
DEFLIT(lit_480);
DEFLIT(lit_223);
DEFLIT(lit_314);
DEFLIT(lit_31);
DEFLIT(lit_222);
DEFLIT(lit_374);
DEFLIT(lit_390);
DEFLIT(lit_455);
DEFLIT(lit_48);
DEFLIT(lit_632);
DEFLIT(lit_328);
DEFLIT(lit_554);
DEFLIT(lit_150);
DEFLIT(lit_558);
DEFLIT(lit_105);
DEFLIT(lit_670);
DEFLIT(lit_687);
DEFLIT(lit_319);
DEFLIT(lit_373);
DEFLIT(lit_57);
DEFLIT(lit_185);
DEFLIT(lit_616);
DEFLIT(lit_388);
DEFLIT(lit_146);
DEFLIT(lit_165);
DEFLIT(lit_104);
DEFLIT(lit_440);
DEFLIT(lit_110);
DEFLIT(lit_340);
DEFLIT(lit_113);
DEFLIT(lit_296);
DEFLIT(lit_370);
DEFLIT(lit_260);
DEFLIT(lit_151);
DEFLIT(lit_369);
DEFLIT(lit_273);
DEFLIT(lit_242);
DEFLIT(lit_579);
DEFLIT(lit_87);
DEFLIT(lit_719);
DEFLIT(lit_451);
DEFLIT(lit_67);
DEFLIT(lit_333);
DEFLIT(lit_694);
DEFLIT(lit_50);
DEFLIT(lit_600);
DEFLIT(lit_168);
DEFLIT(lit_207);
DEFLIT(lit_21);
DEFLIT(lit_638);
DEFLIT(lit_416);
DEFLIT(lit_280);
DEFLIT(lit_643);
DEFLIT(lit_184);
DEFLIT(lit_610);
DEFLIT(lit_217);
DEFLIT(lit_270);
DEFLIT(lit_565);
DEFLIT(lit_90);
DEFLIT(lit_22);
DEFLIT(lit_534);
DEFLIT(lit_603);
DEFLIT(lit_301);
DEFLIT(lit_399);
DEFLIT(lit_709);
DEFLIT(lit_215);
DEFLIT(lit_522);
DEFLIT(lit_487);
DEFLIT(lit_720);
DEFLIT(lit_708);
DEFLIT(lit_163);
DEFLIT(lit_688);
DEFLIT(lit_415);
DEFLIT(lit_547);
DEFLIT(lit_35);
DEFLIT(lit_697);
DEFLIT(lit_651);
DEFLIT(lit_73);
DEFLIT(lit_468);
DEFLIT(lit_313);
DEFLIT(lit_486);
DEFLIT(lit_385);
DEFLIT(lit_526);
DEFLIT(lit_367);
DEFLIT(lit_524);
DEFLIT(lit_339);
DEFLIT(lit_183);
DEFLIT(lit_538);
DEFLIT(lit_690);
DEFLIT(lit_515);
DEFLIT(lit_677);
DEFLIT(lit_290);
DEFLIT(lit_639);
DEFLIT(lit_42);
DEFLIT(lit_162);
DEFLIT(lit_89);
DEFLIT(lit_335);
DEFLIT(lit_330);
DEFLIT(lit_430);
DEFLIT(lit_633);
DEFLIT(lit_405);
DEFLIT(lit_640);
DEFLIT(lit_604);
DEFLIT(lit_500);
DEFLIT(lit_421);
DEFLIT(lit_563);
DEFLIT(lit_574);
DEFLIT(lit_1);
DEFLIT(lit_623);
DEFLIT(lit_425);
DEFLIT(lit_418);
DEFLIT(lit_329);
DEFLIT(lit_426);
DEFLIT(lit_478);
DEFLIT(lit_427);
DEFLIT(lit_434);
DEFLIT(lit_139);
DEFLIT(lit_702);
DEFLIT(lit_228);
DEFLIT(lit_533);
DEFLIT(lit_578);
DEFLIT(lit_317);
DEFLIT(lit_649);
DEFLIT(lit_664);
DEFLIT(lit_178);
DEFLIT(lit_605);
DEFLIT(lit_635);
DEFLIT(lit_620);
DEFLIT(lit_532);
DEFLIT(lit_66);
DEFLIT(lit_53);
DEFLIT(lit_201);
DEFLIT(lit_64);
DEFLIT(lit_663);
DEFLIT(lit_458);
DEFLIT(lit_141);
DEFLIT(lit_448);
DEFLIT(lit_363);
DEFLIT(lit_473);
DEFLIT(lit_98);
DEFLIT(lit_576);
DEFLIT(lit_84);
DEFLIT(lit_636);
DEFLIT(lit_206);
DEFLIT(lit_204);
DEFLIT(lit_606);
DEFLIT(lit_324);
DEFLIT(lit_499);
DEFLIT(lit_157);
DEFLIT(lit_118);
DEFLIT(lit_97);
DEFLIT(lit_86);
DEFLIT(lit_107);
DEFLIT(lit_119);
DEFLIT(lit_716);
DEFLIT(lit_530);
DEFLIT(lit_77);
DEFLIT(lit_5);
DEFLIT(lit_156);
DEFLIT(lit_54);
DEFLIT(lit_315);
DEFLIT(lit_318);
DEFLIT(lit_40);
DEFLIT(lit_135);
DEFLIT(lit_424);
DEFLIT(lit_569);
DEFLIT(lit_519);
DEFLIT(lit_232);
DEFLIT(lit_414);
DEFLIT(lit_445);
DEFLIT(lit_205);
DEFLIT(lit_272);
DEFLIT(lit_193);
DEFLIT(lit_436);
DEFLIT(lit_292);
DEFLIT(lit_20);
DEFLIT(lit_423);
DEFLIT(lit_518);
DEFLIT(lit_513);
DEFLIT(lit_239);
DEFLIT(lit_293);
DEFLIT(lit_194);
DEFLIT(lit_364);
DEFLIT(lit_220);
DEFLIT(lit_250);
DEFLIT(lit_38);
DEFLIT(lit_212);
DEFLIT(lit_39);
DEFLIT(lit_469);
DEFLIT(lit_154);
DEFLIT(lit_123);
DEFLIT(lit_508);
DEFLIT(lit_452);
DEFLIT(lit_65);
DEFLIT(lit_88);
DEFLIT(lit_665);
DEFLIT(lit_213);
DEFLIT(lit_450);
DEFLIT(lit_409);
DEFLIT(lit_82);
DEFLIT(lit_322);
DEFLIT(lit_281);
DEFLIT(lit_79);
DEFLIT(lit_383);
DEFLIT(lit_705);
DEFLIT(lit_133);
DEFLIT(lit_56);
DEFLIT(lit_657);
DEFLIT(lit_614);
DEFLIT(lit_263);
DEFLIT(lit_321);
DEFLIT(lit_132);
DEFLIT(lit_259);
DEFLIT(lit_536);
DEFLIT(lit_673);
DEFLIT(lit_674);
DEFLIT(lit_402);
DEFLIT(lit_100);
DEFLIT(lit_446);
DEFLIT(lit_341);
DEFLIT(lit_419);
DEFLIT(lit_233);
DEFLIT(lit_667);
DEFLIT(lit_261);
DEFLIT(lit_60);
DEFLIT(lit_83);
DEFLIT(lit_93);
DEFLIT(lit_137);
DEFLIT(lit_482);
DEFLIT(lit_307);
DEFLIT(lit_535);
DEFLIT(lit_598);
DEFLIT(lit_384);
DEFLIT(lit_612);
DEFLIT(lit_642);
DEFLIT(lit_274);
DEFLIT(lit_715);
DEFLIT(lit_587);
DEFLIT(lit_92);
DEFLIT(lit_366);
DEFLIT(lit_485);
DEFLIT(lit_218);
DEFLIT(lit_362);
DEFLIT(lit_703);
DEFLIT(lit_355);
DEFLIT(lit_76);
DEFLIT(lit_463);
DEFLIT(lit_537);
DEFLIT(lit_120);
DEFLIT(lit_130);
DEFLIT(lit_101);
DEFLIT(lit_365);
DEFLIT(lit_114);
DEFLIT(lit_699);
DEFLIT(lit_13);
DEFLIT(lit_490);
DEFLIT(lit_431);
DEFLIT(lit_11);
DEFLIT(lit_282);
DEFLIT(lit_320);
DEFLIT(lit_710);
DEFLIT(lit_607);
DEFLIT(lit_700);
DEFLIT(lit_650);
DEFLIT(lit_679);
DEFLIT(lit_433);
DEFLIT(lit_411);
DEFLIT(lit_379);
DEFLIT(lit_127);
DEFLIT(lit_531);
DEFLIT(lit_181);
DEFLIT(lit_377);
DEFLIT(lit_131);
DEFLIT(lit_246);
DEFLIT(lit_460);
DEFLIT(lit_172);
DEFLIT(lit_613);
DEFLIT(lit_361);
DEFLIT(lit_304);
DEFLIT(lit_555);
DEFLIT(lit_24);
DEFLIT(lit_585);
DEFLIT(lit_49);
DEFLIT(lit_129);
DEFLIT(lit_251);
DEFLIT(lit_126);
DEFLIT(lit_510);
DEFLIT(lit_527);
DEFLIT(lit_591);
DEFLIT(lit_707);
DEFLIT(lit_4);
DEFLIT(lit_444);
DEFLIT(lit_704);
DEFLIT(lit_2);
DEFLIT(lit_553);
DEFLIT(lit_722);
DEFLIT(lit_312);
DEFLIT(lit_512);
DEFLIT(lit_560);
DEFLIT(lit_401);
DEFLIT(lit_459);
DEFLIT(lit_153);
DEFLIT(lit_62);
DEFLIT(lit_583);
DEFLIT(lit_117);
DEFLIT(lit_47);
DEFLIT(lit_584);
DEFLIT(lit_30);
DEFLIT(lit_268);
DEFLIT(lit_573);
DEFLIT(lit_575);
DEFLIT(lit_717);
DEFLIT(lit_230);
DEFLIT(lit_588);
DEFLIT(lit_219);
DEFLIT(lit_149);
DEFLIT(lit_231);
DEFLIT(lit_37);
DEFLIT(lit_36);
DEFLIT(lit_398);
DEFLIT(lit_29);
DEFLIT(lit_173);
DEFLIT(lit_229);
DEFLIT(lit_351);
DEFLIT(lit_596);
DEFLIT(lit_192);
DEFLIT(lit_602);

/* FUNCTIONS: */

LOCFOR(fun_module_loader_appname_0);
LOCFOR(fun_module_loader_appname_setter_1);
LOCFOR(fun_module_loader_app_modname_2);
LOCFOR(fun_module_loader_app_modname_setter_3);
LOCFOR(fun_module_src_file_4);
LOCFOR(fun_module_src_file_setter_5);
LOCFOR(fun_module_mtime_6);
LOCFOR(fun_module_mtime_setter_7);
LOCFOR(fun_module_loader_module_type_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_load_module_14);
FUNFOR(YevalSg2cYmodule_up_to_dateQ);
LOCFOR(fun_16);
LOCFOR(fun_17);
FUNFOR(YevalSg2cYpurge_outdated_modules);
FUNFOR(YevalSg2cYg2c_def_app);
FUNFOR(YevalSg2cYg2c_build_app);
FUNFOR(YevalSg2cYg2c_test);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_g2c_ast_28);
LOCFOR(fun_g2c_exp_29);
LOCFOR(fun_compile_load_30);
LOCFOR(fun_g2c_eval_31);
LOCFOR(fun_g2c_eval_32);
LOCFOR(fun_g2c_top_33);
LOCFOR(fun_g2c_clean_34);
LOCFOR(fun_compute_ast_35);
LOCFOR(fun_compute_program_36);
LOCFOR(fun_generate_c_module_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_generate_c_application_40);
LOCFOR(fun_x_1544_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_put_obj_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_generate_makefile_54);
LOCFOR(fun_pp_55);
LOCFOR(fun_generate_header_56);
LOCFOR(fun_generate_trailer_57);
LOCFOR(fun_58);
LOCFOR(fun_generate_global_environment_59);
LOCFOR(fun_generate_global_binding_60);
LOCFOR(fun_loop_61);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_63);
LOCFOR(fun_mangle_string_literal_64);
LOCFOR(fun_mangle_string_literal_65);
LOCFOR(fun_process_integer_66);
LOCFOR(fun_mangle_integer_67);
LOCFOR(fun_x_1572_68);
LOCFOR(fun_x_1574_69);
LOCFOR(fun_x_1576_70);
LOCFOR(fun_x_1578_71);
FUNFOR(YevalSg2cYmangler_reset);
LOCFOR(fun_x_1580_73);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_75);
LOCFOR(fun_mangle_raw_name_76);
LOCFOR(fun_mangle_local_name_77);
LOCFOR(fun_mangle_local_name_78);
LOCFOR(fun_x_1584_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_loop_82);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_84);
LOCFOR(fun_mangle_global_name_85);
LOCFOR(fun_mangle_global_name_86);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_89);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_91);
LOCFOR(fun_mangle_binding_92);
LOCFOR(fun_x_1588_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_1592_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1596_99);
LOCFOR(fun_loop_100);
LOCFOR(fun_101);
LOCFOR(fun_102);
LOCFOR(fun_gen_result_103);
LOCFOR(fun_x_1599_104);
LOCFOR(fun_gen_depth_105);
LOCFOR(fun_x_1603_106);
LOCFOR(fun_107);
LOCFOR(fun_108);
LOCFOR(fun_x_1607_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_x_1611_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_x_1613_115);
LOCFOR(fun_generate_quotation_forwards_116);
LOCFOR(fun_x_1616_117);
LOCFOR(fun_generate_quotations_118);
LOCFOR(fun_false_name_119);
LOCFOR(fun_generate_quotation_120);
LOCFOR(fun_generate_quotation_121);
LOCFOR(fun_122);
LOCFOR(fun_generate_quotation_123);
LOCFOR(fun_generate_quotation_124);
LOCFOR(fun_generate_quotation_125);
LOCFOR(fun_loop_126);
LOCFOR(fun_127);
LOCFOR(fun_float_to_c_string_128);
LOCFOR(fun_generate_quotation_129);
LOCFOR(fun_generate_quotation_130);
LOCFOR(fun_x_1626_131);
LOCFOR(fun_generate_quotation_132);
LOCFOR(fun_x_1629_133);
LOCFOR(fun_generate_quotation_134);
LOCFOR(fun_generate_quotation_135);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_137);
LOCFOR(fun_reference_Gc_138);
LOCFOR(fun_to_c_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_gen_ref_141);
LOCFOR(fun_gen_ref_142);
LOCFOR(fun_gen_ref_143);
LOCFOR(fun_gen_ref_144);
LOCFOR(fun_gen_ref_145);
LOCFOR(fun_gen_ref_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_to_c_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_x_1646_155);
LOCFOR(fun_x_1649_156);
LOCFOR(fun_x_1653_157);
LOCFOR(fun_generate_self_recursive_call_158);
LOCFOR(fun_x_1656_159);
LOCFOR(fun_x_1661_160);
LOCFOR(fun_to_c_161);
LOCFOR(fun_x_1665_162);
LOCFOR(fun_163);
LOCFOR(fun_164);
LOCFOR(fun_to_c_165);
LOCFOR(fun_x_1669_166);
LOCFOR(fun_to_c_167);
LOCFOR(fun_x_1673_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_to_c_171);
LOCFOR(fun_to_c_172);
LOCFOR(fun_x_1678_173);
LOCFOR(fun_x_1684_174);
LOCFOR(fun_175);
LOCFOR(fun_176);
LOCFOR(fun_to_c_177);
LOCFOR(fun_178);
LOCFOR(fun_x_1688_179);
LOCFOR(fun_to_c_180);
LOCFOR(fun_funshell_to_c_181);
LOCFOR(fun_182);
LOCFOR(fun_x_1695_183);
LOCFOR(fun_funinit_to_c_184);
LOCFOR(fun_to_c_185);
LOCFOR(fun_x_1700_186);
LOCFOR(fun_out_list_builder_187);
LOCFOR(fun_188);
LOCFOR(fun_gen_fab_list_189);
LOCFOR(fun_generate_function_specs_190);
LOCFOR(fun_191);
LOCFOR(fun_to_c_192);
LOCFOR(fun_to_c_193);
LOCFOR(fun_x_1704_194);
LOCFOR(fun_generate_function_forwards_195);
LOCFOR(fun_x_1709_196);
LOCFOR(fun_197);
LOCFOR(fun_198);
LOCFOR(fun_generate_function_forward_199);
LOCFOR(fun_generate_function_binding_200);
LOCFOR(fun_generate_function_forward_201);
LOCFOR(fun_202);
LOCFOR(fun_generate_function_bodies_203);
LOCFOR(fun_204);
LOCFOR(fun_generate_functions_205);
LOCFOR(fun_generate_closure_structure_206);
LOCFOR(fun_generate_function_body_reference_207);
LOCFOR(fun_x_1719_208);
LOCFOR(fun_209);
LOCFOR(fun_210);
LOCFOR(fun_generate_shadow_args_211);
LOCFOR(fun_generate_return_212);
LOCFOR(fun_generate_return_213);
LOCFOR(fun_primitive_inlinableQ_214);
LOCFOR(fun_x_1727_215);
LOCFOR(fun_216);
LOCFOR(fun_217);
LOCFOR(fun_generate_function_code_218);
LOCFOR(fun_dispatcherQ_219);
LOCFOR(fun_x_1731_220);
LOCFOR(fun_221);
LOCFOR(fun_222);
LOCFOR(fun_223);
LOCFOR(fun_generate_function_code_224);
LOCFOR(fun_x_1734_225);
LOCFOR(fun_generate_local_temporaries_226);
LOCFOR(fun_next_reg_227);
LOCFOR(fun_next_line_228);
LOCFOR(fun_generate_registers_229);
LOCFOR(fun_module_info_name_230);
LOCFOR(fun_maybe_declare_231);
LOCFOR(fun_232);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_1737_234);
LOCFOR(fun_235);
LOCFOR(fun_236);
LOCFOR(fun_x_1746_237);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_239);
LOCFOR(fun_module_init_decl_240);
LOCFOR(fun_x_1752_241);
LOCFOR(fun_x_1757_242);
LOCFOR(fun_generate_module_init_243);
LOCFOR(fun_generate_main_244);
extern P YevalSg2cY___main_0___ ();
extern P YevalSg2cY___main_1___ ();
extern P YevalSg2cY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_appname_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_8) {
  P loader_;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSg2cYLg2c_moduleG));
}

FUNCODEDEF(fun_9) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_10) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_1537F3257;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1537F3257 = DYNREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1537F3257);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF3258;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3258 = T1;
  if (tmpF3258 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P name_;
  P tmpF3262;
  P src_fileF3261;
  P build_fileF3260;
  P fileF3259;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3259 = T1;
  T3 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF3259);
  build_fileF3260 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF3259);
  src_fileF3261 = T5;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF3260);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF3262 = T8;
  if (tmpF3262 != YPfalse) {
    T10 = tmpF3262;
  } else {
    T12 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3261);
    T13 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF3260);
    T11 = CALL2(1,VARREF(YgooSmagYGE),T12,T13);
    T10 = T11;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF3261,build_fileF3260);
    T6 = T14;
  } else {
    T6 = YPfalse;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_14) {
  P loader_,name_;
  P out_portF3272;
  P prgF3271;
  P astF3270;
  P out_fileF3269;
  P appnameF3268;
  P src_fileF3267;
  P fileF3266;
  P envF3265;
  P keepmodQF3264;
  P modF3263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF3263 = T1;
  keepmodQF3264 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF3263);
  envF3265 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3266 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF3266);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF3267 = T8;
  T11 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3268 = T11;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3266);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3268,T14);
  out_fileF3269 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF3267,modF3263);
  T15 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3267);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T15,modF3263);
  T16 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T18 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF3267,envF3265);
  astF3270 = T18;
  T20 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF3270,envF3265);
  prgF3271 = T20;
  T21 = (P)YPsu(LITREF(lit_23));
  (P)YevalSg2cYPprint_cpu_usage(T21);
  T22 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF3269);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T22);
  out_portF3272 = YPfalse;
  out_portF3272 = BOXFAB(out_portF3272);
  T25 = FUNFAB(fun_11,5,out_portF3272,out_fileF3269,prgF3271,astF3270,modF3263);
  T26 = FUNFAB(fun_12,1,out_portF3272);
  T24 = with_cleanup(T25,T26);
  T27 = FUNFAB(fun_13,1,appnameF3268);
  T28 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),modF3263);
  CALL2(1,VARREF(YgooSmacrosYdo),T27,T28);
  T29 = (P)YPsu(LITREF(lit_26));
  (P)YevalSg2cYPprint_cpu_usage(T29);
  T19 = modF3263;
  T17 = T19;
  T12 = T17;
  T10 = T12;
  T7 = T10;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_src_file),mod_);
  T2 = CALL1(1,VARREF(YgooSsystemYfile_mtime),T3);
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_16) {
  P mod_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,T6);
    T3 = BOXVAL(FREEREF(0)) = T4;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P name_;
  P x_1538F3273;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  x_1538F3273 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1538F3273,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1538F3273,LITREF(lit_33));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF3274;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF3274 = Ynil;
  changedF3274 = BOXFAB(changedF3274);
  T2 = FUNFAB(fun_16,1,changedF3274);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_17;
  T4 = BOXVAL(changedF3274);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF3274);
  T5 = CALL2(1,VARREF(YevalSastYremove_modules_by_nameX),loader_,T6);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P modF3275;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF3275 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_38));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF3275);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),loader_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSmathYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_41),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_42));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_23) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P x_1540F3276;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_1540F3276 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_23,1,x_1540F3276);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdynamic_linkingQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P x_1539F3277;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1539F3277 = DYNREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_25,1,x_1539F3277);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_27) {
  P tmpF3278;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3278 = T1;
  if (tmpF3278 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_ast_28) {
  P ast_,env_;
  P out_portF3284;
  P prgF3283;
  P out_fileF3282;
  P fileF3281;
  P nameF3280;
  P modF3279;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF3279 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = DYNSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_45),T4,T5);
  nameF3280 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF3280);
  fileF3281 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3281);
  out_fileF3282 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF3283 = T12;
  out_portF3284 = YPfalse;
  out_portF3284 = BOXFAB(out_portF3284);
  T15 = FUNFAB(fun_26,5,out_portF3284,out_fileF3282,prgF3283,ast_,modF3279);
  T16 = FUNFAB(fun_27,1,out_portF3284);
  T14 = with_cleanup(T15,T16);
  T11 = fileF3281;
  T9 = T11;
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_exp_29) {
  P exp_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,YPfalse);
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_load_30) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
  T0 = (P)YPsu(T1);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_50));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_51));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF3285;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF3285 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3285);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF3286;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF3286 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3286);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_top_33) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_clean_34) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_58),LITREF(lit_42));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P astF3288;
  P sexprF3287;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF3287 = T1;
  T2 = (P)YPsu(LITREF(lit_61));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF3287,ct_env_,YPfalse);
  astF3288 = T4;
  T5 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T3 = astF3288;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF3293;
  P prgF3292;
  P lftF3291;
  P anaF3290;
  P boxF3289;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),e_);
  boxF3289 = T1;
  T2 = (P)YPsu(LITREF(lit_65));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_ast),boxF3289);
  anaF3290 = T4;
  T5 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),anaF3290);
  lftF3291 = T7;
  T8 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T8);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF3291);
  prgF3292 = T10;
  T11 = (P)YPsu(LITREF(lit_68));
  (P)YevalSg2cYPprint_cpu_usage(T11);
  T13 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF3292,env_,YPint((P)64));
  fltF3293 = T13;
  T14 = (P)YPsu(LITREF(lit_69));
  (P)YevalSg2cYPprint_cpu_usage(T14);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF3293);
  T15 = (P)YPsu(LITREF(lit_70));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF3293,YPfalse);
  T16 = (P)YPsu(LITREF(lit_71));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T12 = prgF3292;
  T9 = T12;
  T6 = T9;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_module_37) {
  P code_out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YevalSg2cYgenerate_header),code_out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),code_out_,mod_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),code_out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),code_out_,T2);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),code_out_,T3);
  T4 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),code_out_,mod_);
  } else {
  }
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),code_out_,mod_,T6);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),code_out_);
UNLINK_STACK();
  QRET(prg_);
}

FUNCODEDEF(fun_38) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,FREEREF(2));
  T2 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(3));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_39) {
  P tmpF3294;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3294 = T1;
  if (tmpF3294 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_application_40) {
  P loader_,mod_;
  P out_portF3298;
  P out_nameF3297;
  P init_nameF3296;
  P appnameF3295;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3295 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3295,LITREF(lit_76));
  init_nameF3296 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF3296);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3295,T6);
  out_nameF3297 = T5;
  out_portF3298 = YPfalse;
  out_portF3298 = BOXFAB(out_portF3298);
  T9 = FUNFAB(fun_38,4,out_portF3298,out_nameF3297,appnameF3295,mod_);
  T10 = FUNFAB(fun_39,1,out_portF3298);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1544_41) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_81),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P return_;
  P x_1543F3313;
  P x_1543F3312;
  P x_1543F3311;
  P x_1543F3310;
  P x_1543F3309;
  P x_1543F3308;
  P x_1543F3307;
  P x_1543F3306;
  P x_1543F3305;
  P x_1543F3304;
  P bodyF3303;
  P loaderF3302;
  P modF3301;
  P x_1543F3300;
  P x_1544F3299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1544_41,2);
  x_1544F3299 = T1;
  FUNINIT(x_1544F3299, 2,FREEREF(0),return_);
  x_1543F3300 = FREEREF(0);
  modF3301 = YPfalse;
  modF3301 = BOXFAB(modF3301);
  loaderF3302 = YPfalse;
  loaderF3302 = BOXFAB(loaderF3302);
  bodyF3303 = YPfalse;
  bodyF3303 = BOXFAB(bodyF3303);
  T9 = CALL2(1,VARREF(YisaQ),x_1543F3300,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1543F3300,LITREF(lit_81),x_1544F3299);
    x_1543F3304 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1543F3304,x_1544F3299);
    x_1543F3305 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1543F3305,x_1544F3299);
    BOXVAL(modF3301) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1543F3305);
    x_1543F3306 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1543F3306,x_1544F3299);
    BOXVAL(loaderF3302) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1543F3306);
    x_1543F3307 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1543F3307,x_1544F3299);
    x_1543F3308 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3308,x_1544F3299);
    T23 = CALL1(1,VARREF(Ytail),x_1543F3307);
    x_1543F3309 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3309,x_1544F3299);
    T20 = T24;
    T17 = T20;
    T14 = T17;
    T25 = CALL1(1,VARREF(Ytail),x_1543F3304);
    x_1543F3310 = T25;
    BOXVAL(bodyF3303) = x_1543F3310;
    x_1543F3311 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1543F3311,x_1544F3299);
    x_1543F3312 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3312,x_1544F3299);
    T30 = CALL1(1,VARREF(Ytail),x_1543F3311);
    x_1543F3313 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3313,x_1544F3299);
    T27 = T31;
    T26 = T27;
    T12 = T26;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1544F3299,LITREF(lit_82),x_1543F3300);
  }
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T41 = BOXVAL(modF3301);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,LITREF(lit_85));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = BOXVAL(bodyF3303);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T42,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T44 = BOXVAL(loaderF3302);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T43,LITREF(lit_85));
  T7 = T33;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P i_;
  P x_1548F3314;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1548F3314 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1548F3314,LITREF(lit_97));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1548F3314,i_);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1548F3314,LITREF(lit_98));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P mod_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_44,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_obj_46) {
  P name_;
  P x_1551F3315;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1551F3315 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1551F3315,LITREF(lit_104));
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1551F3315,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1551F3315,LITREF(lit_105));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P name_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T4 = CALL1(1,VARREF(YgooStypesYlen),name_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)2));
  T2 = CALL3(1,VARREF(YgooScolsSseqYsub),name_,YPint((P)0),T3);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T2);
  T0 = CALL1(0,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P n_;
  P T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P mod_;
  P put_objF3316;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNSHELL(1,fun_put_obj_46,1);
  put_objF3316 = T1;
  FUNINIT(put_objF3316, 1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL1(0,put_objF3316,T2);
  T4 = FUNFAB(fun_47,1,put_objF3316);
  T6 = fun_48;
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,T7);
  T3 = CALL2(1,VARREF(YgooSmacrosYdo),T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P l_;
  P x_1555F3317;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1555F3317 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1555F3317,LITREF(lit_115));
  T2 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1555F3317,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P mod_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_50,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P x_1556F3326;
  P x_1554F3325;
  P x_1553F3324;
  P x_1552F3323;
  P x_1550F3322;
  P x_1549F3321;
  P x_1547F3320;
  P x_1546F3319;
  P x_1545F3318;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_1545F3318 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1545F3318,LITREF(lit_90));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1545F3318,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1545F3318,LITREF(lit_91));
  T3 = BOXVAL(FREEREF(0));
  x_1546F3319 = T3;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3319,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3319,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1546F3319,LITREF(lit_92));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3319,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1546F3319,LITREF(lit_93));
  T5 = BOXVAL(FREEREF(0));
  x_1547F3320 = T5;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1547F3320,LITREF(lit_94));
  T7 = FUNFAB(fun_45,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T7,FREEREF(3));
  T8 = BOXVAL(FREEREF(0));
  x_1549F3321 = T8;
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1549F3321,LITREF(lit_99));
  T10 = BOXVAL(FREEREF(0));
  x_1550F3322 = T10;
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1550F3322,LITREF(lit_100));
  T12 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T12,FREEREF(3));
  T13 = BOXVAL(FREEREF(0));
  x_1552F3323 = T13;
  CALL2(1,VARREF(YgooSioSportYputs),x_1552F3323,LITREF(lit_108));
  T14 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1552F3323,T14);
  T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1552F3323,LITREF(lit_109));
  T16 = BOXVAL(FREEREF(0));
  x_1553F3324 = T16;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1553F3324,FREEREF(5));
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1553F3324,LITREF(lit_110));
  T18 = BOXVAL(FREEREF(0));
  x_1554F3325 = T18;
  CALL2(1,VARREF(YgooSioSportYputs),x_1554F3325,LITREF(lit_111));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1554F3325,FREEREF(5));
  T19 = CALL2(1,VARREF(YgooSioSportYputs),x_1554F3325,LITREF(lit_112));
  T20 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXVAL(FREEREF(0));
  x_1556F3326 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_1556F3326,LITREF(lit_116));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1556F3326,FREEREF(5));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),x_1556F3326,LITREF(lit_117));
  T21 = T23;
UNLINK_STACK();
  QRET(T21);
}

FUNCODEDEF(fun_53) {
  P tmpF3327;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3327 = T1;
  if (tmpF3327 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_makefile_54) {
  P loader_;
  P code_outF3333;
  P out_nameF3332;
  P sepF3331;
  P exe_nameF3330;
  P init_nameF3329;
  P appnameF3328;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3328 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3328,LITREF(lit_88));
  init_nameF3329 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF3328);
  exe_nameF3330 = T5;
  sepF3331 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3328,LITREF(lit_89));
  out_nameF3332 = T8;
  code_outF3333 = YPfalse;
  code_outF3333 = BOXFAB(code_outF3333);
  T12 = FUNFAB(fun_52,6,code_outF3333,out_nameF3332,sepF3331,loader_,init_nameF3329,exe_nameF3330);
  T13 = FUNFAB(fun_53,1,code_outF3333);
  T11 = with_cleanup(T12,T13);
  T9 = T11;
  T7 = T9;
  T6 = T7;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pp_55) {
  P e_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),code_out_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_header_56) {
  P code_out_,modname_;
  P x_1565F3343;
  P x_1564F3342;
  P x_1563F3341;
  P x_1562F3340;
  P x_1561F3339;
  P x_1560F3338;
  P x_1559F3337;
  P x_1558F3336;
  P x_1557F3335;
  P modvarF3334;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(modname_, 1);
loop:
  modvarF3334 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_1557F3335 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1557F3335,LITREF(lit_123));
  x_1558F3336 = code_out_;
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1558F3336,LITREF(lit_124));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_1559F3337 = code_out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1559F3337,LITREF(lit_125));
    T3 = T4;
  } else {
  }
  x_1560F3338 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1560F3338,LITREF(lit_126));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1560F3338,modvarF3334);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1560F3338,LITREF(lit_127));
  x_1561F3339 = code_out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1561F3339,LITREF(lit_128));
  x_1562F3340 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1562F3340,LITREF(lit_129));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3340,modvarF3334);
  CALL2(1,VARREF(YgooSioSportYputs),x_1562F3340,LITREF(lit_130));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1562F3340,modvarF3334);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1562F3340,LITREF(lit_131));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,modname_);
  x_1563F3341 = code_out_;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1563F3341,LITREF(lit_132));
  x_1564F3342 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1564F3342,LITREF(lit_133));
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_134));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3342,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_1564F3342,LITREF(lit_135));
  T10 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_136));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3342,T10);
  CALL2(1,VARREF(YgooSioSportYputs),x_1564F3342,LITREF(lit_137));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3342,modvarF3334);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1564F3342,LITREF(lit_138));
  x_1565F3343 = code_out_;
  T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1565F3343,LITREF(lit_139));
  T12 = T13;
  T0 = T12;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_trailer_57) {
  P code_out_;
  P x_1566F3344;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  x_1566F3344 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1566F3344,LITREF(lit_142));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P binding_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YevalSg2cYgenerate_global_binding),FREEREF(0),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_global_environment_59) {
  P code_out_,mod_;
  P x_1567F3345;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  x_1567F3345 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1567F3345,LITREF(lit_145));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1567F3345,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1567F3345,LITREF(lit_146));
  T3 = FUNFAB(fun_58,2,code_out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_60) {
  P code_out_,importedQ_,gb_;
  P x_1570F3352;
  P x_1569F3351;
  P x_1568F3350;
  P nameF3349;
  P tmpF3348;
  P tmpF3347;
  P kindF3346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF3346 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3346,LITREF(lit_150));
  tmpF3347 = T4;
  if (tmpF3347 != YPfalse) {
    T5 = tmpF3347;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3346,LITREF(lit_151));
    tmpF3348 = T7;
    if (tmpF3348 != YPfalse) {
      T8 = tmpF3348;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3346,LITREF(lit_152));
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF3349 = T11;
    x_1568F3350 = kindF3346;
    x_1569F3351 = VARREF(YgooSmacrosYEE);
    T15 = CALL2(1,x_1569F3351,x_1568F3350,LITREF(lit_151));
    if (T15 != YPfalse) {
      T14 = LITREF(lit_153);
    } else {
      T17 = CALL2(1,x_1569F3351,x_1568F3350,LITREF(lit_152));
      if (T17 != YPfalse) {
        T16 = LITREF(lit_154);
      } else {
        T16 = LITREF(lit_155);
      }
      T14 = T16;
    }
    T13 = T14;
    T12 = T13;
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T12);
    x_1570F3352 = code_out_;
    if (importedQ_ != YPfalse) {
      T19 = LITREF(lit_156);
    } else {
      T19 = LITREF(lit_157);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3352,T19);
    CALL2(1,VARREF(YgooSioSportYputs),x_1570F3352,LITREF(lit_158));
    T20 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3352,T20);
    CALL2(1,VARREF(YgooSioSportYputs),x_1570F3352,LITREF(lit_159));
    T22 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T22);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3352,T21);
    CALL2(1,VARREF(YgooSioSportYputs),x_1570F3352,LITREF(lit_160));
    T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3349);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1570F3352,T23);
    T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1570F3352,LITREF(lit_161));
    T18 = T24;
    T10 = T18;
    T2 = T10;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_61) {
  P i_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),FREEREF(1),i_);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,FREEREF(2),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    i_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P loopF3355;
  P stringF3354;
  P buffer_sizeF3353;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF3353 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF3353);
  check_type(T3,VARREF(YLstrG));
  stringF3354 = T3;
  T4 = FUNSHELL(1,fun_loop_61,4);
  loopF3355 = T4;
  FUNINIT(loopF3355, 4,buffer_sizeF3353,buffer_,stringF3354,loopF3355);
  T5 = CALL1(0,loopF3355,YPint((P)0));
  T2 = stringF3354;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_63) {
  P i_;
  P encF3357;
  P cF3356;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),i_);
    cF3356 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3356);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T7);
    encF3357 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF3357,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF3356);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF3357);
    }
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T12;
    i_ = a1;
    goto loop;
    T5 = T11;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_64) {
  P str_;
  P loopF3359;
  P lenF3358;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF3358 = T1;
  T3 = FUNSHELL(1,fun_loop_63,3);
  loopF3359 = T3;
  FUNINIT(loopF3359, 3,lenF3358,str_,loopF3359);
  T4 = CALL1(0,loopF3359,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_65) {
  P sym_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(sym_, 0);
loop:
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_integer_66) {
  P number_,index_;
  P resultF3365;
  P resultF3364;
  P digitF3363;
  P remainderF3362;
  P quotientF3361;
  P tup32F3360;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup32F3360 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F3360,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF3361 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F3360,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF3362 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF3362);
  check_type(T7,VARREF(YLchrG));
  digitF3363 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF3361,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF3364 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3363,resultF3364,YPint((P)0));
    T10 = resultF3364;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF3361,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF3365 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF3365);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3363,resultF3365,T15);
    T12 = resultF3365;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_67) {
  P number_;
  P process_integerF3366;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T2 = FUNSHELL(1,fun_process_integer_66,1);
  process_integerF3366 = T2;
  FUNINIT(process_integerF3366, 1,process_integerF3366);
  T3 = CALL2(1,process_integerF3366,number_,YPint((P)1));
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1572_68) {
  P x_1571_;
  P iF3367;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1571_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1571_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1571_);
    iF3367 = T4;
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_integer),iF3367);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T6,VARREF(YevalSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3367);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1571_);
    a1 = T8;
    x_1571_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1574_69) {
  P x_1573_;
  P mangleF3368;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1573_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1573_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1573_);
    mangleF3368 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF3368,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF3368,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1573_);
    a1 = T9;
    x_1573_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1576_70) {
  P x_1575_;
  P iF3369;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1575_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1575_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1575_);
    iF3369 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3369);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3369);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1575_);
    a1 = T7;
    x_1575_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1578_71) {
  P x_1577_;
  P iF3370;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1577_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1577_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1577_);
    iF3370 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3370);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3370);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1577_);
    a1 = T7;
    x_1577_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangler_reset) {
  P buffer_;
  P T0;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1580_73) {
  P x_1579_;
  P cF3371;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1579_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1579_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1579_);
    cF3371 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF3371);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1579_);
    a1 = T9;
    x_1579_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_name_into) {
  P buf_,name_;
  P x_1580F3372;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1580_73,2);
  x_1580F3372 = T0;
  FUNINIT(x_1580F3372, 2,buf_,x_1580F3372);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T1 = CALL1(0,x_1580F3372,T2);
UNLINK_STACK();
  QRET(buf_);
}

FUNCODEDEF(fun_mangle_raw_name_75) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_raw_name_76) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_77) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_78) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1584_79) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_229),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P return_;
  P x_1583F3381;
  P x_1583F3380;
  P x_1583F3379;
  P x_1583F3378;
  P x_1583F3377;
  P valueF3376;
  P placeF3375;
  P x_1583F3374;
  P x_1584F3373;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1584_79,2);
  x_1584F3373 = T1;
  FUNINIT(x_1584F3373, 2,FREEREF(0),return_);
  x_1583F3374 = FREEREF(0);
  placeF3375 = YPfalse;
  placeF3375 = BOXFAB(placeF3375);
  valueF3376 = YPfalse;
  valueF3376 = BOXFAB(valueF3376);
  T7 = CALL2(1,VARREF(YisaQ),x_1583F3374,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1583F3374,LITREF(lit_229),x_1584F3373);
    x_1583F3377 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1583F3377,x_1584F3373);
    BOXVAL(placeF3375) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1583F3377);
    x_1583F3378 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1583F3378,x_1584F3373);
    BOXVAL(valueF3376) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1583F3378);
    x_1583F3379 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1583F3379,x_1584F3373);
    x_1583F3380 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1583F3380,x_1584F3373);
    T19 = CALL1(1,VARREF(Ytail),x_1583F3379);
    x_1583F3381 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1583F3381,x_1584F3373);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1584F3373,LITREF(lit_82),x_1583F3374);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T25 = BOXVAL(placeF3375);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T30 = BOXVAL(placeF3375);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T32 = BOXVAL(valueF3376);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T31,LITREF(lit_85));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T26,LITREF(lit_85));
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_80,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_82) {
  P i_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),FREEREF(2),i_);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(1),T2);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    i_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYbuf_cat2X) {
  P buf_,name_;
  P loopF3383;
  P lenF3382;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF3382 = T1;
  T3 = FUNSHELL(1,fun_loop_82,4);
  loopF3383 = T3;
  FUNINIT(loopF3383, 4,lenF3382,buf_,name_,loopF3383);
  T4 = CALL1(0,loopF3383,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_84) {
  P buf_,mod_;
  P nameF3385;
  P tmpF3384;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),mod_);
  tmpF3384 = T2;
  if (tmpF3384 != YPfalse) {
    T3 = tmpF3384;
  } else {
    T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T9 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T9);
    T6 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T7,T8);
    T5 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T6);
    T4 = CALL2(1,VARREF(YevalSastYmodule_mangled_name_setter),T5,mod_);
    T3 = T4;
  }
  T1 = T3;
  nameF3385 = T1;
  T10 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF3385);
  T0 = T10;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_85) {
  P mod_,name_;
  P tmpF3386;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF3386 = T2;
  if (tmpF3386 != YPfalse) {
    T3 = tmpF3386;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,VARREF(YevalSastYDgoo_boot_module_name));
    T3 = T4;
  }
  T1 = T3;
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T6 = CALL2(1,VARREF(YevalSg2cYmangle_module_into),VARREF(YevalSg2cYTmangle_bufferT),mod_);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T7 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T7);
}

FUNCODEDEF(fun_mangle_global_name_86) {
  P mod_,name_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),mod_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_boot_name) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSastYDgoo_boot_module_name),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_quotation_name) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_244));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_89) {
  P binding_;
  P tmpF3387;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3387 = T1;
  if (tmpF3387 != YPfalse) {
    T2 = tmpF3387;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_247));
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T8);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(YevalSastYbinding_module),binding_);
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T9 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T10,T11);
      T4 = T9;
    }
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_local_marked_name) {
  P name_,marker_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_91) {
  P binding_;
  P tmpF3388;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3388 = T1;
  if (tmpF3388 != YPfalse) {
    T2 = tmpF3388;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T5);
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_binding_92) {
  P binding_;
  P tmpF3389;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3389 = T1;
  if (tmpF3389 != YPfalse) {
    T2 = tmpF3389;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T7 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T5,T7);
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1588_93) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_256),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P out_varF3405;
  P x_1587F3404;
  P x_1587F3403;
  P x_1587F3402;
  P x_1587F3401;
  P x_1587F3400;
  P x_1587F3399;
  P x_1587F3398;
  P x_1587F3397;
  P x_1587F3396;
  P x_1587F3395;
  P bodyF3394;
  P clausesF3393;
  P out_valF3392;
  P x_1587F3391;
  P x_1588F3390;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1588_93,2);
  x_1588F3390 = T1;
  FUNINIT(x_1588F3390, 2,FREEREF(0),return_);
  x_1587F3391 = FREEREF(0);
  out_valF3392 = YPfalse;
  out_valF3392 = BOXFAB(out_valF3392);
  clausesF3393 = YPfalse;
  clausesF3393 = BOXFAB(clausesF3393);
  bodyF3394 = YPfalse;
  bodyF3394 = BOXFAB(bodyF3394);
  T9 = CALL2(1,VARREF(YisaQ),x_1587F3391,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1587F3391,LITREF(lit_256),x_1588F3390);
    x_1587F3395 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1587F3395,x_1588F3390);
    BOXVAL(out_valF3392) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1587F3395);
    x_1587F3396 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1587F3396,x_1588F3390);
    x_1587F3397 = T16;
    BOXVAL(clausesF3393) = x_1587F3397;
    x_1587F3398 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1587F3398,x_1588F3390);
    x_1587F3399 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1587F3399,x_1588F3390);
    T21 = CALL1(1,VARREF(Ytail),x_1587F3398);
    x_1587F3400 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1587F3400,x_1588F3390);
    T18 = T22;
    T17 = T18;
    T23 = CALL1(1,VARREF(Ytail),x_1587F3396);
    x_1587F3401 = T23;
    BOXVAL(bodyF3394) = x_1587F3401;
    x_1587F3402 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1587F3402,x_1588F3390);
    x_1587F3403 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1587F3403,x_1588F3390);
    T28 = CALL1(1,VARREF(Ytail),x_1587F3402);
    x_1587F3404 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1587F3404,x_1588F3390);
    T25 = T29;
    T24 = T25;
    T15 = T24;
    T12 = T15;
    T10 = T12;
  } else {
    T30 = CALL2(1,x_1588F3390,LITREF(lit_82),x_1587F3391);
  }
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3405 = T32;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_257));
  T39 = CALL1(1,VARREF(Ylst),out_varF3405);
  T41 = BOXVAL(out_valF3392);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_85));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_258));
  T47 = BOXVAL(clausesF3393);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_259));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_260));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T57 = CALL1(1,VARREF(Ylst),YPtrue);
  T55 = CALL3(1,VARREF(YgooSmacrosYcat),T56,T57,LITREF(lit_85));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T61 = CALL1(1,VARREF(Ylst),YPfalse);
  T59 = CALL3(1,VARREF(YgooSmacrosYcat),T60,T61,LITREF(lit_85));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T58,LITREF(lit_85));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_85));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T48,LITREF(lit_85));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_259));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T69 = CALL1(1,VARREF(Ylst),out_varF3405);
  T70 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T69,T70,LITREF(lit_85));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T63 = CALL4(1,VARREF(YgooSmacrosYcat),T64,T65,T66,LITREF(lit_85));
  T62 = CALL1(1,VARREF(Ylst),T63);
  T71 = BOXVAL(bodyF3394);
  T43 = CALL5(1,VARREF(YgooSmacrosYcat),T44,T45,T62,T71,LITREF(lit_85));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T42,LITREF(lit_85));
  T31 = T33;
  T7 = T31;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1592_96) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_268),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P out_varF3419;
  P x_1591F3418;
  P x_1591F3417;
  P x_1591F3416;
  P x_1591F3415;
  P x_1591F3414;
  P x_1591F3413;
  P x_1591F3412;
  P x_1591F3411;
  P x_1591F3410;
  P bodyF3409;
  P out_valF3408;
  P x_1591F3407;
  P x_1592F3406;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1592_96,2);
  x_1592F3406 = T1;
  FUNINIT(x_1592F3406, 2,FREEREF(0),return_);
  x_1591F3407 = FREEREF(0);
  out_valF3408 = YPfalse;
  out_valF3408 = BOXFAB(out_valF3408);
  bodyF3409 = YPfalse;
  bodyF3409 = BOXFAB(bodyF3409);
  T7 = CALL2(1,VARREF(YisaQ),x_1591F3407,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1591F3407,LITREF(lit_268),x_1592F3406);
    x_1591F3410 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1591F3410,x_1592F3406);
    x_1591F3411 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1591F3411,x_1592F3406);
    BOXVAL(out_valF3408) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1591F3411);
    x_1591F3412 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1591F3412,x_1592F3406);
    x_1591F3413 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1591F3413,x_1592F3406);
    T18 = CALL1(1,VARREF(Ytail),x_1591F3412);
    x_1591F3414 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1591F3414,x_1592F3406);
    T15 = T19;
    T12 = T15;
    T20 = CALL1(1,VARREF(Ytail),x_1591F3410);
    x_1591F3415 = T20;
    BOXVAL(bodyF3409) = x_1591F3415;
    x_1591F3416 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1591F3416,x_1592F3406);
    x_1591F3417 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1591F3417,x_1592F3406);
    T25 = CALL1(1,VARREF(Ytail),x_1591F3416);
    x_1591F3418 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1591F3418,x_1592F3406);
    T22 = T26;
    T21 = T22;
    T10 = T21;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1592F3406,LITREF(lit_82),x_1591F3407);
  }
  T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3419 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_257));
  T36 = CALL1(1,VARREF(Ylst),out_varF3419);
  T38 = BOXVAL(out_valF3408);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_85));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_85));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T42 = CALL1(1,VARREF(Ylst),out_varF3419);
  T43 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,LITREF(lit_85));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = BOXVAL(bodyF3409);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T48 = CALL1(1,VARREF(Ylst),out_varF3419);
  T49 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T49,LITREF(lit_85));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),6,T31,T32,T39,T44,T45,LITREF(lit_85));
  T28 = T30;
  T5 = T28;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1596_99) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_273),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_100) {
  P forms_,body_,firstQ_;
  P tmpF3420;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(forms_, 0);
  ARG(body_, 1);
  ARG(firstQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),body_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),body_);
    tmpF3420 = firstQ_;
    if (tmpF3420 != YPfalse) {
      T8 = tmpF3420;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
      T11 = CALL1(1,VARREF(Ylst),FREEREF(0));
      T12 = CALL1(1,VARREF(Ylst),YPchr((P)44));
      T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T12,LITREF(lit_85));
      T8 = T9;
    }
    T7 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,forms_);
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,T6);
    T13 = CALL1(1,VARREF(Ytail),body_);
    a1 = T4;
    a2 = T13;
    a3 = YPfalse;
    forms_ = a1;
    body_ = a2;
    firstQ_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_101) {
  P return_;
  P loopF3435;
  P out_varF3434;
  P x_1595F3433;
  P x_1595F3432;
  P x_1595F3431;
  P x_1595F3430;
  P x_1595F3429;
  P x_1595F3428;
  P x_1595F3427;
  P x_1595F3426;
  P x_1595F3425;
  P bodyF3424;
  P out_valF3423;
  P x_1595F3422;
  P x_1596F3421;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1596_99,2);
  x_1596F3421 = T1;
  FUNINIT(x_1596F3421, 2,FREEREF(0),return_);
  x_1595F3422 = FREEREF(0);
  out_valF3423 = YPfalse;
  out_valF3423 = BOXFAB(out_valF3423);
  bodyF3424 = YPfalse;
  bodyF3424 = BOXFAB(bodyF3424);
  T7 = CALL2(1,VARREF(YisaQ),x_1595F3422,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1595F3422,LITREF(lit_273),x_1596F3421);
    x_1595F3425 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1595F3425,x_1596F3421);
    x_1595F3426 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1595F3426,x_1596F3421);
    BOXVAL(out_valF3423) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1595F3426);
    x_1595F3427 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1595F3427,x_1596F3421);
    x_1595F3428 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1595F3428,x_1596F3421);
    T18 = CALL1(1,VARREF(Ytail),x_1595F3427);
    x_1595F3429 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1595F3429,x_1596F3421);
    T15 = T19;
    T12 = T15;
    T20 = CALL1(1,VARREF(Ytail),x_1595F3425);
    x_1595F3430 = T20;
    BOXVAL(bodyF3424) = x_1595F3430;
    x_1595F3431 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1595F3431,x_1596F3421);
    x_1595F3432 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1595F3432,x_1596F3421);
    T25 = CALL1(1,VARREF(Ytail),x_1595F3431);
    x_1595F3433 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1595F3433,x_1596F3421);
    T22 = T26;
    T21 = T22;
    T10 = T21;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1596F3421,LITREF(lit_82),x_1595F3422);
  }
  T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3434 = T29;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_257));
  T36 = CALL1(1,VARREF(Ylst),out_varF3434);
  T38 = BOXVAL(out_valF3423);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_85));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_85));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T42 = CALL1(1,VARREF(Ylst),out_varF3434);
  T43 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,LITREF(lit_85));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = FUNSHELL(1,fun_loop_100,2);
  loopF3435 = T45;
  FUNINIT(loopF3435, 2,out_varF3434,loopF3435);
  T47 = BOXVAL(bodyF3424);
  T46 = CALL3(0,loopF3435,Ynil,T47,YPtrue);
  T44 = T46;
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T51 = CALL1(1,VARREF(Ylst),out_varF3434);
  T52 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T52,LITREF(lit_85));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),6,T31,T32,T39,T44,T48,LITREF(lit_85));
  T28 = T30;
  T5 = T28;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_101,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_result_103) {
  P e_,d_,code_out_;
  P tmpF3439;
  P x_1597F3438;
  P tmpF3437;
  P regF3436;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3436 = T1;
  tmpF3437 = regF3436;
  if (tmpF3437 != YPfalse) {
    x_1597F3438 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1597F3438,LITREF(lit_277));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3436);
    CALL2(1,VARREF(YgooSioSportYputs),x_1597F3438,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1597F3438,LITREF(lit_278));
    T5 = T7;
    tmpF3439 = T5;
    if (tmpF3439 != YPfalse) {
      T8 = YPtrue;
    } else {
      T8 = YPfalse;
    }
    T4 = T8;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1599_104) {
  P x_1598_;
  P iF3440;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1598_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1598_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1598_);
    iF3440 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_283));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1598_);
    a1 = T6;
    x_1598_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_depth_105) {
  P d_,code_out_;
  P x_1599F3441;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1599_104,2);
  x_1599F3441 = T1;
  FUNINIT(x_1599F3441, 2,code_out_,x_1599F3441);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1599F3441,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1603_106) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_288),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P return_;
  P x_1602F3456;
  P x_1602F3455;
  P x_1602F3454;
  P x_1602F3453;
  P x_1602F3452;
  P x_1602F3451;
  P x_1602F3450;
  P x_1602F3449;
  P x_1602F3448;
  P x_1602F3447;
  P bodyF3446;
  P code_outF3445;
  P dF3444;
  P x_1602F3443;
  P x_1603F3442;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1603_106,2);
  x_1603F3442 = T1;
  FUNINIT(x_1603F3442, 2,FREEREF(0),return_);
  x_1602F3443 = FREEREF(0);
  dF3444 = YPfalse;
  dF3444 = BOXFAB(dF3444);
  code_outF3445 = YPfalse;
  code_outF3445 = BOXFAB(code_outF3445);
  bodyF3446 = YPfalse;
  bodyF3446 = BOXFAB(bodyF3446);
  T9 = CALL2(1,VARREF(YisaQ),x_1602F3443,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1602F3443,LITREF(lit_288),x_1603F3442);
    x_1602F3447 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1602F3447,x_1603F3442);
    x_1602F3448 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1602F3448,x_1603F3442);
    BOXVAL(dF3444) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1602F3448);
    x_1602F3449 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1602F3449,x_1603F3442);
    BOXVAL(code_outF3445) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1602F3449);
    x_1602F3450 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1602F3450,x_1603F3442);
    x_1602F3451 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1602F3451,x_1603F3442);
    T23 = CALL1(1,VARREF(Ytail),x_1602F3450);
    x_1602F3452 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1602F3452,x_1603F3442);
    T20 = T24;
    T17 = T20;
    T14 = T17;
    T25 = CALL1(1,VARREF(Ytail),x_1602F3447);
    x_1602F3453 = T25;
    BOXVAL(bodyF3446) = x_1602F3453;
    x_1602F3454 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1602F3454,x_1603F3442);
    x_1602F3455 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1602F3455,x_1603F3442);
    T30 = CALL1(1,VARREF(Ytail),x_1602F3454);
    x_1602F3456 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1602F3456,x_1603F3442);
    T27 = T31;
    T26 = T27;
    T12 = T26;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1603F3442,LITREF(lit_82),x_1602F3443);
  }
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_289));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_279));
  T39 = BOXVAL(dF3444);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T41 = BOXVAL(code_outF3445);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,LITREF(lit_85));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = BOXVAL(bodyF3446);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_290));
  T47 = BOXVAL(code_outF3445);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_291));
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T48,LITREF(lit_85));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T33 = CALL5(1,VARREF(YgooSmacrosYcat),T34,T35,T42,T43,LITREF(lit_85));
  T7 = T33;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_107,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1607_109) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_296),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P return_;
  P x_1606F3473;
  P x_1606F3472;
  P x_1606F3471;
  P x_1606F3470;
  P x_1606F3469;
  P x_1606F3468;
  P x_1606F3467;
  P x_1606F3466;
  P x_1606F3465;
  P x_1606F3464;
  P x_1606F3463;
  P bodyF3462;
  P code_outF3461;
  P dF3460;
  P eF3459;
  P x_1606F3458;
  P x_1607F3457;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1607_109,2);
  x_1607F3457 = T1;
  FUNINIT(x_1607F3457, 2,FREEREF(0),return_);
  x_1606F3458 = FREEREF(0);
  eF3459 = YPfalse;
  eF3459 = BOXFAB(eF3459);
  dF3460 = YPfalse;
  dF3460 = BOXFAB(dF3460);
  code_outF3461 = YPfalse;
  code_outF3461 = BOXFAB(code_outF3461);
  bodyF3462 = YPfalse;
  bodyF3462 = BOXFAB(bodyF3462);
  T11 = CALL2(1,VARREF(YisaQ),x_1606F3458,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1606F3458,LITREF(lit_296),x_1607F3457);
    x_1606F3463 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1606F3463,x_1607F3457);
    x_1606F3464 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1606F3464,x_1607F3457);
    BOXVAL(eF3459) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1606F3464);
    x_1606F3465 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1606F3465,x_1607F3457);
    BOXVAL(dF3460) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1606F3465);
    x_1606F3466 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1606F3466,x_1607F3457);
    BOXVAL(code_outF3461) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1606F3466);
    x_1606F3467 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1606F3467,x_1607F3457);
    x_1606F3468 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1606F3468,x_1607F3457);
    T28 = CALL1(1,VARREF(Ytail),x_1606F3467);
    x_1606F3469 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1606F3469,x_1607F3457);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1606F3463);
    x_1606F3470 = T30;
    BOXVAL(bodyF3462) = x_1606F3470;
    x_1606F3471 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1606F3471,x_1607F3457);
    x_1606F3472 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1606F3472,x_1607F3457);
    T35 = CALL1(1,VARREF(Ytail),x_1606F3471);
    x_1606F3473 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1606F3473,x_1607F3457);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1607F3457,LITREF(lit_82),x_1606F3458);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_288));
  T43 = BOXVAL(dF3460);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(code_outF3461);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T44,LITREF(lit_85));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_275));
  T50 = BOXVAL(eF3459);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(dF3460);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T54 = BOXVAL(code_outF3461);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T47 = CALL5(1,VARREF(YgooSmacrosYcat),T48,T49,T51,T53,LITREF(lit_85));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = BOXVAL(bodyF3462);
  T38 = CALL5(1,VARREF(YgooSmacrosYcat),T39,T40,T46,T55,LITREF(lit_85));
  T9 = T38;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_110,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1611_112) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_301),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  P return_;
  P x_1610F3490;
  P x_1610F3489;
  P x_1610F3488;
  P x_1610F3487;
  P x_1610F3486;
  P x_1610F3485;
  P x_1610F3484;
  P x_1610F3483;
  P x_1610F3482;
  P x_1610F3481;
  P x_1610F3480;
  P bodyF3479;
  P code_outF3478;
  P dF3477;
  P eF3476;
  P x_1610F3475;
  P x_1611F3474;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1611_112,2);
  x_1611F3474 = T1;
  FUNINIT(x_1611F3474, 2,FREEREF(0),return_);
  x_1610F3475 = FREEREF(0);
  eF3476 = YPfalse;
  eF3476 = BOXFAB(eF3476);
  dF3477 = YPfalse;
  dF3477 = BOXFAB(dF3477);
  code_outF3478 = YPfalse;
  code_outF3478 = BOXFAB(code_outF3478);
  bodyF3479 = YPfalse;
  bodyF3479 = BOXFAB(bodyF3479);
  T11 = CALL2(1,VARREF(YisaQ),x_1610F3475,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1610F3475,LITREF(lit_301),x_1611F3474);
    x_1610F3480 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1610F3480,x_1611F3474);
    x_1610F3481 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1610F3481,x_1611F3474);
    BOXVAL(eF3476) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1610F3481);
    x_1610F3482 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1610F3482,x_1611F3474);
    BOXVAL(dF3477) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1610F3482);
    x_1610F3483 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1610F3483,x_1611F3474);
    BOXVAL(code_outF3478) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1610F3483);
    x_1610F3484 = T24;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1610F3484,x_1611F3474);
    x_1610F3485 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1610F3485,x_1611F3474);
    T28 = CALL1(1,VARREF(Ytail),x_1610F3484);
    x_1610F3486 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1610F3486,x_1611F3474);
    T25 = T29;
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T30 = CALL1(1,VARREF(Ytail),x_1610F3480);
    x_1610F3487 = T30;
    BOXVAL(bodyF3479) = x_1610F3487;
    x_1610F3488 = Ynil;
    T33 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1610F3488,x_1611F3474);
    x_1610F3489 = T33;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1610F3489,x_1611F3474);
    T35 = CALL1(1,VARREF(Ytail),x_1610F3488);
    x_1610F3490 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1610F3490,x_1611F3474);
    T32 = T36;
    T31 = T32;
    T14 = T31;
    T12 = T14;
  } else {
    T37 = CALL2(1,x_1611F3474,LITREF(lit_82),x_1610F3475);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_302));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_303));
  T44 = BOXVAL(eF3476);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_85));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_296));
  T51 = BOXVAL(eF3476);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T53 = BOXVAL(dF3477);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(code_outF3478);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T52,T54,LITREF(lit_85));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = BOXVAL(bodyF3479);
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T56,LITREF(lit_85));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T45,LITREF(lit_85));
  T9 = T38;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_113,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1613_115) {
  P x_1612_;
  P x_1614F3492;
  P qbF3491;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1612_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1612_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1612_);
    qbF3491 = T4;
    x_1614F3492 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1614F3492,LITREF(lit_309));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3491);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1614F3492,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1614F3492,LITREF(lit_310));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1612_);
    a1 = T8;
    x_1612_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_116) {
  P code_out_,qbT_;
  P x_1613F3493;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_306));
  T1 = FUNSHELL(1,fun_x_1613_115,2);
  x_1613F3493 = T1;
  FUNINIT(x_1613F3493, 2,code_out_,x_1613F3493);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_1613F3493,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1616_117) {
  P x_1615_;
  P x_1617F3495;
  P qbF3494;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1615_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1615_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1615_);
    qbF3494 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    x_1617F3495 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1617F3495,LITREF(lit_315));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3494);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1617F3495,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1617F3495,LITREF(lit_316));
    T7 = CALL1(1,VARREF(YevalSastYbinding_info),qbF3494);
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),T7);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_291));
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1615_);
    a1 = T9;
    x_1615_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_118) {
  P code_out_,qbT_;
  P x_1616F3496;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1616_117,2);
  x_1616F3496 = T1;
  FUNINIT(x_1616F3496, 2,code_out_,x_1616F3496);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1616F3496,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_119) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_318));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_120) {
  P code_out_,qb_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_321);
  } else {
    T2 = LITREF(lit_322);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_121) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_324));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_123) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = FUNFAB(fun_122,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_124) {
  P code_out_,x_;
  P x_1618F3497;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1618F3497 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_328));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1618F3497,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1618F3497,LITREF(lit_329));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1618F3497,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1618F3497,LITREF(lit_330));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_125) {
  P code_out_,x_;
  P x_1619F3498;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1619F3498 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1619F3498,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1619F3498,LITREF(lit_333));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_1619F3498,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1619F3498,LITREF(lit_334));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_126) {
  P i_;
  P x_1621F3500;
  P x_1620F3499;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmagYG),i_,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    x_1620F3499 = T4;
    x_1621F3500 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1621F3500,x_1620F3499,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1621F3500,x_1620F3499,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1621F3500,x_1620F3499,YPchr((P)120));
        if (T13 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
          T14 = CALL1(1,FREEREF(1),YPfalse);
          T12 = T14;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
          a1 = T16;
          i_ = a1;
          goto loop;
          T12 = T15;
        }
        T9 = T12;
      }
      T6 = T9;
    }
    T5 = T6;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = FREEREF(0);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P done_;
  P loopF3501;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_126,3);
  loopF3501 = T1;
  FUNINIT(loopF3501, 3,FREEREF(0),done_,loopF3501);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF3501,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_128) {
  P o_;
  P sF3502;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF3502 = T1;
  T3 = FUNFAB(fun_127,1,sF3502);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_129) {
  P code_out_,x_;
  P x_1622F3503;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1622F3503 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_340));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1622F3503,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1622F3503,LITREF(lit_341));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1622F3503,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1622F3503,LITREF(lit_342));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_130) {
  P code_out_,x_;
  P x_1623F3504;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1623F3504 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_344));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1623F3504,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1623F3504,LITREF(lit_345));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1623F3504,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1623F3504,LITREF(lit_346));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1626_131) {
  P x_1625_;
  P eF3505;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1625_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1625_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1625_);
    eF3505 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_353));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF3505);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1625_);
    a1 = T6;
    x_1625_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_132) {
  P code_out_,x_;
  P x_1626F3507;
  P x_1624F3506;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1624F3506 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1624F3506,LITREF(lit_348));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_349));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1624F3506,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1624F3506,LITREF(lit_350));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1624F3506,T2);
  T3 = FUNSHELL(1,fun_x_1626_131,2);
  x_1626F3507 = T3;
  FUNINIT(x_1626F3507, 2,code_out_,x_1626F3507);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1626F3507,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_354));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_1629_133) {
  P x_1628_;
  P eF3508;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1628_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1628_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1628_);
    eF3508 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_361));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF3508);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1628_);
    a1 = T6;
    x_1628_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_134) {
  P code_out_,x_;
  P x_1629F3510;
  P x_1627F3509;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1627F3509 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1627F3509,LITREF(lit_356));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_357));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1627F3509,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1627F3509,LITREF(lit_358));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1627F3509,T2);
  T3 = FUNSHELL(1,fun_x_1629_133,2);
  x_1629F3510 = T3;
  FUNINIT(x_1629F3510, 2,code_out_,x_1629F3510);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1629F3510,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_362));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_quotation_135) {
  P code_out_,x_;
  P x_1630F3511;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1630F3511 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_364));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1630F3511,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1630F3511,LITREF(lit_365));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1630F3511,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1630F3511,LITREF(lit_366));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYbinding_Gc) {
  P binding_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_137) {
  P v_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_138) {
  P v_,code_out_;
  P x_1633F3514;
  P x_1632F3513;
  P x_1631F3512;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  x_1631F3512 = T1;
  x_1632F3513 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1632F3513,x_1631F3512,LITREF(lit_247));
  if (T4 != YPfalse) {
    T3 = LITREF(lit_373);
  } else {
    T6 = CALL2(1,x_1632F3513,x_1631F3512,LITREF(lit_151));
    if (T6 != YPfalse) {
      T5 = LITREF(lit_374);
    } else {
      T8 = CALL2(1,x_1632F3513,x_1631F3512,LITREF(lit_152));
      if (T8 != YPfalse) {
        T7 = LITREF(lit_375);
      } else {
        T7 = LITREF(lit_376);
      }
      T5 = T7;
    }
    T3 = T5;
  }
  T2 = T3;
  T0 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_1633F3514 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1633F3514,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
  T10 = CALL2(1,VARREF(YgooSioSportYput),x_1633F3514,YPchr((P)41));
  T9 = T10;
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_to_c_139) {
  P e_,f_,d_,code_out_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotations),code_out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),e_);
  CALL4(1,VARREF(YevalSg2cYgenerate_functions),T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T5 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,code_out_;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_gen_ref_141) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYreference_Gc),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_142) {
  P e_,code_out_;
  P x_1635F3516;
  P x_1634F3515;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_384));
  x_1634F3515 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1634F3515,YPchr((P)40));
  x_1635F3516 = code_out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1635F3516,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1634F3515,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_143) {
  P e_,code_out_;
  P x_1636F3518;
  P regF3517;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3517 = T1;
  if (regF3517 != YPfalse) {
    x_1636F3518 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1636F3518,LITREF(lit_386));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3517);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1636F3518,T5);
    T3 = T4;
    T2 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_387));
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_144) {
  P e_,code_out_;
  P x_1637F3519;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  x_1637F3519 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1637F3519,LITREF(lit_389));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1637F3519,T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_145) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_146) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,code_out_;
  P x_1639F3521;
  P x_1638F3520;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_kind),T3);
  x_1638F3520 = T2;
  x_1639F3521 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1639F3521,x_1638F3520,LITREF(lit_151));
  if (T6 != YPfalse) {
    T5 = LITREF(lit_393);
  } else {
    T8 = CALL2(1,x_1639F3521,x_1638F3520,LITREF(lit_152));
    if (T8 != YPfalse) {
      T10 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T10 != YPfalse) {
        T9 = LITREF(lit_394);
      } else {
        T9 = LITREF(lit_395);
      }
      T7 = T9;
    } else {
      T7 = LITREF(lit_396);
    }
    T5 = T7;
  }
  T4 = T5;
  T1 = T4;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  T11 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T11,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_397));
  T12 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_398));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_to_c_148) {
  P e_,f_,d_,code_out_;
  P x_1640F3522;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T3 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSastYLruntime_referenceG));
    if (T2 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_400));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_401));
    x_1640F3522 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1640F3522,YPchr((P)40));
    T6 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T5 = CALL1(1,VARREF(YevalSastYreference_binding),T6);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T5,code_out_);
    T7 = CALL2(1,VARREF(YgooSioSportYput),x_1640F3522,YPchr((P)41));
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_149) {
  P e_,f_,d_,code_out_;
  P x_1641F3523;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_403));
    x_1641F3523 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1641F3523,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1641F3523,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_150) {
  P e_,f_,d_,code_out_;
  P x_1642F3524;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_405));
  x_1642F3524 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1642F3524,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1642F3524,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_406));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_151) {
  P e_,f_,d_,code_out_;
  P x_1643F3526;
  P bindingF3525;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T3);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  bindingF3525 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3525,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_408));
  x_1643F3526 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1643F3526,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3525,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1643F3526,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_152) {
  P e_,f_,d_,code_out_;
  P x_1644F3527;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_410));
  T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  x_1644F3527 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1644F3527,LITREF(lit_411));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1644F3527,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1644F3527,LITREF(lit_412));
  T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
  T5 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,T5,code_out_);
  T6 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T7,code_out_);
    T8 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T8,code_out_);
    T9 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_413));
  T11 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
  T12 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T11,f_,T12,code_out_);
  T13 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T13 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T14,code_out_);
    T15 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T15,code_out_);
    T16 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T16,code_out_);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_414));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_153) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_153,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1646_155) {
  P x_1645_;
  P argF3528;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1645_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1645_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1645_);
    argF3528 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3528,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1645_);
    a1 = T6;
    x_1645_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1649_156) {
  P x_1648_,x_1647_;
  P x_1650F3532;
  P argF3531;
  P iF3530;
  P tmpF3529;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1648_, 0);
  ARG(x_1647_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1648_);
  tmpF3529 = T3;
  if (tmpF3529 != YPfalse) {
    T4 = tmpF3529;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1647_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1648_);
    iF3530 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1647_);
    argF3531 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    x_1650F3532 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1650F3532,LITREF(lit_423));
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3530);
    CALL2(1,VARREF(YgooSioSportYputs),x_1650F3532,T10);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1650F3532,LITREF(lit_424));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3531,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_291));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1648_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1647_);
    a1 = T13;
    a2 = T14;
    x_1648_ = a1;
    x_1647_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1653_157) {
  P x_1652_,x_1651_;
  P x_1654F3536;
  P bindingF3535;
  P iF3534;
  P tmpF3533;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1652_, 0);
  ARG(x_1651_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1652_);
  tmpF3533 = T3;
  if (tmpF3533 != YPfalse) {
    T4 = tmpF3533;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1651_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1652_);
    iF3534 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1651_);
    bindingF3535 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3535,FREEREF(1));
    x_1654F3536 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1654F3536,LITREF(lit_427));
    T11 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3534);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1654F3536,T11);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_291));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1652_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1651_);
    a1 = T13;
    a2 = T14;
    x_1652_ = a1;
    x_1651_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_self_recursive_call_158) {
  P e_,f_,d_,code_out_;
  P x_1653F3539;
  P x_1649F3538;
  P x_1646F3537;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1646_155,4);
  x_1646F3537 = T0;
  FUNINIT(x_1646F3537, 4,f_,d_,code_out_,x_1646F3537);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1646F3537,T2);
  T4 = FUNSHELL(1,fun_x_1649_156,3);
  x_1649F3538 = T4;
  FUNINIT(x_1649F3538, 3,d_,code_out_,x_1649F3538);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_1649F3538,T6,T8);
  T10 = FUNSHELL(1,fun_x_1653_157,3);
  x_1653F3539 = T10;
  FUNINIT(x_1653F3539, 3,d_,code_out_,x_1653F3539);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_1653F3539,T12,T14);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_428));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_1656_159) {
  P x_1655_;
  P argF3540;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1655_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1655_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1655_);
    argF3540 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3540,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1655_);
    a1 = T6;
    x_1655_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1661_160) {
  P x_1660_;
  P argF3541;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1660_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1660_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1660_);
    argF3541 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3541,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1660_);
    a1 = T6;
    x_1660_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_161) {
  P e_,f_,d_,code_out_;
  P x_1661F3553;
  P x_1659F3552;
  P x_1658F3551;
  P tmpF3550;
  P x_1657F3549;
  P x_1656F3548;
  P nF3547;
  P tmpF3546;
  P tmpF3545;
  P tmpF3544;
  P tmpF3543;
  P functionF3542;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF3542 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF3543 = T4;
  if (tmpF3543 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_methodG));
    tmpF3544 = T7;
    if (tmpF3544 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF3545 = T10;
      if (tmpF3545 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF3542,VARREF(YevalSast_linearizeYLfree_referenceG));
        tmpF3546 = T14;
        if (tmpF3546 != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSast_linearizeYreference_selfQ),functionF3542);
          T15 = T16;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T9 = T12;
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T17 = CALL4(1,VARREF(YevalSg2cYgenerate_self_recursive_call),e_,f_,d_,code_out_);
    T2 = T17;
  } else {
    T20 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T19 = CALL1(1,VARREF(YgooStypesYlen),T20);
    nF3547 = T19;
    T21 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_1656_159,4);
    x_1656F3548 = T22;
    FUNINIT(x_1656F3548, 4,f_,d_,code_out_,x_1656F3548);
    T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_1656F3548,T24);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1657F3549 = code_out_;
    T28 = CALL1(1,VARREF(Ynot),f_);
    tmpF3550 = T28;
    if (tmpF3550 != YPfalse) {
      T29 = tmpF3550;
    } else {
      T30 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
      T29 = T30;
    }
    T27 = T29;
    if (T27 != YPfalse) {
      T26 = LITREF(lit_432);
    } else {
      T26 = LITREF(lit_155);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1657F3549,T26);
    CALL2(1,VARREF(YgooSioSportYputs),x_1657F3549,LITREF(lit_433));
    T33 = CALL2(1,VARREF(YgooSmagYG),nF3547,VARREF(YevalSg2cYDnumber_call_templates));
    if (T33 != YPfalse) {
      T32 = LITREF(lit_434);
    } else {
      T32 = nF3547;
    }
    T31 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1657F3549,T32);
    x_1658F3551 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1658F3551,YPchr((P)40));
    T35 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
    if (T35 != YPfalse) {
      T34 = LITREF(lit_435);
    } else {
      T34 = LITREF(lit_436);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T34);
    T36 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T36,code_out_);
    T37 = CALL2(1,VARREF(YgooSmagYG),nF3547,VARREF(YevalSg2cYDnumber_call_templates));
    if (T37 != YPfalse) {
      x_1659F3552 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1659F3552,LITREF(lit_437));
      T39 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1659F3552,nF3547);
      T38 = T39;
    } else {
    }
    T40 = FUNSHELL(1,fun_x_1661_160,2);
    x_1661F3553 = T40;
    FUNINIT(x_1661F3553, 2,code_out_,x_1661F3553);
    T43 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T42 = CALL1(1,VARREF(YgooScolsScolYenum),T43);
    T41 = CALL1(0,x_1661F3553,T42);
    T44 = CALL2(1,VARREF(YgooSioSportYput),x_1658F3551,YPchr((P)41));
    T45 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T18 = T45;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1665_162) {
  P x_1664_,x_1663_;
  P xF3556;
  P firstQF3555;
  P tmpF3554;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1664_, 0);
  ARG(x_1663_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1664_);
  tmpF3554 = T3;
  if (tmpF3554 != YPfalse) {
    T4 = tmpF3554;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1663_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1664_);
    firstQF3555 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1663_);
    xF3556 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3555);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3556,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1664_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1663_);
    a1 = T13;
    a2 = T14;
    x_1664_ = a1;
    x_1663_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_163) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_164) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_165) {
  P e_,f_,d_,code_out_;
  P x_1665F3558;
  P x_1662F3557;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_1662F3557 = code_out_;
  T2 = FUNSHELL(1,fun_x_1665_162,3);
  x_1665F3558 = T2;
  FUNINIT(x_1665F3558, 3,x_1662F3557,code_out_,x_1665F3558);
  T6 = fun_163;
  T7 = fun_164;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_1665F3558,T4,T8);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1669_166) {
  P x_1668_,x_1667_,x_1666_;
  P x_1670F3565;
  P tmpF3564;
  P bindingF3563;
  P typeF3562;
  P initF3561;
  P tmpF3560;
  P tmpF3559;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1668_, 0);
  ARG(x_1667_, 1);
  ARG(x_1666_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1668_);
  tmpF3559 = T3;
  if (tmpF3559 != YPfalse) {
    T4 = tmpF3559;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1667_);
    tmpF3560 = T6;
    if (tmpF3560 != YPfalse) {
      T7 = tmpF3560;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1666_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1668_);
    initF3561 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1667_);
    typeF3562 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1666_);
    bindingF3563 = T14;
    CALL4(1,VARREF(YevalSg2cYto_c),initF3561,FREEREF(0),FREEREF(1),FREEREF(2));
    T17 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF3562);
    tmpF3564 = T17;
    if (tmpF3564 != YPfalse) {
      T18 = tmpF3564;
    } else {
      T18 = FREEREF(3);
    }
    T16 = T18;
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALL4(1,VARREF(YevalSg2cYto_c),typeF3562,FREEREF(0),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_448));
      x_1670F3565 = FREEREF(2);
      CALL2(1,VARREF(YgooSioSportYput),x_1670F3565,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF3561,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYput),x_1670F3565,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),typeF3562,FREEREF(2));
      T19 = CALL2(1,VARREF(YgooSioSportYput),x_1670F3565,YPchr((P)41));
      T20 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_291));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3563,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_449));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF3561,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_291));
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1668_);
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1667_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1666_);
    a1 = T22;
    a2 = T23;
    a3 = T24;
    x_1668_ = a1;
    x_1667_ = a2;
    x_1666_ = a3;
    goto loop;
    T13 = T21;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_167) {
  P e_,f_,d_,code_out_;
  P x_1669F3567;
  P low_letQF3566;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF3566 = T1;
  T2 = FUNSHELL(1,fun_x_1669_166,5);
  x_1669F3567 = T2;
  FUNINIT(x_1669F3567, 5,f_,d_,code_out_,low_letQF3566,x_1669F3567);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T3 = CALL3(0,x_1669F3567,T4,T6,T8);
  T10 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T10,f_,d_,code_out_);
  T12 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T12 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T13 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T13,code_out_);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T11 = T14;
  } else {
    T11 = YPfalse;
  }
  T0 = T11;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1673_168) {
  P x_1672_,x_1671_;
  P bindingF3570;
  P initF3569;
  P tmpF3568;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_1672_, 0);
  ARG(x_1671_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1672_);
  tmpF3568 = T3;
  if (tmpF3568 != YPfalse) {
    T4 = tmpF3568;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1671_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1672_);
    initF3569 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1671_);
    bindingF3570 = T9;
    CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF3570,initF3569,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3570,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_453));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF3569,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_291));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1672_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1671_);
    a1 = T11;
    a2 = T12;
    x_1672_ = a1;
    x_1671_ = a2;
    goto loop;
    T8 = T10;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_169) {
  P e_,f_,d_,code_out_;
  P x_1673F3571;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1673_168,3);
  x_1673F3571 = T0;
  FUNINIT(x_1673F3571, 3,d_,code_out_,x_1673F3571);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_1673F3571,T2,T4);
  T6 = CALL4(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T6,T7,T8);
  T9 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T9,f_,d_,code_out_);
  T11 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_170) {
  P e_,f_,d_,code_out_;
  P x_1674F3572;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_455));
  x_1674F3572 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1674F3572,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1674F3572,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_171) {
  P e_,f_,d_,code_out_;
  P x_1675F3573;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_457));
  x_1675F3573 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1675F3573,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1675F3573,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1675F3573,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_172) {
  P e_,f_,d_,code_out_;
  P x_1676F3574;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T3,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_459));
  x_1676F3574 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_460));
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_461));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_462));
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1676F3574,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1678_173) {
  P x_1677_;
  P argF3575;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1677_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1677_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1677_);
    argF3575 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3575,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1677_);
    a1 = T6;
    x_1677_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1684_174) {
  P x_1683_,x_1682_;
  P argF3578;
  P firstQF3577;
  P tmpF3576;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1683_, 0);
  ARG(x_1682_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1683_);
  tmpF3576 = T3;
  if (tmpF3576 != YPfalse) {
    T4 = tmpF3576;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1682_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1683_);
    firstQF3577 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1682_);
    argF3578 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3577);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3578,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1683_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1682_);
    a1 = T13;
    a2 = T14;
    x_1683_ = a1;
    x_1682_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_175) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_176) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_177) {
  P e_,f_,d_,code_out_;
  P x_1684F3586;
  P x_1681F3585;
  P x_1680F3584;
  P x_1679F3583;
  P x_1678F3582;
  P tmpF3581;
  P tmpF3580;
  P bindingF3579;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF3579 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF3580 = T4;
  if (tmpF3580 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    tmpF3581 = T7;
    if (tmpF3581 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF3579,T10);
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL4(1,VARREF(YevalSg2cYgenerate_self_recursive_call),e_,f_,d_,code_out_);
    T2 = T11;
  } else {
    T12 = FUNSHELL(1,fun_x_1678_173,4);
    x_1678F3582 = T12;
    FUNINIT(x_1678F3582, 4,f_,d_,code_out_,x_1678F3582);
    T15 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_1678F3582,T14);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1679F3583 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1679F3583,LITREF(lit_466));
    T18 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
    T17 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T18);
    T16 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1679F3583,T17);
    x_1680F3584 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1680F3584,YPchr((P)40));
    x_1681F3585 = code_out_;
    T20 = FUNSHELL(1,fun_x_1684_174,3);
    x_1684F3586 = T20;
    FUNINIT(x_1684F3586, 3,x_1681F3585,code_out_,x_1684F3586);
    T24 = fun_175;
    T25 = fun_176;
    T23 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T24,T25);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
    T27 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T26 = CALL1(1,VARREF(YgooScolsScolYenum),T27);
    T21 = CALL2(0,x_1684F3586,T22,T26);
    T19 = T21;
    T28 = CALL2(1,VARREF(YgooSioSportYput),x_1680F3584,YPchr((P)41));
    T29 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T2 = T29;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1688_179) {
  P x_1687_;
  P xF3587;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1687_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1687_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1687_);
    xF3587 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3587,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1687_);
    a1 = T6;
    x_1687_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_180) {
  P e_,f_,d_,code_out_;
  P x_1688F3592;
  P x_1686F3591;
  P x_1685F3590;
  P fF3589;
  P nF3588;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3588 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF3589 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF3588,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3589);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_178,3,fF3589,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_473));
    x_1685F3590 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1685F3590,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3589);
    x_1686F3591 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1686F3591,LITREF(lit_474));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3588);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1686F3591,T14);
    T15 = FUNSHELL(1,fun_x_1688_179,2);
    x_1688F3592 = T15;
    FUNINIT(x_1688F3592, 2,code_out_,x_1688F3592);
    T18 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    T16 = CALL1(0,x_1688F3592,T17);
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_1685F3590,YPchr((P)41));
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T6 = T20;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_181) {
  P b_,e_,f_,d_,code_out_;
  P x_1691F3597;
  P x_1690F3596;
  P x_1689F3595;
  P fF3594;
  P nF3593;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3593 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF3594 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF3593,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3594);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_479));
    x_1689F3595 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1689F3595,YPchr((P)40));
    x_1690F3596 = code_out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1690F3596,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_1689F3595,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3594);
    CALL2(1,VARREF(YgooSioSportYput),x_1689F3595,YPchr((P)44));
    x_1691F3597 = code_out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3593);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1691F3597,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1689F3595,YPchr((P)41));
    T8 = T15;
  }
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
  T3 = T16;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_182) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1695_183) {
  P x_1694_;
  P xF3598;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1694_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1694_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1694_);
    xF3598 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3598,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1694_);
    a1 = T6;
    x_1694_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_184) {
  P b_,e_,f_,d_,code_out_;
  P x_1695F3602;
  P x_1693F3601;
  P x_1692F3600;
  P nF3599;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3599 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF3599,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_182,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_483));
    x_1692F3600 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1692F3600,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,code_out_);
    x_1693F3601 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1693F3601,LITREF(lit_484));
    T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1693F3601,nF3599);
    T9 = FUNSHELL(1,fun_x_1695_183,2);
    x_1695F3602 = T9;
    FUNINIT(x_1695F3602, 2,code_out_,x_1695F3602);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T10 = CALL1(0,x_1695F3602,T11);
    T13 = CALL2(1,VARREF(YgooSioSportYput),x_1692F3600,YPchr((P)41));
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T3 = T14;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_185) {
  P e_,f_,d_,code_out_;
  P x_1696F3603;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,YPfalse,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_488));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1696F3603 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3603,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3603,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3603,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1696F3603,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_1700_186) {
  P x_1699_;
  P eF3604;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1699_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1699_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1699_);
    eF3604 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF3604);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1699_);
    a1 = T6;
    x_1699_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_out_list_builder_187) {
  P f_,code_out_,elts_;
  P x_1700F3607;
  P x_1698F3606;
  P x_1697F3605;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_491));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_492));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_1697F3605 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1697F3605,YPchr((P)40));
    x_1698F3606 = code_out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1698F3606,T7);
    T9 = FUNSHELL(1,fun_x_1700_186,3);
    x_1700F3607 = T9;
    FUNINIT(x_1700F3607, 3,code_out_,f_,x_1700F3607);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T10 = CALL1(0,x_1700F3607,T11);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_1697F3605,YPchr((P)41));
    T5 = T12;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_fab_list_189) {
  P code_out_,refs_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_188,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_190) {
  P code_out_,sig_;
  P specsF3609;
  P typesF3608;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF3608 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YevalSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF3608);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF3608,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF3608;
  }
  specsF3609 = T3;
  T9 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,specsF3609);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_192) {
  P e_,f_,d_,code_out_;
  P x_1701F3610;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_191,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_502));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_1701F3610 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3610,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3610,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3610,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3610,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3610,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1701F3610,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_503));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1701F3610,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_193) {
  P e_,f_,d_,code_out_;
  P x_1702F3611;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_505));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1702F3611 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3611,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_506));
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3611,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3611,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3611,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_507));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3611,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_508));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3611,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_509));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1702F3611,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_510));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1702F3611,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1704_194) {
  P x_1703_;
  P defF3612;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1703_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1703_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1703_);
    defF3612 = T4;
    CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),FREEREF(0),defF3612);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1703_);
    a1 = T6;
    x_1703_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_195) {
  P code_out_,definitions_;
  P x_1704F3613;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_513));
  T1 = FUNSHELL(1,fun_x_1704_194,2);
  x_1704F3613 = T1;
  FUNINIT(x_1704F3613, 2,code_out_,x_1704F3613);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_1704F3613,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1709_196) {
  P x_1708_,x_1707_;
  P iF3616;
  P firstQF3615;
  P tmpF3614;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1708_, 0);
  ARG(x_1707_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1708_);
  tmpF3614 = T3;
  if (tmpF3614 != YPfalse) {
    T4 = tmpF3614;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1707_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1708_);
    firstQF3615 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1707_);
    iF3616 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3615);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_524));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1708_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1707_);
    a1 = T13;
    a2 = T14;
    x_1708_ = a1;
    x_1707_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_198) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_199) {
  P code_out_,defn_;
  P x_1709F3619;
  P x_1706F3618;
  P x_1705F3617;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  x_1705F3617 = code_out_;
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_518);
  } else {
    T0 = LITREF(lit_519);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1705F3617,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1705F3617,LITREF(lit_520));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1705F3617,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1705F3617,LITREF(lit_521));
  x_1706F3618 = code_out_;
  T5 = FUNSHELL(1,fun_x_1709_196,3);
  x_1709F3619 = T5;
  FUNINIT(x_1709F3619, 3,x_1706F3618,code_out_,x_1709F3619);
  T9 = fun_197;
  T10 = fun_198;
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL1(1,VARREF(YgooScolsSseqYbelow),T13);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  T6 = CALL2(0,x_1709F3619,T7,T11);
  T4 = T6;
  T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_527));
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_generate_function_binding_200) {
  P code_out_,defn_;
  P x_1711F3624;
  P nameF3623;
  P x_1710F3622;
  P tmpF3621;
  P nameF3620;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF3620 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF3620,VARREF(YevalSastYLmodule_bindingG));
  tmpF3621 = T4;
  if (tmpF3621 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF3620);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_530),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF3620);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF3620,YPfalse);
    if (T11 != YPfalse) {
      x_1710F3622 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1710F3622,LITREF(lit_531));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1710F3622,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF3620,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF3620);
        T16 = T18;
      } else {
        T16 = nameF3620;
      }
      nameF3623 = T16;
      x_1711F3624 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1711F3624,LITREF(lit_532));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF3623);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1711F3624,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_1711F3624,LITREF(lit_533));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1711F3624,T22);
      T19 = T21;
      T15 = T19;
      T10 = T15;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forward_201) {
  P code_out_,defn_;
  P boundQF3625;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF3625 = T1;
  if (boundQF3625 != YPfalse) {
    T3 = LITREF(lit_535);
  } else {
    T3 = LITREF(lit_536);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_537));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_bodies_203) {
  P code_out_,definitions_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_540));
  T1 = FUNFAB(fun_202,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_204) {
  P def_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),def_,VARREF(YevalSastYLast_primitiveG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL4(1,VARREF(YevalSg2cYgenerate_closure_structure),def_,FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_functions_205) {
  P definitions_,f_,d_,code_out_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_204,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_206) {
  P definition_,f_,d_,code_out_;
  P x_1714F3628;
  P x_1713F3627;
  P x_1712F3626;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),definition_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  x_1712F3626 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1712F3626,LITREF(lit_547));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_548));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1712F3626,T2);
  x_1713F3627 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3627,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3627,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3627,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3627,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_549));
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3627,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_550));
  CALL2(1,VARREF(YgooSioSportYput),x_1713F3627,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T5 != YPfalse) {
    x_1714F3628 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1714F3628,LITREF(lit_551));
    T8 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    CALL2(1,VARREF(YgooSioSportYputs),x_1714F3628,T7);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1714F3628,LITREF(lit_552));
    T6 = T9;
  } else {
    T11 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
    T10 = CALL2(1,VARREF(YevalSg2cYgen_ref),T11,code_out_);
  }
  T12 = CALL2(1,VARREF(YgooSioSportYput),x_1713F3627,YPchr((P)41));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_generate_function_body_reference_207) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_555));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_556));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1719_208) {
  P x_1718_,x_1717_,x_1716_;
  P x_1720F3634;
  P bF3633;
  P iF3632;
  P firstQF3631;
  P tmpF3630;
  P tmpF3629;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1718_, 0);
  ARG(x_1717_, 1);
  ARG(x_1716_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1718_);
  tmpF3629 = T3;
  if (tmpF3629 != YPfalse) {
    T4 = tmpF3629;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1717_);
    tmpF3630 = T6;
    if (tmpF3630 != YPfalse) {
      T7 = tmpF3630;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1716_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1718_);
    firstQF3631 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1717_);
    iF3632 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1716_);
    bF3633 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF3631);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    x_1720F3634 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1720F3634,LITREF(lit_562));
    T18 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3632);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1720F3634,T18);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1718_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1717_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1716_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1718_ = a1;
    x_1717_ = a2;
    x_1716_ = a3;
    goto loop;
    T13 = T19;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_209) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_210) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_shadow_args_211) {
  P bindings_,code_out_;
  P x_1719F3636;
  P x_1715F3635;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_559));
    x_1715F3635 = code_out_;
    T4 = FUNSHELL(1,fun_x_1719_208,3);
    x_1719F3636 = T4;
    FUNINIT(x_1719F3636, 3,x_1715F3635,code_out_,x_1719F3636);
    T8 = fun_209;
    T9 = fun_210;
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_1719F3636,T6,T10,T12);
    T3 = T5;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    T0 = T13;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_212) {
  P defn_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_567));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_213) {
  P defn_,d_,code_out_;
  P x_1721F3637;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),code_out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_569));
  x_1721F3637 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1721F3637,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1721F3637,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_214) {
  P e_;
  P tmpF3638;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_572));
  tmpF3638 = T1;
  if (tmpF3638 != YPfalse) {
    T3 = tmpF3638;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),T5,LITREF(lit_573));
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1727_215) {
  P x_1726_,x_1725_;
  P bindingF3641;
  P firstQF3640;
  P tmpF3639;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1726_, 0);
  ARG(x_1725_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1726_);
  tmpF3639 = T3;
  if (tmpF3639 != YPfalse) {
    T4 = tmpF3639;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1725_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1726_);
    firstQF3640 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1725_);
    bindingF3641 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3640);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_582));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3641,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1726_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1725_);
    a1 = T13;
    a2 = T14;
    x_1726_ = a1;
    x_1725_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_216) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_217) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_code_218) {
  P code_out_,e_;
  P x_1727F3645;
  P x_1724F3644;
  P x_1723F3643;
  P x_1722F3642;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1722F3642 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1722F3642,LITREF(lit_576));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_577);
  } else {
    T0 = LITREF(lit_155);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1722F3642,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_578);
  } else {
    T1 = LITREF(lit_155);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1722F3642,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1722F3642,LITREF(lit_579));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,code_out_);
  x_1723F3643 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1723F3643,YPchr((P)40));
  x_1724F3644 = code_out_;
  T6 = FUNSHELL(1,fun_x_1727_215,3);
  x_1727F3645 = T6;
  FUNINIT(x_1727F3645, 3,x_1724F3644,code_out_,x_1727F3645);
  T10 = fun_216;
  T11 = fun_217;
  T9 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T10,T11);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T7 = CALL2(0,x_1727F3645,T8,T12);
  T5 = T7;
  T14 = CALL2(1,VARREF(YgooSioSportYput),x_1723F3643,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_585));
  T15 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T15,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T17,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_586));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_587));
  T18 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T18,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T19 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_588));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_dispatcherQ_219) {
  P definition_;
  P tmpF3649;
  P nameF3648;
  P tmpF3647;
  P bindingF3646;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF3646 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF3646,VARREF(YevalSastYLmodule_bindingG));
  tmpF3647 = T3;
  if (tmpF3647 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3646);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF3648 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF3648,LITREF(lit_591));
    tmpF3649 = T9;
    if (tmpF3649 != YPfalse) {
      T10 = tmpF3649;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF3648,LITREF(lit_592));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF3648);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_593));
      T13 = CALL2(1,VARREF(YgooSmathY_),T14,T15);
      T11 = CALL2(1,VARREF(YgooSmathYE),T12,T13);
      T10 = T11;
    }
    T8 = T10;
    T5 = T8;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1731_220) {
  P x_1730_,x_1729_;
  P bF3652;
  P firstQF3651;
  P tmpF3650;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1730_, 0);
  ARG(x_1729_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1730_);
  tmpF3650 = T3;
  if (tmpF3650 != YPfalse) {
    T4 = tmpF3650;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1729_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1730_);
    firstQF3651 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1729_);
    bF3652 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3651);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF3652,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1730_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1729_);
    a1 = T13;
    a2 = T14;
    x_1730_ = a1;
    x_1729_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_222) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_223) {
  P b_;
  P x_1732F3653;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_604));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_605));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1732F3653 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1732F3653,LITREF(lit_606));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1732F3653,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1732F3653,LITREF(lit_607));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_291));
    T10 = BOXVAL(FREEREF(1));
    T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
    T8 = BOXVAL(FREEREF(1)) = T9;
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_code_224) {
  P code_out_,definition_;
  P x_1731F3657;
  P x_1728F3656;
  P bindingsF3655;
  P offsetF3654;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF3654 = YPint((P)0);
  offsetF3654 = BOXFAB(offsetF3654);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF3655 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_595));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_596));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3655);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_597));
    x_1728F3656 = code_out_;
    T7 = FUNSHELL(1,fun_x_1731_220,3);
    x_1731F3657 = T7;
    FUNINIT(x_1731F3657, 3,x_1728F3656,code_out_,x_1731F3657);
    T11 = fun_221;
    T12 = fun_222;
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T11,T12);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    T8 = CALL2(0,x_1731F3657,T9,T13);
    T6 = T8;
    T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T17,code_out_);
  T18 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T18,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_602));
  T19 = FUNFAB(fun_223,2,code_out_,offsetF3654);
  CALL2(1,VARREF(YgooSmacrosYdo),T19,bindingsF3655);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_608));
  T20 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T20,definition_,YPint((P)1),code_out_);
  T22 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T21 = CALL1(1,VARREF(Ynot),T22);
  if (T21 != YPfalse) {
    T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_609));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_610));
  T2 = T24;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1734_225) {
  P x_1733_;
  P tempF3658;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1733_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1733_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1733_);
    tempF3658 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_615));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF3658,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_291));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1733_);
    a1 = T6;
    x_1733_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_226) {
  P temps_,code_out_;
  P x_1734F3659;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1734_225,2);
  x_1734F3659 = T1;
  FUNINIT(x_1734F3659, 2,code_out_,x_1734F3659);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_1734F3659,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_227) {
  P j_,i_;
  P tmpF3660;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YevalSg2cYTregisters_per_lineT));
  tmpF3660 = T2;
  if (tmpF3660 != YPfalse) {
    T3 = tmpF3660;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYE),j_,FREEREF(0));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_623));
    T5 = CALL1(0,FREEREF(2),j_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)44));
    } else {
    }
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),j_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,FREEREF(1));
    T11 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T11;
    a2 = T12;
    j_ = a1;
    i_ = a2;
    goto loop;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_line_228) {
  P j_;
  P next_regF3661;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(j_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_620));
    T3 = FUNSHELL(1,fun_next_reg_227,5);
    next_regF3661 = T3;
    FUNINIT(next_regF3661, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),next_regF3661);
    T4 = CALL2(0,next_regF3661,j_,YPint((P)0));
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_229) {
  P regs_,code_out_;
  P next_lineF3663;
  P nregsF3662;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF3662 = T1;
  T3 = FUNSHELL(1,fun_next_line_228,4);
  next_lineF3663 = T3;
  FUNINIT(next_lineF3663, 4,nregsF3662,code_out_,next_lineF3663,regs_);
  T4 = CALL1(0,next_lineF3663,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_230) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_626),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_231) {
  P modname_;
  P x_1735F3664;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1735F3664 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1735F3664,LITREF(lit_631));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1735F3664,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1735F3664,LITREF(lit_632));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_232) {
  P binding_;
  P home_modF3665;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF3665 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF3665);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P code_out_,mod_;
  P maybe_declareF3668;
  P envF3667;
  P seenF3666;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF3666 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3667 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_231,2);
  maybe_declareF3668 = T5;
  FUNINIT(maybe_declareF3668, 2,seenF3666,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3667);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF3668,T6);
  T9 = FUNFAB(fun_232,2,mod_,maybe_declareF3668);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1737_234) {
  P x_1736_;
  P x_1738F3670;
  P nF3669;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1736_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1736_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1736_);
    nF3669 = T4;
    x_1738F3670 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1738F3670,LITREF(lit_640));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF3669);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1738F3670,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1738F3670,LITREF(lit_641));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1736_);
    a1 = T8;
    x_1736_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_235) {
  P local_name_,binding_;
  P x_1739F3671;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1739F3671 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1739F3671,LITREF(lit_645));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1739F3671,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_1739F3671,LITREF(lit_646));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1739F3671,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1739F3671,LITREF(lit_647));
    T8 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1739F3671,T8);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1739F3671,LITREF(lit_648));
    T3 = T9;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_236) {
  P binding_;
  P x_1744F3676;
  P x_1743F3675;
  P x_1742F3674;
  P x_1741F3673;
  P x_1740F3672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_1740F3672 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1740F3672,LITREF(lit_652));
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1740F3672,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1740F3672,LITREF(lit_653));
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    x_1741F3673 = T6;
    x_1742F3674 = VARREF(YgooSmacrosYEE);
    T9 = CALL2(1,x_1742F3674,x_1741F3673,LITREF(lit_150));
    if (T9 != YPfalse) {
      x_1743F3675 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1743F3675,LITREF(lit_654));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1743F3675,T11);
      T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1743F3675,LITREF(lit_655));
      T10 = T12;
      T8 = T10;
    } else {
      T14 = CALL2(1,x_1742F3674,x_1741F3673,LITREF(lit_152));
      if (T14 != YPfalse) {
        x_1744F3676 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_1744F3676,LITREF(lit_656));
        T16 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1744F3676,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1744F3676,LITREF(lit_657));
        T15 = T17;
        T13 = T15;
      } else {
        T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_658));
        T13 = T18;
      }
      T8 = T13;
    }
    T7 = T8;
    T5 = T7;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1746_237) {
  P x_1745_;
  P x_1747F3680;
  P bindingF3679;
  P exported_asF3678;
  P tup33F3677;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(x_1745_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1745_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1745_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1745_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup33F3677 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F3677,YPint((P)0));
    exported_asF3678 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F3677,YPint((P)1));
    bindingF3679 = T10;
    x_1747F3680 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1747F3680,LITREF(lit_663));
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3679);
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1747F3680,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1747F3680,LITREF(lit_664));
    T13 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF3678);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1747F3680,T13);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1747F3680,LITREF(lit_665));
    T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1745_);
    a1 = T16;
    x_1745_ = a1;
    goto loop;
    T9 = T15;
    T7 = T9;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P code_out_,mod_;
  P x_1750F3690;
  P x_1749F3689;
  P x_1748F3688;
  P x_1746F3687;
  P x_1737F3686;
  P uses_namesF3685;
  P usesF3684;
  P envF3683;
  P info_nameF3682;
  P nameF3681;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3681 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3681);
  info_nameF3682 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3683 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3683);
  usesF3684 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3684);
  uses_namesF3685 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_636));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_637));
  T10 = FUNSHELL(1,fun_x_1737_234,2);
  x_1737F3686 = T10;
  FUNINIT(x_1737F3686, 2,code_out_,x_1737F3686);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3685);
  T11 = CALL1(0,x_1737F3686,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_642));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_643));
  T13 = FUNFAB(fun_235,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_649));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_650));
  T15 = FUNFAB(fun_236,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_659));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_660));
  T17 = FUNSHELL(1,fun_x_1746_237,2);
  x_1746F3687 = T17;
  FUNINIT(x_1746F3687, 2,code_out_,x_1746F3687);
  T20 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_1746F3687,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_666));
  x_1748F3688 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1748F3688,LITREF(lit_667));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1748F3688,info_nameF3682);
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1748F3688,LITREF(lit_668));
  x_1749F3689 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1749F3689,LITREF(lit_669));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1749F3689,info_nameF3682);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1749F3689,LITREF(lit_670));
  x_1750F3690 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1750F3690,LITREF(lit_671));
  T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3681);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1750F3690,T23);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1750F3690,LITREF(lit_672));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_673));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_674));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_675));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_676));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_677));
  T25 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_678));
  T8 = T25;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_239) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_681),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_240) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_684),T1,LITREF(lit_685));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1752_241) {
  P x_1751_;
  P x_1753F3692;
  P nF3691;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1751_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1751_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1751_);
    nF3691 = T4;
    x_1753F3692 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1753F3692,LITREF(lit_692));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF3691);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1753F3692,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1753F3692,LITREF(lit_693));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1751_);
    a1 = T8;
    x_1751_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1757_242) {
  P x_1756_;
  P x_1758F3694;
  P nF3693;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1756_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1756_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1756_);
    nF3693 = T4;
    x_1758F3694 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1758F3694,LITREF(lit_703));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF3693);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1758F3694,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1758F3694,LITREF(lit_704));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1756_);
    a1 = T8;
    x_1756_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_243) {
  P code_out_,mod_,form_;
  P x_1757F3703;
  P x_1755F3702;
  P x_1754F3701;
  P x_1752F3700;
  P uses_namesF3699;
  P usesF3698;
  P envF3697;
  P init_declF3696;
  P nameF3695;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_688);
  } else {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF3695 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3695);
  init_declF3696 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3697 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3697);
  usesF3698 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3698);
  uses_namesF3699 = T10;
  T11 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_689));
    T13 = FUNSHELL(1,fun_x_1752_241,2);
    x_1752F3700 = T13;
    FUNINIT(x_1752F3700, 2,code_out_,x_1752F3700);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3699);
    T14 = CALL1(0,x_1752F3700,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_694));
  x_1754F3701 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1754F3701,LITREF(lit_695));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1754F3701,init_declF3696);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1754F3701,LITREF(lit_696));
  x_1755F3702 = code_out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1755F3702,init_declF3696);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1755F3702,LITREF(lit_697));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_698));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_699));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_700));
  T18 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T18 != YPfalse) {
    T19 = FUNSHELL(1,fun_x_1757_242,2);
    x_1757F3703 = T19;
    FUNINIT(x_1757F3703, 2,code_out_,x_1757F3703);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3699);
    T20 = CALL1(0,x_1757F3703,T21);
    T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_705));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_706));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_707));
  T9 = T23;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_244) {
  P code_out_,mod_;
  P x_1763F3710;
  P x_1762F3709;
  P x_1761F3708;
  P x_1760F3707;
  P x_1759F3706;
  P info_nameF3705;
  P nameF3704;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3704 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3704);
  info_nameF3705 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_710));
  x_1759F3706 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1759F3706,LITREF(lit_711));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1759F3706,info_nameF3705);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1759F3706,LITREF(lit_712));
  x_1760F3707 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1760F3707,LITREF(lit_713));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3704);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1760F3707,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1760F3707,LITREF(lit_714));
  x_1761F3708 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1761F3708,LITREF(lit_715));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1761F3708,info_nameF3705);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1761F3708,LITREF(lit_716));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_717));
  x_1762F3709 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1762F3709,LITREF(lit_718));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_719));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1762F3709,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1762F3709,LITREF(lit_720));
  x_1763F3710 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1763F3710,LITREF(lit_721));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF3704);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1763F3710,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1763F3710,LITREF(lit_722));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_723));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_724));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSg2cY___main_0___() {
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
  P T176,T177,T178,T179,T180,T181,T182,T183;
DEFCREGS();
loop:
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  DYNDEFSET(YevalSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPmet(FUNCODEREF(fun_module_loader_appname_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(28));
  T5 = BOUNDP(YevalSg2cYmodule_loader_appname);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSg2cYmodule_loader_appname);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  lit_3 = YPPsym((P)"module-loader-appname-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T7 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_setter_1 = YPmet(FUNCODEREF(fun_module_loader_appname_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(28));
  T10 = BOUNDP(YevalSg2cYmodule_loader_appname_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSg2cYmodule_loader_appname_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_module_loader_appname_setter_1;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSg2cYmodule_loader_appname_setter,T8);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),VARREF(YevalSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"module-loader-app-modname");
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_2 = YPmet(FUNCODEREF(fun_module_loader_app_modname_2),LITREF(lit_5),T12,ENVNUL,PNUL,sloc(29));
  T15 = BOUNDP(YevalSg2cYmodule_loader_app_modname);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSg2cYmodule_loader_app_modname);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_module_loader_app_modname_2;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSg2cYmodule_loader_app_modname,T13);
  lit_7 = YPPsym((P)"module-loader-app-modname-setter");
  lit_8 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_8),YPPlist(2,VARREF(YLsymG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_setter_3 = YPmet(FUNCODEREF(fun_module_loader_app_modname_setter_3),LITREF(lit_7),T17,ENVNUL,PNUL,sloc(29));
  T20 = BOUNDP(YevalSg2cYmodule_loader_app_modname_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSg2cYmodule_loader_app_modname_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_module_loader_app_modname_setter_3;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSg2cYmodule_loader_app_modname_setter,T18);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),VARREF(YevalSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_9 = YPPsym((P)"<g2c-module>");
  T23 = (P)YPpair(VARREF(YevalSastYLmoduleG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_9),T23);
  VARSET(YevalSg2cYLg2c_moduleG,T22);
  lit_10 = YPPsym((P)"module-src-file");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_4 = YPmet(FUNCODEREF(fun_module_src_file_4),LITREF(lit_10),T24,ENVNUL,PNUL,sloc(32));
  T27 = BOUNDP(YevalSg2cYmodule_src_file);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSg2cYmodule_src_file);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_module_src_file_4;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSg2cYmodule_src_file,T25);
  lit_12 = YPPsym((P)"module-src-file-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_5 = YPmet(FUNCODEREF(fun_module_src_file_setter_5),LITREF(lit_12),T29,ENVNUL,PNUL,sloc(32));
  T32 = BOUNDP(YevalSg2cYmodule_src_file_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSg2cYmodule_src_file_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_module_src_file_setter_5;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSg2cYmodule_src_file_setter,T30);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"module-mtime");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_6 = YPmet(FUNCODEREF(fun_module_mtime_6),LITREF(lit_14),T34,ENVNUL,PNUL,sloc(33));
  T37 = BOUNDP(YevalSg2cYmodule_mtime);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSg2cYmodule_mtime);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_module_mtime_6;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSg2cYmodule_mtime,T35);
  lit_16 = YPPsym((P)"module-mtime-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_7 = YPmet(FUNCODEREF(fun_module_mtime_setter_7),LITREF(lit_16),T39,ENVNUL,PNUL,sloc(33));
  T42 = BOUNDP(YevalSg2cYmodule_mtime_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSg2cYmodule_mtime_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_module_mtime_setter_7;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSg2cYmodule_mtime_setter,T40);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"module-loader-module-type");
  lit_19 = YPPlist(1,YPPsym((P)"loader"));
  T44 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_8 = YPmet(FUNCODEREF(fun_module_loader_module_type_8),LITREF(lit_18),T44,ENVNUL,PNUL,sloc(35));
  T47 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_module_loader_module_type_8;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYmodule_loader_module_type,T45);
  lit_20 = YPPsym((P)"load-module");
  lit_21 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_22 = YPsb((P)"START");
  lit_23 = YPsb((P)"OPTIMIZE");
  lit_24 = Ynil;
  lit_25 = YPPlist(1,YPPsym((P)"name"));
  lit_26 = YPsb((P)"EMIT");
  T54 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T54,ENVNUL,PNUL,sloc(59));
  T53 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T53,ENVNUL,PNUL,sloc(59));
  T52 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T52,ENVNUL,PNUL,sloc(58));
  T51 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T51,ENVNUL,PNUL,sloc(58));
  T50 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T50,ENVNUL,PNUL,sloc(61));
  T49 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_14 = YPmet(FUNCODEREF(fun_load_module_14),LITREF(lit_20),T49,ENVNUL,PNUL,sloc(40));
  T57 = BOUNDP(YevalSastYload_module);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYload_module);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_load_module_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYload_module,T55);
  lit_27 = YPPsym((P)"module-up-to-date?");
  lit_28 = YPPlist(1,YPPsym((P)"mod"));
  T59 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_27),T59,ENVNUL,PNUL,sloc(75));
  T60 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T60);
  lit_29 = YPPsym((P)"purge-outdated-modules");
  lit_30 = YPPlist(1,YPPsym((P)"loader"));
  lit_31 = YPPlist(1,YPPsym((P)"mod"));
  lit_32 = YPPlist(1,YPPsym((P)"name"));
  lit_33 = YPsb((P)" has changed.\n");
  T63 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T63,ENVNUL,PNUL,sloc(83));
  T62 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T62,ENVNUL,PNUL,sloc(89));
  T61 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_29),T61,ENVNUL,PNUL,sloc(78));
  T64 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T64);
  lit_34 = YPPsym((P)"g2c-def-app");
  lit_35 = YPPlist(2,YPPsym((P)"appname"),YPPsym((P)"modname"));
  T65 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_34),T65,ENVNUL,PNUL,sloc(102));
  T66 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T66);
  lit_36 = YPPsym((P)"g2c-build-app");
  lit_37 = YPPlist(1,YPPsym((P)"loader"));
  lit_38 = YPsb((P)"Searching for undefined global bindings.\n");
  T67 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_36),T67,ENVNUL,PNUL,sloc(108));
  T68 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T68);
  lit_39 = YPPsym((P)"g2c-test");
  lit_40 = YPPlist(1,YPPsym((P)"x"));
  lit_41 = YPsb((P)"g2c-");
  lit_42 = YPPsym((P)"eval/main");
  T69 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_39),T69,ENVNUL,PNUL,sloc(117));
  T70 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T70);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_43 = YPPsym((P)"g2c-ast");
  lit_44 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  lit_45 = YPsb((P)"exp-%d-%d");
  T77 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T77,ENVNUL,PNUL,sloc(129));
  T76 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T76,ENVNUL,PNUL,sloc(129));
  T75 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T75,ENVNUL,PNUL,sloc(129));
  T74 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T74,ENVNUL,PNUL,sloc(129));
  T73 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T73,ENVNUL,PNUL,sloc(128));
  T72 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T72,ENVNUL,PNUL,sloc(128));
  T71 = YPsig(LITREF(lit_44),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPmet(FUNCODEREF(fun_g2c_ast_28),LITREF(lit_43),T71,ENVNUL,PNUL,sloc(122));
  T80 = BOUNDP(YevalSg2cYg2c_ast);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSg2cYg2c_ast);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_g2c_ast_28;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSg2cYg2c_ast,T78);
  lit_46 = YPPsym((P)"g2c-exp");
  lit_47 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T82 = YPsig(LITREF(lit_47),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPmet(FUNCODEREF(fun_g2c_exp_29),LITREF(lit_46),T82,ENVNUL,PNUL,sloc(134));
  T85 = BOUNDP(YevalSg2cYg2c_exp);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSg2cYg2c_exp);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_g2c_exp_29;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSg2cYg2c_exp,T83);
  lit_48 = YPPsym((P)"compile-load");
  lit_49 = YPPlist(1,YPPsym((P)"name"));
  lit_50 = YPsb((P)".so");
  lit_51 = YPsb((P)".so");
  T87 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPmet(FUNCODEREF(fun_compile_load_30),LITREF(lit_48),T87,ENVNUL,PNUL,sloc(137));
  T90 = BOUNDP(YevalSg2cYcompile_load);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSg2cYcompile_load);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_compile_load_30;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSg2cYcompile_load,T88);
  lit_52 = YPPsym((P)"g2c-eval");
  lit_53 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T92 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_52),T92,ENVNUL,PNUL,sloc(141));
  T95 = BOUNDP(YevalStopYg2c_eval);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalStopYg2c_eval);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_g2c_eval_31;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalStopYg2c_eval,T93);
  lit_54 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T97 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_52),T97,ENVNUL,PNUL,sloc(145));
  T100 = BOUNDP(YevalStopYg2c_eval);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalStopYg2c_eval);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_g2c_eval_32;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalStopYg2c_eval,T98);
  lit_55 = YPsb((P)"g2c");
  T102 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_55),LITREF(lit_42));
  VARSET(YevalSg2cYTg2c_appT,T102);
  lit_56 = YPPsym((P)"g2c-top");
  T103 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_56),T103,ENVNUL,PNUL,sloc(151));
  T106 = BOUNDP(YevalSg2cYg2c_top);
  if (T106 != YPfalse) {
    T105 = VARREF(YevalSg2cYg2c_top);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_g2c_top_33;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YevalSg2cYg2c_top,T104);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_57 = YPPsym((P)"g2c-clean");
  lit_58 = YPsb((P)"g2c");
  T108 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_57),T108,ENVNUL,PNUL,sloc(153));
  T111 = BOUNDP(YevalSg2cYg2c_clean);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSg2cYg2c_clean);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_g2c_clean_34;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSg2cYg2c_clean,T109);
  lit_59 = YPPsym((P)"compute-ast");
  lit_60 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  lit_61 = YPsb((P)"READ");
  lit_62 = YPsb((P)"AST");
  T113 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_59),T113,ENVNUL,PNUL,sloc(159));
  T116 = BOUNDP(YevalSg2cYcompute_ast);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSg2cYcompute_ast);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_compute_ast_35;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSg2cYcompute_ast,T114);
  lit_63 = YPPsym((P)"compute-program");
  lit_64 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_65 = YPsb((P)"BOX");
  lit_66 = YPsb((P)"ANA");
  lit_67 = YPsb((P)"LFT");
  lit_68 = YPsb((P)"EXT");
  lit_69 = YPsb((P)"CLO");
  lit_70 = YPsb((P)"TMP");
  lit_71 = YPsb((P)"REG");
  T118 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_63),T118,ENVNUL,PNUL,sloc(168));
  T121 = BOUNDP(YevalSg2cYcompute_program);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSg2cYcompute_program);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_compute_program_36;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSg2cYcompute_program,T119);
  lit_72 = YPPsym((P)"generate-c-module");
  lit_73 = YPPlist(4,YPPsym((P)"code-out"),YPPsym((P)"e"),YPPsym((P)"prg"),YPPsym((P)"mod"));
  T123 = YPsig(LITREF(lit_73),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_72),T123,ENVNUL,PNUL,sloc(194));
  T126 = BOUNDP(YevalSg2cYgenerate_c_module);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSg2cYgenerate_c_module);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_generate_c_module_37;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSg2cYgenerate_c_module,T124);
  lit_74 = YPPsym((P)"generate-c-application");
  lit_75 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  lit_76 = YPsb((P)"-init");
  T130 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T130,ENVNUL,PNUL,sloc(210));
  T129 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T129,ENVNUL,PNUL,sloc(210));
  T128 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_74),T128,ENVNUL,PNUL,sloc(206));
  T133 = BOUNDP(YevalSg2cYgenerate_c_application);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSg2cYgenerate_c_application);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_generate_c_application_40;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSg2cYgenerate_c_application,T131);
  lit_77 = YPPlist(1,YPPsym((P)"exp"));
  lit_78 = YPPlist(1,YPPsym((P)"return"));
  lit_79 = YPPsym((P)"x-1544");
  lit_80 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_81 = YPPsym((P)"for-mods");
  lit_82 = YPsb((P)"Match Pattern Failure");
  lit_83 = YPPsym((P)"do-module-loader-modules");
  lit_84 = YPPsym((P)"fun");
  lit_85 = Ynil;
  T137 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1544_41 = YPmet(FUNCODEREF(fun_x_1544_41),LITREF(lit_79),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T138 = fun_43;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T138);
  lit_86 = YPPsym((P)"generate-makefile");
  lit_87 = YPPlist(1,YPPsym((P)"loader"));
  lit_88 = YPsb((P)"-init");
  lit_89 = YPsb((P)"Makefile");
  lit_90 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_91 = YPsb((P)"%,$(C_OBJS))\n");
  lit_92 = YPsb((P)": ..");
  lit_93 = YPsb((P)"grt.h\n");
  lit_94 = YPsb((P)"\t$(CC) -I.. ");
  lit_95 = YPPlist(1,YPPsym((P)"mod"));
  lit_96 = YPPlist(1,YPPsym((P)"i"));
  lit_97 = YPsb((P)"-I");
  lit_98 = YPsb((P)" ");
  lit_99 = YPsb((P)"$(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_100 = YPsb((P)"OBJS = \\\n");
  lit_101 = YPPlist(1,YPPsym((P)"mod"));
  lit_102 = YPPsym((P)"put-obj");
  lit_103 = YPPlist(1,YPPsym((P)"name"));
  lit_104 = YPsb((P)"\t");
  lit_105 = YPsb((P)" \\\n");
  lit_106 = YPPlist(1,YPPsym((P)"name"));
  lit_107 = YPPlist(1,YPPsym((P)"n"));
  lit_108 = YPsb((P)"\t");
  lit_109 = YPsb((P)"\n\n");
  lit_110 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_111 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_112 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)");
  lit_113 = YPPlist(1,YPPsym((P)"mod"));
  lit_114 = YPPlist(1,YPPsym((P)"l"));
  lit_115 = YPsb((P)" ");
  lit_116 = YPsb((P)"\n\nclean:\n\trm -f ");
  lit_117 = YPsb((P)" $(OBJS)\n");
  T149 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T149,ENVNUL,PNUL,sloc(230));
  T148 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T148,ENVNUL,PNUL,sloc(229));
  T147 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_46 = YPmet(FUNCODEREF(fun_put_obj_46),LITREF(lit_102),T147,ENVNUL,PNUL,sloc(234));
  T146 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T146,ENVNUL,PNUL,sloc(238));
  T145 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T145,ENVNUL,PNUL,sloc(239));
  T144 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T144,ENVNUL,PNUL,sloc(233));
  T143 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T143,ENVNUL,PNUL,sloc(245));
  T142 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T142,ENVNUL,PNUL,sloc(244));
  T141 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T141,ENVNUL,PNUL,sloc(225));
  T140 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T140,ENVNUL,PNUL,sloc(225));
  T139 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_54 = YPmet(FUNCODEREF(fun_generate_makefile_54),LITREF(lit_86),T139,ENVNUL,PNUL,sloc(219));
  T152 = BOUNDP(YevalSg2cYgenerate_makefile);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSg2cYgenerate_makefile);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_generate_makefile_54;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSg2cYgenerate_makefile,T150);
  lit_118 = YPPsym((P)"pp");
  lit_119 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  T154 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_55 = YPmet(FUNCODEREF(fun_pp_55),LITREF(lit_118),T154,ENVNUL,PNUL,sloc(254));
  T157 = BOUNDP(YevalSg2cYpp);
  if (T157 != YPfalse) {
    T156 = VARREF(YevalSg2cYpp);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_pp_55;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YevalSg2cYpp,T155);
  lit_120 = YPsb((P)"_mod");
  VARSET(YevalSg2cYDnow_mod_var_name,LITREF(lit_120));
  lit_121 = YPPsym((P)"generate-header");
  lit_122 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"modname"));
  lit_123 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_124 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_125 = YPsb((P)"#include \"dlgrt.h\"\n");
  lit_126 = YPsb((P)"\nstatic PSTR ");
  lit_127 = YPsb((P)" = PNUL;\n");
  lit_128 = YPsb((P)"\nstatic P sloc (int line) {\n");
  lit_129 = YPsb((P)"  if (");
  lit_130 = YPsb((P)" == PNUL) ");
  lit_131 = YPsb((P)" = ");
  lit_132 = YPsb((P)";\n");
  lit_133 = YPsb((P)"  return ");
  lit_134 = YPsb((P)"%src-loc");
  lit_135 = YPsb((P)"(");
  lit_136 = YPsb((P)"%ib");
  lit_137 = YPsb((P)"((P)line), ");
  lit_138 = YPsb((P)");\n");
  lit_139 = YPsb((P)"}\n");
  T159 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_56 = YPmet(FUNCODEREF(fun_generate_header_56),LITREF(lit_121),T159,ENVNUL,PNUL,sloc(260));
  T162 = BOUNDP(YevalSg2cYgenerate_header);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSg2cYgenerate_header);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_generate_header_56;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSg2cYgenerate_header,T160);
  lit_140 = YPPsym((P)"generate-trailer");
  lit_141 = YPPlist(1,YPPsym((P)"code-out"));
  lit_142 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T164 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_57 = YPmet(FUNCODEREF(fun_generate_trailer_57),LITREF(lit_140),T164,ENVNUL,PNUL,sloc(275));
  T167 = BOUNDP(YevalSg2cYgenerate_trailer);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSg2cYgenerate_trailer);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_generate_trailer_57;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSg2cYgenerate_trailer,T165);
  lit_143 = YPPsym((P)"generate-global-environment");
  lit_144 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"mod"));
  lit_145 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_146 = YPsb((P)" */\n\n");
  lit_147 = YPPlist(1,YPPsym((P)"binding"));
  T170 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T170,ENVNUL,PNUL,sloc(288));
  T169 = YPsig(LITREF(lit_144),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_59 = YPmet(FUNCODEREF(fun_generate_global_environment_59),LITREF(lit_143),T169,ENVNUL,PNUL,sloc(285));
  T173 = BOUNDP(YevalSg2cYgenerate_global_environment);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSg2cYgenerate_global_environment);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_generate_global_environment_59;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSg2cYgenerate_global_environment,T171);
  lit_148 = YPPsym((P)"generate-global-binding");
  lit_149 = YPPlist(3,YPPsym((P)"code-out"),YPPsym((P)"imported?"),YPPsym((P)"gb"));
  lit_150 = YPPsym((P)"global");
  lit_151 = YPPsym((P)"runtime");
  lit_152 = YPPsym((P)"dynamic");
  lit_153 = YPsb((P)"RTV");
  lit_154 = YPsb((P)"DYN");
  lit_155 = YPsb((P)"");
  lit_156 = YPsb((P)"EXT");
  lit_157 = YPsb((P)"DEF");
  lit_158 = YPsb((P)"(");
  lit_159 = YPsb((P)",\"");
  lit_160 = YPsb((P)"\",\"");
  lit_161 = YPsb((P)"\");\n");
  T175 = YPsig(LITREF(lit_149),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_60 = YPmet(FUNCODEREF(fun_generate_global_binding_60),LITREF(lit_148),T175,ENVNUL,PNUL,sloc(293));
  T178 = BOUNDP(YevalSg2cYgenerate_global_binding);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSg2cYgenerate_global_binding);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_generate_global_binding_60;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSg2cYgenerate_global_binding,T176);
  lit_162 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_162));
  lit_163 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_163));
  lit_164 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_164));
  lit_165 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_165));
  lit_166 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_166));
  lit_167 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_167));
  T180 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T180);
  T183 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  T182 = VARSET(YevalSg2cYDlocal_marker,T183);
  T181 = T182;
  return T181;
}

P YevalSg2cY___main_1___() {
  P x_1578F3716;
  P x_1576F3715;
  P x_1574F3714;
  P x_1572F3713;
  P tableF3712;
  P vecF3711;
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
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
DEFCREGS();
loop:
  T0 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T0);
  T1 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T1);
  T2 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T2);
  T3 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T3);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T4 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T4);
  lit_168 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_169 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_170 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_171 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_172 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_173 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_174 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_175 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_176 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_177 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_178 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_179 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_180 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_181 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_182 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_183 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_184 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_185 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T5 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_168),LITREF(lit_169),LITREF(lit_170),LITREF(lit_171),LITREF(lit_172),LITREF(lit_173),LITREF(lit_174),LITREF(lit_175),LITREF(lit_176),LITREF(lit_177),LITREF(lit_178),LITREF(lit_179),LITREF(lit_180),LITREF(lit_181),LITREF(lit_182),LITREF(lit_183),LITREF(lit_184),LITREF(lit_185));
  VARSET(YevalSg2cYDmangles_data,T5);
  lit_186 = YPPsym((P)"char-buffer-as-string");
  lit_187 = YPPlist(1,YPPsym((P)"buffer"));
  lit_188 = YPPsym((P)"loop");
  lit_189 = YPPlist(1,YPPsym((P)"i"));
  T7 = YPsig(LITREF(lit_189),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_61 = YPmet(FUNCODEREF(fun_loop_61),LITREF(lit_188),T7,ENVNUL,PNUL,sloc(340));
  T6 = YPsig(LITREF(lit_187),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_186),T6,ENVNUL,PNUL,sloc(336));
  T8 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T8);
  lit_190 = YPsb((P)"\\t");
  lit_191 = YPsb((P)"\\f");
  lit_192 = YPsb((P)"\\r");
  lit_193 = YPsb((P)"\\n");
  lit_194 = YPsb((P)"\\\"");
  lit_195 = YPsb((P)"\\\\");
  T11 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T10 = XCALL2(1,VARREF(YgooScolsScolYfill),T11,YPfalse);
  vecF3711 = T10;
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_190),vecF3711,T12);
  T13 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_191),vecF3711,T13);
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_192),vecF3711,T14);
  T15 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_193),vecF3711,T15);
  T16 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_194),vecF3711,T16);
  T17 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_195),vecF3711,T17);
  T18 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3711);
  T9 = T18;
  VARSET(YevalSg2cYDc_escapes,T9);
  lit_196 = YPPsym((P)"mangle-string-literal");
  lit_197 = YPPlist(1,YPPsym((P)"str"));
  lit_198 = YPPlist(1,YPPsym((P)"i"));
  T20 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_63 = YPmet(FUNCODEREF(fun_loop_63),LITREF(lit_188),T20,ENVNUL,PNUL,sloc(360));
  T19 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_64 = YPmet(FUNCODEREF(fun_mangle_string_literal_64),LITREF(lit_196),T19,ENVNUL,PNUL,sloc(357));
  T23 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_mangle_string_literal_64;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYmangle_string_literal,T21);
  lit_199 = YPPlist(1,YPPsym((P)"sym"));
  T25 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_65 = YPmet(FUNCODEREF(fun_mangle_string_literal_65),LITREF(lit_196),T25,ENVNUL,PNUL,sloc(370));
  T28 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_mangle_string_literal_65;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYmangle_string_literal,T26);
  lit_200 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_200));
  lit_201 = YPPsym((P)"mangle-integer");
  lit_202 = YPPlist(1,YPPsym((P)"number"));
  lit_203 = YPPsym((P)"process-integer");
  lit_204 = YPPlist(2,YPPsym((P)"number"),YPPsym((P)"index"));
  T31 = YPsig(LITREF(lit_204),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_66 = YPmet(FUNCODEREF(fun_process_integer_66),LITREF(lit_203),T31,ENVNUL,PNUL,sloc(377));
  T30 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_67 = YPmet(FUNCODEREF(fun_mangle_integer_67),LITREF(lit_201),T30,ENVNUL,PNUL,sloc(375));
  T34 = BOUNDP(YevalSg2cYmangle_integer);
  if (T34 != YPfalse) {
    T33 = VARREF(YevalSg2cYmangle_integer);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_mangle_integer_67;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YevalSg2cYmangle_integer,T32);
  lit_205 = YPPsym((P)"x-1572");
  lit_206 = YPPlist(1,YPPsym((P)"x-1571"));
  lit_207 = YPPsym((P)"x-1574");
  lit_208 = YPPlist(1,YPPsym((P)"x-1573"));
  lit_209 = YPPsym((P)"x-1576");
  lit_210 = YPPlist(1,YPPsym((P)"x-1575"));
  lit_211 = YPPsym((P)"x-1578");
  lit_212 = YPPlist(1,YPPsym((P)"x-1577"));
  T39 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1572_68 = YPmet(FUNCODEREF(fun_x_1572_68),LITREF(lit_205),T39,ENVNUL,PNUL,sloc(391));
  T38 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1574_69 = YPmet(FUNCODEREF(fun_x_1574_69),LITREF(lit_207),T38,ENVNUL,PNUL,sloc(395));
  T37 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1576_70 = YPmet(FUNCODEREF(fun_x_1576_70),LITREF(lit_209),T37,ENVNUL,PNUL,sloc(398));
  T36 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1578_71 = YPmet(FUNCODEREF(fun_x_1578_71),LITREF(lit_211),T36,ENVNUL,PNUL,sloc(400));
  T42 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T41 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T42);
  tableF3712 = T41;
  T43 = FUNSHELL(1,fun_x_1572_68,2);
  x_1572F3713 = T43;
  FUNINIT(x_1572F3713, 2,tableF3712,x_1572F3713);
  T46 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T45 = XCALL1(1,VARREF(YgooScolsScolYenum),T46);
  T44 = XCALL1(0,x_1572F3713,T45);
  T47 = FUNSHELL(1,fun_x_1574_69,2);
  x_1574F3714 = T47;
  FUNINIT(x_1574F3714, 2,tableF3712,x_1574F3714);
  T49 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  T48 = XCALL1(0,x_1574F3714,T49);
  T50 = FUNSHELL(1,fun_x_1576_70,2);
  x_1576F3715 = T50;
  FUNINIT(x_1576F3715, 2,tableF3712,x_1576F3715);
  T54 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T55 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T53 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T54,VARREF(YgooSmagYLE),T55);
  T52 = XCALL1(1,VARREF(YgooScolsScolYenum),T53);
  T51 = XCALL1(0,x_1576F3715,T52);
  T56 = FUNSHELL(1,fun_x_1578_71,2);
  x_1578F3716 = T56;
  FUNINIT(x_1578F3716, 2,tableF3712,x_1578F3716);
  T60 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T61 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T59 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T60,VARREF(YgooSmagYLE),T61);
  T58 = XCALL1(1,VARREF(YgooScolsScolYenum),T59);
  T57 = XCALL1(0,x_1578F3716,T58);
  T40 = tableF3712;
  VARSET(YevalSg2cYDname_mangler_table,T40);
  lit_213 = YPPsym((P)"mangler-reset");
  lit_214 = YPPlist(1,YPPsym((P)"buffer"));
  T62 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_213),T62,ENVNUL,PNUL,sloc(406));
  T63 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T63);
  lit_215 = YPPsym((P)"mangle-name-into");
  lit_216 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  lit_217 = YPPsym((P)"x-1580");
  lit_218 = YPPlist(1,YPPsym((P)"x-1579"));
  T65 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1580_73 = YPmet(FUNCODEREF(fun_x_1580_73),LITREF(lit_217),T65,ENVNUL,PNUL,sloc(410));
  T64 = YPsig(LITREF(lit_216),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_215),T64,ENVNUL,PNUL,sloc(409));
  T66 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T66);
  lit_219 = YPPsym((P)"mangle-raw-name");
  lit_220 = YPPlist(1,YPPsym((P)"name"));
  T67 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_75 = YPmet(FUNCODEREF(fun_mangle_raw_name_75),LITREF(lit_219),T67,ENVNUL,PNUL,sloc(414));
  T70 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T70 != YPfalse) {
    T69 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_mangle_raw_name_75;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YevalSg2cYmangle_raw_name,T68);
  lit_221 = YPPlist(1,YPPsym((P)"name"));
  T72 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_76 = YPmet(FUNCODEREF(fun_mangle_raw_name_76),LITREF(lit_219),T72,ENVNUL,PNUL,sloc(419));
  T75 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T75 != YPfalse) {
    T74 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_mangle_raw_name_76;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YevalSg2cYmangle_raw_name,T73);
  lit_222 = YPPsym((P)"mangle-local-name");
  lit_223 = YPPlist(1,YPPsym((P)"name"));
  T77 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_77 = YPmet(FUNCODEREF(fun_mangle_local_name_77),LITREF(lit_222),T77,ENVNUL,PNUL,sloc(422));
  T80 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_mangle_local_name_77;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSg2cYmangle_local_name,T78);
  lit_224 = YPPlist(1,YPPsym((P)"name"));
  T82 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_78 = YPmet(FUNCODEREF(fun_mangle_local_name_78),LITREF(lit_222),T82,ENVNUL,PNUL,sloc(428));
  T85 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_mangle_local_name_78;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSg2cYmangle_local_name,T83);
  lit_225 = YPPlist(1,YPPsym((P)"exp"));
  lit_226 = YPPlist(1,YPPsym((P)"return"));
  lit_227 = YPPsym((P)"x-1584");
  lit_228 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_229 = YPPsym((P)"or/set");
  lit_230 = YPPsym((P)"or");
  lit_231 = YPPsym((P)"set");
  T89 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1584_79 = YPmet(FUNCODEREF(fun_x_1584_79),LITREF(lit_227),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T90 = fun_81;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"or/set"),T90);
  lit_232 = YPPsym((P)"buf-cat2!");
  lit_233 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  lit_234 = YPPlist(1,YPPsym((P)"i"));
  T92 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_82 = YPmet(FUNCODEREF(fun_loop_82),LITREF(lit_188),T92,ENVNUL,PNUL,sloc(439));
  T91 = YPsig(LITREF(lit_233),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_232),T91,ENVNUL,PNUL,sloc(437));
  T93 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T93);
  lit_235 = YPPsym((P)"mangle-module-into");
  lit_236 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T94 = YPsig(LITREF(lit_236),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_84 = YPmet(FUNCODEREF(fun_mangle_module_into_84),LITREF(lit_235),T94,ENVNUL,PNUL,sloc(444));
  T97 = BOUNDP(YevalSg2cYmangle_module_into);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSg2cYmangle_module_into);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_mangle_module_into_84;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSg2cYmangle_module_into,T95);
  lit_237 = YPPsym((P)"mangle-global-name");
  lit_238 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T99 = YPsig(LITREF(lit_238),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_85 = YPmet(FUNCODEREF(fun_mangle_global_name_85),LITREF(lit_237),T99,ENVNUL,PNUL,sloc(451));
  T102 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_mangle_global_name_85;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSg2cYmangle_global_name,T100);
  lit_239 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T104 = YPsig(LITREF(lit_239),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_86 = YPmet(FUNCODEREF(fun_mangle_global_name_86),LITREF(lit_237),T104,ENVNUL,PNUL,sloc(462));
  T107 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T107 != YPfalse) {
    T106 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_mangle_global_name_86;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YevalSg2cYmangle_global_name,T105);
  lit_240 = YPPsym((P)"mangle-boot-name");
  lit_241 = YPPlist(1,YPPsym((P)"name"));
  T109 = YPsig(LITREF(lit_241),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_240),T109,ENVNUL,PNUL,sloc(467));
  T110 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T110);
  lit_242 = YPPsym((P)"mangle-quotation-name");
  lit_243 = YPPlist(1,YPPsym((P)"name"));
  lit_244 = YPsb((P)"lit_");
  T111 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_242),T111,ENVNUL,PNUL,sloc(470));
  T112 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T112);
  lit_245 = YPPsym((P)"mangle-binding");
  lit_246 = YPPlist(1,YPPsym((P)"binding"));
  lit_247 = YPPsym((P)"quotation");
  T113 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_89 = YPmet(FUNCODEREF(fun_mangle_binding_89),LITREF(lit_245),T113,ENVNUL,PNUL,sloc(476));
  T116 = BOUNDP(YevalSg2cYmangle_binding);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_mangle_binding_89;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSg2cYmangle_binding,T114);
  lit_248 = YPPsym((P)"mangle-local-marked-name");
  lit_249 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T118 = YPsig(LITREF(lit_249),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_248),T118,ENVNUL,PNUL,sloc(482));
  T119 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T119);
  lit_250 = YPPlist(1,YPPsym((P)"binding"));
  T120 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_91 = YPmet(FUNCODEREF(fun_mangle_binding_91),LITREF(lit_245),T120,ENVNUL,PNUL,sloc(489));
  T123 = BOUNDP(YevalSg2cYmangle_binding);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_mangle_binding_91;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSg2cYmangle_binding,T121);
  lit_251 = YPPlist(1,YPPsym((P)"binding"));
  T125 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_92 = YPmet(FUNCODEREF(fun_mangle_binding_92),LITREF(lit_245),T125,ENVNUL,PNUL,sloc(493));
  T128 = BOUNDP(YevalSg2cYmangle_binding);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_mangle_binding_92;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSg2cYmangle_binding,T126);
  lit_252 = YPPlist(1,YPPsym((P)"exp"));
  lit_253 = YPPlist(1,YPPsym((P)"return"));
  lit_254 = YPPsym((P)"x-1588");
  lit_255 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_256 = YPPsym((P)"for-commas");
  lit_257 = YPPsym((P)"let");
  lit_258 = YPPsym((P)"for");
  lit_259 = YPPsym((P)"first?");
  lit_260 = YPPsym((P)"first-then");
  lit_261 = YPPsym((P)"op");
  lit_262 = YPPsym((P)"unless");
  lit_263 = YPPsym((P)"put");
  T132 = YPsig(LITREF(lit_255),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1588_93 = YPmet(FUNCODEREF(fun_x_1588_93),LITREF(lit_254),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(LITREF(lit_252),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T133 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T133);
  lit_264 = YPPlist(1,YPPsym((P)"exp"));
  lit_265 = YPPlist(1,YPPsym((P)"return"));
  lit_266 = YPPsym((P)"x-1592");
  lit_267 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_268 = YPPsym((P)"between-parentheses");
  T136 = YPsig(LITREF(lit_267),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1592_96 = YPmet(FUNCODEREF(fun_x_1592_96),LITREF(lit_266),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_98;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T137);
  lit_269 = YPPlist(1,YPPsym((P)"exp"));
  lit_270 = YPPlist(1,YPPsym((P)"return"));
  lit_271 = YPPsym((P)"x-1596");
  lit_272 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_273 = YPPsym((P)"between-parentheses-comma-separated");
  lit_274 = YPPlist(3,YPPsym((P)"forms"),YPPsym((P)"body"),YPPsym((P)"first?"));
  T141 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1596_99 = YPmet(FUNCODEREF(fun_x_1596_99),LITREF(lit_271),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(LITREF(lit_274),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_100 = YPmet(FUNCODEREF(fun_loop_100),LITREF(lit_188),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_269),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T142 = fun_102;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T142);
  lit_275 = YPPsym((P)"gen-result");
  lit_276 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_277 = YPsb((P)"T");
  lit_278 = YPsb((P)" = ");
  T143 = YPsig(LITREF(lit_276),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_103 = YPmet(FUNCODEREF(fun_gen_result_103),LITREF(lit_275),T143,ENVNUL,PNUL,sloc(525));
  T146 = BOUNDP(YevalSg2cYgen_result);
  if (T146 != YPfalse) {
    T145 = VARREF(YevalSg2cYgen_result);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_gen_result_103;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YevalSg2cYgen_result,T144);
  lit_279 = YPPsym((P)"gen-depth");
  lit_280 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_281 = YPPsym((P)"x-1599");
  lit_282 = YPPlist(1,YPPsym((P)"x-1598"));
  lit_283 = YPsb((P)"  ");
  T149 = YPsig(LITREF(lit_282),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1599_104 = YPmet(FUNCODEREF(fun_x_1599_104),LITREF(lit_281),T149,ENVNUL,PNUL,sloc(530));
  T148 = YPsig(LITREF(lit_280),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_105 = YPmet(FUNCODEREF(fun_gen_depth_105),LITREF(lit_279),T148,ENVNUL,PNUL,sloc(529));
  T152 = BOUNDP(YevalSg2cYgen_depth);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSg2cYgen_depth);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_gen_depth_105;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSg2cYgen_depth,T150);
  lit_284 = YPPlist(1,YPPsym((P)"exp"));
  lit_285 = YPPlist(1,YPPsym((P)"return"));
  lit_286 = YPPsym((P)"x-1603");
  lit_287 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_288 = YPPsym((P)"with-statement");
  lit_289 = YPPsym((P)"seq");
  lit_290 = YPPsym((P)"puts");
  lit_291 = YPsb((P)";\n");
  T156 = YPsig(LITREF(lit_287),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1603_106 = YPmet(FUNCODEREF(fun_x_1603_106),LITREF(lit_286),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_285),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_284),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T157 = fun_108;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T157);
  lit_292 = YPPlist(1,YPPsym((P)"exp"));
  lit_293 = YPPlist(1,YPPsym((P)"return"));
  lit_294 = YPPsym((P)"x-1607");
  lit_295 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_296 = YPPsym((P)"with-expression");
  T160 = YPsig(LITREF(lit_295),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1607_109 = YPmet(FUNCODEREF(fun_x_1607_109),LITREF(lit_294),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_293),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_292),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T161 = fun_111;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T161);
  lit_297 = YPPlist(1,YPPsym((P)"exp"));
  lit_298 = YPPlist(1,YPPsym((P)"return"));
  lit_299 = YPPsym((P)"x-1611");
  lit_300 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_301 = YPPsym((P)"with-used-expression");
  lit_302 = YPPsym((P)"when");
  lit_303 = YPPsym((P)"program-register");
  T164 = YPsig(LITREF(lit_300),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1611_112 = YPmet(FUNCODEREF(fun_x_1611_112),LITREF(lit_299),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_298),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_297),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T165 = fun_114;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T165);
  lit_304 = YPPsym((P)"generate-quotation-forwards");
  lit_305 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb*"));
  lit_306 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_307 = YPPsym((P)"x-1613");
  lit_308 = YPPlist(1,YPPsym((P)"x-1612"));
  lit_309 = YPsb((P)"DEFLIT(lit_");
  lit_310 = YPsb((P)");\n");
  T167 = YPsig(LITREF(lit_308),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1613_115 = YPmet(FUNCODEREF(fun_x_1613_115),LITREF(lit_307),T167,ENVNUL,PNUL,sloc(551));
  T166 = YPsig(LITREF(lit_305),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_116 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_116),LITREF(lit_304),T166,ENVNUL,PNUL,sloc(549));
  T170 = BOUNDP(YevalSg2cYgenerate_quotation_forwards);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYgenerate_quotation_forwards);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_generate_quotation_forwards_116;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T168);
  lit_311 = YPPsym((P)"generate-quotations");
  lit_312 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb*"));
  lit_313 = YPPsym((P)"x-1616");
  lit_314 = YPPlist(1,YPPsym((P)"x-1615"));
  lit_315 = YPsb((P)"lit_");
  lit_316 = YPsb((P)" = ");
  T173 = YPsig(LITREF(lit_314),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1616_117 = YPmet(FUNCODEREF(fun_x_1616_117),LITREF(lit_313),T173,ENVNUL,PNUL,sloc(555));
  T172 = YPsig(LITREF(lit_312),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_118 = YPmet(FUNCODEREF(fun_generate_quotations_118),LITREF(lit_311),T172,ENVNUL,PNUL,sloc(554));
  T176 = BOUNDP(YevalSg2cYgenerate_quotations);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSg2cYgenerate_quotations);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_generate_quotations_118;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSg2cYgenerate_quotations,T174);
  lit_317 = YPPsym((P)"false-name");
  lit_318 = YPsb((P)"%false");
  T178 = YPsig(LITREF(lit_24),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_119 = YPmet(FUNCODEREF(fun_false_name_119),LITREF(lit_317),T178,ENVNUL,PNUL,sloc(560));
  T181 = BOUNDP(YevalSg2cYfalse_name);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSg2cYfalse_name);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_false_name_119;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSg2cYfalse_name,T179);
  lit_319 = YPPsym((P)"generate-quotation");
  lit_320 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb"));
  lit_321 = YPsb((P)"%true");
  lit_322 = YPsb((P)"%false");
  T183 = YPsig(LITREF(lit_320),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_120 = YPmet(FUNCODEREF(fun_generate_quotation_120),LITREF(lit_319),T183,ENVNUL,PNUL,sloc(563));
  T186 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_generate_quotation_120;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalSg2cYgenerate_quotation,T184);
  lit_323 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb"));
  lit_324 = YPsb((P)"nil");
  T189 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T188 = YPsig(LITREF(lit_323),YPPlist(2,VARREF(YLanyG),T189),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_121 = YPmet(FUNCODEREF(fun_generate_quotation_121),LITREF(lit_319),T188,ENVNUL,PNUL,sloc(566));
  T192 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_generate_quotation_121;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSg2cYgenerate_quotation,T190);
  lit_325 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"qb"));
  lit_326 = YPPlist(1,YPPsym((P)"x"));
  T195 = YPsig(LITREF(lit_326),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T195,ENVNUL,PNUL,sloc(570));
  T194 = YPsig(LITREF(lit_325),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_123 = YPmet(FUNCODEREF(fun_generate_quotation_123),LITREF(lit_319),T194,ENVNUL,PNUL,sloc(569));
  T198 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T198 != YPfalse) {
    T197 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_generate_quotation_123;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YevalSg2cYgenerate_quotation,T196);
  lit_327 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_328 = YPsb((P)"%int");
  lit_329 = YPsb((P)"((P)");
  lit_330 = YPsb((P)")");
  T200 = YPsig(LITREF(lit_327),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_124 = YPmet(FUNCODEREF(fun_generate_quotation_124),LITREF(lit_319),T200,ENVNUL,PNUL,sloc(572));
  T203 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T203 != YPfalse) {
    T202 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_generate_quotation_124;
  T201 = XCALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YevalSg2cYgenerate_quotation,T201);
  lit_331 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_332 = YPsb((P)"%chr");
  lit_333 = YPsb((P)"((P)");
  lit_334 = YPsb((P)")");
  T205 = YPsig(LITREF(lit_331),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_125 = YPmet(FUNCODEREF(fun_generate_quotation_125),LITREF(lit_319),T205,ENVNUL,PNUL,sloc(575));
  T208 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T208 != YPfalse) {
    T207 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_generate_quotation_125;
  T206 = XCALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YevalSg2cYgenerate_quotation,T206);
  lit_335 = YPPsym((P)"float-to-c-string");
  lit_336 = YPPlist(1,YPPsym((P)"o"));
  lit_337 = YPPlist(1,YPPsym((P)"done"));
  lit_338 = YPPlist(1,YPPsym((P)"i"));
  T212 = YPsig(LITREF(lit_338),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_126 = YPmet(FUNCODEREF(fun_loop_126),LITREF(lit_188),T212,ENVNUL,PNUL,sloc(582));
  T211 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T211,ENVNUL,PNUL,sloc(581));
  T210 = YPsig(LITREF(lit_336),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_128 = YPmet(FUNCODEREF(fun_float_to_c_string_128),LITREF(lit_335),T210,ENVNUL,PNUL,sloc(578));
  T215 = BOUNDP(YevalSg2cYfloat_to_c_string);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSg2cYfloat_to_c_string);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_float_to_c_string_128;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSg2cYfloat_to_c_string,T213);
  lit_339 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_340 = YPsb((P)"%flo");
  lit_341 = YPsb((P)"(FLOINT(");
  lit_342 = YPsb((P)"))");
  T217 = YPsig(LITREF(lit_339),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_129 = YPmet(FUNCODEREF(fun_generate_quotation_129),LITREF(lit_319),T217,ENVNUL,PNUL,sloc(593));
  T220 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_generate_quotation_129;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSg2cYgenerate_quotation,T218);
  lit_343 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_344 = YPsb((P)"%sb");
  lit_345 = YPsb((P)"((P)\"");
  lit_346 = YPsb((P)"\")");
  T222 = YPsig(LITREF(lit_343),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_130 = YPmet(FUNCODEREF(fun_generate_quotation_130),LITREF(lit_319),T222,ENVNUL,PNUL,sloc(597));
  T225 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_generate_quotation_130;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSg2cYgenerate_quotation,T223);
  lit_347 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_348 = YPsb((P)"XCALLN(1, ");
  lit_349 = YPsb((P)"vec");
  lit_350 = YPsb((P)", ");
  lit_351 = YPPsym((P)"x-1626");
  lit_352 = YPPlist(1,YPPsym((P)"x-1625"));
  lit_353 = YPsb((P)", ");
  lit_354 = YPsb((P)")");
  T228 = YPsig(LITREF(lit_352),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1626_131 = YPmet(FUNCODEREF(fun_x_1626_131),LITREF(lit_351),T228,ENVNUL,PNUL,sloc(604));
  T227 = YPsig(LITREF(lit_347),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_132 = YPmet(FUNCODEREF(fun_generate_quotation_132),LITREF(lit_319),T227,ENVNUL,PNUL,sloc(601));
  T231 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T231 != YPfalse) {
    T230 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_generate_quotation_132;
  T229 = XCALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YevalSg2cYgenerate_quotation,T229);
  lit_355 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_356 = YPsb((P)"XCALLN(1, ");
  lit_357 = YPsb((P)"tup");
  lit_358 = YPsb((P)", ");
  lit_359 = YPPsym((P)"x-1629");
  lit_360 = YPPlist(1,YPPsym((P)"x-1628"));
  lit_361 = YPsb((P)", ");
  lit_362 = YPsb((P)")");
  T234 = YPsig(LITREF(lit_360),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1629_133 = YPmet(FUNCODEREF(fun_x_1629_133),LITREF(lit_359),T234,ENVNUL,PNUL,sloc(612));
  T233 = YPsig(LITREF(lit_355),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_134 = YPmet(FUNCODEREF(fun_generate_quotation_134),LITREF(lit_319),T233,ENVNUL,PNUL,sloc(609));
  T237 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T237 != YPfalse) {
    T236 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_generate_quotation_134;
  T235 = XCALL2(1,VARREF(YPdefine_method),T236,T238);
  VARSET(YevalSg2cYgenerate_quotation,T235);
  lit_363 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"x"));
  lit_364 = YPsb((P)"%%sym");
  lit_365 = YPsb((P)"((P)\"");
  lit_366 = YPsb((P)"\")");
  T239 = YPsig(LITREF(lit_363),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_135 = YPmet(FUNCODEREF(fun_generate_quotation_135),LITREF(lit_319),T239,ENVNUL,PNUL,sloc(617));
  T242 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T242 != YPfalse) {
    T241 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_generate_quotation_135;
  T240 = XCALL2(1,VARREF(YPdefine_method),T241,T243);
  VARSET(YevalSg2cYgenerate_quotation,T240);
  lit_367 = YPPsym((P)"binding->c");
  lit_368 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"code-out"));
  T244 = YPsig(LITREF(lit_368),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_367),T244,ENVNUL,PNUL,sloc(626));
  T245 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T245);
  lit_369 = YPPsym((P)"reference->c");
  lit_370 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"code-out"));
  T247 = YPsig(LITREF(lit_370),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T246 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_369),T247,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T246);
  lit_371 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"code-out"));
  T248 = YPsig(LITREF(lit_371),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_137 = YPmet(FUNCODEREF(fun_reference_Gc_137),LITREF(lit_369),T248,ENVNUL,PNUL,sloc(648));
  T251 = BOUNDP(YevalSg2cYreference_Gc);
  if (T251 != YPfalse) {
    T250 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_reference_Gc_137;
  T249 = XCALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YevalSg2cYreference_Gc,T249);
  lit_372 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"code-out"));
  lit_373 = YPsb((P)"LITREF");
  lit_374 = YPsb((P)"RTVREF");
  lit_375 = YPsb((P)"DYNREF");
  lit_376 = YPsb((P)"VARREF");
  T253 = YPsig(LITREF(lit_372),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_138 = YPmet(FUNCODEREF(fun_reference_Gc_138),LITREF(lit_369),T253,ENVNUL,PNUL,sloc(651));
  T256 = BOUNDP(YevalSg2cYreference_Gc);
  if (T256 != YPfalse) {
    T255 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_reference_Gc_138;
  T254 = XCALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YevalSg2cYreference_Gc,T254);
  lit_377 = YPPsym((P)"to-c");
  lit_378 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  T259 = YPsig(LITREF(lit_378),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T258 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_377),T259,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T258);
  lit_379 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  T260 = YPsig(LITREF(lit_379),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPmet(FUNCODEREF(fun_to_c_139),LITREF(lit_377),T260,ENVNUL,PNUL,sloc(663));
  T263 = BOUNDP(YevalSg2cYto_c);
  if (T263 != YPfalse) {
    T262 = VARREF(YevalSg2cYto_c);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_to_c_139;
  T261 = XCALL2(1,VARREF(YPdefine_method),T262,T264);
  VARSET(YevalSg2cYto_c,T261);
  lit_380 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  T265 = YPsig(LITREF(lit_380),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_377),T265,ENVNUL,PNUL,sloc(669));
  T268 = BOUNDP(YevalSg2cYto_c);
  if (T268 != YPfalse) {
    T267 = VARREF(YevalSg2cYto_c);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_to_c_140;
  T266 = XCALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(YevalSg2cYto_c,T266);
  lit_381 = YPPsym((P)"gen-ref");
  lit_382 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  T270 = YPsig(LITREF(lit_382),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_141 = YPmet(FUNCODEREF(fun_gen_ref_141),LITREF(lit_381),T270,ENVNUL,PNUL,sloc(671));
  T273 = BOUNDP(YevalSg2cYgen_ref);
  if (T273 != YPfalse) {
    T272 = VARREF(YevalSg2cYgen_ref);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_gen_ref_141;
  T271 = XCALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(YevalSg2cYgen_ref,T271);
  lit_383 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  lit_384 = YPsb((P)"FREEREF");
  T275 = YPsig(LITREF(lit_383),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_142 = YPmet(FUNCODEREF(fun_gen_ref_142),LITREF(lit_381),T275,ENVNUL,PNUL,sloc(674));
  T278 = BOUNDP(YevalSg2cYgen_ref);
  if (T278 != YPfalse) {
    T277 = VARREF(YevalSg2cYgen_ref);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_gen_ref_142;
  T276 = XCALL2(1,VARREF(YPdefine_method),T277,T279);
  VARSET(YevalSg2cYgen_ref,T276);
  lit_385 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  lit_386 = YPsb((P)"T");
  lit_387 = YPsb((P)"T_1");
  T282 = YPsig(LITREF(lit_385),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T281 = fun_gen_ref_143 = YPmet(FUNCODEREF(fun_gen_ref_143),LITREF(lit_381),T282,ENVNUL,PNUL,sloc(679));
  T286 = BOUNDP(YevalSg2cYgen_ref);
  if (T286 != YPfalse) {
    T285 = VARREF(YevalSg2cYgen_ref);
  } else {
    T285 = YPfalse;
  }
  T287 = fun_gen_ref_143;
  T284 = XCALL2(1,VARREF(YPdefine_method),T285,T287);
  T283 = VARSET(YevalSg2cYgen_ref,T284);
  T280 = T283;
  return T280;
}

P YevalSg2cY___main_2___() {
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
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
  P T288,T289,T290,T291,T292,T293,T294,T295,T296,T297,T298,T299,T300,T301,T302,T303;
DEFCREGS();
loop:
  lit_388 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  lit_389 = YPsb((P)"(P)");
  T0 = YPsig(LITREF(lit_388),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_144 = YPmet(FUNCODEREF(fun_gen_ref_144),LITREF(lit_381),T0,ENVNUL,PNUL,sloc(683));
  T3 = BOUNDP(YevalSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_144;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_390 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  T5 = YPsig(LITREF(lit_390),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_145 = YPmet(FUNCODEREF(fun_gen_ref_145),LITREF(lit_381),T5,ENVNUL,PNUL,sloc(686));
  T8 = BOUNDP(YevalSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_145;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSg2cYgen_ref,T6);
  lit_391 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"code-out"));
  T10 = YPsig(LITREF(lit_391),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_146 = YPmet(FUNCODEREF(fun_gen_ref_146),LITREF(lit_381),T10,ENVNUL,PNUL,sloc(689));
  T13 = BOUNDP(YevalSg2cYgen_ref);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSg2cYgen_ref);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_gen_ref_146;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSg2cYgen_ref,T11);
  lit_392 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_393 = YPsb((P)"RTVSET(");
  lit_394 = YPsb((P)"DYNDEFSET(");
  lit_395 = YPsb((P)"DYNSET(");
  lit_396 = YPsb((P)"VARSET(");
  lit_397 = YPsb((P)",");
  lit_398 = YPsb((P)")");
  T15 = YPsig(LITREF(lit_392),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_377),T15,ENVNUL,PNUL,sloc(692));
  T18 = BOUNDP(YevalSg2cYto_c);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSg2cYto_c);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_to_c_147;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSg2cYto_c,T16);
  lit_399 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_400 = YPsb((P)"RTV");
  lit_401 = YPsb((P)"BOUNDP");
  T20 = YPsig(LITREF(lit_399),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_148 = YPmet(FUNCODEREF(fun_to_c_148),LITREF(lit_377),T20,ENVNUL,PNUL,sloc(706));
  T23 = BOUNDP(YevalSg2cYto_c);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYto_c);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_to_c_148;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYto_c,T21);
  lit_402 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_403 = YPsb((P)"BOXVAL");
  T25 = YPsig(LITREF(lit_402),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPmet(FUNCODEREF(fun_to_c_149),LITREF(lit_377),T25,ENVNUL,PNUL,sloc(715));
  T28 = BOUNDP(YevalSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_149;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYto_c,T26);
  lit_404 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_405 = YPsb((P)"BOXVAL");
  lit_406 = YPsb((P)" = ");
  T30 = YPsig(LITREF(lit_404),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_377),T30,ENVNUL,PNUL,sloc(722));
  T33 = BOUNDP(YevalSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_150;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSg2cYto_c,T31);
  lit_407 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_408 = YPsb((P)" = BOXFAB");
  T35 = YPsig(LITREF(lit_407),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPmet(FUNCODEREF(fun_to_c_151),LITREF(lit_377),T35,ENVNUL,PNUL,sloc(730));
  T38 = BOUNDP(YevalSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_151;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSg2cYto_c,T36);
  lit_409 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_410 = YPsb((P)"if (");
  lit_411 = YPsb((P)" != ");
  lit_412 = YPsb((P)") {\n");
  lit_413 = YPsb((P)"} else {\n");
  lit_414 = YPsb((P)"}\n");
  T40 = YPsig(LITREF(lit_409),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPmet(FUNCODEREF(fun_to_c_152),LITREF(lit_377),T40,ENVNUL,PNUL,sloc(737));
  T43 = BOUNDP(YevalSg2cYto_c);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSg2cYto_c);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_to_c_152;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSg2cYto_c,T41);
  lit_415 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_416 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPsig(LITREF(lit_416),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T46,ENVNUL,PNUL,sloc(752));
  T45 = YPsig(LITREF(lit_415),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_377),T45,ENVNUL,PNUL,sloc(751));
  T49 = BOUNDP(YevalSg2cYto_c);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSg2cYto_c);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_to_c_154;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSg2cYto_c,T47);
  lit_417 = YPPsym((P)"generate-self-recursive-call");
  lit_418 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_419 = YPPsym((P)"x-1646");
  lit_420 = YPPlist(1,YPPsym((P)"x-1645"));
  lit_421 = YPPsym((P)"x-1649");
  lit_422 = YPPlist(2,YPPsym((P)"x-1648"),YPPsym((P)"x-1647"));
  lit_423 = YPsb((P)"a");
  lit_424 = YPsb((P)" = ");
  lit_425 = YPPsym((P)"x-1653");
  lit_426 = YPPlist(2,YPPsym((P)"x-1652"),YPPsym((P)"x-1651"));
  lit_427 = YPsb((P)" = a");
  lit_428 = YPsb((P)"goto loop");
  T54 = YPsig(LITREF(lit_420),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1646_155 = YPmet(FUNCODEREF(fun_x_1646_155),LITREF(lit_419),T54,ENVNUL,PNUL,sloc(755));
  T53 = YPsig(LITREF(lit_422),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1649_156 = YPmet(FUNCODEREF(fun_x_1649_156),LITREF(lit_421),T53,ENVNUL,PNUL,sloc(757));
  T52 = YPsig(LITREF(lit_426),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1653_157 = YPmet(FUNCODEREF(fun_x_1653_157),LITREF(lit_425),T52,ENVNUL,PNUL,sloc(761));
  T51 = YPsig(LITREF(lit_418),YPPlist(4,VARREF(YevalSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_158 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_158),LITREF(lit_417),T51,ENVNUL,PNUL,sloc(754));
  T57 = BOUNDP(YevalSg2cYgenerate_self_recursive_call);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSg2cYgenerate_self_recursive_call);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_generate_self_recursive_call_158;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSg2cYgenerate_self_recursive_call,T55);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_429 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_430 = YPPsym((P)"x-1656");
  lit_431 = YPPlist(1,YPPsym((P)"x-1655"));
  lit_432 = YPsb((P)"X");
  lit_433 = YPsb((P)"CALL");
  lit_434 = YPsb((P)"N");
  lit_435 = YPsb((P)"0,");
  lit_436 = YPsb((P)"1,");
  lit_437 = YPsb((P)",");
  lit_438 = YPPsym((P)"x-1661");
  lit_439 = YPPlist(1,YPPsym((P)"x-1660"));
  T61 = YPsig(LITREF(lit_431),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1656_159 = YPmet(FUNCODEREF(fun_x_1656_159),LITREF(lit_430),T61,ENVNUL,PNUL,sloc(780));
  T60 = YPsig(LITREF(lit_439),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1661_160 = YPmet(FUNCODEREF(fun_x_1661_160),LITREF(lit_438),T60,ENVNUL,PNUL,sloc(790));
  T59 = YPsig(LITREF(lit_429),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_161 = YPmet(FUNCODEREF(fun_to_c_161),LITREF(lit_377),T59,ENVNUL,PNUL,sloc(770));
  T64 = BOUNDP(YevalSg2cYto_c);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSg2cYto_c);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_to_c_161;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSg2cYto_c,T62);
  lit_440 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_441 = YPPsym((P)"x-1665");
  lit_442 = YPPlist(2,YPPsym((P)"x-1664"),YPPsym((P)"x-1663"));
  lit_443 = YPPlist(1,YPPsym((P)"x"));
  lit_444 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_442),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1665_162 = YPmet(FUNCODEREF(fun_x_1665_162),LITREF(lit_441),T69,ENVNUL,PNUL,sloc(794));
  T68 = YPsig(LITREF(lit_443),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_163 = YPmet(FUNCODEREF(fun_163),YPfalse,T68,ENVNUL,PNUL,sloc(794));
  T67 = YPsig(LITREF(lit_444),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T67,ENVNUL,PNUL,sloc(794));
  T66 = YPsig(LITREF(lit_440),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPmet(FUNCODEREF(fun_to_c_165),LITREF(lit_377),T66,ENVNUL,PNUL,sloc(793));
  T72 = BOUNDP(YevalSg2cYto_c);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSg2cYto_c);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_to_c_165;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSg2cYto_c,T70);
  lit_445 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_446 = YPPsym((P)"x-1669");
  lit_447 = YPPlist(3,YPPsym((P)"x-1668"),YPPsym((P)"x-1667"),YPPsym((P)"x-1666"));
  lit_448 = YPsb((P)"check_type");
  lit_449 = YPsb((P)" = ");
  T75 = YPsig(LITREF(lit_447),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1669_166 = YPmet(FUNCODEREF(fun_x_1669_166),LITREF(lit_446),T75,ENVNUL,PNUL,sloc(799));
  T74 = YPsig(LITREF(lit_445),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_167 = YPmet(FUNCODEREF(fun_to_c_167),LITREF(lit_377),T74,ENVNUL,PNUL,sloc(797));
  T78 = BOUNDP(YevalSg2cYto_c);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSg2cYto_c);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_to_c_167;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSg2cYto_c,T76);
  lit_450 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_451 = YPPsym((P)"x-1673");
  lit_452 = YPPlist(2,YPPsym((P)"x-1672"),YPPsym((P)"x-1671"));
  lit_453 = YPsb((P)" = ");
  T81 = YPsig(LITREF(lit_452),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1673_168 = YPmet(FUNCODEREF(fun_x_1673_168),LITREF(lit_451),T81,ENVNUL,PNUL,sloc(816));
  T80 = YPsig(LITREF(lit_450),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPmet(FUNCODEREF(fun_to_c_169),LITREF(lit_377),T80,ENVNUL,PNUL,sloc(815));
  T84 = BOUNDP(YevalSg2cYto_c);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSg2cYto_c);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_to_c_169;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSg2cYto_c,T82);
  lit_454 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_455 = YPsb((P)"with_exit");
  T86 = YPsig(LITREF(lit_454),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPmet(FUNCODEREF(fun_to_c_170),LITREF(lit_377),T86,ENVNUL,PNUL,sloc(826));
  T89 = BOUNDP(YevalSg2cYto_c);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSg2cYto_c);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_to_c_170;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSg2cYto_c,T87);
  lit_456 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_457 = YPsb((P)"with_cleanup");
  T91 = YPsig(LITREF(lit_456),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_171 = YPmet(FUNCODEREF(fun_to_c_171),LITREF(lit_377),T91,ENVNUL,PNUL,sloc(832));
  T94 = BOUNDP(YevalSg2cYto_c);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSg2cYto_c);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_to_c_171;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSg2cYto_c,T92);
  lit_458 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_459 = YPsb((P)"XCALLN");
  lit_460 = YPsb((P)"1");
  lit_461 = YPsb((P)"%with-monitor");
  lit_462 = YPsb((P)"5");
  T96 = YPsig(LITREF(lit_458),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_172 = YPmet(FUNCODEREF(fun_to_c_172),LITREF(lit_377),T96,ENVNUL,PNUL,sloc(841));
  T99 = BOUNDP(YevalSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_172;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYto_c,T97);
  lit_463 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_464 = YPPsym((P)"x-1678");
  lit_465 = YPPlist(1,YPPsym((P)"x-1677"));
  lit_466 = YPsb((P)"(P)");
  lit_467 = YPPsym((P)"x-1684");
  lit_468 = YPPlist(2,YPPsym((P)"x-1683"),YPPsym((P)"x-1682"));
  lit_469 = YPPlist(1,YPPsym((P)"x"));
  lit_470 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPsig(LITREF(lit_465),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1678_173 = YPmet(FUNCODEREF(fun_x_1678_173),LITREF(lit_464),T105,ENVNUL,PNUL,sloc(866));
  T104 = YPsig(LITREF(lit_468),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1684_174 = YPmet(FUNCODEREF(fun_x_1684_174),LITREF(lit_467),T104,ENVNUL,PNUL,sloc(871));
  T103 = YPsig(LITREF(lit_469),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T103,ENVNUL,PNUL,sloc(871));
  T102 = YPsig(LITREF(lit_470),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T102,ENVNUL,PNUL,sloc(871));
  T101 = YPsig(LITREF(lit_463),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_177 = YPmet(FUNCODEREF(fun_to_c_177),LITREF(lit_377),T101,ENVNUL,PNUL,sloc(859));
  T108 = BOUNDP(YevalSg2cYto_c);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSg2cYto_c);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_to_c_177;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSg2cYto_c,T106);
  lit_471 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_472 = YPPlist(1,YPPsym((P)"x"));
  lit_473 = YPsb((P)"FUNFAB");
  lit_474 = YPsb((P)",");
  lit_475 = YPPsym((P)"x-1688");
  lit_476 = YPPlist(1,YPPsym((P)"x-1687"));
  T112 = YPsig(LITREF(lit_472),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T112,ENVNUL,PNUL,sloc(880));
  T111 = YPsig(LITREF(lit_476),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1688_179 = YPmet(FUNCODEREF(fun_x_1688_179),LITREF(lit_475),T111,ENVNUL,PNUL,sloc(886));
  T110 = YPsig(LITREF(lit_471),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_180 = YPmet(FUNCODEREF(fun_to_c_180),LITREF(lit_377),T110,ENVNUL,PNUL,sloc(874));
  T115 = BOUNDP(YevalSg2cYto_c);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSg2cYto_c);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_to_c_180;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSg2cYto_c,T113);
  lit_477 = YPPsym((P)"funshell-to-c");
  lit_478 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_479 = YPsb((P)"FUNSHELL");
  T117 = YPsig(LITREF(lit_478),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_181 = YPmet(FUNCODEREF(fun_funshell_to_c_181),LITREF(lit_477),T117,ENVNUL,PNUL,sloc(889));
  T120 = BOUNDP(YevalSg2cYfunshell_to_c);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSg2cYfunshell_to_c);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_funshell_to_c_181;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSg2cYfunshell_to_c,T118);
  lit_480 = YPPsym((P)"funinit-to-c");
  lit_481 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_482 = YPPlist(1,YPPsym((P)"x"));
  lit_483 = YPsb((P)"FUNINIT");
  lit_484 = YPsb((P)", ");
  lit_485 = YPPsym((P)"x-1695");
  lit_486 = YPPlist(1,YPPsym((P)"x-1694"));
  T124 = YPsig(LITREF(lit_482),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T124,ENVNUL,PNUL,sloc(905));
  T123 = YPsig(LITREF(lit_486),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1695_183 = YPmet(FUNCODEREF(fun_x_1695_183),LITREF(lit_485),T123,ENVNUL,PNUL,sloc(911));
  T122 = YPsig(LITREF(lit_481),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_184 = YPmet(FUNCODEREF(fun_funinit_to_c_184),LITREF(lit_480),T122,ENVNUL,PNUL,sloc(902));
  T127 = BOUNDP(YevalSg2cYfuninit_to_c);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSg2cYfuninit_to_c);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_funinit_to_c_184;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSg2cYfuninit_to_c,T125);
  lit_487 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_488 = YPsb((P)"%macro");
  T129 = YPsig(LITREF(lit_487),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_185 = YPmet(FUNCODEREF(fun_to_c_185),LITREF(lit_377),T129,ENVNUL,PNUL,sloc(914));
  T132 = BOUNDP(YevalSg2cYto_c);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSg2cYto_c);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_to_c_185;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSg2cYto_c,T130);
  lit_489 = YPPsym((P)"out-list-builder");
  lit_490 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"code-out"),YPPsym((P)"elts"));
  lit_491 = YPsb((P)"nil");
  lit_492 = YPsb((P)"%%list");
  lit_493 = YPPsym((P)"x-1700");
  lit_494 = YPPlist(1,YPPsym((P)"x-1699"));
  T135 = YPsig(LITREF(lit_494),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1700_186 = YPmet(FUNCODEREF(fun_x_1700_186),LITREF(lit_493),T135,ENVNUL,PNUL,sloc(930));
  T134 = YPsig(LITREF(lit_490),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_187 = YPmet(FUNCODEREF(fun_out_list_builder_187),LITREF(lit_489),T134,ENVNUL,PNUL,sloc(923));
  T138 = BOUNDP(YevalSg2cYout_list_builder);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSg2cYout_list_builder);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_out_list_builder_187;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSg2cYout_list_builder,T136);
  lit_495 = YPPsym((P)"gen-fab-list");
  lit_496 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"refs"));
  lit_497 = YPPlist(1,YPPsym((P)"x"));
  T141 = YPsig(LITREF(lit_497),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T141,ENVNUL,PNUL,sloc(936));
  T140 = YPsig(LITREF(lit_496),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_189 = YPmet(FUNCODEREF(fun_gen_fab_list_189),LITREF(lit_495),T140,ENVNUL,PNUL,sloc(935));
  T144 = BOUNDP(YevalSg2cYgen_fab_list);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSg2cYgen_fab_list);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_gen_fab_list_189;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSg2cYgen_fab_list,T142);
  lit_498 = YPPsym((P)"generate-function-specs");
  lit_499 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"sig"));
  T146 = YPsig(LITREF(lit_499),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_190 = YPmet(FUNCODEREF(fun_generate_function_specs_190),LITREF(lit_498),T146,ENVNUL,PNUL,sloc(938));
  T149 = BOUNDP(YevalSg2cYgenerate_function_specs);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSg2cYgenerate_function_specs);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_generate_function_specs_190;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSg2cYgenerate_function_specs,T147);
  lit_500 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_501 = YPPlist(1,YPPsym((P)"x"));
  lit_502 = YPsb((P)"%sig");
  lit_503 = YPsb((P)"nil");
  T152 = YPsig(LITREF(lit_501),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T152,ENVNUL,PNUL,sloc(947));
  T151 = YPsig(LITREF(lit_500),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_192 = YPmet(FUNCODEREF(fun_to_c_192),LITREF(lit_377),T151,ENVNUL,PNUL,sloc(946));
  T155 = BOUNDP(YevalSg2cYto_c);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSg2cYto_c);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_to_c_192;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSg2cYto_c,T153);
  lit_504 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_505 = YPsb((P)"%gen");
  lit_506 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_507 = YPsb((P)"nil");
  lit_508 = YPsb((P)"%false");
  lit_509 = YPsb((P)"%false");
  lit_510 = YPsb((P)"%false");
  T157 = YPsig(LITREF(lit_504),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_193 = YPmet(FUNCODEREF(fun_to_c_193),LITREF(lit_377),T157,ENVNUL,PNUL,sloc(959));
  T160 = BOUNDP(YevalSg2cYto_c);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSg2cYto_c);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_to_c_193;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSg2cYto_c,T158);
  lit_511 = YPPsym((P)"generate-function-forwards");
  lit_512 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"definitions"));
  lit_513 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_514 = YPPsym((P)"x-1704");
  lit_515 = YPPlist(1,YPPsym((P)"x-1703"));
  T163 = YPsig(LITREF(lit_515),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1704_194 = YPmet(FUNCODEREF(fun_x_1704_194),LITREF(lit_514),T163,ENVNUL,PNUL,sloc(977));
  T162 = YPsig(LITREF(lit_512),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_195 = YPmet(FUNCODEREF(fun_generate_function_forwards_195),LITREF(lit_511),T162,ENVNUL,PNUL,sloc(975));
  T166 = BOUNDP(YevalSg2cYgenerate_function_forwards);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSg2cYgenerate_function_forwards);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_generate_function_forwards_195;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSg2cYgenerate_function_forwards,T164);
  lit_516 = YPPsym((P)"generate-function-forward");
  lit_517 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"defn"));
  lit_518 = YPsb((P)"static");
  lit_519 = YPsb((P)"extern");
  lit_520 = YPsb((P)" P ");
  lit_521 = YPsb((P)" (");
  lit_522 = YPPsym((P)"x-1709");
  lit_523 = YPPlist(2,YPPsym((P)"x-1708"),YPPsym((P)"x-1707"));
  lit_524 = YPsb((P)"P");
  lit_525 = YPPlist(1,YPPsym((P)"x"));
  lit_526 = YPPlist(1,YPPsym((P)"x"));
  lit_527 = YPsb((P)");\n");
  T171 = YPsig(LITREF(lit_523),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1709_196 = YPmet(FUNCODEREF(fun_x_1709_196),LITREF(lit_522),T171,ENVNUL,PNUL,sloc(984));
  T170 = YPsig(LITREF(lit_525),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T170,ENVNUL,PNUL,sloc(984));
  T169 = YPsig(LITREF(lit_526),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T169,ENVNUL,PNUL,sloc(984));
  T168 = YPsig(LITREF(lit_517),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_199 = YPmet(FUNCODEREF(fun_generate_function_forward_199),LITREF(lit_516),T168,ENVNUL,PNUL,sloc(980));
  T174 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T174 != YPfalse) {
    T173 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_generate_function_forward_199;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(YevalSg2cYgenerate_function_forward,T172);
  lit_528 = YPPsym((P)"generate-function-binding");
  lit_529 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"defn"));
  lit_530 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_531 = YPsb((P)"fun_");
  lit_532 = YPsb((P)"fun_");
  lit_533 = YPsb((P)"_");
  T176 = YPsig(LITREF(lit_529),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_200 = YPmet(FUNCODEREF(fun_generate_function_binding_200),LITREF(lit_528),T176,ENVNUL,PNUL,sloc(988));
  T179 = BOUNDP(YevalSg2cYgenerate_function_binding);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSg2cYgenerate_function_binding);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_generate_function_binding_200;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSg2cYgenerate_function_binding,T177);
  lit_534 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"defn"));
  lit_535 = YPsb((P)"FUNFOR(");
  lit_536 = YPsb((P)"LOCFOR(");
  lit_537 = YPsb((P)");\n");
  T181 = YPsig(LITREF(lit_534),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_201 = YPmet(FUNCODEREF(fun_generate_function_forward_201),LITREF(lit_516),T181,ENVNUL,PNUL,sloc(1001));
  T184 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_generate_function_forward_201;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSg2cYgenerate_function_forward,T182);
  lit_538 = YPPsym((P)"generate-function-bodies");
  lit_539 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"definitions"));
  lit_540 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_541 = YPPlist(1,YPPsym((P)"def"));
  T187 = YPsig(LITREF(lit_541),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T187,ENVNUL,PNUL,sloc(1009));
  T186 = YPsig(LITREF(lit_539),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_203 = YPmet(FUNCODEREF(fun_generate_function_bodies_203),LITREF(lit_538),T186,ENVNUL,PNUL,sloc(1007));
  T190 = BOUNDP(YevalSg2cYgenerate_function_bodies);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSg2cYgenerate_function_bodies);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_generate_function_bodies_203;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSg2cYgenerate_function_bodies,T188);
  lit_542 = YPPsym((P)"generate-functions");
  lit_543 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_544 = YPPlist(1,YPPsym((P)"def"));
  T193 = YPsig(LITREF(lit_544),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T193,ENVNUL,PNUL,sloc(1014));
  T192 = YPsig(LITREF(lit_543),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_205 = YPmet(FUNCODEREF(fun_generate_functions_205),LITREF(lit_542),T192,ENVNUL,PNUL,sloc(1013));
  T196 = BOUNDP(YevalSg2cYgenerate_functions);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSg2cYgenerate_functions);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_generate_functions_205;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSg2cYgenerate_functions,T194);
  lit_545 = YPPsym((P)"generate-closure-structure");
  lit_546 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_547 = YPsb((P)" = ");
  lit_548 = YPsb((P)"%met");
  lit_549 = YPsb((P)"ENVNUL");
  lit_550 = YPsb((P)"PNUL");
  lit_551 = YPsb((P)"sloc(");
  lit_552 = YPsb((P)")");
  T198 = YPsig(LITREF(lit_546),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_206 = YPmet(FUNCODEREF(fun_generate_closure_structure_206),LITREF(lit_545),T198,ENVNUL,PNUL,sloc(1019));
  T201 = BOUNDP(YevalSg2cYgenerate_closure_structure);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSg2cYgenerate_closure_structure);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_generate_closure_structure_206;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSg2cYgenerate_closure_structure,T199);
  lit_553 = YPPsym((P)"generate-function-body-reference");
  lit_554 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"definition"));
  lit_555 = YPsb((P)"FUNCODEREF(");
  lit_556 = YPsb((P)")");
  T203 = YPsig(LITREF(lit_554),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_207 = YPmet(FUNCODEREF(fun_generate_function_body_reference_207),LITREF(lit_553),T203,ENVNUL,PNUL,sloc(1035));
  T206 = BOUNDP(YevalSg2cYgenerate_function_body_reference);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSg2cYgenerate_function_body_reference);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_function_body_reference_207;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSg2cYgenerate_function_body_reference,T204);
  lit_557 = YPPsym((P)"generate-shadow-args");
  lit_558 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"code-out"));
  lit_559 = YPsb((P)"P ");
  lit_560 = YPPsym((P)"x-1719");
  lit_561 = YPPlist(3,YPPsym((P)"x-1718"),YPPsym((P)"x-1717"),YPPsym((P)"x-1716"));
  lit_562 = YPsb((P)"a");
  lit_563 = YPPlist(1,YPPsym((P)"x"));
  lit_564 = YPPlist(1,YPPsym((P)"x"));
  T211 = YPsig(LITREF(lit_561),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1719_208 = YPmet(FUNCODEREF(fun_x_1719_208),LITREF(lit_560),T211,ENVNUL,PNUL,sloc(1048));
  T210 = YPsig(LITREF(lit_563),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T210,ENVNUL,PNUL,sloc(1048));
  T209 = YPsig(LITREF(lit_564),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T209,ENVNUL,PNUL,sloc(1048));
  T208 = YPsig(LITREF(lit_558),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_211 = YPmet(FUNCODEREF(fun_generate_shadow_args_211),LITREF(lit_557),T208,ENVNUL,PNUL,sloc(1044));
  T214 = BOUNDP(YevalSg2cYgenerate_shadow_args);
  if (T214 != YPfalse) {
    T213 = VARREF(YevalSg2cYgenerate_shadow_args);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_generate_shadow_args_211;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YevalSg2cYgenerate_shadow_args,T212);
  lit_565 = YPPsym((P)"generate-return");
  lit_566 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_567 = YPsb((P)"return ");
  T216 = YPsig(LITREF(lit_566),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_212 = YPmet(FUNCODEREF(fun_generate_return_212),LITREF(lit_565),T216,ENVNUL,PNUL,sloc(1051));
  T219 = BOUNDP(YevalSg2cYgenerate_return);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_generate_return_212;
  T217 = XCALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YevalSg2cYgenerate_return,T217);
  lit_568 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"code-out"));
  lit_569 = YPsb((P)"RET");
  T221 = YPsig(LITREF(lit_568),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_213 = YPmet(FUNCODEREF(fun_generate_return_213),LITREF(lit_565),T221,ENVNUL,PNUL,sloc(1055));
  T224 = BOUNDP(YevalSg2cYgenerate_return);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_return_213;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSg2cYgenerate_return,T222);
  lit_570 = YPPsym((P)"primitive-inlinable?");
  lit_571 = YPPlist(1,YPPsym((P)"e"));
  lit_572 = YPPsym((P)"inline");
  lit_573 = YPPsym((P)"inline-c");
  T226 = YPsig(LITREF(lit_571),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_214 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_214),LITREF(lit_570),T226,ENVNUL,PNUL,sloc(1062));
  T229 = BOUNDP(YevalSg2cYprimitive_inlinableQ);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSg2cYprimitive_inlinableQ);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_primitive_inlinableQ_214;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSg2cYprimitive_inlinableQ,T227);
  lit_574 = YPPsym((P)"generate-function-code");
  lit_575 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"e"));
  lit_576 = YPsb((P)"\n");
  lit_577 = YPsb((P)"static ");
  lit_578 = YPsb((P)"INLINE ");
  lit_579 = YPsb((P)"P ");
  lit_580 = YPPsym((P)"x-1727");
  lit_581 = YPPlist(2,YPPsym((P)"x-1726"),YPPsym((P)"x-1725"));
  lit_582 = YPsb((P)"P ");
  lit_583 = YPPlist(1,YPPsym((P)"x"));
  lit_584 = YPPlist(1,YPPsym((P)"x"));
  lit_585 = YPsb((P)" {\n");
  lit_586 = YPsb((P)"DEFCREGS();\n");
  lit_587 = YPsb((P)"loop:\n");
  lit_588 = YPsb((P)"}\n");
  T234 = YPsig(LITREF(lit_581),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1727_215 = YPmet(FUNCODEREF(fun_x_1727_215),LITREF(lit_580),T234,ENVNUL,PNUL,sloc(1072));
  T233 = YPsig(LITREF(lit_583),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T233,ENVNUL,PNUL,sloc(1072));
  T232 = YPsig(LITREF(lit_584),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T232,ENVNUL,PNUL,sloc(1072));
  T231 = YPsig(LITREF(lit_575),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_218 = YPmet(FUNCODEREF(fun_generate_function_code_218),LITREF(lit_574),T231,ENVNUL,PNUL,sloc(1066));
  T237 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T237 != YPfalse) {
    T236 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_generate_function_code_218;
  T235 = XCALL2(1,VARREF(YPdefine_method),T236,T238);
  VARSET(YevalSg2cYgenerate_function_code,T235);
  lit_589 = YPPsym((P)"dispatcher?");
  lit_590 = YPPlist(1,YPPsym((P)"definition"));
  lit_591 = YPsb((P)"%dispatch");
  lit_592 = YPsb((P)"-dispatch");
  lit_593 = YPsb((P)"-dispatch");
  T239 = YPsig(LITREF(lit_590),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_219 = YPmet(FUNCODEREF(fun_dispatcherQ_219),LITREF(lit_589),T239,ENVNUL,PNUL,sloc(1084));
  T242 = BOUNDP(YevalSg2cYdispatcherQ);
  if (T242 != YPfalse) {
    T241 = VARREF(YevalSg2cYdispatcherQ);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_dispatcherQ_219;
  T240 = XCALL2(1,VARREF(YPdefine_method),T241,T243);
  VARSET(YevalSg2cYdispatcherQ,T240);
  lit_594 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"definition"));
  lit_595 = YPsb((P)"\nFUNCODEDEF(");
  lit_596 = YPsb((P)") {\n");
  lit_597 = YPsb((P)"P ");
  lit_598 = YPPsym((P)"x-1731");
  lit_599 = YPPlist(2,YPPsym((P)"x-1730"),YPPsym((P)"x-1729"));
  lit_600 = YPPlist(1,YPPsym((P)"x"));
  lit_601 = YPPlist(1,YPPsym((P)"x"));
  lit_602 = YPsb((P)"LINK_STACK();\n");
  lit_603 = YPPlist(1,YPPsym((P)"b"));
  lit_604 = YPsb((P)"NARGS(");
  lit_605 = YPsb((P)"ARG(");
  lit_606 = YPsb((P)", ");
  lit_607 = YPsb((P)")");
  lit_608 = YPsb((P)"loop:\n");
  lit_609 = YPsb((P)"UNLINK_STACK();\n");
  lit_610 = YPsb((P)"}\n");
  T248 = YPsig(LITREF(lit_599),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1731_220 = YPmet(FUNCODEREF(fun_x_1731_220),LITREF(lit_598),T248,ENVNUL,PNUL,sloc(1101));
  T247 = YPsig(LITREF(lit_600),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T247,ENVNUL,PNUL,sloc(1101));
  T246 = YPsig(LITREF(lit_601),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T246,ENVNUL,PNUL,sloc(1101));
  T245 = YPsig(LITREF(lit_603),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T245,ENVNUL,PNUL,sloc(1108));
  T244 = YPsig(LITREF(lit_594),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_224 = YPmet(FUNCODEREF(fun_generate_function_code_224),LITREF(lit_574),T244,ENVNUL,PNUL,sloc(1092));
  T251 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T251 != YPfalse) {
    T250 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_generate_function_code_224;
  T249 = XCALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YevalSg2cYgenerate_function_code,T249);
  lit_611 = YPPsym((P)"generate-local-temporaries");
  lit_612 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"code-out"));
  lit_613 = YPPsym((P)"x-1734");
  lit_614 = YPPlist(1,YPPsym((P)"x-1733"));
  lit_615 = YPsb((P)"P ");
  T254 = YPsig(LITREF(lit_614),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1734_225 = YPmet(FUNCODEREF(fun_x_1734_225),LITREF(lit_613),T254,ENVNUL,PNUL,sloc(1130));
  T253 = YPsig(LITREF(lit_612),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_226 = YPmet(FUNCODEREF(fun_generate_local_temporaries_226),LITREF(lit_611),T253,ENVNUL,PNUL,sloc(1129));
  T257 = BOUNDP(YevalSg2cYgenerate_local_temporaries);
  if (T257 != YPfalse) {
    T256 = VARREF(YevalSg2cYgenerate_local_temporaries);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_generate_local_temporaries_226;
  T255 = XCALL2(1,VARREF(YPdefine_method),T256,T258);
  VARSET(YevalSg2cYgenerate_local_temporaries,T255);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_616 = YPPsym((P)"generate-registers");
  lit_617 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"code-out"));
  lit_618 = YPPsym((P)"next-line");
  lit_619 = YPPlist(1,YPPsym((P)"j"));
  lit_620 = YPsb((P)"P ");
  lit_621 = YPPsym((P)"next-reg");
  lit_622 = YPPlist(2,YPPsym((P)"j"),YPPsym((P)"i"));
  lit_623 = YPsb((P)";\n");
  T261 = YPsig(LITREF(lit_622),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_227 = YPmet(FUNCODEREF(fun_next_reg_227),LITREF(lit_621),T261,ENVNUL,PNUL,sloc(1143));
  T260 = YPsig(LITREF(lit_619),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_228 = YPmet(FUNCODEREF(fun_next_line_228),LITREF(lit_618),T260,ENVNUL,PNUL,sloc(1140));
  T259 = YPsig(LITREF(lit_617),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_229 = YPmet(FUNCODEREF(fun_generate_registers_229),LITREF(lit_616),T259,ENVNUL,PNUL,sloc(1138));
  T264 = BOUNDP(YevalSg2cYgenerate_registers);
  if (T264 != YPfalse) {
    T263 = VARREF(YevalSg2cYgenerate_registers);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_generate_registers_229;
  T262 = XCALL2(1,VARREF(YPdefine_method),T263,T265);
  VARSET(YevalSg2cYgenerate_registers,T262);
  lit_624 = YPPsym((P)"module-info-name");
  lit_625 = YPPlist(1,YPPsym((P)"name"));
  lit_626 = YPsb((P)"module_info_");
  T266 = YPsig(LITREF(lit_625),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_230 = YPmet(FUNCODEREF(fun_module_info_name_230),LITREF(lit_624),T266,ENVNUL,PNUL,sloc(1150));
  T269 = BOUNDP(YevalSg2cYmodule_info_name);
  if (T269 != YPfalse) {
    T268 = VARREF(YevalSg2cYmodule_info_name);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_module_info_name_230;
  T267 = XCALL2(1,VARREF(YPdefine_method),T268,T270);
  VARSET(YevalSg2cYmodule_info_name,T267);
  lit_627 = YPPsym((P)"declare-imported-module-infos");
  lit_628 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"mod"));
  lit_629 = YPPsym((P)"maybe-declare");
  lit_630 = YPPlist(1,YPPsym((P)"modname"));
  lit_631 = YPsb((P)"extern MODULE_INFO ");
  lit_632 = YPsb((P)";\n");
  lit_633 = YPPlist(1,YPPsym((P)"binding"));
  T273 = YPsig(LITREF(lit_630),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_231 = YPmet(FUNCODEREF(fun_maybe_declare_231),LITREF(lit_629),T273,ENVNUL,PNUL,sloc(1159));
  T272 = YPsig(LITREF(lit_633),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T272,ENVNUL,PNUL,sloc(1166));
  T271 = YPsig(LITREF(lit_628),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_627),T271,ENVNUL,PNUL,sloc(1156));
  T274 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T274);
  lit_634 = YPPsym((P)"generate-module-info");
  lit_635 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"mod"));
  lit_636 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_637 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_638 = YPPsym((P)"x-1737");
  lit_639 = YPPlist(1,YPPsym((P)"x-1736"));
  lit_640 = YPsb((P)"  {&");
  lit_641 = YPsb((P)"},\n");
  lit_642 = YPsb((P)"  {NULL}\n};\n");
  lit_643 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_644 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_645 = YPsb((P)"  {\"");
  lit_646 = YPsb((P)"\", &");
  lit_647 = YPsb((P)", \"");
  lit_648 = YPsb((P)"\"},\n");
  lit_649 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_650 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_651 = YPPlist(1,YPPsym((P)"binding"));
  lit_652 = YPsb((P)"  {\"");
  lit_653 = YPsb((P)"\", ");
  lit_654 = YPsb((P)"CVAR, &");
  lit_655 = YPsb((P)"},\n");
  lit_656 = YPsb((P)"DVAR, &");
  lit_657 = YPsb((P)"},\n");
  lit_658 = YPsb((P)"PVAR, NULL},\n");
  lit_659 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_660 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_661 = YPPsym((P)"x-1746");
  lit_662 = YPPlist(1,YPPsym((P)"x-1745"));
  lit_663 = YPsb((P)"  {\"");
  lit_664 = YPsb((P)"\", \"");
  lit_665 = YPsb((P)"\"},\n");
  lit_666 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_667 = YPsb((P)"\nextern MODULE_INFO ");
  lit_668 = YPsb((P)";\n");
  lit_669 = YPsb((P)"MODULE_INFO ");
  lit_670 = YPsb((P)" = {\n");
  lit_671 = YPsb((P)"  \"");
  lit_672 = YPsb((P)"\",\n");
  lit_673 = YPsb((P)"  NULL,\n");
  lit_674 = YPsb((P)"  use_infos,\n");
  lit_675 = YPsb((P)"  import_infos,\n");
  lit_676 = YPsb((P)"  binding_infos,\n");
  lit_677 = YPsb((P)"  export_infos,\n");
  lit_678 = YPsb((P)"};\n");
  T279 = YPsig(LITREF(lit_639),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1737_234 = YPmet(FUNCODEREF(fun_x_1737_234),LITREF(lit_638),T279,ENVNUL,PNUL,sloc(1186));
  T278 = YPsig(LITREF(lit_644),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T278,ENVNUL,PNUL,sloc(1193));
  T277 = YPsig(LITREF(lit_651),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T277,ENVNUL,PNUL,sloc(1205));
  T276 = YPsig(LITREF(lit_662),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1746_237 = YPmet(FUNCODEREF(fun_x_1746_237),LITREF(lit_661),T276,ENVNUL,PNUL,sloc(1218));
  T275 = YPsig(LITREF(lit_635),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_634),T275,ENVNUL,PNUL,sloc(1175));
  T280 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T280);
  lit_679 = YPPsym((P)"module-init-name");
  lit_680 = YPPlist(1,YPPsym((P)"name"));
  lit_681 = YPsb((P)"load_module_");
  T281 = YPsig(LITREF(lit_680),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_239 = YPmet(FUNCODEREF(fun_module_init_name_239),LITREF(lit_679),T281,ENVNUL,PNUL,sloc(1234));
  T284 = BOUNDP(YevalSg2cYmodule_init_name);
  if (T284 != YPfalse) {
    T283 = VARREF(YevalSg2cYmodule_init_name);
  } else {
    T283 = YPfalse;
  }
  T285 = fun_module_init_name_239;
  T282 = XCALL2(1,VARREF(YPdefine_method),T283,T285);
  VARSET(YevalSg2cYmodule_init_name,T282);
  lit_682 = YPPsym((P)"module-init-decl");
  lit_683 = YPPlist(1,YPPsym((P)"name"));
  lit_684 = YPsb((P)"void ");
  lit_685 = YPsb((P)" (void)");
  T286 = YPsig(LITREF(lit_683),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_240 = YPmet(FUNCODEREF(fun_module_init_decl_240),LITREF(lit_682),T286,ENVNUL,PNUL,sloc(1237));
  T289 = BOUNDP(YevalSg2cYmodule_init_decl);
  if (T289 != YPfalse) {
    T288 = VARREF(YevalSg2cYmodule_init_decl);
  } else {
    T288 = YPfalse;
  }
  T290 = fun_module_init_decl_240;
  T287 = XCALL2(1,VARREF(YPdefine_method),T288,T290);
  VARSET(YevalSg2cYmodule_init_decl,T287);
  lit_686 = YPPsym((P)"generate-module-init");
  lit_687 = YPPlist(3,YPPsym((P)"code-out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_688 = YPsb((P)"dl");
  lit_689 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_690 = YPPsym((P)"x-1752");
  lit_691 = YPPlist(1,YPPsym((P)"x-1751"));
  lit_692 = YPsb((P)"extern ");
  lit_693 = YPsb((P)";\n");
  lit_694 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_695 = YPsb((P)"extern ");
  lit_696 = YPsb((P)";\n\n");
  lit_697 = YPsb((P)" {\n");
  lit_698 = YPsb((P)"  static int need_init = 1;\n");
  lit_699 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_700 = YPsb((P)"  need_init = 0;\n");
  lit_701 = YPPsym((P)"x-1757");
  lit_702 = YPPlist(1,YPPsym((P)"x-1756"));
  lit_703 = YPsb((P)"  ");
  lit_704 = YPsb((P)"();\n");
  lit_705 = YPsb((P)"\n");
  lit_706 = YPsb((P)"\n");
  lit_707 = YPsb((P)"}\n");
  T293 = YPsig(LITREF(lit_691),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1752_241 = YPmet(FUNCODEREF(fun_x_1752_241),LITREF(lit_690),T293,ENVNUL,PNUL,sloc(1248));
  T292 = YPsig(LITREF(lit_702),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1757_242 = YPmet(FUNCODEREF(fun_x_1757_242),LITREF(lit_701),T292,ENVNUL,PNUL,sloc(1257));
  T291 = YPsig(LITREF(lit_687),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_243 = YPmet(FUNCODEREF(fun_generate_module_init_243),LITREF(lit_686),T291,ENVNUL,PNUL,sloc(1240));
  T296 = BOUNDP(YevalSg2cYgenerate_module_init);
  if (T296 != YPfalse) {
    T295 = VARREF(YevalSg2cYgenerate_module_init);
  } else {
    T295 = YPfalse;
  }
  T297 = fun_generate_module_init_243;
  T294 = XCALL2(1,VARREF(YPdefine_method),T295,T297);
  VARSET(YevalSg2cYgenerate_module_init,T294);
  lit_708 = YPPsym((P)"generate-main");
  lit_709 = YPPlist(2,YPPsym((P)"code-out"),YPPsym((P)"mod"));
  lit_710 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_711 = YPsb((P)"extern MODULE_INFO ");
  lit_712 = YPsb((P)";\n");
  lit_713 = YPsb((P)"extern ");
  lit_714 = YPsb((P)";\n\n");
  lit_715 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_716 = YPsb((P)";\n\n");
  lit_717 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_718 = YPsb((P)"  ");
  lit_719 = YPsb((P)"%init-world");
  lit_720 = YPsb((P)"(argc, argv);\n");
  lit_721 = YPsb((P)"  ");
  lit_722 = YPsb((P)"();\n");
  lit_723 = YPsb((P)"  return 0;\n");
  lit_724 = YPsb((P)"}\n");
  T298 = YPsig(LITREF(lit_709),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_244 = YPmet(FUNCODEREF(fun_generate_main_244),LITREF(lit_708),T298,ENVNUL,PNUL,sloc(1266));
  T301 = BOUNDP(YevalSg2cYgenerate_main);
  if (T301 != YPfalse) {
    T300 = VARREF(YevalSg2cYgenerate_main);
  } else {
    T300 = YPfalse;
  }
  T302 = fun_generate_main_244;
  T299 = XCALL2(1,VARREF(YPdefine_method),T300,T302);
  VARSET(YevalSg2cYgenerate_main,T299);
  T303 = YPfalse;
  return T303;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
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
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSsystem},
  {&module_info_gooSioSwrite},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSstr},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSast_linearize},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"atan", &module_info_gooSmath, "atan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
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
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"1-", &module_info_gooSmath, "1-"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"write-type", &module_info_gooSioSwrite, "write-type"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"try", &module_info_gooSboot, "try"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"src-loc-line", &module_info_gooSboot, "src-loc-line"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"frame", &module_info_evalStop, "frame"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"-", &module_info_gooSmath, "-"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"find", &module_info_gooScolsScol, "find"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"t?", &module_info_gooStypes, "t?"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"==", &module_info_gooSmacros, "=="},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"time", &module_info_gooSsystem, "time"},
  {"len", &module_info_gooStypes, "len"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"dl", &module_info_gooSboot, "dl"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"ast-error", &module_info_evalSdependency, "ast-error"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"case", &module_info_gooSmacros, "case"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%met", &module_info_gooSboot, "%met"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"match", &module_info_gooSmacros, "match"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"$e", &module_info_gooSmath, "$e"},
  {"^", &module_info_gooSmath, "^"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
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
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"tail", &module_info_gooSboot, "tail"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"df", &module_info_gooSboot, "df"},
  {"close", &module_info_gooSioSport, "close"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"%im", &module_info_gooSboot, "%im"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"t=", &module_info_gooStypes, "t="},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"dg", &module_info_gooSboot, "dg"},
  {"max", &module_info_gooSmag, "max"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"top", &module_info_evalStop, "top"},
  {"logn", &module_info_gooSmath, "logn"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"dc", &module_info_gooSboot, "dc"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"loc", &module_info_gooSboot, "loc"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"until", &module_info_gooSmacros, "until"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
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
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"open", &module_info_gooSioSport, "open"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"below", &module_info_gooScolsSseq, "below"},
  {">>", &module_info_gooSmath, ">>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"1+", &module_info_gooSmath, "1+"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"+", &module_info_gooSmath, "+"},
  {"=", &module_info_gooSmath, "="},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"%cb", &module_info_gooSboot, "%cb"},
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
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"read", &module_info_gooSconditions, "read"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"program-bindings", &module_info_evalSast_linearize, "program-bindings"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"log", &module_info_gooSmath, "log"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun", &module_info_gooSboot, "fun"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"<directory-error>", &module_info_gooSsystem, "<directory-error>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"not", &module_info_gooSboot, "not"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"%c=", &module_info_gooSboot, "%c="},
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
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"col", &module_info_gooScolsScol, "col"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
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
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"always", &module_info_gooSruntime, "always"},
  {"~", &module_info_gooSmath, "~"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"div", &module_info_gooSmath, "div"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
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
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
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
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"as", &module_info_gooStypes, "as"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"program-line", &module_info_evalSast, "program-line"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"ct", &module_info_gooSboot, "ct"},
  {"in", &module_info_gooSioSport, "in"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"@<", &module_info_gooSboot, "@<"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"$$", &module_info_evalStop, "$$"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"$$$", &module_info_evalStop, "$$$"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"%src-loc", &module_info_gooSboot, "%src-loc"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"last", &module_info_gooSmacros, "last"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"put", &module_info_gooSioSport, "put"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
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
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"&", &module_info_gooSmath, "&"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"dss", &module_info_gooSboot, "dss"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"tup", &module_info_gooSboot, "tup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%fb", &module_info_gooSboot, "%fb"},
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
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"or", &module_info_gooSmacros, "or"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<pathname-error>", &module_info_gooSsystem, "<pathname-error>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"and", &module_info_gooSmacros, "and"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"with-statement", PVAR, NULL},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"with-used-expression", PVAR, NULL},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"module-loader-app-modname-setter", CVAR, &YevalSg2cYmodule_loader_app_modname_setter},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"for-mods", PVAR, NULL},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"generate-self-recursive-call", CVAR, &YevalSg2cYgenerate_self_recursive_call},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"for-commas", PVAR, NULL},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"module-loader-appname-setter", CVAR, &YevalSg2cYmodule_loader_appname_setter},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"---main-1---", PVAR, NULL},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"generate-shadow-args", CVAR, &YevalSg2cYgenerate_shadow_args},
  {"---main-2---", PVAR, NULL},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"*dynamic-linking?*", DVAR, &YevalSg2cYTdynamic_linkingQT},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"with-expression", PVAR, NULL},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"%print-cpu-usage", PVAR, NULL},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"pp", CVAR, &YevalSg2cYpp},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"---main-0---", PVAR, NULL},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"between-parentheses", PVAR, NULL},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"or/set", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-exp", "g2c-exp"},
  {"g2c-eval", "g2c-eval"},
  {"g2c-ast", "g2c-ast"},
  {"g2c-def-app", "g2c-def-app"},
  {"g2c-clean", "g2c-clean"},
  {"g2c-goo", "g2c-goo"},
  {"g2c-test", "g2c-test"},
  {"g2c-top", "g2c-top"},
  {"g2c-build-app", "g2c-build-app"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSg2c;
MODULE_INFO module_info_evalSg2c = {
  "eval/g2c",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSast_linearize (void);

/* EXPRESSION: */

extern void load_module_evalSg2c (void);

void load_module_evalSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSsystem();
  load_module_gooSioSwrite();
  load_module_gooScolsScol();
  load_module_gooScolsSstr();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSast_linearize();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();

}

/* END OF GENERATED CODE. */
