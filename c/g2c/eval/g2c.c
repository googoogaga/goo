/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
DEF(YevalSg2cYgenerate_shadow_args,"eval/g2c","generate-shadow-args");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSmathYT,"goo/math","*");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YevalSg2cYgenerate_self_recursive_call,"eval/g2c","generate-self-recursive-call");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooStypesYtT,"goo/types","t*");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLmetG,"goo/boot","<met>");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLintG,"goo/boot","<int>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_536);
DEFLIT(lit_474);
DEFLIT(lit_387);
DEFLIT(lit_432);
DEFLIT(lit_532);
DEFLIT(lit_551);
DEFLIT(lit_163);
DEFLIT(lit_537);
DEFLIT(lit_372);
DEFLIT(lit_84);
DEFLIT(lit_136);
DEFLIT(lit_160);
DEFLIT(lit_169);
DEFLIT(lit_435);
DEFLIT(lit_92);
DEFLIT(lit_328);
DEFLIT(lit_335);
DEFLIT(lit_466);
DEFLIT(lit_225);
DEFLIT(lit_341);
DEFLIT(lit_254);
DEFLIT(lit_350);
DEFLIT(lit_516);
DEFLIT(lit_520);
DEFLIT(lit_177);
DEFLIT(lit_464);
DEFLIT(lit_74);
DEFLIT(lit_39);
DEFLIT(lit_326);
DEFLIT(lit_29);
DEFLIT(lit_451);
DEFLIT(lit_125);
DEFLIT(lit_420);
DEFLIT(lit_69);
DEFLIT(lit_325);
DEFLIT(lit_238);
DEFLIT(lit_242);
DEFLIT(lit_337);
DEFLIT(lit_208);
DEFLIT(lit_91);
DEFLIT(lit_417);
DEFLIT(lit_175);
DEFLIT(lit_104);
DEFLIT(lit_524);
DEFLIT(lit_389);
DEFLIT(lit_241);
DEFLIT(lit_38);
DEFLIT(lit_484);
DEFLIT(lit_210);
DEFLIT(lit_509);
DEFLIT(lit_261);
DEFLIT(lit_290);
DEFLIT(lit_506);
DEFLIT(lit_494);
DEFLIT(lit_445);
DEFLIT(lit_450);
DEFLIT(lit_15);
DEFLIT(lit_382);
DEFLIT(lit_221);
DEFLIT(lit_168);
DEFLIT(lit_194);
DEFLIT(lit_150);
DEFLIT(lit_477);
DEFLIT(lit_376);
DEFLIT(lit_300);
DEFLIT(lit_291);
DEFLIT(lit_449);
DEFLIT(lit_181);
DEFLIT(lit_26);
DEFLIT(lit_503);
DEFLIT(lit_409);
DEFLIT(lit_17);
DEFLIT(lit_366);
DEFLIT(lit_174);
DEFLIT(lit_58);
DEFLIT(lit_246);
DEFLIT(lit_62);
DEFLIT(lit_438);
DEFLIT(lit_465);
DEFLIT(lit_385);
DEFLIT(lit_278);
DEFLIT(lit_410);
DEFLIT(lit_396);
DEFLIT(lit_4);
DEFLIT(lit_431);
DEFLIT(lit_212);
DEFLIT(lit_427);
DEFLIT(lit_493);
DEFLIT(lit_178);
DEFLIT(lit_441);
DEFLIT(lit_40);
DEFLIT(lit_118);
DEFLIT(lit_339);
DEFLIT(lit_492);
DEFLIT(lit_501);
DEFLIT(lit_229);
DEFLIT(lit_227);
DEFLIT(lit_552);
DEFLIT(lit_426);
DEFLIT(lit_205);
DEFLIT(lit_468);
DEFLIT(lit_280);
DEFLIT(lit_143);
DEFLIT(lit_1);
DEFLIT(lit_274);
DEFLIT(lit_251);
DEFLIT(lit_448);
DEFLIT(lit_418);
DEFLIT(lit_134);
DEFLIT(lit_0);
DEFLIT(lit_252);
DEFLIT(lit_531);
DEFLIT(lit_201);
DEFLIT(lit_34);
DEFLIT(lit_305);
DEFLIT(lit_258);
DEFLIT(lit_102);
DEFLIT(lit_235);
DEFLIT(lit_539);
DEFLIT(lit_165);
DEFLIT(lit_275);
DEFLIT(lit_128);
DEFLIT(lit_336);
DEFLIT(lit_425);
DEFLIT(lit_486);
DEFLIT(lit_285);
DEFLIT(lit_190);
DEFLIT(lit_53);
DEFLIT(lit_344);
DEFLIT(lit_220);
DEFLIT(lit_514);
DEFLIT(lit_453);
DEFLIT(lit_471);
DEFLIT(lit_370);
DEFLIT(lit_123);
DEFLIT(lit_294);
DEFLIT(lit_219);
DEFLIT(lit_33);
DEFLIT(lit_46);
DEFLIT(lit_515);
DEFLIT(lit_90);
DEFLIT(lit_126);
DEFLIT(lit_236);
DEFLIT(lit_127);
DEFLIT(lit_61);
DEFLIT(lit_499);
DEFLIT(lit_257);
DEFLIT(lit_456);
DEFLIT(lit_301);
DEFLIT(lit_452);
DEFLIT(lit_72);
DEFLIT(lit_498);
DEFLIT(lit_44);
DEFLIT(lit_517);
DEFLIT(lit_367);
DEFLIT(lit_351);
DEFLIT(lit_214);
DEFLIT(lit_421);
DEFLIT(lit_472);
DEFLIT(lit_434);
DEFLIT(lit_42);
DEFLIT(lit_206);
DEFLIT(lit_419);
DEFLIT(lit_504);
DEFLIT(lit_24);
DEFLIT(lit_430);
DEFLIT(lit_263);
DEFLIT(lit_272);
DEFLIT(lit_287);
DEFLIT(lit_35);
DEFLIT(lit_115);
DEFLIT(lit_65);
DEFLIT(lit_482);
DEFLIT(lit_533);
DEFLIT(lit_386);
DEFLIT(lit_535);
DEFLIT(lit_408);
DEFLIT(lit_116);
DEFLIT(lit_117);
DEFLIT(lit_11);
DEFLIT(lit_162);
DEFLIT(lit_89);
DEFLIT(lit_223);
DEFLIT(lit_202);
DEFLIT(lit_158);
DEFLIT(lit_547);
DEFLIT(lit_288);
DEFLIT(lit_462);
DEFLIT(lit_5);
DEFLIT(lit_538);
DEFLIT(lit_414);
DEFLIT(lit_353);
DEFLIT(lit_512);
DEFLIT(lit_415);
DEFLIT(lit_544);
DEFLIT(lit_49);
DEFLIT(lit_179);
DEFLIT(lit_407);
DEFLIT(lit_343);
DEFLIT(lit_523);
DEFLIT(lit_298);
DEFLIT(lit_112);
DEFLIT(lit_182);
DEFLIT(lit_135);
DEFLIT(lit_490);
DEFLIT(lit_60);
DEFLIT(lit_463);
DEFLIT(lit_22);
DEFLIT(lit_231);
DEFLIT(lit_47);
DEFLIT(lit_540);
DEFLIT(lit_526);
DEFLIT(lit_106);
DEFLIT(lit_404);
DEFLIT(lit_388);
DEFLIT(lit_36);
DEFLIT(lit_378);
DEFLIT(lit_312);
DEFLIT(lit_521);
DEFLIT(lit_481);
DEFLIT(lit_239);
DEFLIT(lit_100);
DEFLIT(lit_267);
DEFLIT(lit_265);
DEFLIT(lit_148);
DEFLIT(lit_95);
DEFLIT(lit_23);
DEFLIT(lit_27);
DEFLIT(lit_249);
DEFLIT(lit_458);
DEFLIT(lit_397);
DEFLIT(lit_489);
DEFLIT(lit_133);
DEFLIT(lit_20);
DEFLIT(lit_2);
DEFLIT(lit_87);
DEFLIT(lit_428);
DEFLIT(lit_155);
DEFLIT(lit_203);
DEFLIT(lit_140);
DEFLIT(lit_355);
DEFLIT(lit_483);
DEFLIT(lit_10);
DEFLIT(lit_327);
DEFLIT(lit_98);
DEFLIT(lit_323);
DEFLIT(lit_193);
DEFLIT(lit_240);
DEFLIT(lit_55);
DEFLIT(lit_43);
DEFLIT(lit_286);
DEFLIT(lit_424);
DEFLIT(lit_243);
DEFLIT(lit_138);
DEFLIT(lit_273);
DEFLIT(lit_13);
DEFLIT(lit_306);
DEFLIT(lit_511);
DEFLIT(lit_120);
DEFLIT(lit_361);
DEFLIT(lit_369);
DEFLIT(lit_180);
DEFLIT(lit_172);
DEFLIT(lit_470);
DEFLIT(lit_176);
DEFLIT(lit_59);
DEFLIT(lit_145);
DEFLIT(lit_157);
DEFLIT(lit_349);
DEFLIT(lit_195);
DEFLIT(lit_173);
DEFLIT(lit_248);
DEFLIT(lit_393);
DEFLIT(lit_317);
DEFLIT(lit_459);
DEFLIT(lit_480);
DEFLIT(lit_7);
DEFLIT(lit_281);
DEFLIT(lit_346);
DEFLIT(lit_548);
DEFLIT(lit_362);
DEFLIT(lit_269);
DEFLIT(lit_439);
DEFLIT(lit_250);
DEFLIT(lit_66);
DEFLIT(lit_379);
DEFLIT(lit_277);
DEFLIT(lit_154);
DEFLIT(lit_52);
DEFLIT(lit_433);
DEFLIT(lit_422);
DEFLIT(lit_296);
DEFLIT(lit_75);
DEFLIT(lit_152);
DEFLIT(lit_86);
DEFLIT(lit_488);
DEFLIT(lit_16);
DEFLIT(lit_467);
DEFLIT(lit_395);
DEFLIT(lit_359);
DEFLIT(lit_331);
DEFLIT(lit_461);
DEFLIT(lit_82);
DEFLIT(lit_93);
DEFLIT(lit_354);
DEFLIT(lit_247);
DEFLIT(lit_184);
DEFLIT(lit_340);
DEFLIT(lit_495);
DEFLIT(lit_364);
DEFLIT(lit_500);
DEFLIT(lit_94);
DEFLIT(lit_518);
DEFLIT(lit_391);
DEFLIT(lit_244);
DEFLIT(lit_392);
DEFLIT(lit_67);
DEFLIT(lit_234);
DEFLIT(lit_97);
DEFLIT(lit_153);
DEFLIT(lit_192);
DEFLIT(lit_108);
DEFLIT(lit_542);
DEFLIT(lit_215);
DEFLIT(lit_161);
DEFLIT(lit_380);
DEFLIT(lit_507);
DEFLIT(lit_478);
DEFLIT(lit_347);
DEFLIT(lit_197);
DEFLIT(lit_185);
DEFLIT(lit_282);
DEFLIT(lit_373);
DEFLIT(lit_259);
DEFLIT(lit_21);
DEFLIT(lit_141);
DEFLIT(lit_207);
DEFLIT(lit_497);
DEFLIT(lit_352);
DEFLIT(lit_9);
DEFLIT(lit_496);
DEFLIT(lit_139);
DEFLIT(lit_525);
DEFLIT(lit_546);
DEFLIT(lit_48);
DEFLIT(lit_330);
DEFLIT(lit_71);
DEFLIT(lit_218);
DEFLIT(lit_228);
DEFLIT(lit_513);
DEFLIT(lit_534);
DEFLIT(lit_245);
DEFLIT(lit_522);
DEFLIT(lit_217);
DEFLIT(lit_186);
DEFLIT(lit_502);
DEFLIT(lit_233);
DEFLIT(lit_429);
DEFLIT(lit_81);
DEFLIT(lit_56);
DEFLIT(lit_289);
DEFLIT(lit_156);
DEFLIT(lit_57);
DEFLIT(lit_119);
DEFLIT(lit_443);
DEFLIT(lit_270);
DEFLIT(lit_530);
DEFLIT(lit_199);
DEFLIT(lit_77);
DEFLIT(lit_363);
DEFLIT(lit_510);
DEFLIT(lit_550);
DEFLIT(lit_99);
DEFLIT(lit_455);
DEFLIT(lit_183);
DEFLIT(lit_321);
DEFLIT(lit_384);
DEFLIT(lit_423);
DEFLIT(lit_348);
DEFLIT(lit_406);
DEFLIT(lit_96);
DEFLIT(lit_54);
DEFLIT(lit_224);
DEFLIT(lit_137);
DEFLIT(lit_50);
DEFLIT(lit_32);
DEFLIT(lit_460);
DEFLIT(lit_545);
DEFLIT(lit_189);
DEFLIT(lit_266);
DEFLIT(lit_147);
DEFLIT(lit_216);
DEFLIT(lit_129);
DEFLIT(lit_457);
DEFLIT(lit_405);
DEFLIT(lit_469);
DEFLIT(lit_333);
DEFLIT(lit_166);
DEFLIT(lit_3);
DEFLIT(lit_358);
DEFLIT(lit_318);
DEFLIT(lit_187);
DEFLIT(lit_78);
DEFLIT(lit_412);
DEFLIT(lit_213);
DEFLIT(lit_324);
DEFLIT(lit_345);
DEFLIT(lit_383);
DEFLIT(lit_211);
DEFLIT(lit_271);
DEFLIT(lit_338);
DEFLIT(lit_64);
DEFLIT(lit_334);
DEFLIT(lit_51);
DEFLIT(lit_436);
DEFLIT(lit_196);
DEFLIT(lit_255);
DEFLIT(lit_14);
DEFLIT(lit_505);
DEFLIT(lit_83);
DEFLIT(lit_413);
DEFLIT(lit_63);
DEFLIT(lit_268);
DEFLIT(lit_103);
DEFLIT(lit_114);
DEFLIT(lit_394);
DEFLIT(lit_41);
DEFLIT(lit_45);
DEFLIT(lit_30);
DEFLIT(lit_19);
DEFLIT(lit_12);
DEFLIT(lit_314);
DEFLIT(lit_549);
DEFLIT(lit_262);
DEFLIT(lit_400);
DEFLIT(lit_25);
DEFLIT(lit_437);
DEFLIT(lit_132);
DEFLIT(lit_403);
DEFLIT(lit_491);
DEFLIT(lit_293);
DEFLIT(lit_527);
DEFLIT(lit_142);
DEFLIT(lit_146);
DEFLIT(lit_68);
DEFLIT(lit_230);
DEFLIT(lit_303);
DEFLIT(lit_109);
DEFLIT(lit_198);
DEFLIT(lit_529);
DEFLIT(lit_342);
DEFLIT(lit_519);
DEFLIT(lit_442);
DEFLIT(lit_204);
DEFLIT(lit_264);
DEFLIT(lit_374);
DEFLIT(lit_105);
DEFLIT(lit_237);
DEFLIT(lit_316);
DEFLIT(lit_85);
DEFLIT(lit_256);
DEFLIT(lit_508);
DEFLIT(lit_299);
DEFLIT(lit_164);
DEFLIT(lit_416);
DEFLIT(lit_309);
DEFLIT(lit_283);
DEFLIT(lit_528);
DEFLIT(lit_37);
DEFLIT(lit_357);
DEFLIT(lit_402);
DEFLIT(lit_31);
DEFLIT(lit_124);
DEFLIT(lit_319);
DEFLIT(lit_151);
DEFLIT(lit_322);
DEFLIT(lit_399);
DEFLIT(lit_473);
DEFLIT(lit_88);
DEFLIT(lit_320);
DEFLIT(lit_329);
DEFLIT(lit_308);
DEFLIT(lit_365);
DEFLIT(lit_159);
DEFLIT(lit_454);
DEFLIT(lit_276);
DEFLIT(lit_444);
DEFLIT(lit_307);
DEFLIT(lit_121);
DEFLIT(lit_297);
DEFLIT(lit_541);
DEFLIT(lit_260);
DEFLIT(lit_381);
DEFLIT(lit_302);
DEFLIT(lit_543);
DEFLIT(lit_113);
DEFLIT(lit_232);
DEFLIT(lit_279);
DEFLIT(lit_311);
DEFLIT(lit_122);
DEFLIT(lit_476);
DEFLIT(lit_101);
DEFLIT(lit_475);
DEFLIT(lit_6);
DEFLIT(lit_70);
DEFLIT(lit_167);
DEFLIT(lit_446);
DEFLIT(lit_188);
DEFLIT(lit_440);
DEFLIT(lit_73);
DEFLIT(lit_76);
DEFLIT(lit_131);
DEFLIT(lit_485);
DEFLIT(lit_149);
DEFLIT(lit_479);
DEFLIT(lit_292);
DEFLIT(lit_222);
DEFLIT(lit_401);
DEFLIT(lit_313);
DEFLIT(lit_79);
DEFLIT(lit_310);
DEFLIT(lit_447);
DEFLIT(lit_332);
DEFLIT(lit_253);
DEFLIT(lit_304);
DEFLIT(lit_80);
DEFLIT(lit_371);
DEFLIT(lit_18);
DEFLIT(lit_390);
DEFLIT(lit_191);
DEFLIT(lit_377);
DEFLIT(lit_170);
DEFLIT(lit_110);
DEFLIT(lit_375);
DEFLIT(lit_356);
DEFLIT(lit_315);
DEFLIT(lit_284);
DEFLIT(lit_130);
DEFLIT(lit_398);
DEFLIT(lit_360);
DEFLIT(lit_107);
DEFLIT(lit_209);
DEFLIT(lit_111);
DEFLIT(lit_411);
DEFLIT(lit_171);
DEFLIT(lit_226);
DEFLIT(lit_487);
DEFLIT(lit_295);
DEFLIT(lit_200);
DEFLIT(lit_28);
DEFLIT(lit_368);
DEFLIT(lit_144);
DEFLIT(lit_8);

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
LOCFOR(fun_g2c_eval_30);
LOCFOR(fun_g2c_eval_31);
LOCFOR(fun_g2c_top_32);
LOCFOR(fun_g2c_clean_33);
LOCFOR(fun_compute_ast_34);
LOCFOR(fun_compute_program_35);
LOCFOR(fun_generate_c_module_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_generate_c_application_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_generate_makefile_43);
LOCFOR(fun_pp_44);
LOCFOR(fun_generate_header_45);
LOCFOR(fun_generate_trailer_46);
LOCFOR(fun_47);
LOCFOR(fun_generate_global_environment_48);
LOCFOR(fun_generate_global_binding_49);
LOCFOR(fun_loop_50);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_52);
LOCFOR(fun_mangle_string_literal_53);
LOCFOR(fun_mangle_string_literal_54);
LOCFOR(fun_process_integer_55);
LOCFOR(fun_mangle_integer_56);
LOCFOR(fun_x_1827_57);
LOCFOR(fun_x_1829_58);
LOCFOR(fun_x_1831_59);
LOCFOR(fun_x_1833_60);
FUNFOR(YevalSg2cYmangler_reset);
LOCFOR(fun_x_1835_62);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_64);
LOCFOR(fun_mangle_raw_name_65);
LOCFOR(fun_mangle_local_name_66);
LOCFOR(fun_mangle_local_name_67);
LOCFOR(fun_x_1839_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_loop_71);
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
LOCFOR(fun_x_1843_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_x_1847_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_x_1851_88);
LOCFOR(fun_loop_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_gen_result_92);
LOCFOR(fun_x_1854_93);
LOCFOR(fun_gen_depth_94);
LOCFOR(fun_x_1858_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_x_1862_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_1866_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_1868_104);
LOCFOR(fun_generate_quotation_forwards_105);
LOCFOR(fun_x_1871_106);
LOCFOR(fun_generate_quotations_107);
LOCFOR(fun_false_name_108);
LOCFOR(fun_generate_quotation_109);
LOCFOR(fun_generate_quotation_110);
LOCFOR(fun_111);
LOCFOR(fun_generate_quotation_112);
LOCFOR(fun_generate_quotation_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_loop_115);
LOCFOR(fun_116);
LOCFOR(fun_float_to_c_string_117);
LOCFOR(fun_generate_quotation_118);
LOCFOR(fun_generate_quotation_119);
LOCFOR(fun_x_1881_120);
LOCFOR(fun_generate_quotation_121);
LOCFOR(fun_x_1884_122);
LOCFOR(fun_generate_quotation_123);
LOCFOR(fun_generate_quotation_124);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_126);
LOCFOR(fun_reference_Gc_127);
LOCFOR(fun_to_c_128);
LOCFOR(fun_to_c_129);
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
LOCFOR(fun_to_c_141);
LOCFOR(fun_142);
LOCFOR(fun_to_c_143);
LOCFOR(fun_x_1897_144);
LOCFOR(fun_x_1900_145);
LOCFOR(fun_x_1904_146);
LOCFOR(fun_generate_self_recursive_call_147);
LOCFOR(fun_x_1907_148);
LOCFOR(fun_x_1912_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_x_1916_151);
LOCFOR(fun_152);
LOCFOR(fun_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_x_1920_155);
LOCFOR(fun_to_c_156);
LOCFOR(fun_x_1924_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_to_c_159);
LOCFOR(fun_to_c_160);
LOCFOR(fun_to_c_161);
LOCFOR(fun_x_1929_162);
LOCFOR(fun_x_1935_163);
LOCFOR(fun_164);
LOCFOR(fun_165);
LOCFOR(fun_to_c_166);
LOCFOR(fun_167);
LOCFOR(fun_x_1939_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_funshell_to_c_170);
LOCFOR(fun_171);
LOCFOR(fun_x_1946_172);
LOCFOR(fun_funinit_to_c_173);
LOCFOR(fun_to_c_174);
LOCFOR(fun_x_1951_175);
LOCFOR(fun_out_list_builder_176);
LOCFOR(fun_177);
LOCFOR(fun_gen_fab_list_178);
LOCFOR(fun_generate_function_specs_179);
LOCFOR(fun_180);
LOCFOR(fun_to_c_181);
LOCFOR(fun_to_c_182);
LOCFOR(fun_x_1955_183);
LOCFOR(fun_generate_function_forwards_184);
LOCFOR(fun_x_1960_185);
LOCFOR(fun_186);
LOCFOR(fun_187);
LOCFOR(fun_generate_function_forward_188);
LOCFOR(fun_generate_function_binding_189);
LOCFOR(fun_generate_function_forward_190);
LOCFOR(fun_191);
LOCFOR(fun_generate_function_bodies_192);
LOCFOR(fun_193);
LOCFOR(fun_generate_functions_194);
LOCFOR(fun_generate_closure_structure_195);
LOCFOR(fun_generate_function_body_reference_196);
LOCFOR(fun_x_1969_197);
LOCFOR(fun_198);
LOCFOR(fun_199);
LOCFOR(fun_generate_shadow_args_200);
LOCFOR(fun_generate_return_201);
LOCFOR(fun_generate_return_202);
LOCFOR(fun_primitive_inlinableQ_203);
LOCFOR(fun_x_1977_204);
LOCFOR(fun_205);
LOCFOR(fun_206);
LOCFOR(fun_generate_function_code_207);
LOCFOR(fun_dispatcherQ_208);
LOCFOR(fun_x_1981_209);
LOCFOR(fun_210);
LOCFOR(fun_211);
LOCFOR(fun_212);
LOCFOR(fun_generate_function_code_213);
LOCFOR(fun_x_1984_214);
LOCFOR(fun_generate_local_temporaries_215);
LOCFOR(fun_next_reg_216);
LOCFOR(fun_next_line_217);
LOCFOR(fun_generate_registers_218);
LOCFOR(fun_module_info_name_219);
LOCFOR(fun_maybe_declare_220);
LOCFOR(fun_221);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_1987_223);
LOCFOR(fun_224);
LOCFOR(fun_225);
LOCFOR(fun_x_1993_226);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_228);
LOCFOR(fun_module_init_decl_229);
LOCFOR(fun_x_1999_230);
LOCFOR(fun_x_2004_231);
LOCFOR(fun_generate_module_init_232);
LOCFOR(fun_generate_main_233);
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
  P x_1806F3064;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1806F3064 = VARREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1806F3064);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF3065;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3065 = T1;
  if (tmpF3065 != YPfalse) {
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
  P out_portF3074;
  P prgF3073;
  P astF3072;
  P out_fileF3071;
  P src_fileF3070;
  P fileF3069;
  P envF3068;
  P keepmodQF3067;
  P modF3066;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF3066 = T1;
  keepmodQF3067 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF3066);
  envF3068 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3069 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF3069);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF3070 = T8;
  T12 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  T13 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3069);
  T11 = CALL2(1,VARREF(YgooSsystemYadd_build_path),T12,T13);
  out_fileF3071 = T11;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF3070,modF3066);
  T14 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3070);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T14,modF3066);
  T15 = (P)YPsu(LITREF(lit_16));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  T17 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF3070,envF3068);
  astF3072 = T17;
  T19 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF3072,envF3068);
  prgF3073 = T19;
  T20 = (P)YPsu(LITREF(lit_17));
  (P)YevalSg2cYPprint_cpu_usage(T20);
  T21 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF3071);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T21);
  out_portF3074 = YPfalse;
  out_portF3074 = BOXFAB(out_portF3074);
  T24 = FUNFAB(fun_11,5,out_portF3074,out_fileF3071,prgF3073,astF3072,modF3066);
  T25 = FUNFAB(fun_12,1,out_portF3074);
  T23 = with_cleanup(T24,T25);
  T26 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T26);
  T18 = modF3066;
  T16 = T18;
  T10 = T16;
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

