/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/g2c */

EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(Yx8rSg2cYcompute_program,"x8r/g2c","compute-program");
DEF(Yx8rSg2cYmodule_info_name,"x8r/g2c","module-info-name");
DEF(Yx8rSg2cYTg2c_appT,"x8r/g2c","*g2c-app*");
EXT(Yx8rSast_linearizeYLbox_readG,"x8r/ast-linearize","<box-read>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
DEF(Yx8rSg2cYreference_Gc,"x8r/g2c","reference->c");
DEF(Yx8rSg2cYfunshell_to_c,"x8r/g2c","funshell-to-c");
DEF(Yx8rSg2cYgenerate_main,"x8r/g2c","generate-main");
DEF(Yx8rSg2cYgenerate_local_temporaries,"x8r/g2c","generate-local-temporaries");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yx8rSastYbinding_info,"x8r/ast","binding-info");
DEF(Yx8rSg2cYfalse_name,"x8r/g2c","false-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
EXT(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
EXT(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
EXT(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(Yx8rSast_linearizeYupdate_walkX,"x8r/ast-linearize","update-walk!");
DEF(Yx8rSg2cYgenerate_quotations,"x8r/g2c","generate-quotations");
EXT(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
EXT(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yx8rStopYg2c_eval,"x8r/top","g2c-eval");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(Yx8rSg2cYTdynamic_linkingQT,"x8r/g2c","*dynamic-linking?*");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
EXT(Yx8rSast_linearizeYanalyze_calls,"x8r/ast-linearize","analyze-calls");
EXT(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yx8rSastYsignature_value,"x8r/ast","signature-value");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(Yx8rSg2cYDlocal_marker,"x8r/g2c","$local-marker");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
EXT(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSbufYlen_setter,"goo/cols/buf","len-setter");
EXT(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yx8rSastYfunction_index,"x8r/ast","function-index");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(Yx8rSg2cYgenerate_registers,"x8r/g2c","generate-registers");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
EXT(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(Yx8rSg2cYmodule_init_name,"x8r/g2c","module-init-name");
EXT(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(Yx8rSast_linearizeYform_quotations,"x8r/ast-linearize","form-quotations");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(Yx8rSast_linearizeYLfree_referenceG,"x8r/ast-linearize","<free-reference>");
EXT(Ytail,"goo/boot","tail");
EXT(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
DEF(Yx8rSg2cYcompute_ast,"x8r/g2c","compute-ast");
EXT(YgooScolsSbufYlenSfill_setter,"goo/cols/buf","len/fill-setter");
EXT(YgooScolsSbufYpop_lastX,"goo/cols/buf","pop-last!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(Yx8rSg2cYgenerate_c_module,"x8r/g2c","generate-c-module");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(Yx8rSg2cYDnumber_characters,"x8r/g2c","$number-characters");
EXT(YgooSmathYA,"goo/math","+");
DEF(Yx8rSg2cYmodule_loader_appname,"x8r/g2c","module-loader-appname");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yx8rSast_linearizeYunconstrained_typeQ,"x8r/ast-linearize","unconstrained-type?");
EXT(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(Yx8rSg2cYgenerate_header,"x8r/g2c","generate-header");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yvec,"goo/boot","vec");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yx8rSast_linearizeYclosurize_mainX,"x8r/ast-linearize","closurize-main!");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yx8rSastYfunction_free,"x8r/ast","function-free");
DEF(Yx8rSg2cYg2c_top,"x8r/g2c","g2c-top");
EXT(Ynil,"goo/boot","nil");
EXT(YPisa,"goo/boot","%isa");
EXT(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
DEF(Yx8rSg2cYTtmp_file_counterT,"x8r/g2c","*tmp-file-counter*");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLmagG,"goo/boot","<mag>");
DEF(Yx8rSg2cYbinding_Gc,"x8r/g2c","binding->c");
EXT(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
EXT(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(Yx8rSast_linearizeYLclosure_creationG,"x8r/ast-linearize","<closure-creation>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(Yx8rSg2cYg2c_def_app,"x8r/g2c","g2c-def-app");
EXT(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(Yx8rSg2cYTtrace_registersQT,"x8r/g2c","*trace-registers?*");
DEF(Yx8rSg2cYDhygiene_char,"x8r/g2c","$hygiene-char");
EXT(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPvnul,"goo/boot","%vnul");
DEF(Yx8rSg2cYgenerate_c_application,"x8r/g2c","generate-c-application");
EXT(Yx8rSast_linearizeYTregister_passiveQT,"x8r/ast-linearize","*register-passive?*");
EXT(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
DEF(Yx8rSg2cYpurge_outdated_modules,"x8r/g2c","purge-outdated-modules");
DEF(Yx8rSg2cYg2c_test,"x8r/g2c","g2c-test");
DEF(Yx8rSg2cYmangle_boot_name,"x8r/g2c","mangle-boot-name");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Yx8rSastYprogram_type,"x8r/ast","program-type");
DEF(Yx8rSg2cYg2c_ast,"x8r/g2c","g2c-ast");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(Yx8rSg2cYgenerate_global_binding,"x8r/g2c","generate-global-binding");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(Yx8rSsyntaxYeval,"x8r/syntax","eval");
DEF(Yx8rSg2cYmodule_up_to_dateQ,"x8r/g2c","module-up-to-date?");
DEF(Yx8rSg2cYgenerate_function_binding,"x8r/g2c","generate-function-binding");
DEF(Yx8rSg2cYgenerate_shadow_args,"x8r/g2c","generate-shadow-args");
DEF(Yx8rSg2cYgen_result,"x8r/g2c","gen-result");
EXT(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
DEF(Yx8rSg2cYmangle_local_name,"x8r/g2c","mangle-local-name");
EXT(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(Yx8rSastYapplication_function,"x8r/ast","application-function");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(Yx8rSg2cYmangler_reset,"x8r/g2c","mangler-reset");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYB,"goo/math","&");
DEF(Yx8rSg2cYmangle_raw_name,"x8r/g2c","mangle-raw-name");
EXT(Yx8rSast_linearizeYgather_temporariesX,"x8r/ast-linearize","gather-temporaries!");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(Yx8rSg2cYout_list_builder,"x8r/g2c","out-list-builder");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(Yx8rSg2cYgen_fab_list,"x8r/g2c","gen-fab-list");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(Yx8rSg2cYLg2c_moduleG,"x8r/g2c","<g2c-module>");
EXT(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(Yx8rSg2cYmodule_src_file_setter,"x8r/g2c","module-src-file-setter");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
EXT(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yx8rSast_linearizeYLbox_creationG,"x8r/ast-linearize","<box-creation>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yx8rSast_linearizeYform_program,"x8r/ast-linearize","form-program");
EXT(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
EXT(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
EXT(Yx8rSast_linearizeYextract_thingsX,"x8r/ast-linearize","extract-things!");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
DEF(Yx8rSg2cYDlocal_suffix,"x8r/g2c","$local-suffix");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(Yx8rSg2cYmodule_loader_app_modname_setter,"x8r/g2c","module-loader-app-modname-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yx8rSast_linearizeYclosure_creation_index,"x8r/ast-linearize","closure-creation-index");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(Yx8rSg2cYgenerate_quotation,"x8r/g2c","generate-quotation");
EXT(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yx8rStopYload,"x8r/top","load");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yx8rSastYfunction_source,"x8r/ast","function-source");
EXT(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
EXT(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yx8rStopYframe,"x8r/top","frame");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
DEF(Yx8rSg2cYmodule_loader_appname_setter,"x8r/g2c","module-loader-appname-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
EXT(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yx8rSastYbinding_name,"x8r/ast","binding-name");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
EXT(Yx8rSast_linearizeYprogram_form,"x8r/ast-linearize","program-form");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(Yx8rSg2cYTregisters_per_lineT,"x8r/g2c","*registers-per-line*");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yx8rStopYbt,"x8r/top","bt");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(Yx8rSg2cYTdefinitionsT,"x8r/g2c","*definitions*");
EXT(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(Yx8rSast_linearizeYbox_reference,"x8r/ast-linearize","box-reference");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(Yx8rSg2cYmangle_name_into,"x8r/g2c","mangle-name-into");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(Yx8rSg2cYgen_ref,"x8r/g2c","gen-ref");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(Yx8rSg2cYgenerate_function_body_reference,"x8r/g2c","generate-function-body-reference");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(Yx8rSg2cYgenerate_closure_structure,"x8r/g2c","generate-closure-structure");
EXT(Ylst,"goo/boot","lst");
EXT(Yx8rStopYframe_var,"x8r/top","frame-var");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
DEF(Yx8rSg2cYgenerate_module_init,"x8r/g2c","generate-module-init");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(Yx8rSg2cYmangle_string_literal,"x8r/g2c","mangle-string-literal");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSbufYLbufG,"goo/cols/buf","<buf>");
EXT(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
DEF(Yx8rSg2cYmangle_local_marked_name,"x8r/g2c","mangle-local-marked-name");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
EXT(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
DEF(Yx8rSg2cYDmethod_mangled_marker_string,"x8r/g2c","$method-mangled-marker-string");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(Yx8rSg2cYDmethod_mangled_marker,"x8r/g2c","$method-mangled-marker");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yx8rSast_linearizeYprogram_definitions,"x8r/ast-linearize","program-definitions");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(Yx8rSg2cYDmax_character_code,"x8r/g2c","$max-character-code");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(Yx8rSg2cYLg2c_module_loaderG,"x8r/g2c","<g2c-module-loader>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
EXT(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
DEF(Yx8rSg2cYgenerate_functions,"x8r/g2c","generate-functions");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
DEF(Yx8rSg2cYmodule_mtime,"x8r/g2c","module-mtime");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(Yx8rSg2cYgen_depth,"x8r/g2c","gen-depth");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yx8rSastYload_in,"x8r/ast","load-in");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Yx8rStopYbacktrace,"x8r/top","backtrace");
EXT(YOlst,"goo/boot","@lst");
EXT(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
DEF(Yx8rSg2cYDmodule_separator,"x8r/g2c","$module-separator");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yx8rSast_linearizeYreference_offset,"x8r/ast-linearize","reference-offset");
EXT(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yx8rSastYLapplicationG,"x8r/ast","<application>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yx8rSast_linearizeYregister_allocateX,"x8r/ast-linearize","register-allocate!");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(Yx8rSg2cYmangle_module_binding,"x8r/g2c","mangle-module-binding");
DEF(Yx8rSg2cYfuninit_to_c,"x8r/g2c","funinit-to-c");
EXT(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
EXT(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yx8rStopYparse_in,"x8r/top","parse-in");
DEF(Yx8rSg2cYDiep_marker,"x8r/g2c","$iep-marker");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(Yx8rSg2cYgenerate_function_specs,"x8r/g2c","generate-function-specs");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(Yx8rSg2cYDnumber_call_templates,"x8r/g2c","$number-call-templates");
EXT(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(Yx8rSast_linearizeYLrenamed_local_bindingG,"x8r/ast-linearize","<renamed-local-binding>");
EXT(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(Yx8rSastYmodule_name,"x8r/ast","module-name");
DEF(Yx8rSg2cYpp,"x8r/g2c","pp");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(Yx8rSg2cYmodule_mtime_setter,"x8r/g2c","module-mtime-setter");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
EXT(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
DEF(Yx8rSg2cYgenerate_function_forward,"x8r/g2c","generate-function-forward");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Yx8rSastYsignature_names,"x8r/ast","signature-names");
DEF(Yx8rSg2cYg2c_clean,"x8r/g2c","g2c-clean");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(Yx8rSg2cYmodule_loader_app_modname,"x8r/g2c","module-loader-app-modname");
DEF(Yx8rSg2cYmangle_integer,"x8r/g2c","mangle-integer");
EXT(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yx8rStopYread_file,"x8r/top","read-file");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yx8rSastYprogram_register,"x8r/ast","program-register");
DEF(Yx8rSg2cYDmangles_data,"x8r/g2c","$mangles-data");
EXT(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooScolsSbufYpush_lastX,"goo/cols/buf","push-last!");
DEF(Yx8rSg2cYprimitive_inlinableQ,"x8r/g2c","primitive-inlinable?");
DEF(Yx8rSg2cYDc_escapes,"x8r/g2c","$c-escapes");
EXT(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
DEF(Yx8rSg2cYDescape_separator,"x8r/g2c","$escape-separator");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
EXT(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
EXT(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
EXT(Yx8rSast_linearizeYcollect_temporariesX,"x8r/ast-linearize","collect-temporaries!");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(Yx8rSg2cYso_load,"x8r/g2c","so-load");
DEF(Yx8rSg2cYDescape_marker,"x8r/g2c","$escape-marker");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(Yx8rSg2cYgenerate_makefile,"x8r/g2c","generate-makefile");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(Yx8rSg2cYDname_mangler_table,"x8r/g2c","$name-mangler-table");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
DEF(Yx8rSg2cYgenerate_module_info,"x8r/g2c","generate-module-info");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(Yx8rStopYesctst,"x8r/top","esctst");
EXT(Yx8rSast_linearizeYLtop_level_formG,"x8r/ast-linearize","<top-level-form>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
EXT(Yx8rSast_linearizeYast_contains_funQ,"x8r/ast-linearize","ast-contains-fun?");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(Yx8rSg2cYcompile_load,"x8r/g2c","compile-load");
EXT(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
DEF(Yx8rSg2cYgenerate_trailer,"x8r/g2c","generate-trailer");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
EXT(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
EXT(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(Yx8rSg2cYgenerate_self_recursive_call,"x8r/g2c","generate-self-recursive-call");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
EXT(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(Yx8rSg2cYmodule_src_file,"x8r/g2c","module-src-file");
EXT(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yx8rSastYLbindingG,"x8r/ast","<binding>");
DEF(Yx8rSg2cYg2c_build_app,"x8r/g2c","g2c-build-app");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yx8rSast_linearizeYprogram_quotations,"x8r/ast-linearize","program-quotations");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
DEF(Yx8rSg2cYgenerate_global_environment,"x8r/g2c","generate-global-environment");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
DEF(Yx8rSg2cYDiep_suffix,"x8r/g2c","$iep-suffix");
EXT(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(YgooScolsSbufYbuf,"goo/cols/buf","buf");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
EXT(YgooSmathYS,"goo/math","/");
DEF(Yx8rSg2cYgenerate_quotation_forwards,"x8r/g2c","generate-quotation-forwards");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(Yx8rSg2cYgenerate_function_code,"x8r/g2c","generate-function-code");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(Yx8rSg2cYgenerate_function_bodies,"x8r/g2c","generate-function-bodies");
EXT(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
EXT(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
DEF(Yx8rSg2cYfloat_to_c_string,"x8r/g2c","float-to-c-string");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(Yx8rSg2cYg2c_exp,"x8r/g2c","g2c-exp");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Ytype_object,"goo/boot","type-object");
DEF(Yx8rSg2cYDmin_character_code,"x8r/g2c","$min-character-code");
DEF(Yx8rSg2cYdeclare_imported_module_infos,"x8r/g2c","declare-imported-module-infos");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
EXT(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yx8rStopYdo_stack_frames,"x8r/top","do-stack-frames");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(Yx8rSg2cYmangle_global_name,"x8r/g2c","mangle-global-name");
EXT(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yx8rSast_linearizeYLbox_writeG,"x8r/ast-linearize","<box-write>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(Yx8rSastYbinding_index,"x8r/ast","binding-index");
EXT(Yx8rSast_linearizeYliftX,"x8r/ast-linearize","lift!");
EXT(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
EXT(Yx8rSast_linearizeYform_definitions,"x8r/ast-linearize","form-definitions");
DEF(Yx8rSg2cYmodule_init_decl,"x8r/g2c","module-init-decl");
DEF(Yx8rSg2cYchar_buffer_as_string,"x8r/g2c","char-buffer-as-string");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(Yx8rSg2cYto_c,"x8r/g2c","to-c");
EXT(Yx8rSast_linearizeYflatten_seqs,"x8r/ast-linearize","flatten-seqs");
DEF(Yx8rSg2cYgenerate_return,"x8r/g2c","generate-return");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yx8rSast_linearizeYreference_selfQ,"x8r/ast-linearize","reference-self?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yx8rSastYconstant_value,"x8r/ast","constant-value");
EXT(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(Yx8rSg2cYgenerate_function_forwards,"x8r/g2c","generate-function-forwards");
EXT(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(Yx8rSast_linearizeYclosure_creation_free,"x8r/ast-linearize","closure-creation-free");
EXT(Yx8rSast_linearizeYanalyze_dynamic_extent,"x8r/ast-linearize","analyze-dynamic-extent");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yx8rStopYtop,"x8r/top","top");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(Yx8rSg2cYdispatcherQ,"x8r/g2c","dispatcher?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yx8rSastYfree_environment,"x8r/ast","free-environment");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
EXT(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
EXT(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
EXT(Yx8rStopYauto_eval,"x8r/top","auto-eval");
EXT(Yx8rSast_linearizeYinsert_boxX,"x8r/ast-linearize","insert-box!");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yx8rSast_linearizeYcollect_registersX,"x8r/ast-linearize","collect-registers!");
EXT(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(Yx8rStopYsave_image,"x8r/top","save-image");
EXT(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
EXT(Yx8rSast_linearizeYbox_form,"x8r/ast-linearize","box-form");
EXT(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
EXT(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
EXT(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(Yx8rSg2cYDhygiene_marker,"x8r/g2c","$hygiene-marker");
DEF(Yx8rSg2cYTmangle_bufferT,"x8r/g2c","*mangle-buffer*");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(Yx8rSg2cYDmodule_marker,"x8r/g2c","$module-marker");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_230);
DEFLIT(lit_45);
DEFLIT(lit_413);
DEFLIT(lit_261);
DEFLIT(lit_60);
DEFLIT(lit_221);
DEFLIT(lit_204);
DEFLIT(lit_402);
DEFLIT(lit_68);
DEFLIT(lit_200);
DEFLIT(lit_332);
DEFLIT(lit_192);
DEFLIT(lit_248);
DEFLIT(lit_381);
DEFLIT(lit_455);
DEFLIT(lit_430);
DEFLIT(lit_348);
DEFLIT(lit_183);
DEFLIT(lit_208);
DEFLIT(lit_186);
DEFLIT(lit_85);
DEFLIT(lit_94);
DEFLIT(lit_91);
DEFLIT(lit_71);
DEFLIT(lit_70);
DEFLIT(lit_222);
DEFLIT(lit_399);
DEFLIT(lit_79);
DEFLIT(lit_338);
DEFLIT(lit_21);
DEFLIT(lit_253);
DEFLIT(lit_37);
DEFLIT(lit_181);
DEFLIT(lit_305);
DEFLIT(lit_342);
DEFLIT(lit_274);
DEFLIT(lit_288);
DEFLIT(lit_31);
DEFLIT(lit_6);
DEFLIT(lit_297);
DEFLIT(lit_149);
DEFLIT(lit_25);
DEFLIT(lit_410);
DEFLIT(lit_333);
DEFLIT(lit_168);
DEFLIT(lit_369);
DEFLIT(lit_417);
DEFLIT(lit_52);
DEFLIT(lit_90);
DEFLIT(lit_277);
DEFLIT(lit_439);
DEFLIT(lit_129);
DEFLIT(lit_195);
DEFLIT(lit_322);
DEFLIT(lit_4);
DEFLIT(lit_131);
DEFLIT(lit_407);
DEFLIT(lit_185);
DEFLIT(lit_178);
DEFLIT(lit_22);
DEFLIT(lit_309);
DEFLIT(lit_135);
DEFLIT(lit_126);
DEFLIT(lit_447);
DEFLIT(lit_328);
DEFLIT(lit_28);
DEFLIT(lit_363);
DEFLIT(lit_40);
DEFLIT(lit_366);
DEFLIT(lit_260);
DEFLIT(lit_356);
DEFLIT(lit_49);
DEFLIT(lit_370);
DEFLIT(lit_301);
DEFLIT(lit_374);
DEFLIT(lit_323);
DEFLIT(lit_362);
DEFLIT(lit_476);
DEFLIT(lit_1);
DEFLIT(lit_364);
DEFLIT(lit_187);
DEFLIT(lit_387);
DEFLIT(lit_273);
DEFLIT(lit_378);
DEFLIT(lit_442);
DEFLIT(lit_98);
DEFLIT(lit_93);
DEFLIT(lit_235);
DEFLIT(lit_272);
DEFLIT(lit_142);
DEFLIT(lit_319);
DEFLIT(lit_155);
DEFLIT(lit_474);
DEFLIT(lit_16);
DEFLIT(lit_39);
DEFLIT(lit_380);
DEFLIT(lit_327);
DEFLIT(lit_423);
DEFLIT(lit_408);
DEFLIT(lit_218);
DEFLIT(lit_329);
DEFLIT(lit_152);
DEFLIT(lit_232);
DEFLIT(lit_390);
DEFLIT(lit_452);
DEFLIT(lit_26);
DEFLIT(lit_35);
DEFLIT(lit_50);
DEFLIT(lit_454);
DEFLIT(lit_343);
DEFLIT(lit_108);
DEFLIT(lit_209);
DEFLIT(lit_115);
DEFLIT(lit_15);
DEFLIT(lit_416);
DEFLIT(lit_154);
DEFLIT(lit_102);
DEFLIT(lit_23);
DEFLIT(lit_468);
DEFLIT(lit_311);
DEFLIT(lit_145);
DEFLIT(lit_75);
DEFLIT(lit_9);
DEFLIT(lit_435);
DEFLIT(lit_404);
DEFLIT(lit_110);
DEFLIT(lit_360);
DEFLIT(lit_164);
DEFLIT(lit_205);
DEFLIT(lit_247);
DEFLIT(lit_156);
DEFLIT(lit_159);
DEFLIT(lit_124);
DEFLIT(lit_41);
DEFLIT(lit_480);
DEFLIT(lit_20);
DEFLIT(lit_252);
DEFLIT(lit_188);
DEFLIT(lit_340);
DEFLIT(lit_306);
DEFLIT(lit_88);
DEFLIT(lit_313);
DEFLIT(lit_336);
DEFLIT(lit_472);
DEFLIT(lit_161);
DEFLIT(lit_466);
DEFLIT(lit_7);
DEFLIT(lit_89);
DEFLIT(lit_82);
DEFLIT(lit_8);
DEFLIT(lit_202);
DEFLIT(lit_244);
DEFLIT(lit_324);
DEFLIT(lit_234);
DEFLIT(lit_67);
DEFLIT(lit_382);
DEFLIT(lit_120);
DEFLIT(lit_268);
DEFLIT(lit_424);
DEFLIT(lit_286);
DEFLIT(lit_255);
DEFLIT(lit_355);
DEFLIT(lit_386);
DEFLIT(lit_337);
DEFLIT(lit_62);
DEFLIT(lit_69);
DEFLIT(lit_58);
DEFLIT(lit_24);
DEFLIT(lit_148);
DEFLIT(lit_293);
DEFLIT(lit_391);
DEFLIT(lit_400);
DEFLIT(lit_471);
DEFLIT(lit_412);
DEFLIT(lit_264);
DEFLIT(lit_422);
DEFLIT(lit_173);
DEFLIT(lit_104);
DEFLIT(lit_383);
DEFLIT(lit_428);
DEFLIT(lit_460);
DEFLIT(lit_138);
DEFLIT(lit_213);
DEFLIT(lit_420);
DEFLIT(lit_236);
DEFLIT(lit_437);
DEFLIT(lit_359);
DEFLIT(lit_284);
DEFLIT(lit_34);
DEFLIT(lit_291);
DEFLIT(lit_199);
DEFLIT(lit_307);
DEFLIT(lit_349);
DEFLIT(lit_80);
DEFLIT(lit_84);
DEFLIT(lit_101);
DEFLIT(lit_73);
DEFLIT(lit_227);
DEFLIT(lit_158);
DEFLIT(lit_63);
DEFLIT(lit_351);
DEFLIT(lit_123);
DEFLIT(lit_470);
DEFLIT(lit_166);
DEFLIT(lit_298);
DEFLIT(lit_458);
DEFLIT(lit_276);
DEFLIT(lit_172);
DEFLIT(lit_113);
DEFLIT(lit_78);
DEFLIT(lit_116);
DEFLIT(lit_240);
DEFLIT(lit_226);
DEFLIT(lit_396);
DEFLIT(lit_12);
DEFLIT(lit_243);
DEFLIT(lit_140);
DEFLIT(lit_144);
DEFLIT(lit_32);
DEFLIT(lit_377);
DEFLIT(lit_223);
DEFLIT(lit_346);
DEFLIT(lit_246);
DEFLIT(lit_251);
DEFLIT(lit_429);
DEFLIT(lit_434);
DEFLIT(lit_372);
DEFLIT(lit_3);
DEFLIT(lit_81);
DEFLIT(lit_282);
DEFLIT(lit_38);
DEFLIT(lit_432);
DEFLIT(lit_445);
DEFLIT(lit_350);
DEFLIT(lit_197);
DEFLIT(lit_406);
DEFLIT(lit_66);
DEFLIT(lit_464);
DEFLIT(lit_10);
DEFLIT(lit_167);
DEFLIT(lit_147);
DEFLIT(lit_394);
DEFLIT(lit_77);
DEFLIT(lit_237);
DEFLIT(lit_163);
DEFLIT(lit_285);
DEFLIT(lit_241);
DEFLIT(lit_475);
DEFLIT(lit_233);
DEFLIT(lit_250);
DEFLIT(lit_278);
DEFLIT(lit_279);
DEFLIT(lit_215);
DEFLIT(lit_459);
DEFLIT(lit_97);
DEFLIT(lit_107);
DEFLIT(lit_267);
DEFLIT(lit_440);
DEFLIT(lit_86);
DEFLIT(lit_373);
DEFLIT(lit_53);
DEFLIT(lit_211);
DEFLIT(lit_314);
DEFLIT(lit_304);
DEFLIT(lit_409);
DEFLIT(lit_295);
DEFLIT(lit_242);
DEFLIT(lit_231);
DEFLIT(lit_300);
DEFLIT(lit_353);
DEFLIT(lit_27);
DEFLIT(lit_290);
DEFLIT(lit_326);
DEFLIT(lit_281);
DEFLIT(lit_441);
DEFLIT(lit_438);
DEFLIT(lit_224);
DEFLIT(lit_294);
DEFLIT(lit_18);
DEFLIT(lit_117);
DEFLIT(lit_118);
DEFLIT(lit_446);
DEFLIT(lit_405);
DEFLIT(lit_65);
DEFLIT(lit_174);
DEFLIT(lit_180);
DEFLIT(lit_376);
DEFLIT(lit_11);
DEFLIT(lit_339);
DEFLIT(lit_137);
DEFLIT(lit_162);
DEFLIT(lit_100);
DEFLIT(lit_467);
DEFLIT(lit_330);
DEFLIT(lit_461);
DEFLIT(lit_30);
DEFLIT(lit_465);
DEFLIT(lit_315);
DEFLIT(lit_121);
DEFLIT(lit_5);
DEFLIT(lit_206);
DEFLIT(lit_299);
DEFLIT(lit_426);
DEFLIT(lit_171);
DEFLIT(lit_239);
DEFLIT(lit_371);
DEFLIT(lit_473);
DEFLIT(lit_365);
DEFLIT(lit_190);
DEFLIT(lit_229);
DEFLIT(lit_421);
DEFLIT(lit_397);
DEFLIT(lit_43);
DEFLIT(lit_36);
DEFLIT(lit_312);
DEFLIT(lit_112);
DEFLIT(lit_403);
DEFLIT(lit_194);
DEFLIT(lit_270);
DEFLIT(lit_344);
DEFLIT(lit_415);
DEFLIT(lit_128);
DEFLIT(lit_283);
DEFLIT(lit_258);
DEFLIT(lit_119);
DEFLIT(lit_198);
DEFLIT(lit_481);
DEFLIT(lit_263);
DEFLIT(lit_427);
DEFLIT(lit_414);
DEFLIT(lit_401);
DEFLIT(lit_87);
DEFLIT(lit_433);
DEFLIT(lit_453);
DEFLIT(lit_271);
DEFLIT(lit_61);
DEFLIT(lit_265);
DEFLIT(lit_444);
DEFLIT(lit_170);
DEFLIT(lit_245);
DEFLIT(lit_275);
DEFLIT(lit_2);
DEFLIT(lit_177);
DEFLIT(lit_436);
DEFLIT(lit_193);
DEFLIT(lit_14);
DEFLIT(lit_411);
DEFLIT(lit_379);
DEFLIT(lit_341);
DEFLIT(lit_212);
DEFLIT(lit_254);
DEFLIT(lit_175);
DEFLIT(lit_318);
DEFLIT(lit_357);
DEFLIT(lit_134);
DEFLIT(lit_219);
DEFLIT(lit_133);
DEFLIT(lit_393);
DEFLIT(lit_125);
DEFLIT(lit_478);
DEFLIT(lit_196);
DEFLIT(lit_256);
DEFLIT(lit_55);
DEFLIT(lit_317);
DEFLIT(lit_56);
DEFLIT(lit_59);
DEFLIT(lit_388);
DEFLIT(lit_392);
DEFLIT(lit_105);
DEFLIT(lit_303);
DEFLIT(lit_72);
DEFLIT(lit_266);
DEFLIT(lit_334);
DEFLIT(lit_136);
DEFLIT(lit_17);
DEFLIT(lit_64);
DEFLIT(lit_249);
DEFLIT(lit_157);
DEFLIT(lit_182);
DEFLIT(lit_384);
DEFLIT(lit_114);
DEFLIT(lit_395);
DEFLIT(lit_83);
DEFLIT(lit_347);
DEFLIT(lit_13);
DEFLIT(lit_479);
DEFLIT(lit_203);
DEFLIT(lit_262);
DEFLIT(lit_33);
DEFLIT(lit_122);
DEFLIT(lit_127);
DEFLIT(lit_57);
DEFLIT(lit_130);
DEFLIT(lit_146);
DEFLIT(lit_96);
DEFLIT(lit_477);
DEFLIT(lit_354);
DEFLIT(lit_367);
DEFLIT(lit_289);
DEFLIT(lit_160);
DEFLIT(lit_179);
DEFLIT(lit_375);
DEFLIT(lit_48);
DEFLIT(lit_448);
DEFLIT(lit_153);
DEFLIT(lit_361);
DEFLIT(lit_456);
DEFLIT(lit_214);
DEFLIT(lit_44);
DEFLIT(lit_46);
DEFLIT(lit_259);
DEFLIT(lit_169);
DEFLIT(lit_111);
DEFLIT(lit_217);
DEFLIT(lit_141);
DEFLIT(lit_201);
DEFLIT(lit_308);
DEFLIT(lit_207);
DEFLIT(lit_74);
DEFLIT(lit_443);
DEFLIT(lit_425);
DEFLIT(lit_321);
DEFLIT(lit_463);
DEFLIT(lit_216);
DEFLIT(lit_287);
DEFLIT(lit_280);
DEFLIT(lit_450);
DEFLIT(lit_358);
DEFLIT(lit_165);
DEFLIT(lit_451);
DEFLIT(lit_269);
DEFLIT(lit_310);
DEFLIT(lit_331);
DEFLIT(lit_109);
DEFLIT(lit_449);
DEFLIT(lit_106);
DEFLIT(lit_76);
DEFLIT(lit_225);
DEFLIT(lit_220);
DEFLIT(lit_368);
DEFLIT(lit_92);
DEFLIT(lit_150);
DEFLIT(lit_0);
DEFLIT(lit_257);
DEFLIT(lit_29);
DEFLIT(lit_325);
DEFLIT(lit_316);
DEFLIT(lit_419);
DEFLIT(lit_184);
DEFLIT(lit_385);
DEFLIT(lit_431);
DEFLIT(lit_99);
DEFLIT(lit_189);
DEFLIT(lit_132);
DEFLIT(lit_103);
DEFLIT(lit_139);
DEFLIT(lit_292);
DEFLIT(lit_143);
DEFLIT(lit_296);
DEFLIT(lit_51);
DEFLIT(lit_335);
DEFLIT(lit_457);
DEFLIT(lit_238);
DEFLIT(lit_320);
DEFLIT(lit_95);
DEFLIT(lit_191);
DEFLIT(lit_352);
DEFLIT(lit_302);
DEFLIT(lit_345);
DEFLIT(lit_418);
DEFLIT(lit_228);
DEFLIT(lit_469);
DEFLIT(lit_151);
DEFLIT(lit_42);
DEFLIT(lit_398);
DEFLIT(lit_462);
DEFLIT(lit_54);
DEFLIT(lit_47);
DEFLIT(lit_210);
DEFLIT(lit_176);
DEFLIT(lit_389);

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
FUNFOR(Yx8rSg2cYmodule_up_to_dateQ);
LOCFOR(fun_15);
LOCFOR(fun_16);
FUNFOR(Yx8rSg2cYpurge_outdated_modules);
FUNFOR(Yx8rSg2cYg2c_def_app);
FUNFOR(Yx8rSg2cYg2c_build_app);
FUNFOR(Yx8rSg2cYg2c_test);
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
LOCFOR(fun_x_1510_51);
FUNFOR(Yx8rSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_53);
LOCFOR(fun_mangle_string_literal_54);
LOCFOR(fun_mangle_string_literal_55);
LOCFOR(fun_process_integer_56);
LOCFOR(fun_mangle_integer_57);
LOCFOR(fun_x_1512_58);
LOCFOR(fun_x_1514_59);
LOCFOR(fun_x_1516_60);
LOCFOR(fun_x_1518_61);
FUNFOR(Yx8rSg2cYmangler_reset);
LOCFOR(fun_x_1520_63);
FUNFOR(Yx8rSg2cYmangle_name_into);
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
LOCFOR(fun_x_1524_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1528_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_x_1532_81);
LOCFOR(fun_loop_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_gen_result_85);
LOCFOR(fun_x_1534_86);
LOCFOR(fun_gen_depth_87);
LOCFOR(fun_x_1538_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_x_1542_91);
LOCFOR(fun_92);
LOCFOR(fun_93);
LOCFOR(fun_x_1546_94);
LOCFOR(fun_95);
LOCFOR(fun_96);
LOCFOR(fun_x_1548_97);
LOCFOR(fun_generate_quotation_forwards_98);
LOCFOR(fun_x_1550_99);
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
LOCFOR(fun_x_1554_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_generate_quotation_115);
LOCFOR(fun_binding_Gc_116);
LOCFOR(fun_binding_Gc_117);
LOCFOR(fun_binding_Gc_118);
LOCFOR(fun_reference_Gc_119);
LOCFOR(fun_reference_Gc_120);
LOCFOR(fun_to_c_121);
LOCFOR(fun_to_c_122);
LOCFOR(fun_gen_ref_123);
LOCFOR(fun_gen_ref_124);
LOCFOR(fun_gen_ref_125);
LOCFOR(fun_gen_ref_126);
LOCFOR(fun_gen_ref_127);
LOCFOR(fun_gen_ref_128);
LOCFOR(fun_to_c_129);
LOCFOR(fun_to_c_130);
LOCFOR(fun_to_c_131);
LOCFOR(fun_to_c_132);
LOCFOR(fun_to_c_133);
LOCFOR(fun_to_c_134);
LOCFOR(fun_135);
LOCFOR(fun_to_c_136);
LOCFOR(fun_x_1562_137);
LOCFOR(fun_x_1565_138);
LOCFOR(fun_x_1568_139);
LOCFOR(fun_generate_self_recursive_call_140);
LOCFOR(fun_x_1570_141);
LOCFOR(fun_x_1573_142);
LOCFOR(fun_to_c_143);
LOCFOR(fun_x_1577_144);
LOCFOR(fun_to_c_145);
LOCFOR(fun_x_1581_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_x_1585_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_x_1590_153);
LOCFOR(fun_x_1595_154);
LOCFOR(fun_to_c_155);
LOCFOR(fun_156);
LOCFOR(fun_x_1598_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_funshell_to_c_159);
LOCFOR(fun_160);
LOCFOR(fun_x_1602_161);
LOCFOR(fun_funinit_to_c_162);
LOCFOR(fun_to_c_163);
LOCFOR(fun_x_1606_164);
LOCFOR(fun_out_list_builder_165);
LOCFOR(fun_166);
LOCFOR(fun_gen_fab_list_167);
LOCFOR(fun_generate_function_specs_168);
LOCFOR(fun_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_to_c_171);
LOCFOR(fun_x_1610_172);
LOCFOR(fun_generate_function_forwards_173);
LOCFOR(fun_x_1614_174);
LOCFOR(fun_generate_function_forward_175);
LOCFOR(fun_generate_function_binding_176);
LOCFOR(fun_generate_function_forward_177);
LOCFOR(fun_178);
LOCFOR(fun_generate_function_bodies_179);
LOCFOR(fun_180);
LOCFOR(fun_generate_functions_181);
LOCFOR(fun_generate_closure_structure_182);
LOCFOR(fun_generate_function_body_reference_183);
LOCFOR(fun_x_1620_184);
LOCFOR(fun_generate_shadow_args_185);
LOCFOR(fun_generate_return_186);
LOCFOR(fun_generate_return_187);
LOCFOR(fun_primitive_inlinableQ_188);
LOCFOR(fun_x_1626_189);
LOCFOR(fun_generate_function_code_190);
LOCFOR(fun_dispatcherQ_191);
LOCFOR(fun_x_1630_192);
LOCFOR(fun_193);
LOCFOR(fun_generate_function_code_194);
LOCFOR(fun_x_1632_195);
LOCFOR(fun_generate_local_temporaries_196);
LOCFOR(fun_next_reg_197);
LOCFOR(fun_next_line_198);
LOCFOR(fun_generate_registers_199);
LOCFOR(fun_module_info_name_200);
LOCFOR(fun_maybe_declare_201);
LOCFOR(fun_202);
FUNFOR(Yx8rSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_1634_204);
LOCFOR(fun_205);
LOCFOR(fun_206);
LOCFOR(fun_x_1636_207);
FUNFOR(Yx8rSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_209);
LOCFOR(fun_module_init_decl_210);
LOCFOR(fun_x_1638_211);
LOCFOR(fun_x_1640_212);
LOCFOR(fun_generate_module_init_213);
LOCFOR(fun_generate_main_214);
extern P Yx8rSg2cY___main_0___ ();
extern P Yx8rSg2cY___main_1___ ();
extern P Yx8rSg2cY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSg2cYmodule_loader_appname));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSg2cYmodule_loader_appname));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSg2cYmodule_loader_app_modname));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSg2cYmodule_loader_app_modname));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSg2cYmodule_src_file));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSg2cYmodule_src_file));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSg2cYmodule_mtime));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSg2cYmodule_mtime));
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
  RET(VARREF(Yx8rSg2cYLg2c_moduleG));
}

FUNCODEDEF(fun_9) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),FREEREF(0));
  VARSET(Yx8rSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALLN(1,VARREF(Yx8rSg2cYgenerate_c_module),4,T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_10) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yx8rSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_1506F2077;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1506F2077 = VARREF(Yx8rSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1506F2077);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF2078;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2078 = T1;
  if (tmpF2078 != YPfalse) {
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
  P out_portF2087;
  P prgF2086;
  P astF2085;
  P out_fileF2084;
  P src_fileF2083;
  P fileF2082;
  P envF2081;
  P keepmodQF2080;
  P modF2079;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYfab_g2c_module),loader_,name_);
  modF2079 = T1;
  keepmodQF2080 = YPfalse;
  T4 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),modF2079);
  envF2081 = T4;
  T6 = CALL1(1,VARREF(Yx8rSastYmodule_name_to_relpath),name_);
  fileF2082 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF2082);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF2083 = T8;
  T12 = CALL1(1,VARREF(Yx8rSg2cYmodule_loader_appname),loader_);
  T13 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF2082);
  T11 = CALL2(1,VARREF(YgooSsystemYadd_build_path),T12,T13);
  out_fileF2084 = T11;
  CALL2(1,VARREF(Yx8rSg2cYmodule_src_file_setter),src_fileF2083,modF2079);
  T14 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF2083);
  CALL2(1,VARREF(Yx8rSg2cYmodule_mtime_setter),T14,modF2079);
  T16 = CALL2(1,VARREF(Yx8rSg2cYcompute_ast),src_fileF2083,envF2081);
  astF2085 = T16;
  T18 = CALL2(1,VARREF(Yx8rSg2cYcompute_program),astF2085,envF2081);
  prgF2086 = T18;
  T19 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF2084);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T19);
  out_portF2087 = YPfalse;
  out_portF2087 = BOXFAB(out_portF2087);
  T22 = FUNFAB(fun_11,5,out_portF2087,out_fileF2084,prgF2086,astF2085,modF2079);
  T23 = FUNFAB(fun_12,1,out_portF2087);
  T21 = with_cleanup(T22,T23);
  T17 = modF2079;
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

FUNCODEDEF(Yx8rSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(Yx8rSg2cYmodule_src_file),mod_);
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
  T2 = CALL1(1,VARREF(Yx8rSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T6 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSlstYpush),T5,T6);
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
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_19),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF2088;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF2088 = Ynil;
  changedF2088 = BOXFAB(changedF2088);
  T2 = FUNFAB(fun_15,1,changedF2088);
  CALL2(1,VARREF(Yx8rSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_16;
  T4 = BOXVAL(changedF2088);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF2088);
  T5 = CALL2(1,VARREF(Yx8rSastYremove_modules_by_nameX),loader_,T6);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSg2cYLg2c_module_loaderG),VARREF(Yx8rSg2cYmodule_loader_appname),appname_,VARREF(Yx8rSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSg2cYg2c_build_app) {
  P loader_;
  P modF2089;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(Yx8rSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(Yx8rSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(Yx8rSastYprobe_module),loader_,T2);
  modF2089 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_24));
  CALL2(1,VARREF(Yx8rSastYdo_module_loader_modules),VARREF(Yx8rSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_c_application),loader_,modF2089);
  CALL1(1,VARREF(Yx8rSg2cYgenerate_makefile),loader_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSg2cYg2c_test) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSmathYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_27),T3);
  T1 = CALL2(1,VARREF(Yx8rSg2cYg2c_def_app),T2,LITREF(lit_28));
  T0 = VARSET(Yx8rSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),FREEREF(0));
  VARSET(Yx8rSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALLN(1,VARREF(Yx8rSg2cYgenerate_c_module),4,T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_22) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yx8rSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P x_1508F2090;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(Yx8rSg2cYTdynamic_linkingQT,YPtrue);
  x_1508F2090 = VARREF(Yx8rSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_21,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_22,1,x_1508F2090);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yx8rSg2cYTdynamic_linkingQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P x_1507F2091;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1507F2091 = VARREF(Yx8rSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_23,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_24,1,x_1507F2091);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_26) {
  P tmpF2092;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2092 = T1;
  if (tmpF2092 != YPfalse) {
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
  P out_portF2098;
  P prgF2097;
  P out_fileF2096;
  P fileF2095;
  P nameF2094;
  P modF2093;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYenvironment_module),env_);
  modF2093 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),VARREF(Yx8rSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = VARSET(Yx8rSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSruntimeYformat_to_string),LITREF(lit_32),T4,T5);
  nameF2094 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF2094);
  fileF2095 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF2095);
  out_fileF2096 = T10;
  T12 = CALL2(1,VARREF(Yx8rSg2cYcompute_program),ast_,env_);
  prgF2097 = T12;
  out_portF2098 = YPfalse;
  out_portF2098 = BOXFAB(out_portF2098);
  T15 = FUNFAB(fun_25,5,out_portF2098,out_fileF2096,prgF2097,ast_,modF2093);
  T16 = FUNFAB(fun_26,1,out_portF2098);
  T14 = with_cleanup(T15,T16);
  T11 = fileF2095;
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
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),exp_,env_,YPfalse);
  T0 = CALL2(1,VARREF(Yx8rSg2cYg2c_ast),T1,env_);
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
  (P)Yx8rSg2cYPcompile(T0);
  T2 = (P)YPsu(name_);
  T1 = (P)Yx8rSg2cYPload(T2);
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
  T0 = (P)Yx8rSg2cYPload(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF2099;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSg2cYg2c_exp),exp_,env_);
  nameF2099 = T1;
  T2 = CALL1(1,VARREF(Yx8rSg2cYcompile_load),nameF2099);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF2100;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSg2cYg2c_ast),ast_,env_);
  nameF2100 = T1;
  T2 = CALL1(1,VARREF(Yx8rSg2cYcompile_load),nameF2100);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_top_33) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Yx8rSg2cYg2c_build_app),VARREF(Yx8rSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_clean_34) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yx8rSg2cYg2c_def_app),LITREF(lit_41),LITREF(lit_28));
  VARSET(Yx8rSg2cYTg2c_appT,T0);
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
  T1 = CALL1(1,VARREF(Yx8rStopYread_file),filename_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF2106;
  P prgF2105;
  P lftF2104;
  P calF2103;
  P dynF2102;
  P boxF2101;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),e_);
  boxF2101 = T1;
  T3 = CALL1(1,VARREF(Yx8rSast_linearizeYanalyze_dynamic_extent),boxF2101);
  dynF2102 = T3;
  T5 = CALL1(1,VARREF(Yx8rSast_linearizeYanalyze_calls),dynF2102);
  calF2103 = T5;
  T7 = CALL1(1,VARREF(Yx8rSast_linearizeYliftX),calF2103);
  lftF2104 = T7;
  T9 = CALL1(1,VARREF(Yx8rSast_linearizeYextract_thingsX),lftF2104);
  prgF2105 = T9;
  T11 = CALL3(1,VARREF(Yx8rSast_linearizeYclosurize_mainX),prgF2105,env_,YPint((P)64));
  fltF2106 = T11;
  CALL1(1,VARREF(Yx8rSast_linearizeYgather_temporariesX),fltF2106);
  CALL2(1,VARREF(Yx8rSast_linearizeYregister_allocateX),fltF2106,YPfalse);
  T10 = prgF2105;
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
  CALL2(1,VARREF(Yx8rSg2cYgenerate_header),code_out_,e_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_global_environment),code_out_,mod_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_quotation_forwards),code_out_,T0);
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_function_forwards),code_out_,T1);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_function_bodies),code_out_,T2);
  T3 = CALL1(1,VARREF(Ynot),VARREF(Yx8rSg2cYTdynamic_linkingQT));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yx8rSg2cYgenerate_module_info),code_out_,mod_);
  } else {
  }
  T5 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(Yx8rSg2cYgenerate_module_init),code_out_,mod_,T5);
  CALL1(1,VARREF(Yx8rSg2cYgenerate_trailer),code_out_);
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
  CALL2(1,VARREF(Yx8rSg2cYgenerate_header),T1,YPfalse);
  T2 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(Yx8rSg2cYgenerate_main),T2,FREEREF(2));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yx8rSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_39) {
  P tmpF2107;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2107 = T1;
  if (tmpF2107 != YPfalse) {
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
  P out_portF2111;
  P out_nameF2110;
  P init_nameF2109;
  P appnameF2108;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmodule_loader_appname),loader_);
  appnameF2108 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF2108,LITREF(lit_51));
  init_nameF2109 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF2109);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2108,T6);
  out_nameF2110 = T5;
  out_portF2111 = YPfalse;
  out_portF2111 = BOXFAB(out_portF2111);
  T9 = FUNFAB(fun_38,3,out_portF2111,out_nameF2110,mod_);
  T10 = FUNFAB(fun_39,1,out_portF2111);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P mod_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  T4 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_name_to_relpath),T4);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  T0 = CALL3(1,VARREF(YgooSruntimeYformat),T1,LITREF(lit_60),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL3(1,VARREF(YgooSruntimeYformat),T1,LITREF(lit_55),FREEREF(2));
  T2 = BOXVAL(FREEREF(0));
  CALL3(1,VARREF(YgooSruntimeYformat),T2,LITREF(lit_56),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSruntimeYformat),5,T3,LITREF(lit_57),VARREF(YgooSsystemYTc_extensionT),VARREF(YgooSsystemYTobj_extensionT),FREEREF(2));
  T4 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YgooSruntimeYformat),T4,LITREF(lit_58));
  T5 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YgooSruntimeYformat),T5,LITREF(lit_59));
  T6 = FUNFAB(fun_41,1,FREEREF(0));
  CALL2(1,VARREF(Yx8rSastYdo_module_loader_modules),T6,FREEREF(3));
  T7 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL3(1,VARREF(YgooSruntimeYformat),T7,LITREF(lit_61),T8);
  T9 = BOXVAL(FREEREF(0));
  CALL3(1,VARREF(YgooSruntimeYformat),T9,LITREF(lit_62),FREEREF(5));
  T10 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSruntimeYformat),5,T10,LITREF(lit_63),FREEREF(5),FREEREF(2),FREEREF(2));
  T12 = BOXVAL(FREEREF(0));
  T11 = CALLN(1,VARREF(YgooSruntimeYformat),4,T12,LITREF(lit_64),FREEREF(5),FREEREF(2));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_43) {
  P tmpF2112;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2112 = T1;
  if (tmpF2112 != YPfalse) {
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
  P code_outF2118;
  P out_nameF2117;
  P sepF2116;
  P exe_nameF2115;
  P init_nameF2114;
  P appnameF2113;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmodule_loader_appname),loader_);
  appnameF2113 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF2113,LITREF(lit_53));
  init_nameF2114 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF2113);
  exe_nameF2115 = T5;
  sepF2116 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2113,LITREF(lit_54));
  out_nameF2117 = T8;
  code_outF2118 = YPfalse;
  code_outF2118 = BOXFAB(code_outF2118);
  T12 = FUNFAB(fun_42,6,code_outF2118,out_nameF2117,sepF2116,loader_,init_nameF2114,exe_nameF2115);
  T13 = FUNFAB(fun_43,1,code_outF2118);
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
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  CALL2(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_67));
  CALL2(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_68));
  if (VARREF(Yx8rSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_69));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_trailer_47) {
  P code_out_;
  P T0;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_71));
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
  T2 = CALL2(1,VARREF(Yx8rSastYbinding_native_toQ),binding_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(Yx8rSg2cYgenerate_global_binding),FREEREF(0),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_global_environment_49) {
  P code_out_,mod_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_73),T0);
  T2 = FUNFAB(fun_48,2,code_out_,mod_);
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T1 = CALL2(1,VARREF(Yx8rSastYdo_static_global_bindings),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_global_binding_50) {
  P code_out_,importedQ_,gb_;
  P nameF2121;
  P tmpF2120;
  P kindF2119;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),gb_);
  kindF2119 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2119,LITREF(lit_78));
  tmpF2120 = T4;
  if (tmpF2120 != YPfalse) {
    T5 = tmpF2120;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2119,LITREF(lit_79));
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(Yx8rSastYbinding_name),gb_);
    nameF2121 = T8;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_81);
    } else {
      T10 = LITREF(lit_82);
    }
    T11 = CALL1(1,VARREF(Yx8rSg2cYmangle_module_binding),gb_);
    T13 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),T13);
    T14 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),nameF2121);
    T9 = CALLN(1,VARREF(YgooSruntimeYformat),6,code_out_,LITREF(lit_80),T10,T11,T12,T14);
    T7 = T9;
    T2 = T7;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1510_51) {
  P x_1509_;
  P iF2122;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1509_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1509_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1509_);
    check_type(T4,VARREF(YLintG));
    iF2122 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF2122);
    CALL3(1,VARREF(YgooScolsScolYelt_setter),T5,FREEREF(1),iF2122);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1509_);
    a1 = T7;
    x_1509_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSg2cYchar_buffer_as_string) {
  P buffer_;
  P x_1510F2125;
  P stringF2124;
  P buffer_sizeF2123;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF2123 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF2123);
  check_type(T3,VARREF(YLstrG));
  stringF2124 = T3;
  T4 = FUNSHELL(1,fun_x_1510_51,3);
  x_1510F2125 = T4;
  FUNINIT(x_1510F2125, 3,buffer_,stringF2124,x_1510F2125);
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),buffer_sizeF2123);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T5 = CALL1(0,x_1510F2125,T6);
  T2 = stringF2124;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_53) {
  P i_;
  P encF2127;
  P cF2126;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yx8rSg2cYchar_buffer_as_string),VARREF(Yx8rSg2cYTmangle_bufferT));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),i_);
    cF2126 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF2126);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDc_escapes),T7);
    encF2127 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF2127,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(Yx8rSg2cYTmangle_bufferT),cF2126);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(Yx8rSg2cYTmangle_bufferT),encF2127);
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
  P loopF2129;
  P lenF2128;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsSbufYlen_setter),YPint((P)0),VARREF(Yx8rSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF2128 = T1;
  T3 = FUNSHELL(1,fun_loop_53,3);
  loopF2129 = T3;
  FUNINIT(loopF2129, 3,lenF2128,str_,loopF2129);
  T4 = CALL1(0,loopF2129,YPint((P)0));
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
  T0 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_integer_56) {
  P number_,index_;
  P resultF2135;
  P resultF2134;
  P digitF2133;
  P remainderF2132;
  P quotientF2131;
  P tup40F2130;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup40F2130 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F2130,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF2131 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup40F2130,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF2132 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDnumber_characters),remainderF2132);
  check_type(T7,VARREF(YLchrG));
  digitF2133 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF2131,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),index_);
    check_type(T11,VARREF(YLstrG));
    resultF2134 = T11;
    CALL3(1,VARREF(YgooScolsScolYelt_setter),digitF2133,resultF2134,YPint((P)0));
    T10 = resultF2134;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF2131,T14);
    check_type(T13,VARREF(YLstrG));
    resultF2135 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF2135);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolYelt_setter),digitF2133,resultF2135,T15);
    T12 = resultF2135;
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
  P process_integerF2136;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T1 = FUNSHELL(1,fun_process_integer_56,1);
  process_integerF2136 = T1;
  FUNINIT(process_integerF2136, 1,process_integerF2136);
  T2 = CALL2(1,process_integerF2136,number_,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1512_58) {
  P x_1511_;
  P iF2137;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1511_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1511_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1511_);
    iF2137 = T4;
    T6 = CALL1(1,VARREF(Yx8rSg2cYmangle_integer),iF2137);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(Yx8rSg2cYDescape_separator),T6,VARREF(Yx8rSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolYelt_setter),T5,FREEREF(0),iF2137);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1511_);
    a1 = T8;
    x_1511_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1514_59) {
  P x_1513_;
  P mangleF2138;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1513_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1513_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1513_);
    mangleF2138 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF2138,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF2138,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1513_);
    a1 = T9;
    x_1513_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1516_60) {
  P x_1515_;
  P iF2139;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1515_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1515_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1515_);
    iF2139 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF2139);
    CALL3(1,VARREF(YgooScolsScolYelt_setter),T5,FREEREF(0),iF2139);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1515_);
    a1 = T7;
    x_1515_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1518_61) {
  P x_1517_;
  P iF2140;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1517_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1517_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1517_);
    iF2140 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF2140);
    CALL3(1,VARREF(YgooScolsScolYelt_setter),T5,FREEREF(0),iF2140);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1517_);
    a1 = T7;
    x_1517_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSg2cYmangler_reset) {
  P buffer_;
  P T0;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSbufYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1520_63) {
  P x_1519_;
  P cF2141;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1519_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1519_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1519_);
    cF2141 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF2141);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1519_);
    a1 = T9;
    x_1519_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSg2cYmangle_name_into) {
  P buf_,name_;
  P x_1520F2142;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1520_63,2);
  x_1520F2142 = T1;
  FUNINIT(x_1520F2142, 2,buf_,x_1520F2142);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T2 = CALL1(0,x_1520F2142,T3);
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
  CALL1(1,VARREF(Yx8rSg2cYmangler_reset),VARREF(Yx8rSg2cYTmangle_bufferT));
  CALL2(1,VARREF(Yx8rSg2cYmangle_name_into),VARREF(Yx8rSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(Yx8rSg2cYchar_buffer_as_string),VARREF(Yx8rSg2cYTmangle_bufferT));
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
  T0 = CALL1(1,VARREF(Yx8rSg2cYmangle_raw_name),T1);
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
  CALL1(1,VARREF(Yx8rSg2cYmangler_reset),VARREF(Yx8rSg2cYTmangle_bufferT));
  CALL2(1,VARREF(Yx8rSg2cYmangle_name_into),VARREF(Yx8rSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(Yx8rSg2cYTmangle_bufferT),VARREF(Yx8rSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(Yx8rSg2cYchar_buffer_as_string),VARREF(Yx8rSg2cYTmangle_bufferT));
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
  T0 = CALL1(1,VARREF(Yx8rSg2cYmangle_local_name),T1);
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
  CALL1(1,VARREF(Yx8rSg2cYmangler_reset),VARREF(Yx8rSg2cYTmangle_bufferT));
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),modname_,VARREF(Yx8rSastYDgoo_boot_module_name));
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(Yx8rSg2cYTmangle_bufferT),VARREF(Yx8rSg2cYDmodule_marker));
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),modname_);
    T2 = CALL2(1,VARREF(Yx8rSg2cYmangle_name_into),VARREF(Yx8rSg2cYTmangle_bufferT),T3);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(Yx8rSg2cYTmangle_bufferT),VARREF(Yx8rSg2cYDmodule_marker));
  CALL2(1,VARREF(Yx8rSg2cYmangle_name_into),VARREF(Yx8rSg2cYTmangle_bufferT),name_);
  T4 = CALL1(1,VARREF(Yx8rSg2cYchar_buffer_as_string),VARREF(Yx8rSg2cYTmangle_bufferT));
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
  T0 = CALL2(1,VARREF(Yx8rSg2cYmangle_global_name),modname_,T1);
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
  T0 = CALL2(1,VARREF(Yx8rSg2cYmangle_global_name),VARREF(Yx8rSastYDgoo_boot_module_name),name_);
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
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),binding_);
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T0 = CALL2(1,VARREF(Yx8rSg2cYmangle_global_name),T1,T2);
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
  CALL1(1,VARREF(Yx8rSg2cYmangler_reset),VARREF(Yx8rSg2cYTmangle_bufferT));
  CALL2(1,VARREF(Yx8rSg2cYmangle_name_into),VARREF(Yx8rSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(Yx8rSg2cYTmangle_bufferT),VARREF(Yx8rSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(Yx8rSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(Yx8rSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(Yx8rSg2cYchar_buffer_as_string),VARREF(Yx8rSg2cYTmangle_bufferT));
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
  T0 = CALL2(1,VARREF(Yx8rSg2cYmangle_local_marked_name),T1,marker_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1524_75) {
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
  P out_varF2154;
  P x_1523F2153;
  P x_1523F2152;
  P x_1523F2151;
  P x_1523F2150;
  P x_1523F2149;
  P x_1523F2148;
  P bodyF2147;
  P clausesF2146;
  P out_valF2145;
  P x_1523F2144;
  P x_1524F2143;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1524_75,1);
  x_1524F2143 = T1;
  FUNINIT(x_1524F2143, 1,return_);
  x_1523F2144 = FREEREF(0);
  out_valF2145 = YPfalse;
  out_valF2145 = BOXFAB(out_valF2145);
  clausesF2146 = YPfalse;
  clausesF2146 = BOXFAB(clausesF2146);
  bodyF2147 = YPfalse;
  bodyF2147 = BOXFAB(bodyF2147);
  T9 = CALL2(1,VARREF(YisaQ),x_1523F2144,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1523F2144,LITREF(lit_150),x_1524F2143);
    x_1523F2148 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1523F2148,x_1524F2143);
    BOXVAL(out_valF2145) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1523F2148);
    x_1523F2149 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1523F2149,x_1524F2143);
    x_1523F2150 = T16;
    BOXVAL(clausesF2146) = x_1523F2150;
    x_1523F2151 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1523F2151,x_1524F2143);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1523F2149);
    x_1523F2152 = T19;
    BOXVAL(bodyF2147) = x_1523F2152;
    x_1523F2153 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1523F2153,x_1524F2143);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1524F2143,LITREF(lit_151),x_1523F2144);
  }
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2154 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T31 = CALL1(1,VARREF(Ylst),out_varF2154);
  T33 = BOXVAL(out_valF2145);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_153));
  T39 = BOXVAL(clausesF2146);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T46 = CALL1(1,VARREF(Ylst),YPtrue);
  T47 = CALL1(1,VARREF(Ylst),YPfalse);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),4,T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T55 = CALL1(1,VARREF(Ylst),out_varF2154);
  T56 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T53 = CALLN(1,VARREF(YgooSmacrosYcat),4,T54,T55,T56,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T49 = CALLN(1,VARREF(YgooSmacrosYcat),4,T50,T51,T52,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T57 = BOXVAL(bodyF2147);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),5,T36,T37,T48,T57,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),4,T26,T27,T34,Ynil);
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

