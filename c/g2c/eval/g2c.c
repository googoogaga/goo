/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/g2c");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/g2c */

EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YOOnulQ,"goo/boot","@@nul?");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YevalStopYsave_image,"eval/top","save-image");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Ynot,"goo/boot","not");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YOrev,"goo/boot","@rev");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
DEF(YevalSg2cYbbQ,"eval/g2c","bb?");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YOnew,"goo/boot","@new");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalStopYframe_var,"eval/top","frame-var");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(Ynew,"goo/boot","new");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YPtrue,"goo/boot","%true");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalStopYbt,"eval/top","bt");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yerror,"goo/boot","error");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
DEF(YevalSg2cYTlitsT,"eval/g2c","*lits*");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
DEF(YevalSg2cYref_lit,"eval/g2c","ref-lit");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalStopYD,"eval/top","$");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(Yarity_error,"goo/boot","arity-error");
DYNDEF(YevalSg2cYTloop_arg_counterT,"eval/g2c","*loop-arg-counter*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YPfalse,"goo/boot","%false");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
DEF(YevalSg2cYTlits_atT,"eval/g2c","*lits-at*");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YOpick,"goo/boot","@pick");
EXT(YtT,"goo/boot","t*");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalStopYtop,"eval/top","top");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_217);
DEFLIT(lit_595);
DEFLIT(lit_572);
DEFLIT(lit_26);
DEFLIT(lit_623);
DEFLIT(lit_487);
DEFLIT(lit_366);
DEFLIT(lit_370);
DEFLIT(lit_298);
DEFLIT(lit_90);
DEFLIT(lit_409);
DEFLIT(lit_58);
DEFLIT(lit_548);
DEFLIT(lit_82);
DEFLIT(lit_437);
DEFLIT(lit_36);
DEFLIT(lit_192);
DEFLIT(lit_532);
DEFLIT(lit_139);
DEFLIT(lit_394);
DEFLIT(lit_460);
DEFLIT(lit_193);
DEFLIT(lit_448);
DEFLIT(lit_200);
DEFLIT(lit_326);
DEFLIT(lit_507);
DEFLIT(lit_60);
DEFLIT(lit_20);
DEFLIT(lit_302);
DEFLIT(lit_447);
DEFLIT(lit_44);
DEFLIT(lit_314);
DEFLIT(lit_399);
DEFLIT(lit_499);
DEFLIT(lit_175);
DEFLIT(lit_327);
DEFLIT(lit_517);
DEFLIT(lit_324);
DEFLIT(lit_369);
DEFLIT(lit_87);
DEFLIT(lit_376);
DEFLIT(lit_125);
DEFLIT(lit_593);
DEFLIT(lit_292);
DEFLIT(lit_38);
DEFLIT(lit_257);
DEFLIT(lit_187);
DEFLIT(lit_555);
DEFLIT(lit_256);
DEFLIT(lit_197);
DEFLIT(lit_474);
DEFLIT(lit_651);
DEFLIT(lit_441);
DEFLIT(lit_29);
DEFLIT(lit_11);
DEFLIT(lit_23);
DEFLIT(lit_159);
DEFLIT(lit_645);
DEFLIT(lit_335);
DEFLIT(lit_112);
DEFLIT(lit_14);
DEFLIT(lit_543);
DEFLIT(lit_479);
DEFLIT(lit_275);
DEFLIT(lit_121);
DEFLIT(lit_398);
DEFLIT(lit_468);
DEFLIT(lit_158);
DEFLIT(lit_172);
DEFLIT(lit_318);
DEFLIT(lit_311);
DEFLIT(lit_625);
DEFLIT(lit_525);
DEFLIT(lit_637);
DEFLIT(lit_323);
DEFLIT(lit_145);
DEFLIT(lit_50);
DEFLIT(lit_252);
DEFLIT(lit_558);
DEFLIT(lit_157);
DEFLIT(lit_629);
DEFLIT(lit_263);
DEFLIT(lit_322);
DEFLIT(lit_462);
DEFLIT(lit_580);
DEFLIT(lit_22);
DEFLIT(lit_546);
DEFLIT(lit_504);
DEFLIT(lit_168);
DEFLIT(lit_169);
DEFLIT(lit_615);
DEFLIT(lit_165);
DEFLIT(lit_109);
DEFLIT(lit_586);
DEFLIT(lit_436);
DEFLIT(lit_619);
DEFLIT(lit_223);
DEFLIT(lit_386);
DEFLIT(lit_458);
DEFLIT(lit_5);
DEFLIT(lit_422);
DEFLIT(lit_31);
DEFLIT(lit_68);
DEFLIT(lit_235);
DEFLIT(lit_196);
DEFLIT(lit_268);
DEFLIT(lit_133);
DEFLIT(lit_10);
DEFLIT(lit_83);
DEFLIT(lit_559);
DEFLIT(lit_164);
DEFLIT(lit_194);
DEFLIT(lit_126);
DEFLIT(lit_374);
DEFLIT(lit_156);
DEFLIT(lit_531);
DEFLIT(lit_107);
DEFLIT(lit_297);
DEFLIT(lit_19);
DEFLIT(lit_440);
DEFLIT(lit_309);
DEFLIT(lit_45);
DEFLIT(lit_2);
DEFLIT(lit_48);
DEFLIT(lit_239);
DEFLIT(lit_319);
DEFLIT(lit_97);
DEFLIT(lit_35);
DEFLIT(lit_290);
DEFLIT(lit_264);
DEFLIT(lit_571);
DEFLIT(lit_146);
DEFLIT(lit_547);
DEFLIT(lit_249);
DEFLIT(lit_42);
DEFLIT(lit_163);
DEFLIT(lit_91);
DEFLIT(lit_353);
DEFLIT(lit_641);
DEFLIT(lit_245);
DEFLIT(lit_186);
DEFLIT(lit_349);
DEFLIT(lit_41);
DEFLIT(lit_0);
DEFLIT(lit_423);
DEFLIT(lit_86);
DEFLIT(lit_77);
DEFLIT(lit_131);
DEFLIT(lit_177);
DEFLIT(lit_174);
DEFLIT(lit_454);
DEFLIT(lit_373);
DEFLIT(lit_348);
DEFLIT(lit_384);
DEFLIT(lit_334);
DEFLIT(lit_162);
DEFLIT(lit_362);
DEFLIT(lit_207);
DEFLIT(lit_638);
DEFLIT(lit_286);
DEFLIT(lit_106);
DEFLIT(lit_603);
DEFLIT(lit_530);
DEFLIT(lit_476);
DEFLIT(lit_267);
DEFLIT(lit_401);
DEFLIT(lit_347);
DEFLIT(lit_455);
DEFLIT(lit_115);
DEFLIT(lit_433);
DEFLIT(lit_316);
DEFLIT(lit_352);
DEFLIT(lit_95);
DEFLIT(lit_147);
DEFLIT(lit_171);
DEFLIT(lit_346);
DEFLIT(lit_608);
DEFLIT(lit_221);
DEFLIT(lit_161);
DEFLIT(lit_231);
DEFLIT(lit_385);
DEFLIT(lit_285);
DEFLIT(lit_281);
DEFLIT(lit_452);
DEFLIT(lit_300);
DEFLIT(lit_590);
DEFLIT(lit_49);
DEFLIT(lit_446);
DEFLIT(lit_301);
DEFLIT(lit_456);
DEFLIT(lit_296);
DEFLIT(lit_310);
DEFLIT(lit_9);
DEFLIT(lit_453);
DEFLIT(lit_575);
DEFLIT(lit_343);
DEFLIT(lit_514);
DEFLIT(lit_527);
DEFLIT(lit_438);
DEFLIT(lit_508);
DEFLIT(lit_160);
DEFLIT(lit_359);
DEFLIT(lit_313);
DEFLIT(lit_198);
DEFLIT(lit_461);
DEFLIT(lit_293);
DEFLIT(lit_371);
DEFLIT(lit_480);
DEFLIT(lit_655);
DEFLIT(lit_211);
DEFLIT(lit_416);
DEFLIT(lit_598);
DEFLIT(lit_583);
DEFLIT(lit_332);
DEFLIT(lit_111);
DEFLIT(lit_255);
DEFLIT(lit_143);
DEFLIT(lit_407);
DEFLIT(lit_269);
DEFLIT(lit_80);
DEFLIT(lit_449);
DEFLIT(lit_494);
DEFLIT(lit_542);
DEFLIT(lit_497);
DEFLIT(lit_633);
DEFLIT(lit_631);
DEFLIT(lit_413);
DEFLIT(lit_243);
DEFLIT(lit_180);
DEFLIT(lit_581);
DEFLIT(lit_451);
DEFLIT(lit_150);
DEFLIT(lit_167);
DEFLIT(lit_626);
DEFLIT(lit_597);
DEFLIT(lit_613);
DEFLIT(lit_596);
DEFLIT(lit_283);
DEFLIT(lit_185);
DEFLIT(lit_378);
DEFLIT(lit_556);
DEFLIT(lit_618);
DEFLIT(lit_118);
DEFLIT(lit_383);
DEFLIT(lit_321);
DEFLIT(lit_43);
DEFLIT(lit_218);
DEFLIT(lit_627);
DEFLIT(lit_435);
DEFLIT(lit_240);
DEFLIT(lit_7);
DEFLIT(lit_505);
DEFLIT(lit_524);
DEFLIT(lit_4);
DEFLIT(lit_489);
DEFLIT(lit_459);
DEFLIT(lit_584);
DEFLIT(lit_32);
DEFLIT(lit_582);
DEFLIT(lit_406);
DEFLIT(lit_509);
DEFLIT(lit_59);
DEFLIT(lit_40);
DEFLIT(lit_390);
DEFLIT(lit_500);
DEFLIT(lit_408);
DEFLIT(lit_621);
DEFLIT(lit_306);
DEFLIT(lit_375);
DEFLIT(lit_405);
DEFLIT(lit_488);
DEFLIT(lit_155);
DEFLIT(lit_365);
DEFLIT(lit_173);
DEFLIT(lit_248);
DEFLIT(lit_345);
DEFLIT(lit_205);
DEFLIT(lit_421);
DEFLIT(lit_336);
DEFLIT(lit_154);
DEFLIT(lit_630);
DEFLIT(lit_646);
DEFLIT(lit_312);
DEFLIT(lit_34);
DEFLIT(lit_382);
DEFLIT(lit_624);
DEFLIT(lit_602);
DEFLIT(lit_225);
DEFLIT(lit_635);
DEFLIT(lit_54);
DEFLIT(lit_519);
DEFLIT(lit_367);
DEFLIT(lit_152);
DEFLIT(lit_254);
DEFLIT(lit_183);
DEFLIT(lit_518);
DEFLIT(lit_566);
DEFLIT(lit_191);
DEFLIT(lit_136);
DEFLIT(lit_424);
DEFLIT(lit_247);
DEFLIT(lit_330);
DEFLIT(lit_601);
DEFLIT(lit_17);
DEFLIT(lit_220);
DEFLIT(lit_141);
DEFLIT(lit_253);
DEFLIT(lit_434);
DEFLIT(lit_427);
DEFLIT(lit_230);
DEFLIT(lit_642);
DEFLIT(lit_149);
DEFLIT(lit_634);
DEFLIT(lit_545);
DEFLIT(lit_442);
DEFLIT(lit_535);
DEFLIT(lit_241);
DEFLIT(lit_612);
DEFLIT(lit_270);
DEFLIT(lit_81);
DEFLIT(lit_589);
DEFLIT(lit_432);
DEFLIT(lit_24);
DEFLIT(lit_67);
DEFLIT(lit_418);
DEFLIT(lit_397);
DEFLIT(lit_120);
DEFLIT(lit_79);
DEFLIT(lit_151);
DEFLIT(lit_224);
DEFLIT(lit_308);
DEFLIT(lit_304);
DEFLIT(lit_209);
DEFLIT(lit_563);
DEFLIT(lit_501);
DEFLIT(lit_1);
DEFLIT(lit_291);
DEFLIT(lit_307);
DEFLIT(lit_355);
DEFLIT(lit_104);
DEFLIT(lit_266);
DEFLIT(lit_8);
DEFLIT(lit_135);
DEFLIT(lit_554);
DEFLIT(lit_472);
DEFLIT(lit_75);
DEFLIT(lit_477);
DEFLIT(lit_69);
DEFLIT(lit_85);
DEFLIT(lit_363);
DEFLIT(lit_557);
DEFLIT(lit_522);
DEFLIT(lit_325);
DEFLIT(lit_653);
DEFLIT(lit_636);
DEFLIT(lit_78);
DEFLIT(lit_648);
DEFLIT(lit_132);
DEFLIT(lit_392);
DEFLIT(lit_148);
DEFLIT(lit_506);
DEFLIT(lit_71);
DEFLIT(lit_498);
DEFLIT(lit_444);
DEFLIT(lit_354);
DEFLIT(lit_271);
DEFLIT(lit_116);
DEFLIT(lit_51);
DEFLIT(lit_134);
DEFLIT(lit_579);
DEFLIT(lit_587);
DEFLIT(lit_46);
DEFLIT(lit_482);
DEFLIT(lit_585);
DEFLIT(lit_204);
DEFLIT(lit_76);
DEFLIT(lit_317);
DEFLIT(lit_295);
DEFLIT(lit_415);
DEFLIT(lit_617);
DEFLIT(lit_236);
DEFLIT(lit_564);
DEFLIT(lit_140);
DEFLIT(lit_244);
DEFLIT(lit_208);
DEFLIT(lit_592);
DEFLIT(lit_56);
DEFLIT(lit_282);
DEFLIT(lit_215);
DEFLIT(lit_493);
DEFLIT(lit_537);
DEFLIT(lit_129);
DEFLIT(lit_166);
DEFLIT(lit_639);
DEFLIT(lit_577);
DEFLIT(lit_599);
DEFLIT(lit_182);
DEFLIT(lit_439);
DEFLIT(lit_622);
DEFLIT(lit_246);
DEFLIT(lit_55);
DEFLIT(lit_536);
DEFLIT(lit_251);
DEFLIT(lit_190);
DEFLIT(lit_529);
DEFLIT(lit_358);
DEFLIT(lit_573);
DEFLIT(lit_339);
DEFLIT(lit_273);
DEFLIT(lit_280);
DEFLIT(lit_510);
DEFLIT(lit_237);
DEFLIT(lit_33);
DEFLIT(lit_15);
DEFLIT(lit_588);
DEFLIT(lit_481);
DEFLIT(lit_234);
DEFLIT(lit_338);
DEFLIT(lit_515);
DEFLIT(lit_417);
DEFLIT(lit_181);
DEFLIT(lit_649);
DEFLIT(lit_229);
DEFLIT(lit_128);
DEFLIT(lit_430);
DEFLIT(lit_212);
DEFLIT(lit_206);
DEFLIT(lit_594);
DEFLIT(lit_640);
DEFLIT(lit_569);
DEFLIT(lit_30);
DEFLIT(lit_492);
DEFLIT(lit_184);
DEFLIT(lit_130);
DEFLIT(lit_560);
DEFLIT(lit_222);
DEFLIT(lit_13);
DEFLIT(lit_238);
DEFLIT(lit_27);
DEFLIT(lit_99);
DEFLIT(lit_600);
DEFLIT(lit_576);
DEFLIT(lit_119);
DEFLIT(lit_265);
DEFLIT(lit_66);
DEFLIT(lit_233);
DEFLIT(lit_84);
DEFLIT(lit_632);
DEFLIT(lit_396);
DEFLIT(lit_478);
DEFLIT(lit_64);
DEFLIT(lit_289);
DEFLIT(lit_127);
DEFLIT(lit_473);
DEFLIT(lit_279);
DEFLIT(lit_299);
DEFLIT(lit_431);
DEFLIT(lit_105);
DEFLIT(lit_552);
DEFLIT(lit_342);
DEFLIT(lit_70);
DEFLIT(lit_176);
DEFLIT(lit_553);
DEFLIT(lit_360);
DEFLIT(lit_303);
DEFLIT(lit_351);
DEFLIT(lit_189);
DEFLIT(lit_232);
DEFLIT(lit_315);
DEFLIT(lit_103);
DEFLIT(lit_539);
DEFLIT(lit_228);
DEFLIT(lit_329);
DEFLIT(lit_74);
DEFLIT(lit_643);
DEFLIT(lit_512);
DEFLIT(lit_521);
DEFLIT(lit_272);
DEFLIT(lit_381);
DEFLIT(lit_550);
DEFLIT(lit_609);
DEFLIT(lit_526);
DEFLIT(lit_320);
DEFLIT(lit_502);
DEFLIT(lit_138);
DEFLIT(lit_471);
DEFLIT(lit_485);
DEFLIT(lit_387);
DEFLIT(lit_357);
DEFLIT(lit_284);
DEFLIT(lit_277);
DEFLIT(lit_216);
DEFLIT(lit_578);
DEFLIT(lit_562);
DEFLIT(lit_53);
DEFLIT(lit_341);
DEFLIT(lit_117);
DEFLIT(lit_491);
DEFLIT(lit_101);
DEFLIT(lit_419);
DEFLIT(lit_6);
DEFLIT(lit_137);
DEFLIT(lit_544);
DEFLIT(lit_400);
DEFLIT(lit_63);
DEFLIT(lit_391);
DEFLIT(lit_21);
DEFLIT(lit_403);
DEFLIT(lit_523);
DEFLIT(lit_100);
DEFLIT(lit_464);
DEFLIT(lit_260);
DEFLIT(lit_65);
DEFLIT(lit_463);
DEFLIT(lit_124);
DEFLIT(lit_388);
DEFLIT(lit_18);
DEFLIT(lit_3);
DEFLIT(lit_110);
DEFLIT(lit_61);
DEFLIT(lit_654);
DEFLIT(lit_57);
DEFLIT(lit_567);
DEFLIT(lit_258);
DEFLIT(lit_261);
DEFLIT(lit_483);
DEFLIT(lit_570);
DEFLIT(lit_37);
DEFLIT(lit_538);
DEFLIT(lit_457);
DEFLIT(lit_331);
DEFLIT(lit_607);
DEFLIT(lit_259);
DEFLIT(lit_380);
DEFLIT(lit_250);
DEFLIT(lit_565);
DEFLIT(lit_616);
DEFLIT(lit_201);
DEFLIT(lit_420);
DEFLIT(lit_28);
DEFLIT(lit_102);
DEFLIT(lit_377);
DEFLIT(lit_98);
DEFLIT(lit_620);
DEFLIT(lit_568);
DEFLIT(lit_242);
DEFLIT(lit_122);
DEFLIT(lit_490);
DEFLIT(lit_262);
DEFLIT(lit_486);
DEFLIT(lit_199);
DEFLIT(lit_591);
DEFLIT(lit_393);
DEFLIT(lit_210);
DEFLIT(lit_496);
DEFLIT(lit_287);
DEFLIT(lit_561);
DEFLIT(lit_389);
DEFLIT(lit_614);
DEFLIT(lit_475);
DEFLIT(lit_426);
DEFLIT(lit_123);
DEFLIT(lit_647);
DEFLIT(lit_202);
DEFLIT(lit_62);
DEFLIT(lit_368);
DEFLIT(lit_305);
DEFLIT(lit_395);
DEFLIT(lit_113);
DEFLIT(lit_533);
DEFLIT(lit_465);
DEFLIT(lit_188);
DEFLIT(lit_467);
DEFLIT(lit_402);
DEFLIT(lit_503);
DEFLIT(lit_337);
DEFLIT(lit_466);
DEFLIT(lit_328);
DEFLIT(lit_73);
DEFLIT(lit_333);
DEFLIT(lit_114);
DEFLIT(lit_470);
DEFLIT(lit_278);
DEFLIT(lit_644);
DEFLIT(lit_178);
DEFLIT(lit_294);
DEFLIT(lit_450);
DEFLIT(lit_340);
DEFLIT(lit_412);
DEFLIT(lit_276);
DEFLIT(lit_52);
DEFLIT(lit_108);
DEFLIT(lit_12);
DEFLIT(lit_534);
DEFLIT(lit_540);
DEFLIT(lit_541);
DEFLIT(lit_429);
DEFLIT(lit_551);
DEFLIT(lit_88);
DEFLIT(lit_144);
DEFLIT(lit_179);
DEFLIT(lit_610);
DEFLIT(lit_425);
DEFLIT(lit_288);
DEFLIT(lit_39);
DEFLIT(lit_650);
DEFLIT(lit_404);
DEFLIT(lit_25);
DEFLIT(lit_170);
DEFLIT(lit_513);
DEFLIT(lit_628);
DEFLIT(lit_469);
DEFLIT(lit_350);
DEFLIT(lit_89);
DEFLIT(lit_379);
DEFLIT(lit_226);
DEFLIT(lit_344);
DEFLIT(lit_361);
DEFLIT(lit_16);
DEFLIT(lit_195);
DEFLIT(lit_511);
DEFLIT(lit_549);
DEFLIT(lit_47);
DEFLIT(lit_528);
DEFLIT(lit_445);
DEFLIT(lit_356);
DEFLIT(lit_372);
DEFLIT(lit_214);
DEFLIT(lit_219);
DEFLIT(lit_72);
DEFLIT(lit_611);
DEFLIT(lit_574);
DEFLIT(lit_153);
DEFLIT(lit_364);
DEFLIT(lit_414);
DEFLIT(lit_484);
DEFLIT(lit_520);
DEFLIT(lit_213);
DEFLIT(lit_94);
DEFLIT(lit_92);
DEFLIT(lit_411);
DEFLIT(lit_606);
DEFLIT(lit_227);
DEFLIT(lit_142);
DEFLIT(lit_652);
DEFLIT(lit_605);
DEFLIT(lit_96);
DEFLIT(lit_274);
DEFLIT(lit_495);
DEFLIT(lit_604);
DEFLIT(lit_203);
DEFLIT(lit_428);
DEFLIT(lit_516);
DEFLIT(lit_93);
DEFLIT(lit_443);
DEFLIT(lit_410);

/* FUNCTIONS: */

LOCFOR(fun_module_loader_appname_0);
LOCFOR(fun_module_loader_app_modname_1);
LOCFOR(fun_module_src_file_2);
LOCFOR(fun_module_src_file_setter_3);
LOCFOR(fun_module_mtime_4);
LOCFOR(fun_module_mtime_setter_5);
LOCFOR(fun_module_loader_module_type_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_load_module_12);
FUNFOR(YevalSg2cYmodule_up_to_dateQ);
LOCFOR(fun_14);
LOCFOR(fun_15);
FUNFOR(YevalSg2cYpurge_outdated_modules);
FUNFOR(YevalSg2cYg2c_def_app);
LOCFOR(fun_18);
LOCFOR(fun_19);
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
LOCFOR(fun_x_2102_41);
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
LOCFOR(fun_gen_binding_58);
LOCFOR(fun_generate_global_environment_59);
LOCFOR(fun_generate_global_binding_60);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_mangle_string_literal_62);
LOCFOR(fun_mangle_string_literal_63);
LOCFOR(fun_process_integer_64);
LOCFOR(fun_mangle_integer_65);
FUNFOR(YevalSg2cYmangler_reset);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_68);
LOCFOR(fun_mangle_raw_name_69);
LOCFOR(fun_mangle_local_name_70);
LOCFOR(fun_mangle_local_name_71);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_73);
LOCFOR(fun_mangle_global_name_74);
LOCFOR(fun_mangle_global_name_75);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_78);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_80);
LOCFOR(fun_mangle_binding_81);
LOCFOR(fun_x_2142_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_x_2146_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_x_2150_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_gen_result_91);
LOCFOR(fun_gen_depth_92);
LOCFOR(fun_x_2157_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_2161_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_2165_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_generate_quotation_forwards_102);
LOCFOR(fun_generate_quotations_103);
FUNFOR(YOlit);
LOCFOR(fun_105);
LOCFOR(fun_ref_lit_106);
LOCFOR(fun_generate_quotation_107);
LOCFOR(fun_false_name_108);
LOCFOR(fun_generate_quotation_109);
LOCFOR(fun_generate_quotation_110);
LOCFOR(fun_111);
LOCFOR(fun_generate_quotation_112);
LOCFOR(fun_generate_quotation_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_115);
LOCFOR(fun_float_to_c_string_116);
LOCFOR(fun_generate_quotation_117);
LOCFOR(fun_generate_quotation_118);
LOCFOR(fun_generate_quotation_119);
LOCFOR(fun_generate_quotation_120);
LOCFOR(fun_generate_quotation_121);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_123);
LOCFOR(fun_reference_Gc_124);
LOCFOR(fun_to_c_125);
LOCFOR(fun_to_c_126);
LOCFOR(fun_gen_ref_127);
LOCFOR(fun_gen_ref_128);
LOCFOR(fun_gen_ref_129);
LOCFOR(fun_gen_ref_130);
LOCFOR(fun_gen_ref_131);
LOCFOR(fun_gen_ref_132);
LOCFOR(fun_gen_ref_133);
LOCFOR(fun_gen_ref_134);
LOCFOR(fun_gen_ref_135);
LOCFOR(fun_to_c_136);
LOCFOR(fun_to_c_137);
LOCFOR(fun_to_c_138);
LOCFOR(fun_to_c_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_bbQ_141);
LOCFOR(fun_bbQ_142);
LOCFOR(fun_bbQ_143);
LOCFOR(fun_to_c_144);
LOCFOR(fun_145);
LOCFOR(fun_to_c_146);
LOCFOR(fun_147);
LOCFOR(fun_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_153);
LOCFOR(fun_154);
LOCFOR(fun_to_c_155);
LOCFOR(fun_to_c_156);
LOCFOR(fun_to_c_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_to_c_159);
LOCFOR(fun_to_c_160);
LOCFOR(fun_161);
LOCFOR(fun_162);
LOCFOR(fun_to_c_163);
LOCFOR(fun_164);
LOCFOR(fun_to_c_165);
LOCFOR(fun_funshell_to_c_166);
LOCFOR(fun_167);
LOCFOR(fun_funinit_to_c_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_out_list_builder_170);
LOCFOR(fun_171);
LOCFOR(fun_gen_fab_list_172);
LOCFOR(fun_generate_function_specs_173);
LOCFOR(fun_174);
LOCFOR(fun_to_c_175);
LOCFOR(fun_to_c_176);
LOCFOR(fun_generate_function_forwards_177);
LOCFOR(fun_178);
LOCFOR(fun_179);
LOCFOR(fun_generate_function_forward_180);
LOCFOR(fun_generate_function_binding_181);
LOCFOR(fun_generate_function_forward_182);
LOCFOR(fun_183);
LOCFOR(fun_generate_function_bodies_184);
LOCFOR(fun_185);
LOCFOR(fun_generate_functions_186);
LOCFOR(fun_generate_closure_structure_187);
LOCFOR(fun_generate_function_body_reference_188);
LOCFOR(fun_generate_return_189);
LOCFOR(fun_generate_return_190);
LOCFOR(fun_191);
LOCFOR(fun_192);
LOCFOR(fun_generate_function_code_193);
LOCFOR(fun_dispatcherQ_194);
LOCFOR(fun_195);
LOCFOR(fun_196);
LOCFOR(fun_197);
LOCFOR(fun_generate_function_code_198);
LOCFOR(fun_generate_local_temporaries_199);
LOCFOR(fun_generate_registers_200);
LOCFOR(fun_module_info_name_201);
LOCFOR(fun_maybe_declare_202);
LOCFOR(fun_203);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_205);
LOCFOR(fun_206);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_208);
LOCFOR(fun_module_init_decl_209);
LOCFOR(fun_generate_module_init_210);
LOCFOR(fun_generate_main_211);
extern P YevalSg2cY___main_0___ ();
extern P YevalSg2cY___main_1___ ();
extern P YevalSg2cY___main_2___ ();
extern P YevalSg2cY___main_3___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_app_modname_1) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_src_file_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_src_file_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mtime_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mtime_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_module_type_6) {
  P loader_;
LINK_STACK();
  ARG(loader_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSg2cYLg2c_moduleG));
}

