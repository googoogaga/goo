/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSg2cYgenerate_shadow_args,"eval/g2c","generate-shadow-args");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(Ytail,"goo/boot","tail");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
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
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
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
EXT(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YevalSg2cYgenerate_self_recursive_call,"eval/g2c","generate-self-recursive-call");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
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
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YtT,"goo/boot","t*");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYatan2,"goo/math","atan2");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yerror,"goo/boot","error");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLprim_intG,"goo/boot","<prim-int>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
DEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YevalStopYtop,"eval/top","top");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
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
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
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
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
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
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(Ylst,"goo/boot","lst");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathY1_,"goo/math","1-");
DYNDEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_533);
DEFLIT(lit_406);
DEFLIT(lit_71);
DEFLIT(lit_343);
DEFLIT(lit_358);
DEFLIT(lit_82);
DEFLIT(lit_235);
DEFLIT(lit_427);
DEFLIT(lit_402);
DEFLIT(lit_22);
DEFLIT(lit_203);
DEFLIT(lit_554);
DEFLIT(lit_547);
DEFLIT(lit_162);
DEFLIT(lit_181);
DEFLIT(lit_247);
DEFLIT(lit_158);
DEFLIT(lit_242);
DEFLIT(lit_3);
DEFLIT(lit_352);
DEFLIT(lit_371);
DEFLIT(lit_147);
DEFLIT(lit_21);
DEFLIT(lit_326);
DEFLIT(lit_55);
DEFLIT(lit_360);
DEFLIT(lit_474);
DEFLIT(lit_80);
DEFLIT(lit_307);
DEFLIT(lit_126);
DEFLIT(lit_341);
DEFLIT(lit_9);
DEFLIT(lit_275);
DEFLIT(lit_464);
DEFLIT(lit_351);
DEFLIT(lit_419);
DEFLIT(lit_403);
DEFLIT(lit_555);
DEFLIT(lit_46);
DEFLIT(lit_532);
DEFLIT(lit_174);
DEFLIT(lit_428);
DEFLIT(lit_282);
DEFLIT(lit_313);
DEFLIT(lit_347);
DEFLIT(lit_479);
DEFLIT(lit_418);
DEFLIT(lit_222);
DEFLIT(lit_502);
DEFLIT(lit_340);
DEFLIT(lit_544);
DEFLIT(lit_478);
DEFLIT(lit_68);
DEFLIT(lit_380);
DEFLIT(lit_107);
DEFLIT(lit_292);
DEFLIT(lit_139);
DEFLIT(lit_540);
DEFLIT(lit_233);
DEFLIT(lit_483);
DEFLIT(lit_123);
DEFLIT(lit_263);
DEFLIT(lit_404);
DEFLIT(lit_331);
DEFLIT(lit_288);
DEFLIT(lit_226);
DEFLIT(lit_86);
DEFLIT(lit_553);
DEFLIT(lit_63);
DEFLIT(lit_501);
DEFLIT(lit_291);
DEFLIT(lit_323);
DEFLIT(lit_494);
DEFLIT(lit_54);
DEFLIT(lit_266);
DEFLIT(lit_527);
DEFLIT(lit_119);
DEFLIT(lit_120);
DEFLIT(lit_384);
DEFLIT(lit_287);
DEFLIT(lit_177);
DEFLIT(lit_378);
DEFLIT(lit_563);
DEFLIT(lit_512);
DEFLIT(lit_441);
DEFLIT(lit_430);
DEFLIT(lit_207);
DEFLIT(lit_34);
DEFLIT(lit_357);
DEFLIT(lit_32);
DEFLIT(lit_161);
DEFLIT(lit_434);
DEFLIT(lit_286);
DEFLIT(lit_511);
DEFLIT(lit_190);
DEFLIT(lit_327);
DEFLIT(lit_13);
DEFLIT(lit_19);
DEFLIT(lit_167);
DEFLIT(lit_20);
DEFLIT(lit_377);
DEFLIT(lit_221);
DEFLIT(lit_367);
DEFLIT(lit_546);
DEFLIT(lit_44);
DEFLIT(lit_499);
DEFLIT(lit_279);
DEFLIT(lit_133);
DEFLIT(lit_219);
DEFLIT(lit_173);
DEFLIT(lit_195);
DEFLIT(lit_6);
DEFLIT(lit_480);
DEFLIT(lit_310);
DEFLIT(lit_422);
DEFLIT(lit_296);
DEFLIT(lit_70);
DEFLIT(lit_564);
DEFLIT(lit_285);
DEFLIT(lit_366);
DEFLIT(lit_545);
DEFLIT(lit_141);
DEFLIT(lit_299);
DEFLIT(lit_466);
DEFLIT(lit_330);
DEFLIT(lit_526);
DEFLIT(lit_324);
DEFLIT(lit_128);
DEFLIT(lit_125);
DEFLIT(lit_407);
DEFLIT(lit_510);
DEFLIT(lit_519);
DEFLIT(lit_298);
DEFLIT(lit_146);
DEFLIT(lit_426);
DEFLIT(lit_337);
DEFLIT(lit_415);
DEFLIT(lit_262);
DEFLIT(lit_59);
DEFLIT(lit_375);
DEFLIT(lit_98);
DEFLIT(lit_365);
DEFLIT(lit_122);
DEFLIT(lit_1);
DEFLIT(lit_448);
DEFLIT(lit_383);
DEFLIT(lit_183);
DEFLIT(lit_344);
DEFLIT(lit_25);
DEFLIT(lit_223);
DEFLIT(lit_302);
DEFLIT(lit_201);
DEFLIT(lit_461);
DEFLIT(lit_8);
DEFLIT(lit_156);
DEFLIT(lit_220);
DEFLIT(lit_218);
DEFLIT(lit_442);
DEFLIT(lit_280);
DEFLIT(lit_31);
DEFLIT(lit_145);
DEFLIT(lit_33);
DEFLIT(lit_245);
DEFLIT(lit_209);
DEFLIT(lit_43);
DEFLIT(lit_48);
DEFLIT(lit_290);
DEFLIT(lit_528);
DEFLIT(lit_303);
DEFLIT(lit_260);
DEFLIT(lit_84);
DEFLIT(lit_455);
DEFLIT(lit_16);
DEFLIT(lit_436);
DEFLIT(lit_40);
DEFLIT(lit_525);
DEFLIT(lit_53);
DEFLIT(lit_550);
DEFLIT(lit_254);
DEFLIT(lit_321);
DEFLIT(lit_85);
DEFLIT(lit_131);
DEFLIT(lit_66);
DEFLIT(lit_199);
DEFLIT(lit_497);
DEFLIT(lit_118);
DEFLIT(lit_176);
DEFLIT(lit_387);
DEFLIT(lit_552);
DEFLIT(lit_50);
DEFLIT(lit_320);
DEFLIT(lit_202);
DEFLIT(lit_334);
DEFLIT(lit_496);
DEFLIT(lit_462);
DEFLIT(lit_477);
DEFLIT(lit_250);
DEFLIT(lit_489);
DEFLIT(lit_521);
DEFLIT(lit_97);
DEFLIT(lit_168);
DEFLIT(lit_187);
DEFLIT(lit_300);
DEFLIT(lit_391);
DEFLIT(lit_369);
DEFLIT(lit_370);
DEFLIT(lit_297);
DEFLIT(lit_454);
DEFLIT(lit_272);
DEFLIT(lit_539);
DEFLIT(lit_405);
DEFLIT(lit_390);
DEFLIT(lit_354);
DEFLIT(lit_160);
DEFLIT(lit_470);
DEFLIT(lit_249);
DEFLIT(lit_28);
DEFLIT(lit_447);
DEFLIT(lit_506);
DEFLIT(lit_124);
DEFLIT(lit_289);
DEFLIT(lit_256);
DEFLIT(lit_346);
DEFLIT(lit_423);
DEFLIT(lit_472);
DEFLIT(lit_322);
DEFLIT(lit_77);
DEFLIT(lit_524);
DEFLIT(lit_439);
DEFLIT(lit_493);
DEFLIT(lit_420);
DEFLIT(lit_435);
DEFLIT(lit_459);
DEFLIT(lit_465);
DEFLIT(lit_164);
DEFLIT(lit_5);
DEFLIT(lit_78);
DEFLIT(lit_62);
DEFLIT(lit_74);
DEFLIT(lit_271);
DEFLIT(lit_212);
DEFLIT(lit_278);
DEFLIT(lit_136);
DEFLIT(lit_548);
DEFLIT(lit_49);
DEFLIT(lit_79);
DEFLIT(lit_348);
DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_491);
DEFLIT(lit_210);
DEFLIT(lit_261);
DEFLIT(lit_153);
DEFLIT(lit_232);
DEFLIT(lit_482);
DEFLIT(lit_7);
DEFLIT(lit_200);
DEFLIT(lit_362);
DEFLIT(lit_421);
DEFLIT(lit_490);
DEFLIT(lit_463);
DEFLIT(lit_449);
DEFLIT(lit_253);
DEFLIT(lit_96);
DEFLIT(lit_255);
DEFLIT(lit_163);
DEFLIT(lit_166);
DEFLIT(lit_416);
DEFLIT(lit_542);
DEFLIT(lit_252);
DEFLIT(lit_116);
DEFLIT(lit_392);
DEFLIT(lit_317);
DEFLIT(lit_76);
DEFLIT(lit_64);
DEFLIT(lit_437);
DEFLIT(lit_211);
DEFLIT(lit_498);
DEFLIT(lit_385);
DEFLIT(lit_189);
DEFLIT(lit_339);
DEFLIT(lit_397);
DEFLIT(lit_228);
DEFLIT(lit_75);
DEFLIT(lit_460);
DEFLIT(lit_179);
DEFLIT(lit_529);
DEFLIT(lit_417);
DEFLIT(lit_35);
DEFLIT(lit_410);
DEFLIT(lit_83);
DEFLIT(lit_424);
DEFLIT(lit_115);
DEFLIT(lit_438);
DEFLIT(lit_356);
DEFLIT(lit_469);
DEFLIT(lit_318);
DEFLIT(lit_315);
DEFLIT(lit_565);
DEFLIT(lit_486);
DEFLIT(lit_193);
DEFLIT(lit_194);
DEFLIT(lit_541);
DEFLIT(lit_45);
DEFLIT(lit_57);
DEFLIT(lit_61);
DEFLIT(lit_485);
DEFLIT(lit_26);
DEFLIT(lit_513);
DEFLIT(lit_175);
DEFLIT(lit_401);
DEFLIT(lit_536);
DEFLIT(lit_180);
DEFLIT(lit_114);
DEFLIT(lit_431);
DEFLIT(lit_217);
DEFLIT(lit_475);
DEFLIT(lit_239);
DEFLIT(lit_213);
DEFLIT(lit_295);
DEFLIT(lit_305);
DEFLIT(lit_301);
DEFLIT(lit_328);
DEFLIT(lit_373);
DEFLIT(lit_251);
DEFLIT(lit_386);
DEFLIT(lit_503);
DEFLIT(lit_134);
DEFLIT(lit_284);
DEFLIT(lit_414);
DEFLIT(lit_52);
DEFLIT(lit_518);
DEFLIT(lit_113);
DEFLIT(lit_379);
DEFLIT(lit_151);
DEFLIT(lit_349);
DEFLIT(lit_157);
DEFLIT(lit_104);
DEFLIT(lit_471);
DEFLIT(lit_117);
DEFLIT(lit_504);
DEFLIT(lit_294);
DEFLIT(lit_413);
DEFLIT(lit_185);
DEFLIT(lit_112);
DEFLIT(lit_198);
DEFLIT(lit_257);
DEFLIT(lit_522);
DEFLIT(lit_67);
DEFLIT(lit_456);
DEFLIT(lit_409);
DEFLIT(lit_517);
DEFLIT(lit_543);
DEFLIT(lit_364);
DEFLIT(lit_304);
DEFLIT(lit_47);
DEFLIT(lit_412);
DEFLIT(lit_41);
DEFLIT(lit_523);
DEFLIT(lit_535);
DEFLIT(lit_111);
DEFLIT(lit_264);
DEFLIT(lit_93);
DEFLIT(lit_538);
DEFLIT(lit_60);
DEFLIT(lit_453);
DEFLIT(lit_188);
DEFLIT(lit_277);
DEFLIT(lit_495);
DEFLIT(lit_132);
DEFLIT(lit_248);
DEFLIT(lit_361);
DEFLIT(lit_30);
DEFLIT(lit_311);
DEFLIT(lit_355);
DEFLIT(lit_276);
DEFLIT(lit_4);
DEFLIT(lit_382);
DEFLIT(lit_39);
DEFLIT(lit_516);
DEFLIT(lit_335);
DEFLIT(lit_376);
DEFLIT(lit_208);
DEFLIT(lit_169);
DEFLIT(lit_159);
DEFLIT(lit_314);
DEFLIT(lit_359);
DEFLIT(lit_17);
DEFLIT(lit_452);
DEFLIT(lit_73);
DEFLIT(lit_224);
DEFLIT(lit_515);
DEFLIT(lit_400);
DEFLIT(lit_150);
DEFLIT(lit_152);
DEFLIT(lit_274);
DEFLIT(lit_227);
DEFLIT(lit_537);
DEFLIT(lit_101);
DEFLIT(lit_38);
DEFLIT(lit_72);
DEFLIT(lit_127);
DEFLIT(lit_24);
DEFLIT(lit_172);
DEFLIT(lit_69);
DEFLIT(lit_443);
DEFLIT(lit_393);
DEFLIT(lit_170);
DEFLIT(lit_244);
DEFLIT(lit_106);
DEFLIT(lit_92);
DEFLIT(lit_505);
DEFLIT(lit_556);
DEFLIT(lit_325);
DEFLIT(lit_338);
DEFLIT(lit_171);
DEFLIT(lit_105);
DEFLIT(lit_467);
DEFLIT(lit_238);
DEFLIT(lit_394);
DEFLIT(lit_29);
DEFLIT(lit_319);
DEFLIT(lit_42);
DEFLIT(lit_225);
DEFLIT(lit_110);
DEFLIT(lit_143);
DEFLIT(lit_336);
DEFLIT(lit_514);
DEFLIT(lit_144);
DEFLIT(lit_445);
DEFLIT(lit_353);
DEFLIT(lit_396);
DEFLIT(lit_520);
DEFLIT(lit_243);
DEFLIT(lit_481);
DEFLIT(lit_109);
DEFLIT(lit_531);
DEFLIT(lit_551);
DEFLIT(lit_444);
DEFLIT(lit_432);
DEFLIT(lit_148);
DEFLIT(lit_429);
DEFLIT(lit_37);
DEFLIT(lit_103);
DEFLIT(lit_108);
DEFLIT(lit_492);
DEFLIT(lit_381);
DEFLIT(lit_234);
DEFLIT(lit_488);
DEFLIT(lit_395);
DEFLIT(lit_165);
DEFLIT(lit_561);
DEFLIT(lit_102);
DEFLIT(lit_345);
DEFLIT(lit_468);
DEFLIT(lit_65);
DEFLIT(lit_350);
DEFLIT(lit_149);
DEFLIT(lit_446);
DEFLIT(lit_408);
DEFLIT(lit_273);
DEFLIT(lit_89);
DEFLIT(lit_398);
DEFLIT(lit_216);
DEFLIT(lit_237);
DEFLIT(lit_178);
DEFLIT(lit_23);
DEFLIT(lit_246);
DEFLIT(lit_241);
DEFLIT(lit_558);
DEFLIT(lit_562);
DEFLIT(lit_236);
DEFLIT(lit_312);
DEFLIT(lit_332);
DEFLIT(lit_329);
DEFLIT(lit_81);
DEFLIT(lit_142);
DEFLIT(lit_155);
DEFLIT(lit_229);
DEFLIT(lit_191);
DEFLIT(lit_95);
DEFLIT(lit_476);
DEFLIT(lit_2);
DEFLIT(lit_267);
DEFLIT(lit_186);
DEFLIT(lit_306);
DEFLIT(lit_51);
DEFLIT(lit_259);
DEFLIT(lit_293);
DEFLIT(lit_450);
DEFLIT(lit_27);
DEFLIT(lit_399);
DEFLIT(lit_425);
DEFLIT(lit_309);
DEFLIT(lit_458);
DEFLIT(lit_451);
DEFLIT(lit_457);
DEFLIT(lit_281);
DEFLIT(lit_509);
DEFLIT(lit_372);
DEFLIT(lit_473);
DEFLIT(lit_137);
DEFLIT(lit_129);
DEFLIT(lit_90);
DEFLIT(lit_559);
DEFLIT(lit_508);
DEFLIT(lit_58);
DEFLIT(lit_10);
DEFLIT(lit_316);
DEFLIT(lit_100);
DEFLIT(lit_283);
DEFLIT(lit_389);
DEFLIT(lit_192);
DEFLIT(lit_197);
DEFLIT(lit_368);
DEFLIT(lit_308);
DEFLIT(lit_507);
DEFLIT(lit_534);
DEFLIT(lit_500);
DEFLIT(lit_214);
DEFLIT(lit_130);
DEFLIT(lit_182);
DEFLIT(lit_91);
DEFLIT(lit_388);
DEFLIT(lit_333);
DEFLIT(lit_231);
DEFLIT(lit_433);
DEFLIT(lit_121);
DEFLIT(lit_215);
DEFLIT(lit_36);
DEFLIT(lit_270);
DEFLIT(lit_12);
DEFLIT(lit_374);
DEFLIT(lit_230);
DEFLIT(lit_440);
DEFLIT(lit_363);
DEFLIT(lit_154);
DEFLIT(lit_14);
DEFLIT(lit_205);
DEFLIT(lit_269);
DEFLIT(lit_204);
DEFLIT(lit_99);
DEFLIT(lit_530);
DEFLIT(lit_240);
DEFLIT(lit_56);
DEFLIT(lit_138);
DEFLIT(lit_557);
DEFLIT(lit_342);
DEFLIT(lit_88);
DEFLIT(lit_0);
DEFLIT(lit_484);
DEFLIT(lit_87);
DEFLIT(lit_411);
DEFLIT(lit_487);
DEFLIT(lit_258);
DEFLIT(lit_135);
DEFLIT(lit_560);
DEFLIT(lit_94);
DEFLIT(lit_549);
DEFLIT(lit_265);
DEFLIT(lit_140);
DEFLIT(lit_206);
DEFLIT(lit_268);
DEFLIT(lit_196);
DEFLIT(lit_15);
DEFLIT(lit_184);

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
LOCFOR(fun_put_obj_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_generate_makefile_47);
LOCFOR(fun_pp_48);
LOCFOR(fun_generate_header_49);
LOCFOR(fun_generate_trailer_50);
LOCFOR(fun_51);
LOCFOR(fun_generate_global_environment_52);
LOCFOR(fun_generate_global_binding_53);
LOCFOR(fun_loop_54);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_56);
LOCFOR(fun_mangle_string_literal_57);
LOCFOR(fun_mangle_string_literal_58);
LOCFOR(fun_process_integer_59);
LOCFOR(fun_mangle_integer_60);
LOCFOR(fun_x_1547_61);
LOCFOR(fun_x_1549_62);
LOCFOR(fun_x_1551_63);
LOCFOR(fun_x_1553_64);
FUNFOR(YevalSg2cYmangler_reset);
LOCFOR(fun_x_1555_66);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_68);
LOCFOR(fun_mangle_raw_name_69);
LOCFOR(fun_mangle_local_name_70);
LOCFOR(fun_mangle_local_name_71);
LOCFOR(fun_x_1559_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_loop_75);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_77);
LOCFOR(fun_mangle_global_name_78);
LOCFOR(fun_mangle_global_name_79);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_82);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_84);
LOCFOR(fun_mangle_binding_85);
LOCFOR(fun_x_1563_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_x_1567_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_x_1571_92);
LOCFOR(fun_loop_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_gen_result_96);
LOCFOR(fun_x_1574_97);
LOCFOR(fun_gen_depth_98);
LOCFOR(fun_x_1578_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_x_1582_102);
LOCFOR(fun_103);
LOCFOR(fun_104);
LOCFOR(fun_x_1586_105);
LOCFOR(fun_106);
LOCFOR(fun_107);
LOCFOR(fun_x_1588_108);
LOCFOR(fun_generate_quotation_forwards_109);
LOCFOR(fun_x_1591_110);
LOCFOR(fun_generate_quotations_111);
LOCFOR(fun_false_name_112);
LOCFOR(fun_generate_quotation_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_115);
LOCFOR(fun_generate_quotation_116);
LOCFOR(fun_generate_quotation_117);
LOCFOR(fun_generate_quotation_118);
LOCFOR(fun_loop_119);
LOCFOR(fun_120);
LOCFOR(fun_float_to_c_string_121);
LOCFOR(fun_generate_quotation_122);
LOCFOR(fun_generate_quotation_123);
LOCFOR(fun_x_1601_124);
LOCFOR(fun_generate_quotation_125);
LOCFOR(fun_x_1604_126);
LOCFOR(fun_generate_quotation_127);
LOCFOR(fun_generate_quotation_128);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_130);
LOCFOR(fun_reference_Gc_131);
LOCFOR(fun_to_c_132);
LOCFOR(fun_to_c_133);
LOCFOR(fun_gen_ref_134);
LOCFOR(fun_gen_ref_135);
LOCFOR(fun_gen_ref_136);
LOCFOR(fun_gen_ref_137);
LOCFOR(fun_gen_ref_138);
LOCFOR(fun_gen_ref_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_to_c_141);
LOCFOR(fun_to_c_142);
LOCFOR(fun_to_c_143);
LOCFOR(fun_to_c_144);
LOCFOR(fun_to_c_145);
LOCFOR(fun_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_x_1621_148);
LOCFOR(fun_x_1624_149);
LOCFOR(fun_x_1628_150);
LOCFOR(fun_generate_self_recursive_call_151);
LOCFOR(fun_x_1631_152);
LOCFOR(fun_x_1636_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_x_1640_155);
LOCFOR(fun_156);
LOCFOR(fun_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_x_1644_159);
LOCFOR(fun_to_c_160);
LOCFOR(fun_x_1648_161);
LOCFOR(fun_to_c_162);
LOCFOR(fun_to_c_163);
LOCFOR(fun_to_c_164);
LOCFOR(fun_to_c_165);
LOCFOR(fun_x_1653_166);
LOCFOR(fun_x_1659_167);
LOCFOR(fun_168);
LOCFOR(fun_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_171);
LOCFOR(fun_x_1663_172);
LOCFOR(fun_to_c_173);
LOCFOR(fun_funshell_to_c_174);
LOCFOR(fun_175);
LOCFOR(fun_x_1670_176);
LOCFOR(fun_funinit_to_c_177);
LOCFOR(fun_to_c_178);
LOCFOR(fun_x_1675_179);
LOCFOR(fun_out_list_builder_180);
LOCFOR(fun_181);
LOCFOR(fun_gen_fab_list_182);
LOCFOR(fun_generate_function_specs_183);
LOCFOR(fun_184);
LOCFOR(fun_to_c_185);
LOCFOR(fun_to_c_186);
LOCFOR(fun_x_1679_187);
LOCFOR(fun_generate_function_forwards_188);
LOCFOR(fun_x_1684_189);
LOCFOR(fun_190);
LOCFOR(fun_191);
LOCFOR(fun_generate_function_forward_192);
LOCFOR(fun_generate_function_binding_193);
LOCFOR(fun_generate_function_forward_194);
LOCFOR(fun_195);
LOCFOR(fun_generate_function_bodies_196);
LOCFOR(fun_197);
LOCFOR(fun_generate_functions_198);
LOCFOR(fun_generate_closure_structure_199);
LOCFOR(fun_generate_function_body_reference_200);
LOCFOR(fun_x_1693_201);
LOCFOR(fun_202);
LOCFOR(fun_203);
LOCFOR(fun_generate_shadow_args_204);
LOCFOR(fun_generate_return_205);
LOCFOR(fun_generate_return_206);
LOCFOR(fun_primitive_inlinableQ_207);
LOCFOR(fun_x_1701_208);
LOCFOR(fun_209);
LOCFOR(fun_210);
LOCFOR(fun_generate_function_code_211);
LOCFOR(fun_dispatcherQ_212);
LOCFOR(fun_x_1705_213);
LOCFOR(fun_214);
LOCFOR(fun_215);
LOCFOR(fun_216);
LOCFOR(fun_generate_function_code_217);
LOCFOR(fun_x_1708_218);
LOCFOR(fun_generate_local_temporaries_219);
LOCFOR(fun_next_reg_220);
LOCFOR(fun_next_line_221);
LOCFOR(fun_generate_registers_222);
LOCFOR(fun_module_info_name_223);
LOCFOR(fun_maybe_declare_224);
LOCFOR(fun_225);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_1711_227);
LOCFOR(fun_228);
LOCFOR(fun_229);
LOCFOR(fun_x_1720_230);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_232);
LOCFOR(fun_module_init_decl_233);
LOCFOR(fun_x_1726_234);
LOCFOR(fun_x_1731_235);
LOCFOR(fun_generate_module_init_236);
LOCFOR(fun_generate_main_237);
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
  P x_1525F2227;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1525F2227 = DYNREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1525F2227);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF2228;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2228 = T1;
  if (tmpF2228 != YPfalse) {
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
  P tmpF2232;
  P src_fileF2231;
  P build_fileF2230;
  P fileF2229;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF2229 = T1;
  T3 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF2229);
  build_fileF2230 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF2229);
  src_fileF2231 = T5;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF2230);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF2232 = T8;
  if (tmpF2232 != YPfalse) {
    T10 = tmpF2232;
  } else {
    T12 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF2231);
    T13 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF2230);
    T11 = CALL2(1,VARREF(YgooSmagYGE),T12,T13);
    T10 = T11;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF2231,build_fileF2230);
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
  P out_portF2242;
  P prgF2241;
  P astF2240;
  P out_fileF2239;
  P appnameF2238;
  P src_fileF2237;
  P fileF2236;
  P envF2235;
  P keepmodQF2234;
  P modF2233;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF2233 = T1;
  keepmodQF2234 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF2233);
  envF2235 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF2236 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF2236);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF2237 = T8;
  T11 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF2238 = T11;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF2236);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2238,T14);
  out_fileF2239 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF2237,modF2233);
  T15 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF2237);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T15,modF2233);
  T16 = (P)YPsu(LITREF(lit_16));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T18 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF2237,envF2235);
  astF2240 = T18;
  T20 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF2240,envF2235);
  prgF2241 = T20;
  T21 = (P)YPsu(LITREF(lit_17));
  (P)YevalSg2cYPprint_cpu_usage(T21);
  T22 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF2239);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T22);
  out_portF2242 = YPfalse;
  out_portF2242 = BOXFAB(out_portF2242);
  T25 = FUNFAB(fun_11,5,out_portF2242,out_fileF2239,prgF2241,astF2240,modF2233);
  T26 = FUNFAB(fun_12,1,out_portF2242);
  T24 = with_cleanup(T25,T26);
  T27 = FUNFAB(fun_13,1,appnameF2238);
  T28 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),modF2233);
  CALL2(1,VARREF(YgooSmacrosYdo),T27,T28);
  T29 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T29);
  T19 = modF2233;
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
  P x_1526F2243;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  x_1526F2243 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1526F2243,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1526F2243,LITREF(lit_22));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF2244;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF2244 = Ynil;
  changedF2244 = BOXFAB(changedF2244);
  T2 = FUNFAB(fun_16,1,changedF2244);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_17;
  T4 = BOXVAL(changedF2244);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF2244);
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
  P modF2245;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF2245 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_27));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF2245);
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
  P x_1528F2246;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_1528F2246 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_23,1,x_1528F2246);
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
  P x_1527F2247;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1527F2247 = DYNREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_25,1,x_1527F2247);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_27) {
  P tmpF2248;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2248 = T1;
  if (tmpF2248 != YPfalse) {
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
  P out_portF2254;
  P prgF2253;
  P out_fileF2252;
  P fileF2251;
  P nameF2250;
  P modF2249;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF2249 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = VARSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_35),T4,T5);
  nameF2250 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF2250);
  fileF2251 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF2251);
  out_fileF2252 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF2253 = T12;
  out_portF2254 = YPfalse;
  out_portF2254 = BOXFAB(out_portF2254);
  T15 = FUNFAB(fun_26,5,out_portF2254,out_fileF2252,prgF2253,ast_,modF2249);
  T16 = FUNFAB(fun_27,1,out_portF2254);
  T14 = with_cleanup(T15,T16);
  T11 = fileF2251;
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
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_39));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_40));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF2255;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF2255 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF2255);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF2256;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF2256 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF2256);
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
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_45),LITREF(lit_31));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P astF2258;
  P sexprF2257;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF2257 = T1;
  T2 = (P)YPsu(LITREF(lit_49));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF2257,ct_env_,YPfalse);
  astF2258 = T4;
  T5 = (P)YPsu(LITREF(lit_50));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T3 = astF2258;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF2263;
  P prgF2262;
  P lftF2261;
  P anaF2260;
  P boxF2259;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),e_);
  boxF2259 = T1;
  T2 = (P)YPsu(LITREF(lit_53));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_ast),boxF2259);
  anaF2260 = T4;
  T5 = (P)YPsu(LITREF(lit_54));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),anaF2260);
  lftF2261 = T7;
  T8 = (P)YPsu(LITREF(lit_55));
  (P)YevalSg2cYPprint_cpu_usage(T8);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF2261);
  prgF2262 = T10;
  T11 = (P)YPsu(LITREF(lit_56));
  (P)YevalSg2cYPprint_cpu_usage(T11);
  T13 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF2262,env_,YPint((P)64));
  fltF2263 = T13;
  T14 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T14);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF2263);
  T15 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF2263,YPfalse);
  T16 = (P)YPsu(LITREF(lit_59));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T12 = prgF2262;
  T9 = T12;
  T6 = T9;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_module_37) {
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
  T3 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
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

FUNCODEDEF(fun_39) {
  P tmpF2264;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2264 = T1;
  if (tmpF2264 != YPfalse) {
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
  P out_portF2268;
  P out_nameF2267;
  P init_nameF2266;
  P appnameF2265;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF2265 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF2265,LITREF(lit_64));
  init_nameF2266 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF2266);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2265,T6);
  out_nameF2267 = T5;
  out_portF2268 = YPfalse;
  out_portF2268 = BOXFAB(out_portF2268);
  T9 = FUNFAB(fun_38,3,out_portF2268,out_nameF2267,mod_);
  T10 = FUNFAB(fun_39,1,out_portF2268);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_obj_41) {
  P name_;
  P x_1533F2269;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1533F2269 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1533F2269,LITREF(lit_75));
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1533F2269,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1533F2269,LITREF(lit_76));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
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

