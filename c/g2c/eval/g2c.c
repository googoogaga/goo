/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSast_linearizeYanalyze_dynamic_extent,"eval/ast-linearize","analyze-dynamic-extent");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YevalSastYload_in,"eval/ast","load-in");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ylst,"goo/boot","lst");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
DEF(YevalSg2cYmangle_module_binding,"eval/g2c","mangle-module-binding");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSg2cYso_load,"eval/g2c","so-load");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalStopYbt,"eval/top","bt");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalStopYframe_var,"eval/top","frame-var");
DEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSg2cYgenerate_self_recursive_call,"eval/g2c","generate-self-recursive-call");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(Yerror,"goo/boot","error");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YPisa,"goo/boot","%isa");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ynul,"goo/boot","nul");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooStypesYtT,"goo/types","t*");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalStopYframe,"eval/top","frame");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(YevalSast_linearizeYanalyze_calls,"eval/ast-linearize","analyze-calls");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
DEF(YevalSg2cYgenerate_shadow_args,"eval/g2c","generate-shadow-args");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YLmetG,"goo/boot","<met>");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalStopYtop,"eval/top","top");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_242);
DEFLIT(lit_124);
DEFLIT(lit_103);
DEFLIT(lit_440);
DEFLIT(lit_407);
DEFLIT(lit_465);
DEFLIT(lit_399);
DEFLIT(lit_359);
DEFLIT(lit_205);
DEFLIT(lit_201);
DEFLIT(lit_30);
DEFLIT(lit_376);
DEFLIT(lit_189);
DEFLIT(lit_99);
DEFLIT(lit_304);
DEFLIT(lit_329);
DEFLIT(lit_160);
DEFLIT(lit_429);
DEFLIT(lit_70);
DEFLIT(lit_60);
DEFLIT(lit_218);
DEFLIT(lit_348);
DEFLIT(lit_215);
DEFLIT(lit_224);
DEFLIT(lit_11);
DEFLIT(lit_243);
DEFLIT(lit_383);
DEFLIT(lit_259);
DEFLIT(lit_168);
DEFLIT(lit_152);
DEFLIT(lit_424);
DEFLIT(lit_315);
DEFLIT(lit_382);
DEFLIT(lit_507);
DEFLIT(lit_102);
DEFLIT(lit_121);
DEFLIT(lit_46);
DEFLIT(lit_409);
DEFLIT(lit_309);
DEFLIT(lit_212);
DEFLIT(lit_398);
DEFLIT(lit_185);
DEFLIT(lit_522);
DEFLIT(lit_316);
DEFLIT(lit_98);
DEFLIT(lit_392);
DEFLIT(lit_481);
DEFLIT(lit_143);
DEFLIT(lit_198);
DEFLIT(lit_24);
DEFLIT(lit_337);
DEFLIT(lit_365);
DEFLIT(lit_487);
DEFLIT(lit_5);
DEFLIT(lit_181);
DEFLIT(lit_502);
DEFLIT(lit_497);
DEFLIT(lit_354);
DEFLIT(lit_56);
DEFLIT(lit_106);
DEFLIT(lit_208);
DEFLIT(lit_368);
DEFLIT(lit_260);
DEFLIT(lit_51);
DEFLIT(lit_410);
DEFLIT(lit_297);
DEFLIT(lit_223);
DEFLIT(lit_21);
DEFLIT(lit_40);
DEFLIT(lit_233);
DEFLIT(lit_277);
DEFLIT(lit_319);
DEFLIT(lit_299);
DEFLIT(lit_170);
DEFLIT(lit_496);
DEFLIT(lit_286);
DEFLIT(lit_438);
DEFLIT(lit_90);
DEFLIT(lit_188);
DEFLIT(lit_6);
DEFLIT(lit_151);
DEFLIT(lit_519);
DEFLIT(lit_361);
DEFLIT(lit_317);
DEFLIT(lit_68);
DEFLIT(lit_386);
DEFLIT(lit_59);
DEFLIT(lit_480);
DEFLIT(lit_100);
DEFLIT(lit_144);
DEFLIT(lit_167);
DEFLIT(lit_364);
DEFLIT(lit_530);
DEFLIT(lit_372);
DEFLIT(lit_228);
DEFLIT(lit_308);
DEFLIT(lit_67);
DEFLIT(lit_428);
DEFLIT(lit_295);
DEFLIT(lit_303);
DEFLIT(lit_290);
DEFLIT(lit_444);
DEFLIT(lit_251);
DEFLIT(lit_54);
DEFLIT(lit_157);
DEFLIT(lit_469);
DEFLIT(lit_491);
DEFLIT(lit_402);
DEFLIT(lit_162);
DEFLIT(lit_226);
DEFLIT(lit_193);
DEFLIT(lit_12);
DEFLIT(lit_301);
DEFLIT(lit_197);
DEFLIT(lit_474);
DEFLIT(lit_426);
DEFLIT(lit_225);
DEFLIT(lit_256);
DEFLIT(lit_461);
DEFLIT(lit_446);
DEFLIT(lit_307);
DEFLIT(lit_8);
DEFLIT(lit_142);
DEFLIT(lit_524);
DEFLIT(lit_20);
DEFLIT(lit_517);
DEFLIT(lit_65);
DEFLIT(lit_305);
DEFLIT(lit_180);
DEFLIT(lit_169);
DEFLIT(lit_94);
DEFLIT(lit_437);
DEFLIT(lit_282);
DEFLIT(lit_107);
DEFLIT(lit_425);
DEFLIT(lit_287);
DEFLIT(lit_105);
DEFLIT(lit_451);
DEFLIT(lit_327);
DEFLIT(lit_177);
DEFLIT(lit_114);
DEFLIT(lit_273);
DEFLIT(lit_125);
DEFLIT(lit_493);
DEFLIT(lit_406);
DEFLIT(lit_432);
DEFLIT(lit_9);
DEFLIT(lit_139);
DEFLIT(lit_213);
DEFLIT(lit_136);
DEFLIT(lit_325);
DEFLIT(lit_516);
DEFLIT(lit_234);
DEFLIT(lit_82);
DEFLIT(lit_292);
DEFLIT(lit_89);
DEFLIT(lit_350);
DEFLIT(lit_120);
DEFLIT(lit_232);
DEFLIT(lit_72);
DEFLIT(lit_122);
DEFLIT(lit_221);
DEFLIT(lit_246);
DEFLIT(lit_521);
DEFLIT(lit_154);
DEFLIT(lit_381);
DEFLIT(lit_178);
DEFLIT(lit_230);
DEFLIT(lit_66);
DEFLIT(lit_110);
DEFLIT(lit_450);
DEFLIT(lit_311);
DEFLIT(lit_460);
DEFLIT(lit_515);
DEFLIT(lit_489);
DEFLIT(lit_389);
DEFLIT(lit_153);
DEFLIT(lit_526);
DEFLIT(lit_468);
DEFLIT(lit_135);
DEFLIT(lit_101);
DEFLIT(lit_229);
DEFLIT(lit_270);
DEFLIT(lit_331);
DEFLIT(lit_195);
DEFLIT(lit_323);
DEFLIT(lit_190);
DEFLIT(lit_76);
DEFLIT(lit_222);
DEFLIT(lit_417);
DEFLIT(lit_422);
DEFLIT(lit_334);
DEFLIT(lit_19);
DEFLIT(lit_92);
DEFLIT(lit_179);
DEFLIT(lit_463);
DEFLIT(lit_14);
DEFLIT(lit_379);
DEFLIT(lit_237);
DEFLIT(lit_210);
DEFLIT(lit_475);
DEFLIT(lit_479);
DEFLIT(lit_477);
DEFLIT(lit_149);
DEFLIT(lit_127);
DEFLIT(lit_525);
DEFLIT(lit_349);
DEFLIT(lit_271);
DEFLIT(lit_371);
DEFLIT(lit_452);
DEFLIT(lit_511);
DEFLIT(lit_80);
DEFLIT(lit_216);
DEFLIT(lit_174);
DEFLIT(lit_52);
DEFLIT(lit_276);
DEFLIT(lit_249);
DEFLIT(lit_443);
DEFLIT(lit_7);
DEFLIT(lit_78);
DEFLIT(lit_55);
DEFLIT(lit_328);
DEFLIT(lit_13);
DEFLIT(lit_141);
DEFLIT(lit_163);
DEFLIT(lit_133);
DEFLIT(lit_231);
DEFLIT(lit_36);
DEFLIT(lit_314);
DEFLIT(lit_442);
DEFLIT(lit_347);
DEFLIT(lit_252);
DEFLIT(lit_506);
DEFLIT(lit_261);
DEFLIT(lit_4);
DEFLIT(lit_427);
DEFLIT(lit_158);
DEFLIT(lit_263);
DEFLIT(lit_394);
DEFLIT(lit_391);
DEFLIT(lit_298);
DEFLIT(lit_366);
DEFLIT(lit_194);
DEFLIT(lit_531);
DEFLIT(lit_25);
DEFLIT(lit_85);
DEFLIT(lit_87);
DEFLIT(lit_247);
DEFLIT(lit_86);
DEFLIT(lit_505);
DEFLIT(lit_104);
DEFLIT(lit_93);
DEFLIT(lit_1);
DEFLIT(lit_330);
DEFLIT(lit_268);
DEFLIT(lit_81);
DEFLIT(lit_172);
DEFLIT(lit_75);
DEFLIT(lit_412);
DEFLIT(lit_117);
DEFLIT(lit_18);
DEFLIT(lit_138);
DEFLIT(lit_344);
DEFLIT(lit_192);
DEFLIT(lit_132);
DEFLIT(lit_134);
DEFLIT(lit_166);
DEFLIT(lit_499);
DEFLIT(lit_310);
DEFLIT(lit_284);
DEFLIT(lit_266);
DEFLIT(lit_64);
DEFLIT(lit_272);
DEFLIT(lit_421);
DEFLIT(lit_74);
DEFLIT(lit_53);
DEFLIT(lit_369);
DEFLIT(lit_182);
DEFLIT(lit_29);
DEFLIT(lit_42);
DEFLIT(lit_358);
DEFLIT(lit_238);
DEFLIT(lit_274);
DEFLIT(lit_57);
DEFLIT(lit_209);
DEFLIT(lit_73);
DEFLIT(lit_378);
DEFLIT(lit_255);
DEFLIT(lit_504);
DEFLIT(lit_457);
DEFLIT(lit_111);
DEFLIT(lit_404);
DEFLIT(lit_227);
DEFLIT(lit_285);
DEFLIT(lit_191);
DEFLIT(lit_436);
DEFLIT(lit_203);
DEFLIT(lit_278);
DEFLIT(lit_50);
DEFLIT(lit_520);
DEFLIT(lit_61);
DEFLIT(lit_455);
DEFLIT(lit_418);
DEFLIT(lit_291);
DEFLIT(lit_196);
DEFLIT(lit_176);
DEFLIT(lit_32);
DEFLIT(lit_370);
DEFLIT(lit_302);
DEFLIT(lit_214);
DEFLIT(lit_184);
DEFLIT(lit_355);
DEFLIT(lit_353);
DEFLIT(lit_171);
DEFLIT(lit_16);
DEFLIT(lit_3);
DEFLIT(lit_165);
DEFLIT(lit_367);
DEFLIT(lit_130);
DEFLIT(lit_288);
DEFLIT(lit_22);
DEFLIT(lit_408);
DEFLIT(lit_341);
DEFLIT(lit_510);
DEFLIT(lit_155);
DEFLIT(lit_41);
DEFLIT(lit_306);
DEFLIT(lit_128);
DEFLIT(lit_156);
DEFLIT(lit_220);
DEFLIT(lit_513);
DEFLIT(lit_148);
DEFLIT(lit_281);
DEFLIT(lit_318);
DEFLIT(lit_514);
DEFLIT(lit_472);
DEFLIT(lit_356);
DEFLIT(lit_416);
DEFLIT(lit_257);
DEFLIT(lit_430);
DEFLIT(lit_313);
DEFLIT(lit_49);
DEFLIT(lit_112);
DEFLIT(lit_322);
DEFLIT(lit_339);
DEFLIT(lit_137);
DEFLIT(lit_17);
DEFLIT(lit_253);
DEFLIT(lit_186);
DEFLIT(lit_96);
DEFLIT(lit_492);
DEFLIT(lit_390);
DEFLIT(lit_33);
DEFLIT(lit_123);
DEFLIT(lit_373);
DEFLIT(lit_28);
DEFLIT(lit_415);
DEFLIT(lit_464);
DEFLIT(lit_320);
DEFLIT(lit_495);
DEFLIT(lit_187);
DEFLIT(lit_488);
DEFLIT(lit_45);
DEFLIT(lit_211);
DEFLIT(lit_380);
DEFLIT(lit_518);
DEFLIT(lit_458);
DEFLIT(lit_527);
DEFLIT(lit_200);
DEFLIT(lit_108);
DEFLIT(lit_79);
DEFLIT(lit_346);
DEFLIT(lit_324);
DEFLIT(lit_239);
DEFLIT(lit_39);
DEFLIT(lit_456);
DEFLIT(lit_470);
DEFLIT(lit_62);
DEFLIT(lit_528);
DEFLIT(lit_95);
DEFLIT(lit_447);
DEFLIT(lit_250);
DEFLIT(lit_147);
DEFLIT(lit_109);
DEFLIT(lit_2);
DEFLIT(lit_423);
DEFLIT(lit_529);
DEFLIT(lit_219);
DEFLIT(lit_258);
DEFLIT(lit_501);
DEFLIT(lit_206);
DEFLIT(lit_512);
DEFLIT(lit_500);
DEFLIT(lit_363);
DEFLIT(lit_118);
DEFLIT(lit_508);
DEFLIT(lit_509);
DEFLIT(lit_44);
DEFLIT(lit_449);
DEFLIT(lit_435);
DEFLIT(lit_490);
DEFLIT(lit_523);
DEFLIT(lit_405);
DEFLIT(lit_244);
DEFLIT(lit_15);
DEFLIT(lit_159);
DEFLIT(lit_289);
DEFLIT(lit_48);
DEFLIT(lit_459);
DEFLIT(lit_312);
DEFLIT(lit_27);
DEFLIT(lit_466);
DEFLIT(lit_357);
DEFLIT(lit_396);
DEFLIT(lit_397);
DEFLIT(lit_485);
DEFLIT(lit_486);
DEFLIT(lit_150);
DEFLIT(lit_473);
DEFLIT(lit_448);
DEFLIT(lit_387);
DEFLIT(lit_471);
DEFLIT(lit_164);
DEFLIT(lit_91);
DEFLIT(lit_494);
DEFLIT(lit_254);
DEFLIT(lit_279);
DEFLIT(lit_401);
DEFLIT(lit_454);
DEFLIT(lit_321);
DEFLIT(lit_335);
DEFLIT(lit_248);
DEFLIT(lit_126);
DEFLIT(lit_264);
DEFLIT(lit_375);
DEFLIT(lit_35);
DEFLIT(lit_37);
DEFLIT(lit_420);
DEFLIT(lit_431);
DEFLIT(lit_265);
DEFLIT(lit_434);
DEFLIT(lit_34);
DEFLIT(lit_388);
DEFLIT(lit_453);
DEFLIT(lit_333);
DEFLIT(lit_145);
DEFLIT(lit_478);
DEFLIT(lit_97);
DEFLIT(lit_173);
DEFLIT(lit_419);
DEFLIT(lit_403);
DEFLIT(lit_119);
DEFLIT(lit_71);
DEFLIT(lit_84);
DEFLIT(lit_183);
DEFLIT(lit_467);
DEFLIT(lit_441);
DEFLIT(lit_267);
DEFLIT(lit_476);
DEFLIT(lit_175);
DEFLIT(lit_275);
DEFLIT(lit_338);
DEFLIT(lit_393);
DEFLIT(lit_395);
DEFLIT(lit_414);
DEFLIT(lit_384);
DEFLIT(lit_43);
DEFLIT(lit_146);
DEFLIT(lit_83);
DEFLIT(lit_245);
DEFLIT(lit_377);
DEFLIT(lit_129);
DEFLIT(lit_482);
DEFLIT(lit_47);
DEFLIT(lit_342);
DEFLIT(lit_88);
DEFLIT(lit_140);
DEFLIT(lit_400);
DEFLIT(lit_462);
DEFLIT(lit_280);
DEFLIT(lit_345);
DEFLIT(lit_217);
DEFLIT(lit_300);
DEFLIT(lit_269);
DEFLIT(lit_77);
DEFLIT(lit_116);
DEFLIT(lit_374);
DEFLIT(lit_240);
DEFLIT(lit_326);
DEFLIT(lit_294);
DEFLIT(lit_445);
DEFLIT(lit_484);
DEFLIT(lit_293);
DEFLIT(lit_483);
DEFLIT(lit_199);
DEFLIT(lit_115);
DEFLIT(lit_351);
DEFLIT(lit_26);
DEFLIT(lit_296);
DEFLIT(lit_235);
DEFLIT(lit_236);
DEFLIT(lit_340);
DEFLIT(lit_131);
DEFLIT(lit_113);
DEFLIT(lit_498);
DEFLIT(lit_385);
DEFLIT(lit_503);
DEFLIT(lit_204);
DEFLIT(lit_58);
DEFLIT(lit_283);
DEFLIT(lit_413);
DEFLIT(lit_207);
DEFLIT(lit_343);
DEFLIT(lit_63);
DEFLIT(lit_332);
DEFLIT(lit_161);
DEFLIT(lit_336);
DEFLIT(lit_31);
DEFLIT(lit_352);
DEFLIT(lit_262);
DEFLIT(lit_362);
DEFLIT(lit_411);
DEFLIT(lit_38);
DEFLIT(lit_69);
DEFLIT(lit_10);
DEFLIT(lit_0);
DEFLIT(lit_360);
DEFLIT(lit_202);
DEFLIT(lit_241);
DEFLIT(lit_433);
DEFLIT(lit_23);
DEFLIT(lit_439);

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
LOCFOR(fun_load_module_13);
FUNFOR(YevalSg2cYmodule_up_to_dateQ);
LOCFOR(fun_15);
LOCFOR(fun_16);
FUNFOR(YevalSg2cYpurge_outdated_modules);
FUNFOR(YevalSg2cYg2c_def_app);
FUNFOR(YevalSg2cYg2c_build_app);
FUNFOR(YevalSg2cYg2c_test);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_g2c_ast_27);
LOCFOR(fun_g2c_exp_28);
LOCFOR(fun_compile_load_29);
LOCFOR(fun_so_load_30);
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
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_generate_makefile_44);
LOCFOR(fun_pp_45);
LOCFOR(fun_generate_header_46);
LOCFOR(fun_generate_trailer_47);
LOCFOR(fun_48);
LOCFOR(fun_generate_global_environment_49);
LOCFOR(fun_generate_global_binding_50);
LOCFOR(fun_loop_51);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_53);
LOCFOR(fun_mangle_string_literal_54);
LOCFOR(fun_mangle_string_literal_55);
LOCFOR(fun_process_integer_56);
LOCFOR(fun_mangle_integer_57);
LOCFOR(fun_x_1535_58);
LOCFOR(fun_x_1537_59);
LOCFOR(fun_x_1539_60);
LOCFOR(fun_x_1541_61);
FUNFOR(YevalSg2cYmangler_reset);
LOCFOR(fun_x_1543_63);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_65);
LOCFOR(fun_mangle_raw_name_66);
LOCFOR(fun_mangle_local_name_67);
LOCFOR(fun_mangle_local_name_68);
LOCFOR(fun_mangle_global_name_69);
LOCFOR(fun_mangle_global_name_70);
LOCFOR(fun_mangle_boot_name_71);
LOCFOR(fun_mangle_module_binding_72);
LOCFOR(fun_mangle_local_marked_name_73);
LOCFOR(fun_mangle_local_marked_name_74);
LOCFOR(fun_x_1547_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1551_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_x_1555_81);
LOCFOR(fun_loop_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_gen_result_85);
LOCFOR(fun_x_1558_86);
LOCFOR(fun_gen_depth_87);
LOCFOR(fun_x_1562_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_x_1566_91);
LOCFOR(fun_92);
LOCFOR(fun_93);
LOCFOR(fun_x_1570_94);
LOCFOR(fun_95);
LOCFOR(fun_96);
LOCFOR(fun_x_1572_97);
LOCFOR(fun_generate_quotation_forwards_98);
LOCFOR(fun_x_1575_99);
LOCFOR(fun_generate_quotations_100);
LOCFOR(fun_false_name_101);
LOCFOR(fun_generate_quotation_102);
LOCFOR(fun_generate_quotation_103);
LOCFOR(fun_104);
LOCFOR(fun_generate_quotation_105);
LOCFOR(fun_generate_quotation_106);
LOCFOR(fun_generate_quotation_107);
LOCFOR(fun_loop_108);
LOCFOR(fun_109);
LOCFOR(fun_float_to_c_string_110);
LOCFOR(fun_generate_quotation_111);
LOCFOR(fun_generate_quotation_112);
LOCFOR(fun_x_1585_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_x_1588_115);
LOCFOR(fun_generate_quotation_116);
LOCFOR(fun_generate_quotation_117);
LOCFOR(fun_binding_Gc_118);
LOCFOR(fun_binding_Gc_119);
LOCFOR(fun_binding_Gc_120);
LOCFOR(fun_reference_Gc_121);
LOCFOR(fun_reference_Gc_122);
LOCFOR(fun_to_c_123);
LOCFOR(fun_to_c_124);
LOCFOR(fun_gen_ref_125);
LOCFOR(fun_gen_ref_126);
LOCFOR(fun_gen_ref_127);
LOCFOR(fun_gen_ref_128);
LOCFOR(fun_gen_ref_129);
LOCFOR(fun_gen_ref_130);
LOCFOR(fun_to_c_131);
LOCFOR(fun_to_c_132);
LOCFOR(fun_to_c_133);
LOCFOR(fun_to_c_134);
LOCFOR(fun_to_c_135);
LOCFOR(fun_to_c_136);
LOCFOR(fun_137);
LOCFOR(fun_to_c_138);
LOCFOR(fun_x_1602_139);
LOCFOR(fun_x_1605_140);
LOCFOR(fun_x_1609_141);
LOCFOR(fun_generate_self_recursive_call_142);
LOCFOR(fun_x_1612_143);
LOCFOR(fun_x_1617_144);
LOCFOR(fun_to_c_145);
LOCFOR(fun_x_1621_146);
LOCFOR(fun_147);
LOCFOR(fun_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_x_1625_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_x_1629_152);
LOCFOR(fun_to_c_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_to_c_155);
LOCFOR(fun_to_c_156);
LOCFOR(fun_x_1634_157);
LOCFOR(fun_x_1640_158);
LOCFOR(fun_159);
LOCFOR(fun_160);
LOCFOR(fun_to_c_161);
LOCFOR(fun_162);
LOCFOR(fun_x_1644_163);
LOCFOR(fun_to_c_164);
LOCFOR(fun_funshell_to_c_165);
LOCFOR(fun_166);
LOCFOR(fun_x_1651_167);
LOCFOR(fun_funinit_to_c_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_x_1656_170);
LOCFOR(fun_out_list_builder_171);
LOCFOR(fun_172);
LOCFOR(fun_gen_fab_list_173);
LOCFOR(fun_generate_function_specs_174);
LOCFOR(fun_175);
LOCFOR(fun_to_c_176);
LOCFOR(fun_to_c_177);
LOCFOR(fun_x_1660_178);
LOCFOR(fun_generate_function_forwards_179);
LOCFOR(fun_x_1665_180);
LOCFOR(fun_181);
LOCFOR(fun_182);
LOCFOR(fun_generate_function_forward_183);
LOCFOR(fun_generate_function_binding_184);
LOCFOR(fun_generate_function_forward_185);
LOCFOR(fun_186);
LOCFOR(fun_generate_function_bodies_187);
LOCFOR(fun_188);
LOCFOR(fun_generate_functions_189);
LOCFOR(fun_generate_closure_structure_190);
LOCFOR(fun_generate_function_body_reference_191);
LOCFOR(fun_x_1674_192);
LOCFOR(fun_193);
LOCFOR(fun_194);
LOCFOR(fun_generate_shadow_args_195);
LOCFOR(fun_generate_return_196);
LOCFOR(fun_generate_return_197);
LOCFOR(fun_primitive_inlinableQ_198);
LOCFOR(fun_x_1682_199);
LOCFOR(fun_200);
LOCFOR(fun_201);
LOCFOR(fun_generate_function_code_202);
LOCFOR(fun_dispatcherQ_203);
LOCFOR(fun_x_1686_204);
LOCFOR(fun_205);
LOCFOR(fun_206);
LOCFOR(fun_207);
LOCFOR(fun_generate_function_code_208);
LOCFOR(fun_x_1689_209);
LOCFOR(fun_generate_local_temporaries_210);
LOCFOR(fun_next_reg_211);
LOCFOR(fun_next_line_212);
LOCFOR(fun_generate_registers_213);
LOCFOR(fun_module_info_name_214);
LOCFOR(fun_maybe_declare_215);
LOCFOR(fun_216);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_1692_218);
LOCFOR(fun_219);
LOCFOR(fun_220);
LOCFOR(fun_x_1698_221);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_223);
LOCFOR(fun_module_init_decl_224);
LOCFOR(fun_x_1704_225);
LOCFOR(fun_x_1709_226);
LOCFOR(fun_generate_module_init_227);
LOCFOR(fun_generate_main_228);
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
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  VARSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_10) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_1514F2097;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1514F2097 = VARREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1514F2097);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF2098;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2098 = T1;
  if (tmpF2098 != YPfalse) {
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

FUNCODEDEF(fun_load_module_13) {
  P loader_,name_;
  P out_portF2107;
  P prgF2106;
  P astF2105;
  P out_fileF2104;
  P src_fileF2103;
  P fileF2102;
  P envF2101;
  P keepmodQF2100;
  P modF2099;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF2099 = T1;
  keepmodQF2100 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2099);
  envF2101 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF2102 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF2102);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF2103 = T8;
  T12 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  T13 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF2102);
  T11 = CALL2(1,VARREF(YgooSsystemYadd_build_path),T12,T13);
  out_fileF2104 = T11;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF2103,modF2099);
  T14 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF2103);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T14,modF2099);
  T16 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF2103,envF2101);
  astF2105 = T16;
  T18 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF2105,envF2101);
  prgF2106 = T18;
  T19 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF2104);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T19);
  out_portF2107 = YPfalse;
  out_portF2107 = BOXFAB(out_portF2107);
  T22 = FUNFAB(fun_11,5,out_portF2107,out_fileF2104,prgF2106,astF2105,modF2099);
  T23 = FUNFAB(fun_12,1,out_portF2107);
  T21 = with_cleanup(T22,T23);
  T17 = modF2099;
  T15 = T17;
  T10 = T15;
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
  P T3,T2,T1,T0;
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