LOCCODEDEF(fun_7) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXGET(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_8) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P x_2094F5695;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_2094F5695 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_7,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_8,1,x_2094F5695);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_10) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_11) {
  P name_;
  P tmpF5699;
  P src_fileF5698;
  P build_fileF5697;
  P fileF5696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  fileF5696 = T10;
  T9 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF5696);
  build_fileF5697 = T9;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF5696);
  src_fileF5698 = T8;
  T6 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF5697);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF5699 = T5;
  if (tmpF5699 != YPfalse) {
    T1 = tmpF5699;
  } else {
    T3 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF5698);
    T4 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF5697);
    T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF5698,build_fileF5697);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_load_module_12) {
  P loader_,name_;
  P out_portF5709;
  P prgF5708;
  P astF5707;
  P out_fileF5706;
  P appnameF5705;
  P src_fileF5704;
  P fileF5703;
  P envF5702;
  P keepmodQF5701;
  P modF5700;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T20 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF5700 = T20;
  keepmodQF5701 = YPfalse;
  T19 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF5700);
  envF5702 = T19;
  T18 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  fileF5703 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF5703);
  T16 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T17);
  src_fileF5704 = T16;
  T15 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF5705 = T15;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF5703);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF5705,T14);
  out_fileF5706 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF5704,modF5700);
  T0 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF5704);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T0,modF5700);
  T1 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF5704,envF5702);
  astF5707 = T12;
  T11 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF5707,envF5702);
  prgF5708 = T11;
  T2 = (P)YPsu(LITREF(lit_19));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T3 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF5706);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T3);
  out_portF5709 = YPfalse;
  out_portF5709 = BOXFAB(out_portF5709);
  T6 = FUNFAB(fun_9,5,out_portF5709,out_fileF5706,prgF5708,astF5707,modF5700);
  T7 = FUNFAB(fun_10,1,out_portF5709);
  T5 = with_cleanup(T6,T7);
  T8 = FUNFAB(fun_11,1,appnameF5705);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),modF5700);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,T9);
  T10 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T10);
UNLINK_STACK();
  RET(modF5700);
}

FUNCODEDEF(YevalSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_src_file),mod_);
  T2 = CALL1(1,VARREF(YgooSsystemYfile_mtime),T3);
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_14) {
  P mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXGET(FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,T6);
    T3 = BOXPUT(T4,FREEREF(0));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P name_;
  P x_2095F5710;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  x_2095F5710 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2095F5710,name_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2095F5710,LITREF(lit_29));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF5711;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(loader_, 0);
  changedF5711 = Ynil;
  changedF5711 = BOXFAB(changedF5711);
  T1 = FUNFAB(fun_14,1,changedF5711);
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T1,loader_);
  T2 = fun_15;
  T3 = BOXGET(changedF5711);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
  T5 = BOXGET(changedF5711);
  T4 = CALL2(1,VARREF(YevalSmoduleYremove_modules_by_nameX),loader_,T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YevalSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_18) {
  P modF5712;
  P T0,T1;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPfalse);
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),FREEREF(0));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYprobe_module),FREEREF(0),T1);
  modF5712 = T0;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_34));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),VARREF(YevalSmoduleYreport_undefined_global_bindings),FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),FREEREF(0),modF5712);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_19) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P x_2096F5713;
  P T0,T1,T2;
LINK_STACK();
  ARG(loader_, 0);
  x_2096F5713 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_18,1,loader_);
  T2 = FUNFAB(fun_19,1,x_2096F5713);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YgooSanyYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_37),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_38));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXGET(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_23) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P x_2098F5714;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  x_2098F5714 = DYNREF(YevalSg2cYTdefinitionsT);
  T1 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_23,1,x_2098F5714);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_25) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_26) {
  P x_2097F5715;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_2097F5715 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T2 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_25,1,x_2097F5715);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_27) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_ast_28) {
  P ast_,env_;
  P out_portF5721;
  P prgF5720;
  P out_fileF5719;
  P fileF5718;
  P nameF5717;
  P modF5716;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),env_);
  modF5716 = T11;
  T8 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T10 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T9 = DYNSET(YevalSg2cYTtmp_file_counterT,T10);
  T7 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_41),T8,T9);
  nameF5717 = T7;
  T6 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF5717);
  fileF5718 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF5718);
  out_fileF5719 = T5;
  T4 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF5720 = T4;
  out_portF5721 = YPfalse;
  out_portF5721 = BOXFAB(out_portF5721);
  T2 = FUNFAB(fun_26,5,out_portF5721,out_fileF5719,prgF5720,ast_,modF5716);
  T3 = FUNFAB(fun_27,1,out_portF5721);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(fileF5718);
}

LOCCODEDEF(fun_g2c_exp_29) {
  P exp_,env_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,DYNREF(YevalSmoduleYTdynamic_compilationQT),YPfalse);
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_compile_load_30) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
  T0 = (P)YPsu(T1);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_46));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_47));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF5722;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF5722 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF5722);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF5723;
  P T0,T1;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF5723 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF5723);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_top_33) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_clean_34) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_54),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P astF5725;
  P sexprF5724;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T3 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF5724 = T3;
  T0 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T2 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF5724,ct_env_,DYNREF(YevalSmoduleYTdynamic_compilationQT),YPfalse);
  astF5725 = T2;
  T1 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T1);
UNLINK_STACK();
  QRET(astF5725);
}

LOCCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF5730;
  P prgF5729;
  P lftF5728;
  P boxF5727;
  P anaF5726;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),e_,env_);
  anaF5726 = T11;
  T0 = (P)YPsu(LITREF(lit_61));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF5726);
  boxF5727 = T10;
  T1 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF5727);
  lftF5728 = T9;
  T2 = (P)YPsu(LITREF(lit_63));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF5728);
  prgF5729 = T8;
  T3 = (P)YPsu(LITREF(lit_64));
  (P)YevalSg2cYPprint_cpu_usage(T3);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF5729,env_,YPint((P)50));
  fltF5730 = T7;
  T4 = (P)YPsu(LITREF(lit_65));
  (P)YevalSg2cYPprint_cpu_usage(T4);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF5730);
  T5 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF5730,YPfalse);
  T6 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T6);
UNLINK_STACK();
  QRET(prgF5729);
}

LOCCODEDEF(fun_generate_c_module_37) {
  P out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL2(1,VARREF(YevalSg2cYgenerate_header),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),out_,mod_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),out_,T2);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),out_,T3);
  T4 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),out_,mod_);
  } else {
  }
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),out_,mod_,T6);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),out_);
UNLINK_STACK();
  QRET(prg_);
}

LOCCODEDEF(fun_38) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T1 = BOXGET(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,FREEREF(2));
  T2 = BOXGET(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(3));
  T4 = BOXGET(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_39) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_c_application_40) {
  P loader_,mod_;
  P out_portF5734;
  P out_nameF5733;
  P init_nameF5732;
  P appnameF5731;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF5731 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF5731,LITREF(lit_72));
  init_nameF5732 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF5732);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF5731,T5);
  out_nameF5733 = T4;
  out_portF5734 = YPfalse;
  out_portF5734 = BOXFAB(out_portF5734);
  T2 = FUNFAB(fun_38,4,out_portF5734,out_nameF5733,appnameF5731,mod_);
  T3 = FUNFAB(fun_39,1,out_portF5734);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_x_2102_41) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_77),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_42) {
  P return_;
  P x_2101F5747;
  P x_2101F5746;
  P x_2101F5745;
  P x_2101F5744;
  P x_2101F5743;
  P x_2101F5742;
  P x_2101F5741;
  P x_2101F5740;
  P bodyF5739;
  P loaderF5738;
  P modF5737;
  P x_2101F5736;
  P x_2102F5735;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(return_, 0);
  T29 = FUNSHELL(0,fun_x_2102_41,2);
  x_2102F5735 = T29;
  FUNINIT(x_2102F5735, 2,FREEREF(0),return_);
  x_2101F5736 = FREEREF(0);
  modF5737 = YPfalse;
  loaderF5738 = YPfalse;
  bodyF5739 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2101F5736,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2101F5736,LITREF(lit_77),x_2102F5735);
    x_2101F5740 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2101F5740,x_2102F5735);
    x_2101F5741 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2101F5741,x_2102F5735);
    modF5737 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2101F5741);
    x_2101F5742 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2101F5742,x_2102F5735);
    loaderF5738 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2101F5742);
    x_2101F5743 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2101F5743,x_2102F5735);
    x_2101F5744 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2101F5744,x_2102F5735);
    T8 = CALL1(1,VARREF(Ytail),x_2101F5743);
    x_2101F5745 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2101F5745,x_2102F5735);
    T14 = CALL1(1,VARREF(Ytail),x_2101F5740);
    x_2101F5746 = T14;
    bodyF5739 = x_2101F5746;
    x_2101F5747 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2101F5747,x_2102F5735);
  } else {
    T16 = CALL2(1,x_2102F5735,LITREF(lit_78),x_2101F5736);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T25 = modF5737;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = bodyF5739;
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T26,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = loaderF5738;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T27,LITREF(lit_81));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_44) {
  P i_;
  P x_2106F5748;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  T1 = BOXGET(FREEREF(0));
  x_2106F5748 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_2106F5748,LITREF(lit_93));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2106F5748,i_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2106F5748,LITREF(lit_94));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_45) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_44,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_put_obj_46) {
  P name_;
  P x_2109F5749;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = BOXGET(FREEREF(0));
  x_2109F5749 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_2109F5749,LITREF(lit_100));
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  T0 = CALL1(1,VARREF(YgooSsystemYobj_filename),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2109F5749,T0);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2109F5749,LITREF(lit_101));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_47) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_103));
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),name_);
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,YPint((P)2));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),name_,YPint((P)0),T5);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T4);
    T2 = CALL1(0,FREEREF(0),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_48) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),n_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_49) {
  P mod_;
  P put_objF5750;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T6 = FUNSHELL(1,fun_put_obj_46,1);
  put_objF5750 = T6;
  FUNINIT(put_objF5750, 1,FREEREF(0));
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL1(0,put_objF5750,T0);
  T2 = FUNFAB(fun_47,1,put_objF5750);
  T4 = fun_48;
  T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),mod_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_50) {
  P l_;
  P x_2113F5751;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  T1 = BOXGET(FREEREF(0));
  x_2113F5751 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_2113F5751,LITREF(lit_112));
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2113F5751,l_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_51) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_50,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_52) {
  P x_2114F5760;
  P x_2112F5759;
  P x_2111F5758;
  P x_2110F5757;
  P x_2108F5756;
  P x_2107F5755;
  P x_2105F5754;
  P x_2104F5753;
  P x_2103F5752;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  x_2103F5752 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),x_2103F5752,LITREF(lit_86));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2103F5752,FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2103F5752,LITREF(lit_87));
  T4 = BOXGET(FREEREF(0));
  x_2104F5753 = T4;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2104F5753,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2104F5753,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_2104F5753,LITREF(lit_88));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2104F5753,FREEREF(2));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2104F5753,LITREF(lit_89));
  T6 = BOXGET(FREEREF(0));
  x_2105F5754 = T6;
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2105F5754,LITREF(lit_90));
  T7 = FUNFAB(fun_45,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T7,FREEREF(3));
  T9 = BOXGET(FREEREF(0));
  x_2107F5755 = T9;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_2107F5755,LITREF(lit_95));
  T11 = BOXGET(FREEREF(0));
  x_2108F5756 = T11;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_2108F5756,LITREF(lit_96));
  T12 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T12,FREEREF(3));
  T15 = BOXGET(FREEREF(0));
  x_2110F5757 = T15;
  CALL2(1,VARREF(YgooSioSportYputs),x_2110F5757,LITREF(lit_105));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2110F5757,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_2110F5757,LITREF(lit_106));
  T17 = BOXGET(FREEREF(0));
  x_2111F5758 = T17;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2111F5758,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_2111F5758,LITREF(lit_107));
  T19 = BOXGET(FREEREF(0));
  x_2112F5759 = T19;
  CALL2(1,VARREF(YgooSioSportYputs),x_2112F5759,LITREF(lit_108));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2112F5759,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_2112F5759,LITREF(lit_109));
  T20 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXGET(FREEREF(0));
  x_2114F5760 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_2114F5760,LITREF(lit_113));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2114F5760,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_2114F5760,LITREF(lit_114));
UNLINK_STACK();
  QRET(T21);
}

LOCCODEDEF(fun_53) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_makefile_54) {
  P loader_;
  P outF5766;
  P out_nameF5765;
  P sepF5764;
  P exe_nameF5763;
  P init_nameF5762;
  P appnameF5761;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF5761 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF5761,LITREF(lit_84));
  init_nameF5762 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF5761);
  exe_nameF5763 = T5;
  sepF5764 = VARREF(YgooSsystemYTpath_separatorT);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF5761,LITREF(lit_85));
  out_nameF5765 = T4;
  outF5766 = YPfalse;
  outF5766 = BOXFAB(outF5766);
  T2 = FUNFAB(fun_52,6,outF5766,out_nameF5765,sepF5764,loader_,init_nameF5762,exe_nameF5763);
  T3 = FUNFAB(fun_53,1,outF5766);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_pp_55) {
  P e_,out_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),out_,e_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_header_56) {
  P out_,modname_;
  P x_2123F5776;
  P x_2122F5775;
  P x_2121F5774;
  P x_2120F5773;
  P x_2119F5772;
  P x_2118F5771;
  P x_2117F5770;
  P x_2116F5769;
  P x_2115F5768;
  P modvarF5767;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(modname_, 1);
  modvarF5767 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_2115F5768 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2115F5768,LITREF(lit_120));
  x_2116F5769 = out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2116F5769,LITREF(lit_121));
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    x_2117F5770 = out_;
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2117F5770,LITREF(lit_122));
  } else {
  }
  x_2118F5771 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2118F5771,LITREF(lit_123));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2118F5771,modvarF5767);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2118F5771,LITREF(lit_124));
  x_2119F5772 = out_;
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2119F5772,LITREF(lit_125));
  x_2120F5773 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2120F5773,LITREF(lit_126));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2120F5773,modvarF5767);
  CALL2(1,VARREF(YgooSioSportYputs),x_2120F5773,LITREF(lit_127));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2120F5773,modvarF5767);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2120F5773,LITREF(lit_128));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,modname_);
  x_2121F5774 = out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2121F5774,LITREF(lit_129));
  x_2122F5775 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2122F5775,LITREF(lit_130));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_131));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2122F5775,T7);
  CALL2(1,VARREF(YgooSioSportYputs),x_2122F5775,LITREF(lit_132));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_133));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2122F5775,T8);
  CALL2(1,VARREF(YgooSioSportYputs),x_2122F5775,LITREF(lit_134));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2122F5775,modvarF5767);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_2122F5775,LITREF(lit_135));
  x_2123F5776 = out_;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_2123F5776,LITREF(lit_136));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_trailer_57) {
  P out_;
  P x_2124F5777;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  x_2124F5777 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2124F5777,LITREF(lit_139));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_binding_58) {
  P b_;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),b_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YevalSg2cYgenerate_global_binding),FREEREF(0),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_global_environment_59) {
  P out_,mod_;
  P gen_bindingF5779;
  P x_2125F5778;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  x_2125F5778 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2125F5778,LITREF(lit_142));
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2125F5778,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2125F5778,LITREF(lit_143));
  T7 = FUNSHELL(0,fun_gen_binding_58,2);
  gen_bindingF5779 = T7;
  FUNINIT(gen_bindingF5779, 2,out_,mod_);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_referenced_bindings),mod_);
    T3 = CALL2(1,VARREF(YgooSmacrosYdo),gen_bindingF5779,T4);
    T2 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
    T5 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),gen_bindingF5779,T6);
    T2 = T5;
  }
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_global_binding_60) {
  P out_,importedQ_,gb_;
  P x_2128F5786;
  P x_2127F5785;
  P x_2126F5784;
  P nameF5783;
  P tmpF5782;
  P tmpF5781;
  P kindF5780;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
  T17 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),gb_);
  kindF5780 = T17;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),kindF5780,LITREF(lit_148));
  tmpF5781 = T5;
  if (tmpF5781 != YPfalse) {
    T1 = tmpF5781;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF5780,LITREF(lit_149));
    tmpF5782 = T4;
    if (tmpF5782 != YPfalse) {
      T2 = tmpF5782;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),kindF5780,LITREF(lit_150));
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),gb_);
    nameF5783 = T16;
    x_2126F5784 = kindF5780;
    x_2127F5785 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_2127F5785,x_2126F5784,LITREF(lit_149));
    if (T7 != YPfalse) {
      T6 = LITREF(lit_151);
    } else {
      T9 = CALL2(1,x_2127F5785,x_2126F5784,LITREF(lit_150));
      if (T9 != YPfalse) {
        T8 = LITREF(lit_152);
      } else {
        T8 = LITREF(lit_153);
      }
      T6 = T8;
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    x_2128F5786 = out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_154);
    } else {
      T10 = LITREF(lit_155);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2128F5786,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_2128F5786,LITREF(lit_156));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2128F5786,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_2128F5786,LITREF(lit_157));
    T13 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2128F5786,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_2128F5786,LITREF(lit_158));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF5783);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2128F5786,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2128F5786,LITREF(lit_159));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P iF5789;
  P stringF5788;
  P buffer_sizeF5787;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(buffer_, 0);
  T6 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T6,VARREF(YLintG));
  buffer_sizeF5787 = T6;
  T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF5787);
  check_type(T5,VARREF(YLstrG));
  stringF5788 = T5;
  iF5789 = YPint((P)0);
  LOOP_298: {
    P a298_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF5789,buffer_sizeF5787);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),buffer_,iF5789);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,stringF5788,iF5789);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF5789,YPint((P)1));
      a298_0 = T4;
      iF5789 = a298_0;
      goto LOOP_298;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(stringF5788);
}

LOCCODEDEF(fun_mangle_string_literal_62) {
  P str_;
  P encF5793;
  P cF5792;
  P iF5791;
  P lenF5790;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(str_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T11 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF5790 = T11;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
  iF5791 = YPint((P)0);
  LOOP_299: {
    P a299_0;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF5791,lenF5790);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
      T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
      T0 = T2;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),str_,iF5791);
      cF5792 = T10;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF5792);
      T8 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T9);
      encF5793 = T8;
      T3 = CALL2(1,VARREF(YgooSlogYE),encF5793,YPfalse);
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF5792);
      } else {
        T5 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF5793);
      }
      T7 = CALL2(1,VARREF(YgooSmathYA),iF5791,YPint((P)1));
      a299_0 = T7;
      iF5791 = a299_0;
      goto LOOP_299;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_string_literal_63) {
  P sym_;
  P T0,T1;
LINK_STACK();
  ARG(sym_, 0);
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_process_integer_64) {
  P number_,index_;
  P resultF5799;
  P resultF5798;
  P digitF5797;
  P remainderF5796;
  P quotientF5795;
  P tup41F5794;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
  T10 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup41F5794 = T10;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F5794,YPint((P)0));
  check_type(T9,VARREF(YLintG));
  quotientF5795 = T9;
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F5794,YPint((P)1));
  check_type(T8,VARREF(YLintG));
  remainderF5796 = T8;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF5796);
  check_type(T7,VARREF(YLchrG));
  digitF5797 = T7;
  T1 = CALL2(1,VARREF(YgooSlogYE),quotientF5795,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T2,VARREF(YgooScolsSvecYLvecG));
    resultF5798 = T2;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF5797,resultF5798,YPint((P)0));
    T0 = resultF5798;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T5 = CALL2(1,FREEREF(0),quotientF5795,T6);
    check_type(T5,VARREF(YgooScolsSvecYLvecG));
    resultF5799 = T5;
    T4 = CALL1(1,VARREF(YgooStypesYlen),resultF5799);
    T3 = CALL2(1,VARREF(YgooSmathY_),T4,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF5797,resultF5799,T3);
    T0 = resultF5799;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_integer_65) {
  P number_;
  P process_integerF5800;
  P T0,T1,T2;
LINK_STACK();
  ARG(number_, 0);
  T2 = FUNSHELL(1,fun_process_integer_64,1);
  process_integerF5800 = T2;
  FUNINIT(process_integerF5800, 1,process_integerF5800);
  T1 = CALL2(1,process_integerF5800,number_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangler_reset) {
  P buffer_;
  P T0;
LINK_STACK();
  ARG(buffer_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_name_into) {
  P buf_,name_;
  P cF5802;
  P x_2137F5801;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  x_2137F5801 = T9;
  LOOP_300: {
    P a300_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2137F5801);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2137F5801);
      cF5802 = T8;
      T5 = CALL1(1,VARREF(YgooSchrYto_lower),cF5802);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T5);
      T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T4);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T3);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2137F5801);
      a300_0 = T7;
      x_2137F5801 = a300_0;
      goto LOOP_300;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(buf_);
}

LOCCODEDEF(fun_mangle_raw_name_68) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_raw_name_69) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_local_name_70) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_local_name_71) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYbuf_cat2X) {
  P buf_,name_;
  P iF5804;
  P lenF5803;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T5 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF5803 = T5;
  iF5804 = YPint((P)0);
  LOOP_301: {
    P a301_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF5804,lenF5803);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),name_,iF5804);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T2);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF5804,YPint((P)1));
      a301_0 = T4;
      iF5804 = a301_0;
      goto LOOP_301;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_module_into_73) {
  P buf_,mod_;
  P nameF5807;
  P tmpF5806;
  P UF5805;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_mangled_name),mod_);
  UF5805 = T9;
  T8 = CALL1(1,VARREF(YevalSmoduleYmodule_mangled_name),mod_);
  tmpF5806 = T8;
  if (tmpF5806 != YPfalse) {
    T1 = tmpF5806;
  } else {
    T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T7 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T5,T6);
    T3 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T4);
    T2 = CALL2(1,VARREF(YevalSmoduleYmodule_mangled_name_setter),T3,mod_);
    T1 = T2;
  }
  nameF5807 = T1;
  T0 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF5807);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_global_name_74) {
  P mod_,name_;
  P tmpF5808;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  tmpF5808 = T4;
  if (tmpF5808 != YPfalse) {
    T1 = tmpF5808;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,VARREF(YevalSmoduleYDgoo_boot_module_name));
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T5 = CALL2(1,VARREF(YevalSg2cYmangle_module_into),VARREF(YevalSg2cYTmangle_bufferT),mod_);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T6 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_mangle_global_name_75) {
  P mod_,name_;
  P T0,T1;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),mod_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_boot_name) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSmoduleYDgoo_boot_module_name),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_quotation_name) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_221));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_mangle_binding_78) {
  P binding_;
  P tmpF5810;
  P UF5809;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(binding_, 0);
  T11 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF5809 = T11;
  T10 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF5810 = T10;
  if (tmpF5810 != YPfalse) {
    T0 = tmpF5810;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_224));
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T5 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T6);
      T2 = T5;
    } else {
      T8 = CALL1(1,VARREF(YevalSmoduleYbinding_module),binding_);
      T9 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T7 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T8,T9);
      T2 = T7;
    }
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_local_marked_name) {
  P name_,marker_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_mangle_binding_80) {
  P binding_;
  P tmpF5812;
  P UF5811;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  T5 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF5811 = T5;
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF5812 = T4;
  if (tmpF5812 != YPfalse) {
    T0 = tmpF5812;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T3);
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_binding_81) {
  P binding_;
  P tmpF5814;
  P UF5813;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(binding_, 0);
  T7 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF5813 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF5814 = T6;
  if (tmpF5814 != YPfalse) {
    T0 = tmpF5814;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T4);
    T5 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T2 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T3,T5);
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2142_82) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_233),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_83) {
  P return_;
  P out_varF5828;
  P x_2141F5827;
  P x_2141F5826;
  P x_2141F5825;
  P x_2141F5824;
  P x_2141F5823;
  P x_2141F5822;
  P x_2141F5821;
  P x_2141F5820;
  P bodyF5819;
  P clausesF5818;
  P out_valF5817;
  P x_2141F5816;
  P x_2142F5815;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
LINK_STACK();
  ARG(return_, 0);
  T55 = FUNSHELL(0,fun_x_2142_82,2);
  x_2142F5815 = T55;
  FUNINIT(x_2142F5815, 2,FREEREF(0),return_);
  x_2141F5816 = FREEREF(0);
  out_valF5817 = YPfalse;
  clausesF5818 = YPfalse;
  bodyF5819 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2141F5816,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2141F5816,LITREF(lit_233),x_2142F5815);
    x_2141F5820 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2141F5820,x_2142F5815);
    out_valF5817 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2141F5820);
    x_2141F5821 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2141F5821,x_2142F5815);
    x_2141F5822 = T9;
    clausesF5818 = x_2141F5822;
    x_2141F5823 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2141F5823,x_2142F5815);
    x_2141F5824 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2141F5824,x_2142F5815);
    T8 = CALL1(1,VARREF(Ytail),x_2141F5823);
    x_2141F5825 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2141F5825,x_2142F5815);
    T10 = CALL1(1,VARREF(Ytail),x_2141F5821);
    x_2141F5826 = T10;
    bodyF5819 = x_2141F5826;
    x_2141F5827 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2141F5827,x_2142F5815);
  } else {
    T14 = CALL2(1,x_2142F5815,LITREF(lit_78),x_2141F5816);
  }
  T54 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF5828 = T54;
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T21 = CALL1(1,VARREF(Ylst),out_varF5828);
  T23 = out_valF5817;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_81));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_235));
  T29 = clausesF5818;
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_236));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_238));
  T39 = CALL1(1,VARREF(Ylst),YPtrue);
  T37 = CALL3(1,VARREF(YgooSmacrosYcat),T38,T39,LITREF(lit_81));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_238));
  T43 = CALL1(1,VARREF(Ylst),YPfalse);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_81));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T40,LITREF(lit_81));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_81));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_236));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T51 = CALL1(1,VARREF(Ylst),out_varF5828);
  T52 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T52,LITREF(lit_81));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T48,LITREF(lit_81));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T53 = bodyF5819;
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T44,T53,LITREF(lit_81));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T24,LITREF(lit_81));
UNLINK_STACK();
  QRET(T15);
}