FUNCODEDEF(fun_43) {
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

FUNCODEDEF(fun_44) {
  P mod_;
  P put_objF2270;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNSHELL(1,fun_put_obj_41,1);
  put_objF2270 = T1;
  FUNINIT(put_objF2270, 1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL1(0,put_objF2270,T2);
  T4 = FUNFAB(fun_42,1,put_objF2270);
  T6 = fun_43;
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,T7);
  T3 = CALL2(1,VARREF(YgooSmacrosYdo),T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P x_1537F2278;
  P x_1536F2277;
  P x_1535F2276;
  P x_1534F2275;
  P x_1532F2274;
  P x_1531F2273;
  P x_1530F2272;
  P x_1529F2271;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_1529F2271 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1529F2271,LITREF(lit_68));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1529F2271,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1529F2271,LITREF(lit_69));
  T3 = BOXVAL(FREEREF(0));
  x_1530F2272 = T3;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1530F2272,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1530F2272,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1530F2272,LITREF(lit_70));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1530F2272,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1530F2272,LITREF(lit_71));
  T5 = BOXVAL(FREEREF(0));
  x_1531F2273 = T5;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1531F2273,LITREF(lit_72));
  T7 = BOXVAL(FREEREF(0));
  x_1532F2274 = T7;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1532F2274,LITREF(lit_73));
  T9 = FUNFAB(fun_44,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T9,FREEREF(3));
  T10 = BOXVAL(FREEREF(0));
  x_1534F2275 = T10;
  CALL2(1,VARREF(YgooSioSportYputs),x_1534F2275,LITREF(lit_78));
  T11 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1534F2275,T11);
  T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1534F2275,LITREF(lit_79));
  T13 = BOXVAL(FREEREF(0));
  x_1535F2276 = T13;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1535F2276,FREEREF(5));
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1535F2276,LITREF(lit_80));
  T15 = BOXVAL(FREEREF(0));
  x_1536F2277 = T15;
  CALL2(1,VARREF(YgooSioSportYputs),x_1536F2277,LITREF(lit_81));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1536F2277,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1536F2277,LITREF(lit_82));
  T18 = BOXVAL(FREEREF(0));
  x_1537F2278 = T18;
  CALL2(1,VARREF(YgooSioSportYputs),x_1537F2278,LITREF(lit_83));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1537F2278,FREEREF(5));
  T19 = CALL2(1,VARREF(YgooSioSportYputs),x_1537F2278,LITREF(lit_84));
  T17 = T19;
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_46) {
  P tmpF2279;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2279 = T1;
  if (tmpF2279 != YPfalse) {
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

FUNCODEDEF(fun_generate_makefile_47) {
  P loader_;
  P code_outF2285;
  P out_nameF2284;
  P sepF2283;
  P exe_nameF2282;
  P init_nameF2281;
  P appnameF2280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF2280 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF2280,LITREF(lit_66));
  init_nameF2281 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF2280);
  exe_nameF2282 = T5;
  sepF2283 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF2280,LITREF(lit_67));
  out_nameF2284 = T8;
  code_outF2285 = YPfalse;
  code_outF2285 = BOXFAB(code_outF2285);
  T12 = FUNFAB(fun_45,6,code_outF2285,out_nameF2284,sepF2283,loader_,init_nameF2281,exe_nameF2282);
  T13 = FUNFAB(fun_46,1,code_outF2285);
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

FUNCODEDEF(fun_pp_48) {
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

FUNCODEDEF(fun_generate_header_49) {
  P code_out_,e_;
  P x_1540F2288;
  P x_1539F2287;
  P x_1538F2286;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1538F2286 = code_out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1538F2286,LITREF(lit_87));
  x_1539F2287 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1539F2287,LITREF(lit_88));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_1540F2288 = code_out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1540F2288,LITREF(lit_89));
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_trailer_50) {
  P code_out_;
  P x_1541F2289;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  x_1541F2289 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1541F2289,LITREF(lit_91));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
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

FUNCODEDEF(fun_generate_global_environment_52) {
  P code_out_,mod_;
  P x_1542F2290;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  x_1542F2290 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1542F2290,LITREF(lit_93));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1542F2290,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1542F2290,LITREF(lit_94));
  T3 = FUNFAB(fun_51,2,code_out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_53) {
  P code_out_,importedQ_,gb_;
  P x_1545F2297;
  P x_1544F2296;
  P x_1543F2295;
  P nameF2294;
  P tmpF2293;
  P tmpF2292;
  P kindF2291;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF2291 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2291,LITREF(lit_99));
  tmpF2292 = T4;
  if (tmpF2292 != YPfalse) {
    T5 = tmpF2292;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2291,LITREF(lit_100));
    tmpF2293 = T7;
    if (tmpF2293 != YPfalse) {
      T8 = tmpF2293;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),kindF2291,LITREF(lit_101));
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF2294 = T11;
    x_1543F2295 = kindF2291;
    x_1544F2296 = VARREF(YgooSmacrosYEE);
    T15 = CALL2(1,x_1544F2296,x_1543F2295,LITREF(lit_100));
    if (T15 != YPfalse) {
      T14 = LITREF(lit_102);
    } else {
      T17 = CALL2(1,x_1544F2296,x_1543F2295,LITREF(lit_101));
      if (T17 != YPfalse) {
        T16 = LITREF(lit_103);
      } else {
        T16 = LITREF(lit_104);
      }
      T14 = T16;
    }
    T13 = T14;
    T12 = T13;
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T12);
    x_1545F2297 = code_out_;
    if (importedQ_ != YPfalse) {
      T19 = LITREF(lit_105);
    } else {
      T19 = LITREF(lit_106);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1545F2297,T19);
    CALL2(1,VARREF(YgooSioSportYputs),x_1545F2297,LITREF(lit_107));
    T20 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1545F2297,T20);
    CALL2(1,VARREF(YgooSioSportYputs),x_1545F2297,LITREF(lit_108));
    T22 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T22);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1545F2297,T21);
    CALL2(1,VARREF(YgooSioSportYputs),x_1545F2297,LITREF(lit_109));
    T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF2294);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1545F2297,T23);
    T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1545F2297,LITREF(lit_110));
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

FUNCODEDEF(fun_loop_54) {
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
  P loopF2300;
  P stringF2299;
  P buffer_sizeF2298;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF2298 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF2298);
  check_type(T3,VARREF(YLstrG));
  stringF2299 = T3;
  T4 = FUNSHELL(1,fun_loop_54,4);
  loopF2300 = T4;
  FUNINIT(loopF2300, 4,buffer_sizeF2298,buffer_,stringF2299,loopF2300);
  T5 = CALL1(0,loopF2300,YPint((P)0));
  T2 = stringF2299;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_56) {
  P i_;
  P encF2302;
  P cF2301;
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
    cF2301 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF2301);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T7);
    encF2302 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF2302,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF2301);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF2302);
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

FUNCODEDEF(fun_mangle_string_literal_57) {
  P str_;
  P loopF2304;
  P lenF2303;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF2303 = T1;
  T3 = FUNSHELL(1,fun_loop_56,3);
  loopF2304 = T3;
  FUNINIT(loopF2304, 3,lenF2303,str_,loopF2304);
  T4 = CALL1(0,loopF2304,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_58) {
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

FUNCODEDEF(fun_process_integer_59) {
  P number_,index_;
  P resultF2310;
  P resultF2309;
  P digitF2308;
  P remainderF2307;
  P quotientF2306;
  P tup32F2305;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup32F2305 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2305,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF2306 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F2305,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF2307 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF2307);
  check_type(T7,VARREF(YLchrG));
  digitF2308 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF2306,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF2309 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF2308,resultF2309,YPint((P)0));
    T10 = resultF2309;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF2306,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF2310 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF2310);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF2308,resultF2310,T15);
    T12 = resultF2310;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_60) {
  P number_;
  P process_integerF2311;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T2 = FUNSHELL(1,fun_process_integer_59,1);
  process_integerF2311 = T2;
  FUNINIT(process_integerF2311, 1,process_integerF2311);
  T3 = CALL2(1,process_integerF2311,number_,YPint((P)1));
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1547_61) {
  P x_1546_;
  P iF2312;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1546_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1546_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1546_);
    iF2312 = T4;
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_integer),iF2312);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T6,VARREF(YevalSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF2312);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1546_);
    a1 = T8;
    x_1546_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1549_62) {
  P x_1548_;
  P mangleF2313;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1548_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1548_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1548_);
    mangleF2313 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF2313,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF2313,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1548_);
    a1 = T9;
    x_1548_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1551_63) {
  P x_1550_;
  P iF2314;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1550_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1550_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1550_);
    iF2314 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF2314);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF2314);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1550_);
    a1 = T7;
    x_1550_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1553_64) {
  P x_1552_;
  P iF2315;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1552_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1552_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1552_);
    iF2315 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF2315);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF2315);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1552_);
    a1 = T7;
    x_1552_ = a1;
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

FUNCODEDEF(fun_x_1555_66) {
  P x_1554_;
  P cF2316;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1554_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1554_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1554_);
    cF2316 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF2316);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1554_);
    a1 = T9;
    x_1554_ = a1;
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
  P x_1555F2317;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1555_66,2);
  x_1555F2317 = T0;
  FUNINIT(x_1555F2317, 2,buf_,x_1555F2317);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T1 = CALL1(0,x_1555F2317,T2);
UNLINK_STACK();
  QRET(buf_);
}

FUNCODEDEF(fun_mangle_raw_name_68) {
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

FUNCODEDEF(fun_mangle_raw_name_69) {
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

FUNCODEDEF(fun_mangle_local_name_70) {
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

FUNCODEDEF(fun_mangle_local_name_71) {
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

FUNCODEDEF(fun_x_1559_72) {
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

FUNCODEDEF(fun_73) {
  P return_;
  P x_1558F2324;
  P x_1558F2323;
  P x_1558F2322;
  P valueF2321;
  P placeF2320;
  P x_1558F2319;
  P x_1559F2318;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1559_72,1);
  x_1559F2318 = T1;
  FUNINIT(x_1559F2318, 1,return_);
  x_1558F2319 = FREEREF(0);
  placeF2320 = YPfalse;
  placeF2320 = BOXFAB(placeF2320);
  valueF2321 = YPfalse;
  valueF2321 = BOXFAB(valueF2321);
  T7 = CALL2(1,VARREF(YisaQ),x_1558F2319,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1558F2319,LITREF(lit_172),x_1559F2318);
    x_1558F2322 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1558F2322,x_1559F2318);
    BOXVAL(placeF2320) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1558F2322);
    x_1558F2323 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1558F2323,x_1559F2318);
    BOXVAL(valueF2321) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1558F2323);
    x_1558F2324 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1558F2324,x_1559F2318);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1559F2318,LITREF(lit_173),x_1558F2319);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_174));
  T21 = BOXVAL(placeF2320);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_175));
  T26 = BOXVAL(placeF2320);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = BOXVAL(valueF2321);
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

FUNCODEDEF(fun_74) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_73,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_75) {
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
  P loopF2326;
  P lenF2325;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF2325 = T1;
  T3 = FUNSHELL(1,fun_loop_75,4);
  loopF2326 = T3;
  FUNINIT(loopF2326, 4,lenF2325,buf_,name_,loopF2326);
  T4 = CALL1(0,loopF2326,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_77) {
  P buf_,mod_;
  P nameF2328;
  P tmpF2327;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),mod_);
  tmpF2327 = T2;
  if (tmpF2327 != YPfalse) {
    T3 = tmpF2327;
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
  nameF2328 = T1;
  T10 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF2328);
  T0 = T10;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_78) {
  P mod_,name_;
  P tmpF2329;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF2329 = T2;
  if (tmpF2329 != YPfalse) {
    T3 = tmpF2329;
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

FUNCODEDEF(fun_mangle_global_name_79) {
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
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_181));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_82) {
  P binding_;
  P tmpF2330;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF2330 = T1;
  if (tmpF2330 != YPfalse) {
    T2 = tmpF2330;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_183));
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