FUNCODEDEF(fun_15) {
  P mod_;
  P T6,T5,T4,T3,T2,T1,T0;
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

FUNCODEDEF(fun_16) {
  P name_;
  P x_1515F2108;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  x_1515F2108 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1515F2108,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1515F2108,LITREF(lit_19));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF2109;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF2109 = Ynil;
  changedF2109 = BOXFAB(changedF2109);
  T2 = FUNFAB(fun_15,1,changedF2109);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_16;
  T4 = BOXVAL(changedF2109);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF2109);
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
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P modF2110;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF2110 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_24));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF2110);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),loader_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSmathYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_27),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_28));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  VARSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_22) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P x_1517F2111;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_1517F2111 = VARREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_21,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_22,1,x_1517F2111);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YevalSg2cYTdynamic_linkingQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P x_1516F2112;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1516F2112 = VARREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_23,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_24,1,x_1516F2112);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_26) {
  P tmpF2113;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2113 = T1;
  if (tmpF2113 != YPfalse) {
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

FUNCODEDEF(fun_g2c_ast_27) {
  P ast_,env_;
  P out_portF2119;
  P prgF2118;
  P out_fileF2117;
  P fileF2116;
  P nameF2115;
  P modF2114;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF2114 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = VARSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_32),T4,T5);
  nameF2115 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF2115);
  fileF2116 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF2116);
  out_fileF2117 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF2118 = T12;
  out_portF2119 = YPfalse;
  out_portF2119 = BOXFAB(out_portF2119);
  T15 = FUNFAB(fun_25,5,out_portF2119,out_fileF2117,prgF2118,ast_,modF2114);
  T16 = FUNFAB(fun_26,1,out_portF2119);
  T14 = with_cleanup(T15,T16);
  T11 = fileF2116;
  T9 = T11;
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_exp_28) {
  P exp_,env_;
  P T1,T0;
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

FUNCODEDEF(fun_compile_load_29) {
  P name_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = (P)YPsu(name_);
  (P)YevalSg2cYPcompile(T0);
  T2 = (P)YPsu(name_);
  T1 = (P)YevalSg2cYPload(T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_so_load_30) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = (P)YPsu(name_);
  T0 = (P)YevalSg2cYPload(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF2120;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF2120 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF2120);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF2121;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF2121 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF2121);
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
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_41),LITREF(lit_28));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF2127;
  P prgF2126;
  P lftF2125;
  P calF2124;
  P dynF2123;
  P boxF2122;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),e_);
  boxF2122 = T1;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_dynamic_extent),boxF2122);
  dynF2123 = T3;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_calls),dynF2123);
  calF2124 = T5;
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),calF2124);
  lftF2125 = T7;
  T9 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF2125);
  prgF2126 = T9;
  T11 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF2126,env_,YPint((P)64));
  fltF2127 = T11;
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF2127);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF2127,YPfalse);
  T10 = prgF2126;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_module_37) {
  P code_out_,e_,prg_,mod_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
loop:
  CALL2(1,VARREF(YevalSg2cYgenerate_header),code_out_,e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),code_out_,mod_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),code_out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),code_out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),code_out_,T2);
  T3 = CALL1(1,VARREF(Ynot),VARREF(YevalSg2cYTdynamic_linkingQT));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),code_out_,mod_);
  } else {
  }
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),code_out_,mod_,T5);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),code_out_);
UNLINK_STACK();
  QRET(prg_);
}

FUNCODEDEF(fun_38) {
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,YPfalse);
  T2 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(2));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_39) {
  P tmpF2128;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2128 = T1;
  if (tmpF2128 != YPfalse) {
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
  P out_portF2132;
  P out_nameF2131;
  P init_nameF2130;
  P appnameF2129;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF2129 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF2129,LITREF(lit_51));
  init_nameF2130 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF2130);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2129,T6);
  out_nameF2131 = T5;
  out_portF2132 = YPfalse;
  out_portF2132 = BOXFAB(out_portF2132);
  T9 = FUNFAB(fun_38,3,out_portF2132,out_nameF2131,mod_);
  T10 = FUNFAB(fun_39,1,out_portF2132);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P mod_;
  P x_1523F2133;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1523F2133 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1523F2133,LITREF(lit_63));
  T4 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),T4);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1523F2133,T2);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1523F2133,LITREF(lit_64));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P x_1527F2142;
  P x_1526F2141;
  P x_1525F2140;
  P x_1524F2139;
  P x_1522F2138;
  P x_1521F2137;
  P x_1520F2136;
  P x_1519F2135;
  P x_1518F2134;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_1518F2134 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1518F2134,LITREF(lit_55));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1518F2134,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1518F2134,LITREF(lit_56));
  T3 = BOXVAL(FREEREF(0));
  x_1519F2135 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_1519F2135,LITREF(lit_57));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1519F2135,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1519F2135,LITREF(lit_58));
  T5 = BOXVAL(FREEREF(0));
  x_1520F2136 = T5;
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1520F2136,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1520F2136,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1520F2136,LITREF(lit_59));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1520F2136,FREEREF(2));
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1520F2136,LITREF(lit_60));
  T7 = BOXVAL(FREEREF(0));
  x_1521F2137 = T7;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1521F2137,LITREF(lit_61));
  T9 = BOXVAL(FREEREF(0));
  x_1522F2138 = T9;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1522F2138,LITREF(lit_62));
  T11 = FUNFAB(fun_41,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T11,FREEREF(3));
  T12 = BOXVAL(FREEREF(0));
  x_1524F2139 = T12;
  CALL2(1,VARREF(YgooSioSportYputs),x_1524F2139,LITREF(lit_65));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1524F2139,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1524F2139,LITREF(lit_66));
  T15 = BOXVAL(FREEREF(0));
  x_1525F2140 = T15;
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1525F2140,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1525F2140,LITREF(lit_67));
  T17 = BOXVAL(FREEREF(0));
  x_1526F2141 = T17;
  CALL2(1,VARREF(YgooSioSportYputs),x_1526F2141,LITREF(lit_68));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1526F2141,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_1526F2141,LITREF(lit_69));
  T20 = BOXVAL(FREEREF(0));
  x_1527F2142 = T20;
  CALL2(1,VARREF(YgooSioSportYputs),x_1527F2142,LITREF(lit_70));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1527F2142,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1527F2142,LITREF(lit_71));
  T19 = T21;
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_43) {
  P tmpF2143;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2143 = T1;
  if (tmpF2143 != YPfalse) {
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

FUNCODEDEF(fun_generate_makefile_44) {
  P loader_;
  P code_outF2149;
  P out_nameF2148;
  P sepF2147;
  P exe_nameF2146;
  P init_nameF2145;
  P appnameF2144;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF2144 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF2144,LITREF(lit_53));
  init_nameF2145 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF2144);
  exe_nameF2146 = T5;
  sepF2147 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2144,LITREF(lit_54));
  out_nameF2148 = T8;
  code_outF2149 = YPfalse;
  code_outF2149 = BOXFAB(code_outF2149);
  T12 = FUNFAB(fun_42,6,code_outF2149,out_nameF2148,sepF2147,loader_,init_nameF2145,exe_nameF2146);
  T13 = FUNFAB(fun_43,1,code_outF2149);
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

FUNCODEDEF(fun_pp_45) {
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

FUNCODEDEF(fun_generate_header_46) {
  P code_out_,e_;
  P x_1530F2152;
  P x_1529F2151;
  P x_1528F2150;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1528F2150 = code_out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1528F2150,LITREF(lit_74));
  x_1529F2151 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1529F2151,LITREF(lit_75));
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_1530F2152 = code_out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1530F2152,LITREF(lit_76));
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_trailer_47) {
  P code_out_;
  P x_1531F2153;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  x_1531F2153 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1531F2153,LITREF(lit_78));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P binding_;
  P T2,T1,T0;
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

FUNCODEDEF(fun_generate_global_environment_49) {
  P code_out_,mod_;
  P x_1532F2154;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  x_1532F2154 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1532F2154,LITREF(lit_80));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1532F2154,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1532F2154,LITREF(lit_81));
  T3 = FUNFAB(fun_48,2,code_out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_50) {
  P code_out_,importedQ_,gb_;
  P x_1533F2158;
  P nameF2157;
  P tmpF2156;
  P kindF2155;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF2155 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2155,LITREF(lit_86));
  tmpF2156 = T4;
  if (tmpF2156 != YPfalse) {
    T5 = tmpF2156;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2155,LITREF(lit_87));
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF2157 = T8;
    x_1533F2158 = code_out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_88);
    } else {
      T10 = LITREF(lit_89);
    }
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1533F2158,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_1533F2158,LITREF(lit_90));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_module_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1533F2158,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1533F2158,LITREF(lit_91));
    T13 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1533F2158,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_1533F2158,LITREF(lit_92));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF2157);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1533F2158,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1533F2158,LITREF(lit_93));
    T9 = T15;
    T7 = T9;
    T2 = T7;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_51) {
  P i_;
  P T4,T3,T2,T1,T0;
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
  P loopF2161;
  P stringF2160;
  P buffer_sizeF2159;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF2159 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF2159);
  check_type(T3,VARREF(YLstrG));
  stringF2160 = T3;
  T4 = FUNSHELL(1,fun_loop_51,4);
  loopF2161 = T4;
  FUNINIT(loopF2161, 4,buffer_sizeF2159,buffer_,stringF2160,loopF2161);
  T5 = CALL1(0,loopF2161,YPint((P)0));
  T2 = stringF2160;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_53) {
  P i_;
  P encF2163;
  P cF2162;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    cF2162 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF2162);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T7);
    encF2163 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF2163,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF2162);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF2163);
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

FUNCODEDEF(fun_mangle_string_literal_54) {
  P str_;
  P loopF2165;
  P lenF2164;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF2164 = T1;
  T3 = FUNSHELL(1,fun_loop_53,3);
  loopF2165 = T3;
  FUNINIT(loopF2165, 3,lenF2164,str_,loopF2165);
  T4 = CALL1(0,loopF2165,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_55) {
  P sym_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(sym_, 0);
loop:
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_integer_56) {
  P number_,index_;
  P resultF2171;
  P resultF2170;
  P digitF2169;
  P remainderF2168;
  P quotientF2167;
  P tup32F2166;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup32F2166 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2166,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF2167 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2166,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF2168 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF2168);
  check_type(T7,VARREF(YLchrG));
  digitF2169 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF2167,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF2170 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF2169,resultF2170,YPint((P)0));
    T10 = resultF2170;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF2167,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF2171 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF2171);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF2169,resultF2171,T15);
    T12 = resultF2171;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_57) {
  P number_;
  P process_integerF2172;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T2 = FUNSHELL(1,fun_process_integer_56,1);
  process_integerF2172 = T2;
  FUNINIT(process_integerF2172, 1,process_integerF2172);
  T3 = CALL2(1,process_integerF2172,number_,YPint((P)1));
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1535_58) {
  P x_1534_;
  P iF2173;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1534_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1534_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1534_);
    iF2173 = T4;
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_integer),iF2173);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T6,VARREF(YevalSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF2173);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1534_);
    a1 = T8;
    x_1534_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1537_59) {
  P x_1536_;
  P mangleF2174;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1536_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1536_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1536_);
    mangleF2174 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF2174,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF2174,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1536_);
    a1 = T9;
    x_1536_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1539_60) {
  P x_1538_;
  P iF2175;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1538_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1538_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1538_);
    iF2175 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF2175);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF2175);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1538_);
    a1 = T7;
    x_1538_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1541_61) {
  P x_1540_;
  P iF2176;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1540_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1540_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1540_);
    iF2176 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF2176);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF2176);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1540_);
    a1 = T7;
    x_1540_ = a1;
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

FUNCODEDEF(fun_x_1543_63) {
  P x_1542_;
  P cF2177;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1542_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1542_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1542_);
    cF2177 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF2177);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1542_);
    a1 = T9;
    x_1542_ = a1;
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
  P x_1543F2178;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1543_63,2);
  x_1543F2178 = T1;
  FUNINIT(x_1543F2178, 2,buf_,x_1543F2178);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T2 = CALL1(0,x_1543F2178,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_raw_name_65) {
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

FUNCODEDEF(fun_mangle_raw_name_66) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_67) {
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

FUNCODEDEF(fun_mangle_local_name_68) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_global_name_69) {
  P modname_,name_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),modname_,VARREF(YevalSastYDgoo_boot_module_name));
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),modname_);
    T2 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),T3);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T4 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T4);
}