LOCCODEDEF(fun_84) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_83,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2146_85) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_245),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_86) {
  P return_;
  P out_varF5840;
  P x_2145F5839;
  P x_2145F5838;
  P x_2145F5837;
  P x_2145F5836;
  P x_2145F5835;
  P x_2145F5834;
  P x_2145F5833;
  P bodyF5832;
  P out_valF5831;
  P x_2145F5830;
  P x_2146F5829;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(return_, 0);
  T35 = FUNSHELL(0,fun_x_2146_85,2);
  x_2146F5829 = T35;
  FUNINIT(x_2146F5829, 2,FREEREF(0),return_);
  x_2145F5830 = FREEREF(0);
  out_valF5831 = YPfalse;
  bodyF5832 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2145F5830,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2145F5830,LITREF(lit_245),x_2146F5829);
    x_2145F5833 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2145F5833,x_2146F5829);
    x_2145F5834 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2145F5834,x_2146F5829);
    out_valF5831 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_2145F5834);
    x_2145F5835 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2145F5835,x_2146F5829);
    x_2145F5836 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2145F5836,x_2146F5829);
    T7 = CALL1(1,VARREF(Ytail),x_2145F5835);
    x_2145F5837 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2145F5837,x_2146F5829);
    T11 = CALL1(1,VARREF(Ytail),x_2145F5833);
    x_2145F5838 = T11;
    bodyF5832 = x_2145F5838;
    x_2145F5839 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2145F5839,x_2146F5829);
  } else {
    T13 = CALL2(1,x_2146F5829,LITREF(lit_78),x_2145F5830);
  }
  T34 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF5840 = T34;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T20 = CALL1(1,VARREF(Ylst),out_varF5840);
  T22 = out_valF5831;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_81));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T17 = CALL2(1,VARREF(YgooSmacrosYcat),T18,LITREF(lit_81));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T26 = CALL1(1,VARREF(Ylst),out_varF5840);
  T27 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_81));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T28 = bodyF5832;
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T32 = CALL1(1,VARREF(Ylst),out_varF5840);
  T33 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,LITREF(lit_81));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),6,T15,T16,T23,T28,T29,LITREF(lit_81));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_87) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_86,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2150_88) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_250),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_89) {
  P return_;
  P tmpF5856;
  P firstQF5855;
  P bodyF5854;
  P formsF5853;
  P out_varF5852;
  P x_2149F5851;
  P x_2149F5850;
  P x_2149F5849;
  P x_2149F5848;
  P x_2149F5847;
  P x_2149F5846;
  P x_2149F5845;
  P bodyF5844;
  P out_valF5843;
  P x_2149F5842;
  P x_2150F5841;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
LINK_STACK();
  ARG(return_, 0);
  T48 = FUNSHELL(0,fun_x_2150_88,2);
  x_2150F5841 = T48;
  FUNINIT(x_2150F5841, 2,FREEREF(0),return_);
  x_2149F5842 = FREEREF(0);
  out_valF5843 = YPfalse;
  bodyF5844 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2149F5842,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2149F5842,LITREF(lit_250),x_2150F5841);
    x_2149F5845 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2149F5845,x_2150F5841);
    x_2149F5846 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2149F5846,x_2150F5841);
    out_valF5843 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_2149F5846);
    x_2149F5847 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2149F5847,x_2150F5841);
    x_2149F5848 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2149F5848,x_2150F5841);
    T7 = CALL1(1,VARREF(Ytail),x_2149F5847);
    x_2149F5849 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2149F5849,x_2150F5841);
    T11 = CALL1(1,VARREF(Ytail),x_2149F5845);
    x_2149F5850 = T11;
    bodyF5844 = x_2149F5850;
    x_2149F5851 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2149F5851,x_2150F5841);
  } else {
    T13 = CALL2(1,x_2150F5841,LITREF(lit_78),x_2149F5842);
  }
  T47 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF5852 = T47;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T20 = CALL1(1,VARREF(Ylst),out_varF5852);
  T22 = out_valF5843;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_81));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T17 = CALL2(1,VARREF(YgooSmacrosYcat),T18,LITREF(lit_81));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T26 = CALL1(1,VARREF(Ylst),out_varF5852);
  T27 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_81));
  T23 = CALL1(1,VARREF(Ylst),T24);
  formsF5853 = Ynil;
  T41 = bodyF5844;
  bodyF5854 = T41;
  firstQF5855 = YPtrue;
  LOOP_302: {
    P a302_0,a302_1,a302_2;
    T29 = CALL1(1,VARREF(YgooSmacrosYnulQ),bodyF5854);
    if (T29 != YPfalse) {
      T30 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF5853);
      T28 = T30;
    } else {
      T33 = CALL1(1,VARREF(Yhead),bodyF5854);
      tmpF5856 = firstQF5855;
      if (tmpF5856 != YPfalse) {
        T35 = tmpF5856;
      } else {
        T37 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
        T38 = CALL1(1,VARREF(Ylst),out_varF5852);
        T39 = CALL1(1,VARREF(Ylst),YPchr((P)44));
        T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T39,LITREF(lit_81));
        T35 = T36;
      }
      T34 = CALL2(1,VARREF(YgooSmacrosYpair),T35,formsF5853);
      T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,T34);
      T40 = CALL1(1,VARREF(Ytail),bodyF5854);
      a302_0 = T32;
      a302_1 = T40;
      a302_2 = YPfalse;
      formsF5853 = a302_0;
      bodyF5854 = a302_1;
      firstQF5855 = a302_2;
      goto LOOP_302;
      T28 = T31;
    }
  }
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T45 = CALL1(1,VARREF(Ylst),out_varF5852);
  T46 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,LITREF(lit_81));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),6,T15,T16,T23,T28,T42,LITREF(lit_81));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_90) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_89,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_result_91) {
  P e_,d_,out_;
  P x_2151F5858;
  P regF5857;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF5857 = T4;
  if (regF5857 != YPfalse) {
    x_2151F5858 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2151F5858,LITREF(lit_253));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF5857);
    CALL2(1,VARREF(YgooSioSportYputs),x_2151F5858,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2151F5858,LITREF(lit_254));
    if (T3 != YPfalse) {
      T1 = YPtrue;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_gen_depth_92) {
  P d_,out_;
  P iF5860;
  P x_2152F5859;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(d_, 0);
  ARG(out_, 1);
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2152F5859 = T6;
  LOOP_303: {
    P a303_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2152F5859);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2152F5859);
      iF5860 = T5;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_257));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2152F5859);
      a303_0 = T4;
      x_2152F5859 = a303_0;
      goto LOOP_303;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2157_93) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_262),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_94) {
  P return_;
  P x_2156F5873;
  P x_2156F5872;
  P x_2156F5871;
  P x_2156F5870;
  P x_2156F5869;
  P x_2156F5868;
  P x_2156F5867;
  P x_2156F5866;
  P bodyF5865;
  P outF5864;
  P dF5863;
  P x_2156F5862;
  P x_2157F5861;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_2157_93,2);
  x_2157F5861 = T33;
  FUNINIT(x_2157F5861, 2,FREEREF(0),return_);
  x_2156F5862 = FREEREF(0);
  dF5863 = YPfalse;
  outF5864 = YPfalse;
  bodyF5865 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2156F5862,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2156F5862,LITREF(lit_262),x_2157F5861);
    x_2156F5866 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2156F5866,x_2157F5861);
    x_2156F5867 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2156F5867,x_2157F5861);
    dF5863 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2156F5867);
    x_2156F5868 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2156F5868,x_2157F5861);
    outF5864 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2156F5868);
    x_2156F5869 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2156F5869,x_2157F5861);
    x_2156F5870 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2156F5870,x_2157F5861);
    T8 = CALL1(1,VARREF(Ytail),x_2156F5869);
    x_2156F5871 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2156F5871,x_2157F5861);
    T14 = CALL1(1,VARREF(Ytail),x_2156F5866);
    x_2156F5872 = T14;
    bodyF5865 = x_2156F5872;
    x_2156F5873 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2156F5873,x_2157F5861);
  } else {
    T16 = CALL2(1,x_2157F5861,LITREF(lit_78),x_2156F5862);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_255));
  T23 = dF5863;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T25 = outF5864;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T24,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = bodyF5865;
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T31 = outF5864;
  T30 = CALL1(1,VARREF(Ylst),T31);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_265));
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,LITREF(lit_81));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T17 = CALL5(1,VARREF(YgooSmacrosYcat),T18,T19,T26,T27,LITREF(lit_81));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_95) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2161_96) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_270),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_97) {
  P return_;
  P x_2160F5888;
  P x_2160F5887;
  P x_2160F5886;
  P x_2160F5885;
  P x_2160F5884;
  P x_2160F5883;
  P x_2160F5882;
  P x_2160F5881;
  P x_2160F5880;
  P bodyF5879;
  P outF5878;
  P dF5877;
  P eF5876;
  P x_2160F5875;
  P x_2161F5874;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_2161_96,2);
  x_2161F5874 = T38;
  FUNINIT(x_2161F5874, 2,FREEREF(0),return_);
  x_2160F5875 = FREEREF(0);
  eF5876 = YPfalse;
  dF5877 = YPfalse;
  outF5878 = YPfalse;
  bodyF5879 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_2160F5875,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2160F5875,LITREF(lit_270),x_2161F5874);
    x_2160F5880 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2160F5880,x_2161F5874);
    x_2160F5881 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2160F5881,x_2161F5874);
    eF5876 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2160F5881);
    x_2160F5882 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2160F5882,x_2161F5874);
    dF5877 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2160F5882);
    x_2160F5883 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2160F5883,x_2161F5874);
    outF5878 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_2160F5883);
    x_2160F5884 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2160F5884,x_2161F5874);
    x_2160F5885 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2160F5885,x_2161F5874);
    T9 = CALL1(1,VARREF(Ytail),x_2160F5884);
    x_2160F5886 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2160F5886,x_2161F5874);
    T17 = CALL1(1,VARREF(Ytail),x_2160F5880);
    x_2160F5887 = T17;
    bodyF5879 = x_2160F5887;
    x_2160F5888 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2160F5888,x_2161F5874);
  } else {
    T19 = CALL2(1,x_2161F5874,LITREF(lit_78),x_2160F5875);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T25 = dF5877;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T27 = outF5878;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T26,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_251));
  T32 = eF5876;
  T31 = CALL1(1,VARREF(Ylst),T32);
  T34 = dF5877;
  T33 = CALL1(1,VARREF(Ylst),T34);
  T36 = outF5878;
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL5(1,VARREF(YgooSmacrosYcat),T30,T31,T33,T35,LITREF(lit_81));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T37 = bodyF5879;
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T28,T37,LITREF(lit_81));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_98) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2165_99) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_275),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_100) {
  P return_;
  P x_2164F5903;
  P x_2164F5902;
  P x_2164F5901;
  P x_2164F5900;
  P x_2164F5899;
  P x_2164F5898;
  P x_2164F5897;
  P x_2164F5896;
  P x_2164F5895;
  P bodyF5894;
  P outF5893;
  P dF5892;
  P eF5891;
  P x_2164F5890;
  P x_2165F5889;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(return_, 0);
  T39 = FUNSHELL(0,fun_x_2165_99,2);
  x_2165F5889 = T39;
  FUNINIT(x_2165F5889, 2,FREEREF(0),return_);
  x_2164F5890 = FREEREF(0);
  eF5891 = YPfalse;
  dF5892 = YPfalse;
  outF5893 = YPfalse;
  bodyF5894 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_2164F5890,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2164F5890,LITREF(lit_275),x_2165F5889);
    x_2164F5895 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2164F5895,x_2165F5889);
    x_2164F5896 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2164F5896,x_2165F5889);
    eF5891 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2164F5896);
    x_2164F5897 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2164F5897,x_2165F5889);
    dF5892 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2164F5897);
    x_2164F5898 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2164F5898,x_2165F5889);
    outF5893 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_2164F5898);
    x_2164F5899 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2164F5899,x_2165F5889);
    x_2164F5900 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2164F5900,x_2165F5889);
    T9 = CALL1(1,VARREF(Ytail),x_2164F5899);
    x_2164F5901 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2164F5901,x_2165F5889);
    T17 = CALL1(1,VARREF(Ytail),x_2164F5895);
    x_2164F5902 = T17;
    bodyF5894 = x_2164F5902;
    x_2164F5903 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2164F5903,x_2165F5889);
  } else {
    T19 = CALL2(1,x_2165F5889,LITREF(lit_78),x_2164F5890);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_276));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_277));
  T26 = eF5891;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_270));
  T33 = eF5891;
  T32 = CALL1(1,VARREF(Ylst),T33);
  T35 = dF5892;
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = outF5893;
  T36 = CALL1(1,VARREF(Ylst),T37);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T34,T36,LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T38 = bodyF5894;
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T38,LITREF(lit_81));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T27,LITREF(lit_81));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_101) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_100,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_forwards_102) {
  P out_,qbT_;
  P x_2168F5906;
  P qbF5905;
  P x_2166F5904;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_280));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  x_2166F5904 = T8;
  LOOP_304: {
    P a304_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2166F5904);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_2166F5904);
      qbF5905 = T7;
      x_2168F5906 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2168F5906,LITREF(lit_281));
      T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),qbF5905);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2168F5906,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2168F5906,LITREF(lit_282));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2166F5904);
      a304_0 = T6;
      x_2166F5904 = a304_0;
      goto LOOP_304;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotations_103) {
  P out_,qbT_;
  P x_2171F5909;
  P qbF5908;
  P x_2169F5907;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  T10 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
  x_2169F5907 = T9;
  LOOP_305: {
    P a305_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2169F5907);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2169F5907);
      qbF5908 = T8;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      x_2171F5909 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2171F5909,LITREF(lit_285));
      T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),qbF5908);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2171F5909,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2171F5909,LITREF(lit_286));
      T5 = CALL1(1,VARREF(YevalSmoduleYbinding_info),qbF5908);
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T5);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2169F5907);
      a305_0 = T7;
      x_2169F5907 = a305_0;
      goto LOOP_305;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOlit) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTlitsT),n_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_105) {
  P nF5910;
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YgooStypesYlen),VARREF(YevalSg2cYTlitsT));
  nF5910 = T0;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTlitsT),FREEREF(0));
UNLINK_STACK();
  QRET(nF5910);
}

LOCCODEDEF(fun_ref_lit_106) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_105,1,x_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYeltX),VARREF(YevalSg2cYTlits_atT),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_107) {
  P out_,x_;
  P x_2172F5911;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2172F5911 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_293));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2172F5911,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2172F5911,LITREF(lit_294));
  T2 = CALL1(1,VARREF(YevalSg2cYref_lit),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_2172F5911,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2172F5911,LITREF(lit_295));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_false_name_108) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_297));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_109) {
  P out_,qb_;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_299);
  } else {
    T2 = LITREF(lit_300);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_110) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_302));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_111) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_112) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = FUNFAB(fun_111,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_113) {
  P out_,x_;
  P x_2173F5912;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2173F5912 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_306));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2173F5912,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2173F5912,LITREF(lit_307));
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_2173F5912,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2173F5912,LITREF(lit_308));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_114) {
  P out_,x_;
  P x_2174F5913;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2174F5913 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_310));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2174F5913,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2174F5913,LITREF(lit_311));
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_2174F5913,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2174F5913,LITREF(lit_312));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_115) {
  P done_;
  P x_2176F5916;
  P x_2175F5915;
  P iF5914;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(done_, 0);
  T16 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T15 = CALL2(1,VARREF(YgooSmathY_),T16,YPint((P)1));
  iF5914 = T15;
  LOOP_306: {
    P a306_0;
    T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSmagYG),iF5914,T2);
    if (T1 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF5914);
      x_2175F5915 = T14;
      x_2176F5916 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_2176F5916,x_2175F5915,YPchr((P)115));
      if (T4 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF5914);
        T5 = CALL1(0,done_,YPfalse);
        T3 = T5;
      } else {
        T7 = CALL2(1,x_2176F5916,x_2175F5915,YPchr((P)100));
        if (T7 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF5914);
          T8 = CALL1(0,done_,YPfalse);
          T6 = T8;
        } else {
          T10 = CALL2(1,x_2176F5916,x_2175F5915,YPchr((P)120));
          if (T10 != YPfalse) {
            CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF5914);
            T11 = CALL1(0,done_,YPfalse);
            T9 = T11;
          } else {
            T13 = CALL2(1,VARREF(YgooSmathY_),iF5914,YPint((P)1));
            a306_0 = T13;
            iF5914 = a306_0;
            goto LOOP_306;
            T9 = T12;
          }
          T6 = T9;
        }
        T3 = T6;
      }
      T0 = T3;
    } else {
      T0 = FREEREF(0);
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_float_to_c_string_116) {
  P o_;
  P sF5917;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF5917 = T2;
  T1 = FUNFAB(fun_115,1,sF5917);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_generate_quotation_117) {
  P out_,x_;
  P x_2177F5918;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2177F5918 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_317));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2177F5918,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2177F5918,LITREF(lit_318));
  T1 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2177F5918,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2177F5918,LITREF(lit_319));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_118) {
  P out_,x_;
  P x_2178F5919;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2178F5919 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_321));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2178F5919,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2178F5919,LITREF(lit_322));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2178F5919,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2178F5919,LITREF(lit_323));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_119) {
  P out_,x_;
  P eF5922;
  P x_2180F5921;
  P x_2179F5920;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2179F5920 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2179F5920,LITREF(lit_325));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_326));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2179F5920,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2179F5920,LITREF(lit_327));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2179F5920,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_2180F5921 = T9;
  LOOP_307: {
    P a307_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2180F5921);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2180F5921);
      eF5922 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_328));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF5922);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2180F5921);
      a307_0 = T7;
      x_2180F5921 = a307_0;
      goto LOOP_307;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_329));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_quotation_120) {
  P out_,x_;
  P eF5925;
  P x_2183F5924;
  P x_2182F5923;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2182F5923 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2182F5923,LITREF(lit_331));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2182F5923,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2182F5923,LITREF(lit_333));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2182F5923,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_2183F5924 = T9;
  LOOP_308: {
    P a308_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2183F5924);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2183F5924);
      eF5925 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_334));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF5925);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2183F5924);
      a308_0 = T7;
      x_2183F5924 = a308_0;
      goto LOOP_308;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_335));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_quotation_121) {
  P out_,x_;
  P x_2185F5926;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2185F5926 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_337));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2185F5926,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2185F5926,LITREF(lit_338));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2185F5926,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2185F5926,LITREF(lit_339));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSg2cYbinding_Gc) {
  P binding_,out_;
  P T0,T1;
LINK_STACK();
  ARG(binding_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_Gc_123) {
  P v_,out_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_Gc_124) {
  P v_,out_;
  P x_2188F5929;
  P x_2187F5928;
  P x_2186F5927;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),v_);
  x_2186F5927 = T6;
  x_2187F5928 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_2187F5928,x_2186F5927,LITREF(lit_224));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_346);
  } else {
    T3 = CALL2(1,x_2187F5928,x_2186F5927,LITREF(lit_149));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_347);
    } else {
      T5 = CALL2(1,x_2187F5928,x_2186F5927,LITREF(lit_150));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_348);
      } else {
        T4 = LITREF(lit_349);
      }
      T2 = T4;
    }
    T0 = T2;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  x_2188F5929 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2188F5929,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_2188F5929,YPchr((P)41));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_to_c_125) {
  P e_,f_,d_,out_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotations),out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),e_);
  CALL4(1,VARREF(YevalSg2cYgenerate_functions),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T5 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_to_c_126) {
  P e_,f_,d_,out_;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_gen_ref_127) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYreference_Gc),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_128) {
  P e_,out_;
  P x_2190F5931;
  P x_2189F5930;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_357));
  x_2189F5930 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2189F5930,YPchr((P)40));
  x_2190F5931 = out_;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2190F5931,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_2189F5930,YPchr((P)41));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_gen_ref_129) {
  P e_,out_;
  P x_2191F5933;
  P regF5932;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF5932 = T4;
  if (regF5932 != YPfalse) {
    x_2191F5933 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2191F5933,LITREF(lit_359));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF5932);
    T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2191F5933,T2);
    T0 = T1;
  } else {
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_360));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_130) {
  P e_,out_;
  P x_2192F5934;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  x_2192F5934 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2192F5934,LITREF(lit_362));
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2192F5934,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_131) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_132) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_133) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_134) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_135) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_136) {
  P e_,f_,d_,out_;
  P x_2194F5936;
  P x_2193F5935;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T7 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),T8);
  x_2193F5935 = T7;
  x_2194F5936 = VARREF(YgooSmacrosYEE);
  T2 = CALL2(1,x_2194F5936,x_2193F5935,LITREF(lit_149));
  if (T2 != YPfalse) {
    T1 = LITREF(lit_369);
  } else {
    T4 = CALL2(1,x_2194F5936,x_2193F5935,LITREF(lit_150));
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T6 != YPfalse) {
        T5 = LITREF(lit_370);
      } else {
        T5 = LITREF(lit_371);
      }
      T3 = T5;
    } else {
      T3 = LITREF(lit_372);
    }
    T1 = T3;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  T9 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T9,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_373));
  T10 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_374));
  T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_to_c_137) {
  P e_,f_,d_,out_;
  P x_2195F5937;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T3 = CALL2(1,VARREF(YisaQ),T4,VARREF(YevalSastYLruntime_referenceG));
    if (T3 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_376));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_377));
    x_2195F5937 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2195F5937,YPchr((P)40));
    T7 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),T7);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T6,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_2195F5937,YPchr((P)44));
    T8 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
    T9 = CALL2(1,VARREF(YgooSioSportYput),x_2195F5937,YPchr((P)41));
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_to_c_138) {
  P e_,f_,d_,out_;
  P x_2196F5939;
  P refF5938;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF5938 = T7;
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),refF5938);
    T2 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T3);
    if (T2 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_379));
      x_2196F5939 = out_;
      CALL2(1,VARREF(YgooSioSportYput),x_2196F5939,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),refF5938,out_);
      T4 = CALL2(1,VARREF(YgooSioSportYput),x_2196F5939,YPchr((P)41));
    } else {
      T5 = CALL2(1,VARREF(YevalSg2cYgen_ref),refF5938,out_);
    }
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_139) {
  P e_,f_,d_,out_;
  P x_2197F5941;
  P refF5940;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF5940 = T8;
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),refF5940);
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_381));
    x_2197F5941 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2197F5941,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_2197F5941,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),refF5940,out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_2197F5941,YPchr((P)41));
  } else {
    CALL2(1,VARREF(YevalSg2cYgen_ref),refF5940,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_382));
    T6 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    T5 = CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  }
  T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_to_c_140) {
  P e_,f_,d_,out_;
  P x_2198F5943;
  P bindingF5942;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T6 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T5 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T6);
  T4 = CALL1(1,VARREF(YevalSastYreference_binding),T5);
  bindingF5942 = T4;
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),bindingF5942);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5942,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_384));
    x_2198F5943 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2198F5943,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5942,out_);
    T2 = CALL2(1,VARREF(YgooSioSportYput),x_2198F5943,YPchr((P)41));
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bbQ_141) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_bbQ_142) {
  P x_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YevalSastYapplication_binding),x_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T3);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_388));
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bbQ_143) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),x_);
  T0 = CALL1(1,VARREF(YevalSg2cYbbQ),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_144) {
  P e_,f_,d_,out_;
  P x_2199F5947;
  P tstF5946;
  P tmpF5945;
  P bb_tstF5944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T21 = CALL1(1,VARREF(YevalSg2cYbbQ),T22);
  bb_tstF5944 = T21;
  tmpF5945 = bb_tstF5944;
  if (tmpF5945 != YPfalse) {
    T19 = tmpF5945;
  } else {
    T20 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
    T19 = T20;
  }
  tstF5946 = T19;
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_391));
  CALL2(1,VARREF(YevalSg2cYgen_ref),tstF5946,out_);
  if (bb_tstF5944 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_392));
  } else {
    x_2199F5947 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2199F5947,LITREF(lit_393));
    T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2199F5947,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2199F5947,LITREF(lit_394));
  }
  T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
  T5 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,T5,out_);
  T6 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T7,out_);
    T8 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T8,out_);
    T9 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_395));
  T11 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
  T12 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T11,f_,T12,out_);
  T13 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T13 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T14,out_);
    T15 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T15,out_);
    T16 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T16,out_);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_396));