FUNCODEDEF(fun_x_1528_78) {
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
  P out_varF2164;
  P x_1527F2163;
  P x_1527F2162;
  P x_1527F2161;
  P x_1527F2160;
  P x_1527F2159;
  P bodyF2158;
  P out_valF2157;
  P x_1527F2156;
  P x_1528F2155;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1528_78,1);
  x_1528F2155 = T1;
  FUNINIT(x_1528F2155, 1,return_);
  x_1527F2156 = FREEREF(0);
  out_valF2157 = YPfalse;
  out_valF2157 = BOXFAB(out_valF2157);
  bodyF2158 = YPfalse;
  bodyF2158 = BOXFAB(bodyF2158);
  T7 = CALL2(1,VARREF(YisaQ),x_1527F2156,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1527F2156,LITREF(lit_159),x_1528F2155);
    x_1527F2159 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1527F2159,x_1528F2155);
    x_1527F2160 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1527F2160,x_1528F2155);
    BOXVAL(out_valF2157) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1527F2160);
    x_1527F2161 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1527F2161,x_1528F2155);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1527F2159);
    x_1527F2162 = T16;
    BOXVAL(bodyF2158) = x_1527F2162;
    x_1527F2163 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1527F2163,x_1528F2155);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1528F2155,LITREF(lit_151),x_1527F2156);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2164 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T28 = CALL1(1,VARREF(Ylst),out_varF2164);
  T30 = BOXVAL(out_valF2157);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T34 = CALL1(1,VARREF(Ylst),out_varF2164);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALLN(1,VARREF(YgooSmacrosYcat),4,T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T36 = BOXVAL(bodyF2158);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T40 = CALL1(1,VARREF(Ylst),out_varF2164);
  T41 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),4,T39,T40,T41,Ynil);
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