FUNCODEDEF(fun_mangle_binding_84) {
  P binding_;
  P tmpF2331;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF2331 = T1;
  if (tmpF2331 != YPfalse) {
    T2 = tmpF2331;
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

FUNCODEDEF(fun_mangle_binding_85) {
  P binding_;
  P tmpF2332;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF2332 = T1;
  if (tmpF2332 != YPfalse) {
    T2 = tmpF2332;
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

FUNCODEDEF(fun_x_1563_86) {
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

FUNCODEDEF(fun_87) {
  P return_;
  P out_varF2344;
  P x_1562F2343;
  P x_1562F2342;
  P x_1562F2341;
  P x_1562F2340;
  P x_1562F2339;
  P x_1562F2338;
  P bodyF2337;
  P clausesF2336;
  P out_valF2335;
  P x_1562F2334;
  P x_1563F2333;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1563_86,1);
  x_1563F2333 = T1;
  FUNINIT(x_1563F2333, 1,return_);
  x_1562F2334 = FREEREF(0);
  out_valF2335 = YPfalse;
  out_valF2335 = BOXFAB(out_valF2335);
  clausesF2336 = YPfalse;
  clausesF2336 = BOXFAB(clausesF2336);
  bodyF2337 = YPfalse;
  bodyF2337 = BOXFAB(bodyF2337);
  T9 = CALL2(1,VARREF(YisaQ),x_1562F2334,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1562F2334,LITREF(lit_187),x_1563F2333);
    x_1562F2338 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1562F2338,x_1563F2333);
    BOXVAL(out_valF2335) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1562F2338);
    x_1562F2339 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1562F2339,x_1563F2333);
    x_1562F2340 = T16;
    BOXVAL(clausesF2336) = x_1562F2340;
    x_1562F2341 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1562F2341,x_1563F2333);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1562F2339);
    x_1562F2342 = T19;
    BOXVAL(bodyF2337) = x_1562F2342;
    x_1562F2343 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1562F2343,x_1563F2333);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1563F2333,LITREF(lit_173),x_1562F2334);
  }
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2344 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T31 = CALL1(1,VARREF(Ylst),out_varF2344);
  T33 = BOXVAL(out_valF2335);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_189));
  T39 = BOXVAL(clausesF2336);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T49 = CALL1(1,VARREF(Ylst),YPtrue);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T53 = CALL1(1,VARREF(Ylst),YPfalse);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T50,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T61 = CALL1(1,VARREF(Ylst),out_varF2344);
  T62 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = BOXVAL(bodyF2337);
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

FUNCODEDEF(fun_88) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_87,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1567_89) {
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

FUNCODEDEF(fun_90) {
  P return_;
  P out_varF2354;
  P x_1566F2353;
  P x_1566F2352;
  P x_1566F2351;
  P x_1566F2350;
  P x_1566F2349;
  P bodyF2348;
  P out_valF2347;
  P x_1566F2346;
  P x_1567F2345;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1567_89,1);
  x_1567F2345 = T1;
  FUNINIT(x_1567F2345, 1,return_);
  x_1566F2346 = FREEREF(0);
  out_valF2347 = YPfalse;
  out_valF2347 = BOXFAB(out_valF2347);
  bodyF2348 = YPfalse;
  bodyF2348 = BOXFAB(bodyF2348);
  T7 = CALL2(1,VARREF(YisaQ),x_1566F2346,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1566F2346,LITREF(lit_196),x_1567F2345);
    x_1566F2349 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1566F2349,x_1567F2345);
    x_1566F2350 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1566F2350,x_1567F2345);
    BOXVAL(out_valF2347) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1566F2350);
    x_1566F2351 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1566F2351,x_1567F2345);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1566F2349);
    x_1566F2352 = T16;
    BOXVAL(bodyF2348) = x_1566F2352;
    x_1566F2353 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1566F2353,x_1567F2345);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1567F2345,LITREF(lit_173),x_1566F2346);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2354 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T28 = CALL1(1,VARREF(Ylst),out_varF2354);
  T30 = BOXVAL(out_valF2347);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T34 = CALL1(1,VARREF(Ylst),out_varF2354);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T36 = BOXVAL(bodyF2348);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T40 = CALL1(1,VARREF(Ylst),out_varF2354);
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

FUNCODEDEF(fun_x_1571_92) {
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

FUNCODEDEF(fun_loop_93) {
  P forms_,body_,firstQ_;
  P tmpF2355;
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
    tmpF2355 = firstQ_;
    if (tmpF2355 != YPfalse) {
      T8 = tmpF2355;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
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

FUNCODEDEF(fun_94) {
  P return_;
  P loopF2366;
  P out_varF2365;
  P x_1570F2364;
  P x_1570F2363;
  P x_1570F2362;
  P x_1570F2361;
  P x_1570F2360;
  P bodyF2359;
  P out_valF2358;
  P x_1570F2357;
  P x_1571F2356;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1571_92,1);
  x_1571F2356 = T1;
  FUNINIT(x_1571F2356, 1,return_);
  x_1570F2357 = FREEREF(0);
  out_valF2358 = YPfalse;
  out_valF2358 = BOXFAB(out_valF2358);
  bodyF2359 = YPfalse;
  bodyF2359 = BOXFAB(bodyF2359);
  T7 = CALL2(1,VARREF(YisaQ),x_1570F2357,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1570F2357,LITREF(lit_198),x_1571F2356);
    x_1570F2360 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1570F2360,x_1571F2356);
    x_1570F2361 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1570F2361,x_1571F2356);
    BOXVAL(out_valF2358) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1570F2361);
    x_1570F2362 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1570F2362,x_1571F2356);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1570F2360);
    x_1570F2363 = T16;
    BOXVAL(bodyF2359) = x_1570F2363;
    x_1570F2364 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1570F2364,x_1571F2356);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1571F2356,LITREF(lit_173),x_1570F2357);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF2365 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T28 = CALL1(1,VARREF(Ylst),out_varF2365);
  T30 = BOXVAL(out_valF2358);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T34 = CALL1(1,VARREF(Ylst),out_varF2365);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T37 = FUNSHELL(1,fun_loop_93,2);
  loopF2366 = T37;
  FUNINIT(loopF2366, 2,out_varF2365,loopF2366);
  T39 = BOXVAL(bodyF2359);
  T38 = CALL3(0,loopF2366,Ynil,T39,YPtrue);
  T36 = T38;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T43 = CALL1(1,VARREF(Ylst),out_varF2365);
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

FUNCODEDEF(fun_gen_result_96) {
  P e_,d_,code_out_;
  P tmpF2370;
  P x_1572F2369;
  P tmpF2368;
  P regF2367;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF2367 = T1;
  tmpF2368 = regF2367;
  if (tmpF2368 != YPfalse) {
    x_1572F2369 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1572F2369,LITREF(lit_203));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF2367);
    CALL2(1,VARREF(YgooSioSportYputs),x_1572F2369,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1572F2369,LITREF(lit_204));
    T5 = T7;
    tmpF2370 = T5;
    if (tmpF2370 != YPfalse) {
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

FUNCODEDEF(fun_x_1574_97) {
  P x_1573_;
  P iF2371;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1573_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1573_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1573_);
    iF2371 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_208));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1573_);
    a1 = T6;
    x_1573_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_depth_98) {
  P d_,code_out_;
  P x_1574F2372;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1574_97,2);
  x_1574F2372 = T1;
  FUNINIT(x_1574F2372, 2,code_out_,x_1574F2372);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1574F2372,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1578_99) {
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

FUNCODEDEF(fun_100) {
  P return_;
  P x_1577F2383;
  P x_1577F2382;
  P x_1577F2381;
  P x_1577F2380;
  P x_1577F2379;
  P x_1577F2378;
  P bodyF2377;
  P code_outF2376;
  P dF2375;
  P x_1577F2374;
  P x_1578F2373;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1578_99,1);
  x_1578F2373 = T1;
  FUNINIT(x_1578F2373, 1,return_);
  x_1577F2374 = FREEREF(0);
  dF2375 = YPfalse;
  dF2375 = BOXFAB(dF2375);
  code_outF2376 = YPfalse;
  code_outF2376 = BOXFAB(code_outF2376);
  bodyF2377 = YPfalse;
  bodyF2377 = BOXFAB(bodyF2377);
  T9 = CALL2(1,VARREF(YisaQ),x_1577F2374,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1577F2374,LITREF(lit_210),x_1578F2373);
    x_1577F2378 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1577F2378,x_1578F2373);
    x_1577F2379 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1577F2379,x_1578F2373);
    BOXVAL(dF2375) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1577F2379);
    x_1577F2380 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1577F2380,x_1578F2373);
    BOXVAL(code_outF2376) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1577F2380);
    x_1577F2381 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1577F2381,x_1578F2373);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1577F2378);
    x_1577F2382 = T21;
    BOXVAL(bodyF2377) = x_1577F2382;
    x_1577F2383 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1577F2383,x_1578F2373);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1578F2373,LITREF(lit_173),x_1577F2374);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_205));
  T31 = BOXVAL(dF2375);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T33 = BOXVAL(code_outF2376);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = BOXVAL(bodyF2377);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T39 = BOXVAL(code_outF2376);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
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

FUNCODEDEF(fun_101) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_100,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1582_102) {
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

FUNCODEDEF(fun_103) {
  P return_;
  P x_1581F2396;
  P x_1581F2395;
  P x_1581F2394;
  P x_1581F2393;
  P x_1581F2392;
  P x_1581F2391;
  P x_1581F2390;
  P bodyF2389;
  P code_outF2388;
  P dF2387;
  P eF2386;
  P x_1581F2385;
  P x_1582F2384;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1582_102,1);
  x_1582F2384 = T1;
  FUNINIT(x_1582F2384, 1,return_);
  x_1581F2385 = FREEREF(0);
  eF2386 = YPfalse;
  eF2386 = BOXFAB(eF2386);
  dF2387 = YPfalse;
  dF2387 = BOXFAB(dF2387);
  code_outF2388 = YPfalse;
  code_outF2388 = BOXFAB(code_outF2388);
  bodyF2389 = YPfalse;
  bodyF2389 = BOXFAB(bodyF2389);
  T11 = CALL2(1,VARREF(YisaQ),x_1581F2385,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1581F2385,LITREF(lit_215),x_1582F2384);
    x_1581F2390 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1581F2390,x_1582F2384);
    x_1581F2391 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1581F2391,x_1582F2384);
    BOXVAL(eF2386) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1581F2391);
    x_1581F2392 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1581F2392,x_1582F2384);
    BOXVAL(dF2387) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1581F2392);
    x_1581F2393 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1581F2393,x_1582F2384);
    BOXVAL(code_outF2388) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1581F2393);
    x_1581F2394 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1581F2394,x_1582F2384);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1581F2390);
    x_1581F2395 = T26;
    BOXVAL(bodyF2389) = x_1581F2395;
    x_1581F2396 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1581F2396,x_1582F2384);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1582F2384,LITREF(lit_173),x_1581F2385);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_210));
  T35 = BOXVAL(dF2387);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(code_outF2388);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T42 = BOXVAL(eF2386);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(dF2387);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(code_outF2388);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T39 = CALL5(1,VARREF(YgooSmacrosYcat),T40,T41,T43,T45,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = BOXVAL(bodyF2389);
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

FUNCODEDEF(fun_104) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_103,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1586_105) {
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

FUNCODEDEF(fun_106) {
  P return_;
  P x_1585F2409;
  P x_1585F2408;
  P x_1585F2407;
  P x_1585F2406;
  P x_1585F2405;
  P x_1585F2404;
  P x_1585F2403;
  P bodyF2402;
  P code_outF2401;
  P dF2400;
  P eF2399;
  P x_1585F2398;
  P x_1586F2397;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1586_105,1);
  x_1586F2397 = T1;
  FUNINIT(x_1586F2397, 1,return_);
  x_1585F2398 = FREEREF(0);
  eF2399 = YPfalse;
  eF2399 = BOXFAB(eF2399);
  dF2400 = YPfalse;
  dF2400 = BOXFAB(dF2400);
  code_outF2401 = YPfalse;
  code_outF2401 = BOXFAB(code_outF2401);
  bodyF2402 = YPfalse;
  bodyF2402 = BOXFAB(bodyF2402);
  T11 = CALL2(1,VARREF(YisaQ),x_1585F2398,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1585F2398,LITREF(lit_217),x_1586F2397);
    x_1585F2403 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1585F2403,x_1586F2397);
    x_1585F2404 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1585F2404,x_1586F2397);
    BOXVAL(eF2399) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1585F2404);
    x_1585F2405 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1585F2405,x_1586F2397);
    BOXVAL(dF2400) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1585F2405);
    x_1585F2406 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1585F2406,x_1586F2397);
    BOXVAL(code_outF2401) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1585F2406);
    x_1585F2407 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1585F2407,x_1586F2397);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1585F2403);
    x_1585F2408 = T26;
    BOXVAL(bodyF2402) = x_1585F2408;
    x_1585F2409 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1585F2409,x_1586F2397);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1586F2397,LITREF(lit_173),x_1585F2398);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_218));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_219));
  T36 = BOXVAL(eF2399);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_215));
  T43 = BOXVAL(eF2399);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(dF2400);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(code_outF2401);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T44,T46,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = BOXVAL(bodyF2402);
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

FUNCODEDEF(fun_107) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_106,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1588_108) {
  P x_1587_;
  P x_1589F2411;
  P qbF2410;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1587_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1587_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1587_);
    qbF2410 = T4;
    x_1589F2411 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1589F2411,LITREF(lit_225));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF2410);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1589F2411,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1589F2411,LITREF(lit_226));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1587_);
    a1 = T8;
    x_1587_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_109) {
  P code_out_,qbT_;
  P x_1588F2412;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
  T1 = FUNSHELL(1,fun_x_1588_108,2);
  x_1588F2412 = T1;
  FUNINIT(x_1588F2412, 2,code_out_,x_1588F2412);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_1588F2412,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1591_110) {
  P x_1590_;
  P x_1592F2414;
  P qbF2413;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1590_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1590_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1590_);
    qbF2413 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    x_1592F2414 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1592F2414,LITREF(lit_230));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF2413);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1592F2414,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1592F2414,LITREF(lit_231));
    T7 = CALL1(1,VARREF(YevalSastYbinding_info),qbF2413);
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),T7);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_213));
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1590_);
    a1 = T9;
    x_1590_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_111) {
  P code_out_,qbT_;
  P x_1591F2415;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1591_110,2);
  x_1591F2415 = T1;
  FUNINIT(x_1591F2415, 2,code_out_,x_1591F2415);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1591F2415,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_112) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_233));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_113) {
  P code_out_,qb_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_236);
  } else {
    T2 = LITREF(lit_237);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_238));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
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

FUNCODEDEF(fun_generate_quotation_116) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = FUNFAB(fun_115,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_117) {
  P code_out_,x_;
  P x_1593F2416;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1593F2416 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_239));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1593F2416,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1593F2416,LITREF(lit_240));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1593F2416,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1593F2416,LITREF(lit_241));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_118) {
  P code_out_,x_;
  P x_1594F2417;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1594F2417 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_242));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1594F2417,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1594F2417,LITREF(lit_243));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_1594F2417,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1594F2417,LITREF(lit_244));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_119) {
  P i_;
  P x_1596F2419;
  P x_1595F2418;
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
    x_1595F2418 = T4;
    x_1596F2419 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1596F2419,x_1595F2418,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1596F2419,x_1595F2418,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1596F2419,x_1595F2418,YPchr((P)120));
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

FUNCODEDEF(fun_120) {
  P done_;
  P loopF2420;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_119,3);
  loopF2420 = T1;
  FUNINIT(loopF2420, 3,FREEREF(0),done_,loopF2420);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF2420,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_121) {
  P o_;
  P sF2421;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF2421 = T1;
  T3 = FUNFAB(fun_120,1,sF2421);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_122) {
  P code_out_,x_;
  P x_1597F2422;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1597F2422 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_248));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1597F2422,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1597F2422,LITREF(lit_249));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1597F2422,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1597F2422,LITREF(lit_250));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_123) {
  P code_out_,x_;
  P x_1598F2423;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1598F2423 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_251));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1598F2423,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1598F2423,LITREF(lit_252));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1598F2423,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1598F2423,LITREF(lit_253));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1601_124) {
  P x_1600_;
  P eF2424;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1600_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1600_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1600_);
    eF2424 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_259));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF2424);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1600_);
    a1 = T6;
    x_1600_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_125) {
  P code_out_,x_;
  P x_1601F2426;
  P x_1599F2425;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1599F2425 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1599F2425,LITREF(lit_254));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_255));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1599F2425,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1599F2425,LITREF(lit_256));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1599F2425,T2);
  T3 = FUNSHELL(1,fun_x_1601_124,2);
  x_1601F2426 = T3;
  FUNINIT(x_1601F2426, 2,code_out_,x_1601F2426);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1601F2426,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_260));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_1604_126) {
  P x_1603_;
  P eF2427;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1603_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1603_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1603_);
    eF2427 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_266));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF2427);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1603_);
    a1 = T6;
    x_1603_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_127) {
  P code_out_,x_;
  P x_1604F2429;
  P x_1602F2428;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1602F2428 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1602F2428,LITREF(lit_261));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_262));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1602F2428,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1602F2428,LITREF(lit_263));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1602F2428,T2);
  T3 = FUNSHELL(1,fun_x_1604_126,2);
  x_1604F2429 = T3;
  FUNINIT(x_1604F2429, 2,code_out_,x_1604F2429);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1604F2429,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_267));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_quotation_128) {
  P code_out_,x_;
  P x_1605F2430;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1605F2430 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_268));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1605F2430,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1605F2430,LITREF(lit_269));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1605F2430,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1605F2430,LITREF(lit_270));
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

FUNCODEDEF(fun_reference_Gc_130) {
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

FUNCODEDEF(fun_reference_Gc_131) {
  P v_,code_out_;
  P x_1608F2433;
  P x_1607F2432;
  P x_1606F2431;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  x_1606F2431 = T1;
  x_1607F2432 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1607F2432,x_1606F2431,LITREF(lit_183));
  if (T4 != YPfalse) {
    T3 = LITREF(lit_274);
  } else {
    T6 = CALL2(1,x_1607F2432,x_1606F2431,LITREF(lit_100));
    if (T6 != YPfalse) {
      T5 = LITREF(lit_275);
    } else {
      T8 = CALL2(1,x_1607F2432,x_1606F2431,LITREF(lit_101));
      if (T8 != YPfalse) {
        T7 = LITREF(lit_276);
      } else {
        T7 = LITREF(lit_277);
      }
      T5 = T7;
    }
    T3 = T5;
  }
  T2 = T3;
  T0 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_1608F2433 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1608F2433,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
  T10 = CALL2(1,VARREF(YgooSioSportYput),x_1608F2433,YPchr((P)41));
  T9 = T10;
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_to_c_132) {
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
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_133) {
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

FUNCODEDEF(fun_gen_ref_134) {
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

FUNCODEDEF(fun_gen_ref_135) {
  P e_,code_out_;
  P x_1610F2435;
  P x_1609F2434;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_281));
  x_1609F2434 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1609F2434,YPchr((P)40));
  x_1610F2435 = code_out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1610F2435,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1609F2434,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_136) {
  P e_,code_out_;
  P x_1611F2437;
  P regF2436;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF2436 = T1;
  if (regF2436 != YPfalse) {
    x_1611F2437 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1611F2437,LITREF(lit_282));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF2436);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1611F2437,T5);
    T3 = T4;
    T2 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_283));
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_137) {
  P e_,code_out_;
  P x_1612F2438;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  x_1612F2438 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1612F2438,LITREF(lit_284));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1612F2438,T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_138) {
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

FUNCODEDEF(fun_gen_ref_139) {
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

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,code_out_;
  P x_1614F2440;
  P x_1613F2439;
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
  x_1613F2439 = T2;
  x_1614F2440 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1614F2440,x_1613F2439,LITREF(lit_100));
  if (T6 != YPfalse) {
    T5 = LITREF(lit_285);
  } else {
    T8 = CALL2(1,x_1614F2440,x_1613F2439,LITREF(lit_101));
    if (T8 != YPfalse) {
      T10 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T10 != YPfalse) {
        T9 = LITREF(lit_286);
      } else {
        T9 = LITREF(lit_287);
      }
      T7 = T9;
    } else {
      T7 = LITREF(lit_288);
    }
    T5 = T7;
  }
  T4 = T5;
  T1 = T4;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  T11 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T11,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_289));
  T12 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_290));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_to_c_141) {
  P e_,f_,d_,code_out_;
  P x_1615F2441;
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
      T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_291));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    x_1615F2441 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1615F2441,YPchr((P)40));
    T6 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T5 = CALL1(1,VARREF(YevalSastYreference_binding),T6);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T5,code_out_);
    T7 = CALL2(1,VARREF(YgooSioSportYput),x_1615F2441,YPchr((P)41));
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_142) {
  P e_,f_,d_,code_out_;
  P x_1616F2442;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_293));
    x_1616F2442 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1616F2442,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1616F2442,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_143) {
  P e_,f_,d_,code_out_;
  P x_1617F2443;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_294));
  x_1617F2443 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1617F2443,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1617F2443,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_295));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_144) {
  P e_,f_,d_,code_out_;
  P x_1618F2445;
  P bindingF2444;
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
  bindingF2444 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2444,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_296));
  x_1618F2445 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1618F2445,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2444,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1618F2445,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_145) {
  P e_,f_,d_,code_out_;
  P x_1619F2446;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_297));
  T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  x_1619F2446 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1619F2446,LITREF(lit_298));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1619F2446,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1619F2446,LITREF(lit_299));
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
    T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_300));
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
    T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_301));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_146) {
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

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_146,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1621_148) {
  P x_1620_;
  P argF2447;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1620_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1620_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1620_);
    argF2447 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF2447,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1620_);
    a1 = T6;
    x_1620_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1624_149) {
  P x_1623_,x_1622_;
  P x_1625F2451;
  P argF2450;
  P iF2449;
  P tmpF2448;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1623_, 0);
  ARG(x_1622_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1623_);
  tmpF2448 = T3;
  if (tmpF2448 != YPfalse) {
    T4 = tmpF2448;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1622_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1623_);
    iF2449 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1622_);
    argF2450 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    x_1625F2451 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1625F2451,LITREF(lit_308));
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF2449);
    CALL2(1,VARREF(YgooSioSportYputs),x_1625F2451,T10);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1625F2451,LITREF(lit_309));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF2450,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_213));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1623_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1622_);
    a1 = T13;
    a2 = T14;
    x_1623_ = a1;
    x_1622_ = a2;
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