FUNCODEDEF(fun_mangle_global_name_70) {
  P modname_,name_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(modname_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),modname_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_boot_name_71) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSastYDgoo_boot_module_name),name_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_module_binding_72) {
  P binding_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_marked_name_73) {
  P name_,marker_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(fun_mangle_local_marked_name_74) {
  P name_,marker_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T1,marker_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1547_75) {
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

FUNCODEDEF(fun_76) {
  P return_;
  P out_varF2190;
  P x_1546F2189;
  P x_1546F2188;
  P x_1546F2187;
  P x_1546F2186;
  P x_1546F2185;
  P x_1546F2184;
  P bodyF2183;
  P clausesF2182;
  P out_valF2181;
  P x_1546F2180;
  P x_1547F2179;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1547_75,1);
  x_1547F2179 = T1;
  FUNINIT(x_1547F2179, 1,return_);
  x_1546F2180 = FREEREF(0);
  out_valF2181 = YPfalse;
  out_valF2181 = BOXFAB(out_valF2181);
  clausesF2182 = YPfalse;
  clausesF2182 = BOXFAB(clausesF2182);
  bodyF2183 = YPfalse;
  bodyF2183 = BOXFAB(bodyF2183);
  T9 = CALL2(1,VARREF(YisaQ),x_1546F2180,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1546F2180,LITREF(lit_160),x_1547F2179);
    x_1546F2184 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1546F2184,x_1547F2179);
    BOXVAL(out_valF2181) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1546F2184);
    x_1546F2185 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1546F2185,x_1547F2179);
    x_1546F2186 = T16;
    BOXVAL(clausesF2182) = x_1546F2186;
    x_1546F2187 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1546F2187,x_1547F2179);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1546F2185);
    x_1546F2188 = T19;
    BOXVAL(bodyF2183) = x_1546F2188;
    x_1546F2189 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1546F2189,x_1547F2179);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1547F2179,LITREF(lit_161),x_1546F2180);
  }
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2190 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T31 = CALL1(1,VARREF(Ylst),out_varF2190);
  T33 = BOXVAL(out_valF2181);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
  T39 = BOXVAL(clausesF2182);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_164));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_166));
  T49 = CALL1(1,VARREF(Ylst),YPtrue);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_166));
  T53 = CALL1(1,VARREF(Ylst),YPfalse);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T50,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_167));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_164));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
  T61 = CALL1(1,VARREF(Ylst),out_varF2190);
  T62 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = BOXVAL(bodyF2183);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),5,T36,T37,T54,T63,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T34,Ynil);
  T23 = T25;
  T7 = T23;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_76,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1551_78) {
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

FUNCODEDEF(fun_79) {
  P return_;
  P out_varF2200;
  P x_1550F2199;
  P x_1550F2198;
  P x_1550F2197;
  P x_1550F2196;
  P x_1550F2195;
  P bodyF2194;
  P out_valF2193;
  P x_1550F2192;
  P x_1551F2191;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1551_78,1);
  x_1551F2191 = T1;
  FUNINIT(x_1551F2191, 1,return_);
  x_1550F2192 = FREEREF(0);
  out_valF2193 = YPfalse;
  out_valF2193 = BOXFAB(out_valF2193);
  bodyF2194 = YPfalse;
  bodyF2194 = BOXFAB(bodyF2194);
  T7 = CALL2(1,VARREF(YisaQ),x_1550F2192,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1550F2192,LITREF(lit_170),x_1551F2191);
    x_1550F2195 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1550F2195,x_1551F2191);
    x_1550F2196 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1550F2196,x_1551F2191);
    BOXVAL(out_valF2193) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1550F2196);
    x_1550F2197 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1550F2197,x_1551F2191);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1550F2195);
    x_1550F2198 = T16;
    BOXVAL(bodyF2194) = x_1550F2198;
    x_1550F2199 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1550F2199,x_1551F2191);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1551F2191,LITREF(lit_161),x_1550F2192);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2200 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T28 = CALL1(1,VARREF(Ylst),out_varF2200);
  T30 = BOXVAL(out_valF2193);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
  T34 = CALL1(1,VARREF(Ylst),out_varF2200);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T36 = BOXVAL(bodyF2194);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
  T40 = CALL1(1,VARREF(Ylst),out_varF2200);
  T41 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T41,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),6,T23,T24,T31,T36,T37,Ynil);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_79,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1555_81) {
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

FUNCODEDEF(fun_loop_82) {
  P forms_,body_,firstQ_;
  P tmpF2201;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    tmpF2201 = firstQ_;
    if (tmpF2201 != YPfalse) {
      T8 = tmpF2201;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
      T11 = CALL1(1,VARREF(Ylst),FREEREF(1));
      T12 = CALL1(1,VARREF(Ylst),YPchr((P)44));
      T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T12,Ynil);
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

FUNCODEDEF(fun_83) {
  P return_;
  P loopF2212;
  P out_varF2211;
  P x_1554F2210;
  P x_1554F2209;
  P x_1554F2208;
  P x_1554F2207;
  P x_1554F2206;
  P bodyF2205;
  P out_valF2204;
  P x_1554F2203;
  P x_1555F2202;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1555_81,1);
  x_1555F2202 = T1;
  FUNINIT(x_1555F2202, 1,return_);
  x_1554F2203 = FREEREF(0);
  out_valF2204 = YPfalse;
  out_valF2204 = BOXFAB(out_valF2204);
  bodyF2205 = YPfalse;
  bodyF2205 = BOXFAB(bodyF2205);
  T7 = CALL2(1,VARREF(YisaQ),x_1554F2203,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1554F2203,LITREF(lit_172),x_1555F2202);
    x_1554F2206 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1554F2206,x_1555F2202);
    x_1554F2207 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1554F2207,x_1555F2202);
    BOXVAL(out_valF2204) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1554F2207);
    x_1554F2208 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1554F2208,x_1555F2202);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1554F2206);
    x_1554F2209 = T16;
    BOXVAL(bodyF2205) = x_1554F2209;
    x_1554F2210 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1554F2210,x_1555F2202);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1555F2202,LITREF(lit_161),x_1554F2203);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2211 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
  T28 = CALL1(1,VARREF(Ylst),out_varF2211);
  T30 = BOXVAL(out_valF2204);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
  T34 = CALL1(1,VARREF(Ylst),out_varF2211);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T37 = FUNSHELL(1,fun_loop_82,2);
  loopF2212 = T37;
  FUNINIT(loopF2212, 2,loopF2212,out_varF2211);
  T39 = BOXVAL(bodyF2205);
  T38 = CALL3(0,loopF2212,Ynil,T39,YPtrue);
  T36 = T38;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
  T43 = CALL1(1,VARREF(Ylst),out_varF2211);
  T44 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T44,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),6,T23,T24,T31,T36,T40,Ynil);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_83,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_result_85) {
  P e_,d_,code_out_;
  P tmpF2216;
  P x_1556F2215;
  P tmpF2214;
  P regF2213;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF2213 = T1;
  tmpF2214 = regF2213;
  if (tmpF2214 != YPfalse) {
    x_1556F2215 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1556F2215,LITREF(lit_177));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF2213);
    CALL2(1,VARREF(YgooSioSportYputs),x_1556F2215,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1556F2215,LITREF(lit_178));
    T5 = T7;
    tmpF2216 = T5;
    if (tmpF2216 != YPfalse) {
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

FUNCODEDEF(fun_x_1558_86) {
  P x_1557_;
  P iF2217;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1557_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1557_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1557_);
    iF2217 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_182));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1557_);
    a1 = T6;
    x_1557_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_depth_87) {
  P d_,code_out_;
  P x_1558F2218;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1558_86,2);
  x_1558F2218 = T1;
  FUNINIT(x_1558F2218, 2,code_out_,x_1558F2218);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1558F2218,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1562_88) {
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

FUNCODEDEF(fun_89) {
  P return_;
  P x_1561F2229;
  P x_1561F2228;
  P x_1561F2227;
  P x_1561F2226;
  P x_1561F2225;
  P x_1561F2224;
  P bodyF2223;
  P code_outF2222;
  P dF2221;
  P x_1561F2220;
  P x_1562F2219;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1562_88,1);
  x_1562F2219 = T1;
  FUNINIT(x_1562F2219, 1,return_);
  x_1561F2220 = FREEREF(0);
  dF2221 = YPfalse;
  dF2221 = BOXFAB(dF2221);
  code_outF2222 = YPfalse;
  code_outF2222 = BOXFAB(code_outF2222);
  bodyF2223 = YPfalse;
  bodyF2223 = BOXFAB(bodyF2223);
  T9 = CALL2(1,VARREF(YisaQ),x_1561F2220,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1561F2220,LITREF(lit_184),x_1562F2219);
    x_1561F2224 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1561F2224,x_1562F2219);
    x_1561F2225 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1561F2225,x_1562F2219);
    BOXVAL(dF2221) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1561F2225);
    x_1561F2226 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1561F2226,x_1562F2219);
    BOXVAL(code_outF2222) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1561F2226);
    x_1561F2227 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1561F2227,x_1562F2219);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1561F2224);
    x_1561F2228 = T21;
    BOXVAL(bodyF2223) = x_1561F2228;
    x_1561F2229 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1561F2229,x_1562F2219);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1562F2219,LITREF(lit_161),x_1561F2220);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_185));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_179));
  T31 = BOXVAL(dF2221);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T33 = BOXVAL(code_outF2222);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = BOXVAL(bodyF2223);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_186));
  T39 = BOXVAL(code_outF2222);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),5,T26,T27,T34,T35,Ynil);
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_90) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_89,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1566_91) {
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

FUNCODEDEF(fun_92) {
  P return_;
  P x_1565F2242;
  P x_1565F2241;
  P x_1565F2240;
  P x_1565F2239;
  P x_1565F2238;
  P x_1565F2237;
  P x_1565F2236;
  P bodyF2235;
  P code_outF2234;
  P dF2233;
  P eF2232;
  P x_1565F2231;
  P x_1566F2230;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1566_91,1);
  x_1566F2230 = T1;
  FUNINIT(x_1566F2230, 1,return_);
  x_1565F2231 = FREEREF(0);
  eF2232 = YPfalse;
  eF2232 = BOXFAB(eF2232);
  dF2233 = YPfalse;
  dF2233 = BOXFAB(dF2233);
  code_outF2234 = YPfalse;
  code_outF2234 = BOXFAB(code_outF2234);
  bodyF2235 = YPfalse;
  bodyF2235 = BOXFAB(bodyF2235);
  T11 = CALL2(1,VARREF(YisaQ),x_1565F2231,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1565F2231,LITREF(lit_189),x_1566F2230);
    x_1565F2236 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1565F2236,x_1566F2230);
    x_1565F2237 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1565F2237,x_1566F2230);
    BOXVAL(eF2232) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1565F2237);
    x_1565F2238 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1565F2238,x_1566F2230);
    BOXVAL(dF2233) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1565F2238);
    x_1565F2239 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1565F2239,x_1566F2230);
    BOXVAL(code_outF2234) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1565F2239);
    x_1565F2240 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1565F2240,x_1566F2230);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1565F2236);
    x_1565F2241 = T26;
    BOXVAL(bodyF2235) = x_1565F2241;
    x_1565F2242 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1565F2242,x_1566F2230);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1566F2230,LITREF(lit_161),x_1565F2231);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T35 = BOXVAL(dF2233);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(code_outF2234);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_175));
  T42 = BOXVAL(eF2232);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(dF2233);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(code_outF2234);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T39 = CALLN(1,VARREF(YgooSmacrosYcat),5,T40,T41,T43,T45,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = BOXVAL(bodyF2235);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),5,T31,T32,T38,T47,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_92,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1570_94) {
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

FUNCODEDEF(fun_95) {
  P return_;
  P x_1569F2255;
  P x_1569F2254;
  P x_1569F2253;
  P x_1569F2252;
  P x_1569F2251;
  P x_1569F2250;
  P x_1569F2249;
  P bodyF2248;
  P code_outF2247;
  P dF2246;
  P eF2245;
  P x_1569F2244;
  P x_1570F2243;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1570_94,1);
  x_1570F2243 = T1;
  FUNINIT(x_1570F2243, 1,return_);
  x_1569F2244 = FREEREF(0);
  eF2245 = YPfalse;
  eF2245 = BOXFAB(eF2245);
  dF2246 = YPfalse;
  dF2246 = BOXFAB(dF2246);
  code_outF2247 = YPfalse;
  code_outF2247 = BOXFAB(code_outF2247);
  bodyF2248 = YPfalse;
  bodyF2248 = BOXFAB(bodyF2248);
  T11 = CALL2(1,VARREF(YisaQ),x_1569F2244,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1569F2244,LITREF(lit_191),x_1570F2243);
    x_1569F2249 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1569F2249,x_1570F2243);
    x_1569F2250 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1569F2250,x_1570F2243);
    BOXVAL(eF2245) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1569F2250);
    x_1569F2251 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1569F2251,x_1570F2243);
    BOXVAL(dF2246) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1569F2251);
    x_1569F2252 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1569F2252,x_1570F2243);
    BOXVAL(code_outF2247) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1569F2252);
    x_1569F2253 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1569F2253,x_1570F2243);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1569F2249);
    x_1569F2254 = T26;
    BOXVAL(bodyF2248) = x_1569F2254;
    x_1569F2255 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1569F2255,x_1570F2243);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1570F2243,LITREF(lit_161),x_1569F2244);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T36 = BOXVAL(eF2245);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_189));
  T43 = BOXVAL(eF2245);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(dF2246);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(code_outF2247);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T44,T46,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = BOXVAL(bodyF2248);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T48,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T37,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_96) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_95,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1572_97) {
  P x_1571_;
  P x_1573F2257;
  P qbF2256;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1571_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1571_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1571_);
    qbF2256 = T4;
    x_1573F2257 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1573F2257,LITREF(lit_199));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF2256);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1573F2257,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1573F2257,LITREF(lit_200));
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

FUNCODEDEF(fun_generate_quotation_forwards_98) {
  P code_out_,qbT_;
  P x_1572F2258;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_196));
  T1 = FUNSHELL(1,fun_x_1572_97,2);
  x_1572F2258 = T1;
  FUNINIT(x_1572F2258, 2,code_out_,x_1572F2258);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_1572F2258,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1575_99) {
  P x_1574_;
  P x_1576F2260;
  P qbF2259;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1574_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1574_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1574_);
    qbF2259 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    x_1576F2260 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1576F2260,LITREF(lit_204));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF2259);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1576F2260,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1576F2260,LITREF(lit_205));
    T7 = CALL1(1,VARREF(YevalSastYbinding_info),qbF2259);
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),T7);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_187));
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1574_);
    a1 = T9;
    x_1574_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_100) {
  P code_out_,qbT_;
  P x_1575F2261;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1575_99,2);
  x_1575F2261 = T1;
  FUNINIT(x_1575F2261, 2,code_out_,x_1575F2261);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1575F2261,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_101) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_207));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_102) {
  P code_out_,qb_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_210);
  } else {
    T2 = LITREF(lit_211);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_103) {
  P code_out_,qb_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_212));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_104) {
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

FUNCODEDEF(fun_generate_quotation_105) {
  P code_out_,qb_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = FUNFAB(fun_104,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_106) {
  P code_out_,x_;
  P x_1577F2262;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1577F2262 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_213));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1577F2262,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1577F2262,LITREF(lit_214));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1577F2262,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1577F2262,LITREF(lit_215));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_107) {
  P code_out_,x_;
  P x_1578F2263;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1578F2263 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_216));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1578F2263,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1578F2263,LITREF(lit_217));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_1578F2263,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1578F2263,LITREF(lit_218));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_108) {
  P i_;
  P x_1580F2265;
  P x_1579F2264;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmagYG),i_,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    x_1579F2264 = T4;
    x_1580F2265 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1580F2265,x_1579F2264,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1580F2265,x_1579F2264,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1580F2265,x_1579F2264,YPchr((P)120));
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

FUNCODEDEF(fun_109) {
  P done_;
  P loopF2266;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_108,3);
  loopF2266 = T1;
  FUNINIT(loopF2266, 3,FREEREF(0),done_,loopF2266);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF2266,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_110) {
  P o_;
  P sF2267;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF2267 = T1;
  T3 = FUNFAB(fun_109,1,sF2267);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_111) {
  P code_out_,x_;
  P x_1581F2268;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1581F2268 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_222));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1581F2268,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1581F2268,LITREF(lit_223));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1581F2268,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1581F2268,LITREF(lit_224));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_112) {
  P code_out_,x_;
  P x_1582F2269;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1582F2269 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_225));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1582F2269,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1582F2269,LITREF(lit_226));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1582F2269,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1582F2269,LITREF(lit_227));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1585_113) {
  P x_1584_;
  P eF2270;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1584_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1584_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1584_);
    eF2270 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_233));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF2270);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1584_);
    a1 = T6;
    x_1584_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P code_out_,x_;
  P x_1585F2272;
  P x_1583F2271;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1583F2271 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1583F2271,LITREF(lit_228));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_229));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1583F2271,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1583F2271,LITREF(lit_230));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1583F2271,T2);
  T3 = FUNSHELL(1,fun_x_1585_113,2);
  x_1585F2272 = T3;
  FUNINIT(x_1585F2272, 2,code_out_,x_1585F2272);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1585F2272,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_234));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_1588_115) {
  P x_1587_;
  P eF2273;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1587_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1587_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1587_);
    eF2273 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_240));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF2273);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1587_);
    a1 = T6;
    x_1587_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_116) {
  P code_out_,x_;
  P x_1588F2275;
  P x_1586F2274;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1586F2274 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1586F2274,LITREF(lit_235));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_236));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1586F2274,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1586F2274,LITREF(lit_237));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1586F2274,T2);
  T3 = FUNSHELL(1,fun_x_1588_115,2);
  x_1588F2275 = T3;
  FUNINIT(x_1588F2275, 2,code_out_,x_1588F2275);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1588F2275,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_241));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_quotation_117) {
  P code_out_,x_;
  P x_1589F2276;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1589F2276 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_242));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1589F2276,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1589F2276,LITREF(lit_243));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1589F2276,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1589F2276,LITREF(lit_244));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_118) {
  P binding_,code_out_;
  P x_1590F2277;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_246));
  if (T1 != YPfalse) {
    x_1590F2277 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1590F2277,LITREF(lit_247));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1590F2277,T5);
    T3 = T4;
    T0 = T3;
  } else {
    T7 = CALL1(1,VARREF(YevalSg2cYmangle_module_binding),binding_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_119) {
  P binding_,code_out_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_120) {
  P binding_,code_out_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
  T1 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T2,T3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_121) {
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

FUNCODEDEF(fun_reference_Gc_122) {
  P v_,code_out_;
  P x_1591F2278;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_246));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_250);
  } else {
    T0 = LITREF(lit_251);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_1591F2278 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1591F2278,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1591F2278,YPchr((P)41));
  T3 = T4;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_123) {
  P e_,f_,d_,code_out_;
  P T6,T5,T4,T3,T2,T1,T0;
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
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_124) {
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

FUNCODEDEF(fun_gen_ref_125) {
  P e_,code_out_;
  P T1,T0;
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

FUNCODEDEF(fun_gen_ref_126) {
  P e_,code_out_;
  P x_1593F2280;
  P x_1592F2279;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_255));
  x_1592F2279 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1592F2279,YPchr((P)40));
  x_1593F2280 = code_out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1593F2280,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1592F2279,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_127) {
  P e_,code_out_;
  P x_1594F2282;
  P regF2281;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF2281 = T1;
  if (regF2281 != YPfalse) {
    x_1594F2282 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1594F2282,LITREF(lit_256));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF2281);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1594F2282,T5);
    T3 = T4;
    T2 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_257));
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_128) {
  P e_,code_out_;
  P x_1595F2283;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  x_1595F2283 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1595F2283,LITREF(lit_258));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1595F2283,T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_129) {
  P e_,code_out_;
  P T1,T0;
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

FUNCODEDEF(fun_gen_ref_130) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_131) {
  P e_,f_,d_,code_out_;
  P T3,T2,T1,T0;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_259));
  T1 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T1,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_260));
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_261));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_132) {
  P e_,f_,d_,code_out_;
  P x_1596F2284;
  P T5,T4,T3,T2,T1,T0;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_262));
    x_1596F2284 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1596F2284,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T2 = CALL1(1,VARREF(YevalSastYreference_binding),T3);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T2,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1596F2284,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_133) {
  P e_,f_,d_,code_out_;
  P x_1597F2285;
  P T5,T4,T3,T2,T1,T0;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_263));
    x_1597F2285 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1597F2285,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1597F2285,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_134) {
  P e_,f_,d_,code_out_;
  P x_1598F2286;
  P T4,T3,T2,T1,T0;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_264));
  x_1598F2286 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1598F2286,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1598F2286,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_265));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_135) {
  P e_,f_,d_,code_out_;
  P x_1599F2288;
  P bindingF2287;
  P T5,T4,T3,T2,T1,T0;
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
  bindingF2287 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2287,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_266));
  x_1599F2288 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1599F2288,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2287,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1599F2288,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_136) {
  P e_,f_,d_,code_out_;
  P x_1600F2289;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_267));
  T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  x_1600F2289 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1600F2289,LITREF(lit_268));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1600F2289,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1600F2289,LITREF(lit_269));
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
    T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_270));
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
    T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_271));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_137) {
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

FUNCODEDEF(fun_to_c_138) {
  P e_,f_,d_,code_out_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_137,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1602_139) {
  P x_1601_;
  P argF2290;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1601_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1601_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1601_);
    argF2290 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF2290,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1601_);
    a1 = T6;
    x_1601_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1605_140) {
  P x_1604_,x_1603_;
  P x_1606F2294;
  P argF2293;
  P iF2292;
  P tmpF2291;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1604_, 0);
  ARG(x_1603_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1604_);
  tmpF2291 = T3;
  if (tmpF2291 != YPfalse) {
    T4 = tmpF2291;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1603_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1604_);
    iF2292 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1603_);
    argF2293 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    x_1606F2294 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1606F2294,LITREF(lit_278));
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF2292);
    CALL2(1,VARREF(YgooSioSportYputs),x_1606F2294,T10);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1606F2294,LITREF(lit_279));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF2293,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_187));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1604_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1603_);
    a1 = T13;
    a2 = T14;
    x_1604_ = a1;
    x_1603_ = a2;
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

FUNCODEDEF(fun_x_1609_141) {
  P x_1608_,x_1607_;
  P x_1610F2298;
  P bindingF2297;
  P iF2296;
  P tmpF2295;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1608_, 0);
  ARG(x_1607_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1608_);
  tmpF2295 = T3;
  if (tmpF2295 != YPfalse) {
    T4 = tmpF2295;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1607_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1608_);
    iF2296 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1607_);
    bindingF2297 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2297,FREEREF(1));
    x_1610F2298 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1610F2298,LITREF(lit_283));
    T11 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF2296);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1610F2298,T11);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_187));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1608_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1607_);
    a1 = T13;
    a2 = T14;
    x_1608_ = a1;
    x_1607_ = a2;
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

FUNCODEDEF(fun_generate_self_recursive_call_142) {
  P e_,f_,d_,code_out_;
  P x_1609F2301;
  P x_1605F2300;
  P x_1602F2299;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1602_139,4);
  x_1602F2299 = T0;
  FUNINIT(x_1602F2299, 4,f_,d_,code_out_,x_1602F2299);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1602F2299,T2);
  T4 = FUNSHELL(1,fun_x_1605_140,3);
  x_1605F2300 = T4;
  FUNINIT(x_1605F2300, 3,d_,code_out_,x_1605F2300);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_1605F2300,T6,T8);
  T10 = FUNSHELL(1,fun_x_1609_141,3);
  x_1609F2301 = T10;
  FUNINIT(x_1609F2301, 3,d_,code_out_,x_1609F2301);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_1609F2301,T12,T14);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_284));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_1612_143) {
  P x_1611_;
  P argF2302;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1611_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1611_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1611_);
    argF2302 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF2302,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1611_);
    a1 = T6;
    x_1611_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1617_144) {
  P x_1616_;
  P argF2303;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1616_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1616_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1616_);
    argF2303 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF2303,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1616_);
    a1 = T6;
    x_1616_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_145) {
  P e_,f_,d_,code_out_;
  P x_1617F2314;
  P x_1615F2313;
  P x_1614F2312;
  P x_1613F2311;
  P x_1612F2310;
  P nF2309;
  P tmpF2308;
  P tmpF2307;
  P tmpF2306;
  P tmpF2305;
  P functionF2304;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF2304 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF2305 = T4;
  if (tmpF2305 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_methodG));
    tmpF2306 = T7;
    if (tmpF2306 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF2307 = T10;
      if (tmpF2307 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF2304,VARREF(YevalSast_linearizeYLfree_referenceG));
        tmpF2308 = T14;
        if (tmpF2308 != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSast_linearizeYreference_selfQ),functionF2304);
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
    nF2309 = T19;
    T21 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_1612_143,4);
    x_1612F2310 = T22;
    FUNINIT(x_1612F2310, 4,f_,d_,code_out_,x_1612F2310);
    T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_1612F2310,T24);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1613F2311 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1613F2311,LITREF(lit_287));
    T28 = CALL2(1,VARREF(YgooSmagYG),nF2309,VARREF(YevalSg2cYDnumber_call_templates));
    if (T28 != YPfalse) {
      T27 = LITREF(lit_288);
    } else {
      T27 = nF2309;
    }
    T26 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1613F2311,T27);
    x_1614F2312 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1614F2312,YPchr((P)40));
    T30 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
    if (T30 != YPfalse) {
      T29 = LITREF(lit_289);
    } else {
      T29 = LITREF(lit_290);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T29);
    T31 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T31,code_out_);
    T32 = CALL2(1,VARREF(YgooSmagYG),nF2309,VARREF(YevalSg2cYDnumber_call_templates));
    if (T32 != YPfalse) {
      x_1615F2313 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1615F2313,LITREF(lit_291));
      T34 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1615F2313,nF2309);
      T33 = T34;
    } else {
    }
    T35 = FUNSHELL(1,fun_x_1617_144,2);
    x_1617F2314 = T35;
    FUNINIT(x_1617F2314, 2,code_out_,x_1617F2314);
    T38 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T37 = CALL1(1,VARREF(YgooScolsScolYenum),T38);
    T36 = CALL1(0,x_1617F2314,T37);
    T39 = CALL2(1,VARREF(YgooSioSportYput),x_1614F2312,YPchr((P)41));
    T40 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T18 = T40;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1621_146) {
  P x_1620_,x_1619_;
  P xF2317;
  P firstQF2316;
  P tmpF2315;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1620_, 0);
  ARG(x_1619_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1620_);
  tmpF2315 = T3;
  if (tmpF2315 != YPfalse) {
    T4 = tmpF2315;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1619_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1620_);
    firstQF2316 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1619_);
    xF2317 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2316);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF2317,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1620_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1619_);
    a1 = T13;
    a2 = T14;
    x_1620_ = a1;
    x_1619_ = a2;
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

FUNCODEDEF(fun_147) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_148) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_149) {
  P e_,f_,d_,code_out_;
  P x_1621F2319;
  P x_1618F2318;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_1618F2318 = code_out_;
  T2 = FUNSHELL(1,fun_x_1621_146,3);
  x_1621F2319 = T2;
  FUNINIT(x_1621F2319, 3,x_1618F2318,code_out_,x_1621F2319);
  T6 = fun_147;
  T7 = fun_148;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_1621F2319,T4,T8);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1625_150) {
  P x_1624_,x_1623_,x_1622_;
  P x_1626F2325;
  P bindingF2324;
  P typeF2323;
  P initF2322;
  P tmpF2321;
  P tmpF2320;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1624_, 0);
  ARG(x_1623_, 1);
  ARG(x_1622_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1624_);
  tmpF2320 = T3;
  if (tmpF2320 != YPfalse) {
    T4 = tmpF2320;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1623_);
    tmpF2321 = T6;
    if (tmpF2321 != YPfalse) {
      T7 = tmpF2321;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1622_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1624_);
    initF2322 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1623_);
    typeF2323 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1622_);
    bindingF2324 = T14;
    CALL4(1,VARREF(YevalSg2cYto_c),initF2322,YPfalse,FREEREF(0),FREEREF(1));
    T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF2323);
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALL4(1,VARREF(YevalSg2cYto_c),typeF2323,YPfalse,FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_301));
      x_1626F2325 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYput),x_1626F2325,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF2322,FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYput),x_1626F2325,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),typeF2323,FREEREF(1));
      T17 = CALL2(1,VARREF(YgooSioSportYput),x_1626F2325,YPchr((P)41));
      T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_187));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2324,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_302));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF2322,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_187));
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1624_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1623_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1622_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1624_ = a1;
    x_1623_ = a2;
    x_1622_ = a3;
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

FUNCODEDEF(fun_to_c_151) {
  P e_,f_,d_,code_out_;
  P x_1625F2326;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1625_150,3);
  x_1625F2326 = T0;
  FUNINIT(x_1625F2326, 3,d_,code_out_,x_1625F2326);
  T3 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T1 = CALL3(0,x_1625F2326,T2,T4,T6);
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T8,f_,d_,code_out_);
  T10 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T10 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T11 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T11,code_out_);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T9 = T12;
  } else {
    T9 = YPfalse;
  }
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1629_152) {
  P x_1628_,x_1627_;
  P bindingF2329;
  P initF2328;
  P tmpF2327;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1628_, 0);
  ARG(x_1627_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1628_);
  tmpF2327 = T3;
  if (tmpF2327 != YPfalse) {
    T4 = tmpF2327;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1627_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1628_);
    initF2328 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1627_);
    bindingF2329 = T9;
    CALLN(1,VARREF(YevalSg2cYfunshell_to_c),5,bindingF2329,initF2328,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2329,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_306));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF2328,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_187));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1628_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1627_);
    a1 = T11;
    a2 = T12;
    x_1628_ = a1;
    x_1627_ = a2;
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