FUNCODEDEF(fun_15) {
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

FUNCODEDEF(fun_16) {
  P name_;
  P x_1807F3075;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  x_1807F3075 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1807F3075,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1807F3075,LITREF(lit_22));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF3076;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF3076 = Ynil;
  changedF3076 = BOXFAB(changedF3076);
  T2 = FUNFAB(fun_15,1,changedF3076);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_16;
  T4 = BOXVAL(changedF3076);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF3076);
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
  P modF3077;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF3077 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_27));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF3077);
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
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_30),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_31));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P T0,T1,T2;
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
  P x_1809F3078;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  VARSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_1809F3078 = VARREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_21,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_22,1,x_1809F3078);
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
  P x_1808F3079;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1808F3079 = VARREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_23,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_24,1,x_1808F3079);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_26) {
  P tmpF3080;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3080 = T1;
  if (tmpF3080 != YPfalse) {
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
  P out_portF3086;
  P prgF3085;
  P out_fileF3084;
  P fileF3083;
  P nameF3082;
  P modF3081;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF3081 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = VARSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_35),T4,T5);
  nameF3082 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF3082);
  fileF3083 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3083);
  out_fileF3084 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF3085 = T12;
  out_portF3086 = YPfalse;
  out_portF3086 = BOXFAB(out_portF3086);
  T15 = FUNFAB(fun_25,5,out_portF3086,out_fileF3084,prgF3085,ast_,modF3081);
  T16 = FUNFAB(fun_26,1,out_portF3086);
  T14 = with_cleanup(T15,T16);
  T11 = fileF3083;
  T9 = T11;
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_exp_28) {
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

FUNCODEDEF(fun_compile_load_29) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
  T0 = (P)YPsu(T1);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_39));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_40));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_g2c_eval_30) {
  P exp_,env_;
  P nameF3087;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF3087 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3087);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P ast_,env_;
  P nameF3088;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF3088 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3088);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_top_32) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_clean_33) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_45),LITREF(lit_31));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_34) {
  P filename_,ct_env_;
  P astF3090;
  P sexprF3089;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF3089 = T1;
  T2 = (P)YPsu(LITREF(lit_49));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF3089,ct_env_,YPfalse);
  astF3090 = T4;
  T5 = (P)YPsu(LITREF(lit_50));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T3 = astF3090;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_35) {
  P e_,env_;
  P fltF3095;
  P prgF3094;
  P lftF3093;
  P anaF3092;
  P boxF3091;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),e_);
  boxF3091 = T1;
  T2 = (P)YPsu(LITREF(lit_53));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_ast),boxF3091);
  anaF3092 = T4;
  T5 = (P)YPsu(LITREF(lit_54));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),anaF3092);
  lftF3093 = T7;
  T8 = (P)YPsu(LITREF(lit_55));
  (P)YevalSg2cYPprint_cpu_usage(T8);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF3093);
  prgF3094 = T10;
  T11 = (P)YPsu(LITREF(lit_56));
  (P)YevalSg2cYPprint_cpu_usage(T11);
  T13 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF3094,env_,YPint((P)64));
  fltF3095 = T13;
  T14 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T14);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF3095);
  T15 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF3095,YPfalse);
  T16 = (P)YPsu(LITREF(lit_59));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T12 = prgF3094;
  T9 = T12;
  T6 = T9;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_module_36) {
  P code_out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5;
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

FUNCODEDEF(fun_37) {
  P T0,T1,T2,T3,T4;
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

FUNCODEDEF(fun_38) {
  P tmpF3096;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3096 = T1;
  if (tmpF3096 != YPfalse) {
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

FUNCODEDEF(fun_generate_c_application_39) {
  P loader_,mod_;
  P out_portF3100;
  P out_nameF3099;
  P init_nameF3098;
  P appnameF3097;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3097 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3097,LITREF(lit_64));
  init_nameF3098 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF3098);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3097,T6);
  out_nameF3099 = T5;
  out_portF3100 = YPfalse;
  out_portF3100 = BOXFAB(out_portF3100);
  T9 = FUNFAB(fun_37,3,out_portF3100,out_nameF3099,mod_);
  T10 = FUNFAB(fun_38,1,out_portF3100);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P mod_;
  P x_1815F3101;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1815F3101 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1815F3101,LITREF(lit_76));
  T4 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),T4);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1815F3101,T2);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1815F3101,LITREF(lit_77));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P x_1819F3110;
  P x_1818F3109;
  P x_1817F3108;
  P x_1816F3107;
  P x_1814F3106;
  P x_1813F3105;
  P x_1812F3104;
  P x_1811F3103;
  P x_1810F3102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_1810F3102 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1810F3102,LITREF(lit_68));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1810F3102,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1810F3102,LITREF(lit_69));
  T3 = BOXVAL(FREEREF(0));
  x_1811F3103 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_1811F3103,LITREF(lit_70));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1811F3103,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1811F3103,LITREF(lit_71));
  T5 = BOXVAL(FREEREF(0));
  x_1812F3104 = T5;
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1812F3104,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1812F3104,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1812F3104,LITREF(lit_72));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1812F3104,FREEREF(2));
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1812F3104,LITREF(lit_73));
  T7 = BOXVAL(FREEREF(0));
  x_1813F3105 = T7;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1813F3105,LITREF(lit_74));
  T9 = BOXVAL(FREEREF(0));
  x_1814F3106 = T9;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1814F3106,LITREF(lit_75));
  T11 = FUNFAB(fun_40,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T11,FREEREF(3));
  T12 = BOXVAL(FREEREF(0));
  x_1816F3107 = T12;
  CALL2(1,VARREF(YgooSioSportYputs),x_1816F3107,LITREF(lit_78));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1816F3107,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1816F3107,LITREF(lit_79));
  T15 = BOXVAL(FREEREF(0));
  x_1817F3108 = T15;
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1817F3108,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1817F3108,LITREF(lit_80));
  T17 = BOXVAL(FREEREF(0));
  x_1818F3109 = T17;
  CALL2(1,VARREF(YgooSioSportYputs),x_1818F3109,LITREF(lit_81));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1818F3109,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_1818F3109,LITREF(lit_82));
  T20 = BOXVAL(FREEREF(0));
  x_1819F3110 = T20;
  CALL2(1,VARREF(YgooSioSportYputs),x_1819F3110,LITREF(lit_83));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1819F3110,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1819F3110,LITREF(lit_84));
  T19 = T21;
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_42) {
  P tmpF3111;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3111 = T1;
  if (tmpF3111 != YPfalse) {
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

FUNCODEDEF(fun_generate_makefile_43) {
  P loader_;
  P code_outF3117;
  P out_nameF3116;
  P sepF3115;
  P exe_nameF3114;
  P init_nameF3113;
  P appnameF3112;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3112 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3112,LITREF(lit_66));
  init_nameF3113 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF3112);
  exe_nameF3114 = T5;
  sepF3115 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3112,LITREF(lit_67));
  out_nameF3116 = T8;
  code_outF3117 = YPfalse;
  code_outF3117 = BOXFAB(code_outF3117);
  T12 = FUNFAB(fun_41,6,code_outF3117,out_nameF3116,sepF3115,loader_,init_nameF3113,exe_nameF3114);
  T13 = FUNFAB(fun_42,1,code_outF3117);
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

FUNCODEDEF(fun_pp_44) {
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

FUNCODEDEF(fun_generate_header_45) {
  P code_out_,e_;
  P x_1822F3120;
  P x_1821F3119;
  P x_1820F3118;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1820F3118 = code_out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1820F3118,LITREF(lit_87));
  x_1821F3119 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1821F3119,LITREF(lit_88));
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_1822F3120 = code_out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1822F3120,LITREF(lit_89));
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_trailer_46) {
  P code_out_;
  P x_1823F3121;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  x_1823F3121 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1823F3121,LITREF(lit_91));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
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

FUNCODEDEF(fun_generate_global_environment_48) {
  P code_out_,mod_;
  P x_1824F3122;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  x_1824F3122 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1824F3122,LITREF(lit_93));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1824F3122,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1824F3122,LITREF(lit_94));
  T3 = FUNFAB(fun_47,2,code_out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_49) {
  P code_out_,importedQ_,gb_;
  P x_1825F3126;
  P nameF3125;
  P tmpF3124;
  P kindF3123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF3123 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3123,LITREF(lit_99));
  tmpF3124 = T4;
  if (tmpF3124 != YPfalse) {
    T5 = tmpF3124;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3123,LITREF(lit_100));
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF3125 = T8;
    x_1825F3126 = code_out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_101);
    } else {
      T10 = LITREF(lit_102);
    }
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1825F3126,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_1825F3126,LITREF(lit_103));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1825F3126,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1825F3126,LITREF(lit_104));
    T13 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1825F3126,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_1825F3126,LITREF(lit_105));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3125);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1825F3126,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1825F3126,LITREF(lit_106));
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

FUNCODEDEF(fun_loop_50) {
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
  P loopF3129;
  P stringF3128;
  P buffer_sizeF3127;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF3127 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF3127);
  check_type(T3,VARREF(YLstrG));
  stringF3128 = T3;
  T4 = FUNSHELL(1,fun_loop_50,4);
  loopF3129 = T4;
  FUNINIT(loopF3129, 4,buffer_sizeF3127,buffer_,stringF3128,loopF3129);
  T5 = CALL1(0,loopF3129,YPint((P)0));
  T2 = stringF3128;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_52) {
  P i_;
  P encF3131;
  P cF3130;
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
    cF3130 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3130);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T7);
    encF3131 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF3131,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF3130);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF3131);
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

FUNCODEDEF(fun_mangle_string_literal_53) {
  P str_;
  P loopF3133;
  P lenF3132;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF3132 = T1;
  T3 = FUNSHELL(1,fun_loop_52,3);
  loopF3133 = T3;
  FUNINIT(loopF3133, 3,lenF3132,str_,loopF3133);
  T4 = CALL1(0,loopF3133,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_54) {
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

FUNCODEDEF(fun_process_integer_55) {
  P number_,index_;
  P resultF3139;
  P resultF3138;
  P digitF3137;
  P remainderF3136;
  P quotientF3135;
  P tup37F3134;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup37F3134 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F3134,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF3135 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F3134,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF3136 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF3136);
  check_type(T7,VARREF(YLchrG));
  digitF3137 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF3135,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF3138 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3137,resultF3138,YPint((P)0));
    T10 = resultF3138;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF3135,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF3139 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF3139);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3137,resultF3139,T15);
    T12 = resultF3139;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_56) {
  P number_;
  P process_integerF3140;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T2 = FUNSHELL(1,fun_process_integer_55,1);
  process_integerF3140 = T2;
  FUNINIT(process_integerF3140, 1,process_integerF3140);
  T3 = CALL2(1,process_integerF3140,number_,YPint((P)1));
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1827_57) {
  P x_1826_;
  P iF3141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1826_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1826_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1826_);
    iF3141 = T4;
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_integer),iF3141);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T6,VARREF(YevalSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3141);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1826_);
    a1 = T8;
    x_1826_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1829_58) {
  P x_1828_;
  P mangleF3142;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1828_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1828_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1828_);
    mangleF3142 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF3142,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF3142,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1828_);
    a1 = T9;
    x_1828_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1831_59) {
  P x_1830_;
  P iF3143;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1830_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1830_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1830_);
    iF3143 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3143);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3143);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1830_);
    a1 = T7;
    x_1830_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1833_60) {
  P x_1832_;
  P iF3144;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1832_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1832_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1832_);
    iF3144 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3144);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3144);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1832_);
    a1 = T7;
    x_1832_ = a1;
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

FUNCODEDEF(fun_x_1835_62) {
  P x_1834_;
  P cF3145;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1834_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1834_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1834_);
    cF3145 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF3145);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1834_);
    a1 = T9;
    x_1834_ = a1;
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
  P x_1835F3146;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1835_62,2);
  x_1835F3146 = T0;
  FUNINIT(x_1835F3146, 2,buf_,x_1835F3146);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T1 = CALL1(0,x_1835F3146,T2);
UNLINK_STACK();
  QRET(buf_);
}

FUNCODEDEF(fun_mangle_raw_name_64) {
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

FUNCODEDEF(fun_mangle_raw_name_65) {
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

FUNCODEDEF(fun_mangle_local_name_66) {
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

FUNCODEDEF(fun_mangle_local_name_67) {
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

FUNCODEDEF(fun_x_1839_68) {
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

FUNCODEDEF(fun_69) {
  P return_;
  P x_1838F3153;
  P x_1838F3152;
  P x_1838F3151;
  P valueF3150;
  P placeF3149;
  P x_1838F3148;
  P x_1839F3147;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1839_68,1);
  x_1839F3147 = T1;
  FUNINIT(x_1839F3147, 1,return_);
  x_1838F3148 = FREEREF(0);
  placeF3149 = YPfalse;
  placeF3149 = BOXFAB(placeF3149);
  valueF3150 = YPfalse;
  valueF3150 = BOXFAB(valueF3150);
  T7 = CALL2(1,VARREF(YisaQ),x_1838F3148,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1838F3148,LITREF(lit_168),x_1839F3147);
    x_1838F3151 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1838F3151,x_1839F3147);
    BOXVAL(placeF3149) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1838F3151);
    x_1838F3152 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1838F3152,x_1839F3147);
    BOXVAL(valueF3150) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1838F3152);
    x_1838F3153 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1838F3153,x_1839F3147);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1839F3147,LITREF(lit_169),x_1838F3148);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_170));
  T21 = BOXVAL(placeF3149);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
  T26 = BOXVAL(placeF3149);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = BOXVAL(valueF3150);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_69,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_71) {
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
  P loopF3155;
  P lenF3154;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF3154 = T1;
  T3 = FUNSHELL(1,fun_loop_71,4);
  loopF3155 = T3;
  FUNINIT(loopF3155, 4,lenF3154,buf_,name_,loopF3155);
  T4 = CALL1(0,loopF3155,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_73) {
  P buf_,mod_;
  P nameF3157;
  P tmpF3156;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),mod_);
  tmpF3156 = T2;
  if (tmpF3156 != YPfalse) {
    T3 = tmpF3156;
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
  nameF3157 = T1;
  T10 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF3157);
  T0 = T10;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_74) {
  P mod_,name_;
  P tmpF3158;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF3158 = T2;
  if (tmpF3158 != YPfalse) {
    T3 = tmpF3158;
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

FUNCODEDEF(fun_mangle_global_name_75) {
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
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_177));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_78) {
  P binding_;
  P tmpF3159;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3159 = T1;
  if (tmpF3159 != YPfalse) {
    T2 = tmpF3159;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_179));
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

FUNCODEDEF(fun_mangle_binding_80) {
  P binding_;
  P tmpF3160;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3160 = T1;
  if (tmpF3160 != YPfalse) {
    T2 = tmpF3160;
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

FUNCODEDEF(fun_mangle_binding_81) {
  P binding_;
  P tmpF3161;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3161 = T1;
  if (tmpF3161 != YPfalse) {
    T2 = tmpF3161;
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

FUNCODEDEF(fun_x_1843_82) {
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

FUNCODEDEF(fun_83) {
  P return_;
  P out_varF3173;
  P x_1842F3172;
  P x_1842F3171;
  P x_1842F3170;
  P x_1842F3169;
  P x_1842F3168;
  P x_1842F3167;
  P bodyF3166;
  P clausesF3165;
  P out_valF3164;
  P x_1842F3163;
  P x_1843F3162;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1843_82,1);
  x_1843F3162 = T1;
  FUNINIT(x_1843F3162, 1,return_);
  x_1842F3163 = FREEREF(0);
  out_valF3164 = YPfalse;
  out_valF3164 = BOXFAB(out_valF3164);
  clausesF3165 = YPfalse;
  clausesF3165 = BOXFAB(clausesF3165);
  bodyF3166 = YPfalse;
  bodyF3166 = BOXFAB(bodyF3166);
  T9 = CALL2(1,VARREF(YisaQ),x_1842F3163,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1842F3163,LITREF(lit_183),x_1843F3162);
    x_1842F3167 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1842F3167,x_1843F3162);
    BOXVAL(out_valF3164) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1842F3167);
    x_1842F3168 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1842F3168,x_1843F3162);
    x_1842F3169 = T16;
    BOXVAL(clausesF3165) = x_1842F3169;
    x_1842F3170 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1842F3170,x_1843F3162);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1842F3168);
    x_1842F3171 = T19;
    BOXVAL(bodyF3166) = x_1842F3171;
    x_1842F3172 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1842F3172,x_1843F3162);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1843F3162,LITREF(lit_169),x_1842F3163);
  }
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3173 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T31 = CALL1(1,VARREF(Ylst),out_varF3173);
  T33 = BOXVAL(out_valF3164);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_185));
  T39 = BOXVAL(clausesF3165);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_186));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T49 = CALL1(1,VARREF(Ylst),YPtrue);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T53 = CALL1(1,VARREF(Ylst),YPfalse);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T50,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_189));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_186));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T61 = CALL1(1,VARREF(Ylst),out_varF3173);
  T62 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = BOXVAL(bodyF3166);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T54,T63,Ynil);
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

FUNCODEDEF(fun_84) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_83,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1847_85) {
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

FUNCODEDEF(fun_86) {
  P return_;
  P out_varF3183;
  P x_1846F3182;
  P x_1846F3181;
  P x_1846F3180;
  P x_1846F3179;
  P x_1846F3178;
  P bodyF3177;
  P out_valF3176;
  P x_1846F3175;
  P x_1847F3174;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1847_85,1);
  x_1847F3174 = T1;
  FUNINIT(x_1847F3174, 1,return_);
  x_1846F3175 = FREEREF(0);
  out_valF3176 = YPfalse;
  out_valF3176 = BOXFAB(out_valF3176);
  bodyF3177 = YPfalse;
  bodyF3177 = BOXFAB(bodyF3177);
  T7 = CALL2(1,VARREF(YisaQ),x_1846F3175,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1846F3175,LITREF(lit_192),x_1847F3174);
    x_1846F3178 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1846F3178,x_1847F3174);
    x_1846F3179 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1846F3179,x_1847F3174);
    BOXVAL(out_valF3176) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1846F3179);
    x_1846F3180 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1846F3180,x_1847F3174);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1846F3178);
    x_1846F3181 = T16;
    BOXVAL(bodyF3177) = x_1846F3181;
    x_1846F3182 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1846F3182,x_1847F3174);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1847F3174,LITREF(lit_169),x_1846F3175);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3183 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T28 = CALL1(1,VARREF(Ylst),out_varF3183);
  T30 = BOXVAL(out_valF3176);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T34 = CALL1(1,VARREF(Ylst),out_varF3183);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T36 = BOXVAL(bodyF3177);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T40 = CALL1(1,VARREF(Ylst),out_varF3183);
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