FUNCODEDEF(fun_x_1628_150) {
  P x_1627_,x_1626_;
  P x_1629F2455;
  P bindingF2454;
  P iF2453;
  P tmpF2452;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1627_, 0);
  ARG(x_1626_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1627_);
  tmpF2452 = T3;
  if (tmpF2452 != YPfalse) {
    T4 = tmpF2452;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1626_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1627_);
    iF2453 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1626_);
    bindingF2454 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2454,FREEREF(1));
    x_1629F2455 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1629F2455,LITREF(lit_313));
    T11 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF2453);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1629F2455,T11);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_213));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1627_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1626_);
    a1 = T13;
    a2 = T14;
    x_1627_ = a1;
    x_1626_ = a2;
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

FUNCODEDEF(fun_generate_self_recursive_call_151) {
  P e_,f_,d_,code_out_;
  P x_1628F2458;
  P x_1624F2457;
  P x_1621F2456;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1621_148,4);
  x_1621F2456 = T0;
  FUNINIT(x_1621F2456, 4,f_,d_,code_out_,x_1621F2456);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1621F2456,T2);
  T4 = FUNSHELL(1,fun_x_1624_149,3);
  x_1624F2457 = T4;
  FUNINIT(x_1624F2457, 3,d_,code_out_,x_1624F2457);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_1624F2457,T6,T8);
  T10 = FUNSHELL(1,fun_x_1628_150,3);
  x_1628F2458 = T10;
  FUNINIT(x_1628F2458, 3,d_,code_out_,x_1628F2458);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_1628F2458,T12,T14);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_314));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_1631_152) {
  P x_1630_;
  P argF2459;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1630_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1630_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1630_);
    argF2459 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF2459,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1630_);
    a1 = T6;
    x_1630_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1636_153) {
  P x_1635_;
  P argF2460;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1635_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1635_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1635_);
    argF2460 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF2460,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1635_);
    a1 = T6;
    x_1635_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,code_out_;
  P x_1636F2472;
  P x_1634F2471;
  P x_1633F2470;
  P tmpF2469;
  P x_1632F2468;
  P x_1631F2467;
  P nF2466;
  P tmpF2465;
  P tmpF2464;
  P tmpF2463;
  P tmpF2462;
  P functionF2461;
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
  functionF2461 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF2462 = T4;
  if (tmpF2462 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_methodG));
    tmpF2463 = T7;
    if (tmpF2463 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF2464 = T10;
      if (tmpF2464 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF2461,VARREF(YevalSast_linearizeYLfree_referenceG));
        tmpF2465 = T14;
        if (tmpF2465 != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSast_linearizeYreference_selfQ),functionF2461);
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
    nF2466 = T19;
    T21 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_1631_152,4);
    x_1631F2467 = T22;
    FUNINIT(x_1631F2467, 4,f_,d_,code_out_,x_1631F2467);
    T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_1631F2467,T24);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1632F2468 = code_out_;
    T28 = CALL1(1,VARREF(Ynot),f_);
    tmpF2469 = T28;
    if (tmpF2469 != YPfalse) {
      T29 = tmpF2469;
    } else {
      T30 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
      T29 = T30;
    }
    T27 = T29;
    if (T27 != YPfalse) {
      T26 = LITREF(lit_317);
    } else {
      T26 = LITREF(lit_104);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1632F2468,T26);
    CALL2(1,VARREF(YgooSioSportYputs),x_1632F2468,LITREF(lit_318));
    T33 = CALL2(1,VARREF(YgooSmagYG),nF2466,VARREF(YevalSg2cYDnumber_call_templates));
    if (T33 != YPfalse) {
      T32 = LITREF(lit_319);
    } else {
      T32 = nF2466;
    }
    T31 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1632F2468,T32);
    x_1633F2470 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1633F2470,YPchr((P)40));
    T35 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
    if (T35 != YPfalse) {
      T34 = LITREF(lit_320);
    } else {
      T34 = LITREF(lit_321);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T34);
    T36 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T36,code_out_);
    T37 = CALL2(1,VARREF(YgooSmagYG),nF2466,VARREF(YevalSg2cYDnumber_call_templates));
    if (T37 != YPfalse) {
      x_1634F2471 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1634F2471,LITREF(lit_322));
      T39 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1634F2471,nF2466);
      T38 = T39;
    } else {
    }
    T40 = FUNSHELL(1,fun_x_1636_153,2);
    x_1636F2472 = T40;
    FUNINIT(x_1636F2472, 2,code_out_,x_1636F2472);
    T43 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T42 = CALL1(1,VARREF(YgooScolsScolYenum),T43);
    T41 = CALL1(0,x_1636F2472,T42);
    T44 = CALL2(1,VARREF(YgooSioSportYput),x_1633F2470,YPchr((P)41));
    T45 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T18 = T45;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1640_155) {
  P x_1639_,x_1638_;
  P xF2475;
  P firstQF2474;
  P tmpF2473;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1639_, 0);
  ARG(x_1638_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1639_);
  tmpF2473 = T3;
  if (tmpF2473 != YPfalse) {
    T4 = tmpF2473;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1638_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1639_);
    firstQF2474 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1638_);
    xF2475 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2474);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF2475,FREEREF(1));
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

FUNCODEDEF(fun_156) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_157) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_158) {
  P e_,f_,d_,code_out_;
  P x_1640F2477;
  P x_1637F2476;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_1637F2476 = code_out_;
  T2 = FUNSHELL(1,fun_x_1640_155,3);
  x_1640F2477 = T2;
  FUNINIT(x_1640F2477, 3,x_1637F2476,code_out_,x_1640F2477);
  T6 = fun_156;
  T7 = fun_157;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_1640F2477,T4,T8);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1644_159) {
  P x_1643_,x_1642_,x_1641_;
  P x_1645F2483;
  P bindingF2482;
  P typeF2481;
  P initF2480;
  P tmpF2479;
  P tmpF2478;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1643_, 0);
  ARG(x_1642_, 1);
  ARG(x_1641_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1643_);
  tmpF2478 = T3;
  if (tmpF2478 != YPfalse) {
    T4 = tmpF2478;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1642_);
    tmpF2479 = T6;
    if (tmpF2479 != YPfalse) {
      T7 = tmpF2479;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1641_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1643_);
    initF2480 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1642_);
    typeF2481 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1641_);
    bindingF2482 = T14;
    CALL4(1,VARREF(YevalSg2cYto_c),initF2480,FREEREF(0),FREEREF(1),FREEREF(2));
    T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF2481);
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALL4(1,VARREF(YevalSg2cYto_c),typeF2481,FREEREF(0),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_332));
      x_1645F2483 = FREEREF(2);
      CALL2(1,VARREF(YgooSioSportYput),x_1645F2483,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF2480,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYput),x_1645F2483,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),typeF2481,FREEREF(2));
      T17 = CALL2(1,VARREF(YgooSioSportYput),x_1645F2483,YPchr((P)41));
      T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_213));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2482,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_333));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF2480,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_213));
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1643_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1642_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1641_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1643_ = a1;
    x_1642_ = a2;
    x_1641_ = a3;
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

FUNCODEDEF(fun_to_c_160) {
  P e_,f_,d_,code_out_;
  P x_1644F2484;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1644_159,4);
  x_1644F2484 = T0;
  FUNINIT(x_1644F2484, 4,f_,d_,code_out_,x_1644F2484);
  T3 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T1 = CALL3(0,x_1644F2484,T2,T4,T6);
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T8,f_,d_,code_out_);
  T10 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T10 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T11 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T11,code_out_);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T9 = T12;
  } else {
    T9 = YPfalse;
  }
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1648_161) {
  P x_1647_,x_1646_;
  P bindingF2487;
  P initF2486;
  P tmpF2485;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_1647_, 0);
  ARG(x_1646_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1647_);
  tmpF2485 = T3;
  if (tmpF2485 != YPfalse) {
    T4 = tmpF2485;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1646_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1647_);
    initF2486 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1646_);
    bindingF2487 = T9;
    CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF2487,initF2486,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2487,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_337));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF2486,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_213));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1647_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1646_);
    a1 = T11;
    a2 = T12;
    x_1647_ = a1;
    x_1646_ = a2;
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

FUNCODEDEF(fun_to_c_162) {
  P e_,f_,d_,code_out_;
  P x_1648F2488;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1648_161,3);
  x_1648F2488 = T0;
  FUNINIT(x_1648F2488, 3,d_,code_out_,x_1648F2488);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_1648F2488,T2,T4);
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
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_163) {
  P e_,f_,d_,code_out_;
  P x_1649F2489;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_338));
  x_1649F2489 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1649F2489,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1649F2489,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_164) {
  P e_,f_,d_,code_out_;
  P x_1650F2490;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_339));
  x_1650F2490 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1650F2490,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1650F2490,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1650F2490,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_165) {
  P e_,f_,d_,code_out_;
  P x_1651F2491;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_340));
  x_1651F2491 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_341));
  CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_342));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_343));
  CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1651F2491,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1653_166) {
  P x_1652_;
  P argF2492;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1652_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1652_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1652_);
    argF2492 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF2492,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1652_);
    a1 = T6;
    x_1652_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1659_167) {
  P x_1658_,x_1657_;
  P argF2495;
  P firstQF2494;
  P tmpF2493;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1658_, 0);
  ARG(x_1657_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1658_);
  tmpF2493 = T3;
  if (tmpF2493 != YPfalse) {
    T4 = tmpF2493;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1657_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1658_);
    firstQF2494 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1657_);
    argF2495 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2494);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF2495,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1658_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1657_);
    a1 = T13;
    a2 = T14;
    x_1658_ = a1;
    x_1657_ = a2;
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

FUNCODEDEF(fun_168) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_169) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_170) {
  P e_,f_,d_,code_out_;
  P x_1659F2503;
  P x_1656F2502;
  P x_1655F2501;
  P x_1654F2500;
  P x_1653F2499;
  P tmpF2498;
  P tmpF2497;
  P bindingF2496;
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
  bindingF2496 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF2497 = T4;
  if (tmpF2497 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    tmpF2498 = T7;
    if (tmpF2498 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF2496,T10);
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
    T12 = FUNSHELL(1,fun_x_1653_166,4);
    x_1653F2499 = T12;
    FUNINIT(x_1653F2499, 4,f_,d_,code_out_,x_1653F2499);
    T15 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_1653F2499,T14);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1654F2500 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1654F2500,LITREF(lit_346));
    T18 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
    T17 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T18);
    T16 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1654F2500,T17);
    x_1655F2501 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1655F2501,YPchr((P)40));
    x_1656F2502 = code_out_;
    T20 = FUNSHELL(1,fun_x_1659_167,3);
    x_1659F2503 = T20;
    FUNINIT(x_1659F2503, 3,x_1656F2502,code_out_,x_1659F2503);
    T24 = fun_168;
    T25 = fun_169;
    T23 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T24,T25);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
    T27 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T26 = CALL1(1,VARREF(YgooScolsScolYenum),T27);
    T21 = CALL2(0,x_1659F2503,T22,T26);
    T19 = T21;
    T28 = CALL2(1,VARREF(YgooSioSportYput),x_1655F2501,YPchr((P)41));
    T29 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T2 = T29;
  }
  T0 = T2;
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

FUNCODEDEF(fun_x_1663_172) {
  P x_1662_;
  P xF2504;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1662_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1662_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1662_);
    xF2504 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF2504,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1662_);
    a1 = T6;
    x_1662_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_173) {
  P e_,f_,d_,code_out_;
  P x_1663F2509;
  P x_1661F2508;
  P x_1660F2507;
  P fF2506;
  P nF2505;
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
  nF2505 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF2506 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF2505,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF2506);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_171,3,fF2506,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_350));
    x_1660F2507 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1660F2507,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF2506);
    x_1661F2508 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1661F2508,LITREF(lit_351));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF2505);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1661F2508,T14);
    T15 = FUNSHELL(1,fun_x_1663_172,2);
    x_1663F2509 = T15;
    FUNINIT(x_1663F2509, 2,code_out_,x_1663F2509);
    T18 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    T16 = CALL1(0,x_1663F2509,T17);
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_1660F2507,YPchr((P)41));
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T6 = T20;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_174) {
  P b_,e_,f_,d_,code_out_;
  P x_1666F2514;
  P x_1665F2513;
  P x_1664F2512;
  P fF2511;
  P nF2510;
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
  nF2510 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF2511 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF2510,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF2511);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_356));
    x_1664F2512 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1664F2512,YPchr((P)40));
    x_1665F2513 = code_out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1665F2513,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_1664F2512,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF2511);
    CALL2(1,VARREF(YgooSioSportYput),x_1664F2512,YPchr((P)44));
    x_1666F2514 = code_out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF2510);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1666F2514,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1664F2512,YPchr((P)41));
    T8 = T15;
  }
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  T3 = T16;
  T0 = T3;
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

FUNCODEDEF(fun_x_1670_176) {
  P x_1669_;
  P xF2515;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1669_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1669_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1669_);
    xF2515 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF2515,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1669_);
    a1 = T6;
    x_1669_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_177) {
  P b_,e_,f_,d_,code_out_;
  P x_1670F2519;
  P x_1668F2518;
  P x_1667F2517;
  P nF2516;
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
  nF2516 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF2516,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_175,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_358));
    x_1667F2517 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1667F2517,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,code_out_);
    x_1668F2518 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1668F2518,LITREF(lit_359));
    T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1668F2518,nF2516);
    T9 = FUNSHELL(1,fun_x_1670_176,2);
    x_1670F2519 = T9;
    FUNINIT(x_1670F2519, 2,code_out_,x_1670F2519);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T10 = CALL1(0,x_1670F2519,T11);
    T13 = CALL2(1,VARREF(YgooSioSportYput),x_1667F2517,YPchr((P)41));
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T3 = T14;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_178) {
  P e_,f_,d_,code_out_;
  P x_1671F2520;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_362));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1671F2520 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1671F2520,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1671F2520,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1671F2520,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1671F2520,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_1675_179) {
  P x_1674_;
  P eF2521;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1674_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1674_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1674_);
    eF2521 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF2521);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1674_);
    a1 = T6;
    x_1674_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_out_list_builder_180) {
  P f_,code_out_,elts_;
  P x_1675F2524;
  P x_1673F2523;
  P x_1672F2522;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_365));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_366));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_1672F2522 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1672F2522,YPchr((P)40));
    x_1673F2523 = code_out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1673F2523,T7);
    T9 = FUNSHELL(1,fun_x_1675_179,3);
    x_1675F2524 = T9;
    FUNINIT(x_1675F2524, 3,code_out_,f_,x_1675F2524);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T10 = CALL1(0,x_1675F2524,T11);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_1672F2522,YPchr((P)41));
    T5 = T12;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_181) {
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

FUNCODEDEF(fun_gen_fab_list_182) {
  P code_out_,refs_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_181,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_183) {
  P code_out_,sig_;
  P specsF2526;
  P typesF2525;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF2525 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YevalSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF2525);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF2525,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF2525;
  }
  specsF2526 = T3;
  T9 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,specsF2526);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_184) {
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

FUNCODEDEF(fun_to_c_185) {
  P e_,f_,d_,code_out_;
  P x_1676F2527;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_184,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_373));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_1676F2527 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1676F2527,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F2527,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F2527,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F2527,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F2527,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1676F2527,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_374));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1676F2527,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_186) {
  P e_,f_,d_,code_out_;
  P x_1677F2528;
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
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_375));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1677F2528 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1677F2528,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_376));
  CALL2(1,VARREF(YgooSioSportYput),x_1677F2528,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1677F2528,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1677F2528,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_377));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1677F2528,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_378));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1677F2528,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_379));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1677F2528,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_380));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1677F2528,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1679_187) {
  P x_1678_;
  P defF2529;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1678_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1678_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1678_);
    defF2529 = T4;
    CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),FREEREF(0),defF2529);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1678_);
    a1 = T6;
    x_1678_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_188) {
  P code_out_,definitions_;
  P x_1679F2530;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_383));
  T1 = FUNSHELL(1,fun_x_1679_187,2);
  x_1679F2530 = T1;
  FUNINIT(x_1679F2530, 2,code_out_,x_1679F2530);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_1679F2530,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1684_189) {
  P x_1683_,x_1682_;
  P iF2533;
  P firstQF2532;
  P tmpF2531;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1683_, 0);
  ARG(x_1682_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1683_);
  tmpF2531 = T3;
  if (tmpF2531 != YPfalse) {
    T4 = tmpF2531;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1682_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1683_);
    firstQF2532 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1682_);
    iF2533 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2532);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_395));
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

FUNCODEDEF(fun_190) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_191) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_192) {
  P code_out_,defn_;
  P x_1684F2536;
  P x_1681F2535;
  P x_1680F2534;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  x_1680F2534 = code_out_;
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_388);
  } else {
    T0 = LITREF(lit_389);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1680F2534,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1680F2534,LITREF(lit_390));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1680F2534,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1680F2534,LITREF(lit_391));
  x_1681F2535 = code_out_;
  T5 = FUNSHELL(1,fun_x_1684_189,3);
  x_1684F2536 = T5;
  FUNINIT(x_1684F2536, 3,x_1681F2535,code_out_,x_1684F2536);
  T9 = fun_190;
  T10 = fun_191;
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL1(1,VARREF(YgooScolsSseqYbelow),T13);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  T6 = CALL2(0,x_1684F2536,T7,T11);
  T4 = T6;
  T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_396));
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_generate_function_binding_193) {
  P code_out_,defn_;
  P x_1686F2541;
  P nameF2540;
  P x_1685F2539;
  P tmpF2538;
  P nameF2537;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF2537 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF2537,VARREF(YevalSastYLmodule_bindingG));
  tmpF2538 = T4;
  if (tmpF2538 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF2537);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_398),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF2537);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF2537,YPfalse);
    if (T11 != YPfalse) {
      x_1685F2539 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1685F2539,LITREF(lit_399));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1685F2539,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF2537,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF2537);
        T16 = T18;
      } else {
        T16 = nameF2537;
      }
      nameF2540 = T16;
      x_1686F2541 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1686F2541,LITREF(lit_400));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF2540);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1686F2541,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_1686F2541,LITREF(lit_401));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1686F2541,T22);
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

FUNCODEDEF(fun_generate_function_forward_194) {
  P code_out_,defn_;
  P boundQF2542;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF2542 = T1;
  if (boundQF2542 != YPfalse) {
    T3 = LITREF(lit_402);
  } else {
    T3 = LITREF(lit_403);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_404));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_195) {
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

FUNCODEDEF(fun_generate_function_bodies_196) {
  P code_out_,definitions_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_406));
  T1 = FUNFAB(fun_195,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_197) {
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

FUNCODEDEF(fun_generate_functions_198) {
  P definitions_,f_,d_,code_out_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_197,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_199) {
  P definition_,f_,d_,code_out_;
  P x_1688F2544;
  P x_1687F2543;
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
  x_1687F2543 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1687F2543,LITREF(lit_411));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_412));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1687F2543,T2);
  x_1688F2544 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1688F2544,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1688F2544,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1688F2544,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1688F2544,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_413));
  CALL2(1,VARREF(YgooSioSportYput),x_1688F2544,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_414));
  CALL2(1,VARREF(YgooSioSportYput),x_1688F2544,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_1688F2544,YPchr((P)41));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_generate_function_body_reference_200) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_416));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_417));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1693_201) {
  P x_1692_,x_1691_,x_1690_;
  P x_1694F2550;
  P bF2549;
  P iF2548;
  P firstQF2547;
  P tmpF2546;
  P tmpF2545;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1692_, 0);
  ARG(x_1691_, 1);
  ARG(x_1690_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1692_);
  tmpF2545 = T3;
  if (tmpF2545 != YPfalse) {
    T4 = tmpF2545;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1691_);
    tmpF2546 = T6;
    if (tmpF2546 != YPfalse) {
      T7 = tmpF2546;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1690_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1692_);
    firstQF2547 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1691_);
    iF2548 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1690_);
    bF2549 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF2547);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    x_1694F2550 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1694F2550,LITREF(lit_425));
    T18 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF2548);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1694F2550,T18);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1692_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1691_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1690_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1692_ = a1;
    x_1691_ = a2;
    x_1690_ = a3;
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

FUNCODEDEF(fun_202) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_203) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_shadow_args_204) {
  P bindings_,code_out_;
  P x_1693F2552;
  P x_1689F2551;
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
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_420));
    x_1689F2551 = code_out_;
    T4 = FUNSHELL(1,fun_x_1693_201,3);
    x_1693F2552 = T4;
    FUNINIT(x_1693F2552, 3,x_1689F2551,code_out_,x_1693F2552);
    T8 = fun_202;
    T9 = fun_203;
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_1693F2552,T6,T10,T12);
    T3 = T5;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
    T0 = T13;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_205) {
  P defn_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_427));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_206) {
  P defn_,d_,code_out_;
  P x_1695F2553;
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
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_428));
  x_1695F2553 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1695F2553,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1695F2553,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_207) {
  P e_;
  P bindingF2554;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  bindingF2554 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF2554);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_430),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1701_208) {
  P x_1700_,x_1699_;
  P bindingF2557;
  P firstQF2556;
  P tmpF2555;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1700_, 0);
  ARG(x_1699_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1700_);
  tmpF2555 = T3;
  if (tmpF2555 != YPfalse) {
    T4 = tmpF2555;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1699_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1700_);
    firstQF2556 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1699_);
    bindingF2557 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2556);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_439));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF2557,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1700_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1699_);
    a1 = T13;
    a2 = T14;
    x_1700_ = a1;
    x_1699_ = a2;
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