FUNCODEDEF(fun_to_c_153) {
  P e_,f_,d_,code_out_;
  P x_1629F2330;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1629_152,3);
  x_1629F2330 = T0;
  FUNINIT(x_1629F2330, 3,d_,code_out_,x_1629F2330);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_1629F2330,T2,T4);
  T6 = CALL4(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsScolYdo2),T6,T7,T8);
  T9 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T9,f_,d_,code_out_);
  T11 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,code_out_;
  P x_1630F2331;
  P T3,T2,T1,T0;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_307));
  x_1630F2331 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1630F2331,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1630F2331,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_155) {
  P e_,f_,d_,code_out_;
  P x_1631F2332;
  P T5,T4,T3,T2,T1,T0;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_308));
  x_1631F2332 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1631F2332,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1631F2332,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1631F2332,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_156) {
  P e_,f_,d_,code_out_;
  P x_1632F2333;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_309));
  x_1632F2333 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_310));
  CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_311));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_312));
  CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1632F2333,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1634_157) {
  P x_1633_;
  P argF2334;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1633_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1633_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1633_);
    argF2334 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF2334,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1633_);
    a1 = T6;
    x_1633_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1640_158) {
  P x_1639_,x_1638_;
  P argF2337;
  P firstQF2336;
  P tmpF2335;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1639_, 0);
  ARG(x_1638_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1639_);
  tmpF2335 = T3;
  if (tmpF2335 != YPfalse) {
    T4 = tmpF2335;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1638_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1639_);
    firstQF2336 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1638_);
    argF2337 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2336);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF2337,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1639_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1638_);
    a1 = T13;
    a2 = T14;
    x_1639_ = a1;
    x_1638_ = a2;
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

FUNCODEDEF(fun_159) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_160) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_161) {
  P e_,f_,d_,code_out_;
  P x_1640F2345;
  P x_1637F2344;
  P x_1636F2343;
  P x_1635F2342;
  P x_1634F2341;
  P tmpF2340;
  P tmpF2339;
  P bindingF2338;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF2338 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF2339 = T4;
  if (tmpF2339 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    tmpF2340 = T7;
    if (tmpF2340 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2338,T10);
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
    T12 = FUNSHELL(1,fun_x_1634_157,4);
    x_1634F2341 = T12;
    FUNINIT(x_1634F2341, 4,f_,d_,code_out_,x_1634F2341);
    T15 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_1634F2341,T14);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1635F2342 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1635F2342,LITREF(lit_315));
    T18 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
    T17 = CALL1(1,VARREF(YevalSg2cYmangle_module_binding),T18);
    T16 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1635F2342,T17);
    x_1636F2343 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1636F2343,YPchr((P)40));
    x_1637F2344 = code_out_;
    T20 = FUNSHELL(1,fun_x_1640_158,3);
    x_1640F2345 = T20;
    FUNINIT(x_1640F2345, 3,x_1637F2344,code_out_,x_1640F2345);
    T24 = fun_159;
    T25 = fun_160;
    T23 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T24,T25);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
    T27 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T26 = CALL1(1,VARREF(YgooScolsScolYenum),T27);
    T21 = CALL2(0,x_1640F2345,T22,T26);
    T19 = T21;
    T28 = CALL2(1,VARREF(YgooSioSportYput),x_1636F2343,YPchr((P)41));
    T29 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T2 = T29;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_162) {
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

FUNCODEDEF(fun_x_1644_163) {
  P x_1643_;
  P xF2346;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1643_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1643_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1643_);
    xF2346 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF2346,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1643_);
    a1 = T6;
    x_1643_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_164) {
  P e_,f_,d_,code_out_;
  P x_1644F2351;
  P x_1642F2350;
  P x_1641F2349;
  P fF2348;
  P nF2347;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF2347 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTdefinitionsT),T5);
  fF2348 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF2347,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF2348);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_162,3,fF2348,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_319));
    x_1641F2349 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1641F2349,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF2348);
    x_1642F2350 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1642F2350,LITREF(lit_320));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF2347);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1642F2350,T14);
    T15 = FUNSHELL(1,fun_x_1644_163,2);
    x_1644F2351 = T15;
    FUNINIT(x_1644F2351, 2,code_out_,x_1644F2351);
    T18 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    T16 = CALL1(0,x_1644F2351,T17);
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_1641F2349,YPchr((P)41));
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T6 = T20;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_165) {
  P b_,e_,f_,d_,code_out_;
  P x_1647F2356;
  P x_1646F2355;
  P x_1645F2354;
  P fF2353;
  P nF2352;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
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
  nF2352 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTdefinitionsT),T5);
  fF2353 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF2352,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF2353);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_325));
    x_1645F2354 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1645F2354,YPchr((P)40));
    x_1646F2355 = code_out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1646F2355,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_1645F2354,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF2353);
    CALL2(1,VARREF(YgooSioSportYput),x_1645F2354,YPchr((P)44));
    x_1647F2356 = code_out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF2352);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1647F2356,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1645F2354,YPchr((P)41));
    T8 = T15;
  }
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
  T3 = T16;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_166) {
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

FUNCODEDEF(fun_x_1651_167) {
  P x_1650_;
  P xF2357;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1650_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1650_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1650_);
    xF2357 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF2357,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1650_);
    a1 = T6;
    x_1650_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_168) {
  P b_,e_,f_,d_,code_out_;
  P x_1651F2361;
  P x_1649F2360;
  P x_1648F2359;
  P nF2358;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  nF2358 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF2358,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_166,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_327));
    x_1648F2359 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1648F2359,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,code_out_);
    x_1649F2360 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1649F2360,LITREF(lit_328));
    T8 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1649F2360,nF2358);
    T9 = FUNSHELL(1,fun_x_1651_167,2);
    x_1651F2361 = T9;
    FUNINIT(x_1651F2361, 2,code_out_,x_1651F2361);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T10 = CALL1(0,x_1651F2361,T11);
    T13 = CALL2(1,VARREF(YgooSioSportYput),x_1648F2359,YPchr((P)41));
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T3 = T14;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_169) {
  P e_,f_,d_,code_out_;
  P x_1652F2362;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_331));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1652F2362 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1652F2362,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1652F2362,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1652F2362,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1652F2362,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_1656_170) {
  P x_1655_;
  P eF2363;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1655_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1655_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1655_);
    eF2363 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF2363);
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

FUNCODEDEF(fun_out_list_builder_171) {
  P f_,code_out_,elts_;
  P x_1656F2366;
  P x_1654F2365;
  P x_1653F2364;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_334));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_335));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_1653F2364 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1653F2364,YPchr((P)40));
    x_1654F2365 = code_out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1654F2365,T7);
    T9 = FUNSHELL(1,fun_x_1656_170,3);
    x_1656F2366 = T9;
    FUNINIT(x_1656F2366, 3,code_out_,f_,x_1656F2366);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T10 = CALL1(0,x_1656F2366,T11);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_1653F2364,YPchr((P)41));
    T5 = T12;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_172) {
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

FUNCODEDEF(fun_gen_fab_list_173) {
  P code_out_,refs_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_172,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_174) {
  P code_out_,sig_;
  P specsF2368;
  P typesF2367;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF2367 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YevalSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF2367);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF2367,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF2367;
  }
  specsF2368 = T3;
  T9 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,specsF2368);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_175) {
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

FUNCODEDEF(fun_to_c_176) {
  P e_,f_,d_,code_out_;
  P x_1657F2369;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_175,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_342));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_1657F2369 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1657F2369,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1657F2369,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1657F2369,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1657F2369,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1657F2369,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1657F2369,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_343));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1657F2369,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_177) {
  P e_,f_,d_,code_out_;
  P x_1658F2370;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_344));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1658F2370 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1658F2370,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_345));
  CALL2(1,VARREF(YgooSioSportYput),x_1658F2370,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1658F2370,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1658F2370,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_346));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1658F2370,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_347));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1658F2370,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_348));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1658F2370,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_349));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1658F2370,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1660_178) {
  P x_1659_;
  P defF2371;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1659_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1659_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1659_);
    defF2371 = T4;
    CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),FREEREF(0),defF2371);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1659_);
    a1 = T6;
    x_1659_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_179) {
  P code_out_,definitions_;
  P x_1660F2372;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_352));
  T1 = FUNSHELL(1,fun_x_1660_178,2);
  x_1660F2372 = T1;
  FUNINIT(x_1660F2372, 2,code_out_,x_1660F2372);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_1660F2372,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1665_180) {
  P x_1664_,x_1663_;
  P iF2375;
  P firstQF2374;
  P tmpF2373;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1664_, 0);
  ARG(x_1663_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1664_);
  tmpF2373 = T3;
  if (tmpF2373 != YPfalse) {
    T4 = tmpF2373;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1663_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1664_);
    firstQF2374 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1663_);
    iF2375 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2374);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_364));
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

FUNCODEDEF(fun_181) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_182) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_183) {
  P code_out_,defn_;
  P x_1665F2378;
  P x_1662F2377;
  P x_1661F2376;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  x_1661F2376 = code_out_;
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_357);
  } else {
    T0 = LITREF(lit_358);
  }
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1661F2376,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1661F2376,LITREF(lit_359));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_module_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1661F2376,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1661F2376,LITREF(lit_360));
  x_1662F2377 = code_out_;
  T5 = FUNSHELL(1,fun_x_1665_180,3);
  x_1665F2378 = T5;
  FUNINIT(x_1665F2378, 3,x_1662F2377,code_out_,x_1665F2378);
  T9 = fun_181;
  T10 = fun_182;
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL1(1,VARREF(YgooScolsSseqYbelow),T13);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  T6 = CALL2(0,x_1665F2378,T7,T11);
  T4 = T6;
  T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_365));
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_generate_function_binding_184) {
  P code_out_,defn_;
  P x_1667F2383;
  P nameF2382;
  P x_1666F2381;
  P tmpF2380;
  P nameF2379;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF2379 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF2379,VARREF(YevalSastYLmodule_bindingG));
  tmpF2380 = T4;
  if (tmpF2380 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF2379);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_367),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_module_binding),nameF2379);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF2379,YPfalse);
    if (T11 != YPfalse) {
      x_1666F2381 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1666F2381,LITREF(lit_368));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1666F2381,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF2379,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF2379);
        T16 = T18;
      } else {
        T16 = nameF2379;
      }
      nameF2382 = T16;
      x_1667F2383 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1667F2383,LITREF(lit_369));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF2382);
      CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1667F2383,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_1667F2383,LITREF(lit_370));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1667F2383,T22);
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

FUNCODEDEF(fun_generate_function_forward_185) {
  P code_out_,defn_;
  P boundQF2384;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF2384 = T1;
  if (boundQF2384 != YPfalse) {
    T3 = LITREF(lit_371);
  } else {
    T3 = LITREF(lit_372);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_373));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_186) {
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

FUNCODEDEF(fun_generate_function_bodies_187) {
  P code_out_,definitions_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_375));
  T1 = FUNFAB(fun_186,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  P def_;
  P T3,T2,T1,T0;
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

FUNCODEDEF(fun_generate_functions_189) {
  P definitions_,f_,d_,code_out_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_188,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_190) {
  P definition_,f_,d_,code_out_;
  P x_1669F2386;
  P x_1668F2385;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  x_1668F2385 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1668F2385,LITREF(lit_380));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_381));
  T1 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1668F2385,T2);
  x_1669F2386 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1669F2386,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1669F2386,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1669F2386,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1669F2386,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_382));
  CALL2(1,VARREF(YgooSioSportYput),x_1669F2386,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_383));
  CALL2(1,VARREF(YgooSioSportYput),x_1669F2386,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_1669F2386,YPchr((P)41));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_generate_function_body_reference_191) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_385));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_386));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1674_192) {
  P x_1673_,x_1672_,x_1671_;
  P x_1675F2392;
  P bF2391;
  P iF2390;
  P firstQF2389;
  P tmpF2388;
  P tmpF2387;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1673_, 0);
  ARG(x_1672_, 1);
  ARG(x_1671_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1673_);
  tmpF2387 = T3;
  if (tmpF2387 != YPfalse) {
    T4 = tmpF2387;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1672_);
    tmpF2388 = T6;
    if (tmpF2388 != YPfalse) {
      T7 = tmpF2388;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1671_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1673_);
    firstQF2389 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1672_);
    iF2390 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1671_);
    bF2391 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF2389);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    x_1675F2392 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1675F2392,LITREF(lit_394));
    T18 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF2390);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1675F2392,T18);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1673_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1672_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1671_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1673_ = a1;
    x_1672_ = a2;
    x_1671_ = a3;
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

FUNCODEDEF(fun_193) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_194) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_shadow_args_195) {
  P bindings_,code_out_;
  P x_1674F2394;
  P x_1670F2393;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_389));
    x_1670F2393 = code_out_;
    T4 = FUNSHELL(1,fun_x_1674_192,3);
    x_1674F2394 = T4;
    FUNINIT(x_1674F2394, 3,x_1670F2393,code_out_,x_1674F2394);
    T8 = fun_193;
    T9 = fun_194;
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_1674F2394,T6,T10,T12);
    T3 = T5;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
    T0 = T13;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_196) {
  P defn_,d_,code_out_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_396));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_197) {
  P defn_,d_,code_out_;
  P x_1676F2395;
  P T5,T4,T3,T2,T1,T0;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_397));
  x_1676F2395 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1676F2395,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1676F2395,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_198) {
  P e_;
  P bindingF2396;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  bindingF2396 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF2396);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_399),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1682_199) {
  P x_1681_,x_1680_;
  P bindingF2399;
  P firstQF2398;
  P tmpF2397;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1681_, 0);
  ARG(x_1680_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1681_);
  tmpF2397 = T3;
  if (tmpF2397 != YPfalse) {
    T4 = tmpF2397;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1680_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1681_);
    firstQF2398 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1680_);
    bindingF2399 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2398);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_409));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2399,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1681_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1680_);
    a1 = T13;
    a2 = T14;
    x_1681_ = a1;
    x_1680_ = a2;
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

FUNCODEDEF(fun_200) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_201) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_code_202) {
  P code_out_,e_;
  P x_1682F2403;
  P x_1679F2402;
  P x_1678F2401;
  P x_1677F2400;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1677F2400 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1677F2400,LITREF(lit_401));
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_402);
  } else {
    T0 = LITREF(lit_403);
  }
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1677F2400,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_404);
  } else {
    T1 = LITREF(lit_403);
  }
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1677F2400,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1677F2400,LITREF(lit_405));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,code_out_);
  x_1678F2401 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1678F2401,YPchr((P)40));
  x_1679F2402 = code_out_;
  T6 = FUNSHELL(1,fun_x_1682_199,3);
  x_1682F2403 = T6;
  FUNINIT(x_1682F2403, 3,x_1679F2402,code_out_,x_1682F2403);
  T10 = fun_200;
  T11 = fun_201;
  T9 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T10,T11);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T7 = CALL2(0,x_1682F2403,T8,T12);
  T5 = T7;
  T14 = CALL2(1,VARREF(YgooSioSportYput),x_1678F2401,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_410));
  T15 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T15,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T17,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_411));
  T18 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T18,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T19 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_412));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_dispatcherQ_203) {
  P definition_;
  P tmpF2407;
  P nameF2406;
  P tmpF2405;
  P bindingF2404;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF2404 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF2404,VARREF(YevalSastYLmodule_bindingG));
  tmpF2405 = T3;
  if (tmpF2405 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF2404);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF2406 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF2406,LITREF(lit_414));
    tmpF2407 = T9;
    if (tmpF2407 != YPfalse) {
      T10 = tmpF2407;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF2406,LITREF(lit_415));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF2406);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_416));
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

FUNCODEDEF(fun_x_1686_204) {
  P x_1685_,x_1684_;
  P bF2410;
  P firstQF2409;
  P tmpF2408;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1685_, 0);
  ARG(x_1684_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1685_);
  tmpF2408 = T3;
  if (tmpF2408 != YPfalse) {
    T4 = tmpF2408;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1684_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1685_);
    firstQF2409 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1684_);
    bF2410 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2409);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF2410,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1685_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1684_);
    a1 = T13;
    a2 = T14;
    x_1685_ = a1;
    x_1684_ = a2;
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

FUNCODEDEF(fun_205) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_206) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_207) {
  P b_;
  P x_1687F2411;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_424));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_425));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1687F2411 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1687F2411,LITREF(lit_426));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1687F2411,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1687F2411,LITREF(lit_427));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_187));
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