FUNCODEDEF(fun_87) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_86,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1851_88) {
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

FUNCODEDEF(fun_loop_89) {
  P forms_,body_,firstQ_;
  P tmpF3184;
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
    tmpF3184 = firstQ_;
    if (tmpF3184 != YPfalse) {
      T8 = tmpF3184;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
      T11 = CALL1(1,VARREF(Ylst),FREEREF(0));
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

FUNCODEDEF(fun_90) {
  P return_;
  P loopF3195;
  P out_varF3194;
  P x_1850F3193;
  P x_1850F3192;
  P x_1850F3191;
  P x_1850F3190;
  P x_1850F3189;
  P bodyF3188;
  P out_valF3187;
  P x_1850F3186;
  P x_1851F3185;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1851_88,1);
  x_1851F3185 = T1;
  FUNINIT(x_1851F3185, 1,return_);
  x_1850F3186 = FREEREF(0);
  out_valF3187 = YPfalse;
  out_valF3187 = BOXFAB(out_valF3187);
  bodyF3188 = YPfalse;
  bodyF3188 = BOXFAB(bodyF3188);
  T7 = CALL2(1,VARREF(YisaQ),x_1850F3186,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1850F3186,LITREF(lit_194),x_1851F3185);
    x_1850F3189 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1850F3189,x_1851F3185);
    x_1850F3190 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1850F3190,x_1851F3185);
    BOXVAL(out_valF3187) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1850F3190);
    x_1850F3191 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1850F3191,x_1851F3185);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1850F3189);
    x_1850F3192 = T16;
    BOXVAL(bodyF3188) = x_1850F3192;
    x_1850F3193 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1850F3193,x_1851F3185);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1851F3185,LITREF(lit_169),x_1850F3186);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3194 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T28 = CALL1(1,VARREF(Ylst),out_varF3194);
  T30 = BOXVAL(out_valF3187);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T34 = CALL1(1,VARREF(Ylst),out_varF3194);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T37 = FUNSHELL(1,fun_loop_89,2);
  loopF3195 = T37;
  FUNINIT(loopF3195, 2,out_varF3194,loopF3195);
  T39 = BOXVAL(bodyF3188);
  T38 = CALL3(0,loopF3195,Ynil,T39,YPtrue);
  T36 = T38;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T43 = CALL1(1,VARREF(Ylst),out_varF3194);
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

FUNCODEDEF(fun_91) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_90,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_result_92) {
  P e_,d_,code_out_;
  P tmpF3199;
  P x_1852F3198;
  P tmpF3197;
  P regF3196;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3196 = T1;
  tmpF3197 = regF3196;
  if (tmpF3197 != YPfalse) {
    x_1852F3198 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1852F3198,LITREF(lit_199));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3196);
    CALL2(1,VARREF(YgooSioSportYputs),x_1852F3198,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1852F3198,LITREF(lit_200));
    T5 = T7;
    tmpF3199 = T5;
    if (tmpF3199 != YPfalse) {
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

FUNCODEDEF(fun_x_1854_93) {
  P x_1853_;
  P iF3200;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1853_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1853_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1853_);
    iF3200 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_204));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1853_);
    a1 = T6;
    x_1853_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_depth_94) {
  P d_,code_out_;
  P x_1854F3201;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1854_93,2);
  x_1854F3201 = T1;
  FUNINIT(x_1854F3201, 2,code_out_,x_1854F3201);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1854F3201,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1858_95) {
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

FUNCODEDEF(fun_96) {
  P return_;
  P x_1857F3212;
  P x_1857F3211;
  P x_1857F3210;
  P x_1857F3209;
  P x_1857F3208;
  P x_1857F3207;
  P bodyF3206;
  P code_outF3205;
  P dF3204;
  P x_1857F3203;
  P x_1858F3202;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1858_95,1);
  x_1858F3202 = T1;
  FUNINIT(x_1858F3202, 1,return_);
  x_1857F3203 = FREEREF(0);
  dF3204 = YPfalse;
  dF3204 = BOXFAB(dF3204);
  code_outF3205 = YPfalse;
  code_outF3205 = BOXFAB(code_outF3205);
  bodyF3206 = YPfalse;
  bodyF3206 = BOXFAB(bodyF3206);
  T9 = CALL2(1,VARREF(YisaQ),x_1857F3203,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1857F3203,LITREF(lit_206),x_1858F3202);
    x_1857F3207 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1857F3207,x_1858F3202);
    x_1857F3208 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1857F3208,x_1858F3202);
    BOXVAL(dF3204) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1857F3208);
    x_1857F3209 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1857F3209,x_1858F3202);
    BOXVAL(code_outF3205) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1857F3209);
    x_1857F3210 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1857F3210,x_1858F3202);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1857F3207);
    x_1857F3211 = T21;
    BOXVAL(bodyF3206) = x_1857F3211;
    x_1857F3212 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1857F3212,x_1858F3202);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1858F3202,LITREF(lit_169),x_1857F3203);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_207));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T31 = BOXVAL(dF3204);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T33 = BOXVAL(code_outF3205);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = BOXVAL(bodyF3206);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
  T39 = BOXVAL(code_outF3205);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_209));
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T34,T35,Ynil);
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_96,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1862_98) {
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

FUNCODEDEF(fun_99) {
  P return_;
  P x_1861F3225;
  P x_1861F3224;
  P x_1861F3223;
  P x_1861F3222;
  P x_1861F3221;
  P x_1861F3220;
  P x_1861F3219;
  P bodyF3218;
  P code_outF3217;
  P dF3216;
  P eF3215;
  P x_1861F3214;
  P x_1862F3213;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1862_98,1);
  x_1862F3213 = T1;
  FUNINIT(x_1862F3213, 1,return_);
  x_1861F3214 = FREEREF(0);
  eF3215 = YPfalse;
  eF3215 = BOXFAB(eF3215);
  dF3216 = YPfalse;
  dF3216 = BOXFAB(dF3216);
  code_outF3217 = YPfalse;
  code_outF3217 = BOXFAB(code_outF3217);
  bodyF3218 = YPfalse;
  bodyF3218 = BOXFAB(bodyF3218);
  T11 = CALL2(1,VARREF(YisaQ),x_1861F3214,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1861F3214,LITREF(lit_211),x_1862F3213);
    x_1861F3219 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1861F3219,x_1862F3213);
    x_1861F3220 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1861F3220,x_1862F3213);
    BOXVAL(eF3215) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1861F3220);
    x_1861F3221 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1861F3221,x_1862F3213);
    BOXVAL(dF3216) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1861F3221);
    x_1861F3222 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1861F3222,x_1862F3213);
    BOXVAL(code_outF3217) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1861F3222);
    x_1861F3223 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1861F3223,x_1862F3213);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1861F3219);
    x_1861F3224 = T26;
    BOXVAL(bodyF3218) = x_1861F3224;
    x_1861F3225 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1861F3225,x_1862F3213);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1862F3213,LITREF(lit_169),x_1861F3214);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_206));
  T35 = BOXVAL(dF3216);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(code_outF3217);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T42 = BOXVAL(eF3215);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(dF3216);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(code_outF3217);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T39 = CALL5(1,VARREF(YgooSmacrosYcat),T40,T41,T43,T45,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = BOXVAL(bodyF3218);
  T30 = CALL5(1,VARREF(YgooSmacrosYcat),T31,T32,T38,T47,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_100) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_99,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1866_101) {
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

FUNCODEDEF(fun_102) {
  P return_;
  P x_1865F3238;
  P x_1865F3237;
  P x_1865F3236;
  P x_1865F3235;
  P x_1865F3234;
  P x_1865F3233;
  P x_1865F3232;
  P bodyF3231;
  P code_outF3230;
  P dF3229;
  P eF3228;
  P x_1865F3227;
  P x_1866F3226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1866_101,1);
  x_1866F3226 = T1;
  FUNINIT(x_1866F3226, 1,return_);
  x_1865F3227 = FREEREF(0);
  eF3228 = YPfalse;
  eF3228 = BOXFAB(eF3228);
  dF3229 = YPfalse;
  dF3229 = BOXFAB(dF3229);
  code_outF3230 = YPfalse;
  code_outF3230 = BOXFAB(code_outF3230);
  bodyF3231 = YPfalse;
  bodyF3231 = BOXFAB(bodyF3231);
  T11 = CALL2(1,VARREF(YisaQ),x_1865F3227,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1865F3227,LITREF(lit_213),x_1866F3226);
    x_1865F3232 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1865F3232,x_1866F3226);
    x_1865F3233 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1865F3233,x_1866F3226);
    BOXVAL(eF3228) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1865F3233);
    x_1865F3234 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1865F3234,x_1866F3226);
    BOXVAL(dF3229) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1865F3234);
    x_1865F3235 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1865F3235,x_1866F3226);
    BOXVAL(code_outF3230) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1865F3235);
    x_1865F3236 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1865F3236,x_1866F3226);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1865F3232);
    x_1865F3237 = T26;
    BOXVAL(bodyF3231) = x_1865F3237;
    x_1865F3238 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1865F3238,x_1866F3226);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1866F3226,LITREF(lit_169),x_1865F3227);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_215));
  T36 = BOXVAL(eF3228);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T43 = BOXVAL(eF3228);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(dF3229);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(code_outF3230);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T44,T46,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = BOXVAL(bodyF3231);
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

FUNCODEDEF(fun_103) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_102,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1868_104) {
  P x_1867_;
  P x_1869F3240;
  P qbF3239;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1867_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1867_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1867_);
    qbF3239 = T4;
    x_1869F3240 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1869F3240,LITREF(lit_221));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3239);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1869F3240,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1869F3240,LITREF(lit_222));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1867_);
    a1 = T8;
    x_1867_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_105) {
  P code_out_,qbT_;
  P x_1868F3241;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_218));
  T1 = FUNSHELL(1,fun_x_1868_104,2);
  x_1868F3241 = T1;
  FUNINIT(x_1868F3241, 2,code_out_,x_1868F3241);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_1868F3241,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1871_106) {
  P x_1870_;
  P x_1872F3243;
  P qbF3242;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1870_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1870_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1870_);
    qbF3242 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    x_1872F3243 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1872F3243,LITREF(lit_226));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3242);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1872F3243,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1872F3243,LITREF(lit_227));
    T7 = CALL1(1,VARREF(YevalSastYbinding_info),qbF3242);
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),T7);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_209));
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1870_);
    a1 = T9;
    x_1870_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_107) {
  P code_out_,qbT_;
  P x_1871F3244;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1871_106,2);
  x_1871F3244 = T1;
  FUNINIT(x_1871F3244, 2,code_out_,x_1871F3244);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1871F3244,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_108) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_229));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_109) {
  P code_out_,qb_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_232);
  } else {
    T2 = LITREF(lit_233);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_110) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_234));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
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

FUNCODEDEF(fun_generate_quotation_112) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = FUNFAB(fun_111,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_113) {
  P code_out_,x_;
  P x_1873F3245;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1873F3245 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_235));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1873F3245,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1873F3245,LITREF(lit_236));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1873F3245,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1873F3245,LITREF(lit_237));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P code_out_,x_;
  P x_1874F3246;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1874F3246 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_238));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1874F3246,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1874F3246,LITREF(lit_239));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_1874F3246,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1874F3246,LITREF(lit_240));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_115) {
  P i_;
  P x_1876F3248;
  P x_1875F3247;
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
    x_1875F3247 = T4;
    x_1876F3248 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1876F3248,x_1875F3247,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1876F3248,x_1875F3247,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1876F3248,x_1875F3247,YPchr((P)120));
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

FUNCODEDEF(fun_116) {
  P done_;
  P loopF3249;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_115,3);
  loopF3249 = T1;
  FUNINIT(loopF3249, 3,FREEREF(0),done_,loopF3249);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF3249,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_117) {
  P o_;
  P sF3250;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF3250 = T1;
  T3 = FUNFAB(fun_116,1,sF3250);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_118) {
  P code_out_,x_;
  P x_1877F3251;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1877F3251 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_244));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1877F3251,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1877F3251,LITREF(lit_245));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1877F3251,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1877F3251,LITREF(lit_246));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_119) {
  P code_out_,x_;
  P x_1878F3252;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1878F3252 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_247));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1878F3252,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1878F3252,LITREF(lit_248));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1878F3252,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1878F3252,LITREF(lit_249));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1881_120) {
  P x_1880_;
  P eF3253;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1880_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1880_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1880_);
    eF3253 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_255));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF3253);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1880_);
    a1 = T6;
    x_1880_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_121) {
  P code_out_,x_;
  P x_1881F3255;
  P x_1879F3254;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1879F3254 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1879F3254,LITREF(lit_250));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_251));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1879F3254,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1879F3254,LITREF(lit_252));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1879F3254,T2);
  T3 = FUNSHELL(1,fun_x_1881_120,2);
  x_1881F3255 = T3;
  FUNINIT(x_1881F3255, 2,code_out_,x_1881F3255);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1881F3255,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_256));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_1884_122) {
  P x_1883_;
  P eF3256;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1883_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1883_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1883_);
    eF3256 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_262));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF3256);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1883_);
    a1 = T6;
    x_1883_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_123) {
  P code_out_,x_;
  P x_1884F3258;
  P x_1882F3257;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1882F3257 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1882F3257,LITREF(lit_257));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_258));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1882F3257,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1882F3257,LITREF(lit_259));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1882F3257,T2);
  T3 = FUNSHELL(1,fun_x_1884_122,2);
  x_1884F3258 = T3;
  FUNINIT(x_1884F3258, 2,code_out_,x_1884F3258);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1884F3258,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_263));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_quotation_124) {
  P code_out_,x_;
  P x_1885F3259;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1885F3259 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_264));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1885F3259,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1885F3259,LITREF(lit_265));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1885F3259,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1885F3259,LITREF(lit_266));
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

FUNCODEDEF(fun_reference_Gc_126) {
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

FUNCODEDEF(fun_reference_Gc_127) {
  P v_,code_out_;
  P x_1886F3260;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_179));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_270);
  } else {
    T0 = LITREF(lit_271);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_1886F3260 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1886F3260,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1886F3260,YPchr((P)41));
  T3 = T4;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_128) {
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
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_129) {
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

FUNCODEDEF(fun_gen_ref_130) {
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

FUNCODEDEF(fun_gen_ref_131) {
  P e_,code_out_;
  P x_1888F3262;
  P x_1887F3261;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_275));
  x_1887F3261 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1887F3261,YPchr((P)40));
  x_1888F3262 = code_out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1888F3262,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1887F3261,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_132) {
  P e_,code_out_;
  P x_1889F3264;
  P regF3263;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3263 = T1;
  if (regF3263 != YPfalse) {
    x_1889F3264 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1889F3264,LITREF(lit_276));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3263);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1889F3264,T5);
    T3 = T4;
    T2 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_277));
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_133) {
  P e_,code_out_;
  P x_1890F3265;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  x_1890F3265 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1890F3265,LITREF(lit_278));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1890F3265,T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_134) {
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

FUNCODEDEF(fun_gen_ref_135) {
  P e_,code_out_;
  P T0,T1;
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

FUNCODEDEF(fun_to_c_136) {
  P e_,f_,d_,code_out_;
  P T0,T1,T2,T3;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_279));
  T1 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T1,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_280));
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_281));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_137) {
  P e_,f_,d_,code_out_;
  P x_1891F3266;
  P T0,T1,T2,T3,T4,T5;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_282));
    x_1891F3266 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1891F3266,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T2 = CALL1(1,VARREF(YevalSastYreference_binding),T3);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T2,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1891F3266,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_138) {
  P e_,f_,d_,code_out_;
  P x_1892F3267;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_283));
    x_1892F3267 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1892F3267,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1892F3267,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_139) {
  P e_,f_,d_,code_out_;
  P x_1893F3268;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_284));
  x_1893F3268 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1893F3268,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1893F3268,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_285));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,code_out_;
  P x_1894F3270;
  P bindingF3269;
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
  bindingF3269 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3269,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_286));
  x_1894F3270 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1894F3270,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3269,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1894F3270,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_141) {
  P e_,f_,d_,code_out_;
  P x_1895F3271;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_287));
  T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  x_1895F3271 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1895F3271,LITREF(lit_288));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1895F3271,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1895F3271,LITREF(lit_289));
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
    T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_290));
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
    T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_142) {
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

FUNCODEDEF(fun_to_c_143) {
  P e_,f_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_142,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1897_144) {
  P x_1896_;
  P argF3272;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1896_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1896_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1896_);
    argF3272 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3272,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1896_);
    a1 = T6;
    x_1896_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1900_145) {
  P x_1899_,x_1898_;
  P x_1901F3276;
  P argF3275;
  P iF3274;
  P tmpF3273;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1899_, 0);
  ARG(x_1898_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1899_);
  tmpF3273 = T3;
  if (tmpF3273 != YPfalse) {
    T4 = tmpF3273;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1898_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1899_);
    iF3274 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1898_);
    argF3275 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    x_1901F3276 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1901F3276,LITREF(lit_298));
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3274);
    CALL2(1,VARREF(YgooSioSportYputs),x_1901F3276,T10);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1901F3276,LITREF(lit_299));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3275,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1899_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1898_);
    a1 = T13;
    a2 = T14;
    x_1899_ = a1;
    x_1898_ = a2;
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

FUNCODEDEF(fun_x_1904_146) {
  P x_1903_,x_1902_;
  P x_1905F3280;
  P bindingF3279;
  P iF3278;
  P tmpF3277;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1903_, 0);
  ARG(x_1902_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1903_);
  tmpF3277 = T3;
  if (tmpF3277 != YPfalse) {
    T4 = tmpF3277;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1902_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1903_);
    iF3278 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1902_);
    bindingF3279 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3279,FREEREF(1));
    x_1905F3280 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1905F3280,LITREF(lit_303));
    T11 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3278);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1905F3280,T11);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1903_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1902_);
    a1 = T13;
    a2 = T14;
    x_1903_ = a1;
    x_1902_ = a2;
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

FUNCODEDEF(fun_generate_self_recursive_call_147) {
  P e_,f_,d_,code_out_;
  P x_1904F3283;
  P x_1900F3282;
  P x_1897F3281;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1897_144,4);
  x_1897F3281 = T0;
  FUNINIT(x_1897F3281, 4,f_,d_,code_out_,x_1897F3281);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1897F3281,T2);
  T4 = FUNSHELL(1,fun_x_1900_145,3);
  x_1900F3282 = T4;
  FUNINIT(x_1900F3282, 3,d_,code_out_,x_1900F3282);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_1900F3282,T6,T8);
  T10 = FUNSHELL(1,fun_x_1904_146,3);
  x_1904F3283 = T10;
  FUNINIT(x_1904F3283, 3,d_,code_out_,x_1904F3283);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_1904F3283,T12,T14);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_304));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_1907_148) {
  P x_1906_;
  P argF3284;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1906_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1906_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1906_);
    argF3284 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3284,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1906_);
    a1 = T6;
    x_1906_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1912_149) {
  P x_1911_;
  P argF3285;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1911_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1911_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1911_);
    argF3285 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3285,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1911_);
    a1 = T6;
    x_1911_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_150) {
  P e_,f_,d_,code_out_;
  P x_1912F3296;
  P x_1910F3295;
  P x_1909F3294;
  P x_1908F3293;
  P x_1907F3292;
  P nF3291;
  P tmpF3290;
  P tmpF3289;
  P tmpF3288;
  P tmpF3287;
  P functionF3286;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF3286 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF3287 = T4;
  if (tmpF3287 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_methodG));
    tmpF3288 = T7;
    if (tmpF3288 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF3289 = T10;
      if (tmpF3289 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF3286,VARREF(YevalSast_linearizeYLfree_referenceG));
        tmpF3290 = T14;
        if (tmpF3290 != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSast_linearizeYreference_selfQ),functionF3286);
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
    nF3291 = T19;
    T21 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_1907_148,4);
    x_1907F3292 = T22;
    FUNINIT(x_1907F3292, 4,f_,d_,code_out_,x_1907F3292);
    T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_1907F3292,T24);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1908F3293 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1908F3293,LITREF(lit_307));
    T28 = CALL2(1,VARREF(YgooSmagYG),nF3291,VARREF(YevalSg2cYDnumber_call_templates));
    if (T28 != YPfalse) {
      T27 = LITREF(lit_308);
    } else {
      T27 = nF3291;
    }
    T26 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1908F3293,T27);
    x_1909F3294 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1909F3294,YPchr((P)40));
    T30 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
    if (T30 != YPfalse) {
      T29 = LITREF(lit_309);
    } else {
      T29 = LITREF(lit_310);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T29);
    T31 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T31,code_out_);
    T32 = CALL2(1,VARREF(YgooSmagYG),nF3291,VARREF(YevalSg2cYDnumber_call_templates));
    if (T32 != YPfalse) {
      x_1910F3295 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1910F3295,LITREF(lit_311));
      T34 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1910F3295,nF3291);
      T33 = T34;
    } else {
    }
    T35 = FUNSHELL(1,fun_x_1912_149,2);
    x_1912F3296 = T35;
    FUNINIT(x_1912F3296, 2,code_out_,x_1912F3296);
    T38 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T37 = CALL1(1,VARREF(YgooScolsScolYenum),T38);
    T36 = CALL1(0,x_1912F3296,T37);
    T39 = CALL2(1,VARREF(YgooSioSportYput),x_1909F3294,YPchr((P)41));
    T40 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T18 = T40;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1916_151) {
  P x_1915_,x_1914_;
  P xF3299;
  P firstQF3298;
  P tmpF3297;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1915_, 0);
  ARG(x_1914_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1915_);
  tmpF3297 = T3;
  if (tmpF3297 != YPfalse) {
    T4 = tmpF3297;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1914_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1915_);
    firstQF3298 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1914_);
    xF3299 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3298);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3299,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1915_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1914_);
    a1 = T13;
    a2 = T14;
    x_1915_ = a1;
    x_1914_ = a2;
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