FUNCODEDEF(fun_generate_function_code_211) {
  P code_out_,e_;
  P x_1701F2561;
  P x_1698F2560;
  P x_1697F2559;
  P x_1696F2558;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1696F2558 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1696F2558,LITREF(lit_432));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_433);
  } else {
    T0 = LITREF(lit_104);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1696F2558,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_434);
  } else {
    T1 = LITREF(lit_104);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1696F2558,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1696F2558,LITREF(lit_435));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,code_out_);
  x_1697F2559 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1697F2559,YPchr((P)40));
  x_1698F2560 = code_out_;
  T6 = FUNSHELL(1,fun_x_1701_208,3);
  x_1701F2561 = T6;
  FUNINIT(x_1701F2561, 3,x_1698F2560,code_out_,x_1701F2561);
  T10 = fun_209;
  T11 = fun_210;
  T9 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T10,T11);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T7 = CALL2(0,x_1701F2561,T8,T12);
  T5 = T7;
  T14 = CALL2(1,VARREF(YgooSioSportYput),x_1697F2559,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_440));
  T15 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T15,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T17,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_441));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_442));
  T18 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T18,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T19 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_443));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_dispatcherQ_212) {
  P definition_;
  P tmpF2565;
  P nameF2564;
  P tmpF2563;
  P bindingF2562;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF2562 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF2562,VARREF(YevalSastYLmodule_bindingG));
  tmpF2563 = T3;
  if (tmpF2563 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF2562);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF2564 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF2564,LITREF(lit_445));
    tmpF2565 = T9;
    if (tmpF2565 != YPfalse) {
      T10 = tmpF2565;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF2564,LITREF(lit_446));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF2564);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_447));
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

FUNCODEDEF(fun_x_1705_213) {
  P x_1704_,x_1703_;
  P bF2568;
  P firstQF2567;
  P tmpF2566;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1704_, 0);
  ARG(x_1703_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1704_);
  tmpF2566 = T3;
  if (tmpF2566 != YPfalse) {
    T4 = tmpF2566;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1703_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1704_);
    firstQF2567 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1703_);
    bF2568 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF2567);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF2568,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1704_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1703_);
    a1 = T13;
    a2 = T14;
    x_1704_ = a1;
    x_1703_ = a2;
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

FUNCODEDEF(fun_214) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_215) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_216) {
  P b_;
  P x_1706F2569;
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
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_455));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_456));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1706F2569 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1706F2569,LITREF(lit_457));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1706F2569,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1706F2569,LITREF(lit_458));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_213));
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

FUNCODEDEF(fun_generate_function_code_217) {
  P code_out_,definition_;
  P x_1705F2573;
  P x_1702F2572;
  P bindingsF2571;
  P offsetF2570;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF2570 = YPint((P)0);
  offsetF2570 = BOXFAB(offsetF2570);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF2571 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_448));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_449));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF2571);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_450));
    x_1702F2572 = code_out_;
    T7 = FUNSHELL(1,fun_x_1705_213,3);
    x_1705F2573 = T7;
    FUNINIT(x_1705F2573, 3,x_1702F2572,code_out_,x_1705F2573);
    T11 = fun_214;
    T12 = fun_215;
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T11,T12);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    T8 = CALL2(0,x_1705F2573,T9,T13);
    T6 = T8;
    T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_213));
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T17,code_out_);
  T18 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T18,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_454));
  T19 = FUNFAB(fun_216,2,code_out_,offsetF2570);
  CALL2(1,VARREF(YgooSmacrosYdo),T19,bindingsF2571);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_459));
  T20 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T20,definition_,YPint((P)1),code_out_);
  T22 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T21 = CALL1(1,VARREF(Ynot),T22);
  if (T21 != YPfalse) {
    T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_460));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_461));
  T2 = T24;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1708_218) {
  P x_1707_;
  P tempF2574;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1707_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1707_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1707_);
    tempF2574 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_466));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF2574,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_213));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1707_);
    a1 = T6;
    x_1707_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_219) {
  P temps_,code_out_;
  P x_1708F2575;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1708_218,2);
  x_1708F2575 = T1;
  FUNINIT(x_1708F2575, 2,code_out_,x_1708F2575);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_1708F2575,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_220) {
  P j_,i_;
  P tmpF2576;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YevalSg2cYTregisters_per_lineT));
  tmpF2576 = T2;
  if (tmpF2576 != YPfalse) {
    T3 = tmpF2576;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYE),j_,FREEREF(0));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_473));
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

FUNCODEDEF(fun_next_line_221) {
  P j_;
  P next_regF2577;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(j_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_471));
    T3 = FUNSHELL(1,fun_next_reg_220,5);
    next_regF2577 = T3;
    FUNINIT(next_regF2577, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),next_regF2577);
    T4 = CALL2(0,next_regF2577,j_,YPint((P)0));
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_222) {
  P regs_,code_out_;
  P next_lineF2579;
  P nregsF2578;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF2578 = T1;
  T3 = FUNSHELL(1,fun_next_line_221,4);
  next_lineF2579 = T3;
  FUNINIT(next_lineF2579, 4,nregsF2578,code_out_,next_lineF2579,regs_);
  T4 = CALL1(0,next_lineF2579,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_223) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_475),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_224) {
  P modname_;
  P x_1709F2580;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1709F2580 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1709F2580,LITREF(lit_478));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1709F2580,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1709F2580,LITREF(lit_479));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  P binding_;
  P home_modF2581;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF2581 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF2581);
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
  P maybe_declareF2584;
  P envF2583;
  P seenF2582;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF2582 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF2583 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_224,2);
  maybe_declareF2584 = T5;
  FUNINIT(maybe_declareF2584, 2,seenF2582,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2583);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF2584,T6);
  T9 = FUNFAB(fun_225,2,mod_,maybe_declareF2584);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1711_227) {
  P x_1710_;
  P x_1712F2586;
  P nF2585;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1710_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1710_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1710_);
    nF2585 = T4;
    x_1712F2586 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1712F2586,LITREF(lit_485));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF2585);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1712F2586,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1712F2586,LITREF(lit_486));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1710_);
    a1 = T8;
    x_1710_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_228) {
  P local_name_,binding_;
  P x_1713F2587;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1713F2587 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1713F2587,LITREF(lit_490));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1713F2587,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_1713F2587,LITREF(lit_491));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1713F2587,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1713F2587,LITREF(lit_492));
    T8 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1713F2587,T8);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1713F2587,LITREF(lit_493));
    T3 = T9;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_229) {
  P binding_;
  P x_1718F2592;
  P x_1717F2591;
  P x_1716F2590;
  P x_1715F2589;
  P x_1714F2588;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_1714F2588 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1714F2588,LITREF(lit_496));
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1714F2588,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1714F2588,LITREF(lit_497));
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    x_1715F2589 = T6;
    x_1716F2590 = VARREF(YgooSmacrosYEE);
    T9 = CALL2(1,x_1716F2590,x_1715F2589,LITREF(lit_99));
    if (T9 != YPfalse) {
      x_1717F2591 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1717F2591,LITREF(lit_498));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1717F2591,T11);
      T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1717F2591,LITREF(lit_499));
      T10 = T12;
      T8 = T10;
    } else {
      T14 = CALL2(1,x_1716F2590,x_1715F2589,LITREF(lit_101));
      if (T14 != YPfalse) {
        x_1718F2592 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_1718F2592,LITREF(lit_500));
        T16 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1718F2592,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1718F2592,LITREF(lit_501));
        T15 = T17;
        T13 = T15;
      } else {
        T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_502));
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

FUNCODEDEF(fun_x_1720_230) {
  P x_1719_;
  P x_1721F2596;
  P bindingF2595;
  P exported_asF2594;
  P tup33F2593;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(x_1719_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1719_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1719_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1719_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup33F2593 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F2593,YPint((P)0));
    exported_asF2594 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F2593,YPint((P)1));
    bindingF2595 = T10;
    x_1721F2596 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1721F2596,LITREF(lit_507));
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF2595);
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1721F2596,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1721F2596,LITREF(lit_508));
    T13 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF2594);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1721F2596,T13);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1721F2596,LITREF(lit_509));
    T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1719_);
    a1 = T16;
    x_1719_ = a1;
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
  P x_1724F2606;
  P x_1723F2605;
  P x_1722F2604;
  P x_1720F2603;
  P x_1711F2602;
  P uses_namesF2601;
  P usesF2600;
  P envF2599;
  P info_nameF2598;
  P nameF2597;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF2597 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF2597);
  info_nameF2598 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF2599 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2599);
  usesF2600 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF2600);
  uses_namesF2601 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_481));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_482));
  T10 = FUNSHELL(1,fun_x_1711_227,2);
  x_1711F2602 = T10;
  FUNINIT(x_1711F2602, 2,code_out_,x_1711F2602);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2601);
  T11 = CALL1(0,x_1711F2602,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_487));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_488));
  T13 = FUNFAB(fun_228,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_494));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_495));
  T15 = FUNFAB(fun_229,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_503));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_504));
  T17 = FUNSHELL(1,fun_x_1720_230,2);
  x_1720F2603 = T17;
  FUNINIT(x_1720F2603, 2,code_out_,x_1720F2603);
  T20 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_1720F2603,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_510));
  x_1722F2604 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1722F2604,LITREF(lit_511));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1722F2604,info_nameF2598);
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1722F2604,LITREF(lit_512));
  x_1723F2605 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1723F2605,LITREF(lit_513));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1723F2605,info_nameF2598);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1723F2605,LITREF(lit_514));
  x_1724F2606 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1724F2606,LITREF(lit_515));
  T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF2597);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1724F2606,T23);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1724F2606,LITREF(lit_516));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_517));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_518));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_519));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_520));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_521));
  T25 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_522));
  T8 = T25;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_232) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_524),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_233) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_526),T1,LITREF(lit_527));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1726_234) {
  P x_1725_;
  P x_1727F2608;
  P nF2607;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1725_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1725_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1725_);
    nF2607 = T4;
    x_1727F2608 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1727F2608,LITREF(lit_534));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF2607);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1727F2608,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1727F2608,LITREF(lit_535));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1725_);
    a1 = T8;
    x_1725_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1731_235) {
  P x_1730_;
  P x_1732F2610;
  P nF2609;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1730_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1730_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1730_);
    nF2609 = T4;
    x_1732F2610 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1732F2610,LITREF(lit_545));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF2609);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1732F2610,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1732F2610,LITREF(lit_546));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1730_);
    a1 = T8;
    x_1730_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_236) {
  P code_out_,mod_,form_;
  P x_1731F2619;
  P x_1729F2618;
  P x_1728F2617;
  P x_1726F2616;
  P uses_namesF2615;
  P usesF2614;
  P envF2613;
  P init_declF2612;
  P nameF2611;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_530);
  } else {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF2611 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF2611);
  init_declF2612 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF2613 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF2613);
  usesF2614 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF2614);
  uses_namesF2615 = T10;
  T11 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_531));
    T13 = FUNSHELL(1,fun_x_1726_234,2);
    x_1726F2616 = T13;
    FUNINIT(x_1726F2616, 2,code_out_,x_1726F2616);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2615);
    T14 = CALL1(0,x_1726F2616,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_536));
  x_1728F2617 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1728F2617,LITREF(lit_537));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1728F2617,init_declF2612);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1728F2617,LITREF(lit_538));
  x_1729F2618 = code_out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1729F2618,init_declF2612);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1729F2618,LITREF(lit_539));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_540));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_541));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_542));
  T18 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T18 != YPfalse) {
    T19 = FUNSHELL(1,fun_x_1731_235,2);
    x_1731F2619 = T19;
    FUNINIT(x_1731F2619, 2,code_out_,x_1731F2619);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF2615);
    T20 = CALL1(0,x_1731F2619,T21);
    T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_547));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_548));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_549));
  T9 = T23;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_237) {
  P code_out_,mod_;
  P x_1737F2626;
  P x_1736F2625;
  P x_1735F2624;
  P x_1734F2623;
  P x_1733F2622;
  P info_nameF2621;
  P nameF2620;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF2620 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF2620);
  info_nameF2621 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_551));
  x_1733F2622 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1733F2622,LITREF(lit_552));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1733F2622,info_nameF2621);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1733F2622,LITREF(lit_553));
  x_1734F2623 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1734F2623,LITREF(lit_554));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF2620);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1734F2623,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1734F2623,LITREF(lit_555));
  x_1735F2624 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1735F2624,LITREF(lit_556));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1735F2624,info_nameF2621);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1735F2624,LITREF(lit_557));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_558));
  x_1736F2625 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1736F2625,LITREF(lit_559));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_560));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1736F2625,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1736F2625,LITREF(lit_561));
  x_1737F2626 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1737F2626,LITREF(lit_562));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF2620);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1737F2626,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1737F2626,LITREF(lit_563));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_564));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_565));
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173;
DEFCREGS();
loop:
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  DYNDEFSET(YevalSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
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
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
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
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSg2cYmodule_loader_appname_setter,T8);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),VARREF(YevalSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
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
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
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
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSg2cYmodule_loader_app_modname_setter,T18);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),VARREF(YevalSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"<g2c-module>");
  T23 = (P)YPpair(VARREF(YevalSastYLmoduleG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_7),T23);
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
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
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
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSg2cYmodule_src_file_setter,T30);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
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
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
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
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSg2cYmodule_mtime_setter,T40);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
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
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYmodule_loader_module_type,T45);
  lit_14 = YPPsym((P)"load-module");
  lit_15 = YPPsym((P)"name");
  lit_16 = YPsb((P)"START");
  lit_17 = YPsb((P)"OPTIMIZE");
  lit_18 = YPsb((P)"EMIT");
  T54 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_15)),YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_14 = YPmet(FUNCODEREF(fun_load_module_14),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYload_module);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYload_module);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_load_module_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYload_module,T55);
  lit_19 = YPPsym((P)"module-up-to-date?");
  lit_20 = YPPsym((P)"mod");
  T59 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_19),T59,ENVNUL,PNUL,YPfalse);
  T60 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T60);
  lit_21 = YPPsym((P)"purge-outdated-modules");
  lit_22 = YPsb((P)" has changed.\n");
  T63 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_21),T61,ENVNUL,PNUL,YPfalse);
  T64 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T64);
  lit_23 = YPPsym((P)"g2c-def-app");
  lit_24 = YPPsym((P)"appname");
  lit_25 = YPPsym((P)"modname");
  T65 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_23),T65,ENVNUL,PNUL,YPfalse);
  T66 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T66);
  lit_26 = YPPsym((P)"g2c-build-app");
  lit_27 = YPsb((P)"Searching for undefined global bindings.\n");
  T67 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_26),T67,ENVNUL,PNUL,YPfalse);
  T68 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T68);
  lit_28 = YPPsym((P)"g2c-test");
  lit_29 = YPPsym((P)"x");
  lit_30 = YPsb((P)"g2c-");
  lit_31 = YPPsym((P)"eval/main");
  T69 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_28),T69,ENVNUL,PNUL,YPfalse);
  T70 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T70);
  VARSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_32 = YPPsym((P)"g2c-ast");
  lit_33 = YPPsym((P)"ast");
  lit_34 = YPPsym((P)"env");
  lit_35 = YPsb((P)"exp-%d-%d");
  T77 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPmet(FUNCODEREF(fun_g2c_ast_28),LITREF(lit_32),T71,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSg2cYg2c_ast);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSg2cYg2c_ast);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_g2c_ast_28;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSg2cYg2c_ast,T78);
  lit_36 = YPPsym((P)"g2c-exp");
  lit_37 = YPPsym((P)"exp");
  T82 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPmet(FUNCODEREF(fun_g2c_exp_29),LITREF(lit_36),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSg2cYg2c_exp);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSg2cYg2c_exp);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_g2c_exp_29;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSg2cYg2c_exp,T83);
  lit_38 = YPPsym((P)"compile-load");
  lit_39 = YPsb((P)".so");
  lit_40 = YPsb((P)".so");
  T87 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPmet(FUNCODEREF(fun_compile_load_30),LITREF(lit_38),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSg2cYcompile_load);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSg2cYcompile_load);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_compile_load_30;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSg2cYcompile_load,T88);
  lit_41 = YPPsym((P)"g2c-eval");
  T92 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_41),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalStopYg2c_eval);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalStopYg2c_eval);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_g2c_eval_31;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalStopYg2c_eval,T93);
  T97 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_41),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalStopYg2c_eval);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalStopYg2c_eval);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_g2c_eval_32;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalStopYg2c_eval,T98);
  lit_42 = YPsb((P)"g2c");
  T102 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_42),LITREF(lit_31));
  VARSET(YevalSg2cYTg2c_appT,T102);
  lit_43 = YPPsym((P)"g2c-top");
  T103 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_43),T103,ENVNUL,PNUL,YPfalse);
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
  lit_44 = YPPsym((P)"g2c-clean");
  lit_45 = YPsb((P)"g2c");
  T108 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_44),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalSg2cYg2c_clean);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSg2cYg2c_clean);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_g2c_clean_34;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSg2cYg2c_clean,T109);
  lit_46 = YPPsym((P)"compute-ast");
  lit_47 = YPPsym((P)"filename");
  lit_48 = YPPsym((P)"ct-env");
  lit_49 = YPsb((P)"READ");
  lit_50 = YPsb((P)"AST");
  T113 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_46),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalSg2cYcompute_ast);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSg2cYcompute_ast);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_compute_ast_35;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSg2cYcompute_ast,T114);
  lit_51 = YPPsym((P)"compute-program");
  lit_52 = YPPsym((P)"e");
  lit_53 = YPsb((P)"BOX");
  lit_54 = YPsb((P)"ANA");
  lit_55 = YPsb((P)"LFT");
  lit_56 = YPsb((P)"EXT");
  lit_57 = YPsb((P)"CLO");
  lit_58 = YPsb((P)"TMP");
  lit_59 = YPsb((P)"REG");
  T118 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_51),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSg2cYcompute_program);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSg2cYcompute_program);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_compute_program_36;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSg2cYcompute_program,T119);
  lit_60 = YPPsym((P)"generate-c-module");
  lit_61 = YPPsym((P)"code-out");
  lit_62 = YPPsym((P)"prg");
  T123 = YPsig(YPPlist(4,LITREF(lit_61),LITREF(lit_52),LITREF(lit_62),LITREF(lit_20)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_60),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YevalSg2cYgenerate_c_module);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSg2cYgenerate_c_module);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_generate_c_module_37;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSg2cYgenerate_c_module,T124);
  lit_63 = YPPsym((P)"generate-c-application");
  lit_64 = YPsb((P)"-init");
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_20)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_63),T128,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSg2cYgenerate_c_application);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSg2cYgenerate_c_application);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_generate_c_application_40;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSg2cYgenerate_c_application,T131);
  lit_65 = YPPsym((P)"generate-makefile");
  lit_66 = YPsb((P)"-init");
  lit_67 = YPsb((P)"Makefile");
  lit_68 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_69 = YPsb((P)"%,$(C_OBJS))\n");
  lit_70 = YPsb((P)": ..");
  lit_71 = YPsb((P)"grt.h\n");
  lit_72 = YPsb((P)"\t$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_73 = YPsb((P)"OBJS = \\\n");
  lit_74 = YPPsym((P)"put-obj");
  lit_75 = YPsb((P)"\t");
  lit_76 = YPsb((P)" \\\n");
  lit_77 = YPPsym((P)"n");
  lit_78 = YPsb((P)"\t");
  lit_79 = YPsb((P)"\n\n");
  lit_80 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_81 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_82 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)\n\n");
  lit_83 = YPsb((P)"clean:\n\trm -f ");
  lit_84 = YPsb((P)" $(OBJS)\n");
  T141 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_41 = YPmet(FUNCODEREF(fun_put_obj_41),LITREF(lit_74),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_77)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_47 = YPmet(FUNCODEREF(fun_generate_makefile_47),LITREF(lit_65),T135,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSg2cYgenerate_makefile);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSg2cYgenerate_makefile);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_generate_makefile_47;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSg2cYgenerate_makefile,T142);
  lit_85 = YPPsym((P)"pp");
  T146 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_48 = YPmet(FUNCODEREF(fun_pp_48),LITREF(lit_85),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSg2cYpp);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSg2cYpp);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_pp_48;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSg2cYpp,T147);
  lit_86 = YPPsym((P)"generate-header");
  lit_87 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_88 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_89 = YPsb((P)"#include \"dlgrt.h\"\n");
  T151 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_49 = YPmet(FUNCODEREF(fun_generate_header_49),LITREF(lit_86),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgenerate_header);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgenerate_header);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_generate_header_49;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgenerate_header,T152);
  lit_90 = YPPsym((P)"generate-trailer");
  lit_91 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T156 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_50 = YPmet(FUNCODEREF(fun_generate_trailer_50),LITREF(lit_90),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSg2cYgenerate_trailer);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSg2cYgenerate_trailer);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_generate_trailer_50;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSg2cYgenerate_trailer,T157);
  lit_92 = YPPsym((P)"generate-global-environment");
  lit_93 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_94 = YPsb((P)" */\n\n");
  lit_95 = YPPsym((P)"binding");
  T162 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_52 = YPmet(FUNCODEREF(fun_generate_global_environment_52),LITREF(lit_92),T161,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSg2cYgenerate_global_environment);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSg2cYgenerate_global_environment);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_generate_global_environment_52;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSg2cYgenerate_global_environment,T163);
  lit_96 = YPPsym((P)"generate-global-binding");
  lit_97 = YPPsym((P)"imported?");
  lit_98 = YPPsym((P)"gb");
  lit_99 = YPPsym((P)"global");
  lit_100 = YPPsym((P)"runtime");
  lit_101 = YPPsym((P)"dynamic");
  lit_102 = YPsb((P)"RTV");
  lit_103 = YPsb((P)"DYN");
  lit_104 = YPsb((P)"");
  lit_105 = YPsb((P)"EXT");
  lit_106 = YPsb((P)"DEF");
  lit_107 = YPsb((P)"(");
  lit_108 = YPsb((P)",\"");
  lit_109 = YPsb((P)"\",\"");
  lit_110 = YPsb((P)"\");\n");
  T167 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_97),LITREF(lit_98)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_53 = YPmet(FUNCODEREF(fun_generate_global_binding_53),LITREF(lit_96),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSg2cYgenerate_global_binding);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYgenerate_global_binding);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_generate_global_binding_53;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYgenerate_global_binding,T168);
  lit_111 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_111));
  lit_112 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_112));
  lit_113 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_113));
  lit_114 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_114));
  lit_115 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_115));
  lit_116 = YPsb((P)"M");
  T173 = VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_116));
  T172 = T173;
  return T172;
}