UNLINK_STACK();
  QRET(T18);
}

LOCCODEDEF(fun_145) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_146) {
  P e_,f_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_145,3,f_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_147) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_148) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_149) {
  P e_,f_,d_,out_;
  P x_2207F5961;
  P x_2206F5960;
  P bF5959;
  P iF5958;
  P firstQF5957;
  P tmpF5956;
  P tmpF5955;
  P x_2202F5954;
  P x_2203F5953;
  P x_2204F5952;
  P x_2201F5951;
  P bindingsF5950;
  P x_2200F5949;
  P nF5948;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T38 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTloop_arg_counterT),YPint((P)1));
  T37 = DYNSET(YevalSg2cYTloop_arg_counterT,T38);
  T36 = CALL2(1,VARREF(YevalSastYloop_continue_setter),T37,e_);
  nF5948 = T36;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2200F5949 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2200F5949,LITREF(lit_400));
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5948);
  CALL2(1,VARREF(YgooSioSportYputs),x_2200F5949,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2200F5949,LITREF(lit_401));
  T35 = CALL1(1,VARREF(YevalSastYloop_bindings),e_);
  bindingsF5950 = T35;
  T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5950);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T4,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_402));
    x_2201F5951 = out_;
    T26 = fun_147;
    T27 = fun_148;
    T25 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T26,T27);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    x_2204F5952 = T24;
    T29 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
    T28 = CALL1(1,VARREF(YgooScolsScolYenum),T29);
    x_2203F5953 = T28;
    T30 = CALL1(1,VARREF(YgooScolsScolYenum),bindingsF5950);
    x_2202F5954 = T30;
    LOOP_309: {
      P a309_0,a309_1,a309_2;
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2204F5952);
      tmpF5955 = T11;
      if (tmpF5955 != YPfalse) {
        T7 = tmpF5955;
      } else {
        T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2203F5953);
        tmpF5956 = T10;
        if (tmpF5956 != YPfalse) {
          T8 = tmpF5956;
        } else {
          T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2202F5954);
          T8 = T9;
        }
        T7 = T8;
      }
      T6 = CALL1(1,VARREF(Ynot),T7);
      if (T6 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_2204F5952);
        firstQF5957 = T23;
        T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_2203F5953);
        iF5958 = T22;
        T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_2202F5954);
        bF5959 = T21;
        T12 = CALL1(1,VARREF(Ynot),firstQF5957);
        if (T12 != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSioSportYput),x_2201F5951,YPchr((P)44));
        } else {
        }
        x_2206F5960 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2206F5960,LITREF(lit_405));
        T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5948);
        CALL2(1,VARREF(YgooSioSportYputs),x_2206F5960,T14);
        CALL2(1,VARREF(YgooSioSportYputs),x_2206F5960,LITREF(lit_406));
        T16 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5958);
        T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2206F5960,T16);
        T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2204F5952);
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2203F5953);
        T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2202F5954);
        a309_0 = T18;
        a309_1 = T19;
        a309_2 = T20;
        x_2204F5952 = a309_0;
        x_2203F5953 = a309_1;
        x_2202F5954 = a309_2;
        goto LOOP_309;
        T5 = T17;
      } else {
        T5 = YPfalse;
      }
    }
    T31 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  } else {
  }
  T32 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T33 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T32,f_,T33,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2207F5961 = out_;
  T34 = CALL2(1,VARREF(YgooSioSportYputs),x_2207F5961,LITREF(lit_407));
UNLINK_STACK();
  QRET(T34);
}

LOCCODEDEF(fun_to_c_150) {
  P e_,f_,d_,out_;
  P x_2218F5978;
  P x_2217F5977;
  P bindingF5976;
  P iF5975;
  P tmpF5974;
  P x_2214F5973;
  P x_2215F5972;
  P x_2213F5971;
  P argF5970;
  P iF5969;
  P tmpF5968;
  P x_2210F5967;
  P x_2211F5966;
  P argF5965;
  P x_2208F5964;
  P nF5963;
  P loopF5962;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T46 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF5962 = T46;
  T45 = CALL1(1,VARREF(YevalSastYloop_continue),loopF5962);
  nF5963 = T45;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2208F5964 = T6;
  LOOP_310: {
    P a310_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2208F5964);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2208F5964);
      argF5965 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF5965,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2208F5964);
      a310_0 = T4;
      x_2208F5964 = a310_0;
      goto LOOP_310;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  T22 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2211F5966 = T21;
  T24 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2210F5967 = T23;
  LOOP_311: {
    P a311_0,a311_1;
    T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2211F5966);
    tmpF5968 = T12;
    if (tmpF5968 != YPfalse) {
      T10 = tmpF5968;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2210F5967);
      T10 = T11;
    }
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_2211F5966);
      iF5969 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_2210F5967);
      argF5970 = T19;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      x_2213F5971 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2213F5971,LITREF(lit_409));
      T13 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5963);
      CALL2(1,VARREF(YgooSioSportYputs),x_2213F5971,T13);
      CALL2(1,VARREF(YgooSioSportYputs),x_2213F5971,LITREF(lit_410));
      T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5969);
      CALL2(1,VARREF(YgooSioSportYputs),x_2213F5971,T14);
      T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2213F5971,LITREF(lit_411));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF5970,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2211F5966);
      T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2210F5967);
      a311_0 = T17;
      a311_1 = T18;
      x_2211F5966 = a311_0;
      x_2210F5967 = a311_1;
      goto LOOP_311;
      T8 = T16;
    } else {
      T8 = YPfalse;
    }
  }
  T39 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T38 = CALL1(1,VARREF(YgooScolsScolYenum),T39);
  x_2215F5972 = T38;
  T41 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF5962);
  T40 = CALL1(1,VARREF(YgooScolsScolYenum),T41);
  x_2214F5973 = T40;
  LOOP_312: {
    P a312_0,a312_1;
    T29 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2215F5972);
    tmpF5974 = T29;
    if (tmpF5974 != YPfalse) {
      T27 = tmpF5974;
    } else {
      T28 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2214F5973);
      T27 = T28;
    }
    T26 = CALL1(1,VARREF(Ynot),T27);
    if (T26 != YPfalse) {
      T37 = CALL1(1,VARREF(YgooScolsScolYnow),x_2215F5972);
      iF5975 = T37;
      T36 = CALL1(1,VARREF(YgooScolsScolYnow),x_2214F5973);
      bindingF5976 = T36;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5976,out_);
      x_2217F5977 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2217F5977,LITREF(lit_412));
      T30 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5963);
      CALL2(1,VARREF(YgooSioSportYputs),x_2217F5977,T30);
      CALL2(1,VARREF(YgooSioSportYputs),x_2217F5977,LITREF(lit_413));
      T32 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5975);
      T31 = CALL2(1,VARREF(YgooSioSportYputs),x_2217F5977,T32);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T34 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2215F5972);
      T35 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2214F5973);
      a312_0 = T34;
      a312_1 = T35;
      x_2215F5972 = a312_0;
      x_2214F5973 = a312_1;
      goto LOOP_312;
      T25 = T33;
    } else {
      T25 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2218F5978 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2218F5978,LITREF(lit_414));
  T43 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5963);
  T42 = CALL2(1,VARREF(YgooSioSportYputs),x_2218F5978,T43);
  T44 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T44);
}

LOCCODEDEF(fun_to_c_151) {
  P e_,f_,d_,out_;
  P argF5988;
  P x_2224F5987;
  P x_2223F5986;
  P x_2222F5985;
  P tmpF5984;
  P x_2221F5983;
  P argF5982;
  P x_2219F5981;
  P nF5980;
  P functionF5979;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T33 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF5979 = T33;
  T32 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T31 = CALL1(1,VARREF(YgooStypesYlen),T32);
  nF5980 = T31;
  T0 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  x_2219F5981 = T7;
  LOOP_313: {
    P a313_0;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2219F5981);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_2219F5981);
      argF5982 = T6;
      CALL4(1,VARREF(YevalSg2cYto_c),argF5982,f_,d_,out_);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2219F5981);
      a313_0 = T5;
      x_2219F5981 = a313_0;
      goto LOOP_313;
      T1 = T4;
    } else {
      T1 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_2221F5983 = out_;
  T12 = CALL1(1,VARREF(Ynot),f_);
  tmpF5984 = T12;
  if (tmpF5984 != YPfalse) {
    T10 = tmpF5984;
  } else {
    T11 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    T10 = T11;
  }
  if (T10 != YPfalse) {
    T9 = LITREF(lit_416);
  } else {
    T9 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2221F5983,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_2221F5983,LITREF(lit_417));
  T15 = CALL2(1,VARREF(YgooSmagYG),nF5980,VARREF(YevalSg2cYDnumber_call_templates));
  if (T15 != YPfalse) {
    T14 = LITREF(lit_418);
  } else {
    T14 = nF5980;
  }
  T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2221F5983,T14);
  x_2222F5985 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2222F5985,YPchr((P)40));
  T17 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
  if (T17 != YPfalse) {
    T16 = LITREF(lit_419);
  } else {
    T16 = LITREF(lit_420);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T16);
  T18 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T18,out_);
  T19 = CALL2(1,VARREF(YgooSmagYG),nF5980,VARREF(YevalSg2cYDnumber_call_templates));
  if (T19 != YPfalse) {
    x_2223F5986 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2223F5986,LITREF(lit_421));
    T20 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2223F5986,nF5980);
  } else {
  }
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_2224F5987 = T27;
  LOOP_314: {
    P a314_0;
    T23 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2224F5987);
    T22 = CALL1(1,VARREF(Ynot),T23);
    if (T22 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_2224F5987);
      argF5988 = T26;
      CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF5988,out_);
      T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2224F5987);
      a314_0 = T25;
      x_2224F5987 = a314_0;
      goto LOOP_314;
      T21 = T24;
    } else {
      T21 = YPfalse;
    }
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_2222F5985,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T30);
}

LOCCODEDEF(fun_to_c_152) {
  P e_,f_,d_,out_;
  P next_metsF5990;
  P x_2226F5989;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYapplication_next_methods),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_423));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_2226F5989 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2226F5989,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYapplication_next_methods),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_2226F5989,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  T8 = (P)YPfun_reg();
  T9 = (P)YPnext_methods();
  T7 = CALLN(1,VARREF(YgooSmacrosYOchecked_next_methods),6,T8,T9,e_,f_,d_,out_);
  next_metsF5990 = T7;
  T5 = CALL1(1,VARREF(Yhead),next_metsF5990);
  T6 = CALL1(1,VARREF(Ytail),next_metsF5990);
  T4 = CALLN(1,VARREF(YgooSmacrosYnapp),7,T5,T6,e_,f_,d_,out_,Ynil);
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_153) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_154) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_155) {
  P e_,f_,d_,out_;
  P xF5996;
  P firstQF5995;
  P tmpF5994;
  P x_2228F5993;
  P x_2229F5992;
  P x_2227F5991;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_2227F5991 = out_;
  T14 = fun_153;
  T15 = fun_154;
  T13 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T14,T15);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_2229F5992 = T12;
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  x_2228F5993 = T16;
  LOOP_315: {
    P a315_0,a315_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2229F5992);
    tmpF5994 = T4;
    if (tmpF5994 != YPfalse) {
      T2 = tmpF5994;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2228F5993);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_2229F5992);
      firstQF5995 = T11;
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_2228F5993);
      xF5996 = T10;
      T5 = CALL1(1,VARREF(Ynot),firstQF5995);
      if (T5 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),x_2227F5991,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),xF5996,out_);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2229F5992);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2228F5993);
      a315_0 = T8;
      a315_1 = T9;
      x_2229F5992 = a315_0;
      x_2228F5993 = a315_1;
      goto LOOP_315;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_156) {
  P e_,f_,d_,out_;
  P x_2235F6007;
  P tmpF6006;
  P bindingF6005;
  P typeF6004;
  P initF6003;
  P tmpF6002;
  P tmpF6001;
  P x_2231F6000;
  P x_2232F5999;
  P x_2233F5998;
  P low_letQF5997;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T27 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF5997 = T27;
  T20 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_2233F5998 = T19;
  T22 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2232F5999 = T21;
  T24 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2231F6000 = T23;
  LOOP_316: {
    P a316_0,a316_1,a316_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2233F5998);
    tmpF6001 = T6;
    if (tmpF6001 != YPfalse) {
      T2 = tmpF6001;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2232F5999);
      tmpF6002 = T5;
      if (tmpF6002 != YPfalse) {
        T3 = tmpF6002;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2231F6000);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_2233F5998);
      initF6003 = T18;
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_2232F5999);
      typeF6004 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_2231F6000);
      bindingF6005 = T16;
      CALL4(1,VARREF(YevalSg2cYto_c),initF6003,f_,d_,out_);
      T9 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),typeF6004);
      tmpF6006 = T9;
      if (tmpF6006 != YPfalse) {
        T8 = tmpF6006;
      } else {
        T8 = low_letQF5997;
      }
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        CALL4(1,VARREF(YevalSg2cYto_c),typeF6004,f_,d_,out_);
        CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
        CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_428));
        x_2235F6007 = out_;
        CALL2(1,VARREF(YgooSioSportYput),x_2235F6007,YPchr((P)40));
        CALL2(1,VARREF(YevalSg2cYgen_ref),initF6003,out_);
        CALL2(1,VARREF(YgooSioSportYput),x_2235F6007,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),typeF6004,out_);
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_2235F6007,YPchr((P)41));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6005,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_429));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF6003,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2233F5998);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2232F5999);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2231F6000);
      a316_0 = T13;
      a316_1 = T14;
      a316_2 = T15;
      x_2233F5998 = a316_0;
      x_2232F5999 = a316_1;
      x_2231F6000 = a316_2;
      goto LOOP_316;
      T0 = T12;
    } else {
      T0 = YPfalse;
    }
  }
  T26 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T25 = CALL4(1,VARREF(YevalSg2cYto_c),T26,f_,d_,out_);
UNLINK_STACK();
  QRET(T25);
}

LOCCODEDEF(fun_to_c_157) {
  P e_,f_,d_,out_;
  P bindingF6012;
  P initF6011;
  P tmpF6010;
  P x_2236F6009;
  P x_2237F6008;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  x_2237F6008 = T10;
  T13 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_2236F6009 = T12;
  LOOP_317: {
    P a317_0,a317_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2237F6008);
    tmpF6010 = T4;
    if (tmpF6010 != YPfalse) {
      T2 = tmpF6010;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2236F6009);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_2237F6008);
      initF6011 = T9;
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2236F6009);
      bindingF6012 = T8;
      CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF6012,initF6011,YPfalse,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6012,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_431));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF6011,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2237F6008);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2236F6009);
      a317_0 = T6;
      a317_1 = T7;
      x_2237F6008 = a317_0;
      x_2236F6009 = a317_1;
      goto LOOP_317;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  T14 = CALL4(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,out_);
  T15 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T16 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T14,T15,T16);
  T18 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T17 = CALL4(1,VARREF(YevalSg2cYto_c),T18,f_,d_,out_);
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_to_c_158) {
  P e_,f_,d_,out_;
  P x_2239F6013;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_433));
  x_2239F6013 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2239F6013,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_2239F6013,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_to_c_159) {
  P e_,f_,d_,out_;
  P x_2240F6014;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_435));
  x_2240F6014 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2240F6014,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2240F6014,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_2240F6014,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_to_c_160) {
  P e_,f_,d_,out_;
  P x_2241F6015;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T3,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_437));
  x_2241F6015 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_438));
  CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_439));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_440));
  CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_2241F6015,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_161) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_162) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_163) {
  P e_,f_,d_,out_;
  P argF6026;
  P firstQF6025;
  P tmpF6024;
  P x_2247F6023;
  P x_2248F6022;
  P x_2246F6021;
  P x_2245F6020;
  P x_2244F6019;
  P argF6018;
  P x_2242F6017;
  P bindingF6016;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T31 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF6016 = T31;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2242F6017 = T6;
  LOOP_318: {
    P a318_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2242F6017);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2242F6017);
      argF6018 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF6018,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2242F6017);
      a318_0 = T4;
      x_2242F6017 = a318_0;
      goto LOOP_318;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_2244F6019 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2244F6019,LITREF(lit_442));
  T10 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T10);
  T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2244F6019,T9);
  x_2245F6020 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2245F6020,YPchr((P)40));
  x_2246F6021 = out_;
  T25 = fun_161;
  T26 = fun_162;
  T24 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T25,T26);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2248F6022 = T23;
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_2247F6023 = T27;
  LOOP_319: {
    P a319_0,a319_1;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2248F6022);
    tmpF6024 = T15;
    if (tmpF6024 != YPfalse) {
      T13 = tmpF6024;
    } else {
      T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2247F6023);
      T13 = T14;
    }
    T12 = CALL1(1,VARREF(Ynot),T13);
    if (T12 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_2248F6022);
      firstQF6025 = T22;
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_2247F6023);
      argF6026 = T21;
      T16 = CALL1(1,VARREF(Ynot),firstQF6025);
      if (T16 != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSioSportYput),x_2246F6021,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF6026,out_);
      T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2248F6022);
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2247F6023);
      a319_0 = T19;
      a319_1 = T20;
      x_2248F6022 = a319_0;
      x_2247F6023 = a319_1;
      goto LOOP_319;
      T11 = T18;
    } else {
      T11 = YPfalse;
    }
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_2245F6020,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T30);
}

LOCCODEDEF(fun_164) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_165) {
  P e_,f_,d_,out_;
  P xF6032;
  P x_2252F6031;
  P x_2251F6030;
  P x_2250F6029;
  P fF6028;
  P nF6027;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T21 = CALL1(1,VARREF(YgooStypesYlen),T22);
  nF6027 = T21;
  T20 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T20);
  fF6028 = T19;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),nF6027,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T3 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF6028);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_164,3,fF6028,d_,out_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_447));
    x_2250F6029 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2250F6029,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF6028);
    x_2251F6030 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2251F6030,LITREF(lit_448));
    T8 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6027);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2251F6030,T8);
    T16 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_2252F6031 = T15;
    LOOP_320: {
      P a320_0;
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2252F6031);
      T10 = CALL1(1,VARREF(Ynot),T11);
      if (T10 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2252F6031);
        xF6032 = T14;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF6032,out_);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2252F6031);
        a320_0 = T13;
        x_2252F6031 = a320_0;
        goto LOOP_320;
        T9 = T12;
      } else {
        T9 = YPfalse;
      }
    }
    T17 = CALL2(1,VARREF(YgooSioSportYput),x_2250F6029,YPchr((P)41));
    T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_funshell_to_c_166) {
  P b_,e_,f_,d_,out_;
  P x_2256F6037;
  P x_2255F6036;
  P x_2254F6035;
  P fF6034;
  P nF6033;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  nF6033 = T12;
  T11 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T11);
  fF6034 = T10;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),nF6033,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF6034);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_451));
    x_2254F6035 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2254F6035,YPchr((P)40));
    x_2255F6036 = out_;
    T5 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T5 != YPfalse) {
      T4 = YPint((P)1);
    } else {
      T4 = YPint((P)0);
    }
    T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2255F6036,T3);
    CALL2(1,VARREF(YgooSioSportYput),x_2254F6035,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF6034);
    CALL2(1,VARREF(YgooSioSportYput),x_2254F6035,YPchr((P)44));
    x_2256F6037 = out_;
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6033);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2256F6037,T7);
    T8 = CALL2(1,VARREF(YgooSioSportYput),x_2254F6035,YPchr((P)41));
  }
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_167) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_funinit_to_c_168) {
  P b_,e_,f_,d_,out_;
  P xF6042;
  P x_2259F6041;
  P x_2258F6040;
  P x_2257F6039;
  P nF6038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T17 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T16 = CALL1(1,VARREF(YgooStypesYlen),T17);
  nF6038 = T16;
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),nF6038,YPint((P)0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_167,3,f_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_455));
    x_2257F6039 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2257F6039,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,out_);
    x_2258F6040 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2258F6040,LITREF(lit_456));
    T5 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2258F6040,nF6038);
    T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
    x_2259F6041 = T12;
    LOOP_321: {
      P a321_0;
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2259F6041);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_2259F6041);
        xF6042 = T11;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF6042,out_);
        T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2259F6041);
        a321_0 = T10;
        x_2259F6041 = a321_0;
        goto LOOP_321;
        T6 = T9;
      } else {
        T6 = YPfalse;
      }
    }
    T14 = CALL2(1,VARREF(YgooSioSportYput),x_2257F6039,YPchr((P)41));
    T15 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_169) {
  P e_,f_,d_,out_;
  P x_2261F6043;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,YPfalse,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_458));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_2261F6043 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2261F6043,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_2261F6043,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_2261F6043,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_2261F6043,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_out_list_builder_170) {
  P f_,out_,elts_;
  P eF6047;
  P x_2264F6046;
  P x_2263F6045;
  P x_2262F6044;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(f_, 0);
  ARG(out_, 1);
  ARG(elts_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_461));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_462));
    CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
    x_2262F6044 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2262F6044,YPchr((P)40));
    x_2263F6045 = out_;
    T7 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2263F6045,T6);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    x_2264F6046 = T14;
    LOOP_322: {
      P a322_0;
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2264F6046);
      T9 = CALL1(1,VARREF(Ynot),T10);
      if (T9 != YPfalse) {
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_2264F6046);
        eF6047 = T13;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL1(0,f_,eF6047);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2264F6046);
        a322_0 = T12;
        x_2264F6046 = a322_0;
        goto LOOP_322;
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
    }
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_2262F6044,YPchr((P)41));
    T0 = T15;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_171) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_fab_list_172) {
  P out_,refs_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(refs_, 1);
  T1 = FUNFAB(fun_171,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_specs_173) {
  P out_,sig_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(sig_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreq_sig_specs),sig_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_174) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_175) {
  P e_,f_,d_,out_;
  P x_2266F6048;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = FUNFAB(fun_174,3,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_470));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  x_2266F6048 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2266F6048,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_2266F6048,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2266F6048,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2266F6048,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2266F6048,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_471));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_2266F6048,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_to_c_176) {
  P e_,f_,d_,out_;
  P x_2267F6049;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_473));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_2267F6049 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2267F6049,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2267F6049,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2267F6049,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2267F6049,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_474));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_2267F6049,YPchr((P)41));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_generate_function_forwards_177) {
  P out_,definitions_;
  P defF6051;
  P x_2268F6050;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_477));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  x_2268F6050 = T6;
  LOOP_323: {
    P a323_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2268F6050);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2268F6050);
      defF6051 = T5;
      CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),out_,defF6051);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2268F6050);
      a323_0 = T4;
      x_2268F6050 = a323_0;
      goto LOOP_323;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_178) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_179) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_generate_function_forward_180) {
  P out_,defn_;
  P iF6058;
  P firstQF6057;
  P tmpF6056;
  P x_2272F6055;
  P x_2273F6054;
  P x_2271F6053;
  P x_2270F6052;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  x_2270F6052 = out_;
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T0 = LITREF(lit_480);
  } else {
    T0 = LITREF(lit_481);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2270F6052,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2270F6052,LITREF(lit_482));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2270F6052,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2270F6052,LITREF(lit_483));
  x_2271F6053 = out_;
  T18 = fun_178;
  T19 = fun_179;
  T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_2273F6054 = T16;
  T23 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T22 = CALL1(1,VARREF(YgooStypesYlen),T23);
  T21 = CALL1(1,VARREF(YgooScolsSseqYbelow),T22);
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
  x_2272F6055 = T20;
  LOOP_324: {
    P a324_0,a324_1;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2273F6054);
    tmpF6056 = T8;
    if (tmpF6056 != YPfalse) {
      T6 = tmpF6056;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2272F6055);
      T6 = T7;
    }
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2273F6054);
      firstQF6057 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2272F6055);
      iF6058 = T14;
      T9 = CALL1(1,VARREF(Ynot),firstQF6057);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_2271F6053,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_486));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2273F6054);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2272F6055);
      a324_0 = T12;
      a324_1 = T13;
      x_2273F6054 = a324_0;
      x_2272F6055 = a324_1;
      goto LOOP_324;
      T4 = T11;
    } else {
      T4 = YPfalse;
    }
  }
  T24 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_487));
UNLINK_STACK();
  QRET(T24);
}