FUNCODEDEF(fun_152) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_153) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,code_out_;
  P x_1916F3301;
  P x_1913F3300;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_1913F3300 = code_out_;
  T2 = FUNSHELL(1,fun_x_1916_151,3);
  x_1916F3301 = T2;
  FUNINIT(x_1916F3301, 3,x_1913F3300,code_out_,x_1916F3301);
  T6 = fun_152;
  T7 = fun_153;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_1916F3301,T4,T8);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1920_155) {
  P x_1919_,x_1918_,x_1917_;
  P x_1921F3307;
  P bindingF3306;
  P typeF3305;
  P initF3304;
  P tmpF3303;
  P tmpF3302;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1919_, 0);
  ARG(x_1918_, 1);
  ARG(x_1917_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1919_);
  tmpF3302 = T3;
  if (tmpF3302 != YPfalse) {
    T4 = tmpF3302;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1918_);
    tmpF3303 = T6;
    if (tmpF3303 != YPfalse) {
      T7 = tmpF3303;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1917_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1919_);
    initF3304 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1918_);
    typeF3305 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1917_);
    bindingF3306 = T14;
    CALL4(1,VARREF(YevalSg2cYto_c),initF3304,YPfalse,FREEREF(0),FREEREF(1));
    T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF3305);
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALL4(1,VARREF(YevalSg2cYto_c),typeF3305,YPfalse,FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_321));
      x_1921F3307 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYput),x_1921F3307,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF3304,FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYput),x_1921F3307,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),typeF3305,FREEREF(1));
      T17 = CALL2(1,VARREF(YgooSioSportYput),x_1921F3307,YPchr((P)41));
      T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3306,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_322));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF3304,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1919_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1918_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1917_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1919_ = a1;
    x_1918_ = a2;
    x_1917_ = a3;
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

FUNCODEDEF(fun_to_c_156) {
  P e_,f_,d_,code_out_;
  P x_1920F3308;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1920_155,3);
  x_1920F3308 = T0;
  FUNINIT(x_1920F3308, 3,d_,code_out_,x_1920F3308);
  T3 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T1 = CALL3(0,x_1920F3308,T2,T4,T6);
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T8,f_,d_,code_out_);
  T10 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T10 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T11 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T11,code_out_);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T9 = T12;
  } else {
    T9 = YPfalse;
  }
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1924_157) {
  P x_1923_,x_1922_;
  P bindingF3311;
  P initF3310;
  P tmpF3309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_1923_, 0);
  ARG(x_1922_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1923_);
  tmpF3309 = T3;
  if (tmpF3309 != YPfalse) {
    T4 = tmpF3309;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1922_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1923_);
    initF3310 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1922_);
    bindingF3311 = T9;
    CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF3311,initF3310,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3311,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_326));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF3310,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1923_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1922_);
    a1 = T11;
    a2 = T12;
    x_1923_ = a1;
    x_1922_ = a2;
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

FUNCODEDEF(fun_to_c_158) {
  P e_,f_,d_,code_out_;
  P x_1924F3312;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1924_157,3);
  x_1924F3312 = T0;
  FUNINIT(x_1924F3312, 3,d_,code_out_,x_1924F3312);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_1924F3312,T2,T4);
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
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_159) {
  P e_,f_,d_,code_out_;
  P x_1925F3313;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_327));
  x_1925F3313 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1925F3313,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1925F3313,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_160) {
  P e_,f_,d_,code_out_;
  P x_1926F3314;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_328));
  x_1926F3314 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1926F3314,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1926F3314,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1926F3314,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_161) {
  P e_,f_,d_,code_out_;
  P x_1927F3315;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_329));
  x_1927F3315 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_330));
  CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_331));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1927F3315,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1929_162) {
  P x_1928_;
  P argF3316;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1928_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1928_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1928_);
    argF3316 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3316,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1928_);
    a1 = T6;
    x_1928_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1935_163) {
  P x_1934_,x_1933_;
  P argF3319;
  P firstQF3318;
  P tmpF3317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1934_, 0);
  ARG(x_1933_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1934_);
  tmpF3317 = T3;
  if (tmpF3317 != YPfalse) {
    T4 = tmpF3317;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1933_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1934_);
    firstQF3318 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1933_);
    argF3319 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3318);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3319,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1934_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1933_);
    a1 = T13;
    a2 = T14;
    x_1934_ = a1;
    x_1933_ = a2;
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

FUNCODEDEF(fun_164) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_165) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_166) {
  P e_,f_,d_,code_out_;
  P x_1935F3327;
  P x_1932F3326;
  P x_1931F3325;
  P x_1930F3324;
  P x_1929F3323;
  P tmpF3322;
  P tmpF3321;
  P bindingF3320;
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
  bindingF3320 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF3321 = T4;
  if (tmpF3321 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    tmpF3322 = T7;
    if (tmpF3322 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF3320,T10);
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
    T12 = FUNSHELL(1,fun_x_1929_162,4);
    x_1929F3323 = T12;
    FUNINIT(x_1929F3323, 4,f_,d_,code_out_,x_1929F3323);
    T15 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_1929F3323,T14);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1930F3324 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1930F3324,LITREF(lit_335));
    T18 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
    T17 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T18);
    T16 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1930F3324,T17);
    x_1931F3325 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1931F3325,YPchr((P)40));
    x_1932F3326 = code_out_;
    T20 = FUNSHELL(1,fun_x_1935_163,3);
    x_1935F3327 = T20;
    FUNINIT(x_1935F3327, 3,x_1932F3326,code_out_,x_1935F3327);
    T24 = fun_164;
    T25 = fun_165;
    T23 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T24,T25);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
    T27 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T26 = CALL1(1,VARREF(YgooScolsScolYenum),T27);
    T21 = CALL2(0,x_1935F3327,T22,T26);
    T19 = T21;
    T28 = CALL2(1,VARREF(YgooSioSportYput),x_1931F3325,YPchr((P)41));
    T29 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T2 = T29;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_167) {
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

FUNCODEDEF(fun_x_1939_168) {
  P x_1938_;
  P xF3328;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1938_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1938_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1938_);
    xF3328 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3328,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1938_);
    a1 = T6;
    x_1938_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_169) {
  P e_,f_,d_,code_out_;
  P x_1939F3333;
  P x_1937F3332;
  P x_1936F3331;
  P fF3330;
  P nF3329;
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
  nF3329 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTdefinitionsT),T5);
  fF3330 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF3329,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3330);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_167,3,fF3330,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_339));
    x_1936F3331 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1936F3331,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3330);
    x_1937F3332 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1937F3332,LITREF(lit_340));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3329);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1937F3332,T14);
    T15 = FUNSHELL(1,fun_x_1939_168,2);
    x_1939F3333 = T15;
    FUNINIT(x_1939F3333, 2,code_out_,x_1939F3333);
    T18 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    T16 = CALL1(0,x_1939F3333,T17);
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_1936F3331,YPchr((P)41));
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T6 = T20;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_170) {
  P b_,e_,f_,d_,code_out_;
  P x_1942F3338;
  P x_1941F3337;
  P x_1940F3336;
  P fF3335;
  P nF3334;
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
  nF3334 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTdefinitionsT),T5);
  fF3335 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF3334,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3335);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_345));
    x_1940F3336 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1940F3336,YPchr((P)40));
    x_1941F3337 = code_out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1941F3337,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_1940F3336,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3335);
    CALL2(1,VARREF(YgooSioSportYput),x_1940F3336,YPchr((P)44));
    x_1942F3338 = code_out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3334);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1942F3338,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1940F3336,YPchr((P)41));
    T8 = T15;
  }
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
  T3 = T16;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_171) {
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

FUNCODEDEF(fun_x_1946_172) {
  P x_1945_;
  P xF3339;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1945_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1945_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1945_);
    xF3339 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3339,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1945_);
    a1 = T6;
    x_1945_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_173) {
  P b_,e_,f_,d_,code_out_;
  P x_1946F3343;
  P x_1944F3342;
  P x_1943F3341;
  P nF3340;
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
  nF3340 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF3340,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_171,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_347));
    x_1943F3341 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1943F3341,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,code_out_);
    x_1944F3342 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1944F3342,LITREF(lit_348));
    T8 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1944F3342,nF3340);
    T9 = FUNSHELL(1,fun_x_1946_172,2);
    x_1946F3343 = T9;
    FUNINIT(x_1946F3343, 2,code_out_,x_1946F3343);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T10 = CALL1(0,x_1946F3343,T11);
    T13 = CALL2(1,VARREF(YgooSioSportYput),x_1943F3341,YPchr((P)41));
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T3 = T14;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_174) {
  P e_,f_,d_,code_out_;
  P x_1947F3344;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_351));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1947F3344 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1947F3344,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1947F3344,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1947F3344,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1947F3344,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_1951_175) {
  P x_1950_;
  P eF3345;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1950_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1950_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1950_);
    eF3345 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF3345);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1950_);
    a1 = T6;
    x_1950_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_out_list_builder_176) {
  P f_,code_out_,elts_;
  P x_1951F3348;
  P x_1949F3347;
  P x_1948F3346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_354));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_355));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_1948F3346 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1948F3346,YPchr((P)40));
    x_1949F3347 = code_out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1949F3347,T7);
    T9 = FUNSHELL(1,fun_x_1951_175,3);
    x_1951F3348 = T9;
    FUNINIT(x_1951F3348, 3,code_out_,f_,x_1951F3348);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T10 = CALL1(0,x_1951F3348,T11);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_1948F3346,YPchr((P)41));
    T5 = T12;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_177) {
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

FUNCODEDEF(fun_gen_fab_list_178) {
  P code_out_,refs_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_177,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_179) {
  P code_out_,sig_;
  P specsF3350;
  P typesF3349;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF3349 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YevalSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF3349);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF3349,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF3349;
  }
  specsF3350 = T3;
  T9 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,specsF3350);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_180) {
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

FUNCODEDEF(fun_to_c_181) {
  P e_,f_,d_,code_out_;
  P x_1952F3351;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_180,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_362));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_1952F3351 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1952F3351,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1952F3351,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1952F3351,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1952F3351,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1952F3351,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1952F3351,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_363));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1952F3351,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_182) {
  P e_,f_,d_,code_out_;
  P x_1953F3352;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_364));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1953F3352 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1953F3352,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_365));
  CALL2(1,VARREF(YgooSioSportYput),x_1953F3352,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1953F3352,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1953F3352,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_366));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1953F3352,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_367));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1953F3352,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_368));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1953F3352,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_369));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1953F3352,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1955_183) {
  P x_1954_;
  P defF3353;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1954_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1954_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1954_);
    defF3353 = T4;
    CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),FREEREF(0),defF3353);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1954_);
    a1 = T6;
    x_1954_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_184) {
  P code_out_,definitions_;
  P x_1955F3354;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_372));
  T1 = FUNSHELL(1,fun_x_1955_183,2);
  x_1955F3354 = T1;
  FUNINIT(x_1955F3354, 2,code_out_,x_1955F3354);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_1955F3354,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1960_185) {
  P x_1959_,x_1958_;
  P iF3357;
  P firstQF3356;
  P tmpF3355;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1959_, 0);
  ARG(x_1958_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1959_);
  tmpF3355 = T3;
  if (tmpF3355 != YPfalse) {
    T4 = tmpF3355;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1958_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1959_);
    firstQF3356 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1958_);
    iF3357 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3356);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_384));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1959_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1958_);
    a1 = T13;
    a2 = T14;
    x_1959_ = a1;
    x_1958_ = a2;
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

FUNCODEDEF(fun_186) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_187) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_188) {
  P code_out_,defn_;
  P x_1960F3360;
  P x_1957F3359;
  P x_1956F3358;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  x_1956F3358 = code_out_;
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_377);
  } else {
    T0 = LITREF(lit_378);
  }
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1956F3358,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1956F3358,LITREF(lit_379));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1956F3358,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1956F3358,LITREF(lit_380));
  x_1957F3359 = code_out_;
  T5 = FUNSHELL(1,fun_x_1960_185,3);
  x_1960F3360 = T5;
  FUNINIT(x_1960F3360, 3,x_1957F3359,code_out_,x_1960F3360);
  T9 = fun_186;
  T10 = fun_187;
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL1(1,VARREF(YgooScolsSseqYbelow),T13);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  T6 = CALL2(0,x_1960F3360,T7,T11);
  T4 = T6;
  T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_385));
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_generate_function_binding_189) {
  P code_out_,defn_;
  P x_1962F3365;
  P nameF3364;
  P x_1961F3363;
  P tmpF3362;
  P nameF3361;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF3361 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF3361,VARREF(YevalSastYLmodule_bindingG));
  tmpF3362 = T4;
  if (tmpF3362 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF3361);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_387),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF3361);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF3361,YPfalse);
    if (T11 != YPfalse) {
      x_1961F3363 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1961F3363,LITREF(lit_388));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1961F3363,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF3361,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF3361);
        T16 = T18;
      } else {
        T16 = nameF3361;
      }
      nameF3364 = T16;
      x_1962F3365 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1962F3365,LITREF(lit_389));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF3364);
      CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1962F3365,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_1962F3365,LITREF(lit_390));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1962F3365,T22);
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

FUNCODEDEF(fun_generate_function_forward_190) {
  P code_out_,defn_;
  P boundQF3366;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF3366 = T1;
  if (boundQF3366 != YPfalse) {
    T3 = LITREF(lit_391);
  } else {
    T3 = LITREF(lit_392);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_393));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_191) {
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

FUNCODEDEF(fun_generate_function_bodies_192) {
  P code_out_,definitions_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_395));
  T1 = FUNFAB(fun_191,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_193) {
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

FUNCODEDEF(fun_generate_functions_194) {
  P definitions_,f_,d_,code_out_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_193,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_195) {
  P definition_,f_,d_,code_out_;
  P x_1964F3368;
  P x_1963F3367;
  P T0,T1,T2,T3,T4,T5,T6,T7;
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
  x_1963F3367 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1963F3367,LITREF(lit_400));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_401));
  T1 = CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1963F3367,T2);
  x_1964F3368 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1964F3368,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1964F3368,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1964F3368,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1964F3368,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_402));
  CALL2(1,VARREF(YgooSioSportYput),x_1964F3368,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_403));
  CALL2(1,VARREF(YgooSioSportYput),x_1964F3368,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_1964F3368,YPchr((P)41));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_generate_function_body_reference_196) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_405));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_406));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1969_197) {
  P x_1968_,x_1967_,x_1966_;
  P x_1970F3374;
  P bF3373;
  P iF3372;
  P firstQF3371;
  P tmpF3370;
  P tmpF3369;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1968_, 0);
  ARG(x_1967_, 1);
  ARG(x_1966_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1968_);
  tmpF3369 = T3;
  if (tmpF3369 != YPfalse) {
    T4 = tmpF3369;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1967_);
    tmpF3370 = T6;
    if (tmpF3370 != YPfalse) {
      T7 = tmpF3370;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1966_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1968_);
    firstQF3371 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1967_);
    iF3372 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1966_);
    bF3373 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF3371);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    x_1970F3374 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1970F3374,LITREF(lit_414));
    T18 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3372);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1970F3374,T18);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1968_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1967_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1966_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1968_ = a1;
    x_1967_ = a2;
    x_1966_ = a3;
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

FUNCODEDEF(fun_198) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_199) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_shadow_args_200) {
  P bindings_,code_out_;
  P x_1969F3376;
  P x_1965F3375;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_409));
    x_1965F3375 = code_out_;
    T4 = FUNSHELL(1,fun_x_1969_197,3);
    x_1969F3376 = T4;
    FUNINIT(x_1969F3376, 3,x_1965F3375,code_out_,x_1969F3376);
    T8 = fun_198;
    T9 = fun_199;
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_1969F3376,T6,T10,T12);
    T3 = T5;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T0 = T13;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_201) {
  P defn_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_416));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_202) {
  P defn_,d_,code_out_;
  P x_1971F3377;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_417));
  x_1971F3377 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1971F3377,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1971F3377,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_203) {
  P e_;
  P bindingF3378;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  bindingF3378 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3378);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_419),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1977_204) {
  P x_1976_,x_1975_;
  P bindingF3381;
  P firstQF3380;
  P tmpF3379;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1976_, 0);
  ARG(x_1975_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1976_);
  tmpF3379 = T3;
  if (tmpF3379 != YPfalse) {
    T4 = tmpF3379;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1975_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1976_);
    firstQF3380 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1975_);
    bindingF3381 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3380);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_429));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3381,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1976_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1975_);
    a1 = T13;
    a2 = T14;
    x_1976_ = a1;
    x_1975_ = a2;
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

FUNCODEDEF(fun_generate_function_code_207) {
  P code_out_,e_;
  P x_1977F3385;
  P x_1974F3384;
  P x_1973F3383;
  P x_1972F3382;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1972F3382 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1972F3382,LITREF(lit_421));
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_422);
  } else {
    T0 = LITREF(lit_423);
  }
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1972F3382,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_424);
  } else {
    T1 = LITREF(lit_423);
  }
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1972F3382,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1972F3382,LITREF(lit_425));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,code_out_);
  x_1973F3383 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1973F3383,YPchr((P)40));
  x_1974F3384 = code_out_;
  T6 = FUNSHELL(1,fun_x_1977_204,3);
  x_1977F3385 = T6;
  FUNINIT(x_1977F3385, 3,x_1974F3384,code_out_,x_1977F3385);
  T10 = fun_205;
  T11 = fun_206;
  T9 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T10,T11);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T7 = CALL2(0,x_1977F3385,T8,T12);
  T5 = T7;
  T14 = CALL2(1,VARREF(YgooSioSportYput),x_1973F3383,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_430));
  T15 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T15,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T17,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_431));
  T18 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T18,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T19 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_432));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_dispatcherQ_208) {
  P definition_;
  P tmpF3389;
  P nameF3388;
  P tmpF3387;
  P bindingF3386;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF3386 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF3386,VARREF(YevalSastYLmodule_bindingG));
  tmpF3387 = T3;
  if (tmpF3387 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3386);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF3388 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF3388,LITREF(lit_434));
    tmpF3389 = T9;
    if (tmpF3389 != YPfalse) {
      T10 = tmpF3389;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF3388,LITREF(lit_435));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF3388);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_436));
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

FUNCODEDEF(fun_x_1981_209) {
  P x_1980_,x_1979_;
  P bF3392;
  P firstQF3391;
  P tmpF3390;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1980_, 0);
  ARG(x_1979_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1980_);
  tmpF3390 = T3;
  if (tmpF3390 != YPfalse) {
    T4 = tmpF3390;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1979_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1980_);
    firstQF3391 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1979_);
    bF3392 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3391);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF3392,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1980_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1979_);
    a1 = T13;
    a2 = T14;
    x_1980_ = a1;
    x_1979_ = a2;
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

FUNCODEDEF(fun_210) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_211) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_212) {
  P b_;
  P x_1982F3393;
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
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_444));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_445));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1982F3393 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1982F3393,LITREF(lit_446));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1982F3393,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1982F3393,LITREF(lit_447));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_209));
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

FUNCODEDEF(fun_generate_function_code_213) {
  P code_out_,definition_;
  P x_1981F3397;
  P x_1978F3396;
  P bindingsF3395;
  P offsetF3394;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF3394 = YPint((P)0);
  offsetF3394 = BOXFAB(offsetF3394);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF3395 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_437));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_438));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3395);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_439));
    x_1978F3396 = code_out_;
    T7 = FUNSHELL(1,fun_x_1981_209,3);
    x_1981F3397 = T7;
    FUNINIT(x_1981F3397, 3,x_1978F3396,code_out_,x_1981F3397);
    T11 = fun_210;
    T12 = fun_211;
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T11,T12);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    T8 = CALL2(0,x_1981F3397,T9,T13);
    T6 = T8;
    T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T17,code_out_);
  T18 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T18,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_443));
  T19 = FUNFAB(fun_212,2,code_out_,offsetF3394);
  CALL2(1,VARREF(YgooSmacrosYdo),T19,bindingsF3395);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_448));
  T20 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T20,definition_,YPint((P)1),code_out_);
  T22 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T21 = CALL1(1,VARREF(Ynot),T22);
  if (T21 != YPfalse) {
    T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_449));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_450));
  T2 = T24;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1984_214) {
  P x_1983_;
  P tempF3398;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1983_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1983_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1983_);
    tempF3398 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_455));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF3398,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_209));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1983_);
    a1 = T6;
    x_1983_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_215) {
  P temps_,code_out_;
  P x_1984F3399;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1984_214,2);
  x_1984F3399 = T1;
  FUNINIT(x_1984F3399, 2,code_out_,x_1984F3399);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_1984F3399,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_216) {
  P j_,i_;
  P tmpF3400;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YevalSg2cYTregisters_per_lineT));
  tmpF3400 = T2;
  if (tmpF3400 != YPfalse) {
    T3 = tmpF3400;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYE),j_,FREEREF(0));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_462));
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

FUNCODEDEF(fun_next_line_217) {
  P j_;
  P next_regF3401;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(j_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_460));
    T3 = FUNSHELL(1,fun_next_reg_216,5);
    next_regF3401 = T3;
    FUNINIT(next_regF3401, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),next_regF3401);
    T4 = CALL2(0,next_regF3401,j_,YPint((P)0));
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_218) {
  P regs_,code_out_;
  P next_lineF3403;
  P nregsF3402;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF3402 = T1;
  T3 = FUNSHELL(1,fun_next_line_217,4);
  next_lineF3403 = T3;
  FUNINIT(next_lineF3403, 4,nregsF3402,code_out_,next_lineF3403,regs_);
  T4 = CALL1(0,next_lineF3403,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_219) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_464),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_220) {
  P modname_;
  P x_1985F3404;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1985F3404 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1985F3404,LITREF(lit_467));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1985F3404,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1985F3404,LITREF(lit_468));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  P binding_;
  P home_modF3405;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF3405 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF3405);
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
  P maybe_declareF3408;
  P envF3407;
  P seenF3406;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF3406 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3407 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_220,2);
  maybe_declareF3408 = T5;
  FUNINIT(maybe_declareF3408, 2,seenF3406,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3407);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF3408,T6);
  T9 = FUNFAB(fun_221,2,mod_,maybe_declareF3408);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1987_223) {
  P x_1986_;
  P x_1988F3410;
  P nF3409;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1986_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1986_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1986_);
    nF3409 = T4;
    x_1988F3410 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1988F3410,LITREF(lit_474));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF3409);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1988F3410,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1988F3410,LITREF(lit_475));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1986_);
    a1 = T8;
    x_1986_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_224) {
  P local_name_,binding_;
  P x_1989F3411;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1989F3411 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1989F3411,LITREF(lit_479));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1989F3411,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_1989F3411,LITREF(lit_480));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1989F3411,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1989F3411,LITREF(lit_481));
    T8 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1989F3411,T8);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1989F3411,LITREF(lit_482));
    T3 = T9;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  P binding_;
  P x_1991F3413;
  P x_1990F3412;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_99));
    if (T3 != YPfalse) {
      x_1990F3412 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1990F3412,LITREF(lit_485));
      T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T6 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T7);
      CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1990F3412,T6);
      CALL2(1,VARREF(YgooSioSportYputs),x_1990F3412,LITREF(lit_486));
      T8 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1990F3412,T8);
      T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1990F3412,LITREF(lit_487));
      T5 = T9;
      T2 = T5;
    } else {
      x_1991F3413 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1991F3413,LITREF(lit_488));
      T12 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
      CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1991F3413,T11);
      T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1991F3413,LITREF(lit_489));
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