P YevalSg2cY___main_1___() {
  P x_1553F2632;
  P x_1551F2631;
  P x_1549F2630;
  P x_1547F2629;
  P tableF2628;
  P vecF2627;
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
  P T272,T273,T274,T275,T276,T277,T278,T279;
DEFCREGS();
loop:
  T0 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T0);
  T1 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T1);
  T2 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T2);
  T3 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T3);
  T4 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T4);
  T5 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T5);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T6 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T6);
  lit_117 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_118 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_119 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_120 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_121 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_122 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_123 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_124 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_125 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_126 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_127 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_128 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_129 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_130 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_131 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_132 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_133 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_134 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T7 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_117),LITREF(lit_118),LITREF(lit_119),LITREF(lit_120),LITREF(lit_121),LITREF(lit_122),LITREF(lit_123),LITREF(lit_124),LITREF(lit_125),LITREF(lit_126),LITREF(lit_127),LITREF(lit_128),LITREF(lit_129),LITREF(lit_130),LITREF(lit_131),LITREF(lit_132),LITREF(lit_133),LITREF(lit_134));
  VARSET(YevalSg2cYDmangles_data,T7);
  lit_135 = YPPsym((P)"char-buffer-as-string");
  lit_136 = YPPsym((P)"buffer");
  lit_137 = YPPsym((P)"loop");
  lit_138 = YPPsym((P)"i");
  T9 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_54 = YPmet(FUNCODEREF(fun_loop_54),LITREF(lit_137),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_136)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_135),T8,ENVNUL,PNUL,YPfalse);
  T10 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T10);
  lit_139 = YPsb((P)"\\t");
  lit_140 = YPsb((P)"\\f");
  lit_141 = YPsb((P)"\\r");
  lit_142 = YPsb((P)"\\n");
  lit_143 = YPsb((P)"\\\"");
  lit_144 = YPsb((P)"\\\\");
  T13 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T12 = XCALL2(1,VARREF(YgooScolsScolYfill),T13,YPfalse);
  vecF2627 = T12;
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_139),vecF2627,T14);
  T15 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_140),vecF2627,T15);
  T16 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_141),vecF2627,T16);
  T17 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_142),vecF2627,T17);
  T18 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_143),vecF2627,T18);
  T19 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_144),vecF2627,T19);
  T20 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF2627);
  T11 = T20;
  VARSET(YevalSg2cYDc_escapes,T11);
  lit_145 = YPPsym((P)"mangle-string-literal");
  lit_146 = YPPsym((P)"str");
  T22 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_56 = YPmet(FUNCODEREF(fun_loop_56),LITREF(lit_137),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_57 = YPmet(FUNCODEREF(fun_mangle_string_literal_57),LITREF(lit_145),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_mangle_string_literal_57;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSg2cYmangle_string_literal,T23);
  lit_147 = YPPsym((P)"sym");
  T27 = YPsig(YPPlist(1,LITREF(lit_147)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_58 = YPmet(FUNCODEREF(fun_mangle_string_literal_58),LITREF(lit_145),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_mangle_string_literal_58;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSg2cYmangle_string_literal,T28);
  lit_148 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_148));
  lit_149 = YPPsym((P)"mangle-integer");
  lit_150 = YPPsym((P)"number");
  lit_151 = YPPsym((P)"process-integer");
  lit_152 = YPPsym((P)"index");
  T33 = YPsig(YPPlist(2,LITREF(lit_150),LITREF(lit_152)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_59 = YPmet(FUNCODEREF(fun_process_integer_59),LITREF(lit_151),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_60 = YPmet(FUNCODEREF(fun_mangle_integer_60),LITREF(lit_149),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSg2cYmangle_integer);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSg2cYmangle_integer);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_mangle_integer_60;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSg2cYmangle_integer,T34);
  lit_153 = YPPsym((P)"x-1547");
  lit_154 = YPPsym((P)"x-1546");
  lit_155 = YPPsym((P)"x-1549");
  lit_156 = YPPsym((P)"x-1548");
  lit_157 = YPPsym((P)"x-1551");
  lit_158 = YPPsym((P)"x-1550");
  lit_159 = YPPsym((P)"x-1553");
  lit_160 = YPPsym((P)"x-1552");
  T41 = YPsig(YPPlist(1,LITREF(lit_154)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1547_61 = YPmet(FUNCODEREF(fun_x_1547_61),LITREF(lit_153),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1549_62 = YPmet(FUNCODEREF(fun_x_1549_62),LITREF(lit_155),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_158)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1551_63 = YPmet(FUNCODEREF(fun_x_1551_63),LITREF(lit_157),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1553_64 = YPmet(FUNCODEREF(fun_x_1553_64),LITREF(lit_159),T38,ENVNUL,PNUL,YPfalse);
  T44 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T43 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T44);
  tableF2628 = T43;
  T45 = FUNSHELL(1,fun_x_1547_61,2);
  x_1547F2629 = T45;
  FUNINIT(x_1547F2629, 2,tableF2628,x_1547F2629);
  T48 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T47 = XCALL1(1,VARREF(YgooScolsScolYenum),T48);
  T46 = XCALL1(0,x_1547F2629,T47);
  T49 = FUNSHELL(1,fun_x_1549_62,2);
  x_1549F2630 = T49;
  FUNINIT(x_1549F2630, 2,tableF2628,x_1549F2630);
  T51 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  T50 = XCALL1(0,x_1549F2630,T51);
  T52 = FUNSHELL(1,fun_x_1551_63,2);
  x_1551F2631 = T52;
  FUNINIT(x_1551F2631, 2,tableF2628,x_1551F2631);
  T56 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T57 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T55 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T56,VARREF(YgooSmagYLE),T57);
  T54 = XCALL1(1,VARREF(YgooScolsScolYenum),T55);
  T53 = XCALL1(0,x_1551F2631,T54);
  T58 = FUNSHELL(1,fun_x_1553_64,2);
  x_1553F2632 = T58;
  FUNINIT(x_1553F2632, 2,tableF2628,x_1553F2632);
  T62 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T63 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T61 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T62,VARREF(YgooSmagYLE),T63);
  T60 = XCALL1(1,VARREF(YgooScolsScolYenum),T61);
  T59 = XCALL1(0,x_1553F2632,T60);
  T42 = tableF2628;
  VARSET(YevalSg2cYDname_mangler_table,T42);
  lit_161 = YPPsym((P)"mangler-reset");
  T64 = YPsig(YPPlist(1,LITREF(lit_136)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_161),T64,ENVNUL,PNUL,YPfalse);
  T65 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T65);
  lit_162 = YPPsym((P)"mangle-name-into");
  lit_163 = YPPsym((P)"buf");
  lit_164 = YPPsym((P)"x-1555");
  lit_165 = YPPsym((P)"x-1554");
  T67 = YPsig(YPPlist(1,LITREF(lit_165)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1555_66 = YPmet(FUNCODEREF(fun_x_1555_66),LITREF(lit_164),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_162),T66,ENVNUL,PNUL,YPfalse);
  T68 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T68);
  lit_166 = YPPsym((P)"mangle-raw-name");
  T69 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_68 = YPmet(FUNCODEREF(fun_mangle_raw_name_68),LITREF(lit_166),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_mangle_raw_name_68;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSg2cYmangle_raw_name,T70);
  T74 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_69 = YPmet(FUNCODEREF(fun_mangle_raw_name_69),LITREF(lit_166),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_mangle_raw_name_69;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSg2cYmangle_raw_name,T75);
  lit_167 = YPPsym((P)"mangle-local-name");
  T79 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_70 = YPmet(FUNCODEREF(fun_mangle_local_name_70),LITREF(lit_167),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_mangle_local_name_70;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSg2cYmangle_local_name,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_71 = YPmet(FUNCODEREF(fun_mangle_local_name_71),LITREF(lit_167),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_mangle_local_name_71;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSg2cYmangle_local_name,T85);
  lit_168 = YPPsym((P)"return");
  lit_169 = YPPsym((P)"x-1559");
  lit_170 = YPPsym((P)"msg");
  lit_171 = YPPsym((P)"args");
  lit_172 = YPPsym((P)"or/set");
  lit_173 = YPsb((P)"Match Pattern Failure");
  lit_174 = YPPsym((P)"or");
  lit_175 = YPPsym((P)"set");
  T91 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1559_72 = YPmet(FUNCODEREF(fun_x_1559_72),LITREF(lit_169),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T92 = fun_74;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"or/set"),T92);
  lit_176 = YPPsym((P)"buf-cat2!");
  T94 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_75 = YPmet(FUNCODEREF(fun_loop_75),LITREF(lit_137),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_176),T93,ENVNUL,PNUL,YPfalse);
  T95 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T95);
  lit_177 = YPPsym((P)"mangle-module-into");
  T96 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_20)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_77 = YPmet(FUNCODEREF(fun_mangle_module_into_77),LITREF(lit_177),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYmangle_module_into);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYmangle_module_into);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_mangle_module_into_77;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYmangle_module_into,T97);
  lit_178 = YPPsym((P)"mangle-global-name");
  T101 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_78 = YPmet(FUNCODEREF(fun_mangle_global_name_78),LITREF(lit_178),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_mangle_global_name_78;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYmangle_global_name,T102);
  T106 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_79 = YPmet(FUNCODEREF(fun_mangle_global_name_79),LITREF(lit_178),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_mangle_global_name_79;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSg2cYmangle_global_name,T107);
  lit_179 = YPPsym((P)"mangle-boot-name");
  T111 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_179),T111,ENVNUL,PNUL,YPfalse);
  T112 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T112);
  lit_180 = YPPsym((P)"mangle-quotation-name");
  lit_181 = YPsb((P)"lit_");
  T113 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_180),T113,ENVNUL,PNUL,YPfalse);
  T114 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T114);
  lit_182 = YPPsym((P)"mangle-binding");
  lit_183 = YPPsym((P)"quotation");
  T115 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_82 = YPmet(FUNCODEREF(fun_mangle_binding_82),LITREF(lit_182),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSg2cYmangle_binding);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_mangle_binding_82;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSg2cYmangle_binding,T116);
  lit_184 = YPPsym((P)"mangle-local-marked-name");
  lit_185 = YPPsym((P)"marker");
  T120 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_185)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_184),T120,ENVNUL,PNUL,YPfalse);
  T121 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T121);
  T122 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_84 = YPmet(FUNCODEREF(fun_mangle_binding_84),LITREF(lit_182),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYmangle_binding);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_mangle_binding_84;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYmangle_binding,T123);
  T127 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_85 = YPmet(FUNCODEREF(fun_mangle_binding_85),LITREF(lit_182),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYmangle_binding);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_mangle_binding_85;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYmangle_binding,T128);
  lit_186 = YPPsym((P)"x-1563");
  lit_187 = YPPsym((P)"for-commas");
  lit_188 = YPPsym((P)"let");
  lit_189 = YPPsym((P)"for");
  lit_190 = YPPsym((P)"first?");
  lit_191 = YPPsym((P)"first-then");
  lit_192 = YPPsym((P)"op");
  lit_193 = YPPsym((P)"unless");
  lit_194 = YPPsym((P)"put");
  T134 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1563_86 = YPmet(FUNCODEREF(fun_x_1563_86),LITREF(lit_186),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_88;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T135);
  lit_195 = YPPsym((P)"x-1567");
  lit_196 = YPPsym((P)"between-parentheses");
  T138 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1567_89 = YPmet(FUNCODEREF(fun_x_1567_89),LITREF(lit_195),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T139 = fun_91;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T139);
  lit_197 = YPPsym((P)"x-1571");
  lit_198 = YPPsym((P)"between-parentheses-comma-separated");
  lit_199 = YPPsym((P)"forms");
  lit_200 = YPPsym((P)"body");
  T143 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1571_92 = YPmet(FUNCODEREF(fun_x_1571_92),LITREF(lit_197),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(3,LITREF(lit_199),LITREF(lit_200),LITREF(lit_190)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_93 = YPmet(FUNCODEREF(fun_loop_93),LITREF(lit_137),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T144 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T144);
  lit_201 = YPPsym((P)"gen-result");
  lit_202 = YPPsym((P)"d");
  lit_203 = YPsb((P)"T");
  lit_204 = YPsb((P)" = ");
  T145 = YPsig(YPPlist(3,LITREF(lit_52),LITREF(lit_202),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_96 = YPmet(FUNCODEREF(fun_gen_result_96),LITREF(lit_201),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSg2cYgen_result);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSg2cYgen_result);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_gen_result_96;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSg2cYgen_result,T146);
  lit_205 = YPPsym((P)"gen-depth");
  lit_206 = YPPsym((P)"x-1574");
  lit_207 = YPPsym((P)"x-1573");
  lit_208 = YPsb((P)"  ");
  T151 = YPsig(YPPlist(1,LITREF(lit_207)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1574_97 = YPmet(FUNCODEREF(fun_x_1574_97),LITREF(lit_206),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_202),LITREF(lit_61)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_98 = YPmet(FUNCODEREF(fun_gen_depth_98),LITREF(lit_205),T150,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgen_depth);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgen_depth);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_gen_depth_98;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgen_depth,T152);
  lit_209 = YPPsym((P)"x-1578");
  lit_210 = YPPsym((P)"with-statement");
  lit_211 = YPPsym((P)"seq");
  lit_212 = YPPsym((P)"puts");
  lit_213 = YPsb((P)";\n");
  T158 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1578_99 = YPmet(FUNCODEREF(fun_x_1578_99),LITREF(lit_209),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T159 = fun_101;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T159);
  lit_214 = YPPsym((P)"x-1582");
  lit_215 = YPPsym((P)"with-expression");
  T162 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1582_102 = YPmet(FUNCODEREF(fun_x_1582_102),LITREF(lit_214),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T163 = fun_104;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T163);
  lit_216 = YPPsym((P)"x-1586");
  lit_217 = YPPsym((P)"with-used-expression");
  lit_218 = YPPsym((P)"when");
  lit_219 = YPPsym((P)"program-register");
  T166 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_171)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1586_105 = YPmet(FUNCODEREF(fun_x_1586_105),LITREF(lit_216),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_107;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T167);
  lit_220 = YPPsym((P)"generate-quotation-forwards");
  lit_221 = YPPsym((P)"qb*");
  lit_222 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_223 = YPPsym((P)"x-1588");
  lit_224 = YPPsym((P)"x-1587");
  lit_225 = YPsb((P)"DEFLIT(lit_");
  lit_226 = YPsb((P)");\n");
  T169 = YPsig(YPPlist(1,LITREF(lit_224)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1588_108 = YPmet(FUNCODEREF(fun_x_1588_108),LITREF(lit_223),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_221)),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_109 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_109),LITREF(lit_220),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSg2cYgenerate_quotation_forwards);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSg2cYgenerate_quotation_forwards);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_generate_quotation_forwards_109;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T170);
  lit_227 = YPPsym((P)"generate-quotations");
  lit_228 = YPPsym((P)"x-1591");
  lit_229 = YPPsym((P)"x-1590");
  lit_230 = YPsb((P)"lit_");
  lit_231 = YPsb((P)" = ");
  T175 = YPsig(YPPlist(1,LITREF(lit_229)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1591_110 = YPmet(FUNCODEREF(fun_x_1591_110),LITREF(lit_228),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_221)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_111 = YPmet(FUNCODEREF(fun_generate_quotations_111),LITREF(lit_227),T174,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSg2cYgenerate_quotations);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSg2cYgenerate_quotations);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_generate_quotations_111;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSg2cYgenerate_quotations,T176);
  lit_232 = YPPsym((P)"false-name");
  lit_233 = YPsb((P)"%false");
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_112 = YPmet(FUNCODEREF(fun_false_name_112),LITREF(lit_232),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSg2cYfalse_name);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSg2cYfalse_name);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_false_name_112;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSg2cYfalse_name,T181);
  lit_234 = YPPsym((P)"generate-quotation");
  lit_235 = YPPsym((P)"qb");
  lit_236 = YPsb((P)"%true");
  lit_237 = YPsb((P)"%false");
  T185 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_235)),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPmet(FUNCODEREF(fun_generate_quotation_113),LITREF(lit_234),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_generate_quotation_113;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSg2cYgenerate_quotation,T186);
  lit_238 = YPsb((P)"nil");
  T191 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T190 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_235)),YPPlist(2,VARREF(YLanyG),T191),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_234),T190,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_generate_quotation_114;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSg2cYgenerate_quotation,T192);
  T197 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_235)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_116 = YPmet(FUNCODEREF(fun_generate_quotation_116),LITREF(lit_234),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_generate_quotation_116;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSg2cYgenerate_quotation,T198);
  lit_239 = YPsb((P)"%int");
  lit_240 = YPsb((P)"((P)");
  lit_241 = YPsb((P)")");
  T202 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_117 = YPmet(FUNCODEREF(fun_generate_quotation_117),LITREF(lit_234),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_generate_quotation_117;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSg2cYgenerate_quotation,T203);
  lit_242 = YPsb((P)"%chr");
  lit_243 = YPsb((P)"((P)");
  lit_244 = YPsb((P)")");
  T207 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_118 = YPmet(FUNCODEREF(fun_generate_quotation_118),LITREF(lit_234),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_generate_quotation_118;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSg2cYgenerate_quotation,T208);
  lit_245 = YPPsym((P)"float-to-c-string");
  lit_246 = YPPsym((P)"o");
  lit_247 = YPPsym((P)"done");
  T214 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_119 = YPmet(FUNCODEREF(fun_loop_119),LITREF(lit_137),T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(1,LITREF(lit_247)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(YPPlist(1,LITREF(lit_246)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_121 = YPmet(FUNCODEREF(fun_float_to_c_string_121),LITREF(lit_245),T212,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YevalSg2cYfloat_to_c_string);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSg2cYfloat_to_c_string);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_float_to_c_string_121;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSg2cYfloat_to_c_string,T215);
  lit_248 = YPsb((P)"%flo");
  lit_249 = YPsb((P)"(FLOINT(");
  lit_250 = YPsb((P)"))");
  T219 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_122 = YPmet(FUNCODEREF(fun_generate_quotation_122),LITREF(lit_234),T219,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_generate_quotation_122;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSg2cYgenerate_quotation,T220);
  lit_251 = YPsb((P)"%sb");
  lit_252 = YPsb((P)"((P)\"");
  lit_253 = YPsb((P)"\")");
  T224 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_123 = YPmet(FUNCODEREF(fun_generate_quotation_123),LITREF(lit_234),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T227 != YPfalse) {
    T226 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_generate_quotation_123;
  T225 = XCALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YevalSg2cYgenerate_quotation,T225);
  lit_254 = YPsb((P)"XCALLN(1, ");
  lit_255 = YPsb((P)"vec");
  lit_256 = YPsb((P)", ");
  lit_257 = YPPsym((P)"x-1601");
  lit_258 = YPPsym((P)"x-1600");
  lit_259 = YPsb((P)", ");
  lit_260 = YPsb((P)")");
  T230 = YPsig(YPPlist(1,LITREF(lit_258)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1601_124 = YPmet(FUNCODEREF(fun_x_1601_124),LITREF(lit_257),T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_125 = YPmet(FUNCODEREF(fun_generate_quotation_125),LITREF(lit_234),T229,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_generate_quotation_125;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSg2cYgenerate_quotation,T231);
  lit_261 = YPsb((P)"XCALLN(1, ");
  lit_262 = YPsb((P)"tup");
  lit_263 = YPsb((P)", ");
  lit_264 = YPPsym((P)"x-1604");
  lit_265 = YPPsym((P)"x-1603");
  lit_266 = YPsb((P)", ");
  lit_267 = YPsb((P)")");
  T236 = YPsig(YPPlist(1,LITREF(lit_265)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1604_126 = YPmet(FUNCODEREF(fun_x_1604_126),LITREF(lit_264),T236,ENVNUL,PNUL,YPfalse);
  T235 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_127 = YPmet(FUNCODEREF(fun_generate_quotation_127),LITREF(lit_234),T235,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_generate_quotation_127;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSg2cYgenerate_quotation,T237);
  lit_268 = YPsb((P)"%%sym");
  lit_269 = YPsb((P)"((P)\"");
  lit_270 = YPsb((P)"\")");
  T241 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_128 = YPmet(FUNCODEREF(fun_generate_quotation_128),LITREF(lit_234),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T244 != YPfalse) {
    T243 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_generate_quotation_128;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YevalSg2cYgenerate_quotation,T242);
  lit_271 = YPPsym((P)"binding->c");
  T246 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_271),T246,ENVNUL,PNUL,YPfalse);
  T247 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T247);
  lit_272 = YPPsym((P)"reference->c");
  lit_273 = YPPsym((P)"v");
  T249 = YPsig(YPPlist(2,LITREF(lit_273),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T248 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_272),T249,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T248);
  T250 = YPsig(YPPlist(2,LITREF(lit_273),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_130 = YPmet(FUNCODEREF(fun_reference_Gc_130),LITREF(lit_272),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YevalSg2cYreference_Gc);
  if (T253 != YPfalse) {
    T252 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_reference_Gc_130;
  T251 = XCALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YevalSg2cYreference_Gc,T251);
  lit_274 = YPsb((P)"LITREF");
  lit_275 = YPsb((P)"RTVREF");
  lit_276 = YPsb((P)"DYNREF");
  lit_277 = YPsb((P)"VARREF");
  T255 = YPsig(YPPlist(2,LITREF(lit_273),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_131 = YPmet(FUNCODEREF(fun_reference_Gc_131),LITREF(lit_272),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YevalSg2cYreference_Gc);
  if (T258 != YPfalse) {
    T257 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_reference_Gc_131;
  T256 = XCALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YevalSg2cYreference_Gc,T256);
  lit_278 = YPPsym((P)"to-c");
  lit_279 = YPPsym((P)"f");
  T261 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T260 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_278),T261,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T260);
  T262 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_132 = YPmet(FUNCODEREF(fun_to_c_132),LITREF(lit_278),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YevalSg2cYto_c);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSg2cYto_c);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_to_c_132;
  T263 = XCALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSg2cYto_c,T263);
  T267 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_133 = YPmet(FUNCODEREF(fun_to_c_133),LITREF(lit_278),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YevalSg2cYto_c);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSg2cYto_c);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_to_c_133;
  T268 = XCALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YevalSg2cYto_c,T268);
  lit_280 = YPPsym((P)"gen-ref");
  T274 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T273 = fun_gen_ref_134 = YPmet(FUNCODEREF(fun_gen_ref_134),LITREF(lit_280),T274,ENVNUL,PNUL,YPfalse);
  T278 = BOUNDP(YevalSg2cYgen_ref);
  if (T278 != YPfalse) {
    T277 = VARREF(YevalSg2cYgen_ref);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_gen_ref_134;
  T276 = XCALL2(1,VARREF(YPdefine_method),T277,T279);
  T275 = VARSET(YevalSg2cYgen_ref,T276);
  T272 = T275;
  return T272;
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
  P T304,T305,T306,T307,T308,T309,T310,T311,T312,T313;
DEFCREGS();
loop:
  lit_281 = YPsb((P)"FREEREF");
  T0 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_135 = YPmet(FUNCODEREF(fun_gen_ref_135),LITREF(lit_280),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_135;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_282 = YPsb((P)"T");
  lit_283 = YPsb((P)"T_1");
  T5 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_136 = YPmet(FUNCODEREF(fun_gen_ref_136),LITREF(lit_280),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_136;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSg2cYgen_ref,T6);
  lit_284 = YPsb((P)"(P)");
  T10 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_137 = YPmet(FUNCODEREF(fun_gen_ref_137),LITREF(lit_280),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSg2cYgen_ref);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSg2cYgen_ref);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_gen_ref_137;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSg2cYgen_ref,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_138 = YPmet(FUNCODEREF(fun_gen_ref_138),LITREF(lit_280),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSg2cYgen_ref);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSg2cYgen_ref);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_gen_ref_138;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSg2cYgen_ref,T16);
  T20 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_139 = YPmet(FUNCODEREF(fun_gen_ref_139),LITREF(lit_280),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSg2cYgen_ref);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYgen_ref);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_gen_ref_139;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYgen_ref,T21);
  lit_285 = YPsb((P)"RTVSET(");
  lit_286 = YPsb((P)"DYNDEFSET(");
  lit_287 = YPsb((P)"DYNSET(");
  lit_288 = YPsb((P)"VARSET(");
  lit_289 = YPsb((P)",");
  lit_290 = YPsb((P)")");
  T25 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_278),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_140;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYto_c,T26);
  lit_291 = YPsb((P)"RTV");
  lit_292 = YPsb((P)"BOUNDP");
  T30 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_141 = YPmet(FUNCODEREF(fun_to_c_141),LITREF(lit_278),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_141;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSg2cYto_c,T31);
  lit_293 = YPsb((P)"BOXVAL");
  T35 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_142 = YPmet(FUNCODEREF(fun_to_c_142),LITREF(lit_278),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_142;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSg2cYto_c,T36);
  lit_294 = YPsb((P)"BOXVAL");
  lit_295 = YPsb((P)" = ");
  T40 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_143 = YPmet(FUNCODEREF(fun_to_c_143),LITREF(lit_278),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSg2cYto_c);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSg2cYto_c);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_to_c_143;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSg2cYto_c,T41);
  lit_296 = YPsb((P)" = BOXFAB");
  T45 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_144 = YPmet(FUNCODEREF(fun_to_c_144),LITREF(lit_278),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSg2cYto_c);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSg2cYto_c);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_to_c_144;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSg2cYto_c,T46);
  lit_297 = YPsb((P)"if (");
  lit_298 = YPsb((P)" != ");
  lit_299 = YPsb((P)") {\n");
  lit_300 = YPsb((P)"} else {\n");
  lit_301 = YPsb((P)"}\n");
  T50 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_145 = YPmet(FUNCODEREF(fun_to_c_145),LITREF(lit_278),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSg2cYto_c);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSg2cYto_c);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_to_c_145;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSg2cYto_c,T51);
  T56 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_278),T55,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSg2cYto_c);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSg2cYto_c);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_to_c_147;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSg2cYto_c,T57);
  lit_302 = YPPsym((P)"generate-self-recursive-call");
  lit_303 = YPPsym((P)"x-1621");
  lit_304 = YPPsym((P)"x-1620");
  lit_305 = YPPsym((P)"x-1624");
  lit_306 = YPPsym((P)"x-1623");
  lit_307 = YPPsym((P)"x-1622");
  lit_308 = YPsb((P)"a");
  lit_309 = YPsb((P)" = ");
  lit_310 = YPPsym((P)"x-1628");
  lit_311 = YPPsym((P)"x-1627");
  lit_312 = YPPsym((P)"x-1626");
  lit_313 = YPsb((P)" = a");
  lit_314 = YPsb((P)"goto loop");
  T64 = YPsig(YPPlist(1,LITREF(lit_304)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1621_148 = YPmet(FUNCODEREF(fun_x_1621_148),LITREF(lit_303),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(2,LITREF(lit_306),LITREF(lit_307)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1624_149 = YPmet(FUNCODEREF(fun_x_1624_149),LITREF(lit_305),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(2,LITREF(lit_311),LITREF(lit_312)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1628_150 = YPmet(FUNCODEREF(fun_x_1628_150),LITREF(lit_310),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_151 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_151),LITREF(lit_302),T61,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YevalSg2cYgenerate_self_recursive_call);
  if (T67 != YPfalse) {
    T66 = VARREF(YevalSg2cYgenerate_self_recursive_call);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_generate_self_recursive_call_151;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YevalSg2cYgenerate_self_recursive_call,T65);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_315 = YPPsym((P)"x-1631");
  lit_316 = YPPsym((P)"x-1630");
  lit_317 = YPsb((P)"X");
  lit_318 = YPsb((P)"CALL");
  lit_319 = YPsb((P)"N");
  lit_320 = YPsb((P)"0,");
  lit_321 = YPsb((P)"1,");
  lit_322 = YPsb((P)",");
  lit_323 = YPPsym((P)"x-1636");
  lit_324 = YPPsym((P)"x-1635");
  T71 = YPsig(YPPlist(1,LITREF(lit_316)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1631_152 = YPmet(FUNCODEREF(fun_x_1631_152),LITREF(lit_315),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(1,LITREF(lit_324)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1636_153 = YPmet(FUNCODEREF(fun_x_1636_153),LITREF(lit_323),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_278),T69,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSg2cYto_c);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSg2cYto_c);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_to_c_154;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSg2cYto_c,T72);
  lit_325 = YPPsym((P)"x-1640");
  lit_326 = YPPsym((P)"x-1639");
  lit_327 = YPPsym((P)"x-1638");
  T79 = YPsig(YPPlist(2,LITREF(lit_326),LITREF(lit_327)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1640_155 = YPmet(FUNCODEREF(fun_x_1640_155),LITREF(lit_325),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_157 = YPmet(FUNCODEREF(fun_157),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_278),T76,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSg2cYto_c);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSg2cYto_c);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_to_c_158;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSg2cYto_c,T80);
  lit_328 = YPPsym((P)"x-1644");
  lit_329 = YPPsym((P)"x-1643");
  lit_330 = YPPsym((P)"x-1642");
  lit_331 = YPPsym((P)"x-1641");
  lit_332 = YPsb((P)"check_type");
  lit_333 = YPsb((P)" = ");
  T85 = YPsig(YPPlist(3,LITREF(lit_329),LITREF(lit_330),LITREF(lit_331)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1644_159 = YPmet(FUNCODEREF(fun_x_1644_159),LITREF(lit_328),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_160 = YPmet(FUNCODEREF(fun_to_c_160),LITREF(lit_278),T84,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSg2cYto_c);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSg2cYto_c);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_to_c_160;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSg2cYto_c,T86);
  lit_334 = YPPsym((P)"x-1648");
  lit_335 = YPPsym((P)"x-1647");
  lit_336 = YPPsym((P)"x-1646");
  lit_337 = YPsb((P)" = ");
  T91 = YPsig(YPPlist(2,LITREF(lit_335),LITREF(lit_336)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1648_161 = YPmet(FUNCODEREF(fun_x_1648_161),LITREF(lit_334),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_162 = YPmet(FUNCODEREF(fun_to_c_162),LITREF(lit_278),T90,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSg2cYto_c);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSg2cYto_c);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_to_c_162;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSg2cYto_c,T92);
  lit_338 = YPsb((P)"with_exit");
  T96 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_163 = YPmet(FUNCODEREF(fun_to_c_163),LITREF(lit_278),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_163;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYto_c,T97);
  lit_339 = YPsb((P)"with_cleanup");
  T101 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_164 = YPmet(FUNCODEREF(fun_to_c_164),LITREF(lit_278),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYto_c);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYto_c);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_to_c_164;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYto_c,T102);
  lit_340 = YPsb((P)"CALLN");
  lit_341 = YPsb((P)"1");
  lit_342 = YPsb((P)"%with-monitor");
  lit_343 = YPsb((P)"5");
  T106 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPmet(FUNCODEREF(fun_to_c_165),LITREF(lit_278),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSg2cYto_c);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSg2cYto_c);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_to_c_165;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSg2cYto_c,T107);
  lit_344 = YPPsym((P)"x-1653");
  lit_345 = YPPsym((P)"x-1652");
  lit_346 = YPsb((P)"(P)");
  lit_347 = YPPsym((P)"x-1659");
  lit_348 = YPPsym((P)"x-1658");
  lit_349 = YPPsym((P)"x-1657");
  T115 = YPsig(YPPlist(1,LITREF(lit_345)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1653_166 = YPmet(FUNCODEREF(fun_x_1653_166),LITREF(lit_344),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,LITREF(lit_348),LITREF(lit_349)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1659_167 = YPmet(FUNCODEREF(fun_x_1659_167),LITREF(lit_347),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPmet(FUNCODEREF(fun_to_c_170),LITREF(lit_278),T111,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSg2cYto_c);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSg2cYto_c);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_to_c_170;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSg2cYto_c,T116);
  lit_350 = YPsb((P)"FUNFAB");
  lit_351 = YPsb((P)",");
  lit_352 = YPPsym((P)"x-1663");
  lit_353 = YPPsym((P)"x-1662");
  T122 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(1,LITREF(lit_353)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1663_172 = YPmet(FUNCODEREF(fun_x_1663_172),LITREF(lit_352),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_173 = YPmet(FUNCODEREF(fun_to_c_173),LITREF(lit_278),T120,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYto_c);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYto_c);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_to_c_173;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYto_c,T123);
  lit_354 = YPPsym((P)"funshell-to-c");
  lit_355 = YPPsym((P)"b");
  lit_356 = YPsb((P)"FUNSHELL");
  T127 = YPsig(YPPlist(5,LITREF(lit_355),LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_174 = YPmet(FUNCODEREF(fun_funshell_to_c_174),LITREF(lit_354),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYfunshell_to_c);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYfunshell_to_c);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_funshell_to_c_174;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYfunshell_to_c,T128);
  lit_357 = YPPsym((P)"funinit-to-c");
  lit_358 = YPsb((P)"FUNINIT");
  lit_359 = YPsb((P)", ");
  lit_360 = YPPsym((P)"x-1670");
  lit_361 = YPPsym((P)"x-1669");
  T134 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_361)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1670_176 = YPmet(FUNCODEREF(fun_x_1670_176),LITREF(lit_360),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(5,LITREF(lit_355),LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_177 = YPmet(FUNCODEREF(fun_funinit_to_c_177),LITREF(lit_357),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSg2cYfuninit_to_c);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSg2cYfuninit_to_c);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_funinit_to_c_177;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSg2cYfuninit_to_c,T135);
  lit_362 = YPsb((P)"%macro");
  T139 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_178 = YPmet(FUNCODEREF(fun_to_c_178),LITREF(lit_278),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSg2cYto_c);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSg2cYto_c);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_to_c_178;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSg2cYto_c,T140);
  lit_363 = YPPsym((P)"out-list-builder");
  lit_364 = YPPsym((P)"elts");
  lit_365 = YPsb((P)"nil");
  lit_366 = YPsb((P)"%%list");
  lit_367 = YPPsym((P)"x-1675");
  lit_368 = YPPsym((P)"x-1674");
  T145 = YPsig(YPPlist(1,LITREF(lit_368)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1675_179 = YPmet(FUNCODEREF(fun_x_1675_179),LITREF(lit_367),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(3,LITREF(lit_279),LITREF(lit_61),LITREF(lit_364)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_180 = YPmet(FUNCODEREF(fun_out_list_builder_180),LITREF(lit_363),T144,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSg2cYout_list_builder);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSg2cYout_list_builder);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_out_list_builder_180;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSg2cYout_list_builder,T146);
  lit_369 = YPPsym((P)"gen-fab-list");
  lit_370 = YPPsym((P)"refs");
  T151 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_370)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_182 = YPmet(FUNCODEREF(fun_gen_fab_list_182),LITREF(lit_369),T150,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgen_fab_list);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgen_fab_list);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_gen_fab_list_182;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgen_fab_list,T152);
  lit_371 = YPPsym((P)"generate-function-specs");
  lit_372 = YPPsym((P)"sig");
  T156 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_372)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_183 = YPmet(FUNCODEREF(fun_generate_function_specs_183),LITREF(lit_371),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSg2cYgenerate_function_specs);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSg2cYgenerate_function_specs);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_generate_function_specs_183;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSg2cYgenerate_function_specs,T157);
  lit_373 = YPsb((P)"%sig");
  lit_374 = YPsb((P)"nil");
  T162 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_185 = YPmet(FUNCODEREF(fun_to_c_185),LITREF(lit_278),T161,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSg2cYto_c);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSg2cYto_c);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_to_c_185;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSg2cYto_c,T163);
  lit_375 = YPsb((P)"%gen");
  lit_376 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_377 = YPsb((P)"nil");
  lit_378 = YPsb((P)"%false");
  lit_379 = YPsb((P)"%false");
  lit_380 = YPsb((P)"%false");
  T167 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_186 = YPmet(FUNCODEREF(fun_to_c_186),LITREF(lit_278),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSg2cYto_c);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYto_c);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_to_c_186;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYto_c,T168);
  lit_381 = YPPsym((P)"generate-function-forwards");
  lit_382 = YPPsym((P)"definitions");
  lit_383 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_384 = YPPsym((P)"x-1679");
  lit_385 = YPPsym((P)"x-1678");
  T173 = YPsig(YPPlist(1,LITREF(lit_385)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1679_187 = YPmet(FUNCODEREF(fun_x_1679_187),LITREF(lit_384),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_382)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_188 = YPmet(FUNCODEREF(fun_generate_function_forwards_188),LITREF(lit_381),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSg2cYgenerate_function_forwards);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSg2cYgenerate_function_forwards);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_generate_function_forwards_188;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSg2cYgenerate_function_forwards,T174);
  lit_386 = YPPsym((P)"generate-function-forward");
  lit_387 = YPPsym((P)"defn");
  lit_388 = YPsb((P)"static");
  lit_389 = YPsb((P)"extern");
  lit_390 = YPsb((P)" P ");
  lit_391 = YPsb((P)" (");
  lit_392 = YPPsym((P)"x-1684");
  lit_393 = YPPsym((P)"x-1683");
  lit_394 = YPPsym((P)"x-1682");
  lit_395 = YPsb((P)"P");
  lit_396 = YPsb((P)");\n");
  T181 = YPsig(YPPlist(2,LITREF(lit_393),LITREF(lit_394)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1684_189 = YPmet(FUNCODEREF(fun_x_1684_189),LITREF(lit_392),T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_387)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_192 = YPmet(FUNCODEREF(fun_generate_function_forward_192),LITREF(lit_386),T178,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_generate_function_forward_192;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSg2cYgenerate_function_forward,T182);
  lit_397 = YPPsym((P)"generate-function-binding");
  lit_398 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_399 = YPsb((P)"fun_");
  lit_400 = YPsb((P)"fun_");
  lit_401 = YPsb((P)"_");
  T186 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_387)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_193 = YPmet(FUNCODEREF(fun_generate_function_binding_193),LITREF(lit_397),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSg2cYgenerate_function_binding);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSg2cYgenerate_function_binding);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_generate_function_binding_193;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSg2cYgenerate_function_binding,T187);
  lit_402 = YPsb((P)"FUNFOR(");
  lit_403 = YPsb((P)"LOCFOR(");
  lit_404 = YPsb((P)");\n");
  T191 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_387)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_194 = YPmet(FUNCODEREF(fun_generate_function_forward_194),LITREF(lit_386),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_generate_function_forward_194;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSg2cYgenerate_function_forward,T192);
  lit_405 = YPPsym((P)"generate-function-bodies");
  lit_406 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_407 = YPPsym((P)"def");
  T197 = YPsig(YPPlist(1,LITREF(lit_407)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_382)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_196 = YPmet(FUNCODEREF(fun_generate_function_bodies_196),LITREF(lit_405),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSg2cYgenerate_function_bodies);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSg2cYgenerate_function_bodies);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_generate_function_bodies_196;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSg2cYgenerate_function_bodies,T198);
  lit_408 = YPPsym((P)"generate-functions");
  T203 = YPsig(YPPlist(1,LITREF(lit_407)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T203,ENVNUL,PNUL,YPfalse);
  T202 = YPsig(YPPlist(4,LITREF(lit_382),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_198 = YPmet(FUNCODEREF(fun_generate_functions_198),LITREF(lit_408),T202,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSg2cYgenerate_functions);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSg2cYgenerate_functions);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_functions_198;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSg2cYgenerate_functions,T204);
  lit_409 = YPPsym((P)"generate-closure-structure");
  lit_410 = YPPsym((P)"definition");
  lit_411 = YPsb((P)" = ");
  lit_412 = YPsb((P)"%met");
  lit_413 = YPsb((P)"ENVNUL");
  lit_414 = YPsb((P)"PNUL");
  T208 = YPsig(YPPlist(4,LITREF(lit_410),LITREF(lit_279),LITREF(lit_202),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_199 = YPmet(FUNCODEREF(fun_generate_closure_structure_199),LITREF(lit_409),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSg2cYgenerate_closure_structure);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSg2cYgenerate_closure_structure);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_generate_closure_structure_199;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSg2cYgenerate_closure_structure,T209);
  lit_415 = YPPsym((P)"generate-function-body-reference");
  lit_416 = YPsb((P)"FUNCODEREF(");
  lit_417 = YPsb((P)")");
  T213 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_410)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_200 = YPmet(FUNCODEREF(fun_generate_function_body_reference_200),LITREF(lit_415),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSg2cYgenerate_function_body_reference);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSg2cYgenerate_function_body_reference);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_generate_function_body_reference_200;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSg2cYgenerate_function_body_reference,T214);
  lit_418 = YPPsym((P)"generate-shadow-args");
  lit_419 = YPPsym((P)"bindings");
  lit_420 = YPsb((P)"P ");
  lit_421 = YPPsym((P)"x-1693");
  lit_422 = YPPsym((P)"x-1692");
  lit_423 = YPPsym((P)"x-1691");
  lit_424 = YPPsym((P)"x-1690");
  lit_425 = YPsb((P)"a");
  T221 = YPsig(YPPlist(3,LITREF(lit_422),LITREF(lit_423),LITREF(lit_424)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1693_201 = YPmet(FUNCODEREF(fun_x_1693_201),LITREF(lit_421),T221,ENVNUL,PNUL,YPfalse);
  T220 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T220,ENVNUL,PNUL,YPfalse);
  T219 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T219,ENVNUL,PNUL,YPfalse);
  T218 = YPsig(YPPlist(2,LITREF(lit_419),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_204 = YPmet(FUNCODEREF(fun_generate_shadow_args_204),LITREF(lit_418),T218,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YevalSg2cYgenerate_shadow_args);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSg2cYgenerate_shadow_args);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_shadow_args_204;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSg2cYgenerate_shadow_args,T222);
  lit_426 = YPPsym((P)"generate-return");
  lit_427 = YPsb((P)"return ");
  T226 = YPsig(YPPlist(3,LITREF(lit_387),LITREF(lit_202),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_205 = YPmet(FUNCODEREF(fun_generate_return_205),LITREF(lit_426),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YevalSg2cYgenerate_return);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_generate_return_205;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSg2cYgenerate_return,T227);
  lit_428 = YPsb((P)"RET");
  T231 = YPsig(YPPlist(3,LITREF(lit_387),LITREF(lit_202),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_206 = YPmet(FUNCODEREF(fun_generate_return_206),LITREF(lit_426),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YevalSg2cYgenerate_return);
  if (T234 != YPfalse) {
    T233 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_generate_return_206;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YevalSg2cYgenerate_return,T232);
  lit_429 = YPPsym((P)"primitive-inlinable?");
  lit_430 = YPPlist(48,YPPsym((P)"%tag-bits"),YPPsym((P)"%tag"),YPPsym((P)"%untag"),YPPsym((P)"%class-of"),YPPsym((P)"%int"),YPPsym((P)"%ib"),YPPsym((P)"%iu"),YPPsym((P)"%chr"),YPPsym((P)"%cb"),YPPsym((P)"%cu"),YPPsym((P)"%loc"),YPPsym((P)"%lb"),YPPsym((P)"%lu"),YPPsym((P)"%empty?"),YPPsym((P)"%head"),YPPsym((P)"%tail"),YPPsym((P)"@empty?"),YPPsym((P)"@head"),YPPsym((P)"@tail"),YPPsym((P)"@=="),YPPsym((P)"@="),YPPsym((P)"@+"),YPPsym((P)"@<"),YPPsym((P)"%new"),YPPsym((P)"%class-id"),YPPsym((P)"%class-row"),YPPsym((P)"%gen-cache-arg-pos"),YPPsym((P)"%gen-cache-singletons"),YPPsym((P)"%gen-cache-classes"),YPPsym((P)"%gen-cache-missable?"),YPPsym((P)"%class-type-cache"),YPPsym((P)"%class-type-cache-setter"),YPPsym((P)"@telt"),YPPsym((P)"@telt-setter"),YPPsym((P)"@tlen"),YPPsym((P)"%to-tup"),YPPsym((P)"@oelt"),YPPsym((P)"@oelt-setter"),YPPsym((P)"@olen"),YPPsym((P)"%opts-location"),YPPsym((P)"%opts-count"),YPPsym((P)"%class-ancestors"),YPPsym((P)"@class-in?"),YPPsym((P)"@subclass?"),YPPsym((P)"prop-value-at"),YPPsym((P)"prop-value-at-setter"),YPPsym((P)"gen-lookup"),YPPsym((P)"gen-lookup-1-using"));
  T236 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_207 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_207),LITREF(lit_429),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSg2cYprimitive_inlinableQ);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSg2cYprimitive_inlinableQ);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_primitive_inlinableQ_207;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSg2cYprimitive_inlinableQ,T237);
  lit_431 = YPPsym((P)"generate-function-code");
  lit_432 = YPsb((P)"\n");
  lit_433 = YPsb((P)"static ");
  lit_434 = YPsb((P)"INLINE ");
  lit_435 = YPsb((P)"P ");
  lit_436 = YPPsym((P)"x-1701");
  lit_437 = YPPsym((P)"x-1700");
  lit_438 = YPPsym((P)"x-1699");
  lit_439 = YPsb((P)"P ");
  lit_440 = YPsb((P)" {\n");
  lit_441 = YPsb((P)"DEFCREGS();\n");
  lit_442 = YPsb((P)"loop:\n");
  lit_443 = YPsb((P)"}\n");
  T244 = YPsig(YPPlist(2,LITREF(lit_437),LITREF(lit_438)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1701_208 = YPmet(FUNCODEREF(fun_x_1701_208),LITREF(lit_436),T244,ENVNUL,PNUL,YPfalse);
  T243 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T242,ENVNUL,PNUL,YPfalse);
  T241 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_211 = YPmet(FUNCODEREF(fun_generate_function_code_211),LITREF(lit_431),T241,ENVNUL,PNUL,YPfalse);
  T247 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T247 != YPfalse) {
    T246 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_generate_function_code_211;
  T245 = XCALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(YevalSg2cYgenerate_function_code,T245);
  lit_444 = YPPsym((P)"dispatcher?");
  lit_445 = YPsb((P)"%dispatch");
  lit_446 = YPsb((P)"-dispatch");
  lit_447 = YPsb((P)"-dispatch");
  T249 = YPsig(YPPlist(1,LITREF(lit_410)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_212 = YPmet(FUNCODEREF(fun_dispatcherQ_212),LITREF(lit_444),T249,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YevalSg2cYdispatcherQ);
  if (T252 != YPfalse) {
    T251 = VARREF(YevalSg2cYdispatcherQ);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_dispatcherQ_212;
  T250 = XCALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YevalSg2cYdispatcherQ,T250);
  lit_448 = YPsb((P)"\nFUNCODEDEF(");
  lit_449 = YPsb((P)") {\n");
  lit_450 = YPsb((P)"P ");
  lit_451 = YPPsym((P)"x-1705");
  lit_452 = YPPsym((P)"x-1704");
  lit_453 = YPPsym((P)"x-1703");
  lit_454 = YPsb((P)"LINK_STACK();\n");
  lit_455 = YPsb((P)"NARGS(");
  lit_456 = YPsb((P)"ARG(");
  lit_457 = YPsb((P)", ");
  lit_458 = YPsb((P)")");
  lit_459 = YPsb((P)"loop:\n");
  lit_460 = YPsb((P)"UNLINK_STACK();\n");
  lit_461 = YPsb((P)"}\n");
  T258 = YPsig(YPPlist(2,LITREF(lit_452),LITREF(lit_453)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1705_213 = YPmet(FUNCODEREF(fun_x_1705_213),LITREF(lit_451),T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(1,LITREF(lit_355)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_410)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_217 = YPmet(FUNCODEREF(fun_generate_function_code_217),LITREF(lit_431),T254,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T261 != YPfalse) {
    T260 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_generate_function_code_217;
  T259 = XCALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YevalSg2cYgenerate_function_code,T259);
  lit_462 = YPPsym((P)"generate-local-temporaries");
  lit_463 = YPPsym((P)"temps");
  lit_464 = YPPsym((P)"x-1708");
  lit_465 = YPPsym((P)"x-1707");
  lit_466 = YPsb((P)"P ");
  T264 = YPsig(YPPlist(1,LITREF(lit_465)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1708_218 = YPmet(FUNCODEREF(fun_x_1708_218),LITREF(lit_464),T264,ENVNUL,PNUL,YPfalse);
  T263 = YPsig(YPPlist(2,LITREF(lit_463),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_219 = YPmet(FUNCODEREF(fun_generate_local_temporaries_219),LITREF(lit_462),T263,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(YevalSg2cYgenerate_local_temporaries);
  if (T267 != YPfalse) {
    T266 = VARREF(YevalSg2cYgenerate_local_temporaries);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_generate_local_temporaries_219;
  T265 = XCALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YevalSg2cYgenerate_local_temporaries,T265);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_467 = YPPsym((P)"generate-registers");
  lit_468 = YPPsym((P)"regs");
  lit_469 = YPPsym((P)"next-line");
  lit_470 = YPPsym((P)"j");
  lit_471 = YPsb((P)"P ");
  lit_472 = YPPsym((P)"next-reg");
  lit_473 = YPsb((P)";\n");
  T271 = YPsig(YPPlist(2,LITREF(lit_470),LITREF(lit_138)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_220 = YPmet(FUNCODEREF(fun_next_reg_220),LITREF(lit_472),T271,ENVNUL,PNUL,YPfalse);
  T270 = YPsig(YPPlist(1,LITREF(lit_470)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_221 = YPmet(FUNCODEREF(fun_next_line_221),LITREF(lit_469),T270,ENVNUL,PNUL,YPfalse);
  T269 = YPsig(YPPlist(2,LITREF(lit_468),LITREF(lit_61)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_222 = YPmet(FUNCODEREF(fun_generate_registers_222),LITREF(lit_467),T269,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YevalSg2cYgenerate_registers);
  if (T274 != YPfalse) {
    T273 = VARREF(YevalSg2cYgenerate_registers);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_generate_registers_222;
  T272 = XCALL2(1,VARREF(YPdefine_method),T273,T275);
  VARSET(YevalSg2cYgenerate_registers,T272);
  lit_474 = YPPsym((P)"module-info-name");
  lit_475 = YPsb((P)"module_info_");
  T276 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_223 = YPmet(FUNCODEREF(fun_module_info_name_223),LITREF(lit_474),T276,ENVNUL,PNUL,YPfalse);
  T279 = BOUNDP(YevalSg2cYmodule_info_name);
  if (T279 != YPfalse) {
    T278 = VARREF(YevalSg2cYmodule_info_name);
  } else {
    T278 = YPfalse;
  }
  T280 = fun_module_info_name_223;
  T277 = XCALL2(1,VARREF(YPdefine_method),T278,T280);
  VARSET(YevalSg2cYmodule_info_name,T277);
  lit_476 = YPPsym((P)"declare-imported-module-infos");
  lit_477 = YPPsym((P)"maybe-declare");
  lit_478 = YPsb((P)"extern MODULE_INFO ");
  lit_479 = YPsb((P)";\n");
  T283 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_224 = YPmet(FUNCODEREF(fun_maybe_declare_224),LITREF(lit_477),T283,ENVNUL,PNUL,YPfalse);
  T282 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T282,ENVNUL,PNUL,YPfalse);
  T281 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_476),T281,ENVNUL,PNUL,YPfalse);
  T284 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T284);
  lit_480 = YPPsym((P)"generate-module-info");
  lit_481 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_482 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_483 = YPPsym((P)"x-1711");
  lit_484 = YPPsym((P)"x-1710");
  lit_485 = YPsb((P)"  {&");
  lit_486 = YPsb((P)"},\n");
  lit_487 = YPsb((P)"  {NULL}\n};\n");
  lit_488 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_489 = YPPsym((P)"local-name");
  lit_490 = YPsb((P)"  {\"");
  lit_491 = YPsb((P)"\", &");
  lit_492 = YPsb((P)", \"");
  lit_493 = YPsb((P)"\"},\n");
  lit_494 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_495 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_496 = YPsb((P)"  {\"");
  lit_497 = YPsb((P)"\", ");
  lit_498 = YPsb((P)"CVAR, &");
  lit_499 = YPsb((P)"},\n");
  lit_500 = YPsb((P)"DVAR, &");
  lit_501 = YPsb((P)"},\n");
  lit_502 = YPsb((P)"PVAR, NULL},\n");
  lit_503 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_504 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_505 = YPPsym((P)"x-1720");
  lit_506 = YPPsym((P)"x-1719");
  lit_507 = YPsb((P)"  {\"");
  lit_508 = YPsb((P)"\", \"");
  lit_509 = YPsb((P)"\"},\n");
  lit_510 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_511 = YPsb((P)"\nextern MODULE_INFO ");
  lit_512 = YPsb((P)";\n");
  lit_513 = YPsb((P)"MODULE_INFO ");
  lit_514 = YPsb((P)" = {\n");
  lit_515 = YPsb((P)"  \"");
  lit_516 = YPsb((P)"\",\n");
  lit_517 = YPsb((P)"  NULL,\n");
  lit_518 = YPsb((P)"  use_infos,\n");
  lit_519 = YPsb((P)"  import_infos,\n");
  lit_520 = YPsb((P)"  binding_infos,\n");
  lit_521 = YPsb((P)"  export_infos,\n");
  lit_522 = YPsb((P)"};\n");
  T289 = YPsig(YPPlist(1,LITREF(lit_484)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1711_227 = YPmet(FUNCODEREF(fun_x_1711_227),LITREF(lit_483),T289,ENVNUL,PNUL,YPfalse);
  T288 = YPsig(YPPlist(2,LITREF(lit_489),LITREF(lit_95)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T288,ENVNUL,PNUL,YPfalse);
  T287 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T287,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(YPPlist(1,LITREF(lit_506)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1720_230 = YPmet(FUNCODEREF(fun_x_1720_230),LITREF(lit_505),T286,ENVNUL,PNUL,YPfalse);
  T285 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_480),T285,ENVNUL,PNUL,YPfalse);
  T290 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T290);
  lit_523 = YPPsym((P)"module-init-name");
  lit_524 = YPsb((P)"load_module_");
  T291 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_232 = YPmet(FUNCODEREF(fun_module_init_name_232),LITREF(lit_523),T291,ENVNUL,PNUL,YPfalse);
  T294 = BOUNDP(YevalSg2cYmodule_init_name);
  if (T294 != YPfalse) {
    T293 = VARREF(YevalSg2cYmodule_init_name);
  } else {
    T293 = YPfalse;
  }
  T295 = fun_module_init_name_232;
  T292 = XCALL2(1,VARREF(YPdefine_method),T293,T295);
  VARSET(YevalSg2cYmodule_init_name,T292);
  lit_525 = YPPsym((P)"module-init-decl");
  lit_526 = YPsb((P)"void ");
  lit_527 = YPsb((P)" (void)");
  T296 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_233 = YPmet(FUNCODEREF(fun_module_init_decl_233),LITREF(lit_525),T296,ENVNUL,PNUL,YPfalse);
  T299 = BOUNDP(YevalSg2cYmodule_init_decl);
  if (T299 != YPfalse) {
    T298 = VARREF(YevalSg2cYmodule_init_decl);
  } else {
    T298 = YPfalse;
  }
  T300 = fun_module_init_decl_233;
  T297 = XCALL2(1,VARREF(YPdefine_method),T298,T300);
  VARSET(YevalSg2cYmodule_init_decl,T297);
  lit_528 = YPPsym((P)"generate-module-init");
  lit_529 = YPPsym((P)"form");
  lit_530 = YPsb((P)"dl");
  lit_531 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_532 = YPPsym((P)"x-1726");
  lit_533 = YPPsym((P)"x-1725");
  lit_534 = YPsb((P)"extern ");
  lit_535 = YPsb((P)";\n");
  lit_536 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_537 = YPsb((P)"extern ");
  lit_538 = YPsb((P)";\n\n");
  lit_539 = YPsb((P)" {\n");
  lit_540 = YPsb((P)"  static int need_init = 1;\n");
  lit_541 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_542 = YPsb((P)"  need_init = 0;\n");
  lit_543 = YPPsym((P)"x-1731");
  lit_544 = YPPsym((P)"x-1730");
  lit_545 = YPsb((P)"  ");
  lit_546 = YPsb((P)"();\n");
  lit_547 = YPsb((P)"\n");
  lit_548 = YPsb((P)"\n");
  lit_549 = YPsb((P)"}\n");
  T303 = YPsig(YPPlist(1,LITREF(lit_533)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1726_234 = YPmet(FUNCODEREF(fun_x_1726_234),LITREF(lit_532),T303,ENVNUL,PNUL,YPfalse);
  T302 = YPsig(YPPlist(1,LITREF(lit_544)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1731_235 = YPmet(FUNCODEREF(fun_x_1731_235),LITREF(lit_543),T302,ENVNUL,PNUL,YPfalse);
  T301 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_20),LITREF(lit_529)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_236 = YPmet(FUNCODEREF(fun_generate_module_init_236),LITREF(lit_528),T301,ENVNUL,PNUL,YPfalse);
  T306 = BOUNDP(YevalSg2cYgenerate_module_init);
  if (T306 != YPfalse) {
    T305 = VARREF(YevalSg2cYgenerate_module_init);
  } else {
    T305 = YPfalse;
  }
  T307 = fun_generate_module_init_236;
  T304 = XCALL2(1,VARREF(YPdefine_method),T305,T307);
  VARSET(YevalSg2cYgenerate_module_init,T304);
  lit_550 = YPPsym((P)"generate-main");
  lit_551 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_552 = YPsb((P)"extern MODULE_INFO ");
  lit_553 = YPsb((P)";\n");
  lit_554 = YPsb((P)"extern ");
  lit_555 = YPsb((P)";\n\n");
  lit_556 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_557 = YPsb((P)";\n\n");
  lit_558 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_559 = YPsb((P)"  ");
  lit_560 = YPsb((P)"%init-world");
  lit_561 = YPsb((P)"(argc, argv);\n");
  lit_562 = YPsb((P)"  ");
  lit_563 = YPsb((P)"();\n");
  lit_564 = YPsb((P)"  return 0;\n");
  lit_565 = YPsb((P)"}\n");
  T308 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_237 = YPmet(FUNCODEREF(fun_generate_main_237),LITREF(lit_550),T308,ENVNUL,PNUL,YPfalse);
  T311 = BOUNDP(YevalSg2cYgenerate_main);
  if (T311 != YPfalse) {
    T310 = VARREF(YevalSg2cYgenerate_main);
  } else {
    T310 = YPfalse;
  }
  T312 = fun_generate_main_237;
  T309 = XCALL2(1,VARREF(YPdefine_method),T310,T312);
  VARSET(YevalSg2cYgenerate_main,T309);
  T313 = YPfalse;
  return T313;
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
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;

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
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fin", &module_info_gooSboot, "fin"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"app", &module_info_gooSmacros, "app"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"export", &module_info_gooSboot, "export"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"tup", &module_info_gooSboot, "tup"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"or", &module_info_gooSmacros, "or"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"new", &module_info_gooSboot, "new"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"tail", &module_info_gooSboot, "tail"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"min", &module_info_gooSmag, "min"},
  {"nul", &module_info_gooSboot, "nul"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"~==", &module_info_gooSmath, "~=="},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"^", &module_info_gooSmath, "^"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"not", &module_info_gooSboot, "not"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"==", &module_info_gooSmacros, "=="},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"match", &module_info_gooSmacros, "match"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"fun", &module_info_gooSboot, "fun"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"cos", &module_info_gooSmath, "cos"},
  {"now", &module_info_gooScolsScol, "now"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"mod", &module_info_gooSmath, "mod"},
  {"pair", &module_info_gooSmacros, "pair"},
  {">=", &module_info_gooSmag, ">="},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"~=", &module_info_gooSmath, "~="},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"try", &module_info_gooSboot, "try"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<=", &module_info_gooSmag, "<="},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"col", &module_info_gooScolsScol, "col"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<<", &module_info_gooSmath, "<<"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"ds", &module_info_gooSboot, "ds"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"in", &module_info_gooSioSport, "in"},
  {"frame", &module_info_evalStop, "frame"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"ct", &module_info_gooSboot, "ct"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"out", &module_info_gooSioSport, "out"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
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
  {"dss", &module_info_gooSboot, "dss"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"head", &module_info_gooSboot, "head"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"%get", &module_info_gooSboot, "%get"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
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
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"into", &module_info_gooScolsScol, "into"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"get", &module_info_gooSioSport, "get"},
  {"div", &module_info_gooSmath, "div"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"error", &module_info_gooSboot, "error"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"1+", &module_info_gooSmath, "1+"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"always", &module_info_gooSruntime, "always"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"sin", &module_info_gooSmath, "sin"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"del", &module_info_gooScolsScol, "del"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"*", &module_info_gooSmath, "*"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"%su", &module_info_gooSboot, "%su"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"df", &module_info_gooSboot, "df"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"packing", &module_info_gooSpacker, "packing"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"put", &module_info_gooSioSport, "put"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<prim-int>", &module_info_gooSboot, "<prim-int>"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"while", &module_info_gooSmacros, "while"},
  {"dl", &module_info_gooSboot, "dl"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"if", &module_info_gooSboot, "if"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"t=", &module_info_gooStypes, "t="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"dc", &module_info_gooSboot, "dc"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"top", &module_info_evalStop, "top"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"~", &module_info_gooSmath, "~"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"round", &module_info_gooSmath, "round"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"map", &module_info_gooSmacros, "map"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"t+", &module_info_gooStypes, "t+"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"+", &module_info_gooSmath, "+"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
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
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"let", &module_info_gooSboot, "let"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
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
  {"port-handle-setter", &module_info_gooSioSport, "port-handle-setter"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"set", &module_info_gooSboot, "set"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"even?", &module_info_gooSmath, "even?"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"read", &module_info_gooSruntime, "read"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"rem", &module_info_gooSmath, "rem"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"logn", &module_info_gooSmath, "logn"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"open", &module_info_gooSioSport, "open"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
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
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"-", &module_info_gooSmath, "-"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"log", &module_info_gooSmath, "log"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"bt", &module_info_evalStop, "bt"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {">>", &module_info_gooSmath, ">>"},
  {"%im", &module_info_gooSboot, "%im"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"as", &module_info_gooStypes, "as"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"=", &module_info_gooSmath, "="},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"port-handle", &module_info_gooSioSport, "port-handle"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"@+", &module_info_gooSboot, "@+"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"&", &module_info_gooSmath, "&"},
  {"tan", &module_info_gooSmath, "tan"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do", &module_info_gooSmacros, "do"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"op", &module_info_gooSmacros, "op"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {">", &module_info_gooSmag, ">"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"@len", &module_info_gooSboot, "@len"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<", &module_info_gooSmag, "<"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
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
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
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
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"close", &module_info_gooSioSport, "close"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"generate-shadow-args", CVAR, &YevalSg2cYgenerate_shadow_args},
  {"module-loader-appname-setter", CVAR, &YevalSg2cYmodule_loader_appname_setter},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"module-loader-app-modname-setter", CVAR, &YevalSg2cYmodule_loader_app_modname_setter},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"generate-self-recursive-call", CVAR, &YevalSg2cYgenerate_self_recursive_call},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"with-statement", PVAR, NULL},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"pp", CVAR, &YevalSg2cYpp},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"for-commas", PVAR, NULL},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"%print-cpu-usage", PVAR, NULL},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"between-parentheses", PVAR, NULL},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"with-used-expression", PVAR, NULL},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"*tmp-file-counter*", CVAR, &YevalSg2cYTtmp_file_counterT},
  {"---main-0---", PVAR, NULL},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"---main-1---", PVAR, NULL},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"*dynamic-linking?*", DVAR, &YevalSg2cYTdynamic_linkingQT},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"---main-2---", PVAR, NULL},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"with-expression", PVAR, NULL},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"or/set", PVAR, NULL},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-ast", "g2c-ast"},
  {"g2c-clean", "g2c-clean"},
  {"g2c-top", "g2c-top"},
  {"g2c-test", "g2c-test"},
  {"g2c-build-app", "g2c-build-app"},
  {"g2c-eval", "g2c-eval"},
  {"g2c-goo", "g2c-goo"},
  {"g2c-def-app", "g2c-def-app"},
  {"g2c-exp", "g2c-exp"},
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