LOCCODEDEF(fun_generate_function_binding_181) {
  P out_,defn_;
  P x_2276F6062;
  P nameF6061;
  P x_2275F6060;
  P nameF6059;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T17 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF6059 = T17;
  T2 = CALL2(1,VARREF(YisaQ),nameF6059,VARREF(YevalSmoduleYLmodule_bindingG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),nameF6059);
    T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_490),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF6059);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nameF6059,YPfalse);
    if (T8 != YPfalse) {
      x_2275F6060 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2275F6060,LITREF(lit_491));
      T10 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T9 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2275F6060,T10);
      T7 = T9;
    } else {
      T15 = CALL2(1,VARREF(YisaQ),nameF6059,VARREF(YevalSastYLlocal_bindingG));
      if (T15 != YPfalse) {
        T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),nameF6059);
        T14 = T16;
      } else {
        T14 = nameF6059;
      }
      nameF6061 = T14;
      x_2276F6062 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2276F6062,LITREF(lit_492));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF6061);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2276F6062,T11);
      CALL2(1,VARREF(YgooSioSportYputs),x_2276F6062,LITREF(lit_493));
      T13 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T12 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2276F6062,T13);
      T7 = T12;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_forward_182) {
  P out_,defn_;
  P boundQF6063;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T3 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSmoduleYLmodule_bindingG));
  boundQF6063 = T2;
  if (boundQF6063 != YPfalse) {
    T0 = LITREF(lit_495);
  } else {
    T0 = LITREF(lit_496);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,defn_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_497));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_183) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_bodies_184) {
  P out_,definitions_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_500));
  T1 = FUNFAB(fun_183,1,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_185) {
  P def_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(def_, 0);
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

LOCCODEDEF(fun_generate_functions_186) {
  P definitions_,f_,d_,out_;
  P T0,T1,T2;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_185,3,f_,d_,out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_closure_structure_187) {
  P definition_,f_,d_,out_;
  P x_2279F6066;
  P x_2278F6065;
  P x_2277F6064;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),definition_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  x_2277F6064 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2277F6064,LITREF(lit_507));
  T3 = CALL1(1,VARREF(YevalSastYfunction_inlineableQ),definition_);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_508));
    T2 = T4;
  } else {
    T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_509));
    T2 = T5;
  }
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2277F6064,T2);
  x_2278F6065 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2278F6065,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_2278F6065,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2278F6065,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2278F6065,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYfunction_names),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2278F6065,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T9 != YPfalse) {
    x_2279F6066 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2279F6066,LITREF(lit_510));
    T11 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_2279F6066,T10);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),x_2279F6066,LITREF(lit_511));
  } else {
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_512));
    T13 = CALL2(1,VARREF(YgooSioSportYputs),out_,T14);
  }
  CALL2(1,VARREF(YgooSioSportYput),x_2278F6065,YPchr((P)44));
  T15 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T15,out_);
  T16 = CALL2(1,VARREF(YgooSioSportYput),x_2278F6065,YPchr((P)41));
  T17 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_generate_function_body_reference_188) {
  P out_,definition_;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_515));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_516));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_return_189) {
  P defn_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_519));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_generate_return_190) {
  P defn_,d_,out_;
  P x_2280F6067;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_521));
  x_2280F6067 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2280F6067,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_2280F6067,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_191) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_192) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_generate_function_code_193) {
  P out_,e_;
  P bindingF6075;
  P firstQF6074;
  P tmpF6073;
  P x_2284F6072;
  P x_2285F6071;
  P x_2283F6070;
  P x_2282F6069;
  P x_2281F6068;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  x_2281F6068 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2281F6068,LITREF(lit_524));
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T0 = LITREF(lit_525);
  } else {
    T0 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2281F6068,T0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_inlineableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_526);
  } else {
    T1 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2281F6068,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2281F6068,LITREF(lit_527));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,out_);
  x_2282F6069 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2282F6069,YPchr((P)40));
  x_2283F6070 = out_;
  T19 = fun_191;
  T20 = fun_192;
  T18 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T19,T20);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_2285F6071 = T17;
  T22 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2284F6072 = T21;
  LOOP_325: {
    P a325_0,a325_1;
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2285F6071);
    tmpF6073 = T9;
    if (tmpF6073 != YPfalse) {
      T7 = tmpF6073;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2284F6072);
      T7 = T8;
    }
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_2285F6071);
      firstQF6074 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2284F6072);
      bindingF6075 = T15;
      T10 = CALL1(1,VARREF(Ynot),firstQF6074);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSportYput),x_2283F6070,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_530));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6075,out_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2285F6071);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2284F6072);
      a325_0 = T13;
      a325_1 = T14;
      x_2285F6071 = a325_0;
      x_2284F6072 = a325_1;
      goto LOOP_325;
      T5 = T12;
    } else {
      T5 = YPfalse;
    }
  }
  T23 = CALL2(1,VARREF(YgooSioSportYput),x_2282F6069,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_531));
  T24 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T24,out_);
  T25 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T25,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_532));
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,e_,YPint((P)1),out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),out_);
  T27 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_533));
UNLINK_STACK();
  QRET(T27);
}

LOCCODEDEF(fun_dispatcherQ_194) {
  P definition_;
  P tmpF6078;
  P nameF6077;
  P bindingF6076;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(definition_, 0);
  T11 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF6076 = T11;
  T1 = CALL2(1,VARREF(YisaQ),bindingF6076,VARREF(YevalSmoduleYLmodule_bindingG));
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF6076);
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T10);
    nameF6077 = T9;
    T8 = CALL2(1,VARREF(YgooSlogYE),nameF6077,LITREF(lit_536));
    tmpF6078 = T8;
    if (tmpF6078 != YPfalse) {
      T2 = tmpF6078;
    } else {
      T4 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF6077,LITREF(lit_537));
      T6 = CALL1(1,VARREF(YgooStypesYlen),nameF6077);
      T7 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_538));
      T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
      T3 = CALL2(1,VARREF(YgooSlogYE),T4,T5);
      T2 = T3;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_195) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_196) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_197) {
  P b_;
  P x_2291F6079;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSmoduleYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_548));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_549));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_2291F6079 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_2291F6079,LITREF(lit_550));
    T6 = BOXGET(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_2291F6079,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2291F6079,LITREF(lit_551));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_265));
    T10 = BOXGET(FREEREF(1));
    T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
    T8 = BOXPUT(T9,FREEREF(1));
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_code_198) {
  P out_,definition_;
  P bF6088;
  P firstQF6087;
  P tmpF6086;
  P x_2288F6085;
  P x_2289F6084;
  P x_2287F6083;
  P boundQF6082;
  P bindingsF6081;
  P offsetF6080;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  offsetF6080 = YPint((P)0);
  offsetF6080 = BOXFAB(offsetF6080);
  T33 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF6081 = T33;
  T32 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  T31 = CALL2(1,VARREF(YisaQ),T32,VARREF(YevalSmoduleYLmodule_bindingG));
  boundQF6082 = T31;
  if (boundQF6082 != YPfalse) {
    T1 = LITREF(lit_540);
  } else {
    T1 = LITREF(lit_541);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_542));
  T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF6081);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_543));
    x_2287F6083 = out_;
    T18 = fun_195;
    T19 = fun_196;
    T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
    T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
    x_2289F6084 = T16;
    T21 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
    x_2288F6085 = T20;
    LOOP_326: {
      P a326_0,a326_1;
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2289F6084);
      tmpF6086 = T8;
      if (tmpF6086 != YPfalse) {
        T6 = tmpF6086;
      } else {
        T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2288F6085);
        T6 = T7;
      }
      T5 = CALL1(1,VARREF(Ynot),T6);
      if (T5 != YPfalse) {
        T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2289F6084);
        firstQF6087 = T15;
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2288F6085);
        bF6088 = T14;
        T9 = CALL1(1,VARREF(Ynot),firstQF6087);
        if (T9 != YPfalse) {
          T10 = CALL2(1,VARREF(YgooSioSportYput),x_2287F6083,YPchr((P)44));
        } else {
        }
        CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF6088,out_);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2289F6084);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2288F6085);
        a326_0 = T12;
        a326_1 = T13;
        x_2289F6084 = a326_0;
        x_2288F6085 = a326_1;
        goto LOOP_326;
        T4 = T11;
      } else {
        T4 = YPfalse;
      }
    }
    T22 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  } else {
  }
  T23 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T23,out_);
  T24 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T24,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_546));
  T25 = FUNFAB(fun_197,2,out_,offsetF6080);
  CALL2(1,VARREF(YgooSmacrosYdo),T25,bindingsF6081);
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,definition_,YPint((P)1),out_);
  T28 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T27 = CALL1(1,VARREF(Ynot),T28);
  if (T27 != YPfalse) {
    T29 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_552));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),out_);
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_553));
UNLINK_STACK();
  QRET(T30);
}

LOCCODEDEF(fun_generate_local_temporaries_199) {
  P temps_,out_;
  P tempF6090;
  P x_2292F6089;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(temps_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  x_2292F6089 = T6;
  LOOP_327: {
    P a327_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2292F6089);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2292F6089);
      tempF6090 = T5;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_556));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF6090,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2292F6089);
      a327_0 = T4;
      x_2292F6089 = a327_0;
      goto LOOP_327;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_registers_200) {
  P regs_,out_;
  P tmpF6095;
  P iF6094;
  P jF6093;
  P jF6092;
  P nregsF6091;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(regs_, 0);
  ARG(out_, 1);
  T14 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF6091 = T14;
  jF6092 = YPint((P)0);
  LOOP_328: {
    P a328_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),jF6092,nregsF6091);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_559));
      jF6093 = jF6092;
      iF6094 = YPint((P)0);
      LOOP_329: {
        P a329_0,a329_1;
        T5 = CALL2(1,VARREF(YgooSlogYE),iF6094,VARREF(YevalSg2cYTregisters_per_lineT));
        tmpF6095 = T5;
        if (tmpF6095 != YPfalse) {
          T3 = tmpF6095;
        } else {
          T4 = CALL2(1,VARREF(YgooSlogYE),jF6093,nregsF6091);
          T3 = T4;
        }
        if (T3 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_560));
          a328_0 = jF6093;
          jF6092 = a328_0;
          goto LOOP_328;
          T2 = T6;
        } else {
          T8 = CALL2(1,VARREF(YgooSlogYE),iF6094,YPint((P)0));
          T7 = CALL1(1,VARREF(Ynot),T8);
          if (T7 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
          } else {
          }
          T10 = CALL2(1,VARREF(YgooSmacrosYelt),regs_,jF6093);
          CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
          T12 = CALL2(1,VARREF(YgooSmathYA),jF6093,YPint((P)1));
          T13 = CALL2(1,VARREF(YgooSmathYA),iF6094,YPint((P)1));
          a329_0 = T12;
          a329_1 = T13;
          jF6093 = a329_0;
          iF6094 = a329_1;
          goto LOOP_329;
          T2 = T11;
        }
      }
      T0 = T2;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_info_name_201) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_563),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_maybe_declare_202) {
  P modname_;
  P x_2294F6096;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_2294F6096 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2294F6096,LITREF(lit_568));
    T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2294F6096,T3);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2294F6096,LITREF(lit_569));
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_203) {
  P binding_;
  P home_modF6097;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
  home_modF6097 = T4;
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(0,FREEREF(1),home_modF6097);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P out_,mod_;
  P maybe_declareF6100;
  P envF6099;
  P seenF6098;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF6098 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF6099 = T6;
  T5 = FUNSHELL(0,fun_maybe_declare_202,2);
  maybe_declareF6100 = T5;
  FUNINIT(maybe_declareF6100, 2,seenF6098,out_);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF6099);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),T1);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF6100,T0);
  T3 = FUNFAB(fun_203,2,mod_,maybe_declareF6100);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_205) {
  P local_name_,binding_;
  P x_2298F6101;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_2298F6101 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2298F6101,LITREF(lit_580));
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T4);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2298F6101,T3);
    CALL2(1,VARREF(YgooSioSportYputs),x_2298F6101,LITREF(lit_581));
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T6);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2298F6101,T5);
    CALL2(1,VARREF(YgooSioSportYputs),x_2298F6101,LITREF(lit_582));
    T9 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,local_name_);
    if (T8 != YPfalse) {
      T7 = LITREF(lit_583);
    } else {
      T10 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
      T7 = T10;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2298F6101,T7);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_2298F6101,LITREF(lit_584));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_206) {
  P binding_;
  P x_2303F6106;
  P x_2302F6105;
  P x_2301F6104;
  P x_2300F6103;
  P x_2299F6102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(binding_, 0);
  T1 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_2299F6102 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2299F6102,LITREF(lit_588));
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2299F6102,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2299F6102,LITREF(lit_589));
    T14 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
    x_2300F6103 = T14;
    x_2301F6104 = VARREF(YgooSmacrosYEE);
    T6 = CALL2(1,x_2301F6104,x_2300F6103,LITREF(lit_148));
    if (T6 != YPfalse) {
      x_2302F6105 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_2302F6105,LITREF(lit_590));
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2302F6105,T7);
      T8 = CALL2(1,VARREF(YgooSioSportYputs),x_2302F6105,LITREF(lit_591));
      T5 = T8;
    } else {
      T10 = CALL2(1,x_2301F6104,x_2300F6103,LITREF(lit_150));
      if (T10 != YPfalse) {
        x_2303F6106 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_2303F6106,LITREF(lit_592));
        T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2303F6106,T11);
        T12 = CALL2(1,VARREF(YgooSioSportYputs),x_2303F6106,LITREF(lit_593));
        T9 = T12;
      } else {
        T13 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_594));
        T9 = T13;
      }
      T5 = T9;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P out_,mod_;
  P x_2309F6122;
  P x_2308F6121;
  P x_2307F6120;
  P x_2306F6119;
  P bindingF6118;
  P exported_asF6117;
  P tup42F6116;
  P x_2304F6115;
  P x_2297F6114;
  P nF6113;
  P x_2295F6112;
  P uses_namesF6111;
  P usesF6110;
  P envF6109;
  P info_nameF6108;
  P nameF6107;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T41 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  nameF6107 = T41;
  T40 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF6107);
  info_nameF6108 = T40;
  T39 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF6109 = T39;
  T38 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF6109);
  usesF6110 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),usesF6110);
  uses_namesF6111 = T37;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_573));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_574));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF6111);
  x_2295F6112 = T8;
  LOOP_330: {
    P a330_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2295F6112);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_2295F6112);
      nF6113 = T7;
      x_2297F6114 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2297F6114,LITREF(lit_575));
      T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF6113);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2297F6114,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2297F6114,LITREF(lit_576));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2295F6112);
      a330_0 = T6;
      x_2295F6112 = a330_0;
      goto LOOP_330;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_577));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_578));
  T9 = FUNFAB(fun_205,2,mod_,out_);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSmoduleYdo_named_static_global_bindings),T9,T10);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_585));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_586));
  T11 = FUNFAB(fun_206,2,mod_,out_);
  T12 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T11,T12);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_595));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_596));
  T31 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),mod_);
  T30 = CALL1(1,VARREF(YgooScolsScolYenum),T31);
  x_2304F6115 = T30;
  LOOP_331: {
    P a331_0;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2304F6115);
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_2304F6115);
      T29 = CALL1(1,VARREF(YgooScolsScolYnow),x_2304F6115);
      T27 = CALL2(1,VARREF(Ytup),T28,T29);
      tup42F6116 = T27;
      T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup42F6116,YPint((P)0));
      exported_asF6117 = T26;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup42F6116,YPint((P)1));
      bindingF6118 = T25;
      x_2306F6119 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2306F6119,LITREF(lit_597));
      T17 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF6118);
      T16 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T17);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2306F6119,T16);
      CALL2(1,VARREF(YgooSioSportYputs),x_2306F6119,LITREF(lit_598));
      T20 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF6118);
      T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,exported_asF6117);
      if (T19 != YPfalse) {
        T18 = LITREF(lit_599);
      } else {
        T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF6117);
        T18 = T21;
      }
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2306F6119,T18);
      T22 = CALL2(1,VARREF(YgooSioSportYputs),x_2306F6119,LITREF(lit_600));
      T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2304F6115);
      a331_0 = T24;
      x_2304F6115 = a331_0;
      goto LOOP_331;
      T13 = T23;
    } else {
      T13 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_601));
  x_2307F6120 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2307F6120,LITREF(lit_602));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2307F6120,info_nameF6108);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),x_2307F6120,LITREF(lit_603));
  x_2308F6121 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2308F6121,LITREF(lit_604));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2308F6121,info_nameF6108);
  T33 = CALL2(1,VARREF(YgooSioSportYputs),x_2308F6121,LITREF(lit_605));
  x_2309F6122 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2309F6122,LITREF(lit_606));
  T34 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF6107);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2309F6122,T34);
  T35 = CALL2(1,VARREF(YgooSioSportYputs),x_2309F6122,LITREF(lit_607));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_608));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_609));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_610));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_611));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_612));
  T36 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_613));
UNLINK_STACK();
  QRET(T36);
}

LOCCODEDEF(fun_module_init_name_208) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_616),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_init_decl_209) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_619),T1,LITREF(lit_620));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_module_init_210) {
  P out_,mod_,form_;
  P x_2317F6135;
  P nF6134;
  P x_2315F6133;
  P x_2314F6132;
  P x_2313F6131;
  P x_2312F6130;
  P nF6129;
  P x_2310F6128;
  P uses_namesF6127;
  P usesF6126;
  P envF6125;
  P init_declF6124;
  P nameF6123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T28 = LITREF(lit_623);
  } else {
    T29 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T28 = T29;
  }
  nameF6123 = T28;
  T27 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF6123);
  init_declF6124 = T27;
  T26 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF6125 = T26;
  T25 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF6125);
  usesF6126 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),usesF6126);
  uses_namesF6127 = T24;
  T0 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_624));
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF6127);
    x_2310F6128 = T9;
    LOOP_332: {
      P a332_0;
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2310F6128);
      T2 = CALL1(1,VARREF(Ynot),T3);
      if (T2 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2310F6128);
        nF6129 = T8;
        x_2312F6130 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2312F6130,LITREF(lit_625));
        T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF6129);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2312F6130,T4);
        T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2312F6130,LITREF(lit_626));
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2310F6128);
        a332_0 = T7;
        x_2310F6128 = a332_0;
        goto LOOP_332;
        T1 = T6;
      } else {
        T1 = YPfalse;
      }
    }
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_627));
  x_2313F6131 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2313F6131,LITREF(lit_628));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2313F6131,init_declF6124);
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_2313F6131,LITREF(lit_629));
  x_2314F6132 = out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2314F6132,init_declF6124);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_2314F6132,LITREF(lit_630));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_631));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_632));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_633));
  T12 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T12 != YPfalse) {
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF6127);
    x_2315F6133 = T21;
    LOOP_333: {
      P a333_0;
      T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2315F6133);
      T14 = CALL1(1,VARREF(Ynot),T15);
      if (T14 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_2315F6133);
        nF6134 = T20;
        x_2317F6135 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2317F6135,LITREF(lit_634));
        T16 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF6134);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2317F6135,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_2317F6135,LITREF(lit_635));
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2315F6133);
        a333_0 = T19;
        x_2315F6133 = a333_0;
        goto LOOP_333;
        T13 = T18;
      } else {
        T13 = YPfalse;
      }
    }
    T22 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_636));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_637));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_638));
UNLINK_STACK();
  QRET(T23);
}

LOCCODEDEF(fun_generate_main_211) {
  P out_,mod_;
  P x_2322F6142;
  P x_2321F6141;
  P x_2320F6140;
  P x_2319F6139;
  P x_2318F6138;
  P info_nameF6137;
  P nameF6136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  nameF6136 = T10;
  T9 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF6136);
  info_nameF6137 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_641));
  x_2318F6138 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2318F6138,LITREF(lit_642));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2318F6138,info_nameF6137);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2318F6138,LITREF(lit_643));
  x_2319F6139 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2319F6139,LITREF(lit_644));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF6136);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2319F6139,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2319F6139,LITREF(lit_645));
  x_2320F6140 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2320F6140,LITREF(lit_646));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2320F6140,info_nameF6137);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2320F6140,LITREF(lit_647));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_648));
  x_2321F6141 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2321F6141,LITREF(lit_649));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_650));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2321F6141,T4);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2321F6141,LITREF(lit_651));
  x_2322F6142 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2322F6142,LITREF(lit_652));
  T6 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF6136);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2322F6142,T6);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2322F6142,LITREF(lit_653));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_654));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_655));