FUNCODEDEF(fun_x_1993_226) {
  P x_1992_;
  P x_1994F3417;
  P bindingF3416;
  P exported_asF3415;
  P tup38F3414;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(x_1992_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1992_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1992_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1992_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup38F3414 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F3414,YPint((P)0));
    exported_asF3415 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F3414,YPint((P)1));
    bindingF3416 = T10;
    x_1994F3417 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1994F3417,LITREF(lit_494));
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3416);
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1994F3417,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1994F3417,LITREF(lit_495));
    T13 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF3415);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1994F3417,T13);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1994F3417,LITREF(lit_496));
    T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1992_);
    a1 = T16;
    x_1992_ = a1;
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
  P x_1997F3427;
  P x_1996F3426;
  P x_1995F3425;
  P x_1993F3424;
  P x_1987F3423;
  P uses_namesF3422;
  P usesF3421;
  P envF3420;
  P info_nameF3419;
  P nameF3418;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3418 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3418);
  info_nameF3419 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3420 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3420);
  usesF3421 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3421);
  uses_namesF3422 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_470));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_471));
  T10 = FUNSHELL(1,fun_x_1987_223,2);
  x_1987F3423 = T10;
  FUNINIT(x_1987F3423, 2,code_out_,x_1987F3423);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3422);
  T11 = CALL1(0,x_1987F3423,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_476));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_477));
  T13 = FUNFAB(fun_224,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_483));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_484));
  T15 = FUNFAB(fun_225,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_490));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_491));
  T17 = FUNSHELL(1,fun_x_1993_226,2);
  x_1993F3424 = T17;
  FUNINIT(x_1993F3424, 2,code_out_,x_1993F3424);
  T20 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_1993F3424,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_497));
  x_1995F3425 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1995F3425,LITREF(lit_498));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1995F3425,info_nameF3419);
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1995F3425,LITREF(lit_499));
  x_1996F3426 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1996F3426,LITREF(lit_500));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1996F3426,info_nameF3419);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1996F3426,LITREF(lit_501));
  x_1997F3427 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1997F3427,LITREF(lit_502));
  T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3418);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_1997F3427,T23);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1997F3427,LITREF(lit_503));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_504));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_505));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_506));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_507));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_508));
  T25 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_509));
  T8 = T25;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_228) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_511),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_229) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_513),T1,LITREF(lit_514));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1999_230) {
  P x_1998_;
  P x_2000F3429;
  P nF3428;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1998_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1998_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1998_);
    nF3428 = T4;
    x_2000F3429 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_2000F3429,LITREF(lit_521));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF3428);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2000F3429,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2000F3429,LITREF(lit_522));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1998_);
    a1 = T8;
    x_1998_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2004_231) {
  P x_2003_;
  P x_2005F3431;
  P nF3430;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_2003_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2003_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_2003_);
    nF3430 = T4;
    x_2005F3431 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_2005F3431,LITREF(lit_532));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF3430);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2005F3431,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2005F3431,LITREF(lit_533));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2003_);
    a1 = T8;
    x_2003_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_232) {
  P code_out_,mod_,form_;
  P x_2004F3440;
  P x_2002F3439;
  P x_2001F3438;
  P x_1999F3437;
  P uses_namesF3436;
  P usesF3435;
  P envF3434;
  P init_declF3433;
  P nameF3432;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_517);
  } else {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF3432 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3432);
  init_declF3433 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3434 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3434);
  usesF3435 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3435);
  uses_namesF3436 = T10;
  T11 = CALL1(1,VARREF(Ynot),VARREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_518));
    T13 = FUNSHELL(1,fun_x_1999_230,2);
    x_1999F3437 = T13;
    FUNINIT(x_1999F3437, 2,code_out_,x_1999F3437);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3436);
    T14 = CALL1(0,x_1999F3437,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_523));
  x_2001F3438 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2001F3438,LITREF(lit_524));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2001F3438,init_declF3433);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_2001F3438,LITREF(lit_525));
  x_2002F3439 = code_out_;
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2002F3439,init_declF3433);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_2002F3439,LITREF(lit_526));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_527));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_528));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_529));
  T18 = CALL1(1,VARREF(Ynot),VARREF(YevalSg2cYTdynamic_linkingQT));
  if (T18 != YPfalse) {
    T19 = FUNSHELL(1,fun_x_2004_231,2);
    x_2004F3440 = T19;
    FUNINIT(x_2004F3440, 2,code_out_,x_2004F3440);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3436);
    T20 = CALL1(0,x_2004F3440,T21);
    T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_534));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_535));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_536));
  T9 = T23;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_233) {
  P code_out_,mod_;
  P x_2010F3447;
  P x_2009F3446;
  P x_2008F3445;
  P x_2007F3444;
  P x_2006F3443;
  P info_nameF3442;
  P nameF3441;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3441 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3441);
  info_nameF3442 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_538));
  x_2006F3443 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2006F3443,LITREF(lit_539));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2006F3443,info_nameF3442);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2006F3443,LITREF(lit_540));
  x_2007F3444 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2007F3444,LITREF(lit_541));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3441);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2007F3444,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2007F3444,LITREF(lit_542));
  x_2008F3445 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2008F3445,LITREF(lit_543));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2008F3445,info_nameF3442);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2008F3445,LITREF(lit_544));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_545));
  x_2009F3446 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2009F3446,LITREF(lit_546));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_547));
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2009F3446,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_2009F3446,LITREF(lit_548));
  x_2010F3447 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2010F3447,LITREF(lit_549));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF3441);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),x_2010F3447,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_2010F3447,LITREF(lit_550));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_551));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_552));
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170;
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
  CALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),VARREF(YevalSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
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
  CALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),VARREF(YevalSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
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
  CALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
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
  CALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
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
  lit_16 = YPsb((P)"START");
  lit_17 = YPsb((P)"OPTIMIZE");
  lit_18 = YPsb((P)"EMIT");
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
  lit_19 = YPPsym((P)"module-up-to-date?");
  lit_20 = YPPsym((P)"mod");
  T58 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_19),T58,ENVNUL,PNUL,YPfalse);
  T59 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T59);
  lit_21 = YPPsym((P)"purge-outdated-modules");
  lit_22 = YPsb((P)" has changed.\n");
  T62 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_21),T60,ENVNUL,PNUL,YPfalse);
  T63 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T63);
  lit_23 = YPPsym((P)"g2c-def-app");
  lit_24 = YPPsym((P)"appname");
  lit_25 = YPPsym((P)"modname");
  T64 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_23),T64,ENVNUL,PNUL,YPfalse);
  T65 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T65);
  lit_26 = YPPsym((P)"g2c-build-app");
  lit_27 = YPsb((P)"Searching for undefined global bindings.\n");
  T66 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_26),T66,ENVNUL,PNUL,YPfalse);
  T67 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T67);
  lit_28 = YPPsym((P)"g2c-test");
  lit_29 = YPPsym((P)"x");
  lit_30 = YPsb((P)"g2c-");
  lit_31 = YPPsym((P)"eval/main");
  T68 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_28),T68,ENVNUL,PNUL,YPfalse);
  T69 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T69);
  VARSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_32 = YPPsym((P)"g2c-ast");
  lit_33 = YPPsym((P)"ast");
  lit_34 = YPPsym((P)"env");
  lit_35 = YPsb((P)"exp-%d-%d");
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
  T70 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_27 = YPmet(FUNCODEREF(fun_g2c_ast_27),LITREF(lit_32),T70,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSg2cYg2c_ast);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSg2cYg2c_ast);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_g2c_ast_27;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSg2cYg2c_ast,T77);
  lit_36 = YPPsym((P)"g2c-exp");
  lit_37 = YPPsym((P)"exp");
  T81 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_28 = YPmet(FUNCODEREF(fun_g2c_exp_28),LITREF(lit_36),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YevalSg2cYg2c_exp);
  if (T84 != YPfalse) {
    T83 = VARREF(YevalSg2cYg2c_exp);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_g2c_exp_28;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YevalSg2cYg2c_exp,T82);
  lit_38 = YPPsym((P)"compile-load");
  lit_39 = YPsb((P)".so");
  lit_40 = YPsb((P)".so");
  T86 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_29 = YPmet(FUNCODEREF(fun_compile_load_29),LITREF(lit_38),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YevalSg2cYcompile_load);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSg2cYcompile_load);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_compile_load_29;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSg2cYcompile_load,T87);
  lit_41 = YPPsym((P)"g2c-eval");
  T91 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_30 = YPmet(FUNCODEREF(fun_g2c_eval_30),LITREF(lit_41),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalStopYg2c_eval);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalStopYg2c_eval);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_g2c_eval_30;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalStopYg2c_eval,T92);
  T96 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_41),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalStopYg2c_eval);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalStopYg2c_eval);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_g2c_eval_31;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalStopYg2c_eval,T97);
  lit_42 = YPsb((P)"g2c");
  T101 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_42),LITREF(lit_31));
  VARSET(YevalSg2cYTg2c_appT,T101);
  lit_43 = YPPsym((P)"g2c-top");
  T102 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_32 = YPmet(FUNCODEREF(fun_g2c_top_32),LITREF(lit_43),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSg2cYg2c_top);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSg2cYg2c_top);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_g2c_top_32;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSg2cYg2c_top,T103);
  lit_44 = YPPsym((P)"g2c-clean");
  lit_45 = YPsb((P)"g2c");
  T107 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_33 = YPmet(FUNCODEREF(fun_g2c_clean_33),LITREF(lit_44),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSg2cYg2c_clean);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSg2cYg2c_clean);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_g2c_clean_33;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSg2cYg2c_clean,T108);
  lit_46 = YPPsym((P)"compute-ast");
  lit_47 = YPPsym((P)"filename");
  lit_48 = YPPsym((P)"ct-env");
  lit_49 = YPsb((P)"READ");
  lit_50 = YPsb((P)"AST");
  T112 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_34 = YPmet(FUNCODEREF(fun_compute_ast_34),LITREF(lit_46),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSg2cYcompute_ast);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSg2cYcompute_ast);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_compute_ast_34;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSg2cYcompute_ast,T113);
  lit_51 = YPPsym((P)"compute-program");
  lit_52 = YPPsym((P)"e");
  lit_53 = YPsb((P)"BOX");
  lit_54 = YPsb((P)"ANA");
  lit_55 = YPsb((P)"LFT");
  lit_56 = YPsb((P)"EXT");
  lit_57 = YPsb((P)"CLO");
  lit_58 = YPsb((P)"TMP");
  lit_59 = YPsb((P)"REG");
  T117 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_35 = YPmet(FUNCODEREF(fun_compute_program_35),LITREF(lit_51),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSg2cYcompute_program);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSg2cYcompute_program);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_compute_program_35;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSg2cYcompute_program,T118);
  lit_60 = YPPsym((P)"generate-c-module");
  lit_61 = YPPsym((P)"code-out");
  lit_62 = YPPsym((P)"prg");
  T122 = YPsig(YPPlist(4,LITREF(lit_61),LITREF(lit_52),LITREF(lit_62),LITREF(lit_20)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_36 = YPmet(FUNCODEREF(fun_generate_c_module_36),LITREF(lit_60),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYgenerate_c_module);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYgenerate_c_module);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_generate_c_module_36;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYgenerate_c_module,T123);
  lit_63 = YPPsym((P)"generate-c-application");
  lit_64 = YPsb((P)"-init");
  T129 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_20)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_39 = YPmet(FUNCODEREF(fun_generate_c_application_39),LITREF(lit_63),T127,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSg2cYgenerate_c_application);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSg2cYgenerate_c_application);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_generate_c_application_39;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSg2cYgenerate_c_application,T130);
  lit_65 = YPPsym((P)"generate-makefile");
  lit_66 = YPsb((P)"-init");
  lit_67 = YPsb((P)"Makefile");
  lit_68 = YPsb((P)"include ..");
  lit_69 = YPsb((P)"Make.inc\n");
  lit_70 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_71 = YPsb((P)"%,$(C_OBJS))\n");
  lit_72 = YPsb((P)": ..");
  lit_73 = YPsb((P)"grt.h\n");
  lit_74 = YPsb((P)"\t$(CC) -I.. -c -g -O -o $@ $<\n\n");
  lit_75 = YPsb((P)"OBJS = \\\n");
  lit_76 = YPsb((P)"\t");
  lit_77 = YPsb((P)" \\\n");
  lit_78 = YPsb((P)"\t");
  lit_79 = YPsb((P)"\n\n");
  lit_80 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_81 = YPsb((P)"\t$(CC) -Wl,--export-dynamic -o ");
  lit_82 = YPsb((P)" $(C_OBJS_DD) $(LIBS) $(OBJS)\n\n");
  lit_83 = YPsb((P)"clean:\n\trm -f ");
  lit_84 = YPsb((P)" $(OBJS)\n");
  T137 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_43 = YPmet(FUNCODEREF(fun_generate_makefile_43),LITREF(lit_65),T134,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YevalSg2cYgenerate_makefile);
  if (T140 != YPfalse) {
    T139 = VARREF(YevalSg2cYgenerate_makefile);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_generate_makefile_43;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YevalSg2cYgenerate_makefile,T138);
  lit_85 = YPPsym((P)"pp");
  T142 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_44 = YPmet(FUNCODEREF(fun_pp_44),LITREF(lit_85),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YevalSg2cYpp);
  if (T145 != YPfalse) {
    T144 = VARREF(YevalSg2cYpp);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_pp_44;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YevalSg2cYpp,T143);
  lit_86 = YPPsym((P)"generate-header");
  lit_87 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_88 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_89 = YPsb((P)"#include \"dlgrt.h\"\n");
  T147 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_45 = YPmet(FUNCODEREF(fun_generate_header_45),LITREF(lit_86),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YevalSg2cYgenerate_header);
  if (T150 != YPfalse) {
    T149 = VARREF(YevalSg2cYgenerate_header);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_generate_header_45;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YevalSg2cYgenerate_header,T148);
  lit_90 = YPPsym((P)"generate-trailer");
  lit_91 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T152 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_46 = YPmet(FUNCODEREF(fun_generate_trailer_46),LITREF(lit_90),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSg2cYgenerate_trailer);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSg2cYgenerate_trailer);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_generate_trailer_46;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSg2cYgenerate_trailer,T153);
  lit_92 = YPPsym((P)"generate-global-environment");
  lit_93 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_94 = YPsb((P)" */\n\n");
  lit_95 = YPPsym((P)"binding");
  T158 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_48 = YPmet(FUNCODEREF(fun_generate_global_environment_48),LITREF(lit_92),T157,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YevalSg2cYgenerate_global_environment);
  if (T161 != YPfalse) {
    T160 = VARREF(YevalSg2cYgenerate_global_environment);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_generate_global_environment_48;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YevalSg2cYgenerate_global_environment,T159);
  lit_96 = YPPsym((P)"generate-global-binding");
  lit_97 = YPPsym((P)"imported?");
  lit_98 = YPPsym((P)"gb");
  lit_99 = YPPsym((P)"global");
  lit_100 = YPPsym((P)"runtime");
  lit_101 = YPsb((P)"EXT");
  lit_102 = YPsb((P)"DEF");
  lit_103 = YPsb((P)"(");
  lit_104 = YPsb((P)",\"");
  lit_105 = YPsb((P)"\",\"");
  lit_106 = YPsb((P)"\");\n");
  T163 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_97),LITREF(lit_98)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_49 = YPmet(FUNCODEREF(fun_generate_global_binding_49),LITREF(lit_96),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YevalSg2cYgenerate_global_binding);
  if (T166 != YPfalse) {
    T165 = VARREF(YevalSg2cYgenerate_global_binding);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_generate_global_binding_49;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YevalSg2cYgenerate_global_binding,T164);
  lit_107 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_107));
  lit_108 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_108));
  lit_109 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_109));
  lit_110 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_110));
  lit_111 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_111));
  lit_112 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_112));
  T170 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  T169 = VARSET(YevalSg2cYDmodule_marker,T170);
  T168 = T169;
  return T168;
}