FUNCODEDEF(fun_generate_function_code_208) {
  P code_out_,definition_;
  P x_1686F2415;
  P x_1683F2414;
  P bindingsF2413;
  P offsetF2412;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF2412 = YPint((P)0);
  offsetF2412 = BOXFAB(offsetF2412);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF2413 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_417));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_418));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF2413);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_419));
    x_1683F2414 = code_out_;
    T7 = FUNSHELL(1,fun_x_1686_204,3);
    x_1686F2415 = T7;
    FUNINIT(x_1686F2415, 3,x_1683F2414,code_out_,x_1686F2415);
    T11 = fun_205;
    T12 = fun_206;
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T11,T12);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    T8 = CALL2(0,x_1686F2415,T9,T13);
    T6 = T8;
    T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_187));
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T17,code_out_);
  T18 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T18,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_423));
  T19 = FUNFAB(fun_207,2,code_out_,offsetF2412);
  CALL2(1,VARREF(YgooSmacrosYdo),T19,bindingsF2413);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_428));
  T20 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T20,definition_,YPint((P)1),code_out_);
  T22 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T21 = CALL1(1,VARREF(Ynot),T22);
  if (T21 != YPfalse) {
    T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_429));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_430));
  T2 = T24;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1689_209) {
  P x_1688_;
  P tempF2416;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1688_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1688_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1688_);
    tempF2416 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_435));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF2416,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_187));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1688_);
    a1 = T6;
    x_1688_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_210) {
  P temps_,code_out_;
  P x_1689F2417;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1689_209,2);
  x_1689F2417 = T1;
  FUNINIT(x_1689F2417, 2,code_out_,x_1689F2417);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_1689F2417,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_211) {
  P regs_,i_;
  P tmpF2418;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YevalSg2cYTregisters_per_lineT));
  tmpF2418 = T2;
  if (tmpF2418 != YPfalse) {
    T3 = tmpF2418;
  } else {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),regs_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_441));
    T5 = CALL1(0,FREEREF(1),regs_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    T9 = CALL1(1,VARREF(Yhead),regs_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,FREEREF(0));
    T11 = CALL1(1,VARREF(Ytail),regs_);
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T11;
    a2 = T12;
    regs_ = a1;
    i_ = a2;
    goto loop;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_line_212) {
  P regs_;
  P next_regF2419;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(regs_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),regs_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_439));
    T4 = FUNSHELL(1,fun_next_reg_211,3);
    next_regF2419 = T4;
    FUNINIT(next_regF2419, 3,FREEREF(0),FREEREF(1),next_regF2419);
    T5 = CALL2(0,next_regF2419,regs_,YPint((P)0));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_213) {
  P regs_,code_out_;
  P next_lineF2420;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_next_line_212,2);
  next_lineF2420 = T1;
  FUNINIT(next_lineF2420, 2,code_out_,next_lineF2420);
  T2 = CALL1(0,next_lineF2420,regs_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_214) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_443),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_215) {
  P modname_;
  P x_1690F2421;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1690F2421 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1690F2421,LITREF(lit_446));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1690F2421,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1690F2421,LITREF(lit_447));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_216) {
  P binding_;
  P home_modF2422;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF2422 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF2422);
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
  P maybe_declareF2425;
  P envF2424;
  P seenF2423;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF2423 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF2424 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_215,2);
  maybe_declareF2425 = T5;
  FUNINIT(maybe_declareF2425, 2,seenF2423,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2424);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF2425,T6);
  T9 = FUNFAB(fun_216,2,mod_,maybe_declareF2425);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1692_218) {
  P x_1691_;
  P x_1693F2427;
  P nF2426;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1691_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1691_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1691_);
    nF2426 = T4;
    x_1693F2427 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1693F2427,LITREF(lit_453));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF2426);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1693F2427,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1693F2427,LITREF(lit_454));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1691_);
    a1 = T8;
    x_1691_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_219) {
  P local_name_,binding_;
  P x_1694F2428;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1694F2428 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1694F2428,LITREF(lit_458));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1694F2428,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_1694F2428,LITREF(lit_459));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1694F2428,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1694F2428,LITREF(lit_460));
    T8 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1694F2428,T8);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1694F2428,LITREF(lit_461));
    T3 = T9;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_220) {
  P binding_;
  P x_1696F2430;
  P x_1695F2429;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_86));
    if (T3 != YPfalse) {
      x_1695F2429 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1695F2429,LITREF(lit_464));
      T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T6 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T7);
      CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1695F2429,T6);
      CALL2(1,VARREF(YgooSioSportYputs),x_1695F2429,LITREF(lit_465));
      T8 = CALL1(1,VARREF(YevalSg2cYmangle_module_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1695F2429,T8);
      T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1695F2429,LITREF(lit_466));
      T5 = T9;
      T2 = T5;
    } else {
      x_1696F2430 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1696F2430,LITREF(lit_467));
      T12 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
      CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1696F2430,T11);
      T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1696F2430,LITREF(lit_468));
      T10 = T13;
      T2 = T10;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1698_221) {
  P x_1697_;
  P x_1699F2434;
  P bindingF2433;
  P exported_asF2432;
  P tup33F2431;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_1697_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1697_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1697_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1697_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup33F2431 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F2431,YPint((P)0));
    exported_asF2432 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F2431,YPint((P)1));
    bindingF2433 = T10;
    x_1699F2434 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1699F2434,LITREF(lit_473));
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF2433);
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1699F2434,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1699F2434,LITREF(lit_474));
    T13 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF2432);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1699F2434,T13);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1699F2434,LITREF(lit_475));
    T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1697_);
    a1 = T16;
    x_1697_ = a1;
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
  P x_1702F2444;
  P x_1701F2443;
  P x_1700F2442;
  P x_1698F2441;
  P x_1692F2440;
  P uses_namesF2439;
  P usesF2438;
  P envF2437;
  P info_nameF2436;
  P nameF2435;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF2435 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF2435);
  info_nameF2436 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF2437 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2437);
  usesF2438 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF2438);
  uses_namesF2439 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_449));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_450));
  T10 = FUNSHELL(1,fun_x_1692_218,2);
  x_1692F2440 = T10;
  FUNINIT(x_1692F2440, 2,code_out_,x_1692F2440);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2439);
  T11 = CALL1(0,x_1692F2440,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_455));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_456));
  T13 = FUNFAB(fun_219,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_462));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_463));
  T15 = FUNFAB(fun_220,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_469));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_470));
  T17 = FUNSHELL(1,fun_x_1698_221,2);
  x_1698F2441 = T17;
  FUNINIT(x_1698F2441, 2,code_out_,x_1698F2441);
  T20 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_1698F2441,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_476));
  x_1700F2442 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1700F2442,LITREF(lit_477));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1700F2442,info_nameF2436);
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1700F2442,LITREF(lit_478));
  x_1701F2443 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1701F2443,LITREF(lit_479));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1701F2443,info_nameF2436);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1701F2443,LITREF(lit_480));
  x_1702F2444 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1702F2444,LITREF(lit_481));
  T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF2435);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1702F2444,T23);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1702F2444,LITREF(lit_482));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_483));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_484));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_485));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_486));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_487));
  T25 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_488));
  T8 = T25;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_223) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_490),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_224) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_492),T1,LITREF(lit_493));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1704_225) {
  P x_1703_;
  P x_1705F2446;
  P nF2445;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1703_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1703_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1703_);
    nF2445 = T4;
    x_1705F2446 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1705F2446,LITREF(lit_500));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF2445);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1705F2446,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1705F2446,LITREF(lit_501));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1703_);
    a1 = T8;
    x_1703_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1709_226) {
  P x_1708_;
  P x_1710F2448;
  P nF2447;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1708_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1708_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1708_);
    nF2447 = T4;
    x_1710F2448 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1710F2448,LITREF(lit_511));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF2447);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1710F2448,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1710F2448,LITREF(lit_512));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1708_);
    a1 = T8;
    x_1708_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_227) {
  P code_out_,mod_,form_;
  P x_1709F2457;
  P x_1707F2456;
  P x_1706F2455;
  P x_1704F2454;
  P uses_namesF2453;
  P usesF2452;
  P envF2451;
  P init_declF2450;
  P nameF2449;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_496);
  } else {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF2449 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF2449);
  init_declF2450 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF2451 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2451);
  usesF2452 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF2452);
  uses_namesF2453 = T10;
  T11 = CALL1(1,VARREF(Ynot),VARREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_497));
    T13 = FUNSHELL(1,fun_x_1704_225,2);
    x_1704F2454 = T13;
    FUNINIT(x_1704F2454, 2,code_out_,x_1704F2454);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2453);
    T14 = CALL1(0,x_1704F2454,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_502));
  x_1706F2455 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1706F2455,LITREF(lit_503));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1706F2455,init_declF2450);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1706F2455,LITREF(lit_504));
  x_1707F2456 = code_out_;
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1707F2456,init_declF2450);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1707F2456,LITREF(lit_505));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_506));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_507));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_508));
  T18 = CALL1(1,VARREF(Ynot),VARREF(YevalSg2cYTdynamic_linkingQT));
  if (T18 != YPfalse) {
    T19 = FUNSHELL(1,fun_x_1709_226,2);
    x_1709F2457 = T19;
    FUNINIT(x_1709F2457, 2,code_out_,x_1709F2457);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2453);
    T20 = CALL1(0,x_1709F2457,T21);
    T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_513));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_514));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_515));
  T9 = T23;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_228) {
  P code_out_,mod_;
  P x_1715F2464;
  P x_1714F2463;
  P x_1713F2462;
  P x_1712F2461;
  P x_1711F2460;
  P info_nameF2459;
  P nameF2458;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF2458 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF2458);
  info_nameF2459 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_517));
  x_1711F2460 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1711F2460,LITREF(lit_518));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1711F2460,info_nameF2459);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1711F2460,LITREF(lit_519));
  x_1712F2461 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1712F2461,LITREF(lit_520));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF2458);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1712F2461,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1712F2461,LITREF(lit_521));
  x_1713F2462 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1713F2462,LITREF(lit_522));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1713F2462,info_nameF2459);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1713F2462,LITREF(lit_523));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_524));
  x_1714F2463 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1714F2463,LITREF(lit_525));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_526));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1714F2463,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1714F2463,LITREF(lit_527));
  x_1715F2464 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1715F2464,LITREF(lit_528));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF2458);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1715F2464,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1715F2464,LITREF(lit_529));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_530));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_531));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSg2cY___main_0___() {
  P T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159;
  P T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143;
  P T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127;
  P T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111;
  P T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95;
  P T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  VARSET(YevalSg2cYTdefinitionsT,YPfalse);
  VARSET(YevalSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPmet(FUNCODEREF(fun_module_loader_appname_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSg2cYmodule_loader_appname);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSg2cYmodule_loader_appname);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_module_loader_appname_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  lit_3 = YPPsym((P)"module-loader-appname-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_setter_1 = YPmet(FUNCODEREF(fun_module_loader_appname_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSg2cYmodule_loader_appname_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSg2cYmodule_loader_appname_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_module_loader_appname_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSg2cYmodule_loader_appname_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),VARREF(YevalSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"module-loader-app-modname");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_2 = YPmet(FUNCODEREF(fun_module_loader_app_modname_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSg2cYmodule_loader_app_modname);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSg2cYmodule_loader_app_modname);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_module_loader_app_modname_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSg2cYmodule_loader_app_modname,T13);
  lit_6 = YPPsym((P)"module-loader-app-modname-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLsymG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_setter_3 = YPmet(FUNCODEREF(fun_module_loader_app_modname_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalSg2cYmodule_loader_app_modname_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSg2cYmodule_loader_app_modname_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_module_loader_app_modname_setter_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSg2cYmodule_loader_app_modname_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),VARREF(YevalSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"<g2c-module>");
  T23 = (P)YPpair(VARREF(YevalSastYLmoduleG),Ynil);
  T22 = CALL2(1,VARREF(Yfab_class),LITREF(lit_7),T23);
  VARSET(YevalSg2cYLg2c_moduleG,T22);
  lit_8 = YPPsym((P)"module-src-file");
  T24 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_4 = YPmet(FUNCODEREF(fun_module_src_file_4),LITREF(lit_8),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSg2cYmodule_src_file);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSg2cYmodule_src_file);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_module_src_file_4;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSg2cYmodule_src_file,T25);
  lit_9 = YPPsym((P)"module-src-file-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_5 = YPmet(FUNCODEREF(fun_module_src_file_setter_5),LITREF(lit_9),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSg2cYmodule_src_file_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSg2cYmodule_src_file_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_module_src_file_setter_5;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSg2cYmodule_src_file_setter,T30);
  CALLN(1,VARREF(YPprop),5,VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  T34 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_6 = YPmet(FUNCODEREF(fun_module_mtime_6),LITREF(lit_10),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YevalSg2cYmodule_mtime);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSg2cYmodule_mtime);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_module_mtime_6;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSg2cYmodule_mtime,T35);
  lit_11 = YPPsym((P)"module-mtime-setter");
  T39 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_7 = YPmet(FUNCODEREF(fun_module_mtime_setter_7),LITREF(lit_11),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSg2cYmodule_mtime_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSg2cYmodule_mtime_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_module_mtime_setter_7;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSg2cYmodule_mtime_setter,T40);
  CALLN(1,VARREF(YPprop),5,VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"module-loader-module-type");
  lit_13 = YPPsym((P)"loader");
  T44 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_8 = YPmet(FUNCODEREF(fun_module_loader_module_type_8),LITREF(lit_12),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_module_loader_module_type_8;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYmodule_loader_module_type,T45);
  lit_14 = YPPsym((P)"load-module");
  lit_15 = YPPsym((P)"name");
  T53 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_15)),YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_13 = YPmet(FUNCODEREF(fun_load_module_13),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YevalSastYload_module);
  if (T56 != YPfalse) {
    T55 = VARREF(YevalSastYload_module);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_load_module_13;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YevalSastYload_module,T54);
  lit_16 = YPPsym((P)"module-up-to-date?");
  lit_17 = YPPsym((P)"mod");
  T58 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_16),T58,ENVNUL,PNUL,YPfalse);
  T59 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T59);
  lit_18 = YPPsym((P)"purge-outdated-modules");
  lit_19 = YPsb((P)" has changed.\n");
  T62 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_18),T60,ENVNUL,PNUL,YPfalse);
  T63 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T63);
  lit_20 = YPPsym((P)"g2c-def-app");
  lit_21 = YPPsym((P)"appname");
  lit_22 = YPPsym((P)"modname");
  T64 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_22)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_20),T64,ENVNUL,PNUL,YPfalse);
  T65 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T65);
  lit_23 = YPPsym((P)"g2c-build-app");
  lit_24 = YPsb((P)"Searching for undefined global bindings.\n");
  T66 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_23),T66,ENVNUL,PNUL,YPfalse);
  T67 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T67);
  lit_25 = YPPsym((P)"g2c-test");
  lit_26 = YPPsym((P)"x");
  lit_27 = YPsb((P)"g2c-");
  lit_28 = YPPsym((P)"eval/main");
  T68 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_25),T68,ENVNUL,PNUL,YPfalse);
  T69 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T69);
  VARSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_29 = YPPsym((P)"g2c-ast");
  lit_30 = YPPsym((P)"ast");
  lit_31 = YPPsym((P)"env");
  lit_32 = YPsb((P)"exp-%d-%d");
  T76 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_27 = YPmet(FUNCODEREF(fun_g2c_ast_27),LITREF(lit_29),T70,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSg2cYg2c_ast);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSg2cYg2c_ast);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_g2c_ast_27;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSg2cYg2c_ast,T77);
  lit_33 = YPPsym((P)"g2c-exp");
  lit_34 = YPPsym((P)"exp");
  T81 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_28 = YPmet(FUNCODEREF(fun_g2c_exp_28),LITREF(lit_33),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSg2cYg2c_exp);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSg2cYg2c_exp);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_g2c_exp_28;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSg2cYg2c_exp,T82);
  lit_35 = YPPsym((P)"compile-load");
  T86 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_29 = YPmet(FUNCODEREF(fun_compile_load_29),LITREF(lit_35),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YevalSg2cYcompile_load);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSg2cYcompile_load);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_compile_load_29;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSg2cYcompile_load,T87);
  lit_36 = YPPsym((P)"so-load");
  T91 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_so_load_30 = YPmet(FUNCODEREF(fun_so_load_30),LITREF(lit_36),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSg2cYso_load);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSg2cYso_load);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_so_load_30;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSg2cYso_load,T92);
  lit_37 = YPPsym((P)"g2c-eval");
  T96 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_37),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalStopYg2c_eval);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalStopYg2c_eval);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_g2c_eval_31;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalStopYg2c_eval,T97);
  T101 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_37),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalStopYg2c_eval);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalStopYg2c_eval);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_g2c_eval_32;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalStopYg2c_eval,T102);
  lit_38 = YPsb((P)"g2c");
  T106 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_38),LITREF(lit_28));
  VARSET(YevalSg2cYTg2c_appT,T106);
  lit_39 = YPPsym((P)"g2c-top");
  T107 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_39),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSg2cYg2c_top);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSg2cYg2c_top);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_g2c_top_33;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSg2cYg2c_top,T108);
  lit_40 = YPPsym((P)"g2c-clean");
  lit_41 = YPsb((P)"g2c");
  T112 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_40),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSg2cYg2c_clean);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSg2cYg2c_clean);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_g2c_clean_34;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSg2cYg2c_clean,T113);
  lit_42 = YPPsym((P)"compute-ast");
  lit_43 = YPPsym((P)"filename");
  lit_44 = YPPsym((P)"ct-env");
  T117 = YPsig(YPPlist(2,LITREF(lit_43),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_42),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSg2cYcompute_ast);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSg2cYcompute_ast);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_compute_ast_35;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSg2cYcompute_ast,T118);
  lit_45 = YPPsym((P)"compute-program");
  lit_46 = YPPsym((P)"e");
  T122 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_45),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYcompute_program);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYcompute_program);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_compute_program_36;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYcompute_program,T123);
  lit_47 = YPPsym((P)"generate-c-module");
  lit_48 = YPPsym((P)"code-out");
  lit_49 = YPPsym((P)"prg");
  T127 = YPsig(YPPlist(4,LITREF(lit_48),LITREF(lit_46),LITREF(lit_49),LITREF(lit_17)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_47),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYgenerate_c_module);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYgenerate_c_module);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_generate_c_module_37;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYgenerate_c_module,T128);
  lit_50 = YPPsym((P)"generate-c-application");
  lit_51 = YPsb((P)"-init");
  T134 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_17)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_50),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSg2cYgenerate_c_application);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSg2cYgenerate_c_application);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_generate_c_application_40;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSg2cYgenerate_c_application,T135);
  lit_52 = YPPsym((P)"generate-makefile");
  lit_53 = YPsb((P)"-init");
  lit_54 = YPsb((P)"Makefile");
  lit_55 = YPsb((P)"include ..");
  lit_56 = YPsb((P)"Make.inc\n");
  lit_57 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_58 = YPsb((P)"%,$(C_OBJS))\n");
  lit_59 = YPsb((P)": ..");
  lit_60 = YPsb((P)"grt.h\n");
  lit_61 = YPsb((P)"\t$(CC) -I.. -c -g -O -o $@ $<\n\n");
  lit_62 = YPsb((P)"OBJS = \\\n");
  lit_63 = YPsb((P)"\t");
  lit_64 = YPsb((P)" \\\n");
  lit_65 = YPsb((P)"\t");
  lit_66 = YPsb((P)"\n\n");
  lit_67 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_68 = YPsb((P)"\t$(CC) -Wl,--export-dynamic -o ");
  lit_69 = YPsb((P)" $(C_OBJS_DD) $(LIBS) $(OBJS)\n\n");
  lit_70 = YPsb((P)"clean:\n\trm -f ");
  lit_71 = YPsb((P)" $(OBJS)\n");
  T142 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_44 = YPmet(FUNCODEREF(fun_generate_makefile_44),LITREF(lit_52),T139,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YevalSg2cYgenerate_makefile);
  if (T145 != YPfalse) {
    T144 = VARREF(YevalSg2cYgenerate_makefile);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_generate_makefile_44;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YevalSg2cYgenerate_makefile,T143);
  lit_72 = YPPsym((P)"pp");
  T147 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_45 = YPmet(FUNCODEREF(fun_pp_45),LITREF(lit_72),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YevalSg2cYpp);
  if (T150 != YPfalse) {
    T149 = VARREF(YevalSg2cYpp);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_pp_45;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YevalSg2cYpp,T148);
  lit_73 = YPPsym((P)"generate-header");
  lit_74 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_75 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_76 = YPsb((P)"#include \"dlgrt.h\"\n");
  T152 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_46 = YPmet(FUNCODEREF(fun_generate_header_46),LITREF(lit_73),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSg2cYgenerate_header);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSg2cYgenerate_header);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_generate_header_46;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSg2cYgenerate_header,T153);
  lit_77 = YPPsym((P)"generate-trailer");
  lit_78 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T157 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_47 = YPmet(FUNCODEREF(fun_generate_trailer_47),LITREF(lit_77),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSg2cYgenerate_trailer);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSg2cYgenerate_trailer);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_generate_trailer_47;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSg2cYgenerate_trailer,T158);
  lit_79 = YPPsym((P)"generate-global-environment");
  lit_80 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_81 = YPsb((P)" */\n\n");
  lit_82 = YPPsym((P)"binding");
  T163 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_49 = YPmet(FUNCODEREF(fun_generate_global_environment_49),LITREF(lit_79),T162,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YevalSg2cYgenerate_global_environment);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSg2cYgenerate_global_environment);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_generate_global_environment_49;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSg2cYgenerate_global_environment,T164);
  lit_83 = YPPsym((P)"generate-global-binding");
  lit_84 = YPPsym((P)"imported?");
  lit_85 = YPPsym((P)"gb");
  lit_86 = YPPsym((P)"global");
  lit_87 = YPPsym((P)"runtime");
  lit_88 = YPsb((P)"EXT");
  lit_89 = YPsb((P)"DEF");
  lit_90 = YPsb((P)"(");
  lit_91 = YPsb((P)",\"");
  lit_92 = YPsb((P)"\",\"");
  lit_93 = YPsb((P)"\");\n");
  T168 = YPsig(YPPlist(3,LITREF(lit_48),LITREF(lit_84),LITREF(lit_85)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_50 = YPmet(FUNCODEREF(fun_generate_global_binding_50),LITREF(lit_83),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSg2cYgenerate_global_binding);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSg2cYgenerate_global_binding);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_generate_global_binding_50;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSg2cYgenerate_global_binding,T169);
  lit_94 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_94));
  lit_95 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_95));
  lit_96 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_96));
  lit_97 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_97));
  lit_98 = YPsb((P)"I");
  T174 = VARSET(YevalSg2cYDiep_suffix,LITREF(lit_98));
  T173 = T174;
  return T173;
}