UNLINK_STACK();
  QRET(T8);
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138;
DEFCREGS();
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPfab_met(FUNCODEREF(fun_module_loader_appname_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(29),YPfalse);
  T4 = VARREF_OR(YevalSg2cYmodule_loader_appname,YPfalse);
  T5 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_3 = YPPsym((P)"module-loader-app-modname");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_1 = YPfab_met(FUNCODEREF(fun_module_loader_app_modname_1),T6,LITREF(lit_3),LITREF(lit_4),sloc(30),YPfalse);
  T8 = VARREF_OR(YevalSg2cYmodule_loader_app_modname,YPfalse);
  T9 = fun_module_loader_app_modname_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSg2cYmodule_loader_app_modname,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<g2c-module>");
  T11 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLmoduleG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_5),T11);
  VARSET(YevalSg2cYLg2c_moduleG,T10);
  lit_6 = YPPsym((P)"module-src-file");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_2 = YPfab_met(FUNCODEREF(fun_module_src_file_2),T12,LITREF(lit_6),LITREF(lit_7),sloc(33),YPfalse);
  T14 = VARREF_OR(YevalSg2cYmodule_src_file,YPfalse);
  T15 = fun_module_src_file_2;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYmodule_src_file,T13);
  lit_8 = YPPsym((P)"module-src-file-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_3 = YPfab_met(FUNCODEREF(fun_module_src_file_setter_3),T16,LITREF(lit_8),LITREF(lit_9),sloc(33),YPfalse);
  T18 = VARREF_OR(YevalSg2cYmodule_src_file_setter,YPfalse);
  T19 = fun_module_src_file_setter_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYmodule_src_file_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_4 = YPfab_met(FUNCODEREF(fun_module_mtime_4),T20,LITREF(lit_10),LITREF(lit_11),sloc(34),YPfalse);
  T22 = VARREF_OR(YevalSg2cYmodule_mtime,YPfalse);
  T23 = fun_module_mtime_4;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYmodule_mtime,T21);
  lit_12 = YPPsym((P)"module-mtime-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_5 = YPfab_met(FUNCODEREF(fun_module_mtime_setter_5),T24,LITREF(lit_12),LITREF(lit_13),sloc(34),YPfalse);
  T26 = VARREF_OR(YevalSg2cYmodule_mtime_setter,YPfalse);
  T27 = fun_module_mtime_setter_5;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYmodule_mtime_setter,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"module-loader-module-type");
  lit_15 = YPPlist(1,YPPsym((P)"loader"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_6 = YPfab_met(FUNCODEREF(fun_module_loader_module_type_6),T28,LITREF(lit_14),LITREF(lit_15),sloc(36),YPfalse);
  T30 = VARREF_OR(YevalSmoduleYmodule_loader_module_type,YPfalse);
  T31 = fun_module_loader_module_type_6;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSmoduleYmodule_loader_module_type,T29);
  lit_16 = YPPsym((P)"load-module");
  lit_17 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_18 = YPsb((P)"START");
  lit_19 = YPsb((P)"OPTIMIZE");
  lit_20 = Ynil;
  lit_21 = YPPlist(1,YPPsym((P)"name"));
  lit_22 = YPsb((P)"EMIT");
  T37 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPfab_met(FUNCODEREF(fun_7),T37,YPfalse,LITREF(lit_20),sloc(60),YPfalse);
  T36 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T36,YPfalse,LITREF(lit_20),sloc(60),YPfalse);
  T35 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T35,YPfalse,LITREF(lit_20),sloc(59),YPfalse);
  T34 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T34,YPfalse,LITREF(lit_20),sloc(59),YPfalse);
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T33,YPfalse,LITREF(lit_21),sloc(62),YPfalse);
  T32 = YPfab_sig(YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  fun_load_module_12 = YPfab_met(FUNCODEREF(fun_load_module_12),T32,LITREF(lit_16),LITREF(lit_17),sloc(41),YPfalse);
  T39 = VARREF_OR(YevalSmoduleYload_module,YPfalse);
  T40 = fun_load_module_12;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSmoduleYload_module,T38);
  lit_23 = YPPsym((P)"module-up-to-date?");
  lit_24 = YPPlist(1,YPPsym((P)"mod"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPfab_met(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),T41,LITREF(lit_23),LITREF(lit_24),sloc(76),YPfalse);
  T42 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T42);
  lit_25 = YPPsym((P)"purge-outdated-modules");
  lit_26 = YPPlist(1,YPPsym((P)"loader"));
  lit_27 = YPPlist(1,YPPsym((P)"mod"));
  lit_28 = YPPlist(1,YPPsym((P)"name"));
  lit_29 = YPsb((P)" has changed.\n");
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T45,YPfalse,LITREF(lit_27),sloc(84),YPfalse);
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T44,YPfalse,LITREF(lit_28),sloc(90),YPfalse);
  T43 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPfab_met(FUNCODEREF(YevalSg2cYpurge_outdated_modules),T43,LITREF(lit_25),LITREF(lit_26),sloc(79),YPfalse);
  T46 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T46);
  lit_30 = YPPsym((P)"g2c-def-app");
  lit_31 = YPPlist(2,YPPsym((P)"appname"),YPPsym((P)"modname"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPfab_met(FUNCODEREF(YevalSg2cYg2c_def_app),T47,LITREF(lit_30),LITREF(lit_31),sloc(103),YPfalse);
  T48 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T48);
  lit_32 = YPPsym((P)"g2c-build-app");
  lit_33 = YPPlist(1,YPPsym((P)"loader"));
  lit_34 = YPsb((P)"Searching for undefined global bindings.\n");
  T51 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T51,YPfalse,LITREF(lit_20),sloc(110),YPfalse);
  T50 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T50,YPfalse,LITREF(lit_20),sloc(110),YPfalse);
  T49 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPfab_met(FUNCODEREF(YevalSg2cYg2c_build_app),T49,LITREF(lit_32),LITREF(lit_33),sloc(109),YPfalse);
  T52 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T52);
  lit_35 = YPPsym((P)"g2c-test");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  lit_37 = YPsb((P)"g2c-");
  lit_38 = YPPsym((P)"eval/main");
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPfab_met(FUNCODEREF(YevalSg2cYg2c_test),T53,LITREF(lit_35),LITREF(lit_36),sloc(119),YPfalse);
  T54 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T54);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_39 = YPPsym((P)"g2c-ast");
  lit_40 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  lit_41 = YPsb((P)"exp-%d-%d");
  T61 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T61,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T60 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T60,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T59 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T59,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T58 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T58,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T57 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T57,YPfalse,LITREF(lit_20),sloc(130),YPfalse);
  T56 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T56,YPfalse,LITREF(lit_20),sloc(130),YPfalse);
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPfab_met(FUNCODEREF(fun_g2c_ast_28),T55,LITREF(lit_39),LITREF(lit_40),sloc(124),YPfalse);
  T63 = VARREF_OR(YevalSg2cYg2c_ast,YPfalse);
  T64 = fun_g2c_ast_28;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSg2cYg2c_ast,T62);
  lit_42 = YPPsym((P)"g2c-exp");
  lit_43 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPfab_met(FUNCODEREF(fun_g2c_exp_29),T65,LITREF(lit_42),LITREF(lit_43),sloc(136),YPfalse);
  T67 = VARREF_OR(YevalSg2cYg2c_exp,YPfalse);
  T68 = fun_g2c_exp_29;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSg2cYg2c_exp,T66);
  lit_44 = YPPsym((P)"compile-load");
  lit_45 = YPPlist(1,YPPsym((P)"name"));
  lit_46 = YPsb((P)".so");
  lit_47 = YPsb((P)".so");
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPfab_met(FUNCODEREF(fun_compile_load_30),T69,LITREF(lit_44),LITREF(lit_45),sloc(140),YPfalse);
  T71 = VARREF_OR(YevalSg2cYcompile_load,YPfalse);
  T72 = fun_compile_load_30;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSg2cYcompile_load,T70);
  lit_48 = YPPsym((P)"g2c-eval");
  lit_49 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPfab_met(FUNCODEREF(fun_g2c_eval_31),T73,LITREF(lit_48),LITREF(lit_49),sloc(144),YPfalse);
  T75 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T76 = fun_g2c_eval_31;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalStopYg2c_eval,T74);
  lit_50 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPfab_met(FUNCODEREF(fun_g2c_eval_32),T77,LITREF(lit_48),LITREF(lit_50),sloc(148),YPfalse);
  T79 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T80 = fun_g2c_eval_32;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalStopYg2c_eval,T78);
  lit_51 = YPsb((P)"g2c");
  T81 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_51),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T81);
  lit_52 = YPPsym((P)"g2c-top");
  T82 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPfab_met(FUNCODEREF(fun_g2c_top_33),T82,LITREF(lit_52),LITREF(lit_20),sloc(154),YPfalse);
  T84 = VARREF_OR(YevalSg2cYg2c_top,YPfalse);
  T85 = fun_g2c_top_33;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSg2cYg2c_top,T83);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_53 = YPPsym((P)"g2c-clean");
  lit_54 = YPsb((P)"g2c");
  T86 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPfab_met(FUNCODEREF(fun_g2c_clean_34),T86,LITREF(lit_53),LITREF(lit_20),sloc(156),YPfalse);
  T88 = VARREF_OR(YevalSg2cYg2c_clean,YPfalse);
  T89 = fun_g2c_clean_34;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSg2cYg2c_clean,T87);
  lit_55 = YPPsym((P)"compute-ast");
  lit_56 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  lit_57 = YPsb((P)"READ");
  lit_58 = YPsb((P)"AST");
  T90 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPfab_met(FUNCODEREF(fun_compute_ast_35),T90,LITREF(lit_55),LITREF(lit_56),sloc(162),YPfalse);
  T92 = VARREF_OR(YevalSg2cYcompute_ast,YPfalse);
  T93 = fun_compute_ast_35;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSg2cYcompute_ast,T91);
  lit_59 = YPPsym((P)"compute-program");
  lit_60 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_61 = YPsb((P)"ANA");
  lit_62 = YPsb((P)"BOX");
  lit_63 = YPsb((P)"LFT");
  lit_64 = YPsb((P)"EXT");
  lit_65 = YPsb((P)"CLO");
  lit_66 = YPsb((P)"TMP");
  lit_67 = YPsb((P)"REG");
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPfab_met(FUNCODEREF(fun_compute_program_36),T94,LITREF(lit_59),LITREF(lit_60),sloc(172),YPfalse);
  T96 = VARREF_OR(YevalSg2cYcompute_program,YPfalse);
  T97 = fun_compute_program_36;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSg2cYcompute_program,T95);
  lit_68 = YPPsym((P)"generate-c-module");
  lit_69 = YPPlist(4,YPPsym((P)"out"),YPPsym((P)"e"),YPPsym((P)"prg"),YPPsym((P)"mod"));
  T98 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPfab_met(FUNCODEREF(fun_generate_c_module_37),T98,LITREF(lit_68),LITREF(lit_69),sloc(198),YPfalse);
  T100 = VARREF_OR(YevalSg2cYgenerate_c_module,YPfalse);
  T101 = fun_generate_c_module_37;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSg2cYgenerate_c_module,T99);
  lit_70 = YPPsym((P)"generate-c-application");
  lit_71 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  lit_72 = YPsb((P)"-init");
  T104 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T104,YPfalse,LITREF(lit_20),sloc(214),YPfalse);
  T103 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T103,YPfalse,LITREF(lit_20),sloc(214),YPfalse);
  T102 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPfab_met(FUNCODEREF(fun_generate_c_application_40),T102,LITREF(lit_70),LITREF(lit_71),sloc(210),YPfalse);
  T106 = VARREF_OR(YevalSg2cYgenerate_c_application,YPfalse);
  T107 = fun_generate_c_application_40;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSg2cYgenerate_c_application,T105);
  lit_73 = YPPlist(1,YPPsym((P)"exp"));
  lit_74 = YPPlist(1,YPPsym((P)"return"));
  lit_75 = YPPsym((P)"x-2102");
  lit_76 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_77 = YPPsym((P)"for-mods");
  lit_78 = YPsb((P)"Match Pattern Failure");
  lit_79 = YPPsym((P)"do-module-loader-modules");
  lit_80 = YPPsym((P)"fun");
  lit_81 = Ynil;
  T110 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2102_41 = YPfab_met(FUNCODEREF(fun_x_2102_41),T110,LITREF(lit_75),LITREF(lit_76),YPfalse,YPfalse);
  T109 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPfab_met(FUNCODEREF(fun_42),T109,YPfalse,LITREF(lit_74),YPfalse,YPfalse);
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T108,YPfalse,LITREF(lit_73),YPfalse,YPfalse);
  T111 = fun_43;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T111);
  lit_82 = YPPsym((P)"generate-makefile");
  lit_83 = YPPlist(1,YPPsym((P)"loader"));
  lit_84 = YPsb((P)"-init");
  lit_85 = YPsb((P)"Makefile");
  lit_86 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_87 = YPsb((P)"%,$(C_OBJS))\n");
  lit_88 = YPsb((P)": ..");
  lit_89 = YPsb((P)"grt.h\n");
  lit_90 = YPsb((P)"\t$(CC) -I.. ");
  lit_91 = YPPlist(1,YPPsym((P)"mod"));
  lit_92 = YPPlist(1,YPPsym((P)"i"));
  lit_93 = YPsb((P)"-I");
  lit_94 = YPsb((P)" ");
  lit_95 = YPsb((P)"$(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_96 = YPsb((P)"OBJS = \\\n");
  lit_97 = YPPlist(1,YPPsym((P)"mod"));
  lit_98 = YPPsym((P)"put-obj");
  lit_99 = YPPlist(1,YPPsym((P)"name"));
  lit_100 = YPsb((P)"\t");
  lit_101 = YPsb((P)" \\\n");
  lit_102 = YPPlist(1,YPPsym((P)"name"));
  lit_103 = YPsb((P)".c");
  lit_104 = YPPlist(1,YPPsym((P)"n"));
  lit_105 = YPsb((P)"\t");
  lit_106 = YPsb((P)"\n\n");
  lit_107 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_108 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_109 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)");
  lit_110 = YPPlist(1,YPPsym((P)"mod"));
  lit_111 = YPPlist(1,YPPsym((P)"l"));
  lit_112 = YPsb((P)" -l");
  lit_113 = YPsb((P)"\n\nclean:\n\trm -f ");
  lit_114 = YPsb((P)" $(OBJS)\n");
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T133 = fun_44 = YPfab_met(FUNCODEREF(fun_44),T134,YPfalse,LITREF(lit_92),sloc(234),YPfalse);
  T132 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T131 = fun_45 = YPfab_met(FUNCODEREF(fun_45),T132,YPfalse,LITREF(lit_91),sloc(233),YPfalse);
  T130 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T129 = fun_put_obj_46 = YPfab_met(FUNCODEREF(fun_put_obj_46),T130,LITREF(lit_98),LITREF(lit_99),sloc(238),YPfalse);
  T128 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T127 = fun_47 = YPfab_met(FUNCODEREF(fun_47),T128,YPfalse,LITREF(lit_102),sloc(242),YPfalse);
  T126 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T125 = fun_48 = YPfab_met(FUNCODEREF(fun_48),T126,YPfalse,LITREF(lit_104),sloc(243),YPfalse);
  T124 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T123 = fun_49 = YPfab_met(FUNCODEREF(fun_49),T124,YPfalse,LITREF(lit_97),sloc(237),YPfalse);
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T121 = fun_50 = YPfab_met(FUNCODEREF(fun_50),T122,YPfalse,LITREF(lit_111),sloc(249),YPfalse);
  T120 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T119 = fun_51 = YPfab_met(FUNCODEREF(fun_51),T120,YPfalse,LITREF(lit_110),sloc(248),YPfalse);
  T118 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T117 = fun_52 = YPfab_met(FUNCODEREF(fun_52),T118,YPfalse,LITREF(lit_20),sloc(229),YPfalse);
  T116 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T115 = fun_53 = YPfab_met(FUNCODEREF(fun_53),T116,YPfalse,LITREF(lit_20),sloc(229),YPfalse);
  T114 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T113 = fun_generate_makefile_54 = YPfab_met(FUNCODEREF(fun_generate_makefile_54),T114,LITREF(lit_82),LITREF(lit_83),sloc(223),YPfalse);
  T137 = VARREF_OR(YevalSg2cYgenerate_makefile,YPfalse);
  T138 = fun_generate_makefile_54;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  T135 = VARSET(YevalSg2cYgenerate_makefile,T136);
  T112 = T135;
  return T112;
}

P YevalSg2cY___main_1___() {
  P iF6152;
  P x_2135F6151;
  P iF6150;
  P x_2133F6149;
  P mangleF6148;
  P x_2131F6147;
  P iF6146;
  P x_2129F6145;
  P tableF6144;
  P vecF6143;
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171;
DEFCREGS();
  lit_115 = YPPsym((P)"pp");
  lit_116 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_55 = YPfab_met(FUNCODEREF(fun_pp_55),T0,LITREF(lit_115),LITREF(lit_116),sloc(258),YPfalse);
  T2 = VARREF_OR(YevalSg2cYpp,YPfalse);
  T3 = fun_pp_55;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSg2cYpp,T1);
  lit_117 = YPsb((P)"_mod");
  VARSET(YevalSg2cYDnow_mod_var_name,LITREF(lit_117));
  lit_118 = YPPsym((P)"generate-header");
  lit_119 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"modname"));
  lit_120 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_121 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_122 = YPsb((P)"#include \"dlgrt.h\"\n");
  lit_123 = YPsb((P)"\nstatic PSTR ");
  lit_124 = YPsb((P)" = PNUL;\n");
  lit_125 = YPsb((P)"\nstatic P sloc (int line) {\n");
  lit_126 = YPsb((P)"  if (");
  lit_127 = YPsb((P)" == PNUL) ");
  lit_128 = YPsb((P)" = ");
  lit_129 = YPsb((P)";\n");
  lit_130 = YPsb((P)"  return ");
  lit_131 = YPsb((P)"%src-loc");
  lit_132 = YPsb((P)"(");
  lit_133 = YPsb((P)"%ib");
  lit_134 = YPsb((P)"((P)line), ");
  lit_135 = YPsb((P)");\n");
  lit_136 = YPsb((P)"}\n");
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_56 = YPfab_met(FUNCODEREF(fun_generate_header_56),T4,LITREF(lit_118),LITREF(lit_119),sloc(264),YPfalse);
  T6 = VARREF_OR(YevalSg2cYgenerate_header,YPfalse);
  T7 = fun_generate_header_56;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSg2cYgenerate_header,T5);
  lit_137 = YPPsym((P)"generate-trailer");
  lit_138 = YPPlist(1,YPPsym((P)"out"));
  lit_139 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_57 = YPfab_met(FUNCODEREF(fun_generate_trailer_57),T8,LITREF(lit_137),LITREF(lit_138),sloc(279),YPfalse);
  T10 = VARREF_OR(YevalSg2cYgenerate_trailer,YPfalse);
  T11 = fun_generate_trailer_57;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSg2cYgenerate_trailer,T9);
  lit_140 = YPPsym((P)"generate-global-environment");
  lit_141 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_142 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_143 = YPsb((P)" */\n\n");
  lit_144 = YPPsym((P)"gen-binding");
  lit_145 = YPPlist(1,YPPsym((P)"b"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gen_binding_58 = YPfab_met(FUNCODEREF(fun_gen_binding_58),T13,LITREF(lit_144),LITREF(lit_145),sloc(291),YPfalse);
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_59 = YPfab_met(FUNCODEREF(fun_generate_global_environment_59),T12,LITREF(lit_140),LITREF(lit_141),sloc(289),YPfalse);
  T15 = VARREF_OR(YevalSg2cYgenerate_global_environment,YPfalse);
  T16 = fun_generate_global_environment_59;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalSg2cYgenerate_global_environment,T14);
  lit_146 = YPPsym((P)"generate-global-binding");
  lit_147 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"imported?"),YPPsym((P)"gb"));
  lit_148 = YPPsym((P)"global");
  lit_149 = YPPsym((P)"runtime");
  lit_150 = YPPsym((P)"dynamic");
  lit_151 = YPsb((P)"RTV");
  lit_152 = YPsb((P)"DYN");
  lit_153 = YPsb((P)"");
  lit_154 = YPsb((P)"EXT");
  lit_155 = YPsb((P)"DEF");
  lit_156 = YPsb((P)"(");
  lit_157 = YPsb((P)",");
  lit_158 = YPsb((P)",");
  lit_159 = YPsb((P)");\n");
  T17 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_60 = YPfab_met(FUNCODEREF(fun_generate_global_binding_60),T17,LITREF(lit_146),LITREF(lit_147),sloc(298),YPfalse);
  T19 = VARREF_OR(YevalSg2cYgenerate_global_binding,YPfalse);
  T20 = fun_generate_global_binding_60;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YevalSg2cYgenerate_global_binding,T18);
  lit_160 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_160));
  lit_161 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_161));
  lit_162 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_162));
  lit_163 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_163));
  lit_164 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_164));
  lit_165 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_165));
  T21 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T21);
  T22 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T22);
  T23 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T23);
  T24 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T24);
  T25 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T25);
  T26 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T26);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T27 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T27);
  lit_166 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_167 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_168 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_169 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_170 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_171 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_172 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_173 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_174 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_175 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_176 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_177 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_178 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_179 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_180 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_181 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_182 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_183 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T28 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_166),LITREF(lit_167),LITREF(lit_168),LITREF(lit_169),LITREF(lit_170),LITREF(lit_171),LITREF(lit_172),LITREF(lit_173),LITREF(lit_174),LITREF(lit_175),LITREF(lit_176),LITREF(lit_177),LITREF(lit_178),LITREF(lit_179),LITREF(lit_180),LITREF(lit_181),LITREF(lit_182),LITREF(lit_183));
  VARSET(YevalSg2cYDmangles_data,T28);
  lit_184 = YPPsym((P)"char-buffer-as-string");
  lit_185 = YPPlist(1,YPPsym((P)"buffer"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPfab_met(FUNCODEREF(YevalSg2cYchar_buffer_as_string),T29,LITREF(lit_184),LITREF(lit_185),sloc(341),YPfalse);
  T30 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T30);
  lit_186 = YPsb((P)"\\t");
  lit_187 = YPsb((P)"\\f");
  lit_188 = YPsb((P)"\\r");
  lit_189 = YPsb((P)"\\n");
  lit_190 = YPsb((P)"\\\"");
  lit_191 = YPsb((P)"\\\\");
  T39 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T38 = XCALL2(1,VARREF(YgooScolsScolYfill),T39,YPfalse);
  vecF6143 = T38;
  T31 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_186),vecF6143,T31);
  T32 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_187),vecF6143,T32);
  T33 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_188),vecF6143,T33);
  T34 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_189),vecF6143,T34);
  T35 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_190),vecF6143,T35);
  T36 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_191),vecF6143,T36);
  T37 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF6143);
  VARSET(YevalSg2cYDc_escapes,T37);
  lit_192 = YPPsym((P)"mangle-string-literal");
  lit_193 = YPPlist(1,YPPsym((P)"str"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_62 = YPfab_met(FUNCODEREF(fun_mangle_string_literal_62),T40,LITREF(lit_192),LITREF(lit_193),sloc(362),YPfalse);
  T42 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T43 = fun_mangle_string_literal_62;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSg2cYmangle_string_literal,T41);
  lit_194 = YPPlist(1,YPPsym((P)"sym"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_63 = YPfab_met(FUNCODEREF(fun_mangle_string_literal_63),T44,LITREF(lit_192),LITREF(lit_194),sloc(377),YPfalse);
  T46 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T47 = fun_mangle_string_literal_63;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSg2cYmangle_string_literal,T45);
  lit_195 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_195));
  lit_196 = YPPsym((P)"mangle-integer");
  lit_197 = YPPlist(1,YPPsym((P)"number"));
  lit_198 = YPPsym((P)"process-integer");
  lit_199 = YPPlist(2,YPPsym((P)"number"),YPPsym((P)"index"));
  T49 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_64 = YPfab_met(FUNCODEREF(fun_process_integer_64),T49,LITREF(lit_198),LITREF(lit_199),sloc(384),YPfalse);
  T48 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_65 = YPfab_met(FUNCODEREF(fun_mangle_integer_65),T48,LITREF(lit_196),LITREF(lit_197),sloc(382),YPfalse);
  T51 = VARREF_OR(YevalSg2cYmangle_integer,YPfalse);
  T52 = fun_mangle_integer_65;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSg2cYmangle_integer,T50);
  T96 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T95 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T96);
  tableF6144 = T95;
  T62 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T61 = XCALL1(1,VARREF(YgooScolsScolYenum),T62);
  x_2129F6145 = T61;
  LOOP_334: {
    P a334_0;
    T55 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2129F6145);
    T54 = XCALL1(1,VARREF(Ynot),T55);
    if (T54 != YPfalse) {
      T60 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2129F6145);
      iF6146 = T60;
      T57 = XCALL1(1,VARREF(YevalSg2cYmangle_integer),iF6146);
      T56 = XCALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T57,VARREF(YevalSg2cYDescape_separator));
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T56,tableF6144,iF6146);
      T59 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2129F6145);
      a334_0 = T59;
      x_2129F6145 = a334_0;
      goto LOOP_334;
      T53 = T58;
    } else {
      T53 = YPfalse;
    }
  }
  T72 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  x_2131F6147 = T72;
  LOOP_335: {
    P a335_0;
    T65 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2131F6147);
    T64 = XCALL1(1,VARREF(Ynot),T65);
    if (T64 != YPfalse) {
      T71 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2131F6147);
      mangleF6148 = T71;
      T66 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF6148,YPint((P)1));
      T68 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF6148,YPint((P)0));
      T67 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T68);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T66,tableF6144,T67);
      T70 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2131F6147);
      a335_0 = T70;
      x_2131F6147 = a335_0;
      goto LOOP_335;
      T63 = T69;
    } else {
      T63 = YPfalse;
    }
  }
  T82 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T83 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T81 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T82,VARREF(YgooSmagYLE),T83);
  T80 = XCALL1(1,VARREF(YgooScolsScolYenum),T81);
  x_2133F6149 = T80;
  LOOP_336: {
    P a336_0;
    T75 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2133F6149);
    T74 = XCALL1(1,VARREF(Ynot),T75);
    if (T74 != YPfalse) {
      T79 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2133F6149);
      iF6150 = T79;
      T76 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF6150);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T76,tableF6144,iF6150);
      T78 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2133F6149);
      a336_0 = T78;
      x_2133F6149 = a336_0;
      goto LOOP_336;
      T73 = T77;
    } else {
      T73 = YPfalse;
    }
  }
  T93 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T94 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T92 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T93,VARREF(YgooSmagYLE),T94);
  T91 = XCALL1(1,VARREF(YgooScolsScolYenum),T92);
  x_2135F6151 = T91;
  LOOP_337: {
    P a337_0;
    T86 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2135F6151);
    T85 = XCALL1(1,VARREF(Ynot),T86);
    if (T85 != YPfalse) {
      T90 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2135F6151);
      iF6152 = T90;
      T87 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF6152);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T87,tableF6144,iF6152);
      T89 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2135F6151);
      a337_0 = T89;
      x_2135F6151 = a337_0;
      goto LOOP_337;
      T84 = T88;
    } else {
      T84 = YPfalse;
    }
  }
  VARSET(YevalSg2cYDname_mangler_table,tableF6144);
  lit_200 = YPPsym((P)"mangler-reset");
  lit_201 = YPPlist(1,YPPsym((P)"buffer"));
  T97 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPfab_met(FUNCODEREF(YevalSg2cYmangler_reset),T97,LITREF(lit_200),LITREF(lit_201),sloc(413),YPfalse);
  T98 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T98);
  lit_202 = YPPsym((P)"mangle-name-into");
  lit_203 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T99 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPfab_met(FUNCODEREF(YevalSg2cYmangle_name_into),T99,LITREF(lit_202),LITREF(lit_203),sloc(416),YPfalse);
  T100 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T100);
  lit_204 = YPPsym((P)"mangle-raw-name");
  lit_205 = YPPlist(1,YPPsym((P)"name"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_68 = YPfab_met(FUNCODEREF(fun_mangle_raw_name_68),T101,LITREF(lit_204),LITREF(lit_205),sloc(421),YPfalse);
  T103 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T104 = fun_mangle_raw_name_68;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSg2cYmangle_raw_name,T102);
  lit_206 = YPPlist(1,YPPsym((P)"name"));
  T105 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_69 = YPfab_met(FUNCODEREF(fun_mangle_raw_name_69),T105,LITREF(lit_204),LITREF(lit_206),sloc(426),YPfalse);
  T107 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T108 = fun_mangle_raw_name_69;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSg2cYmangle_raw_name,T106);
  lit_207 = YPPsym((P)"mangle-local-name");
  lit_208 = YPPlist(1,YPPsym((P)"name"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_70 = YPfab_met(FUNCODEREF(fun_mangle_local_name_70),T109,LITREF(lit_207),LITREF(lit_208),sloc(429),YPfalse);
  T111 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T112 = fun_mangle_local_name_70;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSg2cYmangle_local_name,T110);
  lit_209 = YPPlist(1,YPPsym((P)"name"));
  T113 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_71 = YPfab_met(FUNCODEREF(fun_mangle_local_name_71),T113,LITREF(lit_207),LITREF(lit_209),sloc(435),YPfalse);
  T115 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T116 = fun_mangle_local_name_71;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSg2cYmangle_local_name,T114);
  lit_210 = YPPsym((P)"buf-cat2!");
  lit_211 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T117 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPfab_met(FUNCODEREF(YevalSg2cYbuf_cat2X),T117,LITREF(lit_210),LITREF(lit_211),sloc(439),YPfalse);
  T118 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T118);
  lit_212 = YPPsym((P)"mangle-module-into");
  lit_213 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T119 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_73 = YPfab_met(FUNCODEREF(fun_mangle_module_into_73),T119,LITREF(lit_212),LITREF(lit_213),sloc(446),YPfalse);
  T121 = VARREF_OR(YevalSg2cYmangle_module_into,YPfalse);
  T122 = fun_mangle_module_into_73;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSg2cYmangle_module_into,T120);
  lit_214 = YPPsym((P)"mangle-global-name");
  lit_215 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T123 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_74 = YPfab_met(FUNCODEREF(fun_mangle_global_name_74),T123,LITREF(lit_214),LITREF(lit_215),sloc(453),YPfalse);
  T125 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T126 = fun_mangle_global_name_74;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSg2cYmangle_global_name,T124);
  lit_216 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T127 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_75 = YPfab_met(FUNCODEREF(fun_mangle_global_name_75),T127,LITREF(lit_214),LITREF(lit_216),sloc(464),YPfalse);
  T129 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T130 = fun_mangle_global_name_75;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YevalSg2cYmangle_global_name,T128);
  lit_217 = YPPsym((P)"mangle-boot-name");
  lit_218 = YPPlist(1,YPPsym((P)"name"));
  T131 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_boot_name),T131,LITREF(lit_217),LITREF(lit_218),sloc(469),YPfalse);
  T132 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T132);
  lit_219 = YPPsym((P)"mangle-quotation-name");
  lit_220 = YPPlist(1,YPPsym((P)"name"));
  lit_221 = YPsb((P)"lit_");
  T133 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_quotation_name),T133,LITREF(lit_219),LITREF(lit_220),sloc(472),YPfalse);
  T134 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T134);
  lit_222 = YPPsym((P)"mangle-binding");
  lit_223 = YPPlist(1,YPPsym((P)"binding"));
  lit_224 = YPPsym((P)"quotation");
  T135 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_78 = YPfab_met(FUNCODEREF(fun_mangle_binding_78),T135,LITREF(lit_222),LITREF(lit_223),sloc(478),YPfalse);
  T137 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T138 = fun_mangle_binding_78;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YevalSg2cYmangle_binding,T136);
  lit_225 = YPPsym((P)"mangle-local-marked-name");
  lit_226 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T139 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_local_marked_name),T139,LITREF(lit_225),LITREF(lit_226),sloc(485),YPfalse);
  T140 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T140);
  lit_227 = YPPlist(1,YPPsym((P)"binding"));
  T141 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_80 = YPfab_met(FUNCODEREF(fun_mangle_binding_80),T141,LITREF(lit_222),LITREF(lit_227),sloc(492),YPfalse);
  T143 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T144 = fun_mangle_binding_80;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSg2cYmangle_binding,T142);
  lit_228 = YPPlist(1,YPPsym((P)"binding"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_81 = YPfab_met(FUNCODEREF(fun_mangle_binding_81),T145,LITREF(lit_222),LITREF(lit_228),sloc(496),YPfalse);
  T147 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T148 = fun_mangle_binding_81;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSg2cYmangle_binding,T146);
  lit_229 = YPPlist(1,YPPsym((P)"exp"));
  lit_230 = YPPlist(1,YPPsym((P)"return"));
  lit_231 = YPPsym((P)"x-2142");
  lit_232 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_233 = YPPsym((P)"for-commas");
  lit_234 = YPPsym((P)"let");
  lit_235 = YPPsym((P)"for");
  lit_236 = YPPsym((P)"first?");
  lit_237 = YPPsym((P)"first-then");
  lit_238 = YPPsym((P)"op");
  lit_239 = YPPsym((P)"unless");
  lit_240 = YPPsym((P)"put");
  T151 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2142_82 = YPfab_met(FUNCODEREF(fun_x_2142_82),T151,LITREF(lit_231),LITREF(lit_232),YPfalse,YPfalse);
  T150 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPfab_met(FUNCODEREF(fun_83),T150,YPfalse,LITREF(lit_230),YPfalse,YPfalse);
  T149 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPfab_met(FUNCODEREF(fun_84),T149,YPfalse,LITREF(lit_229),YPfalse,YPfalse);
  T152 = fun_84;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T152);
  lit_241 = YPPlist(1,YPPsym((P)"exp"));
  lit_242 = YPPlist(1,YPPsym((P)"return"));
  lit_243 = YPPsym((P)"x-2146");
  lit_244 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_245 = YPPsym((P)"between-parentheses");
  T155 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2146_85 = YPfab_met(FUNCODEREF(fun_x_2146_85),T155,LITREF(lit_243),LITREF(lit_244),YPfalse,YPfalse);
  T154 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPfab_met(FUNCODEREF(fun_86),T154,YPfalse,LITREF(lit_242),YPfalse,YPfalse);
  T153 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T153,YPfalse,LITREF(lit_241),YPfalse,YPfalse);
  T156 = fun_87;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T156);
  lit_246 = YPPlist(1,YPPsym((P)"exp"));
  lit_247 = YPPlist(1,YPPsym((P)"return"));
  lit_248 = YPPsym((P)"x-2150");
  lit_249 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_250 = YPPsym((P)"between-parentheses-comma-separated");
  T159 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2150_88 = YPfab_met(FUNCODEREF(fun_x_2150_88),T159,LITREF(lit_248),LITREF(lit_249),YPfalse,YPfalse);
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T158,YPfalse,LITREF(lit_247),YPfalse,YPfalse);
  T157 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPfab_met(FUNCODEREF(fun_90),T157,YPfalse,LITREF(lit_246),YPfalse,YPfalse);
  T160 = fun_90;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T160);
  lit_251 = YPPsym((P)"gen-result");
  lit_252 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_253 = YPsb((P)"T");
  lit_254 = YPsb((P)" = ");
  T161 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_91 = YPfab_met(FUNCODEREF(fun_gen_result_91),T161,LITREF(lit_251),LITREF(lit_252),sloc(528),YPfalse);
  T163 = VARREF_OR(YevalSg2cYgen_result,YPfalse);
  T164 = fun_gen_result_91;
  T162 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T163,T164);
  VARSET(YevalSg2cYgen_result,T162);
  lit_255 = YPPsym((P)"gen-depth");
  lit_256 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"out"));
  lit_257 = YPsb((P)"  ");
  T167 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T166 = fun_gen_depth_92 = YPfab_met(FUNCODEREF(fun_gen_depth_92),T167,LITREF(lit_255),LITREF(lit_256),sloc(532),YPfalse);
  T170 = VARREF_OR(YevalSg2cYgen_depth,YPfalse);
  T171 = fun_gen_depth_92;
  T169 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T170,T171);
  T168 = VARSET(YevalSg2cYgen_depth,T169);
  T165 = T168;
  return T165;
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
  P T192,T193;