FUNCODEDEF(fun_x_1532_81) {
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
  P tmpF2165;
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
    tmpF2165 = firstQ_;
    if (tmpF2165 != YPfalse) {
      T8 = tmpF2165;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
      T11 = CALL1(1,VARREF(Ylst),FREEREF(1));
      T12 = CALL1(1,VARREF(Ylst),YPchr((P)44));
      T9 = CALLN(1,VARREF(YgooSmacrosYcat),4,T10,T11,T12,Ynil);
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
  P loopF2176;
  P out_varF2175;
  P x_1531F2174;
  P x_1531F2173;
  P x_1531F2172;
  P x_1531F2171;
  P x_1531F2170;
  P bodyF2169;
  P out_valF2168;
  P x_1531F2167;
  P x_1532F2166;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1532_81,1);
  x_1532F2166 = T1;
  FUNINIT(x_1532F2166, 1,return_);
  x_1531F2167 = FREEREF(0);
  out_valF2168 = YPfalse;
  out_valF2168 = BOXFAB(out_valF2168);
  bodyF2169 = YPfalse;
  bodyF2169 = BOXFAB(bodyF2169);
  T7 = CALL2(1,VARREF(YisaQ),x_1531F2167,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1531F2167,LITREF(lit_161),x_1532F2166);
    x_1531F2170 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1531F2170,x_1532F2166);
    x_1531F2171 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F2171,x_1532F2166);
    BOXVAL(out_valF2168) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1531F2171);
    x_1531F2172 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1531F2172,x_1532F2166);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1531F2170);
    x_1531F2173 = T16;
    BOXVAL(bodyF2169) = x_1531F2173;
    x_1531F2174 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1531F2174,x_1532F2166);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1532F2166,LITREF(lit_151),x_1531F2167);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2175 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T28 = CALL1(1,VARREF(Ylst),out_varF2175);
  T30 = BOXVAL(out_valF2168);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T34 = CALL1(1,VARREF(Ylst),out_varF2175);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALLN(1,VARREF(YgooSmacrosYcat),4,T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T37 = FUNSHELL(1,fun_loop_82,2);
  loopF2176 = T37;
  FUNINIT(loopF2176, 2,loopF2176,out_varF2175);
  T39 = BOXVAL(bodyF2169);
  T38 = CALL3(0,loopF2176,Ynil,T39,YPtrue);
  T36 = T38;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T43 = CALL1(1,VARREF(Ylst),out_varF2175);
  T44 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T41 = CALLN(1,VARREF(YgooSmacrosYcat),4,T42,T43,T44,Ynil);
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
  P tmpF2179;
  P tmpF2178;
  P regF2177;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  regF2177 = T1;
  tmpF2178 = regF2177;
  if (tmpF2178 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_166),regF2177);
    tmpF2179 = T5;
    if (tmpF2179 != YPfalse) {
      T6 = YPtrue;
    } else {
      T6 = YPfalse;
    }
    T4 = T6;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1534_86) {
  P x_1533_;
  P iF2180;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1533_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1533_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1533_);
    iF2180 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_170));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1533_);
    a1 = T6;
    x_1533_ = a1;
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
  P x_1534F2181;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1534_86,2);
  x_1534F2181 = T1;
  FUNINIT(x_1534F2181, 2,code_out_,x_1534F2181);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1534F2181,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1538_88) {
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
  P x_1537F2192;
  P x_1537F2191;
  P x_1537F2190;
  P x_1537F2189;
  P x_1537F2188;
  P x_1537F2187;
  P bodyF2186;
  P code_outF2185;
  P dF2184;
  P x_1537F2183;
  P x_1538F2182;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1538_88,1);
  x_1538F2182 = T1;
  FUNINIT(x_1538F2182, 1,return_);
  x_1537F2183 = FREEREF(0);
  dF2184 = YPfalse;
  dF2184 = BOXFAB(dF2184);
  code_outF2185 = YPfalse;
  code_outF2185 = BOXFAB(code_outF2185);
  bodyF2186 = YPfalse;
  bodyF2186 = BOXFAB(bodyF2186);
  T9 = CALL2(1,VARREF(YisaQ),x_1537F2183,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1537F2183,LITREF(lit_172),x_1538F2182);
    x_1537F2187 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1537F2187,x_1538F2182);
    x_1537F2188 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1537F2188,x_1538F2182);
    BOXVAL(dF2184) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1537F2188);
    x_1537F2189 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1537F2189,x_1538F2182);
    BOXVAL(code_outF2185) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1537F2189);
    x_1537F2190 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1537F2190,x_1538F2182);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1537F2187);
    x_1537F2191 = T21;
    BOXVAL(bodyF2186) = x_1537F2191;
    x_1537F2192 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1537F2192,x_1538F2182);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1538F2182,LITREF(lit_151),x_1537F2183);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_173));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_167));
  T31 = BOXVAL(dF2184);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T33 = BOXVAL(code_outF2185);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALLN(1,VARREF(YgooSmacrosYcat),4,T29,T30,T32,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = BOXVAL(bodyF2186);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_174));
  T39 = BOXVAL(code_outF2185);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_175));
  T36 = CALLN(1,VARREF(YgooSmacrosYcat),4,T37,T38,T40,Ynil);
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

FUNCODEDEF(fun_x_1542_91) {
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
  P x_1541F2205;
  P x_1541F2204;
  P x_1541F2203;
  P x_1541F2202;
  P x_1541F2201;
  P x_1541F2200;
  P x_1541F2199;
  P bodyF2198;
  P code_outF2197;
  P dF2196;
  P eF2195;
  P x_1541F2194;
  P x_1542F2193;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1542_91,1);
  x_1542F2193 = T1;
  FUNINIT(x_1542F2193, 1,return_);
  x_1541F2194 = FREEREF(0);
  eF2195 = YPfalse;
  eF2195 = BOXFAB(eF2195);
  dF2196 = YPfalse;
  dF2196 = BOXFAB(dF2196);
  code_outF2197 = YPfalse;
  code_outF2197 = BOXFAB(code_outF2197);
  bodyF2198 = YPfalse;
  bodyF2198 = BOXFAB(bodyF2198);
  T11 = CALL2(1,VARREF(YisaQ),x_1541F2194,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1541F2194,LITREF(lit_177),x_1542F2193);
    x_1541F2199 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1541F2199,x_1542F2193);
    x_1541F2200 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1541F2200,x_1542F2193);
    BOXVAL(eF2195) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1541F2200);
    x_1541F2201 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1541F2201,x_1542F2193);
    BOXVAL(dF2196) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1541F2201);
    x_1541F2202 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1541F2202,x_1542F2193);
    BOXVAL(code_outF2197) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1541F2202);
    x_1541F2203 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1541F2203,x_1542F2193);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1541F2199);
    x_1541F2204 = T26;
    BOXVAL(bodyF2198) = x_1541F2204;
    x_1541F2205 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1541F2205,x_1542F2193);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1542F2193,LITREF(lit_151),x_1541F2194);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T35 = BOXVAL(dF2196);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(code_outF2197);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_164));
  T42 = BOXVAL(eF2195);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(dF2196);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(code_outF2197);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T39 = CALLN(1,VARREF(YgooSmacrosYcat),5,T40,T41,T43,T45,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = BOXVAL(bodyF2198);
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

FUNCODEDEF(fun_x_1546_94) {
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
  P x_1545F2218;
  P x_1545F2217;
  P x_1545F2216;
  P x_1545F2215;
  P x_1545F2214;
  P x_1545F2213;
  P x_1545F2212;
  P bodyF2211;
  P code_outF2210;
  P dF2209;
  P eF2208;
  P x_1545F2207;
  P x_1546F2206;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1546_94,1);
  x_1546F2206 = T1;
  FUNINIT(x_1546F2206, 1,return_);
  x_1545F2207 = FREEREF(0);
  eF2208 = YPfalse;
  eF2208 = BOXFAB(eF2208);
  dF2209 = YPfalse;
  dF2209 = BOXFAB(dF2209);
  code_outF2210 = YPfalse;
  code_outF2210 = BOXFAB(code_outF2210);
  bodyF2211 = YPfalse;
  bodyF2211 = BOXFAB(bodyF2211);
  T11 = CALL2(1,VARREF(YisaQ),x_1545F2207,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1545F2207,LITREF(lit_179),x_1546F2206);
    x_1545F2212 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1545F2212,x_1546F2206);
    x_1545F2213 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1545F2213,x_1546F2206);
    BOXVAL(eF2208) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1545F2213);
    x_1545F2214 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1545F2214,x_1546F2206);
    BOXVAL(dF2209) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1545F2214);
    x_1545F2215 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1545F2215,x_1546F2206);
    BOXVAL(code_outF2210) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1545F2215);
    x_1545F2216 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1545F2216,x_1546F2206);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1545F2212);
    x_1545F2217 = T26;
    BOXVAL(bodyF2211) = x_1545F2217;
    x_1545F2218 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1545F2218,x_1546F2206);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1546F2206,LITREF(lit_151),x_1545F2207);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_180));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_181));
  T36 = BOXVAL(eF2208);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_177));
  T43 = BOXVAL(eF2208);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(dF2209);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(code_outF2210);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T41 = CALLN(1,VARREF(YgooSmacrosYcat),4,T42,T44,T46,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = BOXVAL(bodyF2211);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),4,T39,T40,T48,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),4,T31,T32,T37,Ynil);
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

FUNCODEDEF(fun_x_1548_97) {
  P x_1547_;
  P qbF2219;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1547_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1547_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1547_);
    qbF2219 = T4;
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),qbF2219);
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(0),LITREF(lit_187),T5);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1547_);
    a1 = T7;
    x_1547_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_98) {
  P code_out_,qbT_;
  P x_1548F2220;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_184));
  T1 = FUNSHELL(1,fun_x_1548_97,2);
  x_1548F2220 = T1;
  FUNINIT(x_1548F2220, 2,code_out_,x_1548F2220);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_1548F2220,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1550_99) {
  P x_1549_;
  P qbF2221;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1549_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1549_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1549_);
    qbF2221 = T4;
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),qbF2221);
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(0),LITREF(lit_191),T5);
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_info),qbF2221);
    CALL2(1,VARREF(Yx8rSg2cYgenerate_quotation),FREEREF(0),T6);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_175));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1549_);
    a1 = T8;
    x_1549_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_100) {
  P code_out_,qbT_;
  P x_1550F2222;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1550_99,2);
  x_1550F2222 = T1;
  FUNINIT(x_1550F2222, 2,code_out_,x_1550F2222);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1550F2222,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_101) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_193));
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
    T2 = LITREF(lit_196);
  } else {
    T2 = LITREF(lit_197);
  }
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),T2);
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
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_198));
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
  T0 = CALL2(1,VARREF(Yx8rSg2cYgenerate_quotation),FREEREF(0),x_);
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
  T0 = CALL3(1,VARREF(Yx8rSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_106) {
  P code_out_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_200));
  T0 = CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_199),T1,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_107) {
  P code_out_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_202));
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T0 = CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_201),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_108) {
  P i_;
  P x_1552F2224;
  P x_1551F2223;
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
    x_1551F2223 = T4;
    x_1552F2224 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1552F2224,x_1551F2223,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1552F2224,x_1551F2223,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1552F2224,x_1551F2223,YPchr((P)120));
        if (T13 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolYelt_setter),YPchr((P)101),FREEREF(0),i_);
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
  P loopF2225;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_108,3);
  loopF2225 = T1;
  FUNINIT(loopF2225, 3,FREEREF(0),done_,loopF2225);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF2225,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_110) {
  P o_;
  P sF2226;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF2226 = T1;
  T3 = FUNFAB(fun_109,1,sF2226);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_111) {
  P code_out_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_207));
  T2 = CALL1(1,VARREF(Yx8rSg2cYfloat_to_c_string),x_);
  T0 = CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_206),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_112) {
  P code_out_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_209));
  T2 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),x_);
  T0 = CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_208),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1554_113) {
  P x_1553_;
  P eF2227;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1553_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1553_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1553_);
    eF2227 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_214));
    CALL2(1,VARREF(Yx8rSg2cYgenerate_quotation),FREEREF(0),eF2227);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1553_);
    a1 = T6;
    x_1553_ = a1;
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
  P x_1554F2228;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_211));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_210),T0,T1);
  T2 = FUNSHELL(1,fun_x_1554_113,2);
  x_1554F2228 = T2;
  FUNINIT(x_1554F2228, 2,code_out_,x_1554F2228);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T3 = CALL1(0,x_1554F2228,T4);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_215));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_generate_quotation_115) {
  P code_out_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_217));
  T2 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),x_);
  T0 = CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_216),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_116) {
  P binding_,code_out_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_kind),binding_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_219));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
    T3 = CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_220),T4);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(Yx8rSg2cYmangle_module_binding),binding_);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_117) {
  P binding_,code_out_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_local_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_Gc_118) {
  P binding_,code_out_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(Yx8rSastYbinding_index),binding_);
  T1 = CALL2(1,VARREF(Yx8rSg2cYmangle_local_marked_name),T2,T3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_119) {
  P v_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),v_,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_120) {
  P v_,code_out_;
  P x_1555F2229;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_kind),v_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_219));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_223);
  } else {
    T0 = LITREF(lit_224);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_1555F2229 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1555F2229,YPchr((P)40));
  CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),v_,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1555F2229,YPchr((P)41));
  T3 = T4;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_121) {
  P e_,f_,d_,code_out_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_quotations),code_out_,T0);
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYform_definitions),e_);
  CALLN(1,VARREF(Yx8rSg2cYgenerate_functions),4,T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYform_program),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T2,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
    T5 = CALL1(1,VARREF(Yx8rSast_linearizeYform_program),e_);
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),T5,code_out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_122) {
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

FUNCODEDEF(fun_gen_ref_123) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(Yx8rSg2cYreference_Gc),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_124) {
  P e_,code_out_;
  P x_1556F2230;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_228));
  x_1556F2230 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1556F2230,YPchr((P)40));
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYreference_offset),e_);
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_229),T1);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1556F2230,YPchr((P)41));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_125) {
  P e_,code_out_;
  P regF2231;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  regF2231 = T1;
  if (regF2231 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_230),regF2231);
    T2 = T3;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_231));
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_126) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYconstant_value),e_);
  T0 = CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_232),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_127) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(Yx8rSg2cYgenerate_quotation),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_128) {
  P e_,code_out_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYlast),e_);
  T0 = CALL2(1,VARREF(Yx8rSg2cYgen_ref),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_129) {
  P e_,f_,d_,code_out_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_233));
  T1 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),T1,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_234));
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_235));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_130) {
  P e_,f_,d_,code_out_;
  P x_1557F2232;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_236));
    x_1557F2232 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1557F2232,YPchr((P)40));
    T3 = CALL1(1,VARREF(Yx8rSastYboundQ_reference),e_);
    T2 = CALL1(1,VARREF(Yx8rSastYreference_binding),T3);
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),T2,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1557F2232,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_131) {
  P e_,f_,d_,code_out_;
  P x_1558F2233;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYbox_reference),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_237));
    x_1558F2233 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1558F2233,YPchr((P)40));
    T3 = CALL1(1,VARREF(Yx8rSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1558F2233,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_132) {
  P e_,f_,d_,code_out_;
  P x_1559F2234;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYbox_form),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_238));
  x_1559F2234 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1559F2234,YPchr((P)40));
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1559F2234,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_239));
  T3 = CALL1(1,VARREF(Yx8rSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_133) {
  P e_,f_,d_,code_out_;
  P x_1560F2236;
  P bindingF2235;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(Yx8rSast_linearizeYbox_reference),e_);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYbox_reference),T3);
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),T2);
  bindingF2235 = T1;
  CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),bindingF2235,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_240));
  x_1560F2236 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1560F2236,YPchr((P)40));
  CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),bindingF2235,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1560F2236,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_134) {
  P e_,f_,d_,code_out_;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYalternative_condition),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_241));
  T1 = CALL1(1,VARREF(Yx8rSastYalternative_condition),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T1,code_out_);
  T2 = CALL0(1,VARREF(Yx8rSg2cYfalse_name));
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_242),T2);
  T3 = CALL1(1,VARREF(Yx8rSastYalternative_consequent),e_);
  T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T3,f_,T4,code_out_);
  T5 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),T6,code_out_);
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,T7,code_out_);
    T8 = CALL1(1,VARREF(Yx8rSastYalternative_consequent),e_);
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),T8,code_out_);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  } else {
  }
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_243));
  T10 = CALL1(1,VARREF(Yx8rSastYalternative_alternant),e_);
  T11 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T10,f_,T11,code_out_);
  T12 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),T13,code_out_);
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,T14,code_out_);
    T15 = CALL1(1,VARREF(Yx8rSastYalternative_alternant),e_);
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),T15,code_out_);
    T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  } else {
  }
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_244));
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_135) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALLN(1,VARREF(Yx8rSg2cYto_c),4,x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_136) {
  P e_,f_,d_,code_out_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_135,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1562_137) {
  P x_1561_;
  P argF2237;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1561_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1561_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1561_);
    argF2237 = T4;
    CALLN(1,VARREF(Yx8rSg2cYto_c),4,argF2237,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1561_);
    a1 = T6;
    x_1561_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1565_138) {
  P x_1564_,x_1563_;
  P argF2240;
  P iF2239;
  P tmpF2238;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1564_, 0);
  ARG(x_1563_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1564_);
  tmpF2238 = T3;
  if (tmpF2238 != YPfalse) {
    T4 = tmpF2238;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1563_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1564_);
    iF2239 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1563_);
    argF2240 = T9;
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(1),LITREF(lit_251),iF2239);
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),argF2240,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1564_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1563_);
    a1 = T11;
    a2 = T12;
    x_1564_ = a1;
    x_1563_ = a2;
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

FUNCODEDEF(fun_x_1568_139) {
  P x_1567_,x_1566_;
  P bindingF2243;
  P iF2242;
  P tmpF2241;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1567_, 0);
  ARG(x_1566_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1567_);
  tmpF2241 = T3;
  if (tmpF2241 != YPfalse) {
    T4 = tmpF2241;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1566_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1567_);
    iF2242 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1566_);
    bindingF2243 = T9;
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),bindingF2243,FREEREF(1));
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(1),LITREF(lit_255),iF2242);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1567_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1566_);
    a1 = T11;
    a2 = T12;
    x_1567_ = a1;
    x_1566_ = a2;
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

FUNCODEDEF(fun_generate_self_recursive_call_140) {
  P e_,f_,d_,code_out_;
  P x_1568F2246;
  P x_1565F2245;
  P x_1562F2244;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1562_137,4);
  x_1562F2244 = T0;
  FUNINIT(x_1562F2244, 4,f_,d_,code_out_,x_1562F2244);
  T3 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1562F2244,T2);
  T4 = FUNSHELL(1,fun_x_1565_138,3);
  x_1565F2245 = T4;
  FUNINIT(x_1565F2245, 3,d_,code_out_,x_1565F2245);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_1565F2245,T6,T8);
  T10 = FUNSHELL(1,fun_x_1568_139,3);
  x_1568F2246 = T10;
  FUNINIT(x_1568F2246, 3,d_,code_out_,x_1568F2246);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_1568F2246,T12,T14);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_256));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_1570_141) {
  P x_1569_;
  P argF2247;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1569_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1569_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1569_);
    argF2247 = T4;
    CALLN(1,VARREF(Yx8rSg2cYto_c),4,argF2247,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1569_);
    a1 = T6;
    x_1569_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1573_142) {
  P x_1572_;
  P argF2248;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1572_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1572_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1572_);
    argF2248 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),argF2248,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1572_);
    a1 = T6;
    x_1572_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_143) {
  P e_,f_,d_,code_out_;
  P x_1573F2257;
  P x_1571F2256;
  P x_1570F2255;
  P nF2254;
  P tmpF2253;
  P tmpF2252;
  P tmpF2251;
  P tmpF2250;
  P functionF2249;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYapplication_function),e_);
  functionF2249 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYapplication_tailQ),e_);
  tmpF2250 = T4;
  if (tmpF2250 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(Yx8rSastYLast_methodG));
    tmpF2251 = T7;
    if (tmpF2251 != YPfalse) {
      T11 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF2252 = T10;
      if (tmpF2252 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF2249,VARREF(Yx8rSast_linearizeYLfree_referenceG));
        tmpF2253 = T14;
        if (tmpF2253 != YPfalse) {
          T16 = CALL1(1,VARREF(Yx8rSast_linearizeYreference_selfQ),functionF2249);
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
    T17 = CALLN(1,VARREF(Yx8rSg2cYgenerate_self_recursive_call),4,e_,f_,d_,code_out_);
    T2 = T17;
  } else {
    T20 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
    T19 = CALL1(1,VARREF(YgooStypesYlen),T20);
    nF2254 = T19;
    T21 = CALL1(1,VARREF(Yx8rSastYapplication_function),e_);
    CALLN(1,VARREF(Yx8rSg2cYto_c),4,T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_1570_141,4);
    x_1570F2255 = T22;
    FUNINIT(x_1570F2255, 4,f_,d_,code_out_,x_1570F2255);
    T25 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_1570F2255,T24);
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
    T27 = CALL2(1,VARREF(YgooSmagYG),nF2254,VARREF(Yx8rSg2cYDnumber_call_templates));
    if (T27 != YPfalse) {
      T26 = LITREF(lit_260);
    } else {
      T26 = nF2254;
    }
    CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_259),T26);
    x_1571F2256 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1571F2256,YPchr((P)40));
    T29 = CALL1(1,VARREF(Yx8rSastYapplication_knownQ),e_);
    if (T29 != YPfalse) {
      T28 = LITREF(lit_261);
    } else {
      T28 = LITREF(lit_262);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T28);
    T30 = CALL1(1,VARREF(Yx8rSastYapplication_function),e_);
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),T30,code_out_);
    T31 = CALL2(1,VARREF(YgooSmagYG),nF2254,VARREF(Yx8rSg2cYDnumber_call_templates));
    if (T31 != YPfalse) {
      T32 = CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_263),nF2254);
    } else {
    }
    T33 = FUNSHELL(1,fun_x_1573_142,2);
    x_1573F2257 = T33;
    FUNINIT(x_1573F2257, 2,code_out_,x_1573F2257);
    T36 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
    T35 = CALL1(1,VARREF(YgooScolsScolYenum),T36);
    T34 = CALL1(0,x_1573F2257,T35);
    T37 = CALL2(1,VARREF(YgooSioSportYput),x_1571F2256,YPchr((P)41));
    T38 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T18 = T38;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1577_144) {
  P x_1576_,x_1575_;
  P xF2260;
  P firstQF2259;
  P tmpF2258;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1576_, 0);
  ARG(x_1575_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1576_);
  tmpF2258 = T3;
  if (tmpF2258 != YPfalse) {
    T4 = tmpF2258;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1575_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1576_);
    firstQF2259 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1575_);
    xF2260 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2259);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),xF2260,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1576_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1575_);
    a1 = T13;
    a2 = T14;
    x_1576_ = a1;
    x_1575_ = a2;
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

FUNCODEDEF(fun_to_c_145) {
  P e_,f_,d_,code_out_;
  P x_1577F2262;
  P x_1574F2261;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_1574F2261 = code_out_;
  T2 = FUNSHELL(1,fun_x_1577_144,3);
  x_1577F2262 = T2;
  FUNINIT(x_1577F2262, 3,x_1574F2261,code_out_,x_1577F2262);
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),YPtrue,YPfalse);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_1577F2262,T4,T6);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1581_146) {
  P x_1580_,x_1579_,x_1578_;
  P x_1582F2268;
  P bindingF2267;
  P typeF2266;
  P initF2265;
  P tmpF2264;
  P tmpF2263;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1580_, 0);
  ARG(x_1579_, 1);
  ARG(x_1578_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1580_);
  tmpF2263 = T3;
  if (tmpF2263 != YPfalse) {
    T4 = tmpF2263;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1579_);
    tmpF2264 = T6;
    if (tmpF2264 != YPfalse) {
      T7 = tmpF2264;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1578_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1580_);
    initF2265 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1579_);
    typeF2266 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1578_);
    bindingF2267 = T14;
    CALLN(1,VARREF(Yx8rSg2cYto_c),4,initF2265,YPfalse,FREEREF(0),FREEREF(1));
    T16 = CALL1(1,VARREF(Yx8rSast_linearizeYunconstrained_typeQ),typeF2266);
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALLN(1,VARREF(Yx8rSg2cYto_c),4,typeF2266,YPfalse,FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(Yx8rSg2cYgen_depth),FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_273));
      x_1582F2268 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYput),x_1582F2268,YPchr((P)40));
      CALL2(1,VARREF(Yx8rSg2cYgen_ref),initF2265,FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYput),x_1582F2268,YPchr((P)44));
      CALL2(1,VARREF(Yx8rSg2cYgen_ref),typeF2266,FREEREF(1));
      T17 = CALL2(1,VARREF(YgooSioSportYput),x_1582F2268,YPchr((P)41));
      T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    } else {
    }
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),bindingF2267,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_274));
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),initF2265,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1580_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1579_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1578_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1580_ = a1;
    x_1579_ = a2;
    x_1578_ = a3;
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

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,code_out_;
  P x_1581F2269;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1581_146,3);
  x_1581F2269 = T0;
  FUNINIT(x_1581F2269, 3,d_,code_out_,x_1581F2269);
  T3 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(Yx8rSastYfix_let_types),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T1 = CALL3(0,x_1581F2269,T2,T4,T6);
  T8 = CALL1(1,VARREF(Yx8rSastYfix_let_body),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T8,f_,d_,code_out_);
  T10 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  if (T10 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
    T11 = CALL1(1,VARREF(Yx8rSastYfix_let_body),e_);
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),T11,code_out_);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T9 = T12;
  } else {
    T9 = YPfalse;
  }
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1585_148) {
  P x_1584_,x_1583_;
  P bindingF2272;
  P initF2271;
  P tmpF2270;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1584_, 0);
  ARG(x_1583_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1584_);
  tmpF2270 = T3;
  if (tmpF2270 != YPfalse) {
    T4 = tmpF2270;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1583_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1584_);
    initF2271 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1583_);
    bindingF2272 = T9;
    CALLN(1,VARREF(Yx8rSg2cYfunshell_to_c),5,bindingF2272,initF2271,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),bindingF2272,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_278));
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),initF2271,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_175));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1584_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1583_);
    a1 = T11;
    a2 = T12;
    x_1584_ = a1;
    x_1583_ = a2;
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