P YevalSg2cY___main_1___() {
  P x_1541F2470;
  P x_1539F2469;
  P x_1537F2468;
  P x_1535F2467;
  P tableF2466;
  P vecF2465;
  P T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271;
  P T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255;
  P T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239;
  P T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223;
  P T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207;
  P T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191;
  P T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175;
  P T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159;
  P T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143;
  P T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127;
  P T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111;
  P T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95;
  P T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_99 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_99));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T0);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T1);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T3);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T4);
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T5);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T6 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T6);
  lit_100 = CALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_101 = CALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_102 = CALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_103 = CALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_104 = CALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_105 = CALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_106 = CALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_107 = CALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_108 = CALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_109 = CALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_110 = CALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_111 = CALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_112 = CALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_113 = CALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_114 = CALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_115 = CALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_116 = CALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_117 = CALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T7 = CALLN(1,VARREF(Ytup),18,LITREF(lit_100),LITREF(lit_101),LITREF(lit_102),LITREF(lit_103),LITREF(lit_104),LITREF(lit_105),LITREF(lit_106),LITREF(lit_107),LITREF(lit_108),LITREF(lit_109),LITREF(lit_110),LITREF(lit_111),LITREF(lit_112),LITREF(lit_113),LITREF(lit_114),LITREF(lit_115),LITREF(lit_116),LITREF(lit_117));
  VARSET(YevalSg2cYDmangles_data,T7);
  lit_118 = YPPsym((P)"char-buffer-as-string");
  lit_119 = YPPsym((P)"buffer");
  lit_120 = YPPsym((P)"loop");
  lit_121 = YPPsym((P)"i");
  T9 = YPsig(YPPlist(1,LITREF(lit_121)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_51 = YPmet(FUNCODEREF(fun_loop_51),LITREF(lit_120),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_119)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_118),T8,ENVNUL,PNUL,YPfalse);
  T10 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T10);
  lit_122 = YPsb((P)"\\t");
  lit_123 = YPsb((P)"\\f");
  lit_124 = YPsb((P)"\\r");
  lit_125 = YPsb((P)"\\n");
  lit_126 = YPsb((P)"\\\"");
  lit_127 = YPsb((P)"\\\\");
  T13 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T12 = CALL2(1,VARREF(YgooScolsScolYfill),T13,YPfalse);
  vecF2465 = T12;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_122),vecF2465,T14);
  T15 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_123),vecF2465,T15);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_124),vecF2465,T16);
  T17 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_125),vecF2465,T17);
  T18 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_126),vecF2465,T18);
  T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_127),vecF2465,T19);
  T20 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF2465);
  T11 = T20;
  VARSET(YevalSg2cYDc_escapes,T11);
  lit_128 = YPPsym((P)"mangle-string-literal");
  lit_129 = YPPsym((P)"str");
  T22 = YPsig(YPPlist(1,LITREF(lit_121)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_53 = YPmet(FUNCODEREF(fun_loop_53),LITREF(lit_120),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_129)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_54 = YPmet(FUNCODEREF(fun_mangle_string_literal_54),LITREF(lit_128),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_mangle_string_literal_54;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSg2cYmangle_string_literal,T23);
  lit_130 = YPPsym((P)"sym");
  T27 = YPsig(YPPlist(1,LITREF(lit_130)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_55 = YPmet(FUNCODEREF(fun_mangle_string_literal_55),LITREF(lit_128),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_mangle_string_literal_55;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSg2cYmangle_string_literal,T28);
  lit_131 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_131));
  lit_132 = YPPsym((P)"mangle-integer");
  lit_133 = YPPsym((P)"number");
  lit_134 = YPPsym((P)"process-integer");
  lit_135 = YPPsym((P)"index");
  T33 = YPsig(YPPlist(2,LITREF(lit_133),LITREF(lit_135)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_56 = YPmet(FUNCODEREF(fun_process_integer_56),LITREF(lit_134),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_57 = YPmet(FUNCODEREF(fun_mangle_integer_57),LITREF(lit_132),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSg2cYmangle_integer);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSg2cYmangle_integer);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_mangle_integer_57;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSg2cYmangle_integer,T34);
  lit_136 = YPPsym((P)"x-1535");
  lit_137 = YPPsym((P)"x-1534");
  lit_138 = YPPsym((P)"x-1537");
  lit_139 = YPPsym((P)"x-1536");
  lit_140 = YPPsym((P)"x-1539");
  lit_141 = YPPsym((P)"x-1538");
  lit_142 = YPPsym((P)"x-1541");
  lit_143 = YPPsym((P)"x-1540");
  T41 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1535_58 = YPmet(FUNCODEREF(fun_x_1535_58),LITREF(lit_136),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1537_59 = YPmet(FUNCODEREF(fun_x_1537_59),LITREF(lit_138),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_141)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1539_60 = YPmet(FUNCODEREF(fun_x_1539_60),LITREF(lit_140),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1541_61 = YPmet(FUNCODEREF(fun_x_1541_61),LITREF(lit_142),T38,ENVNUL,PNUL,YPfalse);
  T44 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T43 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T44);
  tableF2466 = T43;
  T45 = FUNSHELL(1,fun_x_1535_58,2);
  x_1535F2467 = T45;
  FUNINIT(x_1535F2467, 2,tableF2466,x_1535F2467);
  T48 = CALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T47 = CALL1(1,VARREF(YgooScolsScolYenum),T48);
  T46 = CALL1(0,x_1535F2467,T47);
  T49 = FUNSHELL(1,fun_x_1537_59,2);
  x_1537F2468 = T49;
  FUNINIT(x_1537F2468, 2,tableF2466,x_1537F2468);
  T51 = CALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  T50 = CALL1(0,x_1537F2468,T51);
  T52 = FUNSHELL(1,fun_x_1539_60,2);
  x_1539F2469 = T52;
  FUNINIT(x_1539F2469, 2,tableF2466,x_1539F2469);
  T56 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T57 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T55 = CALL3(1,VARREF(YgooScolsSrangeYrange),T56,VARREF(YgooSmagYLE),T57);
  T54 = CALL1(1,VARREF(YgooScolsScolYenum),T55);
  T53 = CALL1(0,x_1539F2469,T54);
  T58 = FUNSHELL(1,fun_x_1541_61,2);
  x_1541F2470 = T58;
  FUNINIT(x_1541F2470, 2,tableF2466,x_1541F2470);
  T62 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T63 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T61 = CALL3(1,VARREF(YgooScolsSrangeYrange),T62,VARREF(YgooSmagYLE),T63);
  T60 = CALL1(1,VARREF(YgooScolsScolYenum),T61);
  T59 = CALL1(0,x_1541F2470,T60);
  T42 = tableF2466;
  VARSET(YevalSg2cYDname_mangler_table,T42);
  lit_144 = YPPsym((P)"mangler-reset");
  T64 = YPsig(YPPlist(1,LITREF(lit_119)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_144),T64,ENVNUL,PNUL,YPfalse);
  T65 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T65);
  lit_145 = YPPsym((P)"mangle-name-into");
  lit_146 = YPPsym((P)"buf");
  lit_147 = YPPsym((P)"x-1543");
  lit_148 = YPPsym((P)"x-1542");
  T67 = YPsig(YPPlist(1,LITREF(lit_148)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1543_63 = YPmet(FUNCODEREF(fun_x_1543_63),LITREF(lit_147),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(2,LITREF(lit_146),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_145),T66,ENVNUL,PNUL,YPfalse);
  T68 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T68);
  lit_149 = YPPsym((P)"mangle-raw-name");
  T69 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_65 = YPmet(FUNCODEREF(fun_mangle_raw_name_65),LITREF(lit_149),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_mangle_raw_name_65;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSg2cYmangle_raw_name,T70);
  T74 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_66 = YPmet(FUNCODEREF(fun_mangle_raw_name_66),LITREF(lit_149),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_mangle_raw_name_66;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSg2cYmangle_raw_name,T75);
  lit_150 = YPPsym((P)"mangle-local-name");
  T79 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_67 = YPmet(FUNCODEREF(fun_mangle_local_name_67),LITREF(lit_150),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_mangle_local_name_67;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSg2cYmangle_local_name,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_68 = YPmet(FUNCODEREF(fun_mangle_local_name_68),LITREF(lit_150),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_mangle_local_name_68;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSg2cYmangle_local_name,T85);
  lit_151 = YPPsym((P)"mangle-global-name");
  T89 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_15)),YPPlist(2,VARREF(YLsymG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_69 = YPmet(FUNCODEREF(fun_mangle_global_name_69),LITREF(lit_151),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T92 != YPfalse) {
    T91 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_mangle_global_name_69;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YevalSg2cYmangle_global_name,T90);
  T94 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_15)),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_70 = YPmet(FUNCODEREF(fun_mangle_global_name_70),LITREF(lit_151),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_mangle_global_name_70;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSg2cYmangle_global_name,T95);
  lit_152 = YPPsym((P)"mangle-boot-name");
  T99 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_boot_name_71 = YPmet(FUNCODEREF(fun_mangle_boot_name_71),LITREF(lit_152),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YevalSg2cYmangle_boot_name);
  if (T102 != YPfalse) {
    T101 = VARREF(YevalSg2cYmangle_boot_name);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_mangle_boot_name_71;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YevalSg2cYmangle_boot_name,T100);
  lit_153 = YPPsym((P)"mangle-module-binding");
  T104 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_module_binding_72 = YPmet(FUNCODEREF(fun_mangle_module_binding_72),LITREF(lit_153),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YevalSg2cYmangle_module_binding);
  if (T107 != YPfalse) {
    T106 = VARREF(YevalSg2cYmangle_module_binding);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_mangle_module_binding_72;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YevalSg2cYmangle_module_binding,T105);
  lit_154 = YPPsym((P)"mangle-local-marked-name");
  lit_155 = YPPsym((P)"marker");
  T109 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_155)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_local_marked_name_73 = YPmet(FUNCODEREF(fun_mangle_local_marked_name_73),LITREF(lit_154),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YevalSg2cYmangle_local_marked_name);
  if (T112 != YPfalse) {
    T111 = VARREF(YevalSg2cYmangle_local_marked_name);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_mangle_local_marked_name_73;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YevalSg2cYmangle_local_marked_name,T110);
  T114 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_155)),YPPlist(2,VARREF(YLsymG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_local_marked_name_74 = YPmet(FUNCODEREF(fun_mangle_local_marked_name_74),LITREF(lit_154),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSg2cYmangle_local_marked_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSg2cYmangle_local_marked_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_mangle_local_marked_name_74;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSg2cYmangle_local_marked_name,T115);
  lit_156 = YPPsym((P)"return");
  lit_157 = YPPsym((P)"x-1547");
  lit_158 = YPPsym((P)"msg");
  lit_159 = YPPsym((P)"args");
  lit_160 = YPPsym((P)"for-commas");
  lit_161 = YPsb((P)"Match Pattern Failure");
  lit_162 = YPPsym((P)"let");
  lit_163 = YPPsym((P)"for");
  lit_164 = YPPsym((P)"first?");
  lit_165 = YPPsym((P)"first-then");
  lit_166 = YPPsym((P)"op");
  lit_167 = YPPsym((P)"unless");
  lit_168 = YPPsym((P)"put");
  T121 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_159)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1547_75 = YPmet(FUNCODEREF(fun_x_1547_75),LITREF(lit_157),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T122 = fun_77;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T122);
  lit_169 = YPPsym((P)"x-1551");
  lit_170 = YPPsym((P)"between-parentheses");
  T125 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_159)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1551_78 = YPmet(FUNCODEREF(fun_x_1551_78),LITREF(lit_169),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T126 = fun_80;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T126);
  lit_171 = YPPsym((P)"x-1555");
  lit_172 = YPPsym((P)"between-parentheses-comma-separated");
  lit_173 = YPPsym((P)"forms");
  lit_174 = YPPsym((P)"body");
  T130 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_159)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1555_81 = YPmet(FUNCODEREF(fun_x_1555_81),LITREF(lit_171),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(3,LITREF(lit_173),LITREF(lit_174),LITREF(lit_164)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_82 = YPmet(FUNCODEREF(fun_loop_82),LITREF(lit_120),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T131 = fun_84;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T131);
  lit_175 = YPPsym((P)"gen-result");
  lit_176 = YPPsym((P)"d");
  lit_177 = YPsb((P)"T");
  lit_178 = YPsb((P)" = ");
  T132 = YPsig(YPPlist(3,LITREF(lit_46),LITREF(lit_176),LITREF(lit_48)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_85 = YPmet(FUNCODEREF(fun_gen_result_85),LITREF(lit_175),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSg2cYgen_result);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSg2cYgen_result);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_gen_result_85;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSg2cYgen_result,T133);
  lit_179 = YPPsym((P)"gen-depth");
  lit_180 = YPPsym((P)"x-1558");
  lit_181 = YPPsym((P)"x-1557");
  lit_182 = YPsb((P)"  ");
  T138 = YPsig(YPPlist(1,LITREF(lit_181)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1558_86 = YPmet(FUNCODEREF(fun_x_1558_86),LITREF(lit_180),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(2,LITREF(lit_176),LITREF(lit_48)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_87 = YPmet(FUNCODEREF(fun_gen_depth_87),LITREF(lit_179),T137,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YevalSg2cYgen_depth);
  if (T141 != YPfalse) {
    T140 = VARREF(YevalSg2cYgen_depth);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_gen_depth_87;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YevalSg2cYgen_depth,T139);
  lit_183 = YPPsym((P)"x-1562");
  lit_184 = YPPsym((P)"with-statement");
  lit_185 = YPPsym((P)"seq");
  lit_186 = YPPsym((P)"puts");
  lit_187 = YPsb((P)";\n");
  T145 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_159)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1562_88 = YPmet(FUNCODEREF(fun_x_1562_88),LITREF(lit_183),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T146 = fun_90;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T146);
  lit_188 = YPPsym((P)"x-1566");
  lit_189 = YPPsym((P)"with-expression");
  T149 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_159)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1566_91 = YPmet(FUNCODEREF(fun_x_1566_91),LITREF(lit_188),T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T150 = fun_93;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T150);
  lit_190 = YPPsym((P)"x-1570");
  lit_191 = YPPsym((P)"with-used-expression");
  lit_192 = YPPsym((P)"when");
  lit_193 = YPPsym((P)"program-register");
  T153 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_159)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1570_94 = YPmet(FUNCODEREF(fun_x_1570_94),LITREF(lit_190),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T154 = fun_96;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T154);
  lit_194 = YPPsym((P)"generate-quotation-forwards");
  lit_195 = YPPsym((P)"qb*");
  lit_196 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_197 = YPPsym((P)"x-1572");
  lit_198 = YPPsym((P)"x-1571");
  lit_199 = YPsb((P)"DEFLIT(lit_");
  lit_200 = YPsb((P)");\n");
  T156 = YPsig(YPPlist(1,LITREF(lit_198)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1572_97 = YPmet(FUNCODEREF(fun_x_1572_97),LITREF(lit_197),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_195)),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_98 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_98),LITREF(lit_194),T155,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSg2cYgenerate_quotation_forwards);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSg2cYgenerate_quotation_forwards);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_generate_quotation_forwards_98;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T157);
  lit_201 = YPPsym((P)"generate-quotations");
  lit_202 = YPPsym((P)"x-1575");
  lit_203 = YPPsym((P)"x-1574");
  lit_204 = YPsb((P)"lit_");
  lit_205 = YPsb((P)" = ");
  T162 = YPsig(YPPlist(1,LITREF(lit_203)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1575_99 = YPmet(FUNCODEREF(fun_x_1575_99),LITREF(lit_202),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_195)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_100 = YPmet(FUNCODEREF(fun_generate_quotations_100),LITREF(lit_201),T161,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSg2cYgenerate_quotations);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSg2cYgenerate_quotations);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_generate_quotations_100;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSg2cYgenerate_quotations,T163);
  lit_206 = YPPsym((P)"false-name");
  lit_207 = YPsb((P)"%false");
  T167 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_101 = YPmet(FUNCODEREF(fun_false_name_101),LITREF(lit_206),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSg2cYfalse_name);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYfalse_name);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_false_name_101;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYfalse_name,T168);
  lit_208 = YPPsym((P)"generate-quotation");
  lit_209 = YPPsym((P)"qb");
  lit_210 = YPsb((P)"%true");
  lit_211 = YPsb((P)"%false");
  T172 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_209)),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_102 = YPmet(FUNCODEREF(fun_generate_quotation_102),LITREF(lit_208),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_generate_quotation_102;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSg2cYgenerate_quotation,T173);
  lit_212 = YPsb((P)"nil");
  T178 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T177 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_209)),YPPlist(2,VARREF(YLanyG),T178),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_103 = YPmet(FUNCODEREF(fun_generate_quotation_103),LITREF(lit_208),T177,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_generate_quotation_103;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSg2cYgenerate_quotation,T179);
  T184 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_209)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_105 = YPmet(FUNCODEREF(fun_generate_quotation_105),LITREF(lit_208),T183,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_generate_quotation_105;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSg2cYgenerate_quotation,T185);
  lit_213 = YPsb((P)"%int");
  lit_214 = YPsb((P)"((P)");
  lit_215 = YPsb((P)")");
  T189 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_106 = YPmet(FUNCODEREF(fun_generate_quotation_106),LITREF(lit_208),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_generate_quotation_106;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSg2cYgenerate_quotation,T190);
  lit_216 = YPsb((P)"%chr");
  lit_217 = YPsb((P)"((P)");
  lit_218 = YPsb((P)")");
  T194 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_107 = YPmet(FUNCODEREF(fun_generate_quotation_107),LITREF(lit_208),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_generate_quotation_107;
  T195 = CALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalSg2cYgenerate_quotation,T195);
  lit_219 = YPPsym((P)"float-to-c-string");
  lit_220 = YPPsym((P)"o");
  lit_221 = YPPsym((P)"done");
  T201 = YPsig(YPPlist(1,LITREF(lit_121)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_108 = YPmet(FUNCODEREF(fun_loop_108),LITREF(lit_120),T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(1,LITREF(lit_221)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(1,LITREF(lit_220)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_110 = YPmet(FUNCODEREF(fun_float_to_c_string_110),LITREF(lit_219),T199,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSg2cYfloat_to_c_string);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSg2cYfloat_to_c_string);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_float_to_c_string_110;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSg2cYfloat_to_c_string,T202);
  lit_222 = YPsb((P)"%flo");
  lit_223 = YPsb((P)"(FLOINT(");
  lit_224 = YPsb((P)"))");
  T206 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_111 = YPmet(FUNCODEREF(fun_generate_quotation_111),LITREF(lit_208),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_generate_quotation_111;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSg2cYgenerate_quotation,T207);
  lit_225 = YPsb((P)"%sb");
  lit_226 = YPsb((P)"((P)\"");
  lit_227 = YPsb((P)"\")");
  T211 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPmet(FUNCODEREF(fun_generate_quotation_112),LITREF(lit_208),T211,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T214 != YPfalse) {
    T213 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_generate_quotation_112;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YevalSg2cYgenerate_quotation,T212);
  lit_228 = YPsb((P)"CALLN(1, ");
  lit_229 = YPsb((P)"vec");
  lit_230 = YPsb((P)", ");
  lit_231 = YPPsym((P)"x-1585");
  lit_232 = YPPsym((P)"x-1584");
  lit_233 = YPsb((P)", ");
  lit_234 = YPsb((P)")");
  T217 = YPsig(YPPlist(1,LITREF(lit_232)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1585_113 = YPmet(FUNCODEREF(fun_x_1585_113),LITREF(lit_231),T217,ENVNUL,PNUL,YPfalse);
  T216 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_208),T216,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_generate_quotation_114;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSg2cYgenerate_quotation,T218);
  lit_235 = YPsb((P)"CALLN(1, ");
  lit_236 = YPsb((P)"tup");
  lit_237 = YPsb((P)", ");
  lit_238 = YPPsym((P)"x-1588");
  lit_239 = YPPsym((P)"x-1587");
  lit_240 = YPsb((P)", ");
  lit_241 = YPsb((P)")");
  T223 = YPsig(YPPlist(1,LITREF(lit_239)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1588_115 = YPmet(FUNCODEREF(fun_x_1588_115),LITREF(lit_238),T223,ENVNUL,PNUL,YPfalse);
  T222 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_116 = YPmet(FUNCODEREF(fun_generate_quotation_116),LITREF(lit_208),T222,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T226 != YPfalse) {
    T225 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_generate_quotation_116;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YevalSg2cYgenerate_quotation,T224);
  lit_242 = YPsb((P)"%%sym");
  lit_243 = YPsb((P)"((P)\"");
  lit_244 = YPsb((P)"\")");
  T228 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_117 = YPmet(FUNCODEREF(fun_generate_quotation_117),LITREF(lit_208),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T231 != YPfalse) {
    T230 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_generate_quotation_117;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YevalSg2cYgenerate_quotation,T229);
  lit_245 = YPPsym((P)"binding->c");
  T234 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T233 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_245),T234,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYbinding_Gc,T233);
  lit_246 = YPPsym((P)"quotation");
  lit_247 = YPsb((P)"lit_");
  T235 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_118 = YPmet(FUNCODEREF(fun_binding_Gc_118),LITREF(lit_245),T235,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(YevalSg2cYbinding_Gc);
  if (T238 != YPfalse) {
    T237 = VARREF(YevalSg2cYbinding_Gc);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_binding_Gc_118;
  T236 = CALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(YevalSg2cYbinding_Gc,T236);
  T240 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_119 = YPmet(FUNCODEREF(fun_binding_Gc_119),LITREF(lit_245),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(YevalSg2cYbinding_Gc);
  if (T243 != YPfalse) {
    T242 = VARREF(YevalSg2cYbinding_Gc);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_binding_Gc_119;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(YevalSg2cYbinding_Gc,T241);
  T245 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_48)),YPPlist(2,VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_120 = YPmet(FUNCODEREF(fun_binding_Gc_120),LITREF(lit_245),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YevalSg2cYbinding_Gc);
  if (T248 != YPfalse) {
    T247 = VARREF(YevalSg2cYbinding_Gc);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_binding_Gc_120;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YevalSg2cYbinding_Gc,T246);
  lit_248 = YPPsym((P)"reference->c");
  lit_249 = YPPsym((P)"v");
  T251 = YPsig(YPPlist(2,LITREF(lit_249),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T250 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_248),T251,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T250);
  T252 = YPsig(YPPlist(2,LITREF(lit_249),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_121 = YPmet(FUNCODEREF(fun_reference_Gc_121),LITREF(lit_248),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YevalSg2cYreference_Gc);
  if (T255 != YPfalse) {
    T254 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_reference_Gc_121;
  T253 = CALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YevalSg2cYreference_Gc,T253);
  lit_250 = YPsb((P)"LITREF");
  lit_251 = YPsb((P)"VARREF");
  T257 = YPsig(YPPlist(2,LITREF(lit_249),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_122 = YPmet(FUNCODEREF(fun_reference_Gc_122),LITREF(lit_248),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YevalSg2cYreference_Gc);
  if (T260 != YPfalse) {
    T259 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_reference_Gc_122;
  T258 = CALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YevalSg2cYreference_Gc,T258);
  lit_252 = YPPsym((P)"to-c");
  lit_253 = YPPsym((P)"f");
  T263 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T262 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_252),T263,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T262);
  T264 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_123 = YPmet(FUNCODEREF(fun_to_c_123),LITREF(lit_252),T264,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(YevalSg2cYto_c);
  if (T267 != YPfalse) {
    T266 = VARREF(YevalSg2cYto_c);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_to_c_123;
  T265 = CALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YevalSg2cYto_c,T265);
  T269 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_124 = YPmet(FUNCODEREF(fun_to_c_124),LITREF(lit_252),T269,ENVNUL,PNUL,YPfalse);
  T272 = BOUNDP(YevalSg2cYto_c);
  if (T272 != YPfalse) {
    T271 = VARREF(YevalSg2cYto_c);
  } else {
    T271 = YPfalse;
  }
  T273 = fun_to_c_124;
  T270 = CALL2(1,VARREF(YPdefine_method),T271,T273);
  VARSET(YevalSg2cYto_c,T270);
  lit_254 = YPPsym((P)"gen-ref");
  T274 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_125 = YPmet(FUNCODEREF(fun_gen_ref_125),LITREF(lit_254),T274,ENVNUL,PNUL,YPfalse);
  T277 = BOUNDP(YevalSg2cYgen_ref);
  if (T277 != YPfalse) {
    T276 = VARREF(YevalSg2cYgen_ref);
  } else {
    T276 = YPfalse;
  }
  T278 = fun_gen_ref_125;
  T275 = CALL2(1,VARREF(YPdefine_method),T276,T278);
  VARSET(YevalSg2cYgen_ref,T275);
  lit_255 = YPsb((P)"FREEREF");
  T281 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T280 = fun_gen_ref_126 = YPmet(FUNCODEREF(fun_gen_ref_126),LITREF(lit_254),T281,ENVNUL,PNUL,YPfalse);
  T285 = BOUNDP(YevalSg2cYgen_ref);
  if (T285 != YPfalse) {
    T284 = VARREF(YevalSg2cYgen_ref);
  } else {
    T284 = YPfalse;
  }
  T286 = fun_gen_ref_126;
  T283 = CALL2(1,VARREF(YPdefine_method),T284,T286);
  T282 = VARSET(YevalSg2cYgen_ref,T283);
  T279 = T282;
  return T279;
}

P YevalSg2cY___main_2___() {
  P T308,T307,T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293;
  P T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277;
  P T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261;
  P T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245;
  P T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229;
  P T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213;
  P T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197;
  P T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181;
  P T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165;
  P T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149;
  P T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133;
  P T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117;
  P T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101;
  P T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85;
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_256 = YPsb((P)"T");
  lit_257 = YPsb((P)"T_1");
  T0 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_127 = YPmet(FUNCODEREF(fun_gen_ref_127),LITREF(lit_254),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_127;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_258 = YPsb((P)"(P)");
  T5 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_128 = YPmet(FUNCODEREF(fun_gen_ref_128),LITREF(lit_254),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_128;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSg2cYgen_ref,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_129 = YPmet(FUNCODEREF(fun_gen_ref_129),LITREF(lit_254),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSg2cYgen_ref);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSg2cYgen_ref);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_gen_ref_129;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSg2cYgen_ref,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_130 = YPmet(FUNCODEREF(fun_gen_ref_130),LITREF(lit_254),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSg2cYgen_ref);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSg2cYgen_ref);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_gen_ref_130;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSg2cYgen_ref,T16);
  lit_259 = YPsb((P)"VARSET(");
  lit_260 = YPsb((P)",");
  lit_261 = YPsb((P)")");
  T20 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_131 = YPmet(FUNCODEREF(fun_to_c_131),LITREF(lit_252),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSg2cYto_c);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYto_c);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_to_c_131;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYto_c,T21);
  lit_262 = YPsb((P)"BOUNDP");
  T25 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_132 = YPmet(FUNCODEREF(fun_to_c_132),LITREF(lit_252),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_132;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYto_c,T26);
  lit_263 = YPsb((P)"BOXVAL");
  T30 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_133 = YPmet(FUNCODEREF(fun_to_c_133),LITREF(lit_252),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_133;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSg2cYto_c,T31);
  lit_264 = YPsb((P)"BOXVAL");
  lit_265 = YPsb((P)" = ");
  T35 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_134 = YPmet(FUNCODEREF(fun_to_c_134),LITREF(lit_252),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_134;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSg2cYto_c,T36);
  lit_266 = YPsb((P)" = BOXFAB");
  T40 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_135 = YPmet(FUNCODEREF(fun_to_c_135),LITREF(lit_252),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSg2cYto_c);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSg2cYto_c);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_to_c_135;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSg2cYto_c,T41);
  lit_267 = YPsb((P)"if (");
  lit_268 = YPsb((P)" != ");
  lit_269 = YPsb((P)") {\n");
  lit_270 = YPsb((P)"} else {\n");
  lit_271 = YPsb((P)"}\n");
  T45 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPmet(FUNCODEREF(fun_to_c_136),LITREF(lit_252),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSg2cYto_c);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSg2cYto_c);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_to_c_136;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSg2cYto_c,T46);
  T51 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_138 = YPmet(FUNCODEREF(fun_to_c_138),LITREF(lit_252),T50,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSg2cYto_c);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSg2cYto_c);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_to_c_138;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSg2cYto_c,T52);
  lit_272 = YPPsym((P)"generate-self-recursive-call");
  lit_273 = YPPsym((P)"x-1602");
  lit_274 = YPPsym((P)"x-1601");
  lit_275 = YPPsym((P)"x-1605");
  lit_276 = YPPsym((P)"x-1604");
  lit_277 = YPPsym((P)"x-1603");
  lit_278 = YPsb((P)"a");
  lit_279 = YPsb((P)" = ");
  lit_280 = YPPsym((P)"x-1609");
  lit_281 = YPPsym((P)"x-1608");
  lit_282 = YPPsym((P)"x-1607");
  lit_283 = YPsb((P)" = a");
  lit_284 = YPsb((P)"goto loop");
  T59 = YPsig(YPPlist(1,LITREF(lit_274)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1602_139 = YPmet(FUNCODEREF(fun_x_1602_139),LITREF(lit_273),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(2,LITREF(lit_276),LITREF(lit_277)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1605_140 = YPmet(FUNCODEREF(fun_x_1605_140),LITREF(lit_275),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(2,LITREF(lit_281),LITREF(lit_282)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1609_141 = YPmet(FUNCODEREF(fun_x_1609_141),LITREF(lit_280),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_142 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_142),LITREF(lit_272),T56,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YevalSg2cYgenerate_self_recursive_call);
  if (T62 != YPfalse) {
    T61 = VARREF(YevalSg2cYgenerate_self_recursive_call);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_generate_self_recursive_call_142;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YevalSg2cYgenerate_self_recursive_call,T60);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)4));
  lit_285 = YPPsym((P)"x-1612");
  lit_286 = YPPsym((P)"x-1611");
  lit_287 = YPsb((P)"CALL");
  lit_288 = YPsb((P)"N");
  lit_289 = YPsb((P)"0,");
  lit_290 = YPsb((P)"1,");
  lit_291 = YPsb((P)",");
  lit_292 = YPPsym((P)"x-1617");
  lit_293 = YPPsym((P)"x-1616");
  T66 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1612_143 = YPmet(FUNCODEREF(fun_x_1612_143),LITREF(lit_285),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_293)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1617_144 = YPmet(FUNCODEREF(fun_x_1617_144),LITREF(lit_292),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_145 = YPmet(FUNCODEREF(fun_to_c_145),LITREF(lit_252),T64,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSg2cYto_c);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSg2cYto_c);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_to_c_145;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSg2cYto_c,T67);
  lit_294 = YPPsym((P)"x-1621");
  lit_295 = YPPsym((P)"x-1620");
  lit_296 = YPPsym((P)"x-1619");
  T74 = YPsig(YPPlist(2,LITREF(lit_295),LITREF(lit_296)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1621_146 = YPmet(FUNCODEREF(fun_x_1621_146),LITREF(lit_294),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_148 = YPmet(FUNCODEREF(fun_148),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPmet(FUNCODEREF(fun_to_c_149),LITREF(lit_252),T71,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSg2cYto_c);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSg2cYto_c);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_to_c_149;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSg2cYto_c,T75);
  lit_297 = YPPsym((P)"x-1625");
  lit_298 = YPPsym((P)"x-1624");
  lit_299 = YPPsym((P)"x-1623");
  lit_300 = YPPsym((P)"x-1622");
  lit_301 = YPsb((P)"check_type");
  lit_302 = YPsb((P)" = ");
  T80 = YPsig(YPPlist(3,LITREF(lit_298),LITREF(lit_299),LITREF(lit_300)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1625_150 = YPmet(FUNCODEREF(fun_x_1625_150),LITREF(lit_297),T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPmet(FUNCODEREF(fun_to_c_151),LITREF(lit_252),T79,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSg2cYto_c);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSg2cYto_c);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_to_c_151;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSg2cYto_c,T81);
  lit_303 = YPPsym((P)"x-1629");
  lit_304 = YPPsym((P)"x-1628");
  lit_305 = YPPsym((P)"x-1627");
  lit_306 = YPsb((P)" = ");
  T86 = YPsig(YPPlist(2,LITREF(lit_304),LITREF(lit_305)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1629_152 = YPmet(FUNCODEREF(fun_x_1629_152),LITREF(lit_303),T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_153 = YPmet(FUNCODEREF(fun_to_c_153),LITREF(lit_252),T85,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YevalSg2cYto_c);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSg2cYto_c);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_to_c_153;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSg2cYto_c,T87);
  lit_307 = YPsb((P)"with_exit");
  T91 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_252),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSg2cYto_c);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSg2cYto_c);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_to_c_154;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSg2cYto_c,T92);
  lit_308 = YPsb((P)"with_cleanup");
  T96 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_155 = YPmet(FUNCODEREF(fun_to_c_155),LITREF(lit_252),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_155;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYto_c,T97);
  lit_309 = YPsb((P)"CALLN");
  lit_310 = YPsb((P)"1");
  lit_311 = YPsb((P)"%with-monitor");
  lit_312 = YPsb((P)"5");
  T101 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_156 = YPmet(FUNCODEREF(fun_to_c_156),LITREF(lit_252),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYto_c);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYto_c);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_to_c_156;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYto_c,T102);
  lit_313 = YPPsym((P)"x-1634");
  lit_314 = YPPsym((P)"x-1633");
  lit_315 = YPsb((P)"(P)");
  lit_316 = YPPsym((P)"x-1640");
  lit_317 = YPPsym((P)"x-1639");
  lit_318 = YPPsym((P)"x-1638");
  T110 = YPsig(YPPlist(1,LITREF(lit_314)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1634_157 = YPmet(FUNCODEREF(fun_x_1634_157),LITREF(lit_313),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_317),LITREF(lit_318)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1640_158 = YPmet(FUNCODEREF(fun_x_1640_158),LITREF(lit_316),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_159 = YPmet(FUNCODEREF(fun_159),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_161 = YPmet(FUNCODEREF(fun_to_c_161),LITREF(lit_252),T106,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSg2cYto_c);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSg2cYto_c);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_to_c_161;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSg2cYto_c,T111);
  lit_319 = YPsb((P)"FUNFAB");
  lit_320 = YPsb((P)",");
  lit_321 = YPPsym((P)"x-1644");
  lit_322 = YPPsym((P)"x-1643");
  T117 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_162 = YPmet(FUNCODEREF(fun_162),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_322)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1644_163 = YPmet(FUNCODEREF(fun_x_1644_163),LITREF(lit_321),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_164 = YPmet(FUNCODEREF(fun_to_c_164),LITREF(lit_252),T115,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSg2cYto_c);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSg2cYto_c);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_to_c_164;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSg2cYto_c,T118);
  lit_323 = YPPsym((P)"funshell-to-c");
  lit_324 = YPPsym((P)"b");
  lit_325 = YPsb((P)"FUNSHELL");
  T122 = YPsig(YPPlist(5,LITREF(lit_324),LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_165 = YPmet(FUNCODEREF(fun_funshell_to_c_165),LITREF(lit_323),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYfunshell_to_c);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYfunshell_to_c);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_funshell_to_c_165;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYfunshell_to_c,T123);
  lit_326 = YPPsym((P)"funinit-to-c");
  lit_327 = YPsb((P)"FUNINIT");
  lit_328 = YPsb((P)", ");
  lit_329 = YPPsym((P)"x-1651");
  lit_330 = YPPsym((P)"x-1650");
  T129 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_330)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1651_167 = YPmet(FUNCODEREF(fun_x_1651_167),LITREF(lit_329),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(5,LITREF(lit_324),LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_168 = YPmet(FUNCODEREF(fun_funinit_to_c_168),LITREF(lit_326),T127,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSg2cYfuninit_to_c);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSg2cYfuninit_to_c);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_funinit_to_c_168;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSg2cYfuninit_to_c,T130);
  lit_331 = YPsb((P)"%macro");
  T134 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPmet(FUNCODEREF(fun_to_c_169),LITREF(lit_252),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSg2cYto_c);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSg2cYto_c);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_to_c_169;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSg2cYto_c,T135);
  lit_332 = YPPsym((P)"out-list-builder");
  lit_333 = YPPsym((P)"elts");
  lit_334 = YPsb((P)"nil");
  lit_335 = YPsb((P)"%%list");
  lit_336 = YPPsym((P)"x-1656");
  lit_337 = YPPsym((P)"x-1655");
  T140 = YPsig(YPPlist(1,LITREF(lit_337)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1656_170 = YPmet(FUNCODEREF(fun_x_1656_170),LITREF(lit_336),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(3,LITREF(lit_253),LITREF(lit_48),LITREF(lit_333)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_171 = YPmet(FUNCODEREF(fun_out_list_builder_171),LITREF(lit_332),T139,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSg2cYout_list_builder);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSg2cYout_list_builder);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_out_list_builder_171;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSg2cYout_list_builder,T141);
  lit_338 = YPPsym((P)"gen-fab-list");
  lit_339 = YPPsym((P)"refs");
  T146 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_339)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_173 = YPmet(FUNCODEREF(fun_gen_fab_list_173),LITREF(lit_338),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSg2cYgen_fab_list);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSg2cYgen_fab_list);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_gen_fab_list_173;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSg2cYgen_fab_list,T147);
  lit_340 = YPPsym((P)"generate-function-specs");
  lit_341 = YPPsym((P)"sig");
  T151 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_341)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_174 = YPmet(FUNCODEREF(fun_generate_function_specs_174),LITREF(lit_340),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgenerate_function_specs);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgenerate_function_specs);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_generate_function_specs_174;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgenerate_function_specs,T152);
  lit_342 = YPsb((P)"%sig");
  lit_343 = YPsb((P)"nil");
  T157 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_176 = YPmet(FUNCODEREF(fun_to_c_176),LITREF(lit_252),T156,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSg2cYto_c);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSg2cYto_c);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_to_c_176;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSg2cYto_c,T158);
  lit_344 = YPsb((P)"%gen");
  lit_345 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_346 = YPsb((P)"nil");
  lit_347 = YPsb((P)"%false");
  lit_348 = YPsb((P)"%false");
  lit_349 = YPsb((P)"%false");
  T162 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_177 = YPmet(FUNCODEREF(fun_to_c_177),LITREF(lit_252),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSg2cYto_c);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSg2cYto_c);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_to_c_177;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSg2cYto_c,T163);
  lit_350 = YPPsym((P)"generate-function-forwards");
  lit_351 = YPPsym((P)"definitions");
  lit_352 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_353 = YPPsym((P)"x-1660");
  lit_354 = YPPsym((P)"x-1659");
  T168 = YPsig(YPPlist(1,LITREF(lit_354)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1660_178 = YPmet(FUNCODEREF(fun_x_1660_178),LITREF(lit_353),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_351)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_179 = YPmet(FUNCODEREF(fun_generate_function_forwards_179),LITREF(lit_350),T167,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSg2cYgenerate_function_forwards);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSg2cYgenerate_function_forwards);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_generate_function_forwards_179;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSg2cYgenerate_function_forwards,T169);
  lit_355 = YPPsym((P)"generate-function-forward");
  lit_356 = YPPsym((P)"defn");
  lit_357 = YPsb((P)"static");
  lit_358 = YPsb((P)"extern");
  lit_359 = YPsb((P)" P ");
  lit_360 = YPsb((P)" (");
  lit_361 = YPPsym((P)"x-1665");
  lit_362 = YPPsym((P)"x-1664");
  lit_363 = YPPsym((P)"x-1663");
  lit_364 = YPsb((P)"P");
  lit_365 = YPsb((P)");\n");
  T176 = YPsig(YPPlist(2,LITREF(lit_362),LITREF(lit_363)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1665_180 = YPmet(FUNCODEREF(fun_x_1665_180),LITREF(lit_361),T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_356)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_183 = YPmet(FUNCODEREF(fun_generate_function_forward_183),LITREF(lit_355),T173,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_generate_function_forward_183;
  T177 = CALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSg2cYgenerate_function_forward,T177);
  lit_366 = YPPsym((P)"generate-function-binding");
  lit_367 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_368 = YPsb((P)"fun_");
  lit_369 = YPsb((P)"fun_");
  lit_370 = YPsb((P)"_");
  T181 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_356)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_184 = YPmet(FUNCODEREF(fun_generate_function_binding_184),LITREF(lit_366),T181,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSg2cYgenerate_function_binding);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSg2cYgenerate_function_binding);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_generate_function_binding_184;
  T182 = CALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSg2cYgenerate_function_binding,T182);
  lit_371 = YPsb((P)"FUNFOR(");
  lit_372 = YPsb((P)"LOCFOR(");
  lit_373 = YPsb((P)");\n");
  T186 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_356)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_185 = YPmet(FUNCODEREF(fun_generate_function_forward_185),LITREF(lit_355),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_generate_function_forward_185;
  T187 = CALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSg2cYgenerate_function_forward,T187);
  lit_374 = YPPsym((P)"generate-function-bodies");
  lit_375 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_376 = YPPsym((P)"def");
  T192 = YPsig(YPPlist(1,LITREF(lit_376)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T192,ENVNUL,PNUL,YPfalse);
  T191 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_351)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_187 = YPmet(FUNCODEREF(fun_generate_function_bodies_187),LITREF(lit_374),T191,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YevalSg2cYgenerate_function_bodies);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSg2cYgenerate_function_bodies);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_generate_function_bodies_187;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSg2cYgenerate_function_bodies,T193);
  lit_377 = YPPsym((P)"generate-functions");
  T198 = YPsig(YPPlist(1,LITREF(lit_376)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(4,LITREF(lit_351),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_189 = YPmet(FUNCODEREF(fun_generate_functions_189),LITREF(lit_377),T197,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSg2cYgenerate_functions);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSg2cYgenerate_functions);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_generate_functions_189;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSg2cYgenerate_functions,T199);
  lit_378 = YPPsym((P)"generate-closure-structure");
  lit_379 = YPPsym((P)"definition");
  lit_380 = YPsb((P)" = ");
  lit_381 = YPsb((P)"%met");
  lit_382 = YPsb((P)"ENVNUL");
  lit_383 = YPsb((P)"PNUL");
  T203 = YPsig(YPPlist(4,LITREF(lit_379),LITREF(lit_253),LITREF(lit_176),LITREF(lit_48)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_190 = YPmet(FUNCODEREF(fun_generate_closure_structure_190),LITREF(lit_378),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSg2cYgenerate_closure_structure);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSg2cYgenerate_closure_structure);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_closure_structure_190;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSg2cYgenerate_closure_structure,T204);
  lit_384 = YPPsym((P)"generate-function-body-reference");
  lit_385 = YPsb((P)"FUNCODEREF(");
  lit_386 = YPsb((P)")");
  T208 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_379)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_191 = YPmet(FUNCODEREF(fun_generate_function_body_reference_191),LITREF(lit_384),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSg2cYgenerate_function_body_reference);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSg2cYgenerate_function_body_reference);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_generate_function_body_reference_191;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSg2cYgenerate_function_body_reference,T209);
  lit_387 = YPPsym((P)"generate-shadow-args");
  lit_388 = YPPsym((P)"bindings");
  lit_389 = YPsb((P)"P ");
  lit_390 = YPPsym((P)"x-1674");
  lit_391 = YPPsym((P)"x-1673");
  lit_392 = YPPsym((P)"x-1672");
  lit_393 = YPPsym((P)"x-1671");
  lit_394 = YPsb((P)"a");
  T216 = YPsig(YPPlist(3,LITREF(lit_391),LITREF(lit_392),LITREF(lit_393)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1674_192 = YPmet(FUNCODEREF(fun_x_1674_192),LITREF(lit_390),T216,ENVNUL,PNUL,YPfalse);
  T215 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T215,ENVNUL,PNUL,YPfalse);
  T214 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(2,LITREF(lit_388),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_195 = YPmet(FUNCODEREF(fun_generate_shadow_args_195),LITREF(lit_387),T213,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YevalSg2cYgenerate_shadow_args);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSg2cYgenerate_shadow_args);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_generate_shadow_args_195;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YevalSg2cYgenerate_shadow_args,T217);
  lit_395 = YPPsym((P)"generate-return");
  lit_396 = YPsb((P)"return ");
  T221 = YPsig(YPPlist(3,LITREF(lit_356),LITREF(lit_176),LITREF(lit_48)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_196 = YPmet(FUNCODEREF(fun_generate_return_196),LITREF(lit_395),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YevalSg2cYgenerate_return);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_return_196;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSg2cYgenerate_return,T222);
  lit_397 = YPsb((P)"RET");
  T226 = YPsig(YPPlist(3,LITREF(lit_356),LITREF(lit_176),LITREF(lit_48)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_197 = YPmet(FUNCODEREF(fun_generate_return_197),LITREF(lit_395),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YevalSg2cYgenerate_return);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_generate_return_197;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSg2cYgenerate_return,T227);
  lit_398 = YPPsym((P)"primitive-inlinable?");
  lit_399 = YPPlist(41,YPPsym((P)"%tag-bits"),YPPsym((P)"%tag"),YPPsym((P)"%untag"),YPPsym((P)"%class-of"),YPPsym((P)"%int"),YPPsym((P)"%ib"),YPPsym((P)"%iu"),YPPsym((P)"%chr"),YPPsym((P)"%cb"),YPPsym((P)"%cu"),YPPsym((P)"%loc"),YPPsym((P)"%lb"),YPPsym((P)"%lu"),YPPsym((P)"%empty?"),YPPsym((P)"%head"),YPPsym((P)"%tail"),YPPsym((P)"@empty?"),YPPsym((P)"@head"),YPPsym((P)"@tail"),YPPsym((P)"@=="),YPPsym((P)"@="),YPPsym((P)"@+"),YPPsym((P)"@<"),YPPsym((P)"%gen-cache-arg-pos"),YPPsym((P)"%gen-cache-singletons"),YPPsym((P)"%gen-cache-classes"),YPPsym((P)"%gen-cache-missable?"),YPPsym((P)"@telt"),YPPsym((P)"@telt-setter"),YPPsym((P)"@oelt"),YPPsym((P)"@oelt-setter"),YPPsym((P)"@olen"),YPPsym((P)"%opts-location"),YPPsym((P)"%opts-count"),YPPsym((P)"%class-ancestors"),YPPsym((P)"@class-in?"),YPPsym((P)"@subclass?"),YPPsym((P)"prop-value-at"),YPPsym((P)"prop-value-at-setter"),YPPsym((P)"gen-lookup"),YPPsym((P)"gen-lookup-1-using"));
  T231 = YPsig(YPPlist(1,LITREF(lit_46)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_198 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_198),LITREF(lit_398),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YevalSg2cYprimitive_inlinableQ);
  if (T234 != YPfalse) {
    T233 = VARREF(YevalSg2cYprimitive_inlinableQ);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_primitive_inlinableQ_198;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YevalSg2cYprimitive_inlinableQ,T232);
  lit_400 = YPPsym((P)"generate-function-code");
  lit_401 = YPsb((P)"\n");
  lit_402 = YPsb((P)"static ");
  lit_403 = YPsb((P)"");
  lit_404 = YPsb((P)"INLINE ");
  lit_405 = YPsb((P)"P ");
  lit_406 = YPPsym((P)"x-1682");
  lit_407 = YPPsym((P)"x-1681");
  lit_408 = YPPsym((P)"x-1680");
  lit_409 = YPsb((P)"P ");
  lit_410 = YPsb((P)" {\n");
  lit_411 = YPsb((P)"loop:\n");
  lit_412 = YPsb((P)"}\n");
  T239 = YPsig(YPPlist(2,LITREF(lit_407),LITREF(lit_408)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1682_199 = YPmet(FUNCODEREF(fun_x_1682_199),LITREF(lit_406),T239,ENVNUL,PNUL,YPfalse);
  T238 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T238,ENVNUL,PNUL,YPfalse);
  T237 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T237,ENVNUL,PNUL,YPfalse);
  T236 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_202 = YPmet(FUNCODEREF(fun_generate_function_code_202),LITREF(lit_400),T236,ENVNUL,PNUL,YPfalse);
  T242 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T242 != YPfalse) {
    T241 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_generate_function_code_202;
  T240 = CALL2(1,VARREF(YPdefine_method),T241,T243);
  VARSET(YevalSg2cYgenerate_function_code,T240);
  lit_413 = YPPsym((P)"dispatcher?");
  lit_414 = YPsb((P)"%dispatch");
  lit_415 = YPsb((P)"-dispatch");
  lit_416 = YPsb((P)"-dispatch");
  T244 = YPsig(YPPlist(1,LITREF(lit_379)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_203 = YPmet(FUNCODEREF(fun_dispatcherQ_203),LITREF(lit_413),T244,ENVNUL,PNUL,YPfalse);
  T247 = BOUNDP(YevalSg2cYdispatcherQ);
  if (T247 != YPfalse) {
    T246 = VARREF(YevalSg2cYdispatcherQ);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_dispatcherQ_203;
  T245 = CALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(YevalSg2cYdispatcherQ,T245);
  lit_417 = YPsb((P)"\nFUNCODEDEF(");
  lit_418 = YPsb((P)") {\n");
  lit_419 = YPsb((P)"P ");
  lit_420 = YPPsym((P)"x-1686");
  lit_421 = YPPsym((P)"x-1685");
  lit_422 = YPPsym((P)"x-1684");
  lit_423 = YPsb((P)"LINK_STACK();\n");
  lit_424 = YPsb((P)"NARGS(");
  lit_425 = YPsb((P)"ARG(");
  lit_426 = YPsb((P)", ");
  lit_427 = YPsb((P)")");
  lit_428 = YPsb((P)"loop:\n");
  lit_429 = YPsb((P)"UNLINK_STACK();\n");
  lit_430 = YPsb((P)"}\n");
  T253 = YPsig(YPPlist(2,LITREF(lit_421),LITREF(lit_422)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1686_204 = YPmet(FUNCODEREF(fun_x_1686_204),LITREF(lit_420),T253,ENVNUL,PNUL,YPfalse);
  T252 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T252,ENVNUL,PNUL,YPfalse);
  T251 = YPsig(YPPlist(1,LITREF(lit_26)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T251,ENVNUL,PNUL,YPfalse);
  T250 = YPsig(YPPlist(1,LITREF(lit_324)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T250,ENVNUL,PNUL,YPfalse);
  T249 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_379)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_208 = YPmet(FUNCODEREF(fun_generate_function_code_208),LITREF(lit_400),T249,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T256 != YPfalse) {
    T255 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_generate_function_code_208;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YevalSg2cYgenerate_function_code,T254);
  lit_431 = YPPsym((P)"generate-local-temporaries");
  lit_432 = YPPsym((P)"temps");
  lit_433 = YPPsym((P)"x-1689");
  lit_434 = YPPsym((P)"x-1688");
  lit_435 = YPsb((P)"P ");
  T259 = YPsig(YPPlist(1,LITREF(lit_434)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1689_209 = YPmet(FUNCODEREF(fun_x_1689_209),LITREF(lit_433),T259,ENVNUL,PNUL,YPfalse);
  T258 = YPsig(YPPlist(2,LITREF(lit_432),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_210 = YPmet(FUNCODEREF(fun_generate_local_temporaries_210),LITREF(lit_431),T258,ENVNUL,PNUL,YPfalse);
  T262 = BOUNDP(YevalSg2cYgenerate_local_temporaries);
  if (T262 != YPfalse) {
    T261 = VARREF(YevalSg2cYgenerate_local_temporaries);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_generate_local_temporaries_210;
  T260 = CALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(YevalSg2cYgenerate_local_temporaries,T260);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_436 = YPPsym((P)"generate-registers");
  lit_437 = YPPsym((P)"regs");
  lit_438 = YPPsym((P)"next-line");
  lit_439 = YPsb((P)"P ");
  lit_440 = YPPsym((P)"next-reg");
  lit_441 = YPsb((P)";\n");
  T266 = YPsig(YPPlist(2,LITREF(lit_437),LITREF(lit_121)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_211 = YPmet(FUNCODEREF(fun_next_reg_211),LITREF(lit_440),T266,ENVNUL,PNUL,YPfalse);
  T265 = YPsig(YPPlist(1,LITREF(lit_437)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_212 = YPmet(FUNCODEREF(fun_next_line_212),LITREF(lit_438),T265,ENVNUL,PNUL,YPfalse);
  T264 = YPsig(YPPlist(2,LITREF(lit_437),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_213 = YPmet(FUNCODEREF(fun_generate_registers_213),LITREF(lit_436),T264,ENVNUL,PNUL,YPfalse);
  T269 = BOUNDP(YevalSg2cYgenerate_registers);
  if (T269 != YPfalse) {
    T268 = VARREF(YevalSg2cYgenerate_registers);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_generate_registers_213;
  T267 = CALL2(1,VARREF(YPdefine_method),T268,T270);
  VARSET(YevalSg2cYgenerate_registers,T267);
  lit_442 = YPPsym((P)"module-info-name");
  lit_443 = YPsb((P)"module_info_");
  T271 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_214 = YPmet(FUNCODEREF(fun_module_info_name_214),LITREF(lit_442),T271,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YevalSg2cYmodule_info_name);
  if (T274 != YPfalse) {
    T273 = VARREF(YevalSg2cYmodule_info_name);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_module_info_name_214;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  VARSET(YevalSg2cYmodule_info_name,T272);
  lit_444 = YPPsym((P)"declare-imported-module-infos");
  lit_445 = YPPsym((P)"maybe-declare");
  lit_446 = YPsb((P)"extern MODULE_INFO ");
  lit_447 = YPsb((P)";\n");
  T278 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_215 = YPmet(FUNCODEREF(fun_maybe_declare_215),LITREF(lit_445),T278,ENVNUL,PNUL,YPfalse);
  T277 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T277,ENVNUL,PNUL,YPfalse);
  T276 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_444),T276,ENVNUL,PNUL,YPfalse);
  T279 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T279);
  lit_448 = YPPsym((P)"generate-module-info");
  lit_449 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_450 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_451 = YPPsym((P)"x-1692");
  lit_452 = YPPsym((P)"x-1691");
  lit_453 = YPsb((P)"  {&");
  lit_454 = YPsb((P)"},\n");
  lit_455 = YPsb((P)"  {NULL}\n};\n");
  lit_456 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_457 = YPPsym((P)"local-name");
  lit_458 = YPsb((P)"  {\"");
  lit_459 = YPsb((P)"\", &");
  lit_460 = YPsb((P)", \"");
  lit_461 = YPsb((P)"\"},\n");
  lit_462 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_463 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_464 = YPsb((P)"  {\"");
  lit_465 = YPsb((P)"\", &");
  lit_466 = YPsb((P)"},\n");
  lit_467 = YPsb((P)"  {\"");
  lit_468 = YPsb((P)"\", NULL},\n");
  lit_469 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_470 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_471 = YPPsym((P)"x-1698");
  lit_472 = YPPsym((P)"x-1697");
  lit_473 = YPsb((P)"  {\"");
  lit_474 = YPsb((P)"\", \"");
  lit_475 = YPsb((P)"\"},\n");
  lit_476 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_477 = YPsb((P)"\nextern MODULE_INFO ");
  lit_478 = YPsb((P)";\n");
  lit_479 = YPsb((P)"MODULE_INFO ");
  lit_480 = YPsb((P)" = {\n");
  lit_481 = YPsb((P)"  \"");
  lit_482 = YPsb((P)"\",\n");
  lit_483 = YPsb((P)"  NULL,\n");
  lit_484 = YPsb((P)"  use_infos,\n");
  lit_485 = YPsb((P)"  import_infos,\n");
  lit_486 = YPsb((P)"  binding_infos,\n");
  lit_487 = YPsb((P)"  export_infos,\n");
  lit_488 = YPsb((P)"};\n");
  T284 = YPsig(YPPlist(1,LITREF(lit_452)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1692_218 = YPmet(FUNCODEREF(fun_x_1692_218),LITREF(lit_451),T284,ENVNUL,PNUL,YPfalse);
  T283 = YPsig(YPPlist(2,LITREF(lit_457),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T283,ENVNUL,PNUL,YPfalse);
  T282 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T282,ENVNUL,PNUL,YPfalse);
  T281 = YPsig(YPPlist(1,LITREF(lit_472)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1698_221 = YPmet(FUNCODEREF(fun_x_1698_221),LITREF(lit_471),T281,ENVNUL,PNUL,YPfalse);
  T280 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_448),T280,ENVNUL,PNUL,YPfalse);
  T285 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T285);
  lit_489 = YPPsym((P)"module-init-name");
  lit_490 = YPsb((P)"load_module_");
  T286 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_223 = YPmet(FUNCODEREF(fun_module_init_name_223),LITREF(lit_489),T286,ENVNUL,PNUL,YPfalse);
  T289 = BOUNDP(YevalSg2cYmodule_init_name);
  if (T289 != YPfalse) {
    T288 = VARREF(YevalSg2cYmodule_init_name);
  } else {
    T288 = YPfalse;
  }
  T290 = fun_module_init_name_223;
  T287 = CALL2(1,VARREF(YPdefine_method),T288,T290);
  VARSET(YevalSg2cYmodule_init_name,T287);
  lit_491 = YPPsym((P)"module-init-decl");
  lit_492 = YPsb((P)"void ");
  lit_493 = YPsb((P)" (void)");
  T291 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_224 = YPmet(FUNCODEREF(fun_module_init_decl_224),LITREF(lit_491),T291,ENVNUL,PNUL,YPfalse);
  T294 = BOUNDP(YevalSg2cYmodule_init_decl);
  if (T294 != YPfalse) {
    T293 = VARREF(YevalSg2cYmodule_init_decl);
  } else {
    T293 = YPfalse;
  }
  T295 = fun_module_init_decl_224;
  T292 = CALL2(1,VARREF(YPdefine_method),T293,T295);
  VARSET(YevalSg2cYmodule_init_decl,T292);
  lit_494 = YPPsym((P)"generate-module-init");
  lit_495 = YPPsym((P)"form");
  lit_496 = YPsb((P)"dl");
  lit_497 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_498 = YPPsym((P)"x-1704");
  lit_499 = YPPsym((P)"x-1703");
  lit_500 = YPsb((P)"extern ");
  lit_501 = YPsb((P)";\n");
  lit_502 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_503 = YPsb((P)"extern ");
  lit_504 = YPsb((P)";\n\n");
  lit_505 = YPsb((P)" {\n");
  lit_506 = YPsb((P)"  static int need_init = 1;\n");
  lit_507 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_508 = YPsb((P)"  need_init = 0;\n");
  lit_509 = YPPsym((P)"x-1709");
  lit_510 = YPPsym((P)"x-1708");
  lit_511 = YPsb((P)"  ");
  lit_512 = YPsb((P)"();\n");
  lit_513 = YPsb((P)"\n");
  lit_514 = YPsb((P)"\n");
  lit_515 = YPsb((P)"}\n");
  T298 = YPsig(YPPlist(1,LITREF(lit_499)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1704_225 = YPmet(FUNCODEREF(fun_x_1704_225),LITREF(lit_498),T298,ENVNUL,PNUL,YPfalse);
  T297 = YPsig(YPPlist(1,LITREF(lit_510)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1709_226 = YPmet(FUNCODEREF(fun_x_1709_226),LITREF(lit_509),T297,ENVNUL,PNUL,YPfalse);
  T296 = YPsig(YPPlist(3,LITREF(lit_48),LITREF(lit_17),LITREF(lit_495)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_227 = YPmet(FUNCODEREF(fun_generate_module_init_227),LITREF(lit_494),T296,ENVNUL,PNUL,YPfalse);
  T301 = BOUNDP(YevalSg2cYgenerate_module_init);
  if (T301 != YPfalse) {
    T300 = VARREF(YevalSg2cYgenerate_module_init);
  } else {
    T300 = YPfalse;
  }
  T302 = fun_generate_module_init_227;
  T299 = CALL2(1,VARREF(YPdefine_method),T300,T302);
  VARSET(YevalSg2cYgenerate_module_init,T299);
  lit_516 = YPPsym((P)"generate-main");
  lit_517 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_518 = YPsb((P)"extern MODULE_INFO ");
  lit_519 = YPsb((P)";\n");
  lit_520 = YPsb((P)"extern ");
  lit_521 = YPsb((P)";\n\n");
  lit_522 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_523 = YPsb((P)";\n\n");
  lit_524 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_525 = YPsb((P)"  ");
  lit_526 = YPsb((P)"%init-world");
  lit_527 = YPsb((P)"(argc, argv);\n");
  lit_528 = YPsb((P)"  ");
  lit_529 = YPsb((P)"();\n");
  lit_530 = YPsb((P)"  return 0;\n");
  lit_531 = YPsb((P)"}\n");
  T303 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_228 = YPmet(FUNCODEREF(fun_generate_main_228),LITREF(lit_516),T303,ENVNUL,PNUL,YPfalse);
  T306 = BOUNDP(YevalSg2cYgenerate_main);
  if (T306 != YPfalse) {
    T305 = VARREF(YevalSg2cYgenerate_main);
  } else {
    T305 = YPfalse;
  }
  T307 = fun_generate_main_228;
  T304 = CALL2(1,VARREF(YPdefine_method),T305,T307);
  VARSET(YevalSg2cYgenerate_main,T304);
  T308 = YPfalse;
  return T308;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSwrite},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSast_linearize},
  {&module_info_gooScolsSstr},
  {&module_info_gooSsystem},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"t?", &module_info_gooStypes, "t?"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"and", &module_info_gooSmacros, "and"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"&", &module_info_gooSmath, "&"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%get", &module_info_gooSboot, "%get"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"put", &module_info_gooSioSport, "put"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"not", &module_info_gooSboot, "not"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"collect-temporaries!", &module_info_evalSast_linearize, "collect-temporaries!"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"add", &module_info_gooScolsScol, "add"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"fun", &module_info_gooSboot, "fun"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"seq", &module_info_gooSboot, "seq"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"==", &module_info_gooSmacros, "=="},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"set", &module_info_gooSboot, "set"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"analyze-dynamic-extent", &module_info_evalSast_linearize, "analyze-dynamic-extent"},
  {"until", &module_info_gooSmacros, "until"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {">>", &module_info_gooSmath, ">>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"load", &module_info_evalStop, "load"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"^", &module_info_gooSmath, "^"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {">", &module_info_gooSmag, ">"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"case", &module_info_gooSmacros, "case"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"-", &module_info_gooSmath, "-"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"lst", &module_info_gooSboot, "lst"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"t=", &module_info_gooStypes, "t="},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"def", &module_info_gooSboot, "def"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<", &module_info_gooSmag, "<"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"let", &module_info_gooSboot, "let"},
  {"~=", &module_info_gooSmath, "~="},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"*", &module_info_gooSmath, "*"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"|", &module_info_gooSmath, "|"},
  {"round", &module_info_gooSmath, "round"},
  {"head", &module_info_gooSboot, "head"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%su", &module_info_gooSboot, "%su"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"max", &module_info_gooSmag, "max"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1-", &module_info_gooSmath, "1-"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"=", &module_info_gooSmath, "="},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"len", &module_info_gooStypes, "len"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"as", &module_info_gooStypes, "as"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"dss", &module_info_gooSboot, "dss"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"map", &module_info_gooSmacros, "map"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"log", &module_info_gooSmath, "log"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"out", &module_info_gooSioSport, "out"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"%put", &module_info_gooSboot, "%put"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"min", &module_info_gooSmag, "min"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"1+", &module_info_gooSmath, "1+"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"use", &module_info_gooSboot, "use"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"dp", &module_info_gooSboot, "dp"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"pow", &module_info_gooSmath, "pow"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"for", &module_info_gooSmacros, "for"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"ds", &module_info_gooSboot, "ds"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"df", &module_info_gooSboot, "df"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"bt", &module_info_evalStop, "bt"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"tup", &module_info_gooSboot, "tup"},
  {"cos", &module_info_gooSmath, "cos"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"acos", &module_info_gooSmath, "acos"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"in", &module_info_gooSioSport, "in"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"when", &module_info_gooSmacros, "when"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"op", &module_info_gooSmacros, "op"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {">=", &module_info_gooSmag, ">="},
  {"dg", &module_info_gooSboot, "dg"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"@==", &module_info_gooSboot, "@=="},
  {"app", &module_info_gooSmacros, "app"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"rem", &module_info_gooSmath, "rem"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"error", &module_info_gooSboot, "error"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"dc", &module_info_gooSboot, "dc"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"collect-registers!", &module_info_evalSast_linearize, "collect-registers!"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"export", &module_info_gooSboot, "export"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"atan", &module_info_gooSmath, "atan"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%im", &module_info_gooSboot, "%im"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"close", &module_info_gooSioSport, "close"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"try", &module_info_gooSboot, "try"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"t*", &module_info_gooStypes, "t*"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<=", &module_info_gooSmag, "<="},
  {"quote", &module_info_gooSboot, "quote"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"/", &module_info_gooSmath, "/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"fin", &module_info_gooSboot, "fin"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"isa", &module_info_gooSboot, "isa"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"while", &module_info_gooSmacros, "while"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"frame", &module_info_evalStop, "frame"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"mif", &module_info_gooSboot, "mif"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"analyze-calls", &module_info_evalSast_linearize, "analyze-calls"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"neg", &module_info_gooSmath, "neg"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"nil", &module_info_gooSboot, "nil"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"tail", &module_info_gooSboot, "tail"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"loc", &module_info_gooSboot, "loc"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"@<", &module_info_gooSboot, "@<"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"logn", &module_info_gooSmath, "logn"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"open", &module_info_gooSioSport, "open"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<<", &module_info_gooSmath, "<<"},
  {"read", &module_info_gooSruntime, "read"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"+", &module_info_gooSmath, "+"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"or", &module_info_gooSmacros, "or"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"always", &module_info_gooSruntime, "always"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"new", &module_info_gooSboot, "new"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"top", &module_info_evalStop, "top"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"if", &module_info_gooSboot, "if"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"~", &module_info_gooSmath, "~"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"get", &module_info_gooSioSport, "get"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*registers-per-line*", &YevalSg2cYTregisters_per_lineT},
  {"mangle-name-into", &YevalSg2cYmangle_name_into},
  {"funinit-to-c", &YevalSg2cYfuninit_to_c},
  {"for-commas", NULL},
  {"---main-2---", NULL},
  {"$method-mangled-marker-string", &YevalSg2cYDmethod_mangled_marker_string},
  {"module-init-name", &YevalSg2cYmodule_init_name},
  {"module-mtime-setter", &YevalSg2cYmodule_mtime_setter},
  {"binding->c", &YevalSg2cYbinding_Gc},
  {"$hygiene-marker", &YevalSg2cYDhygiene_marker},
  {"between-parentheses", NULL},
  {"$local-suffix", &YevalSg2cYDlocal_suffix},
  {"primitive-inlinable?", &YevalSg2cYprimitive_inlinableQ},
  {"module-loader-app-modname", &YevalSg2cYmodule_loader_app_modname},
  {"$iep-marker", &YevalSg2cYDiep_marker},
  {"generate-quotation", &YevalSg2cYgenerate_quotation},
  {"generate-quotations", &YevalSg2cYgenerate_quotations},
  {"$method-mangled-marker", &YevalSg2cYDmethod_mangled_marker},
  {"---main-0---", NULL},
  {"g2c-clean", &YevalSg2cYg2c_clean},
  {"mangle-global-name", &YevalSg2cYmangle_global_name},
  {"$module-marker", &YevalSg2cYDmodule_marker},
  {"module-info-name", &YevalSg2cYmodule_info_name},
  {"reference->c", &YevalSg2cYreference_Gc},
  {"declare-imported-module-infos", &YevalSg2cYdeclare_imported_module_infos},
  {"module-init-decl", &YevalSg2cYmodule_init_decl},
  {"$name-mangler-table", &YevalSg2cYDname_mangler_table},
  {"module-src-file", &YevalSg2cYmodule_src_file},
  {"module-src-file-setter", &YevalSg2cYmodule_src_file_setter},
  {"generate-global-environment", &YevalSg2cYgenerate_global_environment},
  {"generate-main", &YevalSg2cYgenerate_main},
  {"generate-function-forwards", &YevalSg2cYgenerate_function_forwards},
  {"pp", &YevalSg2cYpp},
  {"mangle-local-marked-name", &YevalSg2cYmangle_local_marked_name},
  {"module-loader-app-modname-setter", &YevalSg2cYmodule_loader_app_modname_setter},
  {"mangle-module-binding", &YevalSg2cYmangle_module_binding},
  {"funshell-to-c", &YevalSg2cYfunshell_to_c},
  {"$escape-separator", &YevalSg2cYDescape_separator},
  {"gen-depth", &YevalSg2cYgen_depth},
  {"*trace-registers?*", &YevalSg2cYTtrace_registersQT},
  {"generate-makefile", &YevalSg2cYgenerate_makefile},
  {"gen-ref", &YevalSg2cYgen_ref},
  {"<g2c-module>", &YevalSg2cYLg2c_moduleG},
  {"$hygiene-char", &YevalSg2cYDhygiene_char},
  {"purge-outdated-modules", &YevalSg2cYpurge_outdated_modules},
  {"generate-registers", &YevalSg2cYgenerate_registers},
  {"so-load", &YevalSg2cYso_load},
  {"to-c", &YevalSg2cYto_c},
  {"generate-function-binding", &YevalSg2cYgenerate_function_binding},
  {"generate-quotation-forwards", &YevalSg2cYgenerate_quotation_forwards},
  {"g2c-def-app", &YevalSg2cYg2c_def_app},
  {"g2c-test", &YevalSg2cYg2c_test},
  {"*dynamic-linking?*", &YevalSg2cYTdynamic_linkingQT},
  {"$local-marker", &YevalSg2cYDlocal_marker},
  {"module-loader-appname", &YevalSg2cYmodule_loader_appname},
  {"module-mtime", &YevalSg2cYmodule_mtime},
  {"mangle-integer", &YevalSg2cYmangle_integer},
  {"g2c-ast", &YevalSg2cYg2c_ast},
  {"compute-ast", &YevalSg2cYcompute_ast},
  {"generate-self-recursive-call", &YevalSg2cYgenerate_self_recursive_call},
  {"*mangle-buffer*", &YevalSg2cYTmangle_bufferT},
  {"generate-header", &YevalSg2cYgenerate_header},
  {"generate-closure-structure", &YevalSg2cYgenerate_closure_structure},
  {"with-used-expression", NULL},
  {"generate-c-application", &YevalSg2cYgenerate_c_application},
  {"generate-function-forward", &YevalSg2cYgenerate_function_forward},
  {"module-up-to-date?", &YevalSg2cYmodule_up_to_dateQ},
  {"module-loader-appname-setter", &YevalSg2cYmodule_loader_appname_setter},
  {"*tmp-file-counter*", &YevalSg2cYTtmp_file_counterT},
  {"mangle-boot-name", &YevalSg2cYmangle_boot_name},
  {"mangle-string-literal", &YevalSg2cYmangle_string_literal},
  {"generate-function-bodies", &YevalSg2cYgenerate_function_bodies},
  {"with-expression", NULL},
  {"*g2c-app*", &YevalSg2cYTg2c_appT},
  {"mangler-reset", &YevalSg2cYmangler_reset},
  {"generate-function-body-reference", &YevalSg2cYgenerate_function_body_reference},
  {"g2c-exp", &YevalSg2cYg2c_exp},
  {"compute-program", &YevalSg2cYcompute_program},
  {"g2c-top", &YevalSg2cYg2c_top},
  {"between-parentheses-comma-separated", NULL},
  {"dispatcher?", &YevalSg2cYdispatcherQ},
  {"with-statement", NULL},
  {"float-to-c-string", &YevalSg2cYfloat_to_c_string},
  {"%compile", NULL},
  {"false-name", &YevalSg2cYfalse_name},
  {"$escape-marker", &YevalSg2cYDescape_marker},
  {"char-buffer-as-string", &YevalSg2cYchar_buffer_as_string},
  {"$c-escapes", &YevalSg2cYDc_escapes},
  {"$number-call-templates", &YevalSg2cYDnumber_call_templates},
  {"$mangles-data", &YevalSg2cYDmangles_data},
  {"generate-function-code", &YevalSg2cYgenerate_function_code},
  {"mangle-local-name", &YevalSg2cYmangle_local_name},
  {"$iep-suffix", &YevalSg2cYDiep_suffix},
  {"generate-module-info", &YevalSg2cYgenerate_module_info},
  {"generate-shadow-args", &YevalSg2cYgenerate_shadow_args},
  {"generate-module-init", &YevalSg2cYgenerate_module_init},
  {"$number-characters", &YevalSg2cYDnumber_characters},
  {"compile-load", &YevalSg2cYcompile_load},
  {"generate-local-temporaries", &YevalSg2cYgenerate_local_temporaries},
  {"---main-1---", NULL},
  {"gen-result", &YevalSg2cYgen_result},
  {"mangle-raw-name", &YevalSg2cYmangle_raw_name},
  {"generate-return", &YevalSg2cYgenerate_return},
  {"generate-global-binding", &YevalSg2cYgenerate_global_binding},
  {"generate-functions", &YevalSg2cYgenerate_functions},
  {"generate-c-module", &YevalSg2cYgenerate_c_module},
  {"$min-character-code", &YevalSg2cYDmin_character_code},
  {"%load", NULL},
  {"generate-trailer", &YevalSg2cYgenerate_trailer},
  {"generate-function-specs", &YevalSg2cYgenerate_function_specs},
  {"gen-fab-list", &YevalSg2cYgen_fab_list},
  {"g2c-build-app", &YevalSg2cYg2c_build_app},
  {"out-list-builder", &YevalSg2cYout_list_builder},
  {"$module-separator", &YevalSg2cYDmodule_separator},
  {"$max-character-code", &YevalSg2cYDmax_character_code},
  {"<g2c-module-loader>", &YevalSg2cYLg2c_module_loaderG},
  {"*definitions*", &YevalSg2cYTdefinitionsT},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-clean", "g2c-clean"},
  {"g2c-def-app", "g2c-def-app"},
  {"g2c-ast", "g2c-ast"},
  {"g2c-exp", "g2c-exp"},
  {"g2c-top", "g2c-top"},
  {"g2c-test", "g2c-test"},
  {"g2c-eval", "g2c-eval"},
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
extern void load_module_gooSruntime (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_evalSg2c (void);

void load_module_evalSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSwrite();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSast_linearize();
  load_module_gooScolsSstr();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();

}

/* END OF GENERATED CODE. */