DEFCREGS();
  lit_258 = YPPlist(1,YPPsym((P)"exp"));
  lit_259 = YPPlist(1,YPPsym((P)"return"));
  lit_260 = YPPsym((P)"x-2157");
  lit_261 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_262 = YPPsym((P)"with-statement");
  lit_263 = YPPsym((P)"seq");
  lit_264 = YPPsym((P)"puts");
  lit_265 = YPsb((P)";\n");
  T2 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2157_93 = YPfab_met(FUNCODEREF(fun_x_2157_93),T2,LITREF(lit_260),LITREF(lit_261),YPfalse,YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPfab_met(FUNCODEREF(fun_94),T1,YPfalse,LITREF(lit_259),YPfalse,YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPfab_met(FUNCODEREF(fun_95),T0,YPfalse,LITREF(lit_258),YPfalse,YPfalse);
  T3 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T3);
  lit_266 = YPPlist(1,YPPsym((P)"exp"));
  lit_267 = YPPlist(1,YPPsym((P)"return"));
  lit_268 = YPPsym((P)"x-2161");
  lit_269 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_270 = YPPsym((P)"with-expression");
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2161_96 = YPfab_met(FUNCODEREF(fun_x_2161_96),T6,LITREF(lit_268),LITREF(lit_269),YPfalse,YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T5,YPfalse,LITREF(lit_267),YPfalse,YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPfab_met(FUNCODEREF(fun_98),T4,YPfalse,LITREF(lit_266),YPfalse,YPfalse);
  T7 = fun_98;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T7);
  lit_271 = YPPlist(1,YPPsym((P)"exp"));
  lit_272 = YPPlist(1,YPPsym((P)"return"));
  lit_273 = YPPsym((P)"x-2165");
  lit_274 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_275 = YPPsym((P)"with-used-expression");
  lit_276 = YPPsym((P)"when");
  lit_277 = YPPsym((P)"program-register");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2165_99 = YPfab_met(FUNCODEREF(fun_x_2165_99),T10,LITREF(lit_273),LITREF(lit_274),YPfalse,YPfalse);
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T9,YPfalse,LITREF(lit_272),YPfalse,YPfalse);
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPfab_met(FUNCODEREF(fun_101),T8,YPfalse,LITREF(lit_271),YPfalse,YPfalse);
  T11 = fun_101;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T11);
  lit_278 = YPPsym((P)"generate-quotation-forwards");
  lit_279 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_280 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_281 = YPsb((P)"DEFLIT(lit_");
  lit_282 = YPsb((P)");\n");
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_102 = YPfab_met(FUNCODEREF(fun_generate_quotation_forwards_102),T12,LITREF(lit_278),LITREF(lit_279),sloc(552),YPfalse);
  T14 = VARREF_OR(YevalSg2cYgenerate_quotation_forwards,YPfalse);
  T15 = fun_generate_quotation_forwards_102;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T13);
  lit_283 = YPPsym((P)"generate-quotations");
  lit_284 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_285 = YPsb((P)"lit_");
  lit_286 = YPsb((P)" = ");
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_103 = YPfab_met(FUNCODEREF(fun_generate_quotations_103),T16,LITREF(lit_283),LITREF(lit_284),sloc(557),YPfalse);
  T18 = VARREF_OR(YevalSg2cYgenerate_quotations,YPfalse);
  T19 = fun_generate_quotations_103;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYgenerate_quotations,T17);
  T20 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  VARSET(YevalSg2cYTlitsT,T20);
  T21 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  VARSET(YevalSg2cYTlits_atT,T21);
  lit_287 = YPPsym((P)"@lit");
  lit_288 = YPPlist(1,YPPsym((P)"n"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOlit = YPfab_met(FUNCODEREF(YOlit),T22,LITREF(lit_287),LITREF(lit_288),sloc(566),YPfalse);
  T23 = YOlit;
  VARSET(YOlit,T23);
  lit_289 = YPPsym((P)"ref-lit");
  lit_290 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_105 = YPfab_met(FUNCODEREF(fun_105),T25,YPfalse,LITREF(lit_20),YPfalse,YPfalse);
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ref_lit_106 = YPfab_met(FUNCODEREF(fun_ref_lit_106),T24,LITREF(lit_289),LITREF(lit_290),sloc(568),YPfalse);
  T27 = VARREF_OR(YevalSg2cYref_lit,YPfalse);
  T28 = fun_ref_lit_106;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSg2cYref_lit,T26);
  lit_291 = YPPsym((P)"generate-quotation");
  lit_292 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_293 = YPsb((P)"%lit");
  lit_294 = YPsb((P)"((P)");
  lit_295 = YPsb((P)")");
  T29 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_107 = YPfab_met(FUNCODEREF(fun_generate_quotation_107),T29,LITREF(lit_291),LITREF(lit_292),sloc(571),YPfalse);
  T31 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T32 = fun_generate_quotation_107;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSg2cYgenerate_quotation,T30);
  lit_296 = YPPsym((P)"false-name");
  lit_297 = YPsb((P)"%false");
  T33 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_108 = YPfab_met(FUNCODEREF(fun_false_name_108),T33,LITREF(lit_296),LITREF(lit_20),sloc(574),YPfalse);
  T35 = VARREF_OR(YevalSg2cYfalse_name,YPfalse);
  T36 = fun_false_name_108;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSg2cYfalse_name,T34);
  lit_298 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_299 = YPsb((P)"%true");
  lit_300 = YPsb((P)"%false");
  T37 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_109 = YPfab_met(FUNCODEREF(fun_generate_quotation_109),T37,LITREF(lit_291),LITREF(lit_298),sloc(577),YPfalse);
  T39 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T40 = fun_generate_quotation_109;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSg2cYgenerate_quotation,T38);
  lit_301 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_302 = YPsb((P)"nil");
  T42 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),T42),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_110 = YPfab_met(FUNCODEREF(fun_generate_quotation_110),T41,LITREF(lit_291),LITREF(lit_301),sloc(580),YPfalse);
  T44 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T45 = fun_generate_quotation_110;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSg2cYgenerate_quotation,T43);
  lit_303 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_304 = YPPlist(1,YPPsym((P)"x"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPfab_met(FUNCODEREF(fun_111),T47,YPfalse,LITREF(lit_304),sloc(584),YPfalse);
  T46 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPfab_met(FUNCODEREF(fun_generate_quotation_112),T46,LITREF(lit_291),LITREF(lit_303),sloc(583),YPfalse);
  T49 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T50 = fun_generate_quotation_112;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSg2cYgenerate_quotation,T48);
  lit_305 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_306 = YPsb((P)"%int");
  lit_307 = YPsb((P)"((P)");
  lit_308 = YPsb((P)")");
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPfab_met(FUNCODEREF(fun_generate_quotation_113),T51,LITREF(lit_291),LITREF(lit_305),sloc(586),YPfalse);
  T53 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T54 = fun_generate_quotation_113;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSg2cYgenerate_quotation,T52);
  lit_309 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_310 = YPsb((P)"%chr");
  lit_311 = YPsb((P)"((P)");
  lit_312 = YPsb((P)")");
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPfab_met(FUNCODEREF(fun_generate_quotation_114),T55,LITREF(lit_291),LITREF(lit_309),sloc(589),YPfalse);
  T57 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T58 = fun_generate_quotation_114;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSg2cYgenerate_quotation,T56);
  lit_313 = YPPsym((P)"float-to-c-string");
  lit_314 = YPPlist(1,YPPsym((P)"o"));
  lit_315 = YPPlist(1,YPPsym((P)"done"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPfab_met(FUNCODEREF(fun_115),T60,YPfalse,LITREF(lit_315),sloc(595),YPfalse);
  T59 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_116 = YPfab_met(FUNCODEREF(fun_float_to_c_string_116),T59,LITREF(lit_313),LITREF(lit_314),sloc(592),YPfalse);
  T62 = VARREF_OR(YevalSg2cYfloat_to_c_string,YPfalse);
  T63 = fun_float_to_c_string_116;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSg2cYfloat_to_c_string,T61);
  lit_316 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_317 = YPsb((P)"%flo");
  lit_318 = YPsb((P)"(FLOINT(");
  lit_319 = YPsb((P)"))");
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_117 = YPfab_met(FUNCODEREF(fun_generate_quotation_117),T64,LITREF(lit_291),LITREF(lit_316),sloc(607),YPfalse);
  T66 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T67 = fun_generate_quotation_117;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSg2cYgenerate_quotation,T65);
  lit_320 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_321 = YPsb((P)"%sb");
  lit_322 = YPsb((P)"((P)");
  lit_323 = YPsb((P)")");
  T68 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_118 = YPfab_met(FUNCODEREF(fun_generate_quotation_118),T68,LITREF(lit_291),LITREF(lit_320),sloc(611),YPfalse);
  T70 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T71 = fun_generate_quotation_118;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSg2cYgenerate_quotation,T69);
  lit_324 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_325 = YPsb((P)"XCALLN(1, ");
  lit_326 = YPsb((P)"vec");
  lit_327 = YPsb((P)", ");
  lit_328 = YPsb((P)", ");
  lit_329 = YPsb((P)")");
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_119 = YPfab_met(FUNCODEREF(fun_generate_quotation_119),T72,LITREF(lit_291),LITREF(lit_324),sloc(615),YPfalse);
  T74 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T75 = fun_generate_quotation_119;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSg2cYgenerate_quotation,T73);
  lit_330 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_331 = YPsb((P)"XCALLN(1, ");
  lit_332 = YPsb((P)"tup");
  lit_333 = YPsb((P)", ");
  lit_334 = YPsb((P)", ");
  lit_335 = YPsb((P)")");
  T76 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_120 = YPfab_met(FUNCODEREF(fun_generate_quotation_120),T76,LITREF(lit_291),LITREF(lit_330),sloc(623),YPfalse);
  T78 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T79 = fun_generate_quotation_120;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSg2cYgenerate_quotation,T77);
  lit_336 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_337 = YPsb((P)"%%sym");
  lit_338 = YPsb((P)"((P)");
  lit_339 = YPsb((P)")");
  T80 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_121 = YPfab_met(FUNCODEREF(fun_generate_quotation_121),T80,LITREF(lit_291),LITREF(lit_336),sloc(631),YPfalse);
  T82 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T83 = fun_generate_quotation_121;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSg2cYgenerate_quotation,T81);
  lit_340 = YPPsym((P)"binding->c");
  lit_341 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"out"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPfab_met(FUNCODEREF(YevalSg2cYbinding_Gc),T84,LITREF(lit_340),LITREF(lit_341),sloc(640),YPfalse);
  T85 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T85);
  lit_342 = YPPsym((P)"reference->c");
  lit_343 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T86 = YPfab_gen(T87,LITREF(lit_342),LITREF(lit_343),YPfalse);
  VARSET(YevalSg2cYreference_Gc,T86);
  lit_344 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T88 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_123 = YPfab_met(FUNCODEREF(fun_reference_Gc_123),T88,LITREF(lit_342),LITREF(lit_344),sloc(647),YPfalse);
  T90 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T91 = fun_reference_Gc_123;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSg2cYreference_Gc,T89);
  lit_345 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  lit_346 = YPsb((P)"LITREF");
  lit_347 = YPsb((P)"RTVREF");
  lit_348 = YPsb((P)"DYNREF");
  lit_349 = YPsb((P)"VARREF");
  T92 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_124 = YPfab_met(FUNCODEREF(fun_reference_Gc_124),T92,LITREF(lit_342),LITREF(lit_345),sloc(650),YPfalse);
  T94 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T95 = fun_reference_Gc_124;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSg2cYreference_Gc,T93);
  lit_350 = YPPsym((P)"to-c");
  lit_351 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T97 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T96 = YPfab_gen(T97,LITREF(lit_350),LITREF(lit_351),YPfalse);
  VARSET(YevalSg2cYto_c,T96);
  lit_352 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T98 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_125 = YPfab_met(FUNCODEREF(fun_to_c_125),T98,LITREF(lit_350),LITREF(lit_352),sloc(662),YPfalse);
  T100 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T101 = fun_to_c_125;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSg2cYto_c,T99);
  lit_353 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T102 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_126 = YPfab_met(FUNCODEREF(fun_to_c_126),T102,LITREF(lit_350),LITREF(lit_353),sloc(668),YPfalse);
  T104 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T105 = fun_to_c_126;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSg2cYto_c,T103);
  lit_354 = YPPsym((P)"gen-ref");
  lit_355 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_127 = YPfab_met(FUNCODEREF(fun_gen_ref_127),T106,LITREF(lit_354),LITREF(lit_355),sloc(670),YPfalse);
  T108 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T109 = fun_gen_ref_127;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSg2cYgen_ref,T107);
  lit_356 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_357 = YPsb((P)"FREEREF");
  T110 = YPfab_sig(YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_128 = YPfab_met(FUNCODEREF(fun_gen_ref_128),T110,LITREF(lit_354),LITREF(lit_356),sloc(673),YPfalse);
  T112 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T113 = fun_gen_ref_128;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSg2cYgen_ref,T111);
  lit_358 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_359 = YPsb((P)"T");
  lit_360 = YPsb((P)"T_1");
  T114 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_129 = YPfab_met(FUNCODEREF(fun_gen_ref_129),T114,LITREF(lit_354),LITREF(lit_358),sloc(678),YPfalse);
  T116 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T117 = fun_gen_ref_129;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSg2cYgen_ref,T115);
  lit_361 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_362 = YPsb((P)"(P)");
  T118 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_130 = YPfab_met(FUNCODEREF(fun_gen_ref_130),T118,LITREF(lit_354),LITREF(lit_361),sloc(682),YPfalse);
  T120 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T121 = fun_gen_ref_130;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSg2cYgen_ref,T119);
  lit_363 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T122 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_131 = YPfab_met(FUNCODEREF(fun_gen_ref_131),T122,LITREF(lit_354),LITREF(lit_363),sloc(685),YPfalse);
  T124 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T125 = fun_gen_ref_131;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSg2cYgen_ref,T123);
  lit_364 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T126 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_132 = YPfab_met(FUNCODEREF(fun_gen_ref_132),T126,LITREF(lit_354),LITREF(lit_364),sloc(688),YPfalse);
  T128 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T129 = fun_gen_ref_132;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYgen_ref,T127);
  lit_365 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T130 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_133 = YPfab_met(FUNCODEREF(fun_gen_ref_133),T130,LITREF(lit_354),LITREF(lit_365),sloc(691),YPfalse);
  T132 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T133 = fun_gen_ref_133;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYgen_ref,T131);
  lit_366 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T134 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_134 = YPfab_met(FUNCODEREF(fun_gen_ref_134),T134,LITREF(lit_354),LITREF(lit_366),sloc(694),YPfalse);
  T136 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T137 = fun_gen_ref_134;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSg2cYgen_ref,T135);
  lit_367 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T138 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_135 = YPfab_met(FUNCODEREF(fun_gen_ref_135),T138,LITREF(lit_354),LITREF(lit_367),sloc(697),YPfalse);
  T140 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T141 = fun_gen_ref_135;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  VARSET(YevalSg2cYgen_ref,T139);
  lit_368 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_369 = YPsb((P)"RTVSET(");
  lit_370 = YPsb((P)"DYNDEFSET(");
  lit_371 = YPsb((P)"DYNSET(");
  lit_372 = YPsb((P)"VARSET(");
  lit_373 = YPsb((P)",");
  lit_374 = YPsb((P)")");
  T142 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPfab_met(FUNCODEREF(fun_to_c_136),T142,LITREF(lit_350),LITREF(lit_368),sloc(700),YPfalse);
  T144 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T145 = fun_to_c_136;
  T143 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T144,T145);
  VARSET(YevalSg2cYto_c,T143);
  lit_375 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_376 = YPsb((P)"RTV");
  lit_377 = YPsb((P)"VARREF_OR");
  T146 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_137 = YPfab_met(FUNCODEREF(fun_to_c_137),T146,LITREF(lit_350),LITREF(lit_375),sloc(714),YPfalse);
  T148 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T149 = fun_to_c_137;
  T147 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T148,T149);
  VARSET(YevalSg2cYto_c,T147);
  lit_378 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_379 = YPsb((P)"BOXGET");
  T150 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_138 = YPfab_met(FUNCODEREF(fun_to_c_138),T150,LITREF(lit_350),LITREF(lit_378),sloc(725),YPfalse);
  T152 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T153 = fun_to_c_138;
  T151 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T152,T153);
  VARSET(YevalSg2cYto_c,T151);
  lit_380 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_381 = YPsb((P)"BOXPUT");
  lit_382 = YPsb((P)" = ");
  T154 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPfab_met(FUNCODEREF(fun_to_c_139),T154,LITREF(lit_350),LITREF(lit_380),sloc(733),YPfalse);
  T156 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T157 = fun_to_c_139;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YevalSg2cYto_c,T155);
  lit_383 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_384 = YPsb((P)" = BOXFAB");
  T158 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPfab_met(FUNCODEREF(fun_to_c_140),T158,LITREF(lit_350),LITREF(lit_383),sloc(744),YPfalse);
  T160 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T161 = fun_to_c_140;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSg2cYto_c,T159);
  lit_385 = YPPsym((P)"bb?");
  lit_386 = YPPlist(1,YPPsym((P)"x"));
  T162 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_141 = YPfab_met(FUNCODEREF(fun_bbQ_141),T162,LITREF(lit_385),LITREF(lit_386),sloc(752),YPfalse);
  T164 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T165 = fun_bbQ_141;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  VARSET(YevalSg2cYbbQ,T163);
  lit_387 = YPPlist(1,YPPsym((P)"x"));
  lit_388 = YPPsym((P)"%bb");
  T166 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_142 = YPfab_met(FUNCODEREF(fun_bbQ_142),T166,LITREF(lit_385),LITREF(lit_387),sloc(754),YPfalse);
  T168 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T169 = fun_bbQ_142;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  VARSET(YevalSg2cYbbQ,T167);
  lit_389 = YPPlist(1,YPPsym((P)"x"));
  T170 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_143 = YPfab_met(FUNCODEREF(fun_bbQ_143),T170,LITREF(lit_385),LITREF(lit_389),sloc(758),YPfalse);
  T172 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T173 = fun_bbQ_143;
  T171 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T172,T173);
  VARSET(YevalSg2cYbbQ,T171);
  lit_390 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_391 = YPsb((P)"if (");
  lit_392 = YPsb((P)") {\n");
  lit_393 = YPsb((P)" != ");
  lit_394 = YPsb((P)") {\n");
  lit_395 = YPsb((P)"} else {\n");
  lit_396 = YPsb((P)"}\n");
  T174 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_144 = YPfab_met(FUNCODEREF(fun_to_c_144),T174,LITREF(lit_350),LITREF(lit_390),sloc(761),YPfalse);
  T176 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T177 = fun_to_c_144;
  T175 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T176,T177);
  VARSET(YevalSg2cYto_c,T175);
  lit_397 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_398 = YPPlist(1,YPPsym((P)"x"));
  T179 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPfab_met(FUNCODEREF(fun_145),T179,YPfalse,LITREF(lit_398),sloc(780),YPfalse);
  T178 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_146 = YPfab_met(FUNCODEREF(fun_to_c_146),T178,LITREF(lit_350),LITREF(lit_397),sloc(779),YPfalse);
  T181 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T182 = fun_to_c_146;
  T180 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T181,T182);
  VARSET(YevalSg2cYto_c,T180);
  DYNDEFSET(YevalSg2cYTloop_arg_counterT,YPint((P)-1));
  lit_399 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_400 = YPsb((P)"LOOP_");
  lit_401 = YPsb((P)": {\n");
  lit_402 = YPsb((P)"P ");
  lit_403 = YPPlist(1,YPPsym((P)"x"));
  lit_404 = YPPlist(1,YPPsym((P)"x"));
  lit_405 = YPsb((P)"a");
  lit_406 = YPsb((P)"_");
  lit_407 = YPsb((P)"}\n");
  T189 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T188 = fun_147 = YPfab_met(FUNCODEREF(fun_147),T189,YPfalse,LITREF(lit_403),sloc(791),YPfalse);
  T187 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T186 = fun_148 = YPfab_met(FUNCODEREF(fun_148),T187,YPfalse,LITREF(lit_404),sloc(791),YPfalse);
  T185 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T184 = fun_to_c_149 = YPfab_met(FUNCODEREF(fun_to_c_149),T185,LITREF(lit_350),LITREF(lit_399),sloc(784),YPfalse);
  T192 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T193 = fun_to_c_149;
  T191 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T192,T193);
  T190 = VARSET(YevalSg2cYto_c,T191);
  T183 = T190;
  return T183;
}