FUNCODEDEF(fun_to_c_149) {
  P e_,f_,d_,code_out_;
  P x_1585F2273;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1585_148,3);
  x_1585F2273 = T0;
  FUNINIT(x_1585F2273, 3,d_,code_out_,x_1585F2273);
  T3 = CALL1(1,VARREF(Yx8rSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_1585F2273,T2,T4);
  T6 = CALLN(1,VARREF(YgooSruntimeYrcurry),4,VARREF(Yx8rSg2cYfuninit_to_c),f_,d_,code_out_);
  T7 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),e_);
  T8 = CALL1(1,VARREF(Yx8rSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsScolYdo2),T6,T7,T8);
  T9 = CALL1(1,VARREF(Yx8rSastYlocals_body),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T9,f_,d_,code_out_);
  T11 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
  if (T11 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
    T12 = CALL1(1,VARREF(Yx8rSastYlocals_body),e_);
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),T12,code_out_);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_150) {
  P e_,f_,d_,code_out_;
  P x_1586F2274;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYbind_exit_main_fun),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_279));
  x_1586F2274 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1586F2274,YPchr((P)40));
  T1 = CALL1(1,VARREF(Yx8rSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1586F2274,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_151) {
  P e_,f_,d_,code_out_;
  P x_1587F2275;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYunwind_protect_protected_thunk),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(Yx8rSastYunwind_protect_cleanup_thunk),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T1,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_280));
  x_1587F2275 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1587F2275,YPchr((P)40));
  T2 = CALL1(1,VARREF(Yx8rSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1587F2275,YPchr((P)44));
  T3 = CALL1(1,VARREF(Yx8rSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1587F2275,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_152) {
  P e_,f_,d_,code_out_;
  P x_1588F2276;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYmonitor_type),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(Yx8rSastYmonitor_info),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(Yx8rSastYmonitor_test),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T2,f_,d_,code_out_);
  T3 = CALL1(1,VARREF(Yx8rSastYmonitor_handler),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T3,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(Yx8rSastYmonitor_main_thunk),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T4,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_281));
  x_1588F2276 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_282));
  CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)44));
  T5 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_283));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_284));
  CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)44));
  T6 = CALL1(1,VARREF(Yx8rSastYmonitor_type),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)44));
  T7 = CALL1(1,VARREF(Yx8rSastYmonitor_info),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)44));
  T8 = CALL1(1,VARREF(Yx8rSastYmonitor_test),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)44));
  T9 = CALL1(1,VARREF(Yx8rSastYmonitor_handler),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)44));
  T10 = CALL1(1,VARREF(Yx8rSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1588F2276,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1590_153) {
  P x_1589_;
  P argF2277;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1589_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1589_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1589_);
    argF2277 = T4;
    CALLN(1,VARREF(Yx8rSg2cYto_c),4,argF2277,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1589_);
    a1 = T6;
    x_1589_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1595_154) {
  P x_1594_,x_1593_;
  P argF2280;
  P firstQF2279;
  P tmpF2278;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1594_, 0);
  ARG(x_1593_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1594_);
  tmpF2278 = T3;
  if (tmpF2278 != YPfalse) {
    T4 = tmpF2278;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1593_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1594_);
    firstQF2279 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1593_);
    argF2280 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2279);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),argF2280,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1594_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1593_);
    a1 = T13;
    a2 = T14;
    x_1594_ = a1;
    x_1593_ = a2;
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

FUNCODEDEF(fun_to_c_155) {
  P e_,f_,d_,code_out_;
  P x_1595F2287;
  P x_1592F2286;
  P x_1591F2285;
  P x_1590F2284;
  P tmpF2283;
  P tmpF2282;
  P bindingF2281;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYapplication_binding),e_);
  bindingF2281 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYapplication_tailQ),e_);
  tmpF2282 = T4;
  if (tmpF2282 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(Yx8rSastYLast_primitiveG));
    tmpF2283 = T7;
    if (tmpF2283 != YPfalse) {
      T10 = CALL1(1,VARREF(Yx8rSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2281,T10);
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
    T11 = CALLN(1,VARREF(Yx8rSg2cYgenerate_self_recursive_call),4,e_,f_,d_,code_out_);
    T2 = T11;
  } else {
    T12 = FUNSHELL(1,fun_x_1590_153,4);
    x_1590F2284 = T12;
    FUNINIT(x_1590F2284, 4,f_,d_,code_out_,x_1590F2284);
    T15 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_1590F2284,T14);
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
    T17 = CALL1(1,VARREF(Yx8rSastYapplication_binding),e_);
    T16 = CALL1(1,VARREF(Yx8rSg2cYmangle_module_binding),T17);
    CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_287),T16);
    x_1591F2285 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1591F2285,YPchr((P)40));
    x_1592F2286 = code_out_;
    T19 = FUNSHELL(1,fun_x_1595_154,3);
    x_1595F2287 = T19;
    FUNINIT(x_1595F2287, 3,x_1592F2286,code_out_,x_1595F2287);
    T22 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),YPtrue,YPfalse);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
    T24 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
    T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
    T20 = CALL2(0,x_1595F2287,T21,T23);
    T18 = T20;
    T25 = CALL2(1,VARREF(YgooSioSportYput),x_1591F2285,YPchr((P)41));
    T26 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T2 = T26;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_156) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALLN(1,VARREF(Yx8rSg2cYto_c),4,x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1598_157) {
  P x_1597_;
  P xF2288;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1597_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1597_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1597_);
    xF2288 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),xF2288,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1597_);
    a1 = T6;
    x_1597_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_158) {
  P e_,f_,d_,code_out_;
  P x_1598F2292;
  P x_1596F2291;
  P fF2290;
  P nF2289;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF2289 = T1;
  T5 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYTdefinitionsT),T5);
  fF2290 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF2289,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(Yx8rSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(Yx8rSg2cYgenerate_function_binding),code_out_,fF2290);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_156,3,fF2290,d_,code_out_);
    T12 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    x_1596F2291 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1596F2291,YPchr((P)40));
    CALL2(1,VARREF(Yx8rSg2cYgenerate_function_binding),code_out_,fF2290);
    CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_292),nF2289);
    T13 = FUNSHELL(1,fun_x_1598_157,2);
    x_1598F2292 = T13;
    FUNINIT(x_1598F2292, 2,code_out_,x_1598F2292);
    T16 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_free),e_);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    T14 = CALL1(0,x_1598F2292,T15);
    T17 = CALL2(1,VARREF(YgooSioSportYput),x_1596F2291,YPchr((P)41));
    T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T6 = T18;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_159) {
  P b_,e_,f_,d_,code_out_;
  P x_1599F2295;
  P fF2294;
  P nF2293;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF2293 = T1;
  T5 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYTdefinitionsT),T5);
  fF2294 = T4;
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF2293,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(Yx8rSg2cYgenerate_function_binding),code_out_,fF2294);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_297));
    x_1599F2295 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1599F2295,YPchr((P)40));
    T10 = CALL1(1,VARREF(Yx8rSastYbinding_dynamic_extentQ),b_);
    if (T10 != YPfalse) {
      T9 = YPint((P)1);
    } else {
      T9 = YPint((P)0);
    }
    CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_298),T9);
    CALL2(1,VARREF(YgooSioSportYput),x_1599F2295,YPchr((P)44));
    CALL2(1,VARREF(Yx8rSg2cYgenerate_function_binding),code_out_,fF2294);
    CALL2(1,VARREF(YgooSioSportYput),x_1599F2295,YPchr((P)44));
    CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_299),nF2293);
    T11 = CALL2(1,VARREF(YgooSioSportYput),x_1599F2295,YPchr((P)41));
    T8 = T11;
  }
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  T3 = T12;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_160) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALLN(1,VARREF(Yx8rSg2cYto_c),4,x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1602_161) {
  P x_1601_;
  P xF2296;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1601_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1601_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1601_);
    xF2296 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),xF2296,FREEREF(0));
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

FUNCODEDEF(fun_funinit_to_c_162) {
  P b_,e_,f_,d_,code_out_;
  P x_1602F2299;
  P x_1600F2298;
  P nF2297;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF2297 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF2297,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_160,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_301));
    x_1600F2298 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1600F2298,YPchr((P)40));
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),b_,code_out_);
    CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_302),nF2297);
    T8 = FUNSHELL(1,fun_x_1602_161,2);
    x_1602F2299 = T8;
    FUNINIT(x_1602F2299, 2,code_out_,x_1602F2299);
    T11 = CALL1(1,VARREF(Yx8rSast_linearizeYclosure_creation_free),e_);
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T9 = CALL1(0,x_1602F2299,T10);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_1600F2298,YPchr((P)41));
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T3 = T13;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_163) {
  P e_,f_,d_,code_out_;
  P x_1603F2300;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,YPfalse,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_305));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1603F2300 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1603F2300,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),T3);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1603F2300,YPchr((P)44));
  T5 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_name),T5);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1603F2300,YPchr((P)44));
  T6 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1603F2300,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_1606_164) {
  P x_1605_;
  P eF2301;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1605_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1605_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1605_);
    eF2301 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF2301);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1605_);
    a1 = T6;
    x_1605_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_out_list_builder_165) {
  P f_,code_out_,elts_;
  P x_1606F2303;
  P x_1604F2302;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_308));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_309));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_1604F2302 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1604F2302,YPchr((P)40));
    T6 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_310),T6);
    T7 = FUNSHELL(1,fun_x_1606_164,3);
    x_1606F2303 = T7;
    FUNINIT(x_1606F2303, 3,code_out_,f_,x_1606F2303);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T8 = CALL1(0,x_1606F2303,T9);
    T10 = CALL2(1,VARREF(YgooSioSportYput),x_1604F2302,YPchr((P)41));
    T5 = T10;
    T0 = T5;
  }
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
  T0 = CALL2(1,VARREF(Yx8rSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_fab_list_167) {
  P code_out_,refs_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_166,1,code_out_);
  T0 = CALL3(1,VARREF(Yx8rSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_168) {
  P code_out_,sig_;
  P specsF2305;
  P typesF2304;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYsignature_specs),sig_);
  typesF2304 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(Yx8rSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF2304);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF2304,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF2304;
  }
  specsF2305 = T3;
  T9 = CALL2(1,VARREF(Yx8rSg2cYgen_fab_list),code_out_,specsF2305);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_169) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALLN(1,VARREF(Yx8rSg2cYto_c),4,x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_170) {
  P e_,f_,d_,code_out_;
  P x_1607F2306;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_169,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(Yx8rSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(Yx8rSastYsignature_value),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T2,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_317));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_1607F2306 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1607F2306,YPchr((P)40));
  T4 = CALL1(1,VARREF(Yx8rSastYsignature_names),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_fab_list),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1607F2306,YPchr((P)44));
  CALL2(1,VARREF(Yx8rSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1607F2306,YPchr((P)44));
  T5 = CALL1(1,VARREF(Yx8rSastYsignature_naryQ),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1607F2306,YPchr((P)44));
  T6 = CALL1(1,VARREF(Yx8rSastYsignature_arity),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1607F2306,YPchr((P)44));
  T7 = CALL1(1,VARREF(Yx8rSastYsignature_value),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1607F2306,YPchr((P)44));
  T8 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_318));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1607F2306,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_171) {
  P e_,f_,d_,code_out_;
  P x_1608F2307;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYfunction_signature),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_319));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1608F2307 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1608F2307,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_320));
  CALL2(1,VARREF(YgooSioSportYput),x_1608F2307,YPchr((P)44));
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_debug_name),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1608F2307,YPchr((P)44));
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_signature),e_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1608F2307,YPchr((P)44));
  T4 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_321));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1608F2307,YPchr((P)44));
  T5 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_322));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1608F2307,YPchr((P)44));
  T6 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_323));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1608F2307,YPchr((P)44));
  T7 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_324));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1608F2307,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1610_172) {
  P x_1609_;
  P defF2308;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1609_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1609_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1609_);
    defF2308 = T4;
    CALL2(1,VARREF(Yx8rSg2cYgenerate_function_forward),FREEREF(0),defF2308);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1609_);
    a1 = T6;
    x_1609_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_173) {
  P code_out_,definitions_;
  P x_1610F2309;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_327));
  T1 = FUNSHELL(1,fun_x_1610_172,2);
  x_1610F2309 = T1;
  FUNINIT(x_1610F2309, 2,code_out_,x_1610F2309);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_1610F2309,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1614_174) {
  P x_1613_,x_1612_;
  P iF2312;
  P firstQF2311;
  P tmpF2310;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1613_, 0);
  ARG(x_1612_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1613_);
  tmpF2310 = T3;
  if (tmpF2310 != YPfalse) {
    T4 = tmpF2310;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1612_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1613_);
    firstQF2311 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1612_);
    iF2312 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2311);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_338));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1613_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1612_);
    a1 = T13;
    a2 = T14;
    x_1613_ = a1;
    x_1612_ = a2;
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

FUNCODEDEF(fun_generate_function_forward_175) {
  P code_out_,defn_;
  P x_1614F2314;
  P x_1611F2313;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  if (VARREF(Yx8rSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_333);
  } else {
    T0 = LITREF(lit_334);
  }
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_module_binding),T2);
  CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_332),T0,T1);
  x_1611F2313 = code_out_;
  T4 = FUNSHELL(1,fun_x_1614_174,3);
  x_1614F2314 = T4;
  FUNINIT(x_1614F2314, 3,x_1611F2313,code_out_,x_1614F2314);
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),YPtrue,YPfalse);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T11 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),defn_);
  T10 = CALL1(1,VARREF(YgooStypesYlen),T11);
  T9 = CALL1(1,VARREF(YgooScolsSseqYbelow),T10);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_1614F2314,T6,T8);
  T3 = T5;
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_339));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_generate_function_binding_176) {
  P code_out_,defn_;
  P nameF2317;
  P tmpF2316;
  P nameF2315;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_binding),defn_);
  nameF2315 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF2315,VARREF(Yx8rSastYLmodule_bindingG));
  tmpF2316 = T4;
  if (tmpF2316 != YPfalse) {
    T7 = CALL1(1,VARREF(Yx8rSastYbinding_kind),nameF2315);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_341),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(Yx8rSg2cYmangle_module_binding),nameF2315);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF2315,YPfalse);
    if (T11 != YPfalse) {
      T13 = CALL1(1,VARREF(Yx8rSastYfunction_index),defn_);
      T12 = CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_342),T13);
      T10 = T12;
    } else {
      T16 = CALL2(1,VARREF(YisaQ),nameF2315,VARREF(Yx8rSastYLlocal_bindingG));
      if (T16 != YPfalse) {
        T17 = CALL1(1,VARREF(Yx8rSastYbinding_name),nameF2315);
        T15 = T17;
      } else {
        T15 = nameF2315;
      }
      nameF2317 = T15;
      T19 = CALL1(1,VARREF(Yx8rSg2cYmangle_raw_name),nameF2317);
      T20 = CALL1(1,VARREF(Yx8rSastYfunction_index),defn_);
      T18 = CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_343),T19,T20);
      T14 = T18;
      T10 = T14;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forward_177) {
  P code_out_,defn_;
  P boundQF2318;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(Yx8rSastYLmodule_bindingG));
  boundQF2318 = T1;
  if (boundQF2318 != YPfalse) {
    T3 = LITREF(lit_344);
  } else {
    T3 = LITREF(lit_345);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_346));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_bodies_179) {
  P code_out_,definitions_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_348));
  T1 = FUNFAB(fun_178,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_180) {
  P def_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),def_,VARREF(Yx8rSastYLast_primitiveG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALLN(1,VARREF(Yx8rSg2cYgenerate_closure_structure),4,def_,FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_functions_181) {
  P definitions_,f_,d_,code_out_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_180,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_182) {
  P definition_,f_,d_,code_out_;
  P x_1615F2319;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYfunction_signature),definition_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T0,f_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgen_result),definition_,d_,code_out_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_function_binding),code_out_,definition_);
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_354));
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_353),T1);
  x_1615F2319 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1615F2319,YPchr((P)40));
  CALL2(1,VARREF(Yx8rSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1615F2319,YPchr((P)44));
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1615F2319,YPchr((P)44));
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_signature),definition_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1615F2319,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_355));
  CALL2(1,VARREF(YgooSioSportYput),x_1615F2319,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_356));
  CALL2(1,VARREF(YgooSioSportYput),x_1615F2319,YPchr((P)44));
  T4 = CALL1(1,VARREF(Yx8rSastYfunction_source),definition_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T4,code_out_);
  T5 = CALL2(1,VARREF(YgooSioSportYput),x_1615F2319,YPchr((P)41));
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_function_body_reference_183) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_358));
  CALL2(1,VARREF(Yx8rSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_359));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1620_184) {
  P x_1619_,x_1618_,x_1617_;
  P bF2324;
  P iF2323;
  P firstQF2322;
  P tmpF2321;
  P tmpF2320;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1619_, 0);
  ARG(x_1618_, 1);
  ARG(x_1617_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1619_);
  tmpF2320 = T3;
  if (tmpF2320 != YPfalse) {
    T4 = tmpF2320;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1618_);
    tmpF2321 = T6;
    if (tmpF2321 != YPfalse) {
      T7 = tmpF2321;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1617_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1619_);
    firstQF2322 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1618_);
    iF2323 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1617_);
    bF2324 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF2322);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(1),LITREF(lit_367),iF2323);
    T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1619_);
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1618_);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1617_);
    a1 = T18;
    a2 = T19;
    a3 = T20;
    x_1619_ = a1;
    x_1618_ = a2;
    x_1617_ = a3;
    goto loop;
    T13 = T17;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_shadow_args_185) {
  P bindings_,code_out_;
  P x_1620F2326;
  P x_1616F2325;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_362));
    x_1616F2325 = code_out_;
    T4 = FUNSHELL(1,fun_x_1620_184,3);
    x_1620F2326 = T4;
    FUNINIT(x_1620F2326, 3,x_1616F2325,code_out_,x_1620F2326);
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),YPtrue,YPfalse);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T9 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_1620F2326,T6,T8,T10);
    T3 = T5;
    T11 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_186) {
  P defn_,d_,code_out_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_369));
  T0 = CALL1(1,VARREF(Yx8rSastYfunction_body),defn_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_187) {
  P defn_,d_,code_out_;
  P x_1621F2327;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(Yx8rSg2cYgen_depth),d_,code_out_);
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),code_out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_370));
  x_1621F2327 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1621F2327,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_body),defn_);
  CALL2(1,VARREF(Yx8rSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1621F2327,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_188) {
  P e_;
  P bindingF2328;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_binding),e_);
  bindingF2328 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYbinding_name),bindingF2328);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_372),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1626_189) {
  P x_1625_,x_1624_;
  P bindingF2331;
  P firstQF2330;
  P tmpF2329;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1625_, 0);
  ARG(x_1624_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1625_);
  tmpF2329 = T3;
  if (tmpF2329 != YPfalse) {
    T4 = tmpF2329;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1624_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1625_);
    firstQF2330 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1624_);
    bindingF2331 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2330);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_381));
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),bindingF2331,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1625_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1624_);
    a1 = T13;
    a2 = T14;
    x_1625_ = a1;
    x_1624_ = a2;
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

FUNCODEDEF(fun_generate_function_code_190) {
  P code_out_,e_;
  P x_1626F2334;
  P x_1623F2333;
  P x_1622F2332;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  if (VARREF(Yx8rSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_375);
  } else {
    T0 = LITREF(lit_376);
  }
  T2 = CALL1(1,VARREF(Yx8rSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_377);
  } else {
    T1 = LITREF(lit_376);
  }
  CALLN(1,VARREF(YgooSruntimeYformat),4,code_out_,LITREF(lit_374),T0,T1);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_binding),e_);
  CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),T3,code_out_);
  x_1622F2332 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1622F2332,YPchr((P)40));
  x_1623F2333 = code_out_;
  T5 = FUNSHELL(1,fun_x_1626_189,3);
  x_1626F2334 = T5;
  FUNINIT(x_1626F2334, 3,x_1623F2333,code_out_,x_1626F2334);
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),YPtrue,YPfalse);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T10 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),e_);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
  T6 = CALL2(0,x_1626F2334,T7,T9);
  T4 = T6;
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1622F2332,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_382));
  T12 = CALL1(1,VARREF(Yx8rSastYfunction_temporaries),e_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_local_temporaries),T12,code_out_);
  T13 = CALL1(1,VARREF(Yx8rSastYfunction_registers),e_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_registers),T13,code_out_);
  T14 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),e_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_shadow_args),T14,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_383));
  T15 = CALL1(1,VARREF(Yx8rSastYfunction_body),e_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T15,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(Yx8rSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_384));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_dispatcherQ_191) {
  P definition_;
  P tmpF2338;
  P nameF2337;
  P tmpF2336;
  P bindingF2335;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_binding),definition_);
  bindingF2335 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF2335,VARREF(Yx8rSastYLmodule_bindingG));
  tmpF2336 = T3;
  if (tmpF2336 != YPfalse) {
    T7 = CALL1(1,VARREF(Yx8rSastYbinding_name),bindingF2335);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF2337 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF2337,LITREF(lit_386));
    tmpF2338 = T9;
    if (tmpF2338 != YPfalse) {
      T10 = tmpF2338;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF2337,LITREF(lit_387));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF2337);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_388));
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

FUNCODEDEF(fun_x_1630_192) {
  P x_1629_,x_1628_;
  P bF2341;
  P firstQF2340;
  P tmpF2339;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1629_, 0);
  ARG(x_1628_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1629_);
  tmpF2339 = T3;
  if (tmpF2339 != YPfalse) {
    T4 = tmpF2339;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1628_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1629_);
    firstQF2340 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1628_);
    bF2341 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2340);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),bF2341,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1629_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1628_);
    a1 = T13;
    a2 = T14;
    x_1629_ = a1;
    x_1628_ = a2;
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

FUNCODEDEF(fun_193) {
  P b_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(Yx8rSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(Yx8rSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_396));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_397));
    }
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),b_,FREEREF(0));
    T5 = BOXVAL(FREEREF(1));
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(0),LITREF(lit_398),T5);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_175));
    T8 = BOXVAL(FREEREF(1));
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    T6 = BOXVAL(FREEREF(1)) = T7;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_code_194) {
  P code_out_,definition_;
  P x_1630F2345;
  P x_1627F2344;
  P bindingsF2343;
  P offsetF2342;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF2342 = YPint((P)0);
  offsetF2342 = BOXFAB(offsetF2342);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),definition_);
  bindingsF2343 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_389));
  CALL2(1,VARREF(Yx8rSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_390));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF2343);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_391));
    x_1627F2344 = code_out_;
    T7 = FUNSHELL(1,fun_x_1630_192,3);
    x_1630F2345 = T7;
    FUNINIT(x_1630F2345, 3,x_1627F2344,code_out_,x_1630F2345);
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),YPtrue,YPfalse);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T12 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),definition_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T8 = CALL2(0,x_1630F2345,T9,T11);
    T6 = T8;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_175));
  } else {
  }
  T14 = CALL1(1,VARREF(Yx8rSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_local_temporaries),T14,code_out_);
  T15 = CALL1(1,VARREF(Yx8rSastYfunction_registers),definition_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_registers),T15,code_out_);
  T16 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),definition_);
  CALL2(1,VARREF(Yx8rSg2cYgenerate_shadow_args),T16,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_395));
  T17 = FUNFAB(fun_193,2,code_out_,offsetF2342);
  CALL2(1,VARREF(YgooSmacrosYdo),T17,bindingsF2343);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_399));
  T18 = CALL1(1,VARREF(Yx8rSastYfunction_body),definition_);
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,T18,definition_,YPint((P)1),code_out_);
  T20 = CALL1(1,VARREF(Yx8rSg2cYdispatcherQ),definition_);
  T19 = CALL1(1,VARREF(Ynot),T20);
  if (T19 != YPfalse) {
    T21 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_400));
  } else {
  }
  CALL3(1,VARREF(Yx8rSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_401));
  T2 = T22;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1632_195) {
  P x_1631_;
  P tempF2346;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1631_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1631_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1631_);
    tempF2346 = T4;
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_406));
    CALL2(1,VARREF(Yx8rSg2cYbinding_Gc),tempF2346,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_175));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1631_);
    a1 = T6;
    x_1631_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_196) {
  P temps_,code_out_;
  P x_1632F2347;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1632_195,2);
  x_1632F2347 = T1;
  FUNINIT(x_1632F2347, 2,code_out_,x_1632F2347);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_1632F2347,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_197) {
  P regs_,i_;
  P tmpF2348;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(Yx8rSg2cYTregisters_per_lineT));
  tmpF2348 = T2;
  if (tmpF2348 != YPfalse) {
    T3 = tmpF2348;
  } else {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),regs_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_412));
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
    CALL2(1,VARREF(Yx8rSg2cYgen_ref),T9,FREEREF(0));
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