P YevalSg2cY___main_1___() {
  P x_1833F3453;
  P x_1831F3452;
  P x_1829F3451;
  P x_1827F3450;
  P tableF3449;
  P vecF3448;
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
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283;
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T0);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T1);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T3);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T4);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T5 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T5);
  lit_113 = CALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_114 = CALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_115 = CALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_116 = CALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_117 = CALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_118 = CALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_119 = CALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_120 = CALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_121 = CALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_122 = CALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_123 = CALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_124 = CALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_125 = CALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_126 = CALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_127 = CALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_128 = CALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_129 = CALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_130 = CALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T6 = CALLN(1,VARREF(Ytup),18,LITREF(lit_113),LITREF(lit_114),LITREF(lit_115),LITREF(lit_116),LITREF(lit_117),LITREF(lit_118),LITREF(lit_119),LITREF(lit_120),LITREF(lit_121),LITREF(lit_122),LITREF(lit_123),LITREF(lit_124),LITREF(lit_125),LITREF(lit_126),LITREF(lit_127),LITREF(lit_128),LITREF(lit_129),LITREF(lit_130));
  VARSET(YevalSg2cYDmangles_data,T6);
  lit_131 = YPPsym((P)"char-buffer-as-string");
  lit_132 = YPPsym((P)"buffer");
  lit_133 = YPPsym((P)"loop");
  lit_134 = YPPsym((P)"i");
  T8 = YPsig(YPPlist(1,LITREF(lit_134)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_50 = YPmet(FUNCODEREF(fun_loop_50),LITREF(lit_133),T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(YPPlist(1,LITREF(lit_132)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_131),T7,ENVNUL,PNUL,YPfalse);
  T9 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T9);
  lit_135 = YPsb((P)"\\t");
  lit_136 = YPsb((P)"\\f");
  lit_137 = YPsb((P)"\\r");
  lit_138 = YPsb((P)"\\n");
  lit_139 = YPsb((P)"\\\"");
  lit_140 = YPsb((P)"\\\\");
  T12 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T11 = CALL2(1,VARREF(YgooScolsScolYfill),T12,YPfalse);
  vecF3448 = T11;
  T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_135),vecF3448,T13);
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_136),vecF3448,T14);
  T15 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_137),vecF3448,T15);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_138),vecF3448,T16);
  T17 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_139),vecF3448,T17);
  T18 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_140),vecF3448,T18);
  T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3448);
  T10 = T19;
  VARSET(YevalSg2cYDc_escapes,T10);
  lit_141 = YPPsym((P)"mangle-string-literal");
  lit_142 = YPPsym((P)"str");
  T21 = YPsig(YPPlist(1,LITREF(lit_134)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_52 = YPmet(FUNCODEREF(fun_loop_52),LITREF(lit_133),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_53 = YPmet(FUNCODEREF(fun_mangle_string_literal_53),LITREF(lit_141),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T24 != YPfalse) {
    T23 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_mangle_string_literal_53;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YevalSg2cYmangle_string_literal,T22);
  lit_143 = YPPsym((P)"sym");
  T26 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_54 = YPmet(FUNCODEREF(fun_mangle_string_literal_54),LITREF(lit_141),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_mangle_string_literal_54;
  T27 = CALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSg2cYmangle_string_literal,T27);
  lit_144 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_144));
  lit_145 = YPPsym((P)"mangle-integer");
  lit_146 = YPPsym((P)"number");
  lit_147 = YPPsym((P)"process-integer");
  lit_148 = YPPsym((P)"index");
  T32 = YPsig(YPPlist(2,LITREF(lit_146),LITREF(lit_148)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_55 = YPmet(FUNCODEREF(fun_process_integer_55),LITREF(lit_147),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_56 = YPmet(FUNCODEREF(fun_mangle_integer_56),LITREF(lit_145),T31,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSg2cYmangle_integer);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSg2cYmangle_integer);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_mangle_integer_56;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSg2cYmangle_integer,T33);
  lit_149 = YPPsym((P)"x-1827");
  lit_150 = YPPsym((P)"x-1826");
  lit_151 = YPPsym((P)"x-1829");
  lit_152 = YPPsym((P)"x-1828");
  lit_153 = YPPsym((P)"x-1831");
  lit_154 = YPPsym((P)"x-1830");
  lit_155 = YPPsym((P)"x-1833");
  lit_156 = YPPsym((P)"x-1832");
  T40 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1827_57 = YPmet(FUNCODEREF(fun_x_1827_57),LITREF(lit_149),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_152)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1829_58 = YPmet(FUNCODEREF(fun_x_1829_58),LITREF(lit_151),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_154)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1831_59 = YPmet(FUNCODEREF(fun_x_1831_59),LITREF(lit_153),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1833_60 = YPmet(FUNCODEREF(fun_x_1833_60),LITREF(lit_155),T37,ENVNUL,PNUL,YPfalse);
  T43 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T42 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T43);
  tableF3449 = T42;
  T44 = FUNSHELL(1,fun_x_1827_57,2);
  x_1827F3450 = T44;
  FUNINIT(x_1827F3450, 2,tableF3449,x_1827F3450);
  T47 = CALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T46 = CALL1(1,VARREF(YgooScolsScolYenum),T47);
  T45 = CALL1(0,x_1827F3450,T46);
  T48 = FUNSHELL(1,fun_x_1829_58,2);
  x_1829F3451 = T48;
  FUNINIT(x_1829F3451, 2,tableF3449,x_1829F3451);
  T50 = CALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  T49 = CALL1(0,x_1829F3451,T50);
  T51 = FUNSHELL(1,fun_x_1831_59,2);
  x_1831F3452 = T51;
  FUNINIT(x_1831F3452, 2,tableF3449,x_1831F3452);
  T55 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T56 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T54 = CALL3(1,VARREF(YgooScolsSrangeYrange),T55,VARREF(YgooSmagYLE),T56);
  T53 = CALL1(1,VARREF(YgooScolsScolYenum),T54);
  T52 = CALL1(0,x_1831F3452,T53);
  T57 = FUNSHELL(1,fun_x_1833_60,2);
  x_1833F3453 = T57;
  FUNINIT(x_1833F3453, 2,tableF3449,x_1833F3453);
  T61 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T62 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T60 = CALL3(1,VARREF(YgooScolsSrangeYrange),T61,VARREF(YgooSmagYLE),T62);
  T59 = CALL1(1,VARREF(YgooScolsScolYenum),T60);
  T58 = CALL1(0,x_1833F3453,T59);
  T41 = tableF3449;
  VARSET(YevalSg2cYDname_mangler_table,T41);
  lit_157 = YPPsym((P)"mangler-reset");
  T63 = YPsig(YPPlist(1,LITREF(lit_132)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_157),T63,ENVNUL,PNUL,YPfalse);
  T64 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T64);
  lit_158 = YPPsym((P)"mangle-name-into");
  lit_159 = YPPsym((P)"buf");
  lit_160 = YPPsym((P)"x-1835");
  lit_161 = YPPsym((P)"x-1834");
  T66 = YPsig(YPPlist(1,LITREF(lit_161)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1835_62 = YPmet(FUNCODEREF(fun_x_1835_62),LITREF(lit_160),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_158),T65,ENVNUL,PNUL,YPfalse);
  T67 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T67);
  lit_162 = YPPsym((P)"mangle-raw-name");
  T68 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_64 = YPmet(FUNCODEREF(fun_mangle_raw_name_64),LITREF(lit_162),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_mangle_raw_name_64;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSg2cYmangle_raw_name,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_65 = YPmet(FUNCODEREF(fun_mangle_raw_name_65),LITREF(lit_162),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_mangle_raw_name_65;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSg2cYmangle_raw_name,T74);
  lit_163 = YPPsym((P)"mangle-local-name");
  T78 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_66 = YPmet(FUNCODEREF(fun_mangle_local_name_66),LITREF(lit_163),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_mangle_local_name_66;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalSg2cYmangle_local_name,T79);
  T83 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_67 = YPmet(FUNCODEREF(fun_mangle_local_name_67),LITREF(lit_163),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T86 != YPfalse) {
    T85 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_mangle_local_name_67;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YevalSg2cYmangle_local_name,T84);
  lit_164 = YPPsym((P)"return");
  lit_165 = YPPsym((P)"x-1839");
  lit_166 = YPPsym((P)"msg");
  lit_167 = YPPsym((P)"args");
  lit_168 = YPPsym((P)"or/set");
  lit_169 = YPsb((P)"Match Pattern Failure");
  lit_170 = YPPsym((P)"or");
  lit_171 = YPPsym((P)"set");
  T90 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1839_68 = YPmet(FUNCODEREF(fun_x_1839_68),LITREF(lit_165),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T91 = fun_70;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"or/set"),T91);
  lit_172 = YPPsym((P)"buf-cat2!");
  T93 = YPsig(YPPlist(1,LITREF(lit_134)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_71 = YPmet(FUNCODEREF(fun_loop_71),LITREF(lit_133),T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_172),T92,ENVNUL,PNUL,YPfalse);
  T94 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T94);
  lit_173 = YPPsym((P)"mangle-module-into");
  T95 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_20)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_73 = YPmet(FUNCODEREF(fun_mangle_module_into_73),LITREF(lit_173),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSg2cYmangle_module_into);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSg2cYmangle_module_into);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_mangle_module_into_73;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSg2cYmangle_module_into,T96);
  lit_174 = YPPsym((P)"mangle-global-name");
  T100 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_74 = YPmet(FUNCODEREF(fun_mangle_global_name_74),LITREF(lit_174),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_mangle_global_name_74;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSg2cYmangle_global_name,T101);
  T105 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_75 = YPmet(FUNCODEREF(fun_mangle_global_name_75),LITREF(lit_174),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_mangle_global_name_75;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSg2cYmangle_global_name,T106);
  lit_175 = YPPsym((P)"mangle-boot-name");
  T110 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_175),T110,ENVNUL,PNUL,YPfalse);
  T111 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T111);
  lit_176 = YPPsym((P)"mangle-quotation-name");
  lit_177 = YPsb((P)"lit_");
  T112 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_176),T112,ENVNUL,PNUL,YPfalse);
  T113 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T113);
  lit_178 = YPPsym((P)"mangle-binding");
  lit_179 = YPPsym((P)"quotation");
  T114 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_78 = YPmet(FUNCODEREF(fun_mangle_binding_78),LITREF(lit_178),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YevalSg2cYmangle_binding);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_mangle_binding_78;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSg2cYmangle_binding,T115);
  lit_180 = YPPsym((P)"mangle-local-marked-name");
  lit_181 = YPPsym((P)"marker");
  T119 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_181)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_180),T119,ENVNUL,PNUL,YPfalse);
  T120 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T120);
  T121 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_80 = YPmet(FUNCODEREF(fun_mangle_binding_80),LITREF(lit_178),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YevalSg2cYmangle_binding);
  if (T124 != YPfalse) {
    T123 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_mangle_binding_80;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YevalSg2cYmangle_binding,T122);
  T126 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_81 = YPmet(FUNCODEREF(fun_mangle_binding_81),LITREF(lit_178),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YevalSg2cYmangle_binding);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_mangle_binding_81;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalSg2cYmangle_binding,T127);
  lit_182 = YPPsym((P)"x-1843");
  lit_183 = YPPsym((P)"for-commas");
  lit_184 = YPPsym((P)"let");
  lit_185 = YPPsym((P)"for");
  lit_186 = YPPsym((P)"first?");
  lit_187 = YPPsym((P)"first-then");
  lit_188 = YPPsym((P)"op");
  lit_189 = YPPsym((P)"unless");
  lit_190 = YPPsym((P)"put");
  T133 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1843_82 = YPmet(FUNCODEREF(fun_x_1843_82),LITREF(lit_182),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T134 = fun_84;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T134);
  lit_191 = YPPsym((P)"x-1847");
  lit_192 = YPPsym((P)"between-parentheses");
  T137 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1847_85 = YPmet(FUNCODEREF(fun_x_1847_85),LITREF(lit_191),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T138 = fun_87;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T138);
  lit_193 = YPPsym((P)"x-1851");
  lit_194 = YPPsym((P)"between-parentheses-comma-separated");
  lit_195 = YPPsym((P)"forms");
  lit_196 = YPPsym((P)"body");
  T142 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1851_88 = YPmet(FUNCODEREF(fun_x_1851_88),LITREF(lit_193),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(3,LITREF(lit_195),LITREF(lit_196),LITREF(lit_186)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_133),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T143 = fun_91;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T143);
  lit_197 = YPPsym((P)"gen-result");
  lit_198 = YPPsym((P)"d");
  lit_199 = YPsb((P)"T");
  lit_200 = YPsb((P)" = ");
  T144 = YPsig(YPPlist(3,LITREF(lit_52),LITREF(lit_198),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_92 = YPmet(FUNCODEREF(fun_gen_result_92),LITREF(lit_197),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSg2cYgen_result);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSg2cYgen_result);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_gen_result_92;
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSg2cYgen_result,T145);
  lit_201 = YPPsym((P)"gen-depth");
  lit_202 = YPPsym((P)"x-1854");
  lit_203 = YPPsym((P)"x-1853");
  lit_204 = YPsb((P)"  ");
  T150 = YPsig(YPPlist(1,LITREF(lit_203)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1854_93 = YPmet(FUNCODEREF(fun_x_1854_93),LITREF(lit_202),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(2,LITREF(lit_198),LITREF(lit_61)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_94 = YPmet(FUNCODEREF(fun_gen_depth_94),LITREF(lit_201),T149,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSg2cYgen_depth);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSg2cYgen_depth);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_gen_depth_94;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSg2cYgen_depth,T151);
  lit_205 = YPPsym((P)"x-1858");
  lit_206 = YPPsym((P)"with-statement");
  lit_207 = YPPsym((P)"seq");
  lit_208 = YPPsym((P)"puts");
  lit_209 = YPsb((P)";\n");
  T157 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1858_95 = YPmet(FUNCODEREF(fun_x_1858_95),LITREF(lit_205),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T158 = fun_97;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T158);
  lit_210 = YPPsym((P)"x-1862");
  lit_211 = YPPsym((P)"with-expression");
  T161 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1862_98 = YPmet(FUNCODEREF(fun_x_1862_98),LITREF(lit_210),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T162 = fun_100;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T162);
  lit_212 = YPPsym((P)"x-1866");
  lit_213 = YPPsym((P)"with-used-expression");
  lit_214 = YPPsym((P)"when");
  lit_215 = YPPsym((P)"program-register");
  T165 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1866_101 = YPmet(FUNCODEREF(fun_x_1866_101),LITREF(lit_212),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T166 = fun_103;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T166);
  lit_216 = YPPsym((P)"generate-quotation-forwards");
  lit_217 = YPPsym((P)"qb*");
  lit_218 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_219 = YPPsym((P)"x-1868");
  lit_220 = YPPsym((P)"x-1867");
  lit_221 = YPsb((P)"DEFLIT(lit_");
  lit_222 = YPsb((P)");\n");
  T168 = YPsig(YPPlist(1,LITREF(lit_220)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1868_104 = YPmet(FUNCODEREF(fun_x_1868_104),LITREF(lit_219),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_217)),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_105 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_105),LITREF(lit_216),T167,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSg2cYgenerate_quotation_forwards);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSg2cYgenerate_quotation_forwards);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_generate_quotation_forwards_105;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T169);
  lit_223 = YPPsym((P)"generate-quotations");
  lit_224 = YPPsym((P)"x-1871");
  lit_225 = YPPsym((P)"x-1870");
  lit_226 = YPsb((P)"lit_");
  lit_227 = YPsb((P)" = ");
  T174 = YPsig(YPPlist(1,LITREF(lit_225)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1871_106 = YPmet(FUNCODEREF(fun_x_1871_106),LITREF(lit_224),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_217)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_107 = YPmet(FUNCODEREF(fun_generate_quotations_107),LITREF(lit_223),T173,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSg2cYgenerate_quotations);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSg2cYgenerate_quotations);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_generate_quotations_107;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSg2cYgenerate_quotations,T175);
  lit_228 = YPPsym((P)"false-name");
  lit_229 = YPsb((P)"%false");
  T179 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_108 = YPmet(FUNCODEREF(fun_false_name_108),LITREF(lit_228),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSg2cYfalse_name);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSg2cYfalse_name);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_false_name_108;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSg2cYfalse_name,T180);
  lit_230 = YPPsym((P)"generate-quotation");
  lit_231 = YPPsym((P)"qb");
  lit_232 = YPsb((P)"%true");
  lit_233 = YPsb((P)"%false");
  T184 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_231)),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_109 = YPmet(FUNCODEREF(fun_generate_quotation_109),LITREF(lit_230),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_generate_quotation_109;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSg2cYgenerate_quotation,T185);
  lit_234 = YPsb((P)"nil");
  T190 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T189 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_231)),YPPlist(2,VARREF(YLanyG),T190),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_110 = YPmet(FUNCODEREF(fun_generate_quotation_110),LITREF(lit_230),T189,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T193 != YPfalse) {
    T192 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_generate_quotation_110;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YevalSg2cYgenerate_quotation,T191);
  T196 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T196,ENVNUL,PNUL,YPfalse);
  T195 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_231)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPmet(FUNCODEREF(fun_generate_quotation_112),LITREF(lit_230),T195,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_generate_quotation_112;
  T197 = CALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSg2cYgenerate_quotation,T197);
  lit_235 = YPsb((P)"%int");
  lit_236 = YPsb((P)"((P)");
  lit_237 = YPsb((P)")");
  T201 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPmet(FUNCODEREF(fun_generate_quotation_113),LITREF(lit_230),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_generate_quotation_113;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSg2cYgenerate_quotation,T202);
  lit_238 = YPsb((P)"%chr");
  lit_239 = YPsb((P)"((P)");
  lit_240 = YPsb((P)")");
  T206 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_230),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_generate_quotation_114;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSg2cYgenerate_quotation,T207);
  lit_241 = YPPsym((P)"float-to-c-string");
  lit_242 = YPPsym((P)"o");
  lit_243 = YPPsym((P)"done");
  T213 = YPsig(YPPlist(1,LITREF(lit_134)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_115 = YPmet(FUNCODEREF(fun_loop_115),LITREF(lit_133),T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(YPPlist(1,LITREF(lit_243)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(YPPlist(1,LITREF(lit_242)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_117 = YPmet(FUNCODEREF(fun_float_to_c_string_117),LITREF(lit_241),T211,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSg2cYfloat_to_c_string);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSg2cYfloat_to_c_string);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_float_to_c_string_117;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSg2cYfloat_to_c_string,T214);
  lit_244 = YPsb((P)"%flo");
  lit_245 = YPsb((P)"(FLOINT(");
  lit_246 = YPsb((P)"))");
  T218 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_118 = YPmet(FUNCODEREF(fun_generate_quotation_118),LITREF(lit_230),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_generate_quotation_118;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YevalSg2cYgenerate_quotation,T219);
  lit_247 = YPsb((P)"%sb");
  lit_248 = YPsb((P)"((P)\"");
  lit_249 = YPsb((P)"\")");
  T223 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_119 = YPmet(FUNCODEREF(fun_generate_quotation_119),LITREF(lit_230),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T226 != YPfalse) {
    T225 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_generate_quotation_119;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YevalSg2cYgenerate_quotation,T224);
  lit_250 = YPsb((P)"CALLN(1, ");
  lit_251 = YPsb((P)"vec");
  lit_252 = YPsb((P)", ");
  lit_253 = YPPsym((P)"x-1881");
  lit_254 = YPPsym((P)"x-1880");
  lit_255 = YPsb((P)", ");
  lit_256 = YPsb((P)")");
  T229 = YPsig(YPPlist(1,LITREF(lit_254)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1881_120 = YPmet(FUNCODEREF(fun_x_1881_120),LITREF(lit_253),T229,ENVNUL,PNUL,YPfalse);
  T228 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_121 = YPmet(FUNCODEREF(fun_generate_quotation_121),LITREF(lit_230),T228,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T232 != YPfalse) {
    T231 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_generate_quotation_121;
  T230 = CALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YevalSg2cYgenerate_quotation,T230);
  lit_257 = YPsb((P)"CALLN(1, ");
  lit_258 = YPsb((P)"tup");
  lit_259 = YPsb((P)", ");
  lit_260 = YPPsym((P)"x-1884");
  lit_261 = YPPsym((P)"x-1883");
  lit_262 = YPsb((P)", ");
  lit_263 = YPsb((P)")");
  T235 = YPsig(YPPlist(1,LITREF(lit_261)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1884_122 = YPmet(FUNCODEREF(fun_x_1884_122),LITREF(lit_260),T235,ENVNUL,PNUL,YPfalse);
  T234 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_123 = YPmet(FUNCODEREF(fun_generate_quotation_123),LITREF(lit_230),T234,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T238 != YPfalse) {
    T237 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_generate_quotation_123;
  T236 = CALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(YevalSg2cYgenerate_quotation,T236);
  lit_264 = YPsb((P)"%%sym");
  lit_265 = YPsb((P)"((P)\"");
  lit_266 = YPsb((P)"\")");
  T240 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_124 = YPmet(FUNCODEREF(fun_generate_quotation_124),LITREF(lit_230),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T243 != YPfalse) {
    T242 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_generate_quotation_124;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(YevalSg2cYgenerate_quotation,T241);
  lit_267 = YPPsym((P)"binding->c");
  T245 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_267),T245,ENVNUL,PNUL,YPfalse);
  T246 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T246);
  lit_268 = YPPsym((P)"reference->c");
  lit_269 = YPPsym((P)"v");
  T248 = YPsig(YPPlist(2,LITREF(lit_269),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T247 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_268),T248,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T247);
  T249 = YPsig(YPPlist(2,LITREF(lit_269),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_126 = YPmet(FUNCODEREF(fun_reference_Gc_126),LITREF(lit_268),T249,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YevalSg2cYreference_Gc);
  if (T252 != YPfalse) {
    T251 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_reference_Gc_126;
  T250 = CALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YevalSg2cYreference_Gc,T250);
  lit_270 = YPsb((P)"LITREF");
  lit_271 = YPsb((P)"VARREF");
  T254 = YPsig(YPPlist(2,LITREF(lit_269),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_127 = YPmet(FUNCODEREF(fun_reference_Gc_127),LITREF(lit_268),T254,ENVNUL,PNUL,YPfalse);
  T257 = BOUNDP(YevalSg2cYreference_Gc);
  if (T257 != YPfalse) {
    T256 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_reference_Gc_127;
  T255 = CALL2(1,VARREF(YPdefine_method),T256,T258);
  VARSET(YevalSg2cYreference_Gc,T255);
  lit_272 = YPPsym((P)"to-c");
  lit_273 = YPPsym((P)"f");
  T260 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T259 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_272),T260,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T259);
  T261 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_128 = YPmet(FUNCODEREF(fun_to_c_128),LITREF(lit_272),T261,ENVNUL,PNUL,YPfalse);
  T264 = BOUNDP(YevalSg2cYto_c);
  if (T264 != YPfalse) {
    T263 = VARREF(YevalSg2cYto_c);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_to_c_128;
  T262 = CALL2(1,VARREF(YPdefine_method),T263,T265);
  VARSET(YevalSg2cYto_c,T262);
  T266 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_129 = YPmet(FUNCODEREF(fun_to_c_129),LITREF(lit_272),T266,ENVNUL,PNUL,YPfalse);
  T269 = BOUNDP(YevalSg2cYto_c);
  if (T269 != YPfalse) {
    T268 = VARREF(YevalSg2cYto_c);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_to_c_129;
  T267 = CALL2(1,VARREF(YPdefine_method),T268,T270);
  VARSET(YevalSg2cYto_c,T267);
  lit_274 = YPPsym((P)"gen-ref");
  T271 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_130 = YPmet(FUNCODEREF(fun_gen_ref_130),LITREF(lit_274),T271,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YevalSg2cYgen_ref);
  if (T274 != YPfalse) {
    T273 = VARREF(YevalSg2cYgen_ref);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_gen_ref_130;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  VARSET(YevalSg2cYgen_ref,T272);
  lit_275 = YPsb((P)"FREEREF");
  T278 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T277 = fun_gen_ref_131 = YPmet(FUNCODEREF(fun_gen_ref_131),LITREF(lit_274),T278,ENVNUL,PNUL,YPfalse);
  T282 = BOUNDP(YevalSg2cYgen_ref);
  if (T282 != YPfalse) {
    T281 = VARREF(YevalSg2cYgen_ref);
  } else {
    T281 = YPfalse;
  }
  T283 = fun_gen_ref_131;
  T280 = CALL2(1,VARREF(YPdefine_method),T281,T283);
  T279 = VARSET(YevalSg2cYgen_ref,T280);
  T276 = T279;
  return T276;
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
  P T304,T305,T306,T307,T308;
loop:
  lit_276 = YPsb((P)"T");
  lit_277 = YPsb((P)"T_1");
  T0 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_132 = YPmet(FUNCODEREF(fun_gen_ref_132),LITREF(lit_274),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_132;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_278 = YPsb((P)"(P)");
  T5 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_133 = YPmet(FUNCODEREF(fun_gen_ref_133),LITREF(lit_274),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_133;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSg2cYgen_ref,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_134 = YPmet(FUNCODEREF(fun_gen_ref_134),LITREF(lit_274),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSg2cYgen_ref);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSg2cYgen_ref);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_gen_ref_134;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSg2cYgen_ref,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_135 = YPmet(FUNCODEREF(fun_gen_ref_135),LITREF(lit_274),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSg2cYgen_ref);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSg2cYgen_ref);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_gen_ref_135;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSg2cYgen_ref,T16);
  lit_279 = YPsb((P)"VARSET(");
  lit_280 = YPsb((P)",");
  lit_281 = YPsb((P)")");
  T20 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPmet(FUNCODEREF(fun_to_c_136),LITREF(lit_272),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSg2cYto_c);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYto_c);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_to_c_136;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYto_c,T21);
  lit_282 = YPsb((P)"BOUNDP");
  T25 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_137 = YPmet(FUNCODEREF(fun_to_c_137),LITREF(lit_272),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_137;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYto_c,T26);
  lit_283 = YPsb((P)"BOXVAL");
  T30 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_138 = YPmet(FUNCODEREF(fun_to_c_138),LITREF(lit_272),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_138;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSg2cYto_c,T31);
  lit_284 = YPsb((P)"BOXVAL");
  lit_285 = YPsb((P)" = ");
  T35 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPmet(FUNCODEREF(fun_to_c_139),LITREF(lit_272),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_139;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSg2cYto_c,T36);
  lit_286 = YPsb((P)" = BOXFAB");
  T40 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_272),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSg2cYto_c);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSg2cYto_c);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_to_c_140;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSg2cYto_c,T41);
  lit_287 = YPsb((P)"if (");
  lit_288 = YPsb((P)" != ");
  lit_289 = YPsb((P)") {\n");
  lit_290 = YPsb((P)"} else {\n");
  lit_291 = YPsb((P)"}\n");
  T45 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_141 = YPmet(FUNCODEREF(fun_to_c_141),LITREF(lit_272),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSg2cYto_c);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSg2cYto_c);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_to_c_141;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSg2cYto_c,T46);
  T51 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_143 = YPmet(FUNCODEREF(fun_to_c_143),LITREF(lit_272),T50,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSg2cYto_c);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSg2cYto_c);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_to_c_143;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSg2cYto_c,T52);
  lit_292 = YPPsym((P)"generate-self-recursive-call");
  lit_293 = YPPsym((P)"x-1897");
  lit_294 = YPPsym((P)"x-1896");
  lit_295 = YPPsym((P)"x-1900");
  lit_296 = YPPsym((P)"x-1899");
  lit_297 = YPPsym((P)"x-1898");
  lit_298 = YPsb((P)"a");
  lit_299 = YPsb((P)" = ");
  lit_300 = YPPsym((P)"x-1904");
  lit_301 = YPPsym((P)"x-1903");
  lit_302 = YPPsym((P)"x-1902");
  lit_303 = YPsb((P)" = a");
  lit_304 = YPsb((P)"goto loop");
  T59 = YPsig(YPPlist(1,LITREF(lit_294)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1897_144 = YPmet(FUNCODEREF(fun_x_1897_144),LITREF(lit_293),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(2,LITREF(lit_296),LITREF(lit_297)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1900_145 = YPmet(FUNCODEREF(fun_x_1900_145),LITREF(lit_295),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(2,LITREF(lit_301),LITREF(lit_302)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1904_146 = YPmet(FUNCODEREF(fun_x_1904_146),LITREF(lit_300),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_147 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_147),LITREF(lit_292),T56,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YevalSg2cYgenerate_self_recursive_call);
  if (T62 != YPfalse) {
    T61 = VARREF(YevalSg2cYgenerate_self_recursive_call);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_generate_self_recursive_call_147;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YevalSg2cYgenerate_self_recursive_call,T60);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_305 = YPPsym((P)"x-1907");
  lit_306 = YPPsym((P)"x-1906");
  lit_307 = YPsb((P)"CALL");
  lit_308 = YPsb((P)"N");
  lit_309 = YPsb((P)"0,");
  lit_310 = YPsb((P)"1,");
  lit_311 = YPsb((P)",");
  lit_312 = YPPsym((P)"x-1912");
  lit_313 = YPPsym((P)"x-1911");
  T66 = YPsig(YPPlist(1,LITREF(lit_306)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1907_148 = YPmet(FUNCODEREF(fun_x_1907_148),LITREF(lit_305),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_313)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1912_149 = YPmet(FUNCODEREF(fun_x_1912_149),LITREF(lit_312),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_272),T64,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSg2cYto_c);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSg2cYto_c);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_to_c_150;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSg2cYto_c,T67);
  lit_314 = YPPsym((P)"x-1916");
  lit_315 = YPPsym((P)"x-1915");
  lit_316 = YPPsym((P)"x-1914");
  T74 = YPsig(YPPlist(2,LITREF(lit_315),LITREF(lit_316)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1916_151 = YPmet(FUNCODEREF(fun_x_1916_151),LITREF(lit_314),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_152 = YPmet(FUNCODEREF(fun_152),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_272),T71,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSg2cYto_c);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSg2cYto_c);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_to_c_154;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSg2cYto_c,T75);
  lit_317 = YPPsym((P)"x-1920");
  lit_318 = YPPsym((P)"x-1919");
  lit_319 = YPPsym((P)"x-1918");
  lit_320 = YPPsym((P)"x-1917");
  lit_321 = YPsb((P)"check_type");
  lit_322 = YPsb((P)" = ");
  T80 = YPsig(YPPlist(3,LITREF(lit_318),LITREF(lit_319),LITREF(lit_320)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1920_155 = YPmet(FUNCODEREF(fun_x_1920_155),LITREF(lit_317),T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_156 = YPmet(FUNCODEREF(fun_to_c_156),LITREF(lit_272),T79,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSg2cYto_c);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSg2cYto_c);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_to_c_156;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSg2cYto_c,T81);
  lit_323 = YPPsym((P)"x-1924");
  lit_324 = YPPsym((P)"x-1923");
  lit_325 = YPPsym((P)"x-1922");
  lit_326 = YPsb((P)" = ");
  T86 = YPsig(YPPlist(2,LITREF(lit_324),LITREF(lit_325)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1924_157 = YPmet(FUNCODEREF(fun_x_1924_157),LITREF(lit_323),T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_272),T85,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YevalSg2cYto_c);
  if (T89 != YPfalse) {
    T88 = VARREF(YevalSg2cYto_c);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_to_c_158;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YevalSg2cYto_c,T87);
  lit_327 = YPsb((P)"with_exit");
  T91 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_159 = YPmet(FUNCODEREF(fun_to_c_159),LITREF(lit_272),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSg2cYto_c);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSg2cYto_c);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_to_c_159;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSg2cYto_c,T92);
  lit_328 = YPsb((P)"with_cleanup");
  T96 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_160 = YPmet(FUNCODEREF(fun_to_c_160),LITREF(lit_272),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_160;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYto_c,T97);
  lit_329 = YPsb((P)"CALLN");
  lit_330 = YPsb((P)"1");
  lit_331 = YPsb((P)"%with-monitor");
  lit_332 = YPsb((P)"5");
  T101 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_161 = YPmet(FUNCODEREF(fun_to_c_161),LITREF(lit_272),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYto_c);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYto_c);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_to_c_161;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYto_c,T102);
  lit_333 = YPPsym((P)"x-1929");
  lit_334 = YPPsym((P)"x-1928");
  lit_335 = YPsb((P)"(P)");
  lit_336 = YPPsym((P)"x-1935");
  lit_337 = YPPsym((P)"x-1934");
  lit_338 = YPPsym((P)"x-1933");
  T110 = YPsig(YPPlist(1,LITREF(lit_334)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1929_162 = YPmet(FUNCODEREF(fun_x_1929_162),LITREF(lit_333),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_337),LITREF(lit_338)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1935_163 = YPmet(FUNCODEREF(fun_x_1935_163),LITREF(lit_336),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_166 = YPmet(FUNCODEREF(fun_to_c_166),LITREF(lit_272),T106,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSg2cYto_c);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSg2cYto_c);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_to_c_166;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSg2cYto_c,T111);
  lit_339 = YPsb((P)"FUNFAB");
  lit_340 = YPsb((P)",");
  lit_341 = YPPsym((P)"x-1939");
  lit_342 = YPPsym((P)"x-1938");
  T117 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_342)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1939_168 = YPmet(FUNCODEREF(fun_x_1939_168),LITREF(lit_341),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPmet(FUNCODEREF(fun_to_c_169),LITREF(lit_272),T115,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSg2cYto_c);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSg2cYto_c);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_to_c_169;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSg2cYto_c,T118);
  lit_343 = YPPsym((P)"funshell-to-c");
  lit_344 = YPPsym((P)"b");
  lit_345 = YPsb((P)"FUNSHELL");
  T122 = YPsig(YPPlist(5,LITREF(lit_344),LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_170 = YPmet(FUNCODEREF(fun_funshell_to_c_170),LITREF(lit_343),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYfunshell_to_c);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYfunshell_to_c);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_funshell_to_c_170;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYfunshell_to_c,T123);
  lit_346 = YPPsym((P)"funinit-to-c");
  lit_347 = YPsb((P)"FUNINIT");
  lit_348 = YPsb((P)", ");
  lit_349 = YPPsym((P)"x-1946");
  lit_350 = YPPsym((P)"x-1945");
  T129 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_350)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1946_172 = YPmet(FUNCODEREF(fun_x_1946_172),LITREF(lit_349),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(5,LITREF(lit_344),LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_173 = YPmet(FUNCODEREF(fun_funinit_to_c_173),LITREF(lit_346),T127,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSg2cYfuninit_to_c);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSg2cYfuninit_to_c);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_funinit_to_c_173;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSg2cYfuninit_to_c,T130);
  lit_351 = YPsb((P)"%macro");
  T134 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_174 = YPmet(FUNCODEREF(fun_to_c_174),LITREF(lit_272),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSg2cYto_c);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSg2cYto_c);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_to_c_174;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSg2cYto_c,T135);
  lit_352 = YPPsym((P)"out-list-builder");
  lit_353 = YPPsym((P)"elts");
  lit_354 = YPsb((P)"nil");
  lit_355 = YPsb((P)"%%list");
  lit_356 = YPPsym((P)"x-1951");
  lit_357 = YPPsym((P)"x-1950");
  T140 = YPsig(YPPlist(1,LITREF(lit_357)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1951_175 = YPmet(FUNCODEREF(fun_x_1951_175),LITREF(lit_356),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(3,LITREF(lit_273),LITREF(lit_61),LITREF(lit_353)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_176 = YPmet(FUNCODEREF(fun_out_list_builder_176),LITREF(lit_352),T139,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSg2cYout_list_builder);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSg2cYout_list_builder);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_out_list_builder_176;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSg2cYout_list_builder,T141);
  lit_358 = YPPsym((P)"gen-fab-list");
  lit_359 = YPPsym((P)"refs");
  T146 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_359)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_178 = YPmet(FUNCODEREF(fun_gen_fab_list_178),LITREF(lit_358),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSg2cYgen_fab_list);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSg2cYgen_fab_list);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_gen_fab_list_178;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSg2cYgen_fab_list,T147);
  lit_360 = YPPsym((P)"generate-function-specs");
  lit_361 = YPPsym((P)"sig");
  T151 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_361)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_179 = YPmet(FUNCODEREF(fun_generate_function_specs_179),LITREF(lit_360),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgenerate_function_specs);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgenerate_function_specs);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_generate_function_specs_179;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgenerate_function_specs,T152);
  lit_362 = YPsb((P)"%sig");
  lit_363 = YPsb((P)"nil");
  T157 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_181 = YPmet(FUNCODEREF(fun_to_c_181),LITREF(lit_272),T156,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSg2cYto_c);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSg2cYto_c);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_to_c_181;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSg2cYto_c,T158);
  lit_364 = YPsb((P)"%gen");
  lit_365 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_366 = YPsb((P)"nil");
  lit_367 = YPsb((P)"%false");
  lit_368 = YPsb((P)"%false");
  lit_369 = YPsb((P)"%false");
  T162 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_182 = YPmet(FUNCODEREF(fun_to_c_182),LITREF(lit_272),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSg2cYto_c);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSg2cYto_c);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_to_c_182;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSg2cYto_c,T163);
  lit_370 = YPPsym((P)"generate-function-forwards");
  lit_371 = YPPsym((P)"definitions");
  lit_372 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_373 = YPPsym((P)"x-1955");
  lit_374 = YPPsym((P)"x-1954");
  T168 = YPsig(YPPlist(1,LITREF(lit_374)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1955_183 = YPmet(FUNCODEREF(fun_x_1955_183),LITREF(lit_373),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_371)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_184 = YPmet(FUNCODEREF(fun_generate_function_forwards_184),LITREF(lit_370),T167,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YevalSg2cYgenerate_function_forwards);
  if (T171 != YPfalse) {
    T170 = VARREF(YevalSg2cYgenerate_function_forwards);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_generate_function_forwards_184;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YevalSg2cYgenerate_function_forwards,T169);
  lit_375 = YPPsym((P)"generate-function-forward");
  lit_376 = YPPsym((P)"defn");
  lit_377 = YPsb((P)"static");
  lit_378 = YPsb((P)"extern");
  lit_379 = YPsb((P)" P ");
  lit_380 = YPsb((P)" (");
  lit_381 = YPPsym((P)"x-1960");
  lit_382 = YPPsym((P)"x-1959");
  lit_383 = YPPsym((P)"x-1958");
  lit_384 = YPsb((P)"P");
  lit_385 = YPsb((P)");\n");
  T176 = YPsig(YPPlist(2,LITREF(lit_382),LITREF(lit_383)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1960_185 = YPmet(FUNCODEREF(fun_x_1960_185),LITREF(lit_381),T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_376)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_188 = YPmet(FUNCODEREF(fun_generate_function_forward_188),LITREF(lit_375),T173,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_generate_function_forward_188;
  T177 = CALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSg2cYgenerate_function_forward,T177);
  lit_386 = YPPsym((P)"generate-function-binding");
  lit_387 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_388 = YPsb((P)"fun_");
  lit_389 = YPsb((P)"fun_");
  lit_390 = YPsb((P)"_");
  T181 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_376)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_189 = YPmet(FUNCODEREF(fun_generate_function_binding_189),LITREF(lit_386),T181,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSg2cYgenerate_function_binding);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSg2cYgenerate_function_binding);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_generate_function_binding_189;
  T182 = CALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSg2cYgenerate_function_binding,T182);
  lit_391 = YPsb((P)"FUNFOR(");
  lit_392 = YPsb((P)"LOCFOR(");
  lit_393 = YPsb((P)");\n");
  T186 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_376)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_190 = YPmet(FUNCODEREF(fun_generate_function_forward_190),LITREF(lit_375),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_generate_function_forward_190;
  T187 = CALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSg2cYgenerate_function_forward,T187);
  lit_394 = YPPsym((P)"generate-function-bodies");
  lit_395 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_396 = YPPsym((P)"def");
  T192 = YPsig(YPPlist(1,LITREF(lit_396)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T192,ENVNUL,PNUL,YPfalse);
  T191 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_371)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_192 = YPmet(FUNCODEREF(fun_generate_function_bodies_192),LITREF(lit_394),T191,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YevalSg2cYgenerate_function_bodies);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSg2cYgenerate_function_bodies);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_generate_function_bodies_192;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSg2cYgenerate_function_bodies,T193);
  lit_397 = YPPsym((P)"generate-functions");
  T198 = YPsig(YPPlist(1,LITREF(lit_396)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(4,LITREF(lit_371),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_194 = YPmet(FUNCODEREF(fun_generate_functions_194),LITREF(lit_397),T197,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSg2cYgenerate_functions);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSg2cYgenerate_functions);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_generate_functions_194;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSg2cYgenerate_functions,T199);
  lit_398 = YPPsym((P)"generate-closure-structure");
  lit_399 = YPPsym((P)"definition");
  lit_400 = YPsb((P)" = ");
  lit_401 = YPsb((P)"%met");
  lit_402 = YPsb((P)"ENVNUL");
  lit_403 = YPsb((P)"PNUL");
  T203 = YPsig(YPPlist(4,LITREF(lit_399),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_195 = YPmet(FUNCODEREF(fun_generate_closure_structure_195),LITREF(lit_398),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSg2cYgenerate_closure_structure);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSg2cYgenerate_closure_structure);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_closure_structure_195;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSg2cYgenerate_closure_structure,T204);
  lit_404 = YPPsym((P)"generate-function-body-reference");
  lit_405 = YPsb((P)"FUNCODEREF(");
  lit_406 = YPsb((P)")");
  T208 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_399)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_196 = YPmet(FUNCODEREF(fun_generate_function_body_reference_196),LITREF(lit_404),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSg2cYgenerate_function_body_reference);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSg2cYgenerate_function_body_reference);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_generate_function_body_reference_196;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSg2cYgenerate_function_body_reference,T209);
  lit_407 = YPPsym((P)"generate-shadow-args");
  lit_408 = YPPsym((P)"bindings");
  lit_409 = YPsb((P)"P ");
  lit_410 = YPPsym((P)"x-1969");
  lit_411 = YPPsym((P)"x-1968");
  lit_412 = YPPsym((P)"x-1967");
  lit_413 = YPPsym((P)"x-1966");
  lit_414 = YPsb((P)"a");
  T216 = YPsig(YPPlist(3,LITREF(lit_411),LITREF(lit_412),LITREF(lit_413)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1969_197 = YPmet(FUNCODEREF(fun_x_1969_197),LITREF(lit_410),T216,ENVNUL,PNUL,YPfalse);
  T215 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T215,ENVNUL,PNUL,YPfalse);
  T214 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(2,LITREF(lit_408),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_200 = YPmet(FUNCODEREF(fun_generate_shadow_args_200),LITREF(lit_407),T213,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YevalSg2cYgenerate_shadow_args);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSg2cYgenerate_shadow_args);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_generate_shadow_args_200;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YevalSg2cYgenerate_shadow_args,T217);
  lit_415 = YPPsym((P)"generate-return");
  lit_416 = YPsb((P)"return ");
  T221 = YPsig(YPPlist(3,LITREF(lit_376),LITREF(lit_198),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_201 = YPmet(FUNCODEREF(fun_generate_return_201),LITREF(lit_415),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YevalSg2cYgenerate_return);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_return_201;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSg2cYgenerate_return,T222);
  lit_417 = YPsb((P)"RET");
  T226 = YPsig(YPPlist(3,LITREF(lit_376),LITREF(lit_198),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_202 = YPmet(FUNCODEREF(fun_generate_return_202),LITREF(lit_415),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YevalSg2cYgenerate_return);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_generate_return_202;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSg2cYgenerate_return,T227);
  lit_418 = YPPsym((P)"primitive-inlinable?");
  lit_419 = YPPlist(45,YPPsym((P)"%tag-bits"),YPPsym((P)"%tag"),YPPsym((P)"%untag"),YPPsym((P)"%class-of"),YPPsym((P)"%int"),YPPsym((P)"%ib"),YPPsym((P)"%iu"),YPPsym((P)"%chr"),YPPsym((P)"%cb"),YPPsym((P)"%cu"),YPPsym((P)"%loc"),YPPsym((P)"%lb"),YPPsym((P)"%lu"),YPPsym((P)"%empty?"),YPPsym((P)"%head"),YPPsym((P)"%tail"),YPPsym((P)"@empty?"),YPPsym((P)"@head"),YPPsym((P)"@tail"),YPPsym((P)"@=="),YPPsym((P)"@="),YPPsym((P)"@+"),YPPsym((P)"@<"),YPPsym((P)"%new"),YPPsym((P)"%gen-cache-arg-pos"),YPPsym((P)"%gen-cache-singletons"),YPPsym((P)"%gen-cache-classes"),YPPsym((P)"%gen-cache-missable?"),YPPsym((P)"%class-type-cache"),YPPsym((P)"%class-type-cache-setter"),YPPsym((P)"@telt"),YPPsym((P)"@telt-setter"),YPPsym((P)"@tlen"),YPPsym((P)"@oelt"),YPPsym((P)"@oelt-setter"),YPPsym((P)"@olen"),YPPsym((P)"%opts-location"),YPPsym((P)"%opts-count"),YPPsym((P)"%class-ancestors"),YPPsym((P)"@class-in?"),YPPsym((P)"@subclass?"),YPPsym((P)"prop-value-at"),YPPsym((P)"prop-value-at-setter"),YPPsym((P)"gen-lookup"),YPPsym((P)"gen-lookup-1-using"));
  T231 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_203 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_203),LITREF(lit_418),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YevalSg2cYprimitive_inlinableQ);
  if (T234 != YPfalse) {
    T233 = VARREF(YevalSg2cYprimitive_inlinableQ);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_primitive_inlinableQ_203;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YevalSg2cYprimitive_inlinableQ,T232);
  lit_420 = YPPsym((P)"generate-function-code");
  lit_421 = YPsb((P)"\n");
  lit_422 = YPsb((P)"static ");
  lit_423 = YPsb((P)"");
  lit_424 = YPsb((P)"INLINE ");
  lit_425 = YPsb((P)"P ");
  lit_426 = YPPsym((P)"x-1977");
  lit_427 = YPPsym((P)"x-1976");
  lit_428 = YPPsym((P)"x-1975");
  lit_429 = YPsb((P)"P ");
  lit_430 = YPsb((P)" {\n");
  lit_431 = YPsb((P)"loop:\n");
  lit_432 = YPsb((P)"}\n");
  T239 = YPsig(YPPlist(2,LITREF(lit_427),LITREF(lit_428)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1977_204 = YPmet(FUNCODEREF(fun_x_1977_204),LITREF(lit_426),T239,ENVNUL,PNUL,YPfalse);
  T238 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T238,ENVNUL,PNUL,YPfalse);
  T237 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T237,ENVNUL,PNUL,YPfalse);
  T236 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_207 = YPmet(FUNCODEREF(fun_generate_function_code_207),LITREF(lit_420),T236,ENVNUL,PNUL,YPfalse);
  T242 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T242 != YPfalse) {
    T241 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_generate_function_code_207;
  T240 = CALL2(1,VARREF(YPdefine_method),T241,T243);
  VARSET(YevalSg2cYgenerate_function_code,T240);
  lit_433 = YPPsym((P)"dispatcher?");
  lit_434 = YPsb((P)"%dispatch");
  lit_435 = YPsb((P)"-dispatch");
  lit_436 = YPsb((P)"-dispatch");
  T244 = YPsig(YPPlist(1,LITREF(lit_399)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_208 = YPmet(FUNCODEREF(fun_dispatcherQ_208),LITREF(lit_433),T244,ENVNUL,PNUL,YPfalse);
  T247 = BOUNDP(YevalSg2cYdispatcherQ);
  if (T247 != YPfalse) {
    T246 = VARREF(YevalSg2cYdispatcherQ);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_dispatcherQ_208;
  T245 = CALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(YevalSg2cYdispatcherQ,T245);
  lit_437 = YPsb((P)"\nFUNCODEDEF(");
  lit_438 = YPsb((P)") {\n");
  lit_439 = YPsb((P)"P ");
  lit_440 = YPPsym((P)"x-1981");
  lit_441 = YPPsym((P)"x-1980");
  lit_442 = YPPsym((P)"x-1979");
  lit_443 = YPsb((P)"LINK_STACK();\n");
  lit_444 = YPsb((P)"NARGS(");
  lit_445 = YPsb((P)"ARG(");
  lit_446 = YPsb((P)", ");
  lit_447 = YPsb((P)")");
  lit_448 = YPsb((P)"loop:\n");
  lit_449 = YPsb((P)"UNLINK_STACK();\n");
  lit_450 = YPsb((P)"}\n");
  T253 = YPsig(YPPlist(2,LITREF(lit_441),LITREF(lit_442)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1981_209 = YPmet(FUNCODEREF(fun_x_1981_209),LITREF(lit_440),T253,ENVNUL,PNUL,YPfalse);
  T252 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T252,ENVNUL,PNUL,YPfalse);
  T251 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T251,ENVNUL,PNUL,YPfalse);
  T250 = YPsig(YPPlist(1,LITREF(lit_344)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T250,ENVNUL,PNUL,YPfalse);
  T249 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_399)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_213 = YPmet(FUNCODEREF(fun_generate_function_code_213),LITREF(lit_420),T249,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T256 != YPfalse) {
    T255 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_generate_function_code_213;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YevalSg2cYgenerate_function_code,T254);
  lit_451 = YPPsym((P)"generate-local-temporaries");
  lit_452 = YPPsym((P)"temps");
  lit_453 = YPPsym((P)"x-1984");
  lit_454 = YPPsym((P)"x-1983");
  lit_455 = YPsb((P)"P ");
  T259 = YPsig(YPPlist(1,LITREF(lit_454)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1984_214 = YPmet(FUNCODEREF(fun_x_1984_214),LITREF(lit_453),T259,ENVNUL,PNUL,YPfalse);
  T258 = YPsig(YPPlist(2,LITREF(lit_452),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_215 = YPmet(FUNCODEREF(fun_generate_local_temporaries_215),LITREF(lit_451),T258,ENVNUL,PNUL,YPfalse);
  T262 = BOUNDP(YevalSg2cYgenerate_local_temporaries);
  if (T262 != YPfalse) {
    T261 = VARREF(YevalSg2cYgenerate_local_temporaries);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_generate_local_temporaries_215;
  T260 = CALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(YevalSg2cYgenerate_local_temporaries,T260);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_456 = YPPsym((P)"generate-registers");
  lit_457 = YPPsym((P)"regs");
  lit_458 = YPPsym((P)"next-line");
  lit_459 = YPPsym((P)"j");
  lit_460 = YPsb((P)"P ");
  lit_461 = YPPsym((P)"next-reg");
  lit_462 = YPsb((P)";\n");
  T266 = YPsig(YPPlist(2,LITREF(lit_459),LITREF(lit_134)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_216 = YPmet(FUNCODEREF(fun_next_reg_216),LITREF(lit_461),T266,ENVNUL,PNUL,YPfalse);
  T265 = YPsig(YPPlist(1,LITREF(lit_459)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_217 = YPmet(FUNCODEREF(fun_next_line_217),LITREF(lit_458),T265,ENVNUL,PNUL,YPfalse);
  T264 = YPsig(YPPlist(2,LITREF(lit_457),LITREF(lit_61)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_218 = YPmet(FUNCODEREF(fun_generate_registers_218),LITREF(lit_456),T264,ENVNUL,PNUL,YPfalse);
  T269 = BOUNDP(YevalSg2cYgenerate_registers);
  if (T269 != YPfalse) {
    T268 = VARREF(YevalSg2cYgenerate_registers);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_generate_registers_218;
  T267 = CALL2(1,VARREF(YPdefine_method),T268,T270);
  VARSET(YevalSg2cYgenerate_registers,T267);
  lit_463 = YPPsym((P)"module-info-name");
  lit_464 = YPsb((P)"module_info_");
  T271 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_219 = YPmet(FUNCODEREF(fun_module_info_name_219),LITREF(lit_463),T271,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YevalSg2cYmodule_info_name);
  if (T274 != YPfalse) {
    T273 = VARREF(YevalSg2cYmodule_info_name);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_module_info_name_219;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  VARSET(YevalSg2cYmodule_info_name,T272);
  lit_465 = YPPsym((P)"declare-imported-module-infos");
  lit_466 = YPPsym((P)"maybe-declare");
  lit_467 = YPsb((P)"extern MODULE_INFO ");
  lit_468 = YPsb((P)";\n");
  T278 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_220 = YPmet(FUNCODEREF(fun_maybe_declare_220),LITREF(lit_466),T278,ENVNUL,PNUL,YPfalse);
  T277 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T277,ENVNUL,PNUL,YPfalse);
  T276 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_465),T276,ENVNUL,PNUL,YPfalse);
  T279 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T279);
  lit_469 = YPPsym((P)"generate-module-info");
  lit_470 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_471 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_472 = YPPsym((P)"x-1987");
  lit_473 = YPPsym((P)"x-1986");
  lit_474 = YPsb((P)"  {&");
  lit_475 = YPsb((P)"},\n");
  lit_476 = YPsb((P)"  {NULL}\n};\n");
  lit_477 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_478 = YPPsym((P)"local-name");
  lit_479 = YPsb((P)"  {\"");
  lit_480 = YPsb((P)"\", &");
  lit_481 = YPsb((P)", \"");
  lit_482 = YPsb((P)"\"},\n");
  lit_483 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_484 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_485 = YPsb((P)"  {\"");
  lit_486 = YPsb((P)"\", &");
  lit_487 = YPsb((P)"},\n");
  lit_488 = YPsb((P)"  {\"");
  lit_489 = YPsb((P)"\", NULL},\n");
  lit_490 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_491 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_492 = YPPsym((P)"x-1993");
  lit_493 = YPPsym((P)"x-1992");
  lit_494 = YPsb((P)"  {\"");
  lit_495 = YPsb((P)"\", \"");
  lit_496 = YPsb((P)"\"},\n");
  lit_497 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_498 = YPsb((P)"\nextern MODULE_INFO ");
  lit_499 = YPsb((P)";\n");
  lit_500 = YPsb((P)"MODULE_INFO ");
  lit_501 = YPsb((P)" = {\n");
  lit_502 = YPsb((P)"  \"");
  lit_503 = YPsb((P)"\",\n");
  lit_504 = YPsb((P)"  NULL,\n");
  lit_505 = YPsb((P)"  use_infos,\n");
  lit_506 = YPsb((P)"  import_infos,\n");
  lit_507 = YPsb((P)"  binding_infos,\n");
  lit_508 = YPsb((P)"  export_infos,\n");
  lit_509 = YPsb((P)"};\n");
  T284 = YPsig(YPPlist(1,LITREF(lit_473)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1987_223 = YPmet(FUNCODEREF(fun_x_1987_223),LITREF(lit_472),T284,ENVNUL,PNUL,YPfalse);
  T283 = YPsig(YPPlist(2,LITREF(lit_478),LITREF(lit_95)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T283,ENVNUL,PNUL,YPfalse);
  T282 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T282,ENVNUL,PNUL,YPfalse);
  T281 = YPsig(YPPlist(1,LITREF(lit_493)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1993_226 = YPmet(FUNCODEREF(fun_x_1993_226),LITREF(lit_492),T281,ENVNUL,PNUL,YPfalse);
  T280 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_469),T280,ENVNUL,PNUL,YPfalse);
  T285 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T285);
  lit_510 = YPPsym((P)"module-init-name");
  lit_511 = YPsb((P)"load_module_");
  T286 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_228 = YPmet(FUNCODEREF(fun_module_init_name_228),LITREF(lit_510),T286,ENVNUL,PNUL,YPfalse);
  T289 = BOUNDP(YevalSg2cYmodule_init_name);
  if (T289 != YPfalse) {
    T288 = VARREF(YevalSg2cYmodule_init_name);
  } else {
    T288 = YPfalse;
  }
  T290 = fun_module_init_name_228;
  T287 = CALL2(1,VARREF(YPdefine_method),T288,T290);
  VARSET(YevalSg2cYmodule_init_name,T287);
  lit_512 = YPPsym((P)"module-init-decl");
  lit_513 = YPsb((P)"void ");
  lit_514 = YPsb((P)" (void)");
  T291 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_229 = YPmet(FUNCODEREF(fun_module_init_decl_229),LITREF(lit_512),T291,ENVNUL,PNUL,YPfalse);
  T294 = BOUNDP(YevalSg2cYmodule_init_decl);
  if (T294 != YPfalse) {
    T293 = VARREF(YevalSg2cYmodule_init_decl);
  } else {
    T293 = YPfalse;
  }
  T295 = fun_module_init_decl_229;
  T292 = CALL2(1,VARREF(YPdefine_method),T293,T295);
  VARSET(YevalSg2cYmodule_init_decl,T292);
  lit_515 = YPPsym((P)"generate-module-init");
  lit_516 = YPPsym((P)"form");
  lit_517 = YPsb((P)"dl");
  lit_518 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_519 = YPPsym((P)"x-1999");
  lit_520 = YPPsym((P)"x-1998");
  lit_521 = YPsb((P)"extern ");
  lit_522 = YPsb((P)";\n");
  lit_523 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_524 = YPsb((P)"extern ");
  lit_525 = YPsb((P)";\n\n");
  lit_526 = YPsb((P)" {\n");
  lit_527 = YPsb((P)"  static int need_init = 1;\n");
  lit_528 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_529 = YPsb((P)"  need_init = 0;\n");
  lit_530 = YPPsym((P)"x-2004");
  lit_531 = YPPsym((P)"x-2003");
  lit_532 = YPsb((P)"  ");
  lit_533 = YPsb((P)"();\n");
  lit_534 = YPsb((P)"\n");
  lit_535 = YPsb((P)"\n");
  lit_536 = YPsb((P)"}\n");
  T298 = YPsig(YPPlist(1,LITREF(lit_520)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1999_230 = YPmet(FUNCODEREF(fun_x_1999_230),LITREF(lit_519),T298,ENVNUL,PNUL,YPfalse);
  T297 = YPsig(YPPlist(1,LITREF(lit_531)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2004_231 = YPmet(FUNCODEREF(fun_x_2004_231),LITREF(lit_530),T297,ENVNUL,PNUL,YPfalse);
  T296 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_20),LITREF(lit_516)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_232 = YPmet(FUNCODEREF(fun_generate_module_init_232),LITREF(lit_515),T296,ENVNUL,PNUL,YPfalse);
  T301 = BOUNDP(YevalSg2cYgenerate_module_init);
  if (T301 != YPfalse) {
    T300 = VARREF(YevalSg2cYgenerate_module_init);
  } else {
    T300 = YPfalse;
  }
  T302 = fun_generate_module_init_232;
  T299 = CALL2(1,VARREF(YPdefine_method),T300,T302);
  VARSET(YevalSg2cYgenerate_module_init,T299);
  lit_537 = YPPsym((P)"generate-main");
  lit_538 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_539 = YPsb((P)"extern MODULE_INFO ");
  lit_540 = YPsb((P)";\n");
  lit_541 = YPsb((P)"extern ");
  lit_542 = YPsb((P)";\n\n");
  lit_543 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_544 = YPsb((P)";\n\n");
  lit_545 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_546 = YPsb((P)"  ");
  lit_547 = YPsb((P)"%init-world");
  lit_548 = YPsb((P)"(argc, argv);\n");
  lit_549 = YPsb((P)"  ");
  lit_550 = YPsb((P)"();\n");
  lit_551 = YPsb((P)"  return 0;\n");
  lit_552 = YPsb((P)"}\n");
  T303 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_233 = YPmet(FUNCODEREF(fun_generate_main_233),LITREF(lit_537),T303,ENVNUL,PNUL,YPfalse);
  T306 = BOUNDP(YevalSg2cYgenerate_main);
  if (T306 != YPfalse) {
    T305 = VARREF(YevalSg2cYgenerate_main);
  } else {
    T305 = YPfalse;
  }
  T307 = fun_generate_main_233;
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
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScycle;

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
  {"%i+", &module_info_gooSboot, "%i+"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"t=", &module_info_gooStypes, "t="},
  {"try", &module_info_gooSboot, "try"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"|", &module_info_gooSmath, "|"},
  {"do", &module_info_gooSmacros, "do"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"/", &module_info_gooSmath, "/"},
  {"dg", &module_info_gooSboot, "dg"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%im", &module_info_gooSboot, "%im"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"out", &module_info_gooSioSport, "out"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"rep", &module_info_gooSboot, "rep"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"even?", &module_info_gooSmath, "even?"},
  {"error", &module_info_gooSboot, "error"},
  {"map", &module_info_gooSmacros, "map"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"let", &module_info_gooSboot, "let"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"while", &module_info_gooSmacros, "while"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"open", &module_info_gooSioSport, "open"},
  {"def", &module_info_gooSboot, "def"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"add", &module_info_gooScolsScol, "add"},
  {"put", &module_info_gooSioSport, "put"},
  {"round", &module_info_gooSmath, "round"},
  {"==", &module_info_gooSmacros, "=="},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"ds", &module_info_gooSboot, "ds"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"&", &module_info_gooSmath, "&"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"round/", &module_info_gooSmath, "round/"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"and", &module_info_gooSmacros, "and"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"bt", &module_info_evalStop, "bt"},
  {"case", &module_info_gooSmacros, "case"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"log", &module_info_gooSmath, "log"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"in", &module_info_gooSioSport, "in"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"max", &module_info_gooSmag, "max"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"dm", &module_info_gooSboot, "dm"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"head", &module_info_gooSboot, "head"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%su", &module_info_gooSboot, "%su"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"t?", &module_info_gooStypes, "t?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"loc", &module_info_gooSboot, "loc"},
  {"if", &module_info_gooSboot, "if"},
  {"dss", &module_info_gooSboot, "dss"},
  {"always", &module_info_gooSruntime, "always"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"nil", &module_info_gooSboot, "nil"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"top", &module_info_evalStop, "top"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"len", &module_info_gooStypes, "len"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"acos", &module_info_gooSmath, "acos"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"tup", &module_info_gooSboot, "tup"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"app", &module_info_gooSmacros, "app"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"export", &module_info_gooSboot, "export"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"*", &module_info_gooSmath, "*"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"@+", &module_info_gooSboot, "@+"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"frame", &module_info_evalStop, "frame"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"del", &module_info_gooScolsScol, "del"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"for", &module_info_gooSmacros, "for"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"match", &module_info_gooSmacros, "match"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"-", &module_info_gooSmath, "-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"find", &module_info_gooScolsScol, "find"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"ct", &module_info_gooSboot, "ct"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"as", &module_info_gooStypes, "as"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"t*", &module_info_gooStypes, "t*"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"load", &module_info_evalStop, "load"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@<", &module_info_gooSboot, "@<"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%put", &module_info_gooSboot, "%put"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"read", &module_info_gooSruntime, "read"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"<", &module_info_gooSmag, "<"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"dl", &module_info_gooSboot, "dl"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"new", &module_info_gooSboot, "new"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"t+", &module_info_gooStypes, "t+"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"until", &module_info_gooSmacros, "until"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"~=", &module_info_gooSmath, "~="},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"1-", &module_info_gooSmath, "1-"},
  {"=", &module_info_gooSmath, "="},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"~", &module_info_gooSmath, "~"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"not", &module_info_gooSboot, "not"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"op", &module_info_gooSmacros, "op"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"now", &module_info_gooScolsScol, "now"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"get", &module_info_gooSioSport, "get"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"t<", &module_info_gooStypes, "t<"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"or", &module_info_gooSmacros, "or"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"close", &module_info_gooSioSport, "close"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$iep-marker", &YevalSg2cYDiep_marker},
  {"$local-marker", &YevalSg2cYDlocal_marker},
  {"$module-separator", &YevalSg2cYDmodule_separator},
  {"generate-main", &YevalSg2cYgenerate_main},
  {"*g2c-app*", &YevalSg2cYTg2c_appT},
  {"$number-characters", &YevalSg2cYDnumber_characters},
  {"generate-global-environment", &YevalSg2cYgenerate_global_environment},
  {"$iep-suffix", &YevalSg2cYDiep_suffix},
  {"module-loader-appname", &YevalSg2cYmodule_loader_appname},
  {"generate-function-code", &YevalSg2cYgenerate_function_code},
  {"---main-1---", NULL},
  {"compute-ast", &YevalSg2cYcompute_ast},
  {"generate-return", &YevalSg2cYgenerate_return},
  {"generate-module-init", &YevalSg2cYgenerate_module_init},
  {"or/set", NULL},
  {"g2c-build-app", &YevalSg2cYg2c_build_app},
  {"mangle-global-name", &YevalSg2cYmangle_global_name},
  {"$min-character-code", &YevalSg2cYDmin_character_code},
  {"generate-makefile", &YevalSg2cYgenerate_makefile},
  {"*trace-registers?*", &YevalSg2cYTtrace_registersQT},
  {"gen-ref", &YevalSg2cYgen_ref},
  {"<g2c-module-loader>", &YevalSg2cYLg2c_module_loaderG},
  {"gen-depth", &YevalSg2cYgen_depth},
  {"generate-closure-structure", &YevalSg2cYgenerate_closure_structure},
  {"generate-trailer", &YevalSg2cYgenerate_trailer},
  {"---main-0---", NULL},
  {"generate-function-forwards", &YevalSg2cYgenerate_function_forwards},
  {"g2c-test", &YevalSg2cYg2c_test},
  {"compile-load", &YevalSg2cYcompile_load},
  {"mangle-binding", &YevalSg2cYmangle_binding},
  {"generate-registers", &YevalSg2cYgenerate_registers},
  {"g2c-clean", &YevalSg2cYg2c_clean},
  {"with-statement", NULL},
  {"to-c", &YevalSg2cYto_c},
  {"generate-function-binding", &YevalSg2cYgenerate_function_binding},
  {"module-mtime-setter", &YevalSg2cYmodule_mtime_setter},
  {"mangle-boot-name", &YevalSg2cYmangle_boot_name},
  {"*registers-per-line*", &YevalSg2cYTregisters_per_lineT},
  {"generate-quotations", &YevalSg2cYgenerate_quotations},
  {"false-name", &YevalSg2cYfalse_name},
  {"module-loader-app-modname", &YevalSg2cYmodule_loader_app_modname},
  {"module-init-decl", &YevalSg2cYmodule_init_decl},
  {"mangle-quotation-name", &YevalSg2cYmangle_quotation_name},
  {"generate-c-module", &YevalSg2cYgenerate_c_module},
  {"module-info-name", &YevalSg2cYmodule_info_name},
  {"$module-marker", &YevalSg2cYDmodule_marker},
  {"generate-function-body-reference", &YevalSg2cYgenerate_function_body_reference},
  {"g2c-exp", &YevalSg2cYg2c_exp},
  {"binding->c", &YevalSg2cYbinding_Gc},
  {"g2c-def-app", &YevalSg2cYg2c_def_app},
  {"generate-functions", &YevalSg2cYgenerate_functions},
  {"$hygiene-marker", &YevalSg2cYDhygiene_marker},
  {"module-mtime", &YevalSg2cYmodule_mtime},
  {"g2c-top", &YevalSg2cYg2c_top},
  {"primitive-inlinable?", &YevalSg2cYprimitive_inlinableQ},
  {"*definitions*", &YevalSg2cYTdefinitionsT},
  {"mangler-reset", &YevalSg2cYmangler_reset},
  {"$name-mangler-table", &YevalSg2cYDname_mangler_table},
  {"generate-shadow-args", &YevalSg2cYgenerate_shadow_args},
  {"mangle-module-into", &YevalSg2cYmangle_module_into},
  {"*dynamic-linking?*", &YevalSg2cYTdynamic_linkingQT},
  {"funshell-to-c", &YevalSg2cYfunshell_to_c},
  {"<g2c-module>", &YevalSg2cYLg2c_moduleG},
  {"funinit-to-c", &YevalSg2cYfuninit_to_c},
  {"generate-self-recursive-call", &YevalSg2cYgenerate_self_recursive_call},
  {"module-init-name", &YevalSg2cYmodule_init_name},
  {"gen-result", &YevalSg2cYgen_result},
  {"purge-outdated-modules", &YevalSg2cYpurge_outdated_modules},
  {"mangle-string-literal", &YevalSg2cYmangle_string_literal},
  {"out-list-builder", &YevalSg2cYout_list_builder},
  {"module-src-file-setter", &YevalSg2cYmodule_src_file_setter},
  {"generate-header", &YevalSg2cYgenerate_header},
  {"float-to-c-string", &YevalSg2cYfloat_to_c_string},
  {"pp", &YevalSg2cYpp},
  {"with-expression", NULL},
  {"with-used-expression", NULL},
  {"module-src-file", &YevalSg2cYmodule_src_file},
  {"for-commas", NULL},
  {"between-parentheses", NULL},
  {"between-parentheses-comma-separated", NULL},
  {"generate-global-binding", &YevalSg2cYgenerate_global_binding},
  {"g2c-ast", &YevalSg2cYg2c_ast},
  {"$method-mangled-marker", &YevalSg2cYDmethod_mangled_marker},
  {"generate-quotation-forwards", &YevalSg2cYgenerate_quotation_forwards},
  {"module-loader-appname-setter", &YevalSg2cYmodule_loader_appname_setter},
  {"$max-character-code", &YevalSg2cYDmax_character_code},
  {"gen-fab-list", &YevalSg2cYgen_fab_list},
  {"---main-2---", NULL},
  {"compute-program", &YevalSg2cYcompute_program},
  {"generate-c-application", &YevalSg2cYgenerate_c_application},
  {"reference->c", &YevalSg2cYreference_Gc},
  {"generate-module-info", &YevalSg2cYgenerate_module_info},
  {"generate-function-bodies", &YevalSg2cYgenerate_function_bodies},
  {"module-up-to-date?", &YevalSg2cYmodule_up_to_dateQ},
  {"$mangles-data", &YevalSg2cYDmangles_data},
  {"generate-quotation", &YevalSg2cYgenerate_quotation},
  {"buf-cat2!", &YevalSg2cYbuf_cat2X},
  {"$method-mangled-marker-string", &YevalSg2cYDmethod_mangled_marker_string},
  {"mangle-local-name", &YevalSg2cYmangle_local_name},
  {"*tmp-file-counter*", &YevalSg2cYTtmp_file_counterT},
  {"mangle-name-into", &YevalSg2cYmangle_name_into},
  {"mangle-raw-name", &YevalSg2cYmangle_raw_name},
  {"declare-imported-module-infos", &YevalSg2cYdeclare_imported_module_infos},
  {"generate-local-temporaries", &YevalSg2cYgenerate_local_temporaries},
  {"dispatcher?", &YevalSg2cYdispatcherQ},
  {"module-loader-app-modname-setter", &YevalSg2cYmodule_loader_app_modname_setter},
  {"char-buffer-as-string", &YevalSg2cYchar_buffer_as_string},
  {"mangle-integer", &YevalSg2cYmangle_integer},
  {"mangle-local-marked-name", &YevalSg2cYmangle_local_marked_name},
  {"$escape-marker", &YevalSg2cYDescape_marker},
  {"$number-call-templates", &YevalSg2cYDnumber_call_templates},
  {"$c-escapes", &YevalSg2cYDc_escapes},
  {"$escape-separator", &YevalSg2cYDescape_separator},
  {"*mangle-buffer*", &YevalSg2cYTmangle_bufferT},
  {"generate-function-forward", &YevalSg2cYgenerate_function_forward},
  {"$hygiene-char", &YevalSg2cYDhygiene_char},
  {"generate-function-specs", &YevalSg2cYgenerate_function_specs},
  {"%print-cpu-usage", NULL},
  {"$local-suffix", &YevalSg2cYDlocal_suffix},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-build-app", "g2c-build-app"},
  {"g2c-clean", "g2c-clean"},
  {"g2c-exp", "g2c-exp"},
  {"g2c-def-app", "g2c-def-app"},
  {"g2c-top", "g2c-top"},
  {"g2c-ast", "g2c-ast"},
  {"g2c-eval", "g2c-eval"},
  {"g2c-test", "g2c-test"},
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