P YevalSg2cY___main_3___() {
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
  P T176,T177,T178,T179,T180,T181;
DEFCREGS();
  lit_408 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_409 = YPsb((P)"a");
  lit_410 = YPsb((P)"_");
  lit_411 = YPsb((P)" = ");
  lit_412 = YPsb((P)" = a");
  lit_413 = YPsb((P)"_");
  lit_414 = YPsb((P)"goto LOOP_");
  T0 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLloop_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPfab_met(FUNCODEREF(fun_to_c_150),T0,LITREF(lit_350),LITREF(lit_408),sloc(797),YPfalse);
  T2 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T3 = fun_to_c_150;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSg2cYto_c,T1);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_415 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_416 = YPsb((P)"X");
  lit_417 = YPsb((P)"CALL");
  lit_418 = YPsb((P)"N");
  lit_419 = YPsb((P)"0,");
  lit_420 = YPsb((P)"1,");
  lit_421 = YPsb((P)",");
  T4 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPfab_met(FUNCODEREF(fun_to_c_151),T4,LITREF(lit_350),LITREF(lit_415),sloc(815),YPfalse);
  T6 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T7 = fun_to_c_151;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSg2cYto_c,T5);
  lit_422 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_423 = YPsb((P)"%next-methods-reg-setter");
  T8 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmethod_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPfab_met(FUNCODEREF(fun_to_c_152),T8,LITREF(lit_350),LITREF(lit_422),sloc(832),YPfalse);
  T10 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T11 = fun_to_c_152;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSg2cYto_c,T9);
  lit_424 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_425 = YPPlist(1,YPPsym((P)"x"));
  lit_426 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_153 = YPfab_met(FUNCODEREF(fun_153),T14,YPfalse,LITREF(lit_425),sloc(840),YPfalse);
  T13 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_154 = YPfab_met(FUNCODEREF(fun_154),T13,YPfalse,LITREF(lit_426),sloc(840),YPfalse);
  T12 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_155 = YPfab_met(FUNCODEREF(fun_to_c_155),T12,LITREF(lit_350),LITREF(lit_424),sloc(839),YPfalse);
  T16 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T17 = fun_to_c_155;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSg2cYto_c,T15);
  lit_427 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_428 = YPsb((P)"check_type");
  lit_429 = YPsb((P)" = ");
  T18 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_156 = YPfab_met(FUNCODEREF(fun_to_c_156),T18,LITREF(lit_350),LITREF(lit_427),sloc(843),YPfalse);
  T20 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T21 = fun_to_c_156;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSg2cYto_c,T19);
  lit_430 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_431 = YPsb((P)" = ");
  T22 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_157 = YPfab_met(FUNCODEREF(fun_to_c_157),T22,LITREF(lit_350),LITREF(lit_430),sloc(860),YPfalse);
  T24 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T25 = fun_to_c_157;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSg2cYto_c,T23);
  lit_432 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_433 = YPsb((P)"with_exit");
  T26 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPfab_met(FUNCODEREF(fun_to_c_158),T26,LITREF(lit_350),LITREF(lit_432),sloc(870),YPfalse);
  T28 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T29 = fun_to_c_158;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSg2cYto_c,T27);
  lit_434 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_435 = YPsb((P)"with_cleanup");
  T30 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_159 = YPfab_met(FUNCODEREF(fun_to_c_159),T30,LITREF(lit_350),LITREF(lit_434),sloc(876),YPfalse);
  T32 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T33 = fun_to_c_159;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSg2cYto_c,T31);
  lit_436 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_437 = YPsb((P)"XCALLN");
  lit_438 = YPsb((P)"1");
  lit_439 = YPsb((P)"%with-monitor");
  lit_440 = YPsb((P)"5");
  T34 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_160 = YPfab_met(FUNCODEREF(fun_to_c_160),T34,LITREF(lit_350),LITREF(lit_436),sloc(885),YPfalse);
  T36 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T37 = fun_to_c_160;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSg2cYto_c,T35);
  lit_441 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_442 = YPsb((P)"(P)");
  lit_443 = YPPlist(1,YPPsym((P)"x"));
  lit_444 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_161 = YPfab_met(FUNCODEREF(fun_161),T40,YPfalse,LITREF(lit_443),sloc(910),YPfalse);
  T39 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_162 = YPfab_met(FUNCODEREF(fun_162),T39,YPfalse,LITREF(lit_444),sloc(910),YPfalse);
  T38 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_163 = YPfab_met(FUNCODEREF(fun_to_c_163),T38,LITREF(lit_350),LITREF(lit_441),sloc(903),YPfalse);
  T42 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T43 = fun_to_c_163;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSg2cYto_c,T41);
  lit_445 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_446 = YPPlist(1,YPPsym((P)"x"));
  lit_447 = YPsb((P)"FUNFAB");
  lit_448 = YPsb((P)",");
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_164 = YPfab_met(FUNCODEREF(fun_164),T45,YPfalse,LITREF(lit_446),sloc(919),YPfalse);
  T44 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPfab_met(FUNCODEREF(fun_to_c_165),T44,LITREF(lit_350),LITREF(lit_445),sloc(913),YPfalse);
  T47 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T48 = fun_to_c_165;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YevalSg2cYto_c,T46);
  lit_449 = YPPsym((P)"funshell-to-c");
  lit_450 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_451 = YPsb((P)"FUNSHELL");
  T49 = YPfab_sig(YPPlist(5,VARREF(YevalSmoduleYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_166 = YPfab_met(FUNCODEREF(fun_funshell_to_c_166),T49,LITREF(lit_449),LITREF(lit_450),sloc(928),YPfalse);
  T51 = VARREF_OR(YevalSg2cYfunshell_to_c,YPfalse);
  T52 = fun_funshell_to_c_166;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSg2cYfunshell_to_c,T50);
  lit_452 = YPPsym((P)"funinit-to-c");
  lit_453 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_454 = YPPlist(1,YPPsym((P)"x"));
  lit_455 = YPsb((P)"FUNINIT");
  lit_456 = YPsb((P)", ");
  T54 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_167 = YPfab_met(FUNCODEREF(fun_167),T54,YPfalse,LITREF(lit_454),sloc(944),YPfalse);
  T53 = YPfab_sig(YPPlist(5,VARREF(YevalSmoduleYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_168 = YPfab_met(FUNCODEREF(fun_funinit_to_c_168),T53,LITREF(lit_452),LITREF(lit_453),sloc(941),YPfalse);
  T56 = VARREF_OR(YevalSg2cYfuninit_to_c,YPfalse);
  T57 = fun_funinit_to_c_168;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSg2cYfuninit_to_c,T55);
  lit_457 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_458 = YPsb((P)"%macro");
  T58 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPfab_met(FUNCODEREF(fun_to_c_169),T58,LITREF(lit_350),LITREF(lit_457),sloc(953),YPfalse);
  T60 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T61 = fun_to_c_169;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSg2cYto_c,T59);
  lit_459 = YPPsym((P)"out-list-builder");
  lit_460 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"out"),YPPsym((P)"elts"));
  lit_461 = YPsb((P)"nil");
  lit_462 = YPsb((P)"%%list");
  T62 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_170 = YPfab_met(FUNCODEREF(fun_out_list_builder_170),T62,LITREF(lit_459),LITREF(lit_460),sloc(962),YPfalse);
  T64 = VARREF_OR(YevalSg2cYout_list_builder,YPfalse);
  T65 = fun_out_list_builder_170;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSg2cYout_list_builder,T63);
  lit_463 = YPPsym((P)"gen-fab-list");
  lit_464 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"refs"));
  lit_465 = YPPlist(1,YPPsym((P)"x"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPfab_met(FUNCODEREF(fun_171),T67,YPfalse,LITREF(lit_465),sloc(975),YPfalse);
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_172 = YPfab_met(FUNCODEREF(fun_gen_fab_list_172),T66,LITREF(lit_463),LITREF(lit_464),sloc(974),YPfalse);
  T69 = VARREF_OR(YevalSg2cYgen_fab_list,YPfalse);
  T70 = fun_gen_fab_list_172;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSg2cYgen_fab_list,T68);
  lit_466 = YPPsym((P)"generate-function-specs");
  lit_467 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"sig"));
  T71 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_173 = YPfab_met(FUNCODEREF(fun_generate_function_specs_173),T71,LITREF(lit_466),LITREF(lit_467),sloc(977),YPfalse);
  T73 = VARREF_OR(YevalSg2cYgenerate_function_specs,YPfalse);
  T74 = fun_generate_function_specs_173;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSg2cYgenerate_function_specs,T72);
  lit_468 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_469 = YPPlist(1,YPPsym((P)"x"));
  lit_470 = YPsb((P)"%fab-sig");
  lit_471 = YPsb((P)"nil");
  T76 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_174 = YPfab_met(FUNCODEREF(fun_174),T76,YPfalse,LITREF(lit_469),sloc(981),YPfalse);
  T75 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_175 = YPfab_met(FUNCODEREF(fun_to_c_175),T75,LITREF(lit_350),LITREF(lit_468),sloc(980),YPfalse);
  T78 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T79 = fun_to_c_175;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSg2cYto_c,T77);
  lit_472 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_473 = YPsb((P)"%fab-gen");
  lit_474 = YPsb((P)"%false");
  T80 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_176 = YPfab_met(FUNCODEREF(fun_to_c_176),T80,LITREF(lit_350),LITREF(lit_472),sloc(992),YPfalse);
  T82 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T83 = fun_to_c_176;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSg2cYto_c,T81);
  lit_475 = YPPsym((P)"generate-function-forwards");
  lit_476 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_477 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  T84 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_177 = YPfab_met(FUNCODEREF(fun_generate_function_forwards_177),T84,LITREF(lit_475),LITREF(lit_476),sloc(1005),YPfalse);
  T86 = VARREF_OR(YevalSg2cYgenerate_function_forwards,YPfalse);
  T87 = fun_generate_function_forwards_177;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSg2cYgenerate_function_forwards,T85);
  lit_478 = YPPsym((P)"generate-function-forward");
  lit_479 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_480 = YPsb((P)"static");
  lit_481 = YPsb((P)"extern");
  lit_482 = YPsb((P)" P ");
  lit_483 = YPsb((P)" (");
  lit_484 = YPPlist(1,YPPsym((P)"x"));
  lit_485 = YPPlist(1,YPPsym((P)"x"));
  lit_486 = YPsb((P)"P");
  lit_487 = YPsb((P)");\n");
  T90 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_178 = YPfab_met(FUNCODEREF(fun_178),T90,YPfalse,LITREF(lit_484),sloc(1014),YPfalse);
  T89 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_179 = YPfab_met(FUNCODEREF(fun_179),T89,YPfalse,LITREF(lit_485),sloc(1014),YPfalse);
  T88 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_180 = YPfab_met(FUNCODEREF(fun_generate_function_forward_180),T88,LITREF(lit_478),LITREF(lit_479),sloc(1010),YPfalse);
  T92 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T93 = fun_generate_function_forward_180;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSg2cYgenerate_function_forward,T91);
  lit_488 = YPPsym((P)"generate-function-binding");
  lit_489 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_490 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_491 = YPsb((P)"fun_");
  lit_492 = YPsb((P)"fun_");
  lit_493 = YPsb((P)"_");
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_181 = YPfab_met(FUNCODEREF(fun_generate_function_binding_181),T94,LITREF(lit_488),LITREF(lit_489),sloc(1018),YPfalse);
  T96 = VARREF_OR(YevalSg2cYgenerate_function_binding,YPfalse);
  T97 = fun_generate_function_binding_181;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSg2cYgenerate_function_binding,T95);
  lit_494 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_495 = YPsb((P)"FUNFOR(");
  lit_496 = YPsb((P)"LOCFOR(");
  lit_497 = YPsb((P)");\n");
  T98 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_182 = YPfab_met(FUNCODEREF(fun_generate_function_forward_182),T98,LITREF(lit_478),LITREF(lit_494),sloc(1031),YPfalse);
  T100 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T101 = fun_generate_function_forward_182;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSg2cYgenerate_function_forward,T99);
  lit_498 = YPPsym((P)"generate-function-bodies");
  lit_499 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_500 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_501 = YPPlist(1,YPPsym((P)"def"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_183 = YPfab_met(FUNCODEREF(fun_183),T103,YPfalse,LITREF(lit_501),sloc(1039),YPfalse);
  T102 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_184 = YPfab_met(FUNCODEREF(fun_generate_function_bodies_184),T102,LITREF(lit_498),LITREF(lit_499),sloc(1037),YPfalse);
  T105 = VARREF_OR(YevalSg2cYgenerate_function_bodies,YPfalse);
  T106 = fun_generate_function_bodies_184;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSg2cYgenerate_function_bodies,T104);
  lit_502 = YPPsym((P)"generate-functions");
  lit_503 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_504 = YPPlist(1,YPPsym((P)"def"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPfab_met(FUNCODEREF(fun_185),T108,YPfalse,LITREF(lit_504),sloc(1044),YPfalse);
  T107 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_186 = YPfab_met(FUNCODEREF(fun_generate_functions_186),T107,LITREF(lit_502),LITREF(lit_503),sloc(1043),YPfalse);
  T110 = VARREF_OR(YevalSg2cYgenerate_functions,YPfalse);
  T111 = fun_generate_functions_186;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YevalSg2cYgenerate_functions,T109);
  lit_505 = YPPsym((P)"generate-closure-structure");
  lit_506 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_507 = YPsb((P)" = ");
  lit_508 = YPsb((P)"%fab-met-inlineable");
  lit_509 = YPsb((P)"%fab-met");
  lit_510 = YPsb((P)"sloc(");
  lit_511 = YPsb((P)")");
  lit_512 = YPsb((P)"%false");
  T112 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_187 = YPfab_met(FUNCODEREF(fun_generate_closure_structure_187),T112,LITREF(lit_505),LITREF(lit_506),sloc(1049),YPfalse);
  T114 = VARREF_OR(YevalSg2cYgenerate_closure_structure,YPfalse);
  T115 = fun_generate_closure_structure_187;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalSg2cYgenerate_closure_structure,T113);
  lit_513 = YPPsym((P)"generate-function-body-reference");
  lit_514 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_515 = YPsb((P)"FUNCODEREF(");
  lit_516 = YPsb((P)")");
  T116 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_188 = YPfab_met(FUNCODEREF(fun_generate_function_body_reference_188),T116,LITREF(lit_513),LITREF(lit_514),sloc(1067),YPfalse);
  T118 = VARREF_OR(YevalSg2cYgenerate_function_body_reference,YPfalse);
  T119 = fun_generate_function_body_reference_188;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalSg2cYgenerate_function_body_reference,T117);
  lit_517 = YPPsym((P)"generate-return");
  lit_518 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_519 = YPsb((P)"return ");
  T120 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_189 = YPfab_met(FUNCODEREF(fun_generate_return_189),T120,LITREF(lit_517),LITREF(lit_518),sloc(1076),YPfalse);
  T122 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T123 = fun_generate_return_189;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YevalSg2cYgenerate_return,T121);
  lit_520 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_521 = YPsb((P)"RET");
  T124 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_190 = YPfab_met(FUNCODEREF(fun_generate_return_190),T124,LITREF(lit_517),LITREF(lit_520),sloc(1080),YPfalse);
  T126 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T127 = fun_generate_return_190;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YevalSg2cYgenerate_return,T125);
  lit_522 = YPPsym((P)"generate-function-code");
  lit_523 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"e"));
  lit_524 = YPsb((P)"\n");
  lit_525 = YPsb((P)"static ");
  lit_526 = YPsb((P)"INLINE ");
  lit_527 = YPsb((P)"P ");
  lit_528 = YPPlist(1,YPPsym((P)"x"));
  lit_529 = YPPlist(1,YPPsym((P)"x"));
  lit_530 = YPsb((P)"P ");
  lit_531 = YPsb((P)" {\n");
  lit_532 = YPsb((P)"DEFCREGS();\n");
  lit_533 = YPsb((P)"}\n");
  T130 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_191 = YPfab_met(FUNCODEREF(fun_191),T130,YPfalse,LITREF(lit_528),sloc(1093),YPfalse);
  T129 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_192 = YPfab_met(FUNCODEREF(fun_192),T129,YPfalse,LITREF(lit_529),sloc(1093),YPfalse);
  T128 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_193 = YPfab_met(FUNCODEREF(fun_generate_function_code_193),T128,LITREF(lit_522),LITREF(lit_523),sloc(1087),YPfalse);
  T132 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T133 = fun_generate_function_code_193;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYgenerate_function_code,T131);
  lit_534 = YPPsym((P)"dispatcher?");
  lit_535 = YPPlist(1,YPPsym((P)"definition"));
  lit_536 = YPsb((P)"%dispatch");
  lit_537 = YPsb((P)"-dispatch");
  lit_538 = YPsb((P)"-dispatch");
  T134 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_194 = YPfab_met(FUNCODEREF(fun_dispatcherQ_194),T134,LITREF(lit_534),LITREF(lit_535),sloc(1103),YPfalse);
  T136 = VARREF_OR(YevalSg2cYdispatcherQ,YPfalse);
  T137 = fun_dispatcherQ_194;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSg2cYdispatcherQ,T135);
  lit_539 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_540 = YPsb((P)"\nFUNCODEDEF(");
  lit_541 = YPsb((P)"\nLOCCODEDEF(");
  lit_542 = YPsb((P)") {\n");
  lit_543 = YPsb((P)"P ");
  lit_544 = YPPlist(1,YPPsym((P)"x"));
  lit_545 = YPPlist(1,YPPsym((P)"x"));
  lit_546 = YPsb((P)"LINK_STACK();\n");
  lit_547 = YPPlist(1,YPPsym((P)"b"));
  lit_548 = YPsb((P)"NARGS(");
  lit_549 = YPsb((P)"ARG(");
  lit_550 = YPsb((P)", ");
  lit_551 = YPsb((P)")");
  lit_552 = YPsb((P)"UNLINK_STACK();\n");
  lit_553 = YPsb((P)"}\n");
  T141 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_195 = YPfab_met(FUNCODEREF(fun_195),T141,YPfalse,LITREF(lit_544),sloc(1121),YPfalse);
  T140 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_196 = YPfab_met(FUNCODEREF(fun_196),T140,YPfalse,LITREF(lit_545),sloc(1121),YPfalse);
  T139 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPfab_met(FUNCODEREF(fun_197),T139,YPfalse,LITREF(lit_547),sloc(1127),YPfalse);
  T138 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_198 = YPfab_met(FUNCODEREF(fun_generate_function_code_198),T138,LITREF(lit_522),LITREF(lit_539),sloc(1111),YPfalse);
  T143 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T144 = fun_generate_function_code_198;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSg2cYgenerate_function_code,T142);
  lit_554 = YPPsym((P)"generate-local-temporaries");
  lit_555 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"out"));
  lit_556 = YPsb((P)"P ");
  T145 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_199 = YPfab_met(FUNCODEREF(fun_generate_local_temporaries_199),T145,LITREF(lit_554),LITREF(lit_555),sloc(1147),YPfalse);
  T147 = VARREF_OR(YevalSg2cYgenerate_local_temporaries,YPfalse);
  T148 = fun_generate_local_temporaries_199;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSg2cYgenerate_local_temporaries,T146);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_557 = YPPsym((P)"generate-registers");
  lit_558 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"out"));
  lit_559 = YPsb((P)"P ");
  lit_560 = YPsb((P)";\n");
  T149 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_200 = YPfab_met(FUNCODEREF(fun_generate_registers_200),T149,LITREF(lit_557),LITREF(lit_558),sloc(1156),YPfalse);
  T151 = VARREF_OR(YevalSg2cYgenerate_registers,YPfalse);
  T152 = fun_generate_registers_200;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSg2cYgenerate_registers,T150);
  lit_561 = YPPsym((P)"module-info-name");
  lit_562 = YPPlist(1,YPPsym((P)"name"));
  lit_563 = YPsb((P)"module_info_");
  T153 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_201 = YPfab_met(FUNCODEREF(fun_module_info_name_201),T153,LITREF(lit_561),LITREF(lit_562),sloc(1168),YPfalse);
  T155 = VARREF_OR(YevalSg2cYmodule_info_name,YPfalse);
  T156 = fun_module_info_name_201;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YevalSg2cYmodule_info_name,T154);
  lit_564 = YPPsym((P)"declare-imported-module-infos");
  lit_565 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_566 = YPPsym((P)"maybe-declare");
  lit_567 = YPPlist(1,YPPsym((P)"modname"));
  lit_568 = YPsb((P)"extern MODULE_INFO ");
  lit_569 = YPsb((P)";\n");
  lit_570 = YPPlist(1,YPPsym((P)"binding"));
  T159 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_202 = YPfab_met(FUNCODEREF(fun_maybe_declare_202),T159,LITREF(lit_566),LITREF(lit_567),sloc(1177),YPfalse);
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_203 = YPfab_met(FUNCODEREF(fun_203),T158,YPfalse,LITREF(lit_570),sloc(1184),YPfalse);
  T157 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPfab_met(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),T157,LITREF(lit_564),LITREF(lit_565),sloc(1174),YPfalse);
  T160 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T160);
  lit_571 = YPPsym((P)"generate-module-info");
  lit_572 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_573 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_574 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_575 = YPsb((P)"  {&");
  lit_576 = YPsb((P)"},\n");
  lit_577 = YPsb((P)"  {NULL}\n};\n");
  lit_578 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_579 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_580 = YPsb((P)"  {");
  lit_581 = YPsb((P)", &");
  lit_582 = YPsb((P)", ");
  lit_583 = YPsb((P)"NULL");
  lit_584 = YPsb((P)"},\n");
  lit_585 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_586 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_587 = YPPlist(1,YPPsym((P)"binding"));
  lit_588 = YPsb((P)"  {");
  lit_589 = YPsb((P)", ");
  lit_590 = YPsb((P)"CVAR, &");
  lit_591 = YPsb((P)"},\n");
  lit_592 = YPsb((P)"DVAR, &");
  lit_593 = YPsb((P)"},\n");
  lit_594 = YPsb((P)"PVAR, NULL},\n");
  lit_595 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_596 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_597 = YPsb((P)"  {");
  lit_598 = YPsb((P)", ");
  lit_599 = YPsb((P)"NULL");
  lit_600 = YPsb((P)"},\n");
  lit_601 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_602 = YPsb((P)"\nextern MODULE_INFO ");
  lit_603 = YPsb((P)";\n");
  lit_604 = YPsb((P)"MODULE_INFO ");
  lit_605 = YPsb((P)" = {\n");
  lit_606 = YPsb((P)"  ");
  lit_607 = YPsb((P)",\n");
  lit_608 = YPsb((P)"  NULL,\n");
  lit_609 = YPsb((P)"  use_infos,\n");
  lit_610 = YPsb((P)"  import_infos,\n");
  lit_611 = YPsb((P)"  binding_infos,\n");
  lit_612 = YPsb((P)"  export_infos,\n");
  lit_613 = YPsb((P)"};\n");
  T163 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_205 = YPfab_met(FUNCODEREF(fun_205),T163,YPfalse,LITREF(lit_579),sloc(1211),YPfalse);
  T162 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPfab_met(FUNCODEREF(fun_206),T162,YPfalse,LITREF(lit_587),sloc(1225),YPfalse);
  T161 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPfab_met(FUNCODEREF(YevalSg2cYgenerate_module_info),T161,LITREF(lit_571),LITREF(lit_572),sloc(1193),YPfalse);
  T164 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T164);
  lit_614 = YPPsym((P)"module-init-name");
  lit_615 = YPPlist(1,YPPsym((P)"name"));
  lit_616 = YPsb((P)"load_module_");
  T165 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_208 = YPfab_met(FUNCODEREF(fun_module_init_name_208),T165,LITREF(lit_614),LITREF(lit_615),sloc(1256),YPfalse);
  T167 = VARREF_OR(YevalSg2cYmodule_init_name,YPfalse);
  T168 = fun_module_init_name_208;
  T166 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T167,T168);
  VARSET(YevalSg2cYmodule_init_name,T166);
  lit_617 = YPPsym((P)"module-init-decl");
  lit_618 = YPPlist(1,YPPsym((P)"name"));
  lit_619 = YPsb((P)"void ");
  lit_620 = YPsb((P)" (void)");
  T169 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_209 = YPfab_met(FUNCODEREF(fun_module_init_decl_209),T169,LITREF(lit_617),LITREF(lit_618),sloc(1259),YPfalse);
  T171 = VARREF_OR(YevalSg2cYmodule_init_decl,YPfalse);
  T172 = fun_module_init_decl_209;
  T170 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T171,T172);
  VARSET(YevalSg2cYmodule_init_decl,T170);
  lit_621 = YPPsym((P)"generate-module-init");
  lit_622 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_623 = YPsb((P)"dl");
  lit_624 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_625 = YPsb((P)"extern ");
  lit_626 = YPsb((P)";\n");
  lit_627 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_628 = YPsb((P)"extern ");
  lit_629 = YPsb((P)";\n\n");
  lit_630 = YPsb((P)" {\n");
  lit_631 = YPsb((P)"  static int need_init = 1;\n");
  lit_632 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_633 = YPsb((P)"  need_init = 0;\n");
  lit_634 = YPsb((P)"  ");
  lit_635 = YPsb((P)"();\n");
  lit_636 = YPsb((P)"\n");
  lit_637 = YPsb((P)"\n");
  lit_638 = YPsb((P)"}\n");
  T173 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_210 = YPfab_met(FUNCODEREF(fun_generate_module_init_210),T173,LITREF(lit_621),LITREF(lit_622),sloc(1262),YPfalse);
  T175 = VARREF_OR(YevalSg2cYgenerate_module_init,YPfalse);
  T176 = fun_generate_module_init_210;
  T174 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T175,T176);
  VARSET(YevalSg2cYgenerate_module_init,T174);
  lit_639 = YPPsym((P)"generate-main");
  lit_640 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_641 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_642 = YPsb((P)"extern MODULE_INFO ");
  lit_643 = YPsb((P)";\n");
  lit_644 = YPsb((P)"extern ");
  lit_645 = YPsb((P)";\n\n");
  lit_646 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_647 = YPsb((P)";\n\n");
  lit_648 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_649 = YPsb((P)"  ");
  lit_650 = YPsb((P)"%init-world");
  lit_651 = YPsb((P)"(argc, argv);\n");
  lit_652 = YPsb((P)"  ");
  lit_653 = YPsb((P)"();\n");
  lit_654 = YPsb((P)"  return 0;\n");
  lit_655 = YPsb((P)"}\n");
  T177 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_211 = YPfab_met(FUNCODEREF(fun_generate_main_211),T177,LITREF(lit_639),LITREF(lit_640),sloc(1288),YPfalse);
  T179 = VARREF_OR(YevalSg2cYgenerate_main,YPfalse);
  T180 = fun_generate_main_211;
  T178 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T179,T180);
  VARSET(YevalSg2cYgenerate_main,T178);
  T181 = YPfalse;
  return T181;
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
extern MODULE_INFO module_info_evalSoptimize;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_evalSdependency;

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
  {&module_info_evalSoptimize},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-children", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"sorted-applicable-methods-using-types", &module_info_evalSoptimize, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"type-equiv?", &module_info_evalSoptimize, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"analyze-calls", &module_info_evalSoptimize, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"$", &module_info_evalStop, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"unconstrained-type?", &module_info_evalSoptimize, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"potentially-joint?", &module_info_evalSoptimize, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"top", &module_info_evalStop, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"load", &module_info_evalStop, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"with-used-expression", PVAR, NULL},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"between-parentheses", PVAR, NULL},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"for-mods", PVAR, NULL},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"pp", CVAR, &YevalSg2cYpp},
  {"bb?", CVAR, &YevalSg2cYbbQ},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"---main-3---", PVAR, NULL},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"---main-1---", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"*lits*", CVAR, &YevalSg2cYTlitsT},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"ref-lit", CVAR, &YevalSg2cYref_lit},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"*loop-arg-counter*", DVAR, &YevalSg2cYTloop_arg_counterT},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"---main-2---", PVAR, NULL},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"*lits-at*", CVAR, &YevalSg2cYTlits_atT},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"%print-cpu-usage", PVAR, NULL},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"with-statement", PVAR, NULL},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"with-expression", PVAR, NULL},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"for-commas", PVAR, NULL},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-eval", NULL},
  {"g2c-test", NULL},
  {"g2c-build-app", NULL},
  {"g2c-goo", NULL},
  {"g2c-exp", NULL},
  {"g2c-def-app", NULL},
  {"g2c-clean", NULL},
  {"g2c-top", NULL},
  {"g2c-ast", NULL},
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
extern void load_module_evalSoptimize (void);

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
  load_module_evalSoptimize();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();
  (P)YevalSg2cY___main_3___();

}

/* END OF GENERATED CODE. */