FUNCODEDEF(fun_next_line_198) {
  P regs_;
  P next_regF2349;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(regs_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),regs_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(Yx8rSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_410));
    T4 = FUNSHELL(1,fun_next_reg_197,3);
    next_regF2349 = T4;
    FUNINIT(next_regF2349, 3,FREEREF(0),FREEREF(1),next_regF2349);
    T5 = CALL2(0,next_regF2349,regs_,YPint((P)0));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_199) {
  P regs_,code_out_;
  P next_lineF2350;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_next_line_198,2);
  next_lineF2350 = T1;
  FUNINIT(next_lineF2350, 2,code_out_,next_lineF2350);
  T2 = CALL1(0,next_lineF2350,regs_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_200) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_414),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_201) {
  P modname_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolYelt_setter),YPtrue,FREEREF(0),modname_);
    T4 = CALL1(1,VARREF(Yx8rSg2cYmodule_info_name),modname_);
    T3 = CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(1),LITREF(lit_417),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  P binding_;
  P home_modF2351;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),binding_);
  home_modF2351 = T1;
  T4 = CALL2(1,VARREF(Yx8rSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF2351);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSg2cYdeclare_imported_module_infos) {
  P code_out_,mod_;
  P maybe_declareF2354;
  P envF2353;
  P seenF2352;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF2352 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  envF2353 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_201,2);
  maybe_declareF2354 = T5;
  FUNINIT(maybe_declareF2354, 2,seenF2352,code_out_);
  T7 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),envF2353);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF2354,T6);
  T9 = FUNFAB(fun_202,2,mod_,maybe_declareF2354);
  T10 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(Yx8rSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1634_204) {
  P x_1633_;
  P nF2355;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1633_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1633_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1633_);
    nF2355 = T4;
    T5 = CALL1(1,VARREF(Yx8rSg2cYmodule_info_name),nF2355);
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(0),LITREF(lit_423),T5);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1633_);
    a1 = T7;
    x_1633_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_205) {
  P local_name_,binding_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(Yx8rSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),T5);
    T7 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(Yx8rSg2cYmodule_info_name),T7);
    T8 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),local_name_);
    T3 = CALLN(1,VARREF(YgooSruntimeYformat),5,FREEREF(1),LITREF(lit_427),T4,T6,T8);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_206) {
  P binding_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(Yx8rSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yx8rSastYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_78));
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
      T6 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),T7);
      T8 = CALL1(1,VARREF(Yx8rSg2cYmangle_module_binding),binding_);
      T5 = CALLN(1,VARREF(YgooSruntimeYformat),4,FREEREF(1),LITREF(lit_430),T6,T8);
      T2 = T5;
    } else {
      T11 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
      T10 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),T11);
      T9 = CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(1),LITREF(lit_431),T10);
      T2 = T9;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1636_207) {
  P x_1635_;
  P bindingF2358;
  P exported_asF2357;
  P tup41F2356;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1635_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1635_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1635_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1635_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup41F2356 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F2356,YPint((P)0));
    exported_asF2357 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup41F2356,YPint((P)1));
    bindingF2358 = T10;
    T12 = CALL1(1,VARREF(Yx8rSastYbinding_name),bindingF2358);
    T11 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),T12);
    T13 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),exported_asF2357);
    CALLN(1,VARREF(YgooSruntimeYformat),4,FREEREF(0),LITREF(lit_436),T11,T13);
    T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1635_);
    a1 = T15;
    x_1635_ = a1;
    goto loop;
    T9 = T14;
    T7 = T9;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSg2cYgenerate_module_info) {
  P code_out_,mod_;
  P x_1636F2365;
  P x_1634F2364;
  P uses_namesF2363;
  P usesF2362;
  P envF2361;
  P info_nameF2360;
  P nameF2359;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  nameF2359 = T1;
  T3 = CALL1(1,VARREF(Yx8rSg2cYmodule_info_name),nameF2359);
  info_nameF2360 = T3;
  T5 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  envF2361 = T5;
  T7 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),envF2361);
  usesF2362 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYmodule_name),usesF2362);
  uses_namesF2363 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_419));
  CALL2(1,VARREF(Yx8rSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_420));
  T10 = FUNSHELL(1,fun_x_1634_204,2);
  x_1634F2364 = T10;
  FUNINIT(x_1634F2364, 2,code_out_,x_1634F2364);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2363);
  T11 = CALL1(0,x_1634F2364,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_424));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_425));
  T13 = FUNFAB(fun_205,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(Yx8rSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_428));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_429));
  T15 = FUNFAB(fun_206,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(Yx8rSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_432));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_433));
  T17 = FUNSHELL(1,fun_x_1636_207,2);
  x_1636F2365 = T17;
  FUNINIT(x_1636F2365, 2,code_out_,x_1636F2365);
  T20 = CALL1(1,VARREF(Yx8rSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_1636F2365,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_437));
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_438),info_nameF2360);
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_439),info_nameF2360);
  T21 = CALL1(1,VARREF(Yx8rSg2cYmangle_string_literal),nameF2359);
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_440),T21);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_441));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_442));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_443));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_444));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_445));
  T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_446));
  T8 = T22;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_209) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_448),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_210) {
  P name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_450),T1,LITREF(lit_451));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1638_211) {
  P x_1637_;
  P nF2366;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1637_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1637_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1637_);
    nF2366 = T4;
    T5 = CALL1(1,VARREF(Yx8rSg2cYmodule_init_decl),nF2366);
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(0),LITREF(lit_458),T5);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1637_);
    a1 = T7;
    x_1637_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1640_212) {
  P x_1639_;
  P nF2367;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1639_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1639_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1639_);
    nF2367 = T4;
    T5 = CALL1(1,VARREF(Yx8rSg2cYmodule_init_name),nF2367);
    CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(0),LITREF(lit_467),T5);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1639_);
    a1 = T7;
    x_1639_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_213) {
  P code_out_,mod_,form_;
  P x_1640F2374;
  P x_1638F2373;
  P uses_namesF2372;
  P usesF2371;
  P envF2370;
  P init_declF2369;
  P nameF2368;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (VARREF(Yx8rSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_454);
  } else {
    T2 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF2368 = T1;
  T4 = CALL1(1,VARREF(Yx8rSg2cYmodule_init_decl),nameF2368);
  init_declF2369 = T4;
  T6 = CALL1(1,VARREF(Yx8rSastYmodule_target_environment),mod_);
  envF2370 = T6;
  T8 = CALL1(1,VARREF(Yx8rSastYenvironment_uses_modules),envF2370);
  usesF2371 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYmodule_name),usesF2371);
  uses_namesF2372 = T10;
  T11 = CALL1(1,VARREF(Ynot),VARREF(Yx8rSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_455));
    T13 = FUNSHELL(1,fun_x_1638_211,2);
    x_1638F2373 = T13;
    FUNINIT(x_1638F2373, 2,code_out_,x_1638F2373);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2372);
    T14 = CALL1(0,x_1638F2373,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_459));
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_460),init_declF2369);
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_461),init_declF2369);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_462));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_463));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_464));
  T16 = CALL1(1,VARREF(Ynot),VARREF(Yx8rSg2cYTdynamic_linkingQT));
  if (T16 != YPfalse) {
    T17 = FUNSHELL(1,fun_x_1640_212,2);
    x_1640F2374 = T17;
    FUNINIT(x_1640F2374, 2,code_out_,x_1640F2374);
    T19 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2372);
    T18 = CALL1(0,x_1640F2374,T19);
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_468));
  } else {
  }
  CALLN(1,VARREF(Yx8rSg2cYto_c),4,form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_469));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_470));
  T9 = T21;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_214) {
  P code_out_,mod_;
  P info_nameF2376;
  P nameF2375;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYmodule_name),mod_);
  nameF2375 = T1;
  T3 = CALL1(1,VARREF(Yx8rSg2cYmodule_info_name),nameF2375);
  info_nameF2376 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_472));
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_473),info_nameF2376);
  T4 = CALL1(1,VARREF(Yx8rSg2cYmodule_init_decl),nameF2375);
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_474),T4);
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_475),info_nameF2376);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_476));
  T5 = CALL1(1,VARREF(Yx8rSg2cYmangle_boot_name),LITREF(lit_478));
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_477),T5);
  T6 = CALL1(1,VARREF(Yx8rSg2cYmodule_init_name),nameF2375);
  CALL3(1,VARREF(YgooSruntimeYformat),code_out_,LITREF(lit_479),T6);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_480));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_481));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P Yx8rSg2cY___main_0___() {
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
  VARSET(Yx8rSg2cYTdefinitionsT,YPfalse);
  VARSET(Yx8rSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(Yx8rSastYLmodule_loaderG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(Yx8rSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPmet(FUNCODEREF(fun_module_loader_appname_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(Yx8rSg2cYmodule_loader_appname);
  if (T5 != YPfalse) {
    T4 = VARREF(Yx8rSg2cYmodule_loader_appname);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_module_loader_appname_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(Yx8rSg2cYmodule_loader_appname,T3);
  lit_3 = YPPsym((P)"module-loader-appname-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(Yx8rSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_setter_1 = YPmet(FUNCODEREF(fun_module_loader_appname_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yx8rSg2cYmodule_loader_appname_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(Yx8rSg2cYmodule_loader_appname_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_module_loader_appname_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yx8rSg2cYmodule_loader_appname_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSg2cYLg2c_module_loaderG),VARREF(Yx8rSg2cYmodule_loader_appname),VARREF(Yx8rSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"module-loader-app-modname");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_2 = YPmet(FUNCODEREF(fun_module_loader_app_modname_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rSg2cYmodule_loader_app_modname);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rSg2cYmodule_loader_app_modname);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_module_loader_app_modname_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rSg2cYmodule_loader_app_modname,T13);
  lit_6 = YPPsym((P)"module-loader-app-modname-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLsymG),VARREF(Yx8rSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_setter_3 = YPmet(FUNCODEREF(fun_module_loader_app_modname_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSg2cYmodule_loader_app_modname_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSg2cYmodule_loader_app_modname_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_module_loader_app_modname_setter_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSg2cYmodule_loader_app_modname_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSg2cYLg2c_module_loaderG),VARREF(Yx8rSg2cYmodule_loader_app_modname),VARREF(Yx8rSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"<g2c-module>");
  T23 = (P)YPpair(VARREF(Yx8rSastYLmoduleG),Ynil);
  T22 = CALL2(1,VARREF(Yfab_class),LITREF(lit_7),T23);
  VARSET(Yx8rSg2cYLg2c_moduleG,T22);
  lit_8 = YPPsym((P)"module-src-file");
  T24 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_4 = YPmet(FUNCODEREF(fun_module_src_file_4),LITREF(lit_8),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(Yx8rSg2cYmodule_src_file);
  if (T27 != YPfalse) {
    T26 = VARREF(Yx8rSg2cYmodule_src_file);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_module_src_file_4;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(Yx8rSg2cYmodule_src_file,T25);
  lit_9 = YPPsym((P)"module-src-file-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(Yx8rSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_5 = YPmet(FUNCODEREF(fun_module_src_file_setter_5),LITREF(lit_9),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(Yx8rSg2cYmodule_src_file_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(Yx8rSg2cYmodule_src_file_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_module_src_file_setter_5;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(Yx8rSg2cYmodule_src_file_setter,T30);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSg2cYLg2c_moduleG),VARREF(Yx8rSg2cYmodule_src_file),VARREF(Yx8rSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  T34 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_6 = YPmet(FUNCODEREF(fun_module_mtime_6),LITREF(lit_10),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(Yx8rSg2cYmodule_mtime);
  if (T37 != YPfalse) {
    T36 = VARREF(Yx8rSg2cYmodule_mtime);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_module_mtime_6;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(Yx8rSg2cYmodule_mtime,T35);
  lit_11 = YPPsym((P)"module-mtime-setter");
  T39 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLfloG),VARREF(Yx8rSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_7 = YPmet(FUNCODEREF(fun_module_mtime_setter_7),LITREF(lit_11),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yx8rSg2cYmodule_mtime_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(Yx8rSg2cYmodule_mtime_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_module_mtime_setter_7;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yx8rSg2cYmodule_mtime_setter,T40);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSg2cYLg2c_moduleG),VARREF(Yx8rSg2cYmodule_mtime),VARREF(Yx8rSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"module-loader-module-type");
  lit_13 = YPPsym((P)"loader");
  T44 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(Yx8rSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_8 = YPmet(FUNCODEREF(fun_module_loader_module_type_8),LITREF(lit_12),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(Yx8rSastYmodule_loader_module_type);
  if (T47 != YPfalse) {
    T46 = VARREF(Yx8rSastYmodule_loader_module_type);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_module_loader_module_type_8;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(Yx8rSastYmodule_loader_module_type,T45);
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
  T49 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_15)),YPPlist(2,VARREF(Yx8rSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(Yx8rSastYLmoduleG),Ynil);
  fun_load_module_13 = YPmet(FUNCODEREF(fun_load_module_13),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(Yx8rSastYload_module);
  if (T56 != YPfalse) {
    T55 = VARREF(Yx8rSastYload_module);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_load_module_13;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(Yx8rSastYload_module,T54);
  lit_16 = YPPsym((P)"module-up-to-date?");
  lit_17 = YPPsym((P)"mod");
  T58 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(Yx8rSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Yx8rSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(Yx8rSg2cYmodule_up_to_dateQ),LITREF(lit_16),T58,ENVNUL,PNUL,YPfalse);
  T59 = Yx8rSg2cYmodule_up_to_dateQ;
  VARSET(Yx8rSg2cYmodule_up_to_dateQ,T59);
  lit_18 = YPPsym((P)"purge-outdated-modules");
  lit_19 = YPsb((P)"%s has changed.\n");
  T62 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(Yx8rSg2cYpurge_outdated_modules),LITREF(lit_18),T60,ENVNUL,PNUL,YPfalse);
  T63 = Yx8rSg2cYpurge_outdated_modules;
  VARSET(Yx8rSg2cYpurge_outdated_modules,T63);
  lit_20 = YPPsym((P)"g2c-def-app");
  lit_21 = YPPsym((P)"appname");
  lit_22 = YPPsym((P)"modname");
  T64 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_22)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(Yx8rSg2cYLg2c_module_loaderG),Ynil);
  Yx8rSg2cYg2c_def_app = YPmet(FUNCODEREF(Yx8rSg2cYg2c_def_app),LITREF(lit_20),T64,ENVNUL,PNUL,YPfalse);
  T65 = Yx8rSg2cYg2c_def_app;
  VARSET(Yx8rSg2cYg2c_def_app,T65);
  lit_23 = YPPsym((P)"g2c-build-app");
  lit_24 = YPsb((P)"\nSearching for undefined global bindings.\n");
  T66 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(Yx8rSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSg2cYg2c_build_app = YPmet(FUNCODEREF(Yx8rSg2cYg2c_build_app),LITREF(lit_23),T66,ENVNUL,PNUL,YPfalse);
  T67 = Yx8rSg2cYg2c_build_app;
  VARSET(Yx8rSg2cYg2c_build_app,T67);
  lit_25 = YPPsym((P)"g2c-test");
  lit_26 = YPPsym((P)"x");
  lit_27 = YPsb((P)"g2c-");
  lit_28 = YPPsym((P)"x8r/main");
  T68 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSg2cYg2c_test = YPmet(FUNCODEREF(Yx8rSg2cYg2c_test),LITREF(lit_25),T68,ENVNUL,PNUL,YPfalse);
  T69 = Yx8rSg2cYg2c_test;
  VARSET(Yx8rSg2cYg2c_test,T69);
  VARSET(Yx8rSg2cYTtmp_file_counterT,YPint((P)-1));
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
  T79 = BOUNDP(Yx8rSg2cYg2c_ast);
  if (T79 != YPfalse) {
    T78 = VARREF(Yx8rSg2cYg2c_ast);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_g2c_ast_27;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(Yx8rSg2cYg2c_ast,T77);
  lit_33 = YPPsym((P)"g2c-exp");
  lit_34 = YPPsym((P)"exp");
  T81 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_28 = YPmet(FUNCODEREF(fun_g2c_exp_28),LITREF(lit_33),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(Yx8rSg2cYg2c_exp);
  if (T84 != YPfalse) {
    T83 = VARREF(Yx8rSg2cYg2c_exp);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_g2c_exp_28;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(Yx8rSg2cYg2c_exp,T82);
  lit_35 = YPPsym((P)"compile-load");
  T86 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_29 = YPmet(FUNCODEREF(fun_compile_load_29),LITREF(lit_35),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(Yx8rSg2cYcompile_load);
  if (T89 != YPfalse) {
    T88 = VARREF(Yx8rSg2cYcompile_load);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_compile_load_29;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(Yx8rSg2cYcompile_load,T87);
  lit_36 = YPPsym((P)"so-load");
  T91 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_so_load_30 = YPmet(FUNCODEREF(fun_so_load_30),LITREF(lit_36),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(Yx8rSg2cYso_load);
  if (T94 != YPfalse) {
    T93 = VARREF(Yx8rSg2cYso_load);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_so_load_30;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(Yx8rSg2cYso_load,T92);
  lit_37 = YPPsym((P)"g2c-eval");
  T96 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_37),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(Yx8rStopYg2c_eval);
  if (T99 != YPfalse) {
    T98 = VARREF(Yx8rStopYg2c_eval);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_g2c_eval_31;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(Yx8rStopYg2c_eval,T97);
  T101 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_37),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(Yx8rStopYg2c_eval);
  if (T104 != YPfalse) {
    T103 = VARREF(Yx8rStopYg2c_eval);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_g2c_eval_32;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(Yx8rStopYg2c_eval,T102);
  lit_38 = YPsb((P)"g2c");
  T106 = CALL2(1,VARREF(Yx8rSg2cYg2c_def_app),LITREF(lit_38),LITREF(lit_28));
  VARSET(Yx8rSg2cYTg2c_appT,T106);
  lit_39 = YPPsym((P)"g2c-top");
  T107 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_39),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yx8rSg2cYg2c_top);
  if (T110 != YPfalse) {
    T109 = VARREF(Yx8rSg2cYg2c_top);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_g2c_top_33;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yx8rSg2cYg2c_top,T108);
  lit_40 = YPPsym((P)"g2c-clean");
  lit_41 = YPsb((P)"g2c");
  T112 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_40),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yx8rSg2cYg2c_clean);
  if (T115 != YPfalse) {
    T114 = VARREF(Yx8rSg2cYg2c_clean);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_g2c_clean_34;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yx8rSg2cYg2c_clean,T113);
  lit_42 = YPPsym((P)"compute-ast");
  lit_43 = YPPsym((P)"filename");
  lit_44 = YPPsym((P)"ct-env");
  T117 = YPsig(YPPlist(2,LITREF(lit_43),LITREF(lit_44)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_42),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(Yx8rSg2cYcompute_ast);
  if (T120 != YPfalse) {
    T119 = VARREF(Yx8rSg2cYcompute_ast);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_compute_ast_35;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(Yx8rSg2cYcompute_ast,T118);
  lit_45 = YPPsym((P)"compute-program");
  lit_46 = YPPsym((P)"e");
  T122 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_45),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(Yx8rSg2cYcompute_program);
  if (T125 != YPfalse) {
    T124 = VARREF(Yx8rSg2cYcompute_program);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_compute_program_36;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(Yx8rSg2cYcompute_program,T123);
  lit_47 = YPPsym((P)"generate-c-module");
  lit_48 = YPPsym((P)"code-out");
  lit_49 = YPPsym((P)"prg");
  T127 = YPsig(YPPlist(4,LITREF(lit_48),LITREF(lit_46),LITREF(lit_49),LITREF(lit_17)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_47),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(Yx8rSg2cYgenerate_c_module);
  if (T130 != YPfalse) {
    T129 = VARREF(Yx8rSg2cYgenerate_c_module);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_generate_c_module_37;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(Yx8rSg2cYgenerate_c_module,T128);
  lit_50 = YPPsym((P)"generate-c-application");
  lit_51 = YPsb((P)"-init");
  T134 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_17)),YPPlist(2,VARREF(Yx8rSastYLmodule_loaderG),VARREF(Yx8rSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_50),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(Yx8rSg2cYgenerate_c_application);
  if (T137 != YPfalse) {
    T136 = VARREF(Yx8rSg2cYgenerate_c_application);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_generate_c_application_40;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(Yx8rSg2cYgenerate_c_application,T135);
  lit_52 = YPPsym((P)"generate-makefile");
  lit_53 = YPsb((P)"-init");
  lit_54 = YPsb((P)"Makefile");
  lit_55 = YPsb((P)"include ..%sMake.inc\n");
  lit_56 = YPsb((P)"C_OBJS_DD = $(patsubst %%,..%s%%,$(C_OBJS))\n");
  lit_57 = YPsb((P)"%s%s: ..%sgrt.h\n");
  lit_58 = YPsb((P)"\t$(CC) -I.. -c -g -O -o $@ $<\n\n");
  lit_59 = YPsb((P)"OBJS = \\\n");
  lit_60 = YPsb((P)"\t%s \\\n");
  lit_61 = YPsb((P)"\t%s\n\n");
  lit_62 = YPsb((P)"%s: $(C_OBJS_DD) $(OBJS)\n");
  lit_63 = YPsb((P)"\t$(CC) -Wl,--export-dynamic -o %s $(C_OBJS_DD) $(LIBS) $(OBJS)\n\n");
  lit_64 = YPsb((P)"clean:\n\trm -f %s $(OBJS)\n");
  T142 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(Yx8rSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_44 = YPmet(FUNCODEREF(fun_generate_makefile_44),LITREF(lit_52),T139,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(Yx8rSg2cYgenerate_makefile);
  if (T145 != YPfalse) {
    T144 = VARREF(Yx8rSg2cYgenerate_makefile);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_generate_makefile_44;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(Yx8rSg2cYgenerate_makefile,T143);
  lit_65 = YPPsym((P)"pp");
  T147 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_45 = YPmet(FUNCODEREF(fun_pp_45),LITREF(lit_65),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(Yx8rSg2cYpp);
  if (T150 != YPfalse) {
    T149 = VARREF(Yx8rSg2cYpp);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_pp_45;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(Yx8rSg2cYpp,T148);
  lit_66 = YPPsym((P)"generate-header");
  lit_67 = YPsb((P)"/* GOO 2 C $REVISION: 0.111 $ \n");
  lit_68 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_69 = YPsb((P)"#include \"dlgrt.h\"\n");
  T152 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_46 = YPmet(FUNCODEREF(fun_generate_header_46),LITREF(lit_66),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(Yx8rSg2cYgenerate_header);
  if (T155 != YPfalse) {
    T154 = VARREF(Yx8rSg2cYgenerate_header);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_generate_header_46;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(Yx8rSg2cYgenerate_header,T153);
  lit_70 = YPPsym((P)"generate-trailer");
  lit_71 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T157 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_47 = YPmet(FUNCODEREF(fun_generate_trailer_47),LITREF(lit_70),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(Yx8rSg2cYgenerate_trailer);
  if (T160 != YPfalse) {
    T159 = VARREF(Yx8rSg2cYgenerate_trailer);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_generate_trailer_47;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(Yx8rSg2cYgenerate_trailer,T158);
  lit_72 = YPPsym((P)"generate-global-environment");
  lit_73 = YPsb((P)"\n/* MODULE ENVIRONMENT: %s */\n\n");
  lit_74 = YPPsym((P)"binding");
  T163 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_49 = YPmet(FUNCODEREF(fun_generate_global_environment_49),LITREF(lit_72),T162,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yx8rSg2cYgenerate_global_environment);
  if (T166 != YPfalse) {
    T165 = VARREF(Yx8rSg2cYgenerate_global_environment);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_generate_global_environment_49;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yx8rSg2cYgenerate_global_environment,T164);
  lit_75 = YPPsym((P)"generate-global-binding");
  lit_76 = YPPsym((P)"imported?");
  lit_77 = YPPsym((P)"gb");
  lit_78 = YPPsym((P)"global");
  lit_79 = YPPsym((P)"runtime");
  lit_80 = YPsb((P)"%s(%s,\"%s\",\"%s\");\n");
  lit_81 = YPsb((P)"EXT");
  lit_82 = YPsb((P)"DEF");
  T168 = YPsig(YPPlist(3,LITREF(lit_48),LITREF(lit_76),LITREF(lit_77)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_50 = YPmet(FUNCODEREF(fun_generate_global_binding_50),LITREF(lit_75),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(Yx8rSg2cYgenerate_global_binding);
  if (T171 != YPfalse) {
    T170 = VARREF(Yx8rSg2cYgenerate_global_binding);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_generate_global_binding_50;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Yx8rSg2cYgenerate_global_binding,T169);
  lit_83 = YPsb((P)"Y");
  VARSET(Yx8rSg2cYDmodule_separator,LITREF(lit_83));
  lit_84 = YPsb((P)"_");
  VARSET(Yx8rSg2cYDlocal_suffix,LITREF(lit_84));
  lit_85 = YPsb((P)"F");
  VARSET(Yx8rSg2cYDhygiene_marker,LITREF(lit_85));
  lit_86 = YPsb((P)"Z");
  VARSET(Yx8rSg2cYDescape_separator,LITREF(lit_86));
  lit_87 = YPsb((P)"I");
  VARSET(Yx8rSg2cYDiep_suffix,LITREF(lit_87));
  lit_88 = YPsb((P)"M");
  T174 = VARSET(Yx8rSg2cYDmethod_mangled_marker_string,LITREF(lit_88));
  T173 = T174;
  return T173;
}

P Yx8rSg2cY___main_1___() {
  P x_1518F2382;
  P x_1516F2381;
  P x_1514F2380;
  P x_1512F2379;
  P tableF2378;
  P vecF2377;
  P T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274;
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
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDmodule_separator),YPint((P)0));
  VARSET(Yx8rSg2cYDmodule_marker,T0);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDlocal_suffix),YPint((P)0));
  VARSET(Yx8rSg2cYDlocal_marker,T1);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDhygiene_marker),YPint((P)0));
  VARSET(Yx8rSg2cYDhygiene_char,T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDescape_separator),YPint((P)0));
  VARSET(Yx8rSg2cYDescape_marker,T3);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDiep_suffix),YPint((P)0));
  VARSET(Yx8rSg2cYDiep_marker,T4);
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(Yx8rSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(Yx8rSg2cYDmethod_mangled_marker,T5);
  VARSET(Yx8rSg2cYDmin_character_code,YPint((P)0));
  VARSET(Yx8rSg2cYDmax_character_code,YPint((P)255));
  T6 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSbufYLbufG));
  VARSET(Yx8rSg2cYTmangle_bufferT,T6);
  lit_89 = CALLN(1, Yvec, 2, YPchr((P)45), YPchr((P)95));
  lit_90 = CALLN(1, Yvec, 2, YPchr((P)33), YPchr((P)88));
  lit_91 = CALLN(1, Yvec, 2, YPchr((P)36), YPchr((P)68));
  lit_92 = CALLN(1, Yvec, 2, YPchr((P)37), YPchr((P)80));
  lit_93 = CALLN(1, Yvec, 2, YPchr((P)42), YPchr((P)84));
  lit_94 = CALLN(1, Yvec, 2, YPchr((P)47), YPchr((P)83));
  lit_95 = CALLN(1, Yvec, 2, YPchr((P)60), YPchr((P)76));
  lit_96 = CALLN(1, Yvec, 2, YPchr((P)62), YPchr((P)71));
  lit_97 = CALLN(1, Yvec, 2, YPchr((P)63), YPchr((P)81));
  lit_98 = CALLN(1, Yvec, 2, YPchr((P)43), YPchr((P)65));
  lit_99 = CALLN(1, Yvec, 2, YPchr((P)38), YPchr((P)66));
  lit_100 = CALLN(1, Yvec, 2, YPchr((P)94), YPchr((P)67));
  lit_101 = CALLN(1, Yvec, 2, YPchr((P)95), YPchr((P)85));
  lit_102 = CALLN(1, Yvec, 2, YPchr((P)64), YPchr((P)79));
  lit_103 = CALLN(1, Yvec, 2, YPchr((P)61), YPchr((P)69));
  lit_104 = CALLN(1, Yvec, 2, YPchr((P)126), YPchr((P)78));
  lit_105 = CALLN(1, Yvec, 2, YPchr((P)124), YPchr((P)75));
  T7 = CALLN(1,VARREF(Yvec),17,LITREF(lit_89),LITREF(lit_90),LITREF(lit_91),LITREF(lit_92),LITREF(lit_93),LITREF(lit_94),LITREF(lit_95),LITREF(lit_96),LITREF(lit_97),LITREF(lit_98),LITREF(lit_99),LITREF(lit_100),LITREF(lit_101),LITREF(lit_102),LITREF(lit_103),LITREF(lit_104),LITREF(lit_105));
  VARSET(Yx8rSg2cYDmangles_data,T7);
  lit_106 = YPPsym((P)"char-buffer-as-string");
  lit_107 = YPPsym((P)"buffer");
  lit_108 = YPPsym((P)"x-1510");
  lit_109 = YPPsym((P)"x-1509");
  T9 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1510_51 = YPmet(FUNCODEREF(fun_x_1510_51),LITREF(lit_108),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_107)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  Yx8rSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(Yx8rSg2cYchar_buffer_as_string),LITREF(lit_106),T8,ENVNUL,PNUL,YPfalse);
  T10 = Yx8rSg2cYchar_buffer_as_string;
  VARSET(Yx8rSg2cYchar_buffer_as_string,T10);
  lit_110 = YPsb((P)"\\t");
  lit_111 = YPsb((P)"\\f");
  lit_112 = YPsb((P)"\\r");
  lit_113 = YPsb((P)"\\n");
  lit_114 = YPsb((P)"\\\"");
  lit_115 = YPsb((P)"\\\\");
  T13 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLvecG),VARREF(YgooScolsSstrYascii_limit));
  T12 = CALL2(1,VARREF(YgooScolsScolYfill),T13,YPfalse);
  vecF2377 = T12;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  CALL3(1,VARREF(YgooScolsScolYelt_setter),LITREF(lit_110),vecF2377,T14);
  T15 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  CALL3(1,VARREF(YgooScolsScolYelt_setter),LITREF(lit_111),vecF2377,T15);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  CALL3(1,VARREF(YgooScolsScolYelt_setter),LITREF(lit_112),vecF2377,T16);
  T17 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  CALL3(1,VARREF(YgooScolsScolYelt_setter),LITREF(lit_113),vecF2377,T17);
  T18 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  CALL3(1,VARREF(YgooScolsScolYelt_setter),LITREF(lit_114),vecF2377,T18);
  T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  CALL3(1,VARREF(YgooScolsScolYelt_setter),LITREF(lit_115),vecF2377,T19);
  T11 = vecF2377;
  VARSET(Yx8rSg2cYDc_escapes,T11);
  lit_116 = YPPsym((P)"mangle-string-literal");
  lit_117 = YPPsym((P)"str");
  lit_118 = YPPsym((P)"loop");
  lit_119 = YPPsym((P)"i");
  T21 = YPsig(YPPlist(1,LITREF(lit_119)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_53 = YPmet(FUNCODEREF(fun_loop_53),LITREF(lit_118),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_54 = YPmet(FUNCODEREF(fun_mangle_string_literal_54),LITREF(lit_116),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(Yx8rSg2cYmangle_string_literal);
  if (T24 != YPfalse) {
    T23 = VARREF(Yx8rSg2cYmangle_string_literal);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_mangle_string_literal_54;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(Yx8rSg2cYmangle_string_literal,T22);
  lit_120 = YPPsym((P)"sym");
  T26 = YPsig(YPPlist(1,LITREF(lit_120)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_55 = YPmet(FUNCODEREF(fun_mangle_string_literal_55),LITREF(lit_116),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(Yx8rSg2cYmangle_string_literal);
  if (T29 != YPfalse) {
    T28 = VARREF(Yx8rSg2cYmangle_string_literal);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_mangle_string_literal_55;
  T27 = CALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(Yx8rSg2cYmangle_string_literal,T27);
  lit_121 = YPsb((P)"0123456789");
  VARSET(Yx8rSg2cYDnumber_characters,LITREF(lit_121));
  lit_122 = YPPsym((P)"mangle-integer");
  lit_123 = YPPsym((P)"number");
  lit_124 = YPPsym((P)"process-integer");
  lit_125 = YPPsym((P)"index");
  T32 = YPsig(YPPlist(2,LITREF(lit_123),LITREF(lit_125)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_56 = YPmet(FUNCODEREF(fun_process_integer_56),LITREF(lit_124),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(1,LITREF(lit_123)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_57 = YPmet(FUNCODEREF(fun_mangle_integer_57),LITREF(lit_122),T31,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(Yx8rSg2cYmangle_integer);
  if (T35 != YPfalse) {
    T34 = VARREF(Yx8rSg2cYmangle_integer);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_mangle_integer_57;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(Yx8rSg2cYmangle_integer,T33);
  lit_126 = YPPsym((P)"x-1512");
  lit_127 = YPPsym((P)"x-1511");
  lit_128 = YPPsym((P)"x-1514");
  lit_129 = YPPsym((P)"x-1513");
  lit_130 = YPPsym((P)"x-1516");
  lit_131 = YPPsym((P)"x-1515");
  lit_132 = YPPsym((P)"x-1518");
  lit_133 = YPPsym((P)"x-1517");
  T40 = YPsig(YPPlist(1,LITREF(lit_127)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1512_58 = YPmet(FUNCODEREF(fun_x_1512_58),LITREF(lit_126),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_129)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1514_59 = YPmet(FUNCODEREF(fun_x_1514_59),LITREF(lit_128),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_131)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1516_60 = YPmet(FUNCODEREF(fun_x_1516_60),LITREF(lit_130),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(1,LITREF(lit_133)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1518_61 = YPmet(FUNCODEREF(fun_x_1518_61),LITREF(lit_132),T37,ENVNUL,PNUL,YPfalse);
  T43 = CALL2(1,VARREF(YgooSmathYA),VARREF(Yx8rSg2cYDmax_character_code),YPint((P)1));
  T42 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLvecG),T43);
  tableF2378 = T42;
  T44 = FUNSHELL(1,fun_x_1512_58,2);
  x_1512F2379 = T44;
  FUNINIT(x_1512F2379, 2,tableF2378,x_1512F2379);
  T47 = CALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(Yx8rSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(Yx8rSg2cYDmax_character_code));
  T46 = CALL1(1,VARREF(YgooScolsScolYenum),T47);
  T45 = CALL1(0,x_1512F2379,T46);
  T48 = FUNSHELL(1,fun_x_1514_59,2);
  x_1514F2380 = T48;
  FUNINIT(x_1514F2380, 2,tableF2378,x_1514F2380);
  T50 = CALL1(1,VARREF(YgooScolsScolYenum),VARREF(Yx8rSg2cYDmangles_data));
  T49 = CALL1(0,x_1514F2380,T50);
  T51 = FUNSHELL(1,fun_x_1516_60,2);
  x_1516F2381 = T51;
  FUNINIT(x_1516F2381, 2,tableF2378,x_1516F2381);
  T55 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T56 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T54 = CALL3(1,VARREF(YgooScolsSrangeYrange),T55,VARREF(YgooSmagYLE),T56);
  T53 = CALL1(1,VARREF(YgooScolsScolYenum),T54);
  T52 = CALL1(0,x_1516F2381,T53);
  T57 = FUNSHELL(1,fun_x_1518_61,2);
  x_1518F2382 = T57;
  FUNINIT(x_1518F2382, 2,tableF2378,x_1518F2382);
  T61 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T62 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T60 = CALL3(1,VARREF(YgooScolsSrangeYrange),T61,VARREF(YgooSmagYLE),T62);
  T59 = CALL1(1,VARREF(YgooScolsScolYenum),T60);
  T58 = CALL1(0,x_1518F2382,T59);
  T41 = tableF2378;
  VARSET(Yx8rSg2cYDname_mangler_table,T41);
  lit_134 = YPPsym((P)"mangler-reset");
  T63 = YPsig(YPPlist(1,LITREF(lit_107)),YPPlist(1,VARREF(YgooScolsSbufYLbufG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSg2cYmangler_reset = YPmet(FUNCODEREF(Yx8rSg2cYmangler_reset),LITREF(lit_134),T63,ENVNUL,PNUL,YPfalse);
  T64 = Yx8rSg2cYmangler_reset;
  VARSET(Yx8rSg2cYmangler_reset,T64);
  lit_135 = YPPsym((P)"mangle-name-into");
  lit_136 = YPPsym((P)"buf");
  lit_137 = YPPsym((P)"x-1520");
  lit_138 = YPPsym((P)"x-1519");
  T66 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1520_63 = YPmet(FUNCODEREF(fun_x_1520_63),LITREF(lit_137),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(2,LITREF(lit_136),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSbufYLbufG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSg2cYmangle_name_into = YPmet(FUNCODEREF(Yx8rSg2cYmangle_name_into),LITREF(lit_135),T65,ENVNUL,PNUL,YPfalse);
  T67 = Yx8rSg2cYmangle_name_into;
  VARSET(Yx8rSg2cYmangle_name_into,T67);
  lit_139 = YPPsym((P)"mangle-raw-name");
  T68 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_65 = YPmet(FUNCODEREF(fun_mangle_raw_name_65),LITREF(lit_139),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rSg2cYmangle_raw_name);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rSg2cYmangle_raw_name);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_mangle_raw_name_65;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rSg2cYmangle_raw_name,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_66 = YPmet(FUNCODEREF(fun_mangle_raw_name_66),LITREF(lit_139),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(Yx8rSg2cYmangle_raw_name);
  if (T76 != YPfalse) {
    T75 = VARREF(Yx8rSg2cYmangle_raw_name);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_mangle_raw_name_66;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(Yx8rSg2cYmangle_raw_name,T74);
  lit_140 = YPPsym((P)"mangle-local-name");
  T78 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_67 = YPmet(FUNCODEREF(fun_mangle_local_name_67),LITREF(lit_140),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(Yx8rSg2cYmangle_local_name);
  if (T81 != YPfalse) {
    T80 = VARREF(Yx8rSg2cYmangle_local_name);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_mangle_local_name_67;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(Yx8rSg2cYmangle_local_name,T79);
  T83 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_68 = YPmet(FUNCODEREF(fun_mangle_local_name_68),LITREF(lit_140),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(Yx8rSg2cYmangle_local_name);
  if (T86 != YPfalse) {
    T85 = VARREF(Yx8rSg2cYmangle_local_name);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_mangle_local_name_68;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(Yx8rSg2cYmangle_local_name,T84);
  lit_141 = YPPsym((P)"mangle-global-name");
  T88 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_15)),YPPlist(2,VARREF(YLsymG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_69 = YPmet(FUNCODEREF(fun_mangle_global_name_69),LITREF(lit_141),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(Yx8rSg2cYmangle_global_name);
  if (T91 != YPfalse) {
    T90 = VARREF(Yx8rSg2cYmangle_global_name);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_mangle_global_name_69;
  T89 = CALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(Yx8rSg2cYmangle_global_name,T89);
  T93 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_15)),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_70 = YPmet(FUNCODEREF(fun_mangle_global_name_70),LITREF(lit_141),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(Yx8rSg2cYmangle_global_name);
  if (T96 != YPfalse) {
    T95 = VARREF(Yx8rSg2cYmangle_global_name);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_mangle_global_name_70;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(Yx8rSg2cYmangle_global_name,T94);
  lit_142 = YPPsym((P)"mangle-boot-name");
  T98 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_boot_name_71 = YPmet(FUNCODEREF(fun_mangle_boot_name_71),LITREF(lit_142),T98,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(Yx8rSg2cYmangle_boot_name);
  if (T101 != YPfalse) {
    T100 = VARREF(Yx8rSg2cYmangle_boot_name);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_mangle_boot_name_71;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(Yx8rSg2cYmangle_boot_name,T99);
  lit_143 = YPPsym((P)"mangle-module-binding");
  T103 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_module_binding_72 = YPmet(FUNCODEREF(fun_mangle_module_binding_72),LITREF(lit_143),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(Yx8rSg2cYmangle_module_binding);
  if (T106 != YPfalse) {
    T105 = VARREF(Yx8rSg2cYmangle_module_binding);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_mangle_module_binding_72;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(Yx8rSg2cYmangle_module_binding,T104);
  lit_144 = YPPsym((P)"mangle-local-marked-name");
  lit_145 = YPPsym((P)"marker");
  T108 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_145)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_local_marked_name_73 = YPmet(FUNCODEREF(fun_mangle_local_marked_name_73),LITREF(lit_144),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(Yx8rSg2cYmangle_local_marked_name);
  if (T111 != YPfalse) {
    T110 = VARREF(Yx8rSg2cYmangle_local_marked_name);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_mangle_local_marked_name_73;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(Yx8rSg2cYmangle_local_marked_name,T109);
  T113 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_145)),YPPlist(2,VARREF(YLsymG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_local_marked_name_74 = YPmet(FUNCODEREF(fun_mangle_local_marked_name_74),LITREF(lit_144),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(Yx8rSg2cYmangle_local_marked_name);
  if (T116 != YPfalse) {
    T115 = VARREF(Yx8rSg2cYmangle_local_marked_name);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_mangle_local_marked_name_74;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(Yx8rSg2cYmangle_local_marked_name,T114);
  lit_146 = YPPsym((P)"return");
  lit_147 = YPPsym((P)"x-1524");
  lit_148 = YPPsym((P)"msg");
  lit_149 = YPPsym((P)"args");
  lit_150 = YPPsym((P)"for-commas");
  lit_151 = YPsb((P)"Match Pattern Failure");
  lit_152 = YPPsym((P)"let");
  lit_153 = YPPsym((P)"for");
  lit_154 = YPPsym((P)"first?");
  lit_155 = YPPsym((P)"first-then");
  lit_156 = YPPsym((P)"unless");
  lit_157 = YPPsym((P)"put");
  T120 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1524_75 = YPmet(FUNCODEREF(fun_x_1524_75),LITREF(lit_147),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T121 = fun_77;
  YPmacro(YPPsym((P)"x8r/g2c"),YPPsym((P)"for-commas"),T121);
  lit_158 = YPPsym((P)"x-1528");
  lit_159 = YPPsym((P)"between-parentheses");
  T124 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1528_78 = YPmet(FUNCODEREF(fun_x_1528_78),LITREF(lit_158),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T125 = fun_80;
  YPmacro(YPPsym((P)"x8r/g2c"),YPPsym((P)"between-parentheses"),T125);
  lit_160 = YPPsym((P)"x-1532");
  lit_161 = YPPsym((P)"between-parentheses-comma-separated");
  lit_162 = YPPsym((P)"forms");
  lit_163 = YPPsym((P)"body");
  T129 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1532_81 = YPmet(FUNCODEREF(fun_x_1532_81),LITREF(lit_160),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(3,LITREF(lit_162),LITREF(lit_163),LITREF(lit_154)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_82 = YPmet(FUNCODEREF(fun_loop_82),LITREF(lit_118),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T130 = fun_84;
  YPmacro(YPPsym((P)"x8r/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T130);
  lit_164 = YPPsym((P)"gen-result");
  lit_165 = YPPsym((P)"d");
  lit_166 = YPsb((P)"T%d = ");
  T131 = YPsig(YPPlist(3,LITREF(lit_46),LITREF(lit_165),LITREF(lit_48)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_85 = YPmet(FUNCODEREF(fun_gen_result_85),LITREF(lit_164),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(Yx8rSg2cYgen_result);
  if (T134 != YPfalse) {
    T133 = VARREF(Yx8rSg2cYgen_result);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_gen_result_85;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(Yx8rSg2cYgen_result,T132);
  lit_167 = YPPsym((P)"gen-depth");
  lit_168 = YPPsym((P)"x-1534");
  lit_169 = YPPsym((P)"x-1533");
  lit_170 = YPsb((P)"  ");
  T137 = YPsig(YPPlist(1,LITREF(lit_169)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1534_86 = YPmet(FUNCODEREF(fun_x_1534_86),LITREF(lit_168),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(2,LITREF(lit_165),LITREF(lit_48)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_87 = YPmet(FUNCODEREF(fun_gen_depth_87),LITREF(lit_167),T136,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(Yx8rSg2cYgen_depth);
  if (T140 != YPfalse) {
    T139 = VARREF(Yx8rSg2cYgen_depth);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_gen_depth_87;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(Yx8rSg2cYgen_depth,T138);
  lit_171 = YPPsym((P)"x-1538");
  lit_172 = YPPsym((P)"with-statement");
  lit_173 = YPPsym((P)"seq");
  lit_174 = YPPsym((P)"puts");
  lit_175 = YPsb((P)";\n");
  T144 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1538_88 = YPmet(FUNCODEREF(fun_x_1538_88),LITREF(lit_171),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T145 = fun_90;
  YPmacro(YPPsym((P)"x8r/g2c"),YPPsym((P)"with-statement"),T145);
  lit_176 = YPPsym((P)"x-1542");
  lit_177 = YPPsym((P)"with-expression");
  T148 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1542_91 = YPmet(FUNCODEREF(fun_x_1542_91),LITREF(lit_176),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T149 = fun_93;
  YPmacro(YPPsym((P)"x8r/g2c"),YPPsym((P)"with-expression"),T149);
  lit_178 = YPPsym((P)"x-1546");
  lit_179 = YPPsym((P)"with-used-expression");
  lit_180 = YPPsym((P)"when");
  lit_181 = YPPsym((P)"program-register");
  T152 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1546_94 = YPmet(FUNCODEREF(fun_x_1546_94),LITREF(lit_178),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T153 = fun_96;
  YPmacro(YPPsym((P)"x8r/g2c"),YPPsym((P)"with-used-expression"),T153);
  lit_182 = YPPsym((P)"generate-quotation-forwards");
  lit_183 = YPPsym((P)"qb*");
  lit_184 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_185 = YPPsym((P)"x-1548");
  lit_186 = YPPsym((P)"x-1547");
  lit_187 = YPsb((P)"DEFLIT(lit_%s);\n");
  T155 = YPsig(YPPlist(1,LITREF(lit_186)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1548_97 = YPmet(FUNCODEREF(fun_x_1548_97),LITREF(lit_185),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_183)),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_98 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_98),LITREF(lit_182),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(Yx8rSg2cYgenerate_quotation_forwards);
  if (T158 != YPfalse) {
    T157 = VARREF(Yx8rSg2cYgenerate_quotation_forwards);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_generate_quotation_forwards_98;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(Yx8rSg2cYgenerate_quotation_forwards,T156);
  lit_188 = YPPsym((P)"generate-quotations");
  lit_189 = YPPsym((P)"x-1550");
  lit_190 = YPPsym((P)"x-1549");
  lit_191 = YPsb((P)"lit_%s = ");
  T161 = YPsig(YPPlist(1,LITREF(lit_190)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1550_99 = YPmet(FUNCODEREF(fun_x_1550_99),LITREF(lit_189),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_183)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_100 = YPmet(FUNCODEREF(fun_generate_quotations_100),LITREF(lit_188),T160,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(Yx8rSg2cYgenerate_quotations);
  if (T164 != YPfalse) {
    T163 = VARREF(Yx8rSg2cYgenerate_quotations);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_generate_quotations_100;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(Yx8rSg2cYgenerate_quotations,T162);
  lit_192 = YPPsym((P)"false-name");
  lit_193 = YPsb((P)"%false");
  T166 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_101 = YPmet(FUNCODEREF(fun_false_name_101),LITREF(lit_192),T166,ENVNUL,PNUL,YPfalse);
  T169 = BOUNDP(Yx8rSg2cYfalse_name);
  if (T169 != YPfalse) {
    T168 = VARREF(Yx8rSg2cYfalse_name);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_false_name_101;
  T167 = CALL2(1,VARREF(YPdefine_method),T168,T170);
  VARSET(Yx8rSg2cYfalse_name,T167);
  lit_194 = YPPsym((P)"generate-quotation");
  lit_195 = YPPsym((P)"qb");
  lit_196 = YPsb((P)"%true");
  lit_197 = YPsb((P)"%false");
  T171 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_195)),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_102 = YPmet(FUNCODEREF(fun_generate_quotation_102),LITREF(lit_194),T171,ENVNUL,PNUL,YPfalse);
  T174 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T174 != YPfalse) {
    T173 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_generate_quotation_102;
  T172 = CALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(Yx8rSg2cYgenerate_quotation,T172);
  lit_198 = YPsb((P)"nil");
  T177 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T176 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_195)),YPPlist(2,VARREF(YLanyG),T177),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_103 = YPmet(FUNCODEREF(fun_generate_quotation_103),LITREF(lit_194),T176,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T180 != YPfalse) {
    T179 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_generate_quotation_103;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(Yx8rSg2cYgenerate_quotation,T178);
  T183 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_195)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_105 = YPmet(FUNCODEREF(fun_generate_quotation_105),LITREF(lit_194),T182,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T186 != YPfalse) {
    T185 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_generate_quotation_105;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yx8rSg2cYgenerate_quotation,T184);
  lit_199 = YPsb((P)"%s((P)%d)");
  lit_200 = YPsb((P)"%int");
  T188 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_106 = YPmet(FUNCODEREF(fun_generate_quotation_106),LITREF(lit_194),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T191 != YPfalse) {
    T190 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_generate_quotation_106;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(Yx8rSg2cYgenerate_quotation,T189);
  lit_201 = YPsb((P)"%s((P)%d)");
  lit_202 = YPsb((P)"%chr");
  T193 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_107 = YPmet(FUNCODEREF(fun_generate_quotation_107),LITREF(lit_194),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T196 != YPfalse) {
    T195 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_generate_quotation_107;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(Yx8rSg2cYgenerate_quotation,T194);
  lit_203 = YPPsym((P)"float-to-c-string");
  lit_204 = YPPsym((P)"o");
  lit_205 = YPPsym((P)"done");
  T200 = YPsig(YPPlist(1,LITREF(lit_119)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_108 = YPmet(FUNCODEREF(fun_loop_108),LITREF(lit_118),T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(1,LITREF(lit_205)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T199,ENVNUL,PNUL,YPfalse);
  T198 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_110 = YPmet(FUNCODEREF(fun_float_to_c_string_110),LITREF(lit_203),T198,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(Yx8rSg2cYfloat_to_c_string);
  if (T203 != YPfalse) {
    T202 = VARREF(Yx8rSg2cYfloat_to_c_string);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_float_to_c_string_110;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(Yx8rSg2cYfloat_to_c_string,T201);
  lit_206 = YPsb((P)"%s(FLOINT(%s))");
  lit_207 = YPsb((P)"%flo");
  T205 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_111 = YPmet(FUNCODEREF(fun_generate_quotation_111),LITREF(lit_194),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T208 != YPfalse) {
    T207 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_generate_quotation_111;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(Yx8rSg2cYgenerate_quotation,T206);
  lit_208 = YPsb((P)"%s((P)\"%s\")");
  lit_209 = YPsb((P)"%sb");
  T210 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPmet(FUNCODEREF(fun_generate_quotation_112),LITREF(lit_194),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T213 != YPfalse) {
    T212 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_generate_quotation_112;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(Yx8rSg2cYgenerate_quotation,T211);
  lit_210 = YPsb((P)"CALLN(1, %s, %s");
  lit_211 = YPsb((P)"vec");
  lit_212 = YPPsym((P)"x-1554");
  lit_213 = YPPsym((P)"x-1553");
  lit_214 = YPsb((P)", ");
  lit_215 = YPsb((P)")");
  T216 = YPsig(YPPlist(1,LITREF(lit_213)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1554_113 = YPmet(FUNCODEREF(fun_x_1554_113),LITREF(lit_212),T216,ENVNUL,PNUL,YPfalse);
  T215 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_194),T215,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T219 != YPfalse) {
    T218 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_generate_quotation_114;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(Yx8rSg2cYgenerate_quotation,T217);
  lit_216 = YPsb((P)"%s((P)\"%s\")");
  lit_217 = YPsb((P)"%%sym");
  T221 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_115 = YPmet(FUNCODEREF(fun_generate_quotation_115),LITREF(lit_194),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(Yx8rSg2cYgenerate_quotation);
  if (T224 != YPfalse) {
    T223 = VARREF(Yx8rSg2cYgenerate_quotation);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_quotation_115;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(Yx8rSg2cYgenerate_quotation,T222);
  lit_218 = YPPsym((P)"binding->c");
  T227 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T226 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_218),T227,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rSg2cYbinding_Gc,T226);
  lit_219 = YPPsym((P)"quotation");
  lit_220 = YPsb((P)"lit_%s");
  T228 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_116 = YPmet(FUNCODEREF(fun_binding_Gc_116),LITREF(lit_218),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(Yx8rSg2cYbinding_Gc);
  if (T231 != YPfalse) {
    T230 = VARREF(Yx8rSg2cYbinding_Gc);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_binding_Gc_116;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(Yx8rSg2cYbinding_Gc,T229);
  T233 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLlocal_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_117 = YPmet(FUNCODEREF(fun_binding_Gc_117),LITREF(lit_218),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(Yx8rSg2cYbinding_Gc);
  if (T236 != YPfalse) {
    T235 = VARREF(Yx8rSg2cYbinding_Gc);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_binding_Gc_117;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(Yx8rSg2cYbinding_Gc,T234);
  T238 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_Gc_118 = YPmet(FUNCODEREF(fun_binding_Gc_118),LITREF(lit_218),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(Yx8rSg2cYbinding_Gc);
  if (T241 != YPfalse) {
    T240 = VARREF(Yx8rSg2cYbinding_Gc);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_binding_Gc_118;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(Yx8rSg2cYbinding_Gc,T239);
  lit_221 = YPPsym((P)"reference->c");
  lit_222 = YPPsym((P)"v");
  T244 = YPsig(YPPlist(2,LITREF(lit_222),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T243 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_221),T244,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rSg2cYreference_Gc,T243);
  T245 = YPsig(YPPlist(2,LITREF(lit_222),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_119 = YPmet(FUNCODEREF(fun_reference_Gc_119),LITREF(lit_221),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(Yx8rSg2cYreference_Gc);
  if (T248 != YPfalse) {
    T247 = VARREF(Yx8rSg2cYreference_Gc);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_reference_Gc_119;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(Yx8rSg2cYreference_Gc,T246);
  lit_223 = YPsb((P)"LITREF");
  lit_224 = YPsb((P)"VARREF");
  T250 = YPsig(YPPlist(2,LITREF(lit_222),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_120 = YPmet(FUNCODEREF(fun_reference_Gc_120),LITREF(lit_221),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(Yx8rSg2cYreference_Gc);
  if (T253 != YPfalse) {
    T252 = VARREF(Yx8rSg2cYreference_Gc);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_reference_Gc_120;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(Yx8rSg2cYreference_Gc,T251);
  lit_225 = YPPsym((P)"to-c");
  lit_226 = YPPsym((P)"f");
  T256 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T255 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_225),T256,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rSg2cYto_c,T255);
  T257 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_121 = YPmet(FUNCODEREF(fun_to_c_121),LITREF(lit_225),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(Yx8rSg2cYto_c);
  if (T260 != YPfalse) {
    T259 = VARREF(Yx8rSg2cYto_c);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_to_c_121;
  T258 = CALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(Yx8rSg2cYto_c,T258);
  T262 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_122 = YPmet(FUNCODEREF(fun_to_c_122),LITREF(lit_225),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(Yx8rSg2cYto_c);
  if (T265 != YPfalse) {
    T264 = VARREF(Yx8rSg2cYto_c);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_to_c_122;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(Yx8rSg2cYto_c,T263);
  lit_227 = YPPsym((P)"gen-ref");
  T267 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_123 = YPmet(FUNCODEREF(fun_gen_ref_123),LITREF(lit_227),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(Yx8rSg2cYgen_ref);
  if (T270 != YPfalse) {
    T269 = VARREF(Yx8rSg2cYgen_ref);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_gen_ref_123;
  T268 = CALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(Yx8rSg2cYgen_ref,T268);
  lit_228 = YPsb((P)"FREEREF");
  lit_229 = YPsb((P)"%d");
  T272 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_124 = YPmet(FUNCODEREF(fun_gen_ref_124),LITREF(lit_227),T272,ENVNUL,PNUL,YPfalse);
  T275 = BOUNDP(Yx8rSg2cYgen_ref);
  if (T275 != YPfalse) {
    T274 = VARREF(Yx8rSg2cYgen_ref);
  } else {
    T274 = YPfalse;
  }
  T276 = fun_gen_ref_124;
  T273 = CALL2(1,VARREF(YPdefine_method),T274,T276);
  VARSET(Yx8rSg2cYgen_ref,T273);
  lit_230 = YPsb((P)"T%d");
  lit_231 = YPsb((P)"T_1");
  T277 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_125 = YPmet(FUNCODEREF(fun_gen_ref_125),LITREF(lit_227),T277,ENVNUL,PNUL,YPfalse);
  T280 = BOUNDP(Yx8rSg2cYgen_ref);
  if (T280 != YPfalse) {
    T279 = VARREF(Yx8rSg2cYgen_ref);
  } else {
    T279 = YPfalse;
  }
  T281 = fun_gen_ref_125;
  T278 = CALL2(1,VARREF(YPdefine_method),T279,T281);
  VARSET(Yx8rSg2cYgen_ref,T278);
  lit_232 = YPsb((P)"(P)%s");
  T284 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T283 = fun_gen_ref_126 = YPmet(FUNCODEREF(fun_gen_ref_126),LITREF(lit_227),T284,ENVNUL,PNUL,YPfalse);
  T288 = BOUNDP(Yx8rSg2cYgen_ref);
  if (T288 != YPfalse) {
    T287 = VARREF(Yx8rSg2cYgen_ref);
  } else {
    T287 = YPfalse;
  }
  T289 = fun_gen_ref_126;
  T286 = CALL2(1,VARREF(YPdefine_method),T287,T289);
  T285 = VARSET(Yx8rSg2cYgen_ref,T286);
  T282 = T285;
  return T282;
}

P Yx8rSg2cY___main_2___() {
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
  T0 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_127 = YPmet(FUNCODEREF(fun_gen_ref_127),LITREF(lit_227),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_127;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSg2cYgen_ref,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_48)),YPPlist(2,VARREF(Yx8rSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_128 = YPmet(FUNCODEREF(fun_gen_ref_128),LITREF(lit_227),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_128;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSg2cYgen_ref,T6);
  lit_233 = YPsb((P)"VARSET(");
  lit_234 = YPsb((P)",");
  lit_235 = YPsb((P)")");
  T10 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_129 = YPmet(FUNCODEREF(fun_to_c_129),LITREF(lit_225),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSg2cYto_c);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSg2cYto_c);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_to_c_129;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSg2cYto_c,T11);
  lit_236 = YPsb((P)"BOUNDP");
  T15 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_130 = YPmet(FUNCODEREF(fun_to_c_130),LITREF(lit_225),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yx8rSg2cYto_c);
  if (T18 != YPfalse) {
    T17 = VARREF(Yx8rSg2cYto_c);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_to_c_130;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yx8rSg2cYto_c,T16);
  lit_237 = YPsb((P)"BOXVAL");
  T20 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_131 = YPmet(FUNCODEREF(fun_to_c_131),LITREF(lit_225),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yx8rSg2cYto_c);
  if (T23 != YPfalse) {
    T22 = VARREF(Yx8rSg2cYto_c);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_to_c_131;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yx8rSg2cYto_c,T21);
  lit_238 = YPsb((P)"BOXVAL");
  lit_239 = YPsb((P)" = ");
  T25 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_132 = YPmet(FUNCODEREF(fun_to_c_132),LITREF(lit_225),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(Yx8rSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(Yx8rSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_132;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(Yx8rSg2cYto_c,T26);
  lit_240 = YPsb((P)" = BOXFAB");
  T30 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_133 = YPmet(FUNCODEREF(fun_to_c_133),LITREF(lit_225),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_133;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSg2cYto_c,T31);
  lit_241 = YPsb((P)"if (");
  lit_242 = YPsb((P)" != %s) {\n");
  lit_243 = YPsb((P)"} else {\n");
  lit_244 = YPsb((P)"}\n");
  T35 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_134 = YPmet(FUNCODEREF(fun_to_c_134),LITREF(lit_225),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_134;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rSg2cYto_c,T36);
  T41 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPmet(FUNCODEREF(fun_to_c_136),LITREF(lit_225),T40,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(Yx8rSg2cYto_c);
  if (T44 != YPfalse) {
    T43 = VARREF(Yx8rSg2cYto_c);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_to_c_136;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(Yx8rSg2cYto_c,T42);
  lit_245 = YPPsym((P)"generate-self-recursive-call");
  lit_246 = YPPsym((P)"x-1562");
  lit_247 = YPPsym((P)"x-1561");
  lit_248 = YPPsym((P)"x-1565");
  lit_249 = YPPsym((P)"x-1564");
  lit_250 = YPPsym((P)"x-1563");
  lit_251 = YPsb((P)"a%d = ");
  lit_252 = YPPsym((P)"x-1568");
  lit_253 = YPPsym((P)"x-1567");
  lit_254 = YPPsym((P)"x-1566");
  lit_255 = YPsb((P)" = a%d");
  lit_256 = YPsb((P)"goto loop");
  T49 = YPsig(YPPlist(1,LITREF(lit_247)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1562_137 = YPmet(FUNCODEREF(fun_x_1562_137),LITREF(lit_246),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(2,LITREF(lit_249),LITREF(lit_250)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1565_138 = YPmet(FUNCODEREF(fun_x_1565_138),LITREF(lit_248),T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(2,LITREF(lit_253),LITREF(lit_254)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1568_139 = YPmet(FUNCODEREF(fun_x_1568_139),LITREF(lit_252),T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_140 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_140),LITREF(lit_245),T46,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(Yx8rSg2cYgenerate_self_recursive_call);
  if (T52 != YPfalse) {
    T51 = VARREF(Yx8rSg2cYgenerate_self_recursive_call);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_generate_self_recursive_call_140;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(Yx8rSg2cYgenerate_self_recursive_call,T50);
  VARSET(Yx8rSg2cYDnumber_call_templates,YPint((P)3));
  lit_257 = YPPsym((P)"x-1570");
  lit_258 = YPPsym((P)"x-1569");
  lit_259 = YPsb((P)"CALL%s");
  lit_260 = YPsb((P)"N");
  lit_261 = YPsb((P)"0,");
  lit_262 = YPsb((P)"1,");
  lit_263 = YPsb((P)",%s");
  lit_264 = YPPsym((P)"x-1573");
  lit_265 = YPPsym((P)"x-1572");
  T56 = YPsig(YPPlist(1,LITREF(lit_258)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1570_141 = YPmet(FUNCODEREF(fun_x_1570_141),LITREF(lit_257),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(1,LITREF(lit_265)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1573_142 = YPmet(FUNCODEREF(fun_x_1573_142),LITREF(lit_264),T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_143 = YPmet(FUNCODEREF(fun_to_c_143),LITREF(lit_225),T54,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yx8rSg2cYto_c);
  if (T59 != YPfalse) {
    T58 = VARREF(Yx8rSg2cYto_c);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_to_c_143;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yx8rSg2cYto_c,T57);
  lit_266 = YPPsym((P)"x-1577");
  lit_267 = YPPsym((P)"x-1576");
  lit_268 = YPPsym((P)"x-1575");
  T62 = YPsig(YPPlist(2,LITREF(lit_267),LITREF(lit_268)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1577_144 = YPmet(FUNCODEREF(fun_x_1577_144),LITREF(lit_266),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_145 = YPmet(FUNCODEREF(fun_to_c_145),LITREF(lit_225),T61,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(Yx8rSg2cYto_c);
  if (T65 != YPfalse) {
    T64 = VARREF(Yx8rSg2cYto_c);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_to_c_145;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(Yx8rSg2cYto_c,T63);
  lit_269 = YPPsym((P)"x-1581");
  lit_270 = YPPsym((P)"x-1580");
  lit_271 = YPPsym((P)"x-1579");
  lit_272 = YPPsym((P)"x-1578");
  lit_273 = YPsb((P)"check_type");
  lit_274 = YPsb((P)" = ");
  T68 = YPsig(YPPlist(3,LITREF(lit_270),LITREF(lit_271),LITREF(lit_272)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1581_146 = YPmet(FUNCODEREF(fun_x_1581_146),LITREF(lit_269),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_225),T67,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rSg2cYto_c);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rSg2cYto_c);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_to_c_147;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rSg2cYto_c,T69);
  lit_275 = YPPsym((P)"x-1585");
  lit_276 = YPPsym((P)"x-1584");
  lit_277 = YPPsym((P)"x-1583");
  lit_278 = YPsb((P)" = ");
  T74 = YPsig(YPPlist(2,LITREF(lit_276),LITREF(lit_277)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1585_148 = YPmet(FUNCODEREF(fun_x_1585_148),LITREF(lit_275),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPmet(FUNCODEREF(fun_to_c_149),LITREF(lit_225),T73,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(Yx8rSg2cYto_c);
  if (T77 != YPfalse) {
    T76 = VARREF(Yx8rSg2cYto_c);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_to_c_149;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(Yx8rSg2cYto_c,T75);
  lit_279 = YPsb((P)"with_exit");
  T79 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_225),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(Yx8rSg2cYto_c);
  if (T82 != YPfalse) {
    T81 = VARREF(Yx8rSg2cYto_c);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_to_c_150;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(Yx8rSg2cYto_c,T80);
  lit_280 = YPsb((P)"with_cleanup");
  T84 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPmet(FUNCODEREF(fun_to_c_151),LITREF(lit_225),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(Yx8rSg2cYto_c);
  if (T87 != YPfalse) {
    T86 = VARREF(Yx8rSg2cYto_c);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_to_c_151;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(Yx8rSg2cYto_c,T85);
  lit_281 = YPsb((P)"CALLN");
  lit_282 = YPsb((P)"1");
  lit_283 = YPsb((P)"%with-monitor");
  lit_284 = YPsb((P)"5");
  T89 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPmet(FUNCODEREF(fun_to_c_152),LITREF(lit_225),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(Yx8rSg2cYto_c);
  if (T92 != YPfalse) {
    T91 = VARREF(Yx8rSg2cYto_c);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_to_c_152;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(Yx8rSg2cYto_c,T90);
  lit_285 = YPPsym((P)"x-1590");
  lit_286 = YPPsym((P)"x-1589");
  lit_287 = YPsb((P)"(P)%s");
  lit_288 = YPPsym((P)"x-1595");
  lit_289 = YPPsym((P)"x-1594");
  lit_290 = YPPsym((P)"x-1593");
  T96 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1590_153 = YPmet(FUNCODEREF(fun_x_1590_153),LITREF(lit_285),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(2,LITREF(lit_289),LITREF(lit_290)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1595_154 = YPmet(FUNCODEREF(fun_x_1595_154),LITREF(lit_288),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_155 = YPmet(FUNCODEREF(fun_to_c_155),LITREF(lit_225),T94,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(Yx8rSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(Yx8rSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_155;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(Yx8rSg2cYto_c,T97);
  lit_291 = YPsb((P)"FUNFAB");
  lit_292 = YPsb((P)",%d");
  lit_293 = YPPsym((P)"x-1598");
  lit_294 = YPPsym((P)"x-1597");
  T103 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(1,LITREF(lit_294)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1598_157 = YPmet(FUNCODEREF(fun_x_1598_157),LITREF(lit_293),T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_225),T101,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(Yx8rSg2cYto_c);
  if (T106 != YPfalse) {
    T105 = VARREF(Yx8rSg2cYto_c);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_to_c_158;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(Yx8rSg2cYto_c,T104);
  lit_295 = YPPsym((P)"funshell-to-c");
  lit_296 = YPPsym((P)"b");
  lit_297 = YPsb((P)"FUNSHELL");
  lit_298 = YPsb((P)"%d");
  lit_299 = YPsb((P)"%d");
  T108 = YPsig(YPPlist(5,LITREF(lit_296),LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(5,VARREF(Yx8rSastYLbindingG),VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_159 = YPmet(FUNCODEREF(fun_funshell_to_c_159),LITREF(lit_295),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(Yx8rSg2cYfunshell_to_c);
  if (T111 != YPfalse) {
    T110 = VARREF(Yx8rSg2cYfunshell_to_c);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_funshell_to_c_159;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(Yx8rSg2cYfunshell_to_c,T109);
  lit_300 = YPPsym((P)"funinit-to-c");
  lit_301 = YPsb((P)"FUNINIT");
  lit_302 = YPsb((P)", %s");
  lit_303 = YPPsym((P)"x-1602");
  lit_304 = YPPsym((P)"x-1601");
  T115 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_304)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1602_161 = YPmet(FUNCODEREF(fun_x_1602_161),LITREF(lit_303),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(5,LITREF(lit_296),LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(5,VARREF(Yx8rSastYLbindingG),VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_162 = YPmet(FUNCODEREF(fun_funinit_to_c_162),LITREF(lit_300),T113,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(Yx8rSg2cYfuninit_to_c);
  if (T118 != YPfalse) {
    T117 = VARREF(Yx8rSg2cYfuninit_to_c);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_funinit_to_c_162;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(Yx8rSg2cYfuninit_to_c,T116);
  lit_305 = YPsb((P)"%macro");
  T120 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_163 = YPmet(FUNCODEREF(fun_to_c_163),LITREF(lit_225),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(Yx8rSg2cYto_c);
  if (T123 != YPfalse) {
    T122 = VARREF(Yx8rSg2cYto_c);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_to_c_163;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(Yx8rSg2cYto_c,T121);
  lit_306 = YPPsym((P)"out-list-builder");
  lit_307 = YPPsym((P)"elts");
  lit_308 = YPsb((P)"nil");
  lit_309 = YPsb((P)"%%list");
  lit_310 = YPsb((P)"%d");
  lit_311 = YPPsym((P)"x-1606");
  lit_312 = YPPsym((P)"x-1605");
  T126 = YPsig(YPPlist(1,LITREF(lit_312)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1606_164 = YPmet(FUNCODEREF(fun_x_1606_164),LITREF(lit_311),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(3,LITREF(lit_226),LITREF(lit_48),LITREF(lit_307)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_165 = YPmet(FUNCODEREF(fun_out_list_builder_165),LITREF(lit_306),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(Yx8rSg2cYout_list_builder);
  if (T129 != YPfalse) {
    T128 = VARREF(Yx8rSg2cYout_list_builder);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_out_list_builder_165;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(Yx8rSg2cYout_list_builder,T127);
  lit_313 = YPPsym((P)"gen-fab-list");
  lit_314 = YPPsym((P)"refs");
  T132 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_314)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_167 = YPmet(FUNCODEREF(fun_gen_fab_list_167),LITREF(lit_313),T131,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(Yx8rSg2cYgen_fab_list);
  if (T135 != YPfalse) {
    T134 = VARREF(Yx8rSg2cYgen_fab_list);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_gen_fab_list_167;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(Yx8rSg2cYgen_fab_list,T133);
  lit_315 = YPPsym((P)"generate-function-specs");
  lit_316 = YPPsym((P)"sig");
  T137 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_316)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_168 = YPmet(FUNCODEREF(fun_generate_function_specs_168),LITREF(lit_315),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(Yx8rSg2cYgenerate_function_specs);
  if (T140 != YPfalse) {
    T139 = VARREF(Yx8rSg2cYgenerate_function_specs);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_generate_function_specs_168;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(Yx8rSg2cYgenerate_function_specs,T138);
  lit_317 = YPsb((P)"%sig");
  lit_318 = YPsb((P)"nil");
  T143 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPmet(FUNCODEREF(fun_to_c_170),LITREF(lit_225),T142,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(Yx8rSg2cYto_c);
  if (T146 != YPfalse) {
    T145 = VARREF(Yx8rSg2cYto_c);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_to_c_170;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(Yx8rSg2cYto_c,T144);
  lit_319 = YPsb((P)"%gen");
  lit_320 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_321 = YPsb((P)"nil");
  lit_322 = YPsb((P)"%false");
  lit_323 = YPsb((P)"%false");
  lit_324 = YPsb((P)"%false");
  T148 = YPsig(YPPlist(4,LITREF(lit_46),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(Yx8rSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_171 = YPmet(FUNCODEREF(fun_to_c_171),LITREF(lit_225),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Yx8rSg2cYto_c);
  if (T151 != YPfalse) {
    T150 = VARREF(Yx8rSg2cYto_c);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_to_c_171;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Yx8rSg2cYto_c,T149);
  lit_325 = YPPsym((P)"generate-function-forwards");
  lit_326 = YPPsym((P)"definitions");
  lit_327 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_328 = YPPsym((P)"x-1610");
  lit_329 = YPPsym((P)"x-1609");
  T154 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1610_172 = YPmet(FUNCODEREF(fun_x_1610_172),LITREF(lit_328),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_326)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_173 = YPmet(FUNCODEREF(fun_generate_function_forwards_173),LITREF(lit_325),T153,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(Yx8rSg2cYgenerate_function_forwards);
  if (T157 != YPfalse) {
    T156 = VARREF(Yx8rSg2cYgenerate_function_forwards);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_generate_function_forwards_173;
  T155 = CALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(Yx8rSg2cYgenerate_function_forwards,T155);
  lit_330 = YPPsym((P)"generate-function-forward");
  lit_331 = YPPsym((P)"defn");
  lit_332 = YPsb((P)"%s P %s (");
  lit_333 = YPsb((P)"static");
  lit_334 = YPsb((P)"extern");
  lit_335 = YPPsym((P)"x-1614");
  lit_336 = YPPsym((P)"x-1613");
  lit_337 = YPPsym((P)"x-1612");
  lit_338 = YPsb((P)"P");
  lit_339 = YPsb((P)");\n");
  T160 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_337)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1614_174 = YPmet(FUNCODEREF(fun_x_1614_174),LITREF(lit_335),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_331)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_175 = YPmet(FUNCODEREF(fun_generate_function_forward_175),LITREF(lit_330),T159,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(Yx8rSg2cYgenerate_function_forward);
  if (T163 != YPfalse) {
    T162 = VARREF(Yx8rSg2cYgenerate_function_forward);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_generate_function_forward_175;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(Yx8rSg2cYgenerate_function_forward,T161);
  lit_340 = YPPsym((P)"generate-function-binding");
  lit_341 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_342 = YPsb((P)"fun_%s");
  lit_343 = YPsb((P)"fun_%s_%s");
  T165 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_331)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_176 = YPmet(FUNCODEREF(fun_generate_function_binding_176),LITREF(lit_340),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(Yx8rSg2cYgenerate_function_binding);
  if (T168 != YPfalse) {
    T167 = VARREF(Yx8rSg2cYgenerate_function_binding);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_generate_function_binding_176;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(Yx8rSg2cYgenerate_function_binding,T166);
  lit_344 = YPsb((P)"FUNFOR(");
  lit_345 = YPsb((P)"LOCFOR(");
  lit_346 = YPsb((P)");\n");
  T170 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_331)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_177 = YPmet(FUNCODEREF(fun_generate_function_forward_177),LITREF(lit_330),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(Yx8rSg2cYgenerate_function_forward);
  if (T173 != YPfalse) {
    T172 = VARREF(Yx8rSg2cYgenerate_function_forward);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_generate_function_forward_177;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(Yx8rSg2cYgenerate_function_forward,T171);
  lit_347 = YPPsym((P)"generate-function-bodies");
  lit_348 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_349 = YPPsym((P)"def");
  T176 = YPsig(YPPlist(1,LITREF(lit_349)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_326)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_179 = YPmet(FUNCODEREF(fun_generate_function_bodies_179),LITREF(lit_347),T175,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(Yx8rSg2cYgenerate_function_bodies);
  if (T179 != YPfalse) {
    T178 = VARREF(Yx8rSg2cYgenerate_function_bodies);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_generate_function_bodies_179;
  T177 = CALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(Yx8rSg2cYgenerate_function_bodies,T177);
  lit_350 = YPPsym((P)"generate-functions");
  T182 = YPsig(YPPlist(1,LITREF(lit_349)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(4,LITREF(lit_326),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_181 = YPmet(FUNCODEREF(fun_generate_functions_181),LITREF(lit_350),T181,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(Yx8rSg2cYgenerate_functions);
  if (T185 != YPfalse) {
    T184 = VARREF(Yx8rSg2cYgenerate_functions);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_generate_functions_181;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(Yx8rSg2cYgenerate_functions,T183);
  lit_351 = YPPsym((P)"generate-closure-structure");
  lit_352 = YPPsym((P)"definition");
  lit_353 = YPsb((P)" = %s");
  lit_354 = YPsb((P)"%met");
  lit_355 = YPsb((P)"ENVNUL");
  lit_356 = YPsb((P)"PNUL");
  T187 = YPsig(YPPlist(4,LITREF(lit_352),LITREF(lit_226),LITREF(lit_165),LITREF(lit_48)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_182 = YPmet(FUNCODEREF(fun_generate_closure_structure_182),LITREF(lit_351),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(Yx8rSg2cYgenerate_closure_structure);
  if (T190 != YPfalse) {
    T189 = VARREF(Yx8rSg2cYgenerate_closure_structure);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_generate_closure_structure_182;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(Yx8rSg2cYgenerate_closure_structure,T188);
  lit_357 = YPPsym((P)"generate-function-body-reference");
  lit_358 = YPsb((P)"FUNCODEREF(");
  lit_359 = YPsb((P)")");
  T192 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_352)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_183 = YPmet(FUNCODEREF(fun_generate_function_body_reference_183),LITREF(lit_357),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(Yx8rSg2cYgenerate_function_body_reference);
  if (T195 != YPfalse) {
    T194 = VARREF(Yx8rSg2cYgenerate_function_body_reference);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_generate_function_body_reference_183;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(Yx8rSg2cYgenerate_function_body_reference,T193);
  lit_360 = YPPsym((P)"generate-shadow-args");
  lit_361 = YPPsym((P)"bindings");
  lit_362 = YPsb((P)"P ");
  lit_363 = YPPsym((P)"x-1620");
  lit_364 = YPPsym((P)"x-1619");
  lit_365 = YPPsym((P)"x-1618");
  lit_366 = YPPsym((P)"x-1617");
  lit_367 = YPsb((P)"a%d");
  T198 = YPsig(YPPlist(3,LITREF(lit_364),LITREF(lit_365),LITREF(lit_366)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1620_184 = YPmet(FUNCODEREF(fun_x_1620_184),LITREF(lit_363),T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(2,LITREF(lit_361),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_185 = YPmet(FUNCODEREF(fun_generate_shadow_args_185),LITREF(lit_360),T197,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(Yx8rSg2cYgenerate_shadow_args);
  if (T201 != YPfalse) {
    T200 = VARREF(Yx8rSg2cYgenerate_shadow_args);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_generate_shadow_args_185;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(Yx8rSg2cYgenerate_shadow_args,T199);
  lit_368 = YPPsym((P)"generate-return");
  lit_369 = YPsb((P)"return ");
  T203 = YPsig(YPPlist(3,LITREF(lit_331),LITREF(lit_165),LITREF(lit_48)),YPPlist(3,VARREF(Yx8rSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_186 = YPmet(FUNCODEREF(fun_generate_return_186),LITREF(lit_368),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(Yx8rSg2cYgenerate_return);
  if (T206 != YPfalse) {
    T205 = VARREF(Yx8rSg2cYgenerate_return);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_return_186;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(Yx8rSg2cYgenerate_return,T204);
  lit_370 = YPsb((P)"RET");
  T208 = YPsig(YPPlist(3,LITREF(lit_331),LITREF(lit_165),LITREF(lit_48)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_187 = YPmet(FUNCODEREF(fun_generate_return_187),LITREF(lit_368),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(Yx8rSg2cYgenerate_return);
  if (T211 != YPfalse) {
    T210 = VARREF(Yx8rSg2cYgenerate_return);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_generate_return_187;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(Yx8rSg2cYgenerate_return,T209);
  lit_371 = YPPsym((P)"primitive-inlinable?");
  lit_372 = YPPlist(34,YPPsym((P)"%tag-bits"),YPPsym((P)"%tag"),YPPsym((P)"%untag"),YPPsym((P)"%class-of"),YPPsym((P)"%int"),YPPsym((P)"%ib"),YPPsym((P)"%iu"),YPPsym((P)"%chr"),YPPsym((P)"%cb"),YPPsym((P)"%cu"),YPPsym((P)"%loc"),YPPsym((P)"%lb"),YPPsym((P)"%lu"),YPPsym((P)"%empty?"),YPPsym((P)"%head"),YPPsym((P)"%tail"),YPPsym((P)"@empty?"),YPPsym((P)"@head"),YPPsym((P)"@tail"),YPPsym((P)"@=="),YPPsym((P)"@="),YPPsym((P)"@+"),YPPsym((P)"@<"),YPPsym((P)"%gen-cache-arg-pos"),YPPsym((P)"%gen-cache-singletons"),YPPsym((P)"%gen-cache-classes"),YPPsym((P)"%gen-cache-missable?"),YPPsym((P)"@oelt"),YPPsym((P)"@oelt-setter"),YPPsym((P)"@olen"),YPPsym((P)"prop-value-at"),YPPsym((P)"prop-value-at-setter"),YPPsym((P)"gen-lookup"),YPPsym((P)"gen-lookup-1-using"));
  T213 = YPsig(YPPlist(1,LITREF(lit_46)),YPPlist(1,VARREF(Yx8rSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_188 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_188),LITREF(lit_371),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(Yx8rSg2cYprimitive_inlinableQ);
  if (T216 != YPfalse) {
    T215 = VARREF(Yx8rSg2cYprimitive_inlinableQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_primitive_inlinableQ_188;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(Yx8rSg2cYprimitive_inlinableQ,T214);
  lit_373 = YPPsym((P)"generate-function-code");
  lit_374 = YPsb((P)"\n%s%sP ");
  lit_375 = YPsb((P)"static ");
  lit_376 = YPsb((P)"");
  lit_377 = YPsb((P)"INLINE ");
  lit_378 = YPPsym((P)"x-1626");
  lit_379 = YPPsym((P)"x-1625");
  lit_380 = YPPsym((P)"x-1624");
  lit_381 = YPsb((P)"P ");
  lit_382 = YPsb((P)" {\n");
  lit_383 = YPsb((P)"loop:\n");
  lit_384 = YPsb((P)"}\n");
  T219 = YPsig(YPPlist(2,LITREF(lit_379),LITREF(lit_380)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1626_189 = YPmet(FUNCODEREF(fun_x_1626_189),LITREF(lit_378),T219,ENVNUL,PNUL,YPfalse);
  T218 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_190 = YPmet(FUNCODEREF(fun_generate_function_code_190),LITREF(lit_373),T218,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(Yx8rSg2cYgenerate_function_code);
  if (T222 != YPfalse) {
    T221 = VARREF(Yx8rSg2cYgenerate_function_code);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_generate_function_code_190;
  T220 = CALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(Yx8rSg2cYgenerate_function_code,T220);
  lit_385 = YPPsym((P)"dispatcher?");
  lit_386 = YPsb((P)"%dispatch");
  lit_387 = YPsb((P)"-dispatch");
  lit_388 = YPsb((P)"-dispatch");
  T224 = YPsig(YPPlist(1,LITREF(lit_352)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_191 = YPmet(FUNCODEREF(fun_dispatcherQ_191),LITREF(lit_385),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(Yx8rSg2cYdispatcherQ);
  if (T227 != YPfalse) {
    T226 = VARREF(Yx8rSg2cYdispatcherQ);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_dispatcherQ_191;
  T225 = CALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(Yx8rSg2cYdispatcherQ,T225);
  lit_389 = YPsb((P)"\nFUNCODEDEF(");
  lit_390 = YPsb((P)") {\n");
  lit_391 = YPsb((P)"P ");
  lit_392 = YPPsym((P)"x-1630");
  lit_393 = YPPsym((P)"x-1629");
  lit_394 = YPPsym((P)"x-1628");
  lit_395 = YPsb((P)"LINK_STACK();\n");
  lit_396 = YPsb((P)"NARGS(");
  lit_397 = YPsb((P)"ARG(");
  lit_398 = YPsb((P)", %d)");
  lit_399 = YPsb((P)"loop:\n");
  lit_400 = YPsb((P)"UNLINK_STACK();\n");
  lit_401 = YPsb((P)"}\n");
  T231 = YPsig(YPPlist(2,LITREF(lit_393),LITREF(lit_394)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1630_192 = YPmet(FUNCODEREF(fun_x_1630_192),LITREF(lit_392),T231,ENVNUL,PNUL,YPfalse);
  T230 = YPsig(YPPlist(1,LITREF(lit_296)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_352)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_194 = YPmet(FUNCODEREF(fun_generate_function_code_194),LITREF(lit_373),T229,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(Yx8rSg2cYgenerate_function_code);
  if (T234 != YPfalse) {
    T233 = VARREF(Yx8rSg2cYgenerate_function_code);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_generate_function_code_194;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(Yx8rSg2cYgenerate_function_code,T232);
  lit_402 = YPPsym((P)"generate-local-temporaries");
  lit_403 = YPPsym((P)"temps");
  lit_404 = YPPsym((P)"x-1632");
  lit_405 = YPPsym((P)"x-1631");
  lit_406 = YPsb((P)"P ");
  T237 = YPsig(YPPlist(1,LITREF(lit_405)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1632_195 = YPmet(FUNCODEREF(fun_x_1632_195),LITREF(lit_404),T237,ENVNUL,PNUL,YPfalse);
  T236 = YPsig(YPPlist(2,LITREF(lit_403),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_196 = YPmet(FUNCODEREF(fun_generate_local_temporaries_196),LITREF(lit_402),T236,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(Yx8rSg2cYgenerate_local_temporaries);
  if (T240 != YPfalse) {
    T239 = VARREF(Yx8rSg2cYgenerate_local_temporaries);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_generate_local_temporaries_196;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(Yx8rSg2cYgenerate_local_temporaries,T238);
  VARSET(Yx8rSg2cYTtrace_registersQT,YPfalse);
  VARSET(Yx8rSg2cYTregisters_per_lineT,YPint((P)16));
  lit_407 = YPPsym((P)"generate-registers");
  lit_408 = YPPsym((P)"regs");
  lit_409 = YPPsym((P)"next-line");
  lit_410 = YPsb((P)"P ");
  lit_411 = YPPsym((P)"next-reg");
  lit_412 = YPsb((P)";\n");
  T244 = YPsig(YPPlist(2,LITREF(lit_408),LITREF(lit_119)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_197 = YPmet(FUNCODEREF(fun_next_reg_197),LITREF(lit_411),T244,ENVNUL,PNUL,YPfalse);
  T243 = YPsig(YPPlist(1,LITREF(lit_408)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_198 = YPmet(FUNCODEREF(fun_next_line_198),LITREF(lit_409),T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(2,LITREF(lit_408),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_199 = YPmet(FUNCODEREF(fun_generate_registers_199),LITREF(lit_407),T242,ENVNUL,PNUL,YPfalse);
  T247 = BOUNDP(Yx8rSg2cYgenerate_registers);
  if (T247 != YPfalse) {
    T246 = VARREF(Yx8rSg2cYgenerate_registers);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_generate_registers_199;
  T245 = CALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(Yx8rSg2cYgenerate_registers,T245);
  lit_413 = YPPsym((P)"module-info-name");
  lit_414 = YPsb((P)"module_info_");
  T249 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_200 = YPmet(FUNCODEREF(fun_module_info_name_200),LITREF(lit_413),T249,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(Yx8rSg2cYmodule_info_name);
  if (T252 != YPfalse) {
    T251 = VARREF(Yx8rSg2cYmodule_info_name);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_module_info_name_200;
  T250 = CALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(Yx8rSg2cYmodule_info_name,T250);
  lit_415 = YPPsym((P)"declare-imported-module-infos");
  lit_416 = YPPsym((P)"maybe-declare");
  lit_417 = YPsb((P)"extern MODULE_INFO %s;\n");
  T256 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_201 = YPmet(FUNCODEREF(fun_maybe_declare_201),LITREF(lit_416),T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(Yx8rSg2cYdeclare_imported_module_infos),LITREF(lit_415),T254,ENVNUL,PNUL,YPfalse);
  T257 = Yx8rSg2cYdeclare_imported_module_infos;
  VARSET(Yx8rSg2cYdeclare_imported_module_infos,T257);
  lit_418 = YPPsym((P)"generate-module-info");
  lit_419 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_420 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_421 = YPPsym((P)"x-1634");
  lit_422 = YPPsym((P)"x-1633");
  lit_423 = YPsb((P)"  {&%s},\n");
  lit_424 = YPsb((P)"  {NULL}\n};\n");
  lit_425 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_426 = YPPsym((P)"local-name");
  lit_427 = YPsb((P)"  {\"%s\", &%s, \"%s\"},\n");
  lit_428 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_429 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_430 = YPsb((P)"  {\"%s\", &%s},\n");
  lit_431 = YPsb((P)"  {\"%s\", NULL},\n");
  lit_432 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_433 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_434 = YPPsym((P)"x-1636");
  lit_435 = YPPsym((P)"x-1635");
  lit_436 = YPsb((P)"  {\"%s\", \"%s\"},\n");
  lit_437 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_438 = YPsb((P)"\nextern MODULE_INFO %s;\n");
  lit_439 = YPsb((P)"MODULE_INFO %s = {\n");
  lit_440 = YPsb((P)"  \"%s\",\n");
  lit_441 = YPsb((P)"  NULL,\n");
  lit_442 = YPsb((P)"  use_infos,\n");
  lit_443 = YPsb((P)"  import_infos,\n");
  lit_444 = YPsb((P)"  binding_infos,\n");
  lit_445 = YPsb((P)"  export_infos,\n");
  lit_446 = YPsb((P)"};\n");
  T262 = YPsig(YPPlist(1,LITREF(lit_422)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1634_204 = YPmet(FUNCODEREF(fun_x_1634_204),LITREF(lit_421),T262,ENVNUL,PNUL,YPfalse);
  T261 = YPsig(YPPlist(2,LITREF(lit_426),LITREF(lit_74)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T260,ENVNUL,PNUL,YPfalse);
  T259 = YPsig(YPPlist(1,LITREF(lit_435)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1636_207 = YPmet(FUNCODEREF(fun_x_1636_207),LITREF(lit_434),T259,ENVNUL,PNUL,YPfalse);
  T258 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSg2cYgenerate_module_info = YPmet(FUNCODEREF(Yx8rSg2cYgenerate_module_info),LITREF(lit_418),T258,ENVNUL,PNUL,YPfalse);
  T263 = Yx8rSg2cYgenerate_module_info;
  VARSET(Yx8rSg2cYgenerate_module_info,T263);
  lit_447 = YPPsym((P)"module-init-name");
  lit_448 = YPsb((P)"load_module_");
  T264 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_209 = YPmet(FUNCODEREF(fun_module_init_name_209),LITREF(lit_447),T264,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(Yx8rSg2cYmodule_init_name);
  if (T267 != YPfalse) {
    T266 = VARREF(Yx8rSg2cYmodule_init_name);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_module_init_name_209;
  T265 = CALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(Yx8rSg2cYmodule_init_name,T265);
  lit_449 = YPPsym((P)"module-init-decl");
  lit_450 = YPsb((P)"void ");
  lit_451 = YPsb((P)" (void)");
  T269 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_210 = YPmet(FUNCODEREF(fun_module_init_decl_210),LITREF(lit_449),T269,ENVNUL,PNUL,YPfalse);
  T272 = BOUNDP(Yx8rSg2cYmodule_init_decl);
  if (T272 != YPfalse) {
    T271 = VARREF(Yx8rSg2cYmodule_init_decl);
  } else {
    T271 = YPfalse;
  }
  T273 = fun_module_init_decl_210;
  T270 = CALL2(1,VARREF(YPdefine_method),T271,T273);
  VARSET(Yx8rSg2cYmodule_init_decl,T270);
  lit_452 = YPPsym((P)"generate-module-init");
  lit_453 = YPPsym((P)"form");
  lit_454 = YPsb((P)"dl");
  lit_455 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_456 = YPPsym((P)"x-1638");
  lit_457 = YPPsym((P)"x-1637");
  lit_458 = YPsb((P)"extern %s;\n");
  lit_459 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_460 = YPsb((P)"extern %s;\n\n");
  lit_461 = YPsb((P)"%s {\n");
  lit_462 = YPsb((P)"  static int need_init = 1;\n");
  lit_463 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_464 = YPsb((P)"  need_init = 0;\n");
  lit_465 = YPPsym((P)"x-1640");
  lit_466 = YPPsym((P)"x-1639");
  lit_467 = YPsb((P)"  %s();\n");
  lit_468 = YPsb((P)"\n");
  lit_469 = YPsb((P)"\n");
  lit_470 = YPsb((P)"}\n");
  T276 = YPsig(YPPlist(1,LITREF(lit_457)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1638_211 = YPmet(FUNCODEREF(fun_x_1638_211),LITREF(lit_456),T276,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(1,LITREF(lit_466)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1640_212 = YPmet(FUNCODEREF(fun_x_1640_212),LITREF(lit_465),T275,ENVNUL,PNUL,YPfalse);
  T274 = YPsig(YPPlist(3,LITREF(lit_48),LITREF(lit_17),LITREF(lit_453)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_213 = YPmet(FUNCODEREF(fun_generate_module_init_213),LITREF(lit_452),T274,ENVNUL,PNUL,YPfalse);
  T279 = BOUNDP(Yx8rSg2cYgenerate_module_init);
  if (T279 != YPfalse) {
    T278 = VARREF(Yx8rSg2cYgenerate_module_init);
  } else {
    T278 = YPfalse;
  }
  T280 = fun_generate_module_init_213;
  T277 = CALL2(1,VARREF(YPdefine_method),T278,T280);
  VARSET(Yx8rSg2cYgenerate_module_init,T277);
  lit_471 = YPPsym((P)"generate-main");
  lit_472 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_473 = YPsb((P)"extern MODULE_INFO %s;\n");
  lit_474 = YPsb((P)"extern %s;\n\n");
  lit_475 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &%s;\n\n");
  lit_476 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_477 = YPsb((P)"  %s(argc, argv);\n");
  lit_478 = YPsb((P)"%init-world");
  lit_479 = YPsb((P)"  %s();\n");
  lit_480 = YPsb((P)"  return 0;\n");
  lit_481 = YPsb((P)"}\n");
  T281 = YPsig(YPPlist(2,LITREF(lit_48),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_214 = YPmet(FUNCODEREF(fun_generate_main_214),LITREF(lit_471),T281,ENVNUL,PNUL,YPfalse);
  T284 = BOUNDP(Yx8rSg2cYgenerate_main);
  if (T284 != YPfalse) {
    T283 = VARREF(Yx8rSg2cYgenerate_main);
  } else {
    T283 = YPfalse;
  }
  T285 = fun_generate_main_214;
  T282 = CALL2(1,VARREF(YPdefine_method),T283,T285);
  VARSET(Yx8rSg2cYgenerate_main,T282);
  T286 = YPfalse;
  return T286;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_x8rSast;
extern MODULE_INFO module_info_x8rStop;
extern MODULE_INFO module_info_x8rSast_linearize;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSbuf;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_x8rSsyntax;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScycle;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSwrite},
  {&module_info_x8rSast},
  {&module_info_x8rStop},
  {&module_info_x8rSast_linearize},
  {&module_info_gooScolsSstr},
  {&module_info_gooSsystem},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$e", &module_info_gooSmath, "$e"},
  {"always", &module_info_gooSruntime, "always"},
  {"def-programs", &module_info_x8rSast, "def-programs"},
  {"<box-read>", &module_info_x8rSast_linearize, "<box-read>"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<global-reference>", &module_info_x8rSast, "<global-reference>"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"binding-info", &module_info_x8rSast, "binding-info"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"application-arguments", &module_info_x8rSast, "application-arguments"},
  {"$goo-boot-module-name", &module_info_x8rSast, "$goo-boot-module-name"},
  {"set-module-environments", &module_info_x8rSast, "set-module-environments"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<runtime-assignment>", &module_info_x8rSast, "<runtime-assignment>"},
  {"function-value", &module_info_x8rSast, "function-value"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"update-walk!", &module_info_x8rSast_linearize, "update-walk!"},
  {"or", &module_info_gooSmacros, "or"},
  {"<programs>", &module_info_x8rSast, "<programs>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"if", &module_info_gooSboot, "if"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"locals-bindings", &module_info_x8rSast, "locals-bindings"},
  {"install-initial-bindings", &module_info_x8rSast, "install-initial-bindings"},
  {"t=", &module_info_gooStypes, "t="},
  {"signature-nary?-setter", &module_info_x8rSast, "signature-nary?-setter"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"g2c-eval", &module_info_x8rStop, "g2c-eval"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"monitor-handler", &module_info_x8rSast, "monitor-handler"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"constant-index", &module_info_x8rSast, "constant-index"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"reference-binding", &module_info_x8rSast, "reference-binding"},
  {"analyze-calls", &module_info_x8rSast_linearize, "analyze-calls"},
  {"locals-body", &module_info_x8rSast, "locals-body"},
  {"any?", &module_info_gooStypes, "any?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"|", &module_info_gooSmath, "|"},
  {"close", &module_info_gooSioSport, "close"},
  {"signature-value", &module_info_x8rSast, "signature-value"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<locals>", &module_info_x8rSast, "<locals>"},
  {"<local-assignment>", &module_info_x8rSast, "<local-assignment>"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len-setter", &module_info_gooScolsSbuf, "len-setter"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"function-debug-name-setter", &module_info_x8rSast, "function-debug-name-setter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"function-index", &module_info_x8rSast, "function-index"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"find-environment-module", &module_info_x8rSast, "find-environment-module"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<ast-signature>", &module_info_x8rSast, "<ast-signature>"},
  {"function-debug-name", &module_info_x8rSast, "function-debug-name"},
  {"read", &module_info_gooSruntime, "read"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"env-object-name", &module_info_x8rSast, "env-object-name"},
  {"<static-global-environment>", &module_info_x8rSast, "<static-global-environment>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"<sequential>", &module_info_x8rSast, "<sequential>"},
  {"form-quotations", &module_info_x8rSast_linearize, "form-quotations"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"<free-reference>", &module_info_x8rSast_linearize, "<free-reference>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"fix-let-bindings-setter", &module_info_x8rSast, "fix-let-bindings-setter"},
  {"do-named-static-global-bindings", &module_info_x8rSast, "do-named-static-global-bindings"},
  {"len/fill-setter", &module_info_gooScolsSbuf, "len/fill-setter"},
  {"pop-last!", &module_info_gooScolsSbuf, "pop-last!"},
  {"@<", &module_info_gooSboot, "@<"},
  {"now", &module_info_gooScolsScol, "now"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"binding-global-box", &module_info_x8rSast, "binding-global-box"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"+", &module_info_gooSmath, "+"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"sequentialize", &module_info_x8rSast, "sequentialize"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"locals-functions-setter", &module_info_x8rSast, "locals-functions-setter"},
  {"function-source-setter", &module_info_x8rSast, "function-source-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"<constant>", &module_info_x8rSast, "<constant>"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"unconstrained-type?", &module_info_x8rSast_linearize, "unconstrained-type?"},
  {"binding-index-setter", &module_info_x8rSast, "binding-index-setter"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"log", &module_info_gooSmath, "log"},
  {"get", &module_info_gooSioSport, "get"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"function-free-setter", &module_info_x8rSast, "function-free-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"vec", &module_info_gooSboot, "vec"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"%get", &module_info_gooSboot, "%get"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"fin", &module_info_gooSboot, "fin"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"closurize-main!", &module_info_x8rSast_linearize, "closurize-main!"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"function-free", &module_info_x8rSast, "function-free"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"reference-called-function?-setter", &module_info_x8rSast, "reference-called-function?-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"signature-nary?", &module_info_x8rSast, "signature-nary?"},
  {"<program>", &module_info_x8rSast, "<program>"},
  {"<closure-creation>", &module_info_x8rSast_linearize, "<closure-creation>"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<ast-function>", &module_info_x8rSast, "<ast-function>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"fix-let-types-setter", &module_info_x8rSast, "fix-let-types-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"reference-called-function?", &module_info_x8rSast, "reference-called-function?"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"binding-inferred-type-setter", &module_info_x8rSast, "binding-inferred-type-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"program-register-setter", &module_info_x8rSast, "program-register-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"*register-passive?*", &module_info_x8rSast_linearize, "*register-passive?*"},
  {"reference-frame-number", &module_info_x8rSast, "reference-frame-number"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"bound?-reference", &module_info_x8rSast, "bound?-reference"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"program-type", &module_info_x8rSast, "program-type"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"bind-exit-main-fun", &module_info_x8rSast, "bind-exit-main-fun"},
  {"eval", &module_info_x8rSsyntax, "eval"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-g2c-module", &module_info_x8rSast, "fab-g2c-module"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"global-box-value", &module_info_x8rSast, "global-box-value"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"application-function", &module_info_x8rSast, "application-function"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"sin", &module_info_gooSmath, "sin"},
  {"^", &module_info_gooSmath, "^"},
  {"&", &module_info_gooSmath, "&"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"gather-temporaries!", &module_info_x8rSast_linearize, "gather-temporaries!"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%im", &module_info_gooSboot, "%im"},
  {"round", &module_info_gooSmath, "round"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"binding-locative", &module_info_x8rSast, "binding-locative"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"function-binding", &module_info_x8rSast, "function-binding"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<arguments>", &module_info_x8rSast, "<arguments>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"in", &module_info_gooSioSport, "in"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<ast-generic>", &module_info_x8rSast, "<ast-generic>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"unwind-protect-cleanup-thunk", &module_info_x8rSast, "unwind-protect-cleanup-thunk"},
  {"dc", &module_info_gooSboot, "dc"},
  {"signature-bindings-setter", &module_info_x8rSast, "signature-bindings-setter"},
  {"probe-module", &module_info_x8rSast, "probe-module"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"assignment-binding", &module_info_x8rSast, "assignment-binding"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"<box-creation>", &module_info_x8rSast_linearize, "<box-creation>"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"open", &module_info_gooSioSport, "open"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"form-program", &module_info_x8rSast_linearize, "form-program"},
  {"module-name-to-relpath", &module_info_x8rSast, "module-name-to-relpath"},
  {"function-signature-setter", &module_info_x8rSast, "function-signature-setter"},
  {"extract-things!", &module_info_x8rSast_linearize, "extract-things!"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"closure-creation-index", &module_info_x8rSast_linearize, "closure-creation-index"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"signature-value-setter", &module_info_x8rSast, "signature-value-setter"},
  {"<ast-method>", &module_info_x8rSast, "<ast-method>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"binding-inferred-type", &module_info_x8rSast, "binding-inferred-type"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"new", &module_info_gooSboot, "new"},
  {"cos", &module_info_gooSmath, "cos"},
  {"function-signature", &module_info_x8rSast, "function-signature"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"<assignment>", &module_info_x8rSast, "<assignment>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"load", &module_info_x8rStop, "load"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"function-source", &module_info_x8rSast, "function-source"},
  {"<ast-primitive-definition>", &module_info_x8rSast, "<ast-primitive-definition>"},
  {"program-type-setter", &module_info_x8rSast, "program-type-setter"},
  {"function-self-recursive?-setter", &module_info_x8rSast, "function-self-recursive?-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"frame", &module_info_x8rStop, "frame"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<ast-primitive>", &module_info_x8rSast, "<ast-primitive>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"function-bindings", &module_info_x8rSast, "function-bindings"},
  {"rem", &module_info_gooSmath, "rem"},
  {"binding-name", &module_info_x8rSast, "binding-name"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"<global-assignment>", &module_info_x8rSast, "<global-assignment>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"signature-bindings", &module_info_x8rSast, "signature-bindings"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"program-form", &module_info_x8rSast_linearize, "program-form"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"objectify-signature", &module_info_x8rSast, "objectify-signature"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"do-static-global-bindings", &module_info_x8rSast, "do-static-global-bindings"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"unchecked-runtime-environment", &module_info_x8rSast, "unchecked-runtime-environment"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"def", &module_info_gooSboot, "def"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"signature-specs-setter", &module_info_x8rSast, "signature-specs-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"bt", &module_info_x8rStop, "bt"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"signature-arity-setter", &module_info_x8rSast, "signature-arity-setter"},
  {"box-reference", &module_info_x8rSast_linearize, "box-reference"},
  {"tan", &module_info_gooSmath, "tan"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"set", &module_info_gooSboot, "set"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"frame-var", &module_info_x8rStop, "frame-var"},
  {"not", &module_info_gooSboot, "not"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"binding-global-box-setter", &module_info_x8rSast, "binding-global-box-setter"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"floor", &module_info_gooSmath, "floor"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<buf>", &module_info_gooScolsSbuf, "<buf>"},
  {"module-loader-module-type", &module_info_x8rSast, "module-loader-module-type"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<alternative>", &module_info_x8rSast, "<alternative>"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"objectify-quotation", &module_info_x8rSast, "objectify-quotation"},
  {"fun", &module_info_gooSboot, "fun"},
  {"binding-module-name", &module_info_x8rSast, "binding-module-name"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<immediate-constant>", &module_info_x8rSast, "<immediate-constant>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"program-definitions", &module_info_x8rSast_linearize, "program-definitions"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"module-syntax-environment", &module_info_x8rSast, "module-syntax-environment"},
  {"application-known?-setter", &module_info_x8rSast, "application-known?-setter"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"ct", &module_info_gooSboot, "ct"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"application-known?", &module_info_x8rSast, "application-known?"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"binding-value", &module_info_x8rSast, "binding-value"},
  {"tup", &module_info_gooSboot, "tup"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"load-in", &module_info_x8rSast, "load-in"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"<global-box>", &module_info_x8rSast, "<global-box>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"backtrace", &module_info_x8rStop, "backtrace"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<local-binding>", &module_info_x8rSast, "<local-binding>"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"reference-offset", &module_info_x8rSast_linearize, "reference-offset"},
  {"try", &module_info_gooSboot, "try"},
  {"dss", &module_info_gooSboot, "dss"},
  {"binding-dynamic-extent?-setter", &module_info_x8rSast, "binding-dynamic-extent?-setter"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"signature-arity", &module_info_x8rSast, "signature-arity"},
  {"fix-let-body", &module_info_x8rSast, "fix-let-body"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"binding-dotted?-setter", &module_info_x8rSast, "binding-dotted?-setter"},
  {"function-temporaries-setter", &module_info_x8rSast, "function-temporaries-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<application>", &module_info_x8rSast, "<application>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"fix-let-body-setter", &module_info_x8rSast, "fix-let-body-setter"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"register-allocate!", &module_info_x8rSast_linearize, "register-allocate!"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<monitor>", &module_info_x8rSast, "<monitor>"},
  {"init-ast", &module_info_x8rSast, "init-ast"},
  {"module-exports", &module_info_x8rSast, "module-exports"},
  {"binding-dynamic-extent?", &module_info_x8rSast, "binding-dynamic-extent?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"as", &module_info_gooStypes, "as"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"parse-in", &module_info_x8rStop, "parse-in"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"locals-bindings-setter", &module_info_x8rSast, "locals-bindings-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"module-binding", &module_info_x8rSast, "module-binding"},
  {"<renamed-local-binding>", &module_info_x8rSast_linearize, "<renamed-local-binding>"},
  {"binding-type-setter", &module_info_x8rSast, "binding-type-setter"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"module-name", &module_info_x8rSast, "module-name"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"as-lst", &module_info_x8rSast, "as-lst"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"objectify-with-subtransaction", &module_info_x8rSast, "objectify-with-subtransaction"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"unwind-protect-protected-thunk", &module_info_x8rSast, "unwind-protect-protected-thunk"},
  {"<passive-program>", &module_info_x8rSast, "<passive-program>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"signature-names", &module_info_x8rSast, "signature-names"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"max", &module_info_gooSmag, "max"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"environment-uses-modules", &module_info_x8rSast, "environment-uses-modules"},
  {"fix-let-bindings", &module_info_x8rSast, "fix-let-bindings"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"read-file", &module_info_x8rStop, "read-file"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"<regular-application>", &module_info_x8rSast, "<regular-application>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"program-register", &module_info_x8rSast, "program-register"},
  {"report-undefined-global-bindings", &module_info_x8rSast, "report-undefined-global-bindings"},
  {"push-last!", &module_info_gooScolsSbuf, "push-last!"},
  {"alternative-alternant", &module_info_x8rSast, "alternative-alternant"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"assignment-reference", &module_info_x8rSast, "assignment-reference"},
  {"function-data-refs-setter", &module_info_x8rSast, "function-data-refs-setter"},
  {"global-box-value-setter", &module_info_x8rSast, "global-box-value-setter"},
  {"collect-temporaries!", &module_info_x8rSast_linearize, "collect-temporaries!"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"ast-evaluate", &module_info_x8rSast, "ast-evaluate"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"binding-info-setter", &module_info_x8rSast, "binding-info-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"signature-names-setter", &module_info_x8rSast, "signature-names-setter"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"def-list", &module_info_x8rSast, "def-list"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {">", &module_info_gooSmag, ">"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"<computed-program>", &module_info_x8rSast, "<computed-program>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<bound?>", &module_info_x8rSast, "<bound?>"},
  {"esctst", &module_info_x8rStop, "esctst"},
  {"<top-level-form>", &module_info_x8rSast_linearize, "<top-level-form>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"~=", &module_info_gooSmath, "~="},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"module-target-environment", &module_info_x8rSast, "module-target-environment"},
  {"ast-contains-fun?", &module_info_x8rSast_linearize, "ast-contains-fun?"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"binding-dotted?", &module_info_x8rSast, "binding-dotted?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"binding-kind", &module_info_x8rSast, "binding-kind"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"<predefined-application>", &module_info_x8rSast, "<predefined-application>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<free-environment>", &module_info_x8rSast, "<free-environment>"},
  {"monitor-main-thunk", &module_info_x8rSast, "monitor-main-thunk"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"fix-let-arguments", &module_info_x8rSast, "fix-let-arguments"},
  {"load-module", &module_info_x8rSast, "load-module"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"application-tail?", &module_info_x8rSast, "application-tail?"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<fab-list>", &module_info_x8rSast, "<fab-list>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"remove-modules-by-name!", &module_info_x8rSast, "remove-modules-by-name!"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"signature-specs", &module_info_x8rSast, "signature-specs"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"reference-frame-offset", &module_info_x8rSast, "reference-frame-offset"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<binding>", &module_info_x8rSast, "<binding>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"program-quotations", &module_info_x8rSast_linearize, "program-quotations"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"format", &module_info_gooSruntime, "format"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"t+", &module_info_gooStypes, "t+"},
  {"fix-let-types", &module_info_x8rSast, "fix-let-types"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"<compile-time>", &module_info_x8rSast, "<compile-time>"},
  {"<module>", &module_info_x8rSast, "<module>"},
  {"buf", &module_info_gooScolsSbuf, "buf"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<runtime-reference>", &module_info_x8rSast, "<runtime-reference>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"=", &module_info_gooSmath, "="},
  {"abs", &module_info_gooSmath, "abs"},
  {"<", &module_info_gooSmag, "<"},
  {"put", &module_info_gooSioSport, "put"},
  {"asin", &module_info_gooSmath, "asin"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"function-registers-setter", &module_info_x8rSast, "function-registers-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"binding-value-setter", &module_info_x8rSast, "binding-value-setter"},
  {"function-data-refs", &module_info_x8rSast, "function-data-refs"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"map", &module_info_gooSmacros, "map"},
  {"ast-define-binding", &module_info_x8rSast, "ast-define-binding"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"~", &module_info_gooSmath, "~"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<local-reference>", &module_info_x8rSast, "<local-reference>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<module-binding>", &module_info_x8rSast, "<module-binding>"},
  {"monitor-type", &module_info_x8rSast, "monitor-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"export", &module_info_gooSboot, "export"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"application-binding", &module_info_x8rSast, "application-binding"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<real-reference>", &module_info_x8rSast, "<real-reference>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"constant-index-setter", &module_info_x8rSast, "constant-index-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"do-stack-frames", &module_info_x8rStop, "do-stack-frames"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"assignment-form-setter", &module_info_x8rSast, "assignment-form-setter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"function-index-setter", &module_info_x8rSast, "function-index-setter"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<definition>", &module_info_x8rSast, "<definition>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"binding-mutable?", &module_info_x8rSast, "binding-mutable?"},
  {"runtime-environment", &module_info_x8rSast, "runtime-environment"},
  {"function-body-setter", &module_info_x8rSast, "function-body-setter"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {"function-temporaries", &module_info_x8rSast, "function-temporaries"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<box-write>", &module_info_x8rSast_linearize, "<box-write>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"alternative-condition", &module_info_x8rSast, "alternative-condition"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"use", &module_info_gooSboot, "use"},
  {"@len", &module_info_gooSboot, "@len"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"quote", &module_info_gooSboot, "quote"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"find-binding", &module_info_x8rSast, "find-binding"},
  {"binding-index", &module_info_x8rSast, "binding-index"},
  {"lift!", &module_info_x8rSast_linearize, "lift!"},
  {"function-body", &module_info_x8rSast, "function-body"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"while", &module_info_gooSmacros, "while"},
  {"<module-binding-reference>", &module_info_x8rSast, "<module-binding-reference>"},
  {"form-definitions", &module_info_x8rSast_linearize, "form-definitions"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"flatten-seqs", &module_info_x8rSast_linearize, "flatten-seqs"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"reference-self?", &module_info_x8rSast_linearize, "reference-self?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<module-loader>", &module_info_x8rSast, "<module-loader>"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"@+", &module_info_gooSboot, "@+"},
  {"constant-value", &module_info_x8rSast, "constant-value"},
  {"<ast-macro-definition>", &module_info_x8rSast, "<ast-macro-definition>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"monitor-info", &module_info_x8rSast, "monitor-info"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"*", &module_info_gooSmath, "*"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"binding-native-to?", &module_info_x8rSast, "binding-native-to?"},
  {"t?", &module_info_gooStypes, "t?"},
  {"locals-body-setter", &module_info_x8rSast, "locals-body-setter"},
  {"closure-creation-free", &module_info_x8rSast_linearize, "closure-creation-free"},
  {"analyze-dynamic-extent", &module_info_x8rSast_linearize, "analyze-dynamic-extent"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"top", &module_info_x8rStop, "top"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"free-environment", &module_info_x8rSast, "free-environment"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"assignment-form", &module_info_x8rSast, "assignment-form"},
  {"locals-functions", &module_info_x8rSast, "locals-functions"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<unwind-protect>", &module_info_x8rSast, "<unwind-protect>"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"compile-time-program", &module_info_x8rSast, "compile-time-program"},
  {"auto-eval", &module_info_x8rStop, "auto-eval"},
  {"insert-box!", &module_info_x8rSast_linearize, "insert-box!"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"collect-registers!", &module_info_x8rSast_linearize, "collect-registers!"},
  {"environment-module", &module_info_x8rSast, "environment-module"},
  {"<fix-let>", &module_info_x8rSast, "<fix-let>"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"environment-bindings", &module_info_x8rSast, "environment-bindings"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"binding-type", &module_info_x8rSast, "binding-type"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<reference>", &module_info_x8rSast, "<reference>"},
  {"save-image", &module_info_x8rStop, "save-image"},
  {"function-registers", &module_info_x8rSast, "function-registers"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"monitor-test", &module_info_x8rSast, "monitor-test"},
  {"box-form", &module_info_x8rSast_linearize, "box-form"},
  {"<raw-constant>", &module_info_x8rSast, "<raw-constant>"},
  {"<bind-exit>", &module_info_x8rSast, "<bind-exit>"},
  {"fix-let-arguments-setter", &module_info_x8rSast, "fix-let-arguments-setter"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"loc", &module_info_gooSboot, "loc"},
  {"alternative-consequent", &module_info_x8rSast, "alternative-consequent"},
  {"atan", &module_info_gooSmath, "atan"},
  {"do-module-loader-modules", &module_info_x8rSast, "do-module-loader-modules"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"function-nary?", &module_info_x8rSast, "function-nary?"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"function-self-recursive?", &module_info_x8rSast, "function-self-recursive?"},
  {"init-environment-for-eval", &module_info_x8rSast, "init-environment-for-eval"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"into", &module_info_gooScolsScol, "into"},
  {"isa", &module_info_gooSboot, "isa"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"compute-program", &Yx8rSg2cYcompute_program},
  {"module-info-name", &Yx8rSg2cYmodule_info_name},
  {"*g2c-app*", &Yx8rSg2cYTg2c_appT},
  {"reference->c", &Yx8rSg2cYreference_Gc},
  {"funshell-to-c", &Yx8rSg2cYfunshell_to_c},
  {"generate-main", &Yx8rSg2cYgenerate_main},
  {"generate-local-temporaries", &Yx8rSg2cYgenerate_local_temporaries},
  {"false-name", &Yx8rSg2cYfalse_name},
  {"generate-quotations", &Yx8rSg2cYgenerate_quotations},
  {"*dynamic-linking?*", &Yx8rSg2cYTdynamic_linkingQT},
  {"$local-marker", &Yx8rSg2cYDlocal_marker},
  {"generate-registers", &Yx8rSg2cYgenerate_registers},
  {"module-init-name", &Yx8rSg2cYmodule_init_name},
  {"compute-ast", &Yx8rSg2cYcompute_ast},
  {"generate-c-module", &Yx8rSg2cYgenerate_c_module},
  {"$number-characters", &Yx8rSg2cYDnumber_characters},
  {"module-loader-appname", &Yx8rSg2cYmodule_loader_appname},
  {"generate-header", &Yx8rSg2cYgenerate_header},
  {"g2c-top", &Yx8rSg2cYg2c_top},
  {"*tmp-file-counter*", &Yx8rSg2cYTtmp_file_counterT},
  {"binding->c", &Yx8rSg2cYbinding_Gc},
  {"g2c-def-app", &Yx8rSg2cYg2c_def_app},
  {"*trace-registers?*", &Yx8rSg2cYTtrace_registersQT},
  {"$hygiene-char", &Yx8rSg2cYDhygiene_char},
  {"generate-c-application", &Yx8rSg2cYgenerate_c_application},
  {"purge-outdated-modules", &Yx8rSg2cYpurge_outdated_modules},
  {"g2c-test", &Yx8rSg2cYg2c_test},
  {"mangle-boot-name", &Yx8rSg2cYmangle_boot_name},
  {"g2c-ast", &Yx8rSg2cYg2c_ast},
  {"generate-global-binding", &Yx8rSg2cYgenerate_global_binding},
  {"module-up-to-date?", &Yx8rSg2cYmodule_up_to_dateQ},
  {"generate-function-binding", &Yx8rSg2cYgenerate_function_binding},
  {"generate-shadow-args", &Yx8rSg2cYgenerate_shadow_args},
  {"gen-result", &Yx8rSg2cYgen_result},
  {"between-parentheses", NULL},
  {"mangle-local-name", &Yx8rSg2cYmangle_local_name},
  {"mangler-reset", &Yx8rSg2cYmangler_reset},
  {"mangle-raw-name", &Yx8rSg2cYmangle_raw_name},
  {"out-list-builder", &Yx8rSg2cYout_list_builder},
  {"gen-fab-list", &Yx8rSg2cYgen_fab_list},
  {"<g2c-module>", &Yx8rSg2cYLg2c_moduleG},
  {"module-src-file-setter", &Yx8rSg2cYmodule_src_file_setter},
  {"$local-suffix", &Yx8rSg2cYDlocal_suffix},
  {"module-loader-app-modname-setter", &Yx8rSg2cYmodule_loader_app_modname_setter},
  {"generate-quotation", &Yx8rSg2cYgenerate_quotation},
  {"module-loader-appname-setter", &Yx8rSg2cYmodule_loader_appname_setter},
  {"*registers-per-line*", &Yx8rSg2cYTregisters_per_lineT},
  {"*definitions*", &Yx8rSg2cYTdefinitionsT},
  {"mangle-name-into", &Yx8rSg2cYmangle_name_into},
  {"gen-ref", &Yx8rSg2cYgen_ref},
  {"generate-function-body-reference", &Yx8rSg2cYgenerate_function_body_reference},
  {"generate-closure-structure", &Yx8rSg2cYgenerate_closure_structure},
  {"with-statement", NULL},
  {"---main-0---", NULL},
  {"generate-module-init", &Yx8rSg2cYgenerate_module_init},
  {"mangle-string-literal", &Yx8rSg2cYmangle_string_literal},
  {"mangle-local-marked-name", &Yx8rSg2cYmangle_local_marked_name},
  {"$method-mangled-marker-string", &Yx8rSg2cYDmethod_mangled_marker_string},
  {"$method-mangled-marker", &Yx8rSg2cYDmethod_mangled_marker},
  {"$max-character-code", &Yx8rSg2cYDmax_character_code},
  {"<g2c-module-loader>", &Yx8rSg2cYLg2c_module_loaderG},
  {"generate-functions", &Yx8rSg2cYgenerate_functions},
  {"module-mtime", &Yx8rSg2cYmodule_mtime},
  {"gen-depth", &Yx8rSg2cYgen_depth},
  {"$module-separator", &Yx8rSg2cYDmodule_separator},
  {"mangle-module-binding", &Yx8rSg2cYmangle_module_binding},
  {"funinit-to-c", &Yx8rSg2cYfuninit_to_c},
  {"$iep-marker", &Yx8rSg2cYDiep_marker},
  {"generate-function-specs", &Yx8rSg2cYgenerate_function_specs},
  {"$number-call-templates", &Yx8rSg2cYDnumber_call_templates},
  {"pp", &Yx8rSg2cYpp},
  {"module-mtime-setter", &Yx8rSg2cYmodule_mtime_setter},
  {"generate-function-forward", &Yx8rSg2cYgenerate_function_forward},
  {"---main-2---", NULL},
  {"g2c-clean", &Yx8rSg2cYg2c_clean},
  {"module-loader-app-modname", &Yx8rSg2cYmodule_loader_app_modname},
  {"mangle-integer", &Yx8rSg2cYmangle_integer},
  {"$mangles-data", &Yx8rSg2cYDmangles_data},
  {"primitive-inlinable?", &Yx8rSg2cYprimitive_inlinableQ},
  {"$c-escapes", &Yx8rSg2cYDc_escapes},
  {"$escape-separator", &Yx8rSg2cYDescape_separator},
  {"so-load", &Yx8rSg2cYso_load},
  {"$escape-marker", &Yx8rSg2cYDescape_marker},
  {"generate-makefile", &Yx8rSg2cYgenerate_makefile},
  {"$name-mangler-table", &Yx8rSg2cYDname_mangler_table},
  {"generate-module-info", &Yx8rSg2cYgenerate_module_info},
  {"---main-1---", NULL},
  {"compile-load", &Yx8rSg2cYcompile_load},
  {"generate-trailer", &Yx8rSg2cYgenerate_trailer},
  {"generate-self-recursive-call", &Yx8rSg2cYgenerate_self_recursive_call},
  {"with-expression", NULL},
  {"module-src-file", &Yx8rSg2cYmodule_src_file},
  {"%load", NULL},
  {"g2c-build-app", &Yx8rSg2cYg2c_build_app},
  {"generate-global-environment", &Yx8rSg2cYgenerate_global_environment},
  {"$iep-suffix", &Yx8rSg2cYDiep_suffix},
  {"generate-quotation-forwards", &Yx8rSg2cYgenerate_quotation_forwards},
  {"generate-function-code", &Yx8rSg2cYgenerate_function_code},
  {"generate-function-bodies", &Yx8rSg2cYgenerate_function_bodies},
  {"float-to-c-string", &Yx8rSg2cYfloat_to_c_string},
  {"g2c-exp", &Yx8rSg2cYg2c_exp},
  {"$min-character-code", &Yx8rSg2cYDmin_character_code},
  {"declare-imported-module-infos", &Yx8rSg2cYdeclare_imported_module_infos},
  {"with-used-expression", NULL},
  {"mangle-global-name", &Yx8rSg2cYmangle_global_name},
  {"module-init-decl", &Yx8rSg2cYmodule_init_decl},
  {"char-buffer-as-string", &Yx8rSg2cYchar_buffer_as_string},
  {"to-c", &Yx8rSg2cYto_c},
  {"generate-return", &Yx8rSg2cYgenerate_return},
  {"for-commas", NULL},
  {"generate-function-forwards", &Yx8rSg2cYgenerate_function_forwards},
  {"dispatcher?", &Yx8rSg2cYdispatcherQ},
  {"%compile", NULL},
  {"$hygiene-marker", &Yx8rSg2cYDhygiene_marker},
  {"between-parentheses-comma-separated", NULL},
  {"*mangle-buffer*", &Yx8rSg2cYTmangle_bufferT},
  {"$module-marker", &Yx8rSg2cYDmodule_marker},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-eval", "g2c-eval"},
  {"g2c-top", "g2c-top"},
  {"g2c-def-app", "g2c-def-app"},
  {"g2c-test", "g2c-test"},
  {"g2c-clean", "g2c-clean"},
  {"g2c-build-app", "g2c-build-app"},
  {"g2c-exp", "g2c-exp"},
  {"g2c-ast", "g2c-ast"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSg2c;
MODULE_INFO module_info_x8rSg2c = {
  "x8r/g2c",
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
extern void load_module_gooSioSwrite (void);
extern void load_module_x8rSast (void);
extern void load_module_x8rStop (void);
extern void load_module_x8rSast_linearize (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_x8rSg2c (void);

void load_module_x8rSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSwrite();
  load_module_x8rSast();
  load_module_x8rStop();
  load_module_x8rSast_linearize();
  load_module_gooScolsSstr();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();

  (P)Yx8rSg2cY___main_0___();
  (P)Yx8rSg2cY___main_1___();
  (P)Yx8rSg2cY___main_2___();

}

/* END OF GENERATED CODE. */
