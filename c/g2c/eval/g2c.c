/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yerror,"goo/boot","error");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(Ytail,"goo/boot","tail");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
DEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalSg2cYgenerate_shadow_args,"eval/g2c","generate-shadow-args");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalStopYtop,"eval/top","top");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
DEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
DEF(YevalSg2cYgenerate_self_recursive_call,"eval/g2c","generate-self-recursive-call");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(Ynot,"goo/boot","not");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_42);
DEFLIT(lit_21);
DEFLIT(lit_159);
DEFLIT(lit_479);
DEFLIT(lit_97);
DEFLIT(lit_366);
DEFLIT(lit_298);
DEFLIT(lit_37);
DEFLIT(lit_6);
DEFLIT(lit_381);
DEFLIT(lit_82);
DEFLIT(lit_523);
DEFLIT(lit_410);
DEFLIT(lit_551);
DEFLIT(lit_337);
DEFLIT(lit_353);
DEFLIT(lit_384);
DEFLIT(lit_531);
DEFLIT(lit_229);
DEFLIT(lit_68);
DEFLIT(lit_260);
DEFLIT(lit_364);
DEFLIT(lit_400);
DEFLIT(lit_427);
DEFLIT(lit_428);
DEFLIT(lit_357);
DEFLIT(lit_145);
DEFLIT(lit_167);
DEFLIT(lit_377);
DEFLIT(lit_239);
DEFLIT(lit_47);
DEFLIT(lit_394);
DEFLIT(lit_220);
DEFLIT(lit_110);
DEFLIT(lit_230);
DEFLIT(lit_157);
DEFLIT(lit_5);
DEFLIT(lit_386);
DEFLIT(lit_141);
DEFLIT(lit_495);
DEFLIT(lit_404);
DEFLIT(lit_93);
DEFLIT(lit_518);
DEFLIT(lit_199);
DEFLIT(lit_478);
DEFLIT(lit_540);
DEFLIT(lit_182);
DEFLIT(lit_32);
DEFLIT(lit_176);
DEFLIT(lit_94);
DEFLIT(lit_370);
DEFLIT(lit_542);
DEFLIT(lit_550);
DEFLIT(lit_450);
DEFLIT(lit_510);
DEFLIT(lit_401);
DEFLIT(lit_414);
DEFLIT(lit_129);
DEFLIT(lit_345);
DEFLIT(lit_408);
DEFLIT(lit_360);
DEFLIT(lit_190);
DEFLIT(lit_221);
DEFLIT(lit_238);
DEFLIT(lit_442);
DEFLIT(lit_470);
DEFLIT(lit_534);
DEFLIT(lit_436);
DEFLIT(lit_117);
DEFLIT(lit_164);
DEFLIT(lit_477);
DEFLIT(lit_112);
DEFLIT(lit_391);
DEFLIT(lit_96);
DEFLIT(lit_546);
DEFLIT(lit_302);
DEFLIT(lit_403);
DEFLIT(lit_363);
DEFLIT(lit_275);
DEFLIT(lit_285);
DEFLIT(lit_14);
DEFLIT(lit_295);
DEFLIT(lit_497);
DEFLIT(lit_500);
DEFLIT(lit_72);
DEFLIT(lit_291);
DEFLIT(lit_448);
DEFLIT(lit_206);
DEFLIT(lit_475);
DEFLIT(lit_342);
DEFLIT(lit_434);
DEFLIT(lit_454);
DEFLIT(lit_63);
DEFLIT(lit_143);
DEFLIT(lit_19);
DEFLIT(lit_484);
DEFLIT(lit_320);
DEFLIT(lit_212);
DEFLIT(lit_418);
DEFLIT(lit_51);
DEFLIT(lit_411);
DEFLIT(lit_532);
DEFLIT(lit_214);
DEFLIT(lit_511);
DEFLIT(lit_244);
DEFLIT(lit_512);
DEFLIT(lit_193);
DEFLIT(lit_277);
DEFLIT(lit_273);
DEFLIT(lit_361);
DEFLIT(lit_306);
DEFLIT(lit_248);
DEFLIT(lit_203);
DEFLIT(lit_373);
DEFLIT(lit_310);
DEFLIT(lit_341);
DEFLIT(lit_508);
DEFLIT(lit_376);
DEFLIT(lit_406);
DEFLIT(lit_474);
DEFLIT(lit_132);
DEFLIT(lit_301);
DEFLIT(lit_423);
DEFLIT(lit_330);
DEFLIT(lit_246);
DEFLIT(lit_463);
DEFLIT(lit_57);
DEFLIT(lit_328);
DEFLIT(lit_121);
DEFLIT(lit_379);
DEFLIT(lit_549);
DEFLIT(lit_64);
DEFLIT(lit_293);
DEFLIT(lit_198);
DEFLIT(lit_321);
DEFLIT(lit_332);
DEFLIT(lit_443);
DEFLIT(lit_85);
DEFLIT(lit_114);
DEFLIT(lit_223);
DEFLIT(lit_335);
DEFLIT(lit_304);
DEFLIT(lit_388);
DEFLIT(lit_331);
DEFLIT(lit_99);
DEFLIT(lit_240);
DEFLIT(lit_45);
DEFLIT(lit_4);
DEFLIT(lit_355);
DEFLIT(lit_346);
DEFLIT(lit_496);
DEFLIT(lit_31);
DEFLIT(lit_111);
DEFLIT(lit_154);
DEFLIT(lit_397);
DEFLIT(lit_420);
DEFLIT(lit_17);
DEFLIT(lit_270);
DEFLIT(lit_481);
DEFLIT(lit_179);
DEFLIT(lit_127);
DEFLIT(lit_284);
DEFLIT(lit_75);
DEFLIT(lit_8);
DEFLIT(lit_471);
DEFLIT(lit_197);
DEFLIT(lit_173);
DEFLIT(lit_192);
DEFLIT(lit_334);
DEFLIT(lit_503);
DEFLIT(lit_33);
DEFLIT(lit_211);
DEFLIT(lit_389);
DEFLIT(lit_501);
DEFLIT(lit_89);
DEFLIT(lit_527);
DEFLIT(lit_367);
DEFLIT(lit_225);
DEFLIT(lit_263);
DEFLIT(lit_242);
DEFLIT(lit_216);
DEFLIT(lit_245);
DEFLIT(lit_131);
DEFLIT(lit_48);
DEFLIT(lit_163);
DEFLIT(lit_158);
DEFLIT(lit_539);
DEFLIT(lit_181);
DEFLIT(lit_122);
DEFLIT(lit_469);
DEFLIT(lit_218);
DEFLIT(lit_261);
DEFLIT(lit_413);
DEFLIT(lit_281);
DEFLIT(lit_12);
DEFLIT(lit_269);
DEFLIT(lit_459);
DEFLIT(lit_120);
DEFLIT(lit_460);
DEFLIT(lit_155);
DEFLIT(lit_160);
DEFLIT(lit_493);
DEFLIT(lit_315);
DEFLIT(lit_445);
DEFLIT(lit_81);
DEFLIT(lit_3);
DEFLIT(lit_253);
DEFLIT(lit_461);
DEFLIT(lit_200);
DEFLIT(lit_422);
DEFLIT(lit_522);
DEFLIT(lit_387);
DEFLIT(lit_417);
DEFLIT(lit_264);
DEFLIT(lit_138);
DEFLIT(lit_344);
DEFLIT(lit_228);
DEFLIT(lit_174);
DEFLIT(lit_303);
DEFLIT(lit_419);
DEFLIT(lit_254);
DEFLIT(lit_267);
DEFLIT(lit_412);
DEFLIT(lit_507);
DEFLIT(lit_177);
DEFLIT(lit_183);
DEFLIT(lit_156);
DEFLIT(lit_28);
DEFLIT(lit_374);
DEFLIT(lit_237);
DEFLIT(lit_165);
DEFLIT(lit_70);
DEFLIT(lit_153);
DEFLIT(lit_134);
DEFLIT(lit_250);
DEFLIT(lit_140);
DEFLIT(lit_515);
DEFLIT(lit_299);
DEFLIT(lit_385);
DEFLIT(lit_339);
DEFLIT(lit_327);
DEFLIT(lit_52);
DEFLIT(lit_205);
DEFLIT(lit_95);
DEFLIT(lit_305);
DEFLIT(lit_92);
DEFLIT(lit_396);
DEFLIT(lit_184);
DEFLIT(lit_146);
DEFLIT(lit_547);
DEFLIT(lit_519);
DEFLIT(lit_457);
DEFLIT(lit_11);
DEFLIT(lit_58);
DEFLIT(lit_219);
DEFLIT(lit_13);
DEFLIT(lit_343);
DEFLIT(lit_194);
DEFLIT(lit_382);
DEFLIT(lit_372);
DEFLIT(lit_316);
DEFLIT(lit_467);
DEFLIT(lit_283);
DEFLIT(lit_209);
DEFLIT(lit_78);
DEFLIT(lit_135);
DEFLIT(lit_106);
DEFLIT(lit_307);
DEFLIT(lit_552);
DEFLIT(lit_488);
DEFLIT(lit_40);
DEFLIT(lit_25);
DEFLIT(lit_371);
DEFLIT(lit_207);
DEFLIT(lit_180);
DEFLIT(lit_249);
DEFLIT(lit_409);
DEFLIT(lit_252);
DEFLIT(lit_235);
DEFLIT(lit_150);
DEFLIT(lit_369);
DEFLIT(lit_462);
DEFLIT(lit_537);
DEFLIT(lit_280);
DEFLIT(lit_535);
DEFLIT(lit_38);
DEFLIT(lit_105);
DEFLIT(lit_54);
DEFLIT(lit_185);
DEFLIT(lit_452);
DEFLIT(lit_430);
DEFLIT(lit_215);
DEFLIT(lit_62);
DEFLIT(lit_517);
DEFLIT(lit_56);
DEFLIT(lit_130);
DEFLIT(lit_119);
DEFLIT(lit_333);
DEFLIT(lit_30);
DEFLIT(lit_202);
DEFLIT(lit_513);
DEFLIT(lit_338);
DEFLIT(lit_149);
DEFLIT(lit_195);
DEFLIT(lit_187);
DEFLIT(lit_451);
DEFLIT(lit_26);
DEFLIT(lit_458);
DEFLIT(lit_271);
DEFLIT(lit_35);
DEFLIT(lit_486);
DEFLIT(lit_536);
DEFLIT(lit_472);
DEFLIT(lit_421);
DEFLIT(lit_541);
DEFLIT(lit_399);
DEFLIT(lit_128);
DEFLIT(lit_262);
DEFLIT(lit_499);
DEFLIT(lit_282);
DEFLIT(lit_533);
DEFLIT(lit_15);
DEFLIT(lit_350);
DEFLIT(lit_504);
DEFLIT(lit_133);
DEFLIT(lit_441);
DEFLIT(lit_256);
DEFLIT(lit_79);
DEFLIT(lit_286);
DEFLIT(lit_67);
DEFLIT(lit_88);
DEFLIT(lit_257);
DEFLIT(lit_2);
DEFLIT(lit_189);
DEFLIT(lit_466);
DEFLIT(lit_175);
DEFLIT(lit_529);
DEFLIT(lit_124);
DEFLIT(lit_69);
DEFLIT(lit_166);
DEFLIT(lit_312);
DEFLIT(lit_274);
DEFLIT(lit_20);
DEFLIT(lit_548);
DEFLIT(lit_356);
DEFLIT(lit_290);
DEFLIT(lit_36);
DEFLIT(lit_325);
DEFLIT(lit_348);
DEFLIT(lit_480);
DEFLIT(lit_87);
DEFLIT(lit_27);
DEFLIT(lit_126);
DEFLIT(lit_204);
DEFLIT(lit_319);
DEFLIT(lit_524);
DEFLIT(lit_49);
DEFLIT(lit_375);
DEFLIT(lit_71);
DEFLIT(lit_446);
DEFLIT(lit_429);
DEFLIT(lit_447);
DEFLIT(lit_438);
DEFLIT(lit_491);
DEFLIT(lit_390);
DEFLIT(lit_490);
DEFLIT(lit_172);
DEFLIT(lit_61);
DEFLIT(lit_424);
DEFLIT(lit_147);
DEFLIT(lit_123);
DEFLIT(lit_234);
DEFLIT(lit_222);
DEFLIT(lit_152);
DEFLIT(lit_359);
DEFLIT(lit_287);
DEFLIT(lit_53);
DEFLIT(lit_232);
DEFLIT(lit_309);
DEFLIT(lit_46);
DEFLIT(lit_317);
DEFLIT(lit_398);
DEFLIT(lit_308);
DEFLIT(lit_482);
DEFLIT(lit_444);
DEFLIT(lit_90);
DEFLIT(lit_103);
DEFLIT(lit_365);
DEFLIT(lit_168);
DEFLIT(lit_162);
DEFLIT(lit_201);
DEFLIT(lit_9);
DEFLIT(lit_297);
DEFLIT(lit_55);
DEFLIT(lit_226);
DEFLIT(lit_41);
DEFLIT(lit_125);
DEFLIT(lit_266);
DEFLIT(lit_44);
DEFLIT(lit_289);
DEFLIT(lit_465);
DEFLIT(lit_455);
DEFLIT(lit_113);
DEFLIT(lit_502);
DEFLIT(lit_148);
DEFLIT(lit_362);
DEFLIT(lit_231);
DEFLIT(lit_59);
DEFLIT(lit_169);
DEFLIT(lit_116);
DEFLIT(lit_383);
DEFLIT(lit_24);
DEFLIT(lit_210);
DEFLIT(lit_102);
DEFLIT(lit_1);
DEFLIT(lit_65);
DEFLIT(lit_368);
DEFLIT(lit_136);
DEFLIT(lit_440);
DEFLIT(lit_107);
DEFLIT(lit_294);
DEFLIT(lit_528);
DEFLIT(lit_74);
DEFLIT(lit_314);
DEFLIT(lit_351);
DEFLIT(lit_311);
DEFLIT(lit_191);
DEFLIT(lit_60);
DEFLIT(lit_186);
DEFLIT(lit_456);
DEFLIT(lit_449);
DEFLIT(lit_101);
DEFLIT(lit_380);
DEFLIT(lit_16);
DEFLIT(lit_39);
DEFLIT(lit_453);
DEFLIT(lit_144);
DEFLIT(lit_358);
DEFLIT(lit_10);
DEFLIT(lit_393);
DEFLIT(lit_439);
DEFLIT(lit_255);
DEFLIT(lit_432);
DEFLIT(lit_178);
DEFLIT(lit_505);
DEFLIT(lit_476);
DEFLIT(lit_347);
DEFLIT(lit_208);
DEFLIT(lit_108);
DEFLIT(lit_395);
DEFLIT(lit_243);
DEFLIT(lit_278);
DEFLIT(lit_292);
DEFLIT(lit_525);
DEFLIT(lit_468);
DEFLIT(lit_516);
DEFLIT(lit_224);
DEFLIT(lit_142);
DEFLIT(lit_433);
DEFLIT(lit_415);
DEFLIT(lit_543);
DEFLIT(lit_407);
DEFLIT(lit_66);
DEFLIT(lit_378);
DEFLIT(lit_23);
DEFLIT(lit_494);
DEFLIT(lit_272);
DEFLIT(lit_247);
DEFLIT(lit_538);
DEFLIT(lit_349);
DEFLIT(lit_170);
DEFLIT(lit_151);
DEFLIT(lit_354);
DEFLIT(lit_34);
DEFLIT(lit_77);
DEFLIT(lit_7);
DEFLIT(lit_483);
DEFLIT(lit_296);
DEFLIT(lit_326);
DEFLIT(lit_213);
DEFLIT(lit_83);
DEFLIT(lit_139);
DEFLIT(lit_171);
DEFLIT(lit_425);
DEFLIT(lit_352);
DEFLIT(lit_514);
DEFLIT(lit_322);
DEFLIT(lit_115);
DEFLIT(lit_506);
DEFLIT(lit_313);
DEFLIT(lit_392);
DEFLIT(lit_288);
DEFLIT(lit_426);
DEFLIT(lit_98);
DEFLIT(lit_324);
DEFLIT(lit_498);
DEFLIT(lit_137);
DEFLIT(lit_76);
DEFLIT(lit_258);
DEFLIT(lit_43);
DEFLIT(lit_544);
DEFLIT(lit_329);
DEFLIT(lit_336);
DEFLIT(lit_300);
DEFLIT(lit_526);
DEFLIT(lit_29);
DEFLIT(lit_279);
DEFLIT(lit_241);
DEFLIT(lit_492);
DEFLIT(lit_530);
DEFLIT(lit_100);
DEFLIT(lit_416);
DEFLIT(lit_91);
DEFLIT(lit_405);
DEFLIT(lit_520);
DEFLIT(lit_196);
DEFLIT(lit_276);
DEFLIT(lit_22);
DEFLIT(lit_487);
DEFLIT(lit_217);
DEFLIT(lit_545);
DEFLIT(lit_236);
DEFLIT(lit_268);
DEFLIT(lit_489);
DEFLIT(lit_521);
DEFLIT(lit_227);
DEFLIT(lit_104);
DEFLIT(lit_161);
DEFLIT(lit_435);
DEFLIT(lit_340);
DEFLIT(lit_318);
DEFLIT(lit_109);
DEFLIT(lit_118);
DEFLIT(lit_464);
DEFLIT(lit_323);
DEFLIT(lit_86);
DEFLIT(lit_473);
DEFLIT(lit_259);
DEFLIT(lit_485);
DEFLIT(lit_80);
DEFLIT(lit_50);
DEFLIT(lit_437);
DEFLIT(lit_509);
DEFLIT(lit_431);
DEFLIT(lit_84);
DEFLIT(lit_188);
DEFLIT(lit_18);
DEFLIT(lit_233);
DEFLIT(lit_73);
DEFLIT(lit_402);
DEFLIT(lit_265);
DEFLIT(lit_251);

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
LOCFOR(fun_x_3265_57);
LOCFOR(fun_x_3267_58);
LOCFOR(fun_x_3269_59);
LOCFOR(fun_x_3271_60);
FUNFOR(YevalSg2cYmangler_reset);
LOCFOR(fun_x_3273_62);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_64);
LOCFOR(fun_mangle_raw_name_65);
LOCFOR(fun_mangle_local_name_66);
LOCFOR(fun_mangle_local_name_67);
LOCFOR(fun_x_3277_68);
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
LOCFOR(fun_x_3281_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_x_3285_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_x_3289_88);
LOCFOR(fun_loop_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_gen_result_92);
LOCFOR(fun_x_3292_93);
LOCFOR(fun_gen_depth_94);
LOCFOR(fun_x_3296_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_x_3300_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_3304_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_3306_104);
LOCFOR(fun_generate_quotation_forwards_105);
LOCFOR(fun_x_3309_106);
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
LOCFOR(fun_x_3319_120);
LOCFOR(fun_generate_quotation_121);
LOCFOR(fun_x_3322_122);
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
LOCFOR(fun_x_3335_144);
LOCFOR(fun_x_3338_145);
LOCFOR(fun_x_3342_146);
LOCFOR(fun_generate_self_recursive_call_147);
LOCFOR(fun_x_3345_148);
LOCFOR(fun_x_3350_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_x_3354_151);
LOCFOR(fun_152);
LOCFOR(fun_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_x_3358_155);
LOCFOR(fun_to_c_156);
LOCFOR(fun_x_3362_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_to_c_159);
LOCFOR(fun_to_c_160);
LOCFOR(fun_to_c_161);
LOCFOR(fun_x_3367_162);
LOCFOR(fun_x_3373_163);
LOCFOR(fun_164);
LOCFOR(fun_165);
LOCFOR(fun_to_c_166);
LOCFOR(fun_167);
LOCFOR(fun_x_3377_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_funshell_to_c_170);
LOCFOR(fun_171);
LOCFOR(fun_x_3384_172);
LOCFOR(fun_funinit_to_c_173);
LOCFOR(fun_to_c_174);
LOCFOR(fun_x_3389_175);
LOCFOR(fun_out_list_builder_176);
LOCFOR(fun_177);
LOCFOR(fun_gen_fab_list_178);
LOCFOR(fun_generate_function_specs_179);
LOCFOR(fun_180);
LOCFOR(fun_to_c_181);
LOCFOR(fun_to_c_182);
LOCFOR(fun_x_3393_183);
LOCFOR(fun_generate_function_forwards_184);
LOCFOR(fun_x_3398_185);
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
LOCFOR(fun_x_3407_197);
LOCFOR(fun_198);
LOCFOR(fun_199);
LOCFOR(fun_generate_shadow_args_200);
LOCFOR(fun_generate_return_201);
LOCFOR(fun_generate_return_202);
LOCFOR(fun_primitive_inlinableQ_203);
LOCFOR(fun_x_3415_204);
LOCFOR(fun_205);
LOCFOR(fun_206);
LOCFOR(fun_generate_function_code_207);
LOCFOR(fun_dispatcherQ_208);
LOCFOR(fun_x_3419_209);
LOCFOR(fun_210);
LOCFOR(fun_211);
LOCFOR(fun_212);
LOCFOR(fun_generate_function_code_213);
LOCFOR(fun_x_3422_214);
LOCFOR(fun_generate_local_temporaries_215);
LOCFOR(fun_next_reg_216);
LOCFOR(fun_next_line_217);
LOCFOR(fun_generate_registers_218);
LOCFOR(fun_module_info_name_219);
LOCFOR(fun_maybe_declare_220);
LOCFOR(fun_221);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_3425_223);
LOCFOR(fun_224);
LOCFOR(fun_225);
LOCFOR(fun_x_3431_226);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_228);
LOCFOR(fun_module_init_decl_229);
LOCFOR(fun_x_3437_230);
LOCFOR(fun_x_3442_231);
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
  P x_3244F8020;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_3244F8020 = VARREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_3244F8020);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF8021;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF8021 = T1;
  if (tmpF8021 != YPfalse) {
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
  P out_portF8030;
  P prgF8029;
  P astF8028;
  P out_fileF8027;
  P src_fileF8026;
  P fileF8025;
  P envF8024;
  P keepmodQF8023;
  P modF8022;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF8022 = T1;
  keepmodQF8023 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF8022);
  envF8024 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF8025 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF8025);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF8026 = T8;
  T12 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  T13 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF8025);
  T11 = CALL2(1,VARREF(YgooSsystemYadd_build_path),T12,T13);
  out_fileF8027 = T11;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF8026,modF8022);
  T14 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF8026);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T14,modF8022);
  T15 = (P)YPsu(LITREF(lit_16));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  T17 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF8026,envF8024);
  astF8028 = T17;
  T19 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF8028,envF8024);
  prgF8029 = T19;
  T20 = (P)YPsu(LITREF(lit_17));
  (P)YevalSg2cYPprint_cpu_usage(T20);
  T21 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF8027);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T21);
  out_portF8030 = YPfalse;
  out_portF8030 = BOXFAB(out_portF8030);
  T24 = FUNFAB(fun_11,5,out_portF8030,out_fileF8027,prgF8029,astF8028,modF8022);
  T25 = FUNFAB(fun_12,1,out_portF8030);
  T23 = with_cleanup(T24,T25);
  T26 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T26);
  T18 = modF8022;
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
  P x_3245F8031;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  x_3245F8031 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3245F8031,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3245F8031,LITREF(lit_22));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF8032;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF8032 = Ynil;
  changedF8032 = BOXFAB(changedF8032);
  T2 = FUNFAB(fun_15,1,changedF8032);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_16;
  T4 = BOXVAL(changedF8032);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF8032);
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
  P modF8033;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF8033 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_27));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF8033);
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
  P x_3247F8034;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  VARSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_3247F8034 = VARREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_21,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_22,1,x_3247F8034);
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
  P x_3246F8035;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_3246F8035 = VARREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_23,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_24,1,x_3246F8035);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_26) {
  P tmpF8036;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF8036 = T1;
  if (tmpF8036 != YPfalse) {
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
  P out_portF8042;
  P prgF8041;
  P out_fileF8040;
  P fileF8039;
  P nameF8038;
  P modF8037;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF8037 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = VARSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_35),T4,T5);
  nameF8038 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF8038);
  fileF8039 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF8039);
  out_fileF8040 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF8041 = T12;
  out_portF8042 = YPfalse;
  out_portF8042 = BOXFAB(out_portF8042);
  T15 = FUNFAB(fun_25,5,out_portF8042,out_fileF8040,prgF8041,ast_,modF8037);
  T16 = FUNFAB(fun_26,1,out_portF8042);
  T14 = with_cleanup(T15,T16);
  T11 = fileF8039;
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
  P nameF8043;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF8043 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF8043);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P ast_,env_;
  P nameF8044;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF8044 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF8044);
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
  P astF8046;
  P sexprF8045;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF8045 = T1;
  T2 = (P)YPsu(LITREF(lit_49));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF8045,ct_env_,YPfalse);
  astF8046 = T4;
  T5 = (P)YPsu(LITREF(lit_50));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T3 = astF8046;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_35) {
  P e_,env_;
  P fltF8051;
  P prgF8050;
  P lftF8049;
  P anaF8048;
  P boxF8047;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),e_);
  boxF8047 = T1;
  T2 = (P)YPsu(LITREF(lit_53));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_ast),boxF8047);
  anaF8048 = T4;
  T5 = (P)YPsu(LITREF(lit_54));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),anaF8048);
  lftF8049 = T7;
  T8 = (P)YPsu(LITREF(lit_55));
  (P)YevalSg2cYPprint_cpu_usage(T8);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF8049);
  prgF8050 = T10;
  T11 = (P)YPsu(LITREF(lit_56));
  (P)YevalSg2cYPprint_cpu_usage(T11);
  T13 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF8050,env_,YPint((P)64));
  fltF8051 = T13;
  T14 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T14);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF8051);
  T15 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF8051,YPfalse);
  T16 = (P)YPsu(LITREF(lit_59));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T12 = prgF8050;
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
  P tmpF8052;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF8052 = T1;
  if (tmpF8052 != YPfalse) {
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
  P out_portF8056;
  P out_nameF8055;
  P init_nameF8054;
  P appnameF8053;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF8053 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF8053,LITREF(lit_64));
  init_nameF8054 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF8054);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF8053,T6);
  out_nameF8055 = T5;
  out_portF8056 = YPfalse;
  out_portF8056 = BOXFAB(out_portF8056);
  T9 = FUNFAB(fun_37,3,out_portF8056,out_nameF8055,mod_);
  T10 = FUNFAB(fun_38,1,out_portF8056);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P mod_;
  P x_3253F8057;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_3253F8057 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_3253F8057,LITREF(lit_76));
  T4 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),T4);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3253F8057,T2);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_3253F8057,LITREF(lit_77));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P x_3257F8066;
  P x_3256F8065;
  P x_3255F8064;
  P x_3254F8063;
  P x_3252F8062;
  P x_3251F8061;
  P x_3250F8060;
  P x_3249F8059;
  P x_3248F8058;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_3248F8058 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_3248F8058,LITREF(lit_68));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3248F8058,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_3248F8058,LITREF(lit_69));
  T3 = BOXVAL(FREEREF(0));
  x_3249F8059 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_3249F8059,LITREF(lit_70));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3249F8059,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3249F8059,LITREF(lit_71));
  T5 = BOXVAL(FREEREF(0));
  x_3250F8060 = T5;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3250F8060,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3250F8060,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_3250F8060,LITREF(lit_72));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3250F8060,FREEREF(2));
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3250F8060,LITREF(lit_73));
  T7 = BOXVAL(FREEREF(0));
  x_3251F8061 = T7;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_3251F8061,LITREF(lit_74));
  T9 = BOXVAL(FREEREF(0));
  x_3252F8062 = T9;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_3252F8062,LITREF(lit_75));
  T11 = FUNFAB(fun_40,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T11,FREEREF(3));
  T12 = BOXVAL(FREEREF(0));
  x_3254F8063 = T12;
  CALL2(1,VARREF(YgooSioSportYputs),x_3254F8063,LITREF(lit_78));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3254F8063,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_3254F8063,LITREF(lit_79));
  T15 = BOXVAL(FREEREF(0));
  x_3255F8064 = T15;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3255F8064,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_3255F8064,LITREF(lit_80));
  T17 = BOXVAL(FREEREF(0));
  x_3256F8065 = T17;
  CALL2(1,VARREF(YgooSioSportYputs),x_3256F8065,LITREF(lit_81));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3256F8065,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_3256F8065,LITREF(lit_82));
  T20 = BOXVAL(FREEREF(0));
  x_3257F8066 = T20;
  CALL2(1,VARREF(YgooSioSportYputs),x_3257F8066,LITREF(lit_83));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3257F8066,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_3257F8066,LITREF(lit_84));
  T19 = T21;
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_42) {
  P tmpF8067;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF8067 = T1;
  if (tmpF8067 != YPfalse) {
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
  P code_outF8073;
  P out_nameF8072;
  P sepF8071;
  P exe_nameF8070;
  P init_nameF8069;
  P appnameF8068;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF8068 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF8068,LITREF(lit_66));
  init_nameF8069 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF8068);
  exe_nameF8070 = T5;
  sepF8071 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF8068,LITREF(lit_67));
  out_nameF8072 = T8;
  code_outF8073 = YPfalse;
  code_outF8073 = BOXFAB(code_outF8073);
  T12 = FUNFAB(fun_41,6,code_outF8073,out_nameF8072,sepF8071,loader_,init_nameF8069,exe_nameF8070);
  T13 = FUNFAB(fun_42,1,code_outF8073);
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
  P x_3260F8076;
  P x_3259F8075;
  P x_3258F8074;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_3258F8074 = code_out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_3258F8074,LITREF(lit_87));
  x_3259F8075 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3259F8075,LITREF(lit_88));
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_3260F8076 = code_out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3260F8076,LITREF(lit_89));
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
  P x_3261F8077;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  x_3261F8077 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3261F8077,LITREF(lit_91));
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
  P x_3262F8078;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  x_3262F8078 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3262F8078,LITREF(lit_93));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3262F8078,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3262F8078,LITREF(lit_94));
  T3 = FUNFAB(fun_47,2,code_out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_49) {
  P code_out_,importedQ_,gb_;
  P x_3263F8082;
  P nameF8081;
  P tmpF8080;
  P kindF8079;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF8079 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF8079,LITREF(lit_99));
  tmpF8080 = T4;
  if (tmpF8080 != YPfalse) {
    T5 = tmpF8080;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),kindF8079,LITREF(lit_100));
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF8081 = T8;
    x_3263F8082 = code_out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_101);
    } else {
      T10 = LITREF(lit_102);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3263F8082,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_3263F8082,LITREF(lit_103));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3263F8082,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_3263F8082,LITREF(lit_104));
    T13 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3263F8082,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_3263F8082,LITREF(lit_105));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF8081);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3263F8082,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_3263F8082,LITREF(lit_106));
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
  P loopF8085;
  P stringF8084;
  P buffer_sizeF8083;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF8083 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF8083);
  check_type(T3,VARREF(YLstrG));
  stringF8084 = T3;
  T4 = FUNSHELL(1,fun_loop_50,4);
  loopF8085 = T4;
  FUNINIT(loopF8085, 4,buffer_sizeF8083,buffer_,stringF8084,loopF8085);
  T5 = CALL1(0,loopF8085,YPint((P)0));
  T2 = stringF8084;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_52) {
  P i_;
  P encF8087;
  P cF8086;
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
    cF8086 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF8086);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T7);
    encF8087 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF8087,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF8086);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF8087);
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
  P loopF8089;
  P lenF8088;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF8088 = T1;
  T3 = FUNSHELL(1,fun_loop_52,3);
  loopF8089 = T3;
  FUNINIT(loopF8089, 3,lenF8088,str_,loopF8089);
  T4 = CALL1(0,loopF8089,YPint((P)0));
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
  P resultF8095;
  P resultF8094;
  P digitF8093;
  P remainderF8092;
  P quotientF8091;
  P tup87F8090;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup87F8090 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup87F8090,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF8091 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup87F8090,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF8092 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF8092);
  check_type(T7,VARREF(YLchrG));
  digitF8093 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF8091,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF8094 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF8093,resultF8094,YPint((P)0));
    T10 = resultF8094;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF8091,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF8095 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF8095);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF8093,resultF8095,T15);
    T12 = resultF8095;
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
  P process_integerF8096;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T2 = FUNSHELL(1,fun_process_integer_55,1);
  process_integerF8096 = T2;
  FUNINIT(process_integerF8096, 1,process_integerF8096);
  T3 = CALL2(1,process_integerF8096,number_,YPint((P)1));
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_3265_57) {
  P x_3264_;
  P iF8097;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3264_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3264_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3264_);
    iF8097 = T4;
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_integer),iF8097);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T6,VARREF(YevalSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF8097);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3264_);
    a1 = T8;
    x_3264_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3267_58) {
  P x_3266_;
  P mangleF8098;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_3266_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3266_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3266_);
    mangleF8098 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF8098,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF8098,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3266_);
    a1 = T9;
    x_3266_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3269_59) {
  P x_3268_;
  P iF8099;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_3268_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3268_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3268_);
    iF8099 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF8099);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF8099);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3268_);
    a1 = T7;
    x_3268_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3271_60) {
  P x_3270_;
  P iF8100;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_3270_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3270_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3270_);
    iF8100 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF8100);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF8100);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3270_);
    a1 = T7;
    x_3270_ = a1;
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

FUNCODEDEF(fun_x_3273_62) {
  P x_3272_;
  P cF8101;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_3272_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3272_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3272_);
    cF8101 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF8101);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3272_);
    a1 = T9;
    x_3272_ = a1;
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
  P x_3273F8102;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_3273_62,2);
  x_3273F8102 = T0;
  FUNINIT(x_3273F8102, 2,buf_,x_3273F8102);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T1 = CALL1(0,x_3273F8102,T2);
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

FUNCODEDEF(fun_x_3277_68) {
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
  P x_3276F8109;
  P x_3276F8108;
  P x_3276F8107;
  P valueF8106;
  P placeF8105;
  P x_3276F8104;
  P x_3277F8103;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3277_68,1);
  x_3277F8103 = T1;
  FUNINIT(x_3277F8103, 1,return_);
  x_3276F8104 = FREEREF(0);
  placeF8105 = YPfalse;
  placeF8105 = BOXFAB(placeF8105);
  valueF8106 = YPfalse;
  valueF8106 = BOXFAB(valueF8106);
  T7 = CALL2(1,VARREF(YisaQ),x_3276F8104,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3276F8104,LITREF(lit_168),x_3277F8103);
    x_3276F8107 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3276F8107,x_3277F8103);
    BOXVAL(placeF8105) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_3276F8107);
    x_3276F8108 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3276F8108,x_3277F8103);
    BOXVAL(valueF8106) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_3276F8108);
    x_3276F8109 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3276F8109,x_3277F8103);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_3277F8103,LITREF(lit_169),x_3276F8104);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_170));
  T21 = BOXVAL(placeF8105);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
  T26 = BOXVAL(placeF8105);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = BOXVAL(valueF8106);
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
  P loopF8111;
  P lenF8110;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF8110 = T1;
  T3 = FUNSHELL(1,fun_loop_71,4);
  loopF8111 = T3;
  FUNINIT(loopF8111, 4,lenF8110,buf_,name_,loopF8111);
  T4 = CALL1(0,loopF8111,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_73) {
  P buf_,mod_;
  P nameF8113;
  P tmpF8112;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),mod_);
  tmpF8112 = T2;
  if (tmpF8112 != YPfalse) {
    T3 = tmpF8112;
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
  nameF8113 = T1;
  T10 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF8113);
  T0 = T10;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_74) {
  P mod_,name_;
  P tmpF8114;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF8114 = T2;
  if (tmpF8114 != YPfalse) {
    T3 = tmpF8114;
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
  P tmpF8115;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF8115 = T1;
  if (tmpF8115 != YPfalse) {
    T2 = tmpF8115;
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
  P tmpF8116;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF8116 = T1;
  if (tmpF8116 != YPfalse) {
    T2 = tmpF8116;
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
  P tmpF8117;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF8117 = T1;
  if (tmpF8117 != YPfalse) {
    T2 = tmpF8117;
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

FUNCODEDEF(fun_x_3281_82) {
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
  P out_varF8129;
  P x_3280F8128;
  P x_3280F8127;
  P x_3280F8126;
  P x_3280F8125;
  P x_3280F8124;
  P x_3280F8123;
  P bodyF8122;
  P clausesF8121;
  P out_valF8120;
  P x_3280F8119;
  P x_3281F8118;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3281_82,1);
  x_3281F8118 = T1;
  FUNINIT(x_3281F8118, 1,return_);
  x_3280F8119 = FREEREF(0);
  out_valF8120 = YPfalse;
  out_valF8120 = BOXFAB(out_valF8120);
  clausesF8121 = YPfalse;
  clausesF8121 = BOXFAB(clausesF8121);
  bodyF8122 = YPfalse;
  bodyF8122 = BOXFAB(bodyF8122);
  T9 = CALL2(1,VARREF(YisaQ),x_3280F8119,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3280F8119,LITREF(lit_183),x_3281F8118);
    x_3280F8123 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3280F8123,x_3281F8118);
    BOXVAL(out_valF8120) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_3280F8123);
    x_3280F8124 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3280F8124,x_3281F8118);
    x_3280F8125 = T16;
    BOXVAL(clausesF8121) = x_3280F8125;
    x_3280F8126 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3280F8126,x_3281F8118);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_3280F8124);
    x_3280F8127 = T19;
    BOXVAL(bodyF8122) = x_3280F8127;
    x_3280F8128 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3280F8128,x_3281F8118);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_3281F8118,LITREF(lit_169),x_3280F8119);
  }
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF8129 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T31 = CALL1(1,VARREF(Ylst),out_varF8129);
  T33 = BOXVAL(out_valF8120);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_185));
  T39 = BOXVAL(clausesF8121);
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
  T61 = CALL1(1,VARREF(Ylst),out_varF8129);
  T62 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = BOXVAL(bodyF8122);
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

FUNCODEDEF(fun_x_3285_85) {
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
  P out_varF8139;
  P x_3284F8138;
  P x_3284F8137;
  P x_3284F8136;
  P x_3284F8135;
  P x_3284F8134;
  P bodyF8133;
  P out_valF8132;
  P x_3284F8131;
  P x_3285F8130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3285_85,1);
  x_3285F8130 = T1;
  FUNINIT(x_3285F8130, 1,return_);
  x_3284F8131 = FREEREF(0);
  out_valF8132 = YPfalse;
  out_valF8132 = BOXFAB(out_valF8132);
  bodyF8133 = YPfalse;
  bodyF8133 = BOXFAB(bodyF8133);
  T7 = CALL2(1,VARREF(YisaQ),x_3284F8131,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3284F8131,LITREF(lit_192),x_3285F8130);
    x_3284F8134 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3284F8134,x_3285F8130);
    x_3284F8135 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3284F8135,x_3285F8130);
    BOXVAL(out_valF8132) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_3284F8135);
    x_3284F8136 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3284F8136,x_3285F8130);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_3284F8134);
    x_3284F8137 = T16;
    BOXVAL(bodyF8133) = x_3284F8137;
    x_3284F8138 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3284F8138,x_3285F8130);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_3285F8130,LITREF(lit_169),x_3284F8131);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF8139 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T28 = CALL1(1,VARREF(Ylst),out_varF8139);
  T30 = BOXVAL(out_valF8132);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T34 = CALL1(1,VARREF(Ylst),out_varF8139);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T36 = BOXVAL(bodyF8133);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T40 = CALL1(1,VARREF(Ylst),out_varF8139);
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

FUNCODEDEF(fun_x_3289_88) {
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
  P tmpF8140;
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
    tmpF8140 = firstQ_;
    if (tmpF8140 != YPfalse) {
      T8 = tmpF8140;
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
  P loopF8151;
  P out_varF8150;
  P x_3288F8149;
  P x_3288F8148;
  P x_3288F8147;
  P x_3288F8146;
  P x_3288F8145;
  P bodyF8144;
  P out_valF8143;
  P x_3288F8142;
  P x_3289F8141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3289_88,1);
  x_3289F8141 = T1;
  FUNINIT(x_3289F8141, 1,return_);
  x_3288F8142 = FREEREF(0);
  out_valF8143 = YPfalse;
  out_valF8143 = BOXFAB(out_valF8143);
  bodyF8144 = YPfalse;
  bodyF8144 = BOXFAB(bodyF8144);
  T7 = CALL2(1,VARREF(YisaQ),x_3288F8142,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3288F8142,LITREF(lit_194),x_3289F8141);
    x_3288F8145 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3288F8145,x_3289F8141);
    x_3288F8146 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3288F8146,x_3289F8141);
    BOXVAL(out_valF8143) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_3288F8146);
    x_3288F8147 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3288F8147,x_3289F8141);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_3288F8145);
    x_3288F8148 = T16;
    BOXVAL(bodyF8144) = x_3288F8148;
    x_3288F8149 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3288F8149,x_3289F8141);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_3289F8141,LITREF(lit_169),x_3288F8142);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF8150 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T28 = CALL1(1,VARREF(Ylst),out_varF8150);
  T30 = BOXVAL(out_valF8143);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T34 = CALL1(1,VARREF(Ylst),out_varF8150);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T37 = FUNSHELL(1,fun_loop_89,2);
  loopF8151 = T37;
  FUNINIT(loopF8151, 2,out_varF8150,loopF8151);
  T39 = BOXVAL(bodyF8144);
  T38 = CALL3(0,loopF8151,Ynil,T39,YPtrue);
  T36 = T38;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_190));
  T43 = CALL1(1,VARREF(Ylst),out_varF8150);
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
  P tmpF8155;
  P x_3290F8154;
  P tmpF8153;
  P regF8152;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF8152 = T1;
  tmpF8153 = regF8152;
  if (tmpF8153 != YPfalse) {
    x_3290F8154 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3290F8154,LITREF(lit_199));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF8152);
    CALL2(1,VARREF(YgooSioSportYputs),x_3290F8154,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_3290F8154,LITREF(lit_200));
    T5 = T7;
    tmpF8155 = T5;
    if (tmpF8155 != YPfalse) {
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

FUNCODEDEF(fun_x_3292_93) {
  P x_3291_;
  P iF8156;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3291_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3291_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3291_);
    iF8156 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_204));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3291_);
    a1 = T6;
    x_3291_ = a1;
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
  P x_3292F8157;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_3292_93,2);
  x_3292F8157 = T1;
  FUNINIT(x_3292F8157, 2,code_out_,x_3292F8157);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_3292F8157,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3296_95) {
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
  P x_3295F8168;
  P x_3295F8167;
  P x_3295F8166;
  P x_3295F8165;
  P x_3295F8164;
  P x_3295F8163;
  P bodyF8162;
  P code_outF8161;
  P dF8160;
  P x_3295F8159;
  P x_3296F8158;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3296_95,1);
  x_3296F8158 = T1;
  FUNINIT(x_3296F8158, 1,return_);
  x_3295F8159 = FREEREF(0);
  dF8160 = YPfalse;
  dF8160 = BOXFAB(dF8160);
  code_outF8161 = YPfalse;
  code_outF8161 = BOXFAB(code_outF8161);
  bodyF8162 = YPfalse;
  bodyF8162 = BOXFAB(bodyF8162);
  T9 = CALL2(1,VARREF(YisaQ),x_3295F8159,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3295F8159,LITREF(lit_206),x_3296F8158);
    x_3295F8163 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3295F8163,x_3296F8158);
    x_3295F8164 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3295F8164,x_3296F8158);
    BOXVAL(dF8160) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_3295F8164);
    x_3295F8165 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3295F8165,x_3296F8158);
    BOXVAL(code_outF8161) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_3295F8165);
    x_3295F8166 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3295F8166,x_3296F8158);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_3295F8163);
    x_3295F8167 = T21;
    BOXVAL(bodyF8162) = x_3295F8167;
    x_3295F8168 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3295F8168,x_3296F8158);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_3296F8158,LITREF(lit_169),x_3295F8159);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_207));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T31 = BOXVAL(dF8160);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T33 = BOXVAL(code_outF8161);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = BOXVAL(bodyF8162);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
  T39 = BOXVAL(code_outF8161);
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

FUNCODEDEF(fun_x_3300_98) {
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
  P x_3299F8181;
  P x_3299F8180;
  P x_3299F8179;
  P x_3299F8178;
  P x_3299F8177;
  P x_3299F8176;
  P x_3299F8175;
  P bodyF8174;
  P code_outF8173;
  P dF8172;
  P eF8171;
  P x_3299F8170;
  P x_3300F8169;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3300_98,1);
  x_3300F8169 = T1;
  FUNINIT(x_3300F8169, 1,return_);
  x_3299F8170 = FREEREF(0);
  eF8171 = YPfalse;
  eF8171 = BOXFAB(eF8171);
  dF8172 = YPfalse;
  dF8172 = BOXFAB(dF8172);
  code_outF8173 = YPfalse;
  code_outF8173 = BOXFAB(code_outF8173);
  bodyF8174 = YPfalse;
  bodyF8174 = BOXFAB(bodyF8174);
  T11 = CALL2(1,VARREF(YisaQ),x_3299F8170,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3299F8170,LITREF(lit_211),x_3300F8169);
    x_3299F8175 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3299F8175,x_3300F8169);
    x_3299F8176 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3299F8176,x_3300F8169);
    BOXVAL(eF8171) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_3299F8176);
    x_3299F8177 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3299F8177,x_3300F8169);
    BOXVAL(dF8172) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_3299F8177);
    x_3299F8178 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3299F8178,x_3300F8169);
    BOXVAL(code_outF8173) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_3299F8178);
    x_3299F8179 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3299F8179,x_3300F8169);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_3299F8175);
    x_3299F8180 = T26;
    BOXVAL(bodyF8174) = x_3299F8180;
    x_3299F8181 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3299F8181,x_3300F8169);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_3300F8169,LITREF(lit_169),x_3299F8170);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_206));
  T35 = BOXVAL(dF8172);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(code_outF8173);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T42 = BOXVAL(eF8171);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(dF8172);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(code_outF8173);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T39 = CALL5(1,VARREF(YgooSmacrosYcat),T40,T41,T43,T45,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = BOXVAL(bodyF8174);
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

FUNCODEDEF(fun_x_3304_101) {
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
  P x_3303F8194;
  P x_3303F8193;
  P x_3303F8192;
  P x_3303F8191;
  P x_3303F8190;
  P x_3303F8189;
  P x_3303F8188;
  P bodyF8187;
  P code_outF8186;
  P dF8185;
  P eF8184;
  P x_3303F8183;
  P x_3304F8182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3304_101,1);
  x_3304F8182 = T1;
  FUNINIT(x_3304F8182, 1,return_);
  x_3303F8183 = FREEREF(0);
  eF8184 = YPfalse;
  eF8184 = BOXFAB(eF8184);
  dF8185 = YPfalse;
  dF8185 = BOXFAB(dF8185);
  code_outF8186 = YPfalse;
  code_outF8186 = BOXFAB(code_outF8186);
  bodyF8187 = YPfalse;
  bodyF8187 = BOXFAB(bodyF8187);
  T11 = CALL2(1,VARREF(YisaQ),x_3303F8183,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3303F8183,LITREF(lit_213),x_3304F8182);
    x_3303F8188 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3303F8188,x_3304F8182);
    x_3303F8189 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3303F8189,x_3304F8182);
    BOXVAL(eF8184) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_3303F8189);
    x_3303F8190 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3303F8190,x_3304F8182);
    BOXVAL(dF8185) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_3303F8190);
    x_3303F8191 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3303F8191,x_3304F8182);
    BOXVAL(code_outF8186) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_3303F8191);
    x_3303F8192 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3303F8192,x_3304F8182);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_3303F8188);
    x_3303F8193 = T26;
    BOXVAL(bodyF8187) = x_3303F8193;
    x_3303F8194 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3303F8194,x_3304F8182);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_3304F8182,LITREF(lit_169),x_3303F8183);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_215));
  T36 = BOXVAL(eF8184);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T43 = BOXVAL(eF8184);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(dF8185);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(code_outF8186);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T44,T46,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = BOXVAL(bodyF8187);
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

FUNCODEDEF(fun_x_3306_104) {
  P x_3305_;
  P x_3307F8196;
  P qbF8195;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3305_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3305_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3305_);
    qbF8195 = T4;
    x_3307F8196 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3307F8196,LITREF(lit_221));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF8195);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3307F8196,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3307F8196,LITREF(lit_222));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3305_);
    a1 = T8;
    x_3305_ = a1;
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
  P x_3306F8197;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_218));
  T1 = FUNSHELL(1,fun_x_3306_104,2);
  x_3306F8197 = T1;
  FUNINIT(x_3306F8197, 2,code_out_,x_3306F8197);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_3306F8197,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3309_106) {
  P x_3308_;
  P x_3310F8199;
  P qbF8198;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_3308_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3308_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3308_);
    qbF8198 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    x_3310F8199 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3310F8199,LITREF(lit_226));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF8198);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3310F8199,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3310F8199,LITREF(lit_227));
    T7 = CALL1(1,VARREF(YevalSastYbinding_info),qbF8198);
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),T7);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_209));
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3308_);
    a1 = T9;
    x_3308_ = a1;
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
  P x_3309F8200;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_3309_106,2);
  x_3309F8200 = T1;
  FUNINIT(x_3309F8200, 2,code_out_,x_3309F8200);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_3309F8200,T3);
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
  P x_3311F8201;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3311F8201 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_235));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3311F8201,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3311F8201,LITREF(lit_236));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_3311F8201,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3311F8201,LITREF(lit_237));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P code_out_,x_;
  P x_3312F8202;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3312F8202 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_238));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3312F8202,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3312F8202,LITREF(lit_239));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_3312F8202,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3312F8202,LITREF(lit_240));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_115) {
  P i_;
  P x_3314F8204;
  P x_3313F8203;
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
    x_3313F8203 = T4;
    x_3314F8204 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_3314F8204,x_3313F8203,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_3314F8204,x_3313F8203,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_3314F8204,x_3313F8203,YPchr((P)120));
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
  P loopF8205;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_115,3);
  loopF8205 = T1;
  FUNINIT(loopF8205, 3,FREEREF(0),done_,loopF8205);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF8205,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_117) {
  P o_;
  P sF8206;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF8206 = T1;
  T3 = FUNFAB(fun_116,1,sF8206);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_118) {
  P code_out_,x_;
  P x_3315F8207;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3315F8207 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_244));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3315F8207,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3315F8207,LITREF(lit_245));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3315F8207,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3315F8207,LITREF(lit_246));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_119) {
  P code_out_,x_;
  P x_3316F8208;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3316F8208 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_247));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3316F8208,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3316F8208,LITREF(lit_248));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3316F8208,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3316F8208,LITREF(lit_249));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3319_120) {
  P x_3318_;
  P eF8209;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3318_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3318_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3318_);
    eF8209 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_255));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF8209);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3318_);
    a1 = T6;
    x_3318_ = a1;
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
  P x_3319F8211;
  P x_3317F8210;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3317F8210 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3317F8210,LITREF(lit_250));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_251));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3317F8210,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_3317F8210,LITREF(lit_252));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3317F8210,T2);
  T3 = FUNSHELL(1,fun_x_3319_120,2);
  x_3319F8211 = T3;
  FUNINIT(x_3319F8211, 2,code_out_,x_3319F8211);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_3319F8211,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_256));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_3322_122) {
  P x_3321_;
  P eF8212;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3321_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3321_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3321_);
    eF8212 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_262));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF8212);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3321_);
    a1 = T6;
    x_3321_ = a1;
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
  P x_3322F8214;
  P x_3320F8213;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3320F8213 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3320F8213,LITREF(lit_257));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_258));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3320F8213,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_3320F8213,LITREF(lit_259));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3320F8213,T2);
  T3 = FUNSHELL(1,fun_x_3322_122,2);
  x_3322F8214 = T3;
  FUNINIT(x_3322F8214, 2,code_out_,x_3322F8214);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_3322F8214,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_263));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_quotation_124) {
  P code_out_,x_;
  P x_3323F8215;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_3323F8215 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_264));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3323F8215,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_3323F8215,LITREF(lit_265));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3323F8215,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3323F8215,LITREF(lit_266));
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
  P x_3324F8216;
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
  x_3324F8216 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3324F8216,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3324F8216,YPchr((P)41));
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
  P x_3326F8218;
  P x_3325F8217;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_275));
  x_3325F8217 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3325F8217,YPchr((P)40));
  x_3326F8218 = code_out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_3326F8218,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3325F8217,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_132) {
  P e_,code_out_;
  P x_3327F8220;
  P regF8219;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF8219 = T1;
  if (regF8219 != YPfalse) {
    x_3327F8220 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3327F8220,LITREF(lit_276));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF8219);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3327F8220,T5);
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
  P x_3328F8221;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  x_3328F8221 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3328F8221,LITREF(lit_278));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3328F8221,T2);
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
  P x_3329F8222;
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
    x_3329F8222 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3329F8222,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T2 = CALL1(1,VARREF(YevalSastYreference_binding),T3);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T2,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_3329F8222,YPchr((P)41));
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
  P x_3330F8223;
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
    x_3330F8223 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3330F8223,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_3330F8223,YPchr((P)41));
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
  P x_3331F8224;
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
  x_3331F8224 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3331F8224,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_3331F8224,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_285));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,code_out_;
  P x_3332F8226;
  P bindingF8225;
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
  bindingF8225 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF8225,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_286));
  x_3332F8226 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3332F8226,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF8225,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3332F8226,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_141) {
  P e_,f_,d_,code_out_;
  P x_3333F8227;
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
  x_3333F8227 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3333F8227,LITREF(lit_288));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3333F8227,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3333F8227,LITREF(lit_289));
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

FUNCODEDEF(fun_x_3335_144) {
  P x_3334_;
  P argF8228;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3334_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3334_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3334_);
    argF8228 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF8228,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3334_);
    a1 = T6;
    x_3334_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3338_145) {
  P x_3337_,x_3336_;
  P x_3339F8232;
  P argF8231;
  P iF8230;
  P tmpF8229;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3337_, 0);
  ARG(x_3336_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3337_);
  tmpF8229 = T3;
  if (tmpF8229 != YPfalse) {
    T4 = tmpF8229;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3336_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3337_);
    iF8230 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3336_);
    argF8231 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    x_3339F8232 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3339F8232,LITREF(lit_298));
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF8230);
    CALL2(1,VARREF(YgooSioSportYputs),x_3339F8232,T10);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_3339F8232,LITREF(lit_299));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF8231,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3337_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3336_);
    a1 = T13;
    a2 = T14;
    x_3337_ = a1;
    x_3336_ = a2;
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

FUNCODEDEF(fun_x_3342_146) {
  P x_3341_,x_3340_;
  P x_3343F8236;
  P bindingF8235;
  P iF8234;
  P tmpF8233;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3341_, 0);
  ARG(x_3340_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3341_);
  tmpF8233 = T3;
  if (tmpF8233 != YPfalse) {
    T4 = tmpF8233;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3340_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3341_);
    iF8234 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3340_);
    bindingF8235 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF8235,FREEREF(1));
    x_3343F8236 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3343F8236,LITREF(lit_303));
    T11 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF8234);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),x_3343F8236,T11);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3341_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3340_);
    a1 = T13;
    a2 = T14;
    x_3341_ = a1;
    x_3340_ = a2;
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
  P x_3342F8239;
  P x_3338F8238;
  P x_3335F8237;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_3335_144,4);
  x_3335F8237 = T0;
  FUNINIT(x_3335F8237, 4,f_,d_,code_out_,x_3335F8237);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_3335F8237,T2);
  T4 = FUNSHELL(1,fun_x_3338_145,3);
  x_3338F8238 = T4;
  FUNINIT(x_3338F8238, 3,d_,code_out_,x_3338F8238);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_3338F8238,T6,T8);
  T10 = FUNSHELL(1,fun_x_3342_146,3);
  x_3342F8239 = T10;
  FUNINIT(x_3342F8239, 3,d_,code_out_,x_3342F8239);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_3342F8239,T12,T14);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_304));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_3345_148) {
  P x_3344_;
  P argF8240;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3344_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3344_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3344_);
    argF8240 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF8240,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3344_);
    a1 = T6;
    x_3344_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3350_149) {
  P x_3349_;
  P argF8241;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3349_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3349_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3349_);
    argF8241 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF8241,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3349_);
    a1 = T6;
    x_3349_ = a1;
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
  P x_3350F8252;
  P x_3348F8251;
  P x_3347F8250;
  P x_3346F8249;
  P x_3345F8248;
  P nF8247;
  P tmpF8246;
  P tmpF8245;
  P tmpF8244;
  P tmpF8243;
  P functionF8242;
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
  functionF8242 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF8243 = T4;
  if (tmpF8243 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_methodG));
    tmpF8244 = T7;
    if (tmpF8244 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF8245 = T10;
      if (tmpF8245 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF8242,VARREF(YevalSast_linearizeYLfree_referenceG));
        tmpF8246 = T14;
        if (tmpF8246 != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSast_linearizeYreference_selfQ),functionF8242);
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
    nF8247 = T19;
    T21 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_3345_148,4);
    x_3345F8248 = T22;
    FUNINIT(x_3345F8248, 4,f_,d_,code_out_,x_3345F8248);
    T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_3345F8248,T24);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_3346F8249 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3346F8249,LITREF(lit_307));
    T28 = CALL2(1,VARREF(YgooSmagYG),nF8247,VARREF(YevalSg2cYDnumber_call_templates));
    if (T28 != YPfalse) {
      T27 = LITREF(lit_308);
    } else {
      T27 = nF8247;
    }
    T26 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3346F8249,T27);
    x_3347F8250 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3347F8250,YPchr((P)40));
    T30 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
    if (T30 != YPfalse) {
      T29 = LITREF(lit_309);
    } else {
      T29 = LITREF(lit_310);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T29);
    T31 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T31,code_out_);
    T32 = CALL2(1,VARREF(YgooSmagYG),nF8247,VARREF(YevalSg2cYDnumber_call_templates));
    if (T32 != YPfalse) {
      x_3348F8251 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_3348F8251,LITREF(lit_311));
      T34 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3348F8251,nF8247);
      T33 = T34;
    } else {
    }
    T35 = FUNSHELL(1,fun_x_3350_149,2);
    x_3350F8252 = T35;
    FUNINIT(x_3350F8252, 2,code_out_,x_3350F8252);
    T38 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T37 = CALL1(1,VARREF(YgooScolsScolYenum),T38);
    T36 = CALL1(0,x_3350F8252,T37);
    T39 = CALL2(1,VARREF(YgooSioSportYput),x_3347F8250,YPchr((P)41));
    T40 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
    T18 = T40;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3354_151) {
  P x_3353_,x_3352_;
  P xF8255;
  P firstQF8254;
  P tmpF8253;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3353_, 0);
  ARG(x_3352_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3353_);
  tmpF8253 = T3;
  if (tmpF8253 != YPfalse) {
    T4 = tmpF8253;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3352_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3353_);
    firstQF8254 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3352_);
    xF8255 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF8254);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF8255,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3353_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3352_);
    a1 = T13;
    a2 = T14;
    x_3353_ = a1;
    x_3352_ = a2;
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
  P x_3354F8257;
  P x_3351F8256;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_3351F8256 = code_out_;
  T2 = FUNSHELL(1,fun_x_3354_151,3);
  x_3354F8257 = T2;
  FUNINIT(x_3354F8257, 3,x_3351F8256,code_out_,x_3354F8257);
  T6 = fun_152;
  T7 = fun_153;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_3354F8257,T4,T8);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3358_155) {
  P x_3357_,x_3356_,x_3355_;
  P x_3359F8263;
  P bindingF8262;
  P typeF8261;
  P initF8260;
  P tmpF8259;
  P tmpF8258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_3357_, 0);
  ARG(x_3356_, 1);
  ARG(x_3355_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3357_);
  tmpF8258 = T3;
  if (tmpF8258 != YPfalse) {
    T4 = tmpF8258;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3356_);
    tmpF8259 = T6;
    if (tmpF8259 != YPfalse) {
      T7 = tmpF8259;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3355_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_3357_);
    initF8260 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_3356_);
    typeF8261 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_3355_);
    bindingF8262 = T14;
    CALL4(1,VARREF(YevalSg2cYto_c),initF8260,YPfalse,FREEREF(0),FREEREF(1));
    T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF8261);
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALL4(1,VARREF(YevalSg2cYto_c),typeF8261,YPfalse,FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_321));
      x_3359F8263 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYput),x_3359F8263,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF8260,FREEREF(1));
      CALL2(1,VARREF(YgooSioSportYput),x_3359F8263,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),typeF8261,FREEREF(1));
      T17 = CALL2(1,VARREF(YgooSioSportYput),x_3359F8263,YPchr((P)41));
      T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF8262,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_322));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF8260,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3357_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3356_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3355_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_3357_ = a1;
    x_3356_ = a2;
    x_3355_ = a3;
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
  P x_3358F8264;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_3358_155,3);
  x_3358F8264 = T0;
  FUNINIT(x_3358F8264, 3,d_,code_out_,x_3358F8264);
  T3 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T1 = CALL3(0,x_3358F8264,T2,T4,T6);
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

FUNCODEDEF(fun_x_3362_157) {
  P x_3361_,x_3360_;
  P bindingF8267;
  P initF8266;
  P tmpF8265;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_3361_, 0);
  ARG(x_3360_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3361_);
  tmpF8265 = T3;
  if (tmpF8265 != YPfalse) {
    T4 = tmpF8265;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3360_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3361_);
    initF8266 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3360_);
    bindingF8267 = T9;
    CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF8267,initF8266,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF8267,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_326));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF8266,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_209));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3361_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3360_);
    a1 = T11;
    a2 = T12;
    x_3361_ = a1;
    x_3360_ = a2;
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
  P x_3362F8268;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_3362_157,3);
  x_3362F8268 = T0;
  FUNINIT(x_3362F8268, 3,d_,code_out_,x_3362F8268);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_3362F8268,T2,T4);
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
  P x_3363F8269;
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
  x_3363F8269 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3363F8269,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_3363F8269,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_160) {
  P e_,f_,d_,code_out_;
  P x_3364F8270;
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
  x_3364F8270 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3364F8270,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3364F8270,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3364F8270,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_161) {
  P e_,f_,d_,code_out_;
  P x_3365F8271;
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
  x_3365F8271 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_330));
  CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_331));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_3365F8271,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_3367_162) {
  P x_3366_;
  P argF8272;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3366_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3366_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3366_);
    argF8272 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF8272,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3366_);
    a1 = T6;
    x_3366_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3373_163) {
  P x_3372_,x_3371_;
  P argF8275;
  P firstQF8274;
  P tmpF8273;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3372_, 0);
  ARG(x_3371_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3372_);
  tmpF8273 = T3;
  if (tmpF8273 != YPfalse) {
    T4 = tmpF8273;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3371_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3372_);
    firstQF8274 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3371_);
    argF8275 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF8274);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF8275,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3372_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3371_);
    a1 = T13;
    a2 = T14;
    x_3372_ = a1;
    x_3371_ = a2;
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
  P x_3373F8283;
  P x_3370F8282;
  P x_3369F8281;
  P x_3368F8280;
  P x_3367F8279;
  P tmpF8278;
  P tmpF8277;
  P bindingF8276;
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
  bindingF8276 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF8277 = T4;
  if (tmpF8277 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    tmpF8278 = T7;
    if (tmpF8278 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF8276,T10);
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
    T12 = FUNSHELL(1,fun_x_3367_162,4);
    x_3367F8279 = T12;
    FUNINIT(x_3367F8279, 4,f_,d_,code_out_,x_3367F8279);
    T15 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_3367F8279,T14);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_3368F8280 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3368F8280,LITREF(lit_335));
    T18 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
    T17 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T18);
    T16 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3368F8280,T17);
    x_3369F8281 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3369F8281,YPchr((P)40));
    x_3370F8282 = code_out_;
    T20 = FUNSHELL(1,fun_x_3373_163,3);
    x_3373F8283 = T20;
    FUNINIT(x_3373F8283, 3,x_3370F8282,code_out_,x_3373F8283);
    T24 = fun_164;
    T25 = fun_165;
    T23 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T24,T25);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
    T27 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T26 = CALL1(1,VARREF(YgooScolsScolYenum),T27);
    T21 = CALL2(0,x_3373F8283,T22,T26);
    T19 = T21;
    T28 = CALL2(1,VARREF(YgooSioSportYput),x_3369F8281,YPchr((P)41));
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

FUNCODEDEF(fun_x_3377_168) {
  P x_3376_;
  P xF8284;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3376_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3376_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3376_);
    xF8284 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF8284,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3376_);
    a1 = T6;
    x_3376_ = a1;
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
  P x_3377F8289;
  P x_3375F8288;
  P x_3374F8287;
  P fF8286;
  P nF8285;
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
  nF8285 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTdefinitionsT),T5);
  fF8286 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF8285,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF8286);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_167,3,fF8286,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_339));
    x_3374F8287 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3374F8287,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF8286);
    x_3375F8288 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3375F8288,LITREF(lit_340));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF8285);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_3375F8288,T14);
    T15 = FUNSHELL(1,fun_x_3377_168,2);
    x_3377F8289 = T15;
    FUNINIT(x_3377F8289, 2,code_out_,x_3377F8289);
    T18 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    T16 = CALL1(0,x_3377F8289,T17);
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_3374F8287,YPchr((P)41));
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
  P x_3380F8294;
  P x_3379F8293;
  P x_3378F8292;
  P fF8291;
  P nF8290;
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
  nF8290 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTdefinitionsT),T5);
  fF8291 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF8290,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF8291);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_345));
    x_3378F8292 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3378F8292,YPchr((P)40));
    x_3379F8293 = code_out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_3379F8293,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_3378F8292,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF8291);
    CALL2(1,VARREF(YgooSioSportYput),x_3378F8292,YPchr((P)44));
    x_3380F8294 = code_out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF8290);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_3380F8294,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_3378F8292,YPchr((P)41));
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

FUNCODEDEF(fun_x_3384_172) {
  P x_3383_;
  P xF8295;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3383_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3383_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3383_);
    xF8295 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF8295,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3383_);
    a1 = T6;
    x_3383_ = a1;
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
  P x_3384F8299;
  P x_3382F8298;
  P x_3381F8297;
  P nF8296;
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
  nF8296 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF8296,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_171,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_347));
    x_3381F8297 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3381F8297,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,code_out_);
    x_3382F8298 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_3382F8298,LITREF(lit_348));
    T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3382F8298,nF8296);
    T9 = FUNSHELL(1,fun_x_3384_172,2);
    x_3384F8299 = T9;
    FUNINIT(x_3384F8299, 2,code_out_,x_3384F8299);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T10 = CALL1(0,x_3384F8299,T11);
    T13 = CALL2(1,VARREF(YgooSioSportYput),x_3381F8297,YPchr((P)41));
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
  P x_3385F8300;
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
  x_3385F8300 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3385F8300,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_3385F8300,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_3385F8300,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_3385F8300,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_3389_175) {
  P x_3388_;
  P eF8301;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3388_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3388_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3388_);
    eF8301 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF8301);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3388_);
    a1 = T6;
    x_3388_ = a1;
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
  P x_3389F8304;
  P x_3387F8303;
  P x_3386F8302;
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
    x_3386F8302 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_3386F8302,YPchr((P)40));
    x_3387F8303 = code_out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3387F8303,T7);
    T9 = FUNSHELL(1,fun_x_3389_175,3);
    x_3389F8304 = T9;
    FUNINIT(x_3389F8304, 3,code_out_,f_,x_3389F8304);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T10 = CALL1(0,x_3389F8304,T11);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_3386F8302,YPchr((P)41));
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
  P specsF8306;
  P typesF8305;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF8305 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YevalSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF8305);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF8305,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF8305;
  }
  specsF8306 = T3;
  T9 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,specsF8306);
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
  P x_3390F8307;
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
  x_3390F8307 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3390F8307,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_3390F8307,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_3390F8307,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3390F8307,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3390F8307,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3390F8307,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_363));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_3390F8307,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_182) {
  P e_,f_,d_,code_out_;
  P x_3391F8308;
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
  x_3391F8308 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3391F8308,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_365));
  CALL2(1,VARREF(YgooSioSportYput),x_3391F8308,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3391F8308,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3391F8308,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_366));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_3391F8308,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_367));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_3391F8308,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_368));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_3391F8308,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_369));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_3391F8308,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_3393_183) {
  P x_3392_;
  P defF8309;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3392_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3392_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3392_);
    defF8309 = T4;
    CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),FREEREF(0),defF8309);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3392_);
    a1 = T6;
    x_3392_ = a1;
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
  P x_3393F8310;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_372));
  T1 = FUNSHELL(1,fun_x_3393_183,2);
  x_3393F8310 = T1;
  FUNINIT(x_3393F8310, 2,code_out_,x_3393F8310);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_3393F8310,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3398_185) {
  P x_3397_,x_3396_;
  P iF8313;
  P firstQF8312;
  P tmpF8311;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3397_, 0);
  ARG(x_3396_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3397_);
  tmpF8311 = T3;
  if (tmpF8311 != YPfalse) {
    T4 = tmpF8311;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3396_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3397_);
    firstQF8312 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3396_);
    iF8313 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF8312);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_384));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3397_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3396_);
    a1 = T13;
    a2 = T14;
    x_3397_ = a1;
    x_3396_ = a2;
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
  P x_3398F8316;
  P x_3395F8315;
  P x_3394F8314;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  x_3394F8314 = code_out_;
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_377);
  } else {
    T0 = LITREF(lit_378);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3394F8314,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_3394F8314,LITREF(lit_379));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3394F8314,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3394F8314,LITREF(lit_380));
  x_3395F8315 = code_out_;
  T5 = FUNSHELL(1,fun_x_3398_185,3);
  x_3398F8316 = T5;
  FUNINIT(x_3398F8316, 3,x_3395F8315,code_out_,x_3398F8316);
  T9 = fun_186;
  T10 = fun_187;
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL1(1,VARREF(YgooScolsSseqYbelow),T13);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  T6 = CALL2(0,x_3398F8316,T7,T11);
  T4 = T6;
  T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_385));
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_generate_function_binding_189) {
  P code_out_,defn_;
  P x_3400F8321;
  P nameF8320;
  P x_3399F8319;
  P tmpF8318;
  P nameF8317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF8317 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF8317,VARREF(YevalSastYLmodule_bindingG));
  tmpF8318 = T4;
  if (tmpF8318 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF8317);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_387),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF8317);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF8317,YPfalse);
    if (T11 != YPfalse) {
      x_3399F8319 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_3399F8319,LITREF(lit_388));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3399F8319,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF8317,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF8317);
        T16 = T18;
      } else {
        T16 = nameF8317;
      }
      nameF8320 = T16;
      x_3400F8321 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_3400F8321,LITREF(lit_389));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF8320);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_3400F8321,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_3400F8321,LITREF(lit_390));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3400F8321,T22);
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
  P boundQF8322;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF8322 = T1;
  if (boundQF8322 != YPfalse) {
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
  P x_3402F8324;
  P x_3401F8323;
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
  x_3401F8323 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3401F8323,LITREF(lit_400));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_401));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_3401F8323,T2);
  x_3402F8324 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3402F8324,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_3402F8324,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3402F8324,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_3402F8324,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_402));
  CALL2(1,VARREF(YgooSioSportYput),x_3402F8324,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_403));
  CALL2(1,VARREF(YgooSioSportYput),x_3402F8324,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_3402F8324,YPchr((P)41));
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

FUNCODEDEF(fun_x_3407_197) {
  P x_3406_,x_3405_,x_3404_;
  P x_3408F8330;
  P bF8329;
  P iF8328;
  P firstQF8327;
  P tmpF8326;
  P tmpF8325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_3406_, 0);
  ARG(x_3405_, 1);
  ARG(x_3404_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3406_);
  tmpF8325 = T3;
  if (tmpF8325 != YPfalse) {
    T4 = tmpF8325;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3405_);
    tmpF8326 = T6;
    if (tmpF8326 != YPfalse) {
      T7 = tmpF8326;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3404_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_3406_);
    firstQF8327 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_3405_);
    iF8328 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_3404_);
    bF8329 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF8327);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    x_3408F8330 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3408F8330,LITREF(lit_414));
    T18 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF8328);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_3408F8330,T18);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3406_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3405_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3404_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_3406_ = a1;
    x_3405_ = a2;
    x_3404_ = a3;
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
  P x_3407F8332;
  P x_3403F8331;
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
    x_3403F8331 = code_out_;
    T4 = FUNSHELL(1,fun_x_3407_197,3);
    x_3407F8332 = T4;
    FUNINIT(x_3407F8332, 3,x_3403F8331,code_out_,x_3407F8332);
    T8 = fun_198;
    T9 = fun_199;
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_3407F8332,T6,T10,T12);
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
  P x_3409F8333;
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
  x_3409F8333 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3409F8333,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_3409F8333,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_209));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_203) {
  P e_;
  P bindingF8334;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  bindingF8334 = T1;
  T3 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF8334);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_419),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3415_204) {
  P x_3414_,x_3413_;
  P bindingF8337;
  P firstQF8336;
  P tmpF8335;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3414_, 0);
  ARG(x_3413_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3414_);
  tmpF8335 = T3;
  if (tmpF8335 != YPfalse) {
    T4 = tmpF8335;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3413_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3414_);
    firstQF8336 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3413_);
    bindingF8337 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF8336);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_429));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF8337,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3414_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3413_);
    a1 = T13;
    a2 = T14;
    x_3414_ = a1;
    x_3413_ = a2;
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
  P x_3415F8341;
  P x_3412F8340;
  P x_3411F8339;
  P x_3410F8338;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_3410F8338 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3410F8338,LITREF(lit_421));
  if (VARREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_422);
  } else {
    T0 = LITREF(lit_423);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3410F8338,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_424);
  } else {
    T1 = LITREF(lit_423);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3410F8338,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_3410F8338,LITREF(lit_425));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,code_out_);
  x_3411F8339 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_3411F8339,YPchr((P)40));
  x_3412F8340 = code_out_;
  T6 = FUNSHELL(1,fun_x_3415_204,3);
  x_3415F8341 = T6;
  FUNINIT(x_3415F8341, 3,x_3412F8340,code_out_,x_3415F8341);
  T10 = fun_205;
  T11 = fun_206;
  T9 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T10,T11);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T7 = CALL2(0,x_3415F8341,T8,T12);
  T5 = T7;
  T14 = CALL2(1,VARREF(YgooSioSportYput),x_3411F8339,YPchr((P)41));
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
  P tmpF8345;
  P nameF8344;
  P tmpF8343;
  P bindingF8342;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF8342 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF8342,VARREF(YevalSastYLmodule_bindingG));
  tmpF8343 = T3;
  if (tmpF8343 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF8342);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF8344 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF8344,LITREF(lit_434));
    tmpF8345 = T9;
    if (tmpF8345 != YPfalse) {
      T10 = tmpF8345;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF8344,LITREF(lit_435));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF8344);
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

FUNCODEDEF(fun_x_3419_209) {
  P x_3418_,x_3417_;
  P bF8348;
  P firstQF8347;
  P tmpF8346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_3418_, 0);
  ARG(x_3417_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3418_);
  tmpF8346 = T3;
  if (tmpF8346 != YPfalse) {
    T4 = tmpF8346;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3417_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3418_);
    firstQF8347 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3417_);
    bF8348 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF8347);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF8348,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3418_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3417_);
    a1 = T13;
    a2 = T14;
    x_3418_ = a1;
    x_3417_ = a2;
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
  P x_3420F8349;
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
    x_3420F8349 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3420F8349,LITREF(lit_446));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_3420F8349,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_3420F8349,LITREF(lit_447));
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
  P x_3419F8353;
  P x_3416F8352;
  P bindingsF8351;
  P offsetF8350;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF8350 = YPint((P)0);
  offsetF8350 = BOXFAB(offsetF8350);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF8351 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_437));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_438));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF8351);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_439));
    x_3416F8352 = code_out_;
    T7 = FUNSHELL(1,fun_x_3419_209,3);
    x_3419F8353 = T7;
    FUNINIT(x_3419F8353, 3,x_3416F8352,code_out_,x_3419F8353);
    T11 = fun_210;
    T12 = fun_211;
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T11,T12);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    T8 = CALL2(0,x_3419F8353,T9,T13);
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
  T19 = FUNFAB(fun_212,2,code_out_,offsetF8350);
  CALL2(1,VARREF(YgooSmacrosYdo),T19,bindingsF8351);
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

FUNCODEDEF(fun_x_3422_214) {
  P x_3421_;
  P tempF8354;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_3421_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3421_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3421_);
    tempF8354 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_455));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF8354,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_209));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3421_);
    a1 = T6;
    x_3421_ = a1;
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
  P x_3422F8355;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_3422_214,2);
  x_3422F8355 = T1;
  FUNINIT(x_3422F8355, 2,code_out_,x_3422F8355);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_3422F8355,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_216) {
  P j_,i_;
  P tmpF8356;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YevalSg2cYTregisters_per_lineT));
  tmpF8356 = T2;
  if (tmpF8356 != YPfalse) {
    T3 = tmpF8356;
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
  P next_regF8357;
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
    next_regF8357 = T3;
    FUNINIT(next_regF8357, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),next_regF8357);
    T4 = CALL2(0,next_regF8357,j_,YPint((P)0));
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
  P next_lineF8359;
  P nregsF8358;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF8358 = T1;
  T3 = FUNSHELL(1,fun_next_line_217,4);
  next_lineF8359 = T3;
  FUNINIT(next_lineF8359, 4,nregsF8358,code_out_,next_lineF8359,regs_);
  T4 = CALL1(0,next_lineF8359,YPint((P)0));
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
  P x_3423F8360;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_3423F8360 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3423F8360,LITREF(lit_467));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3423F8360,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_3423F8360,LITREF(lit_468));
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
  P home_modF8361;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF8361 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF8361);
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
  P maybe_declareF8364;
  P envF8363;
  P seenF8362;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF8362 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF8363 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_220,2);
  maybe_declareF8364 = T5;
  FUNINIT(maybe_declareF8364, 2,seenF8362,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF8363);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF8364,T6);
  T9 = FUNFAB(fun_221,2,mod_,maybe_declareF8364);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3425_223) {
  P x_3424_;
  P x_3426F8366;
  P nF8365;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3424_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3424_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3424_);
    nF8365 = T4;
    x_3426F8366 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3426F8366,LITREF(lit_474));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF8365);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3426F8366,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3426F8366,LITREF(lit_475));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3424_);
    a1 = T8;
    x_3424_ = a1;
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
  P x_3427F8367;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_3427F8367 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_3427F8367,LITREF(lit_479));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3427F8367,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_3427F8367,LITREF(lit_480));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3427F8367,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_3427F8367,LITREF(lit_481));
    T8 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3427F8367,T8);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_3427F8367,LITREF(lit_482));
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
  P x_3429F8369;
  P x_3428F8368;
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
      x_3428F8368 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_3428F8368,LITREF(lit_485));
      T7 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T6 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T7);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_3428F8368,T6);
      CALL2(1,VARREF(YgooSioSportYputs),x_3428F8368,LITREF(lit_486));
      T8 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_3428F8368,T8);
      T9 = CALL2(1,VARREF(YgooSioSportYputs),x_3428F8368,LITREF(lit_487));
      T5 = T9;
      T2 = T5;
    } else {
      x_3429F8369 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_3429F8369,LITREF(lit_488));
      T12 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_3429F8369,T11);
      T13 = CALL2(1,VARREF(YgooSioSportYputs),x_3429F8369,LITREF(lit_489));
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

FUNCODEDEF(fun_x_3431_226) {
  P x_3430_;
  P x_3432F8373;
  P bindingF8372;
  P exported_asF8371;
  P tup88F8370;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(x_3430_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3430_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_3430_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_3430_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup88F8370 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup88F8370,YPint((P)0));
    exported_asF8371 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup88F8370,YPint((P)1));
    bindingF8372 = T10;
    x_3432F8373 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3432F8373,LITREF(lit_494));
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF8372);
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3432F8373,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_3432F8373,LITREF(lit_495));
    T13 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF8371);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3432F8373,T13);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),x_3432F8373,LITREF(lit_496));
    T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3430_);
    a1 = T16;
    x_3430_ = a1;
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
  P x_3435F8383;
  P x_3434F8382;
  P x_3433F8381;
  P x_3431F8380;
  P x_3425F8379;
  P uses_namesF8378;
  P usesF8377;
  P envF8376;
  P info_nameF8375;
  P nameF8374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF8374 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF8374);
  info_nameF8375 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF8376 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF8376);
  usesF8377 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF8377);
  uses_namesF8378 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_470));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_471));
  T10 = FUNSHELL(1,fun_x_3425_223,2);
  x_3425F8379 = T10;
  FUNINIT(x_3425F8379, 2,code_out_,x_3425F8379);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF8378);
  T11 = CALL1(0,x_3425F8379,T12);
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
  T17 = FUNSHELL(1,fun_x_3431_226,2);
  x_3431F8380 = T17;
  FUNINIT(x_3431F8380, 2,code_out_,x_3431F8380);
  T20 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_3431F8380,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_497));
  x_3433F8381 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3433F8381,LITREF(lit_498));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3433F8381,info_nameF8375);
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_3433F8381,LITREF(lit_499));
  x_3434F8382 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3434F8382,LITREF(lit_500));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3434F8382,info_nameF8375);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),x_3434F8382,LITREF(lit_501));
  x_3435F8383 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3435F8383,LITREF(lit_502));
  T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF8374);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3435F8383,T23);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_3435F8383,LITREF(lit_503));
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

FUNCODEDEF(fun_x_3437_230) {
  P x_3436_;
  P x_3438F8385;
  P nF8384;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3436_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3436_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3436_);
    nF8384 = T4;
    x_3438F8385 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3438F8385,LITREF(lit_521));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF8384);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3438F8385,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3438F8385,LITREF(lit_522));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3436_);
    a1 = T8;
    x_3436_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3442_231) {
  P x_3441_;
  P x_3443F8387;
  P nF8386;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_3441_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3441_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3441_);
    nF8386 = T4;
    x_3443F8387 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_3443F8387,LITREF(lit_532));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF8386);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_3443F8387,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3443F8387,LITREF(lit_533));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3441_);
    a1 = T8;
    x_3441_ = a1;
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
  P x_3442F8396;
  P x_3440F8395;
  P x_3439F8394;
  P x_3437F8393;
  P uses_namesF8392;
  P usesF8391;
  P envF8390;
  P init_declF8389;
  P nameF8388;
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
  nameF8388 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF8388);
  init_declF8389 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF8390 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF8390);
  usesF8391 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF8391);
  uses_namesF8392 = T10;
  T11 = CALL1(1,VARREF(Ynot),VARREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_518));
    T13 = FUNSHELL(1,fun_x_3437_230,2);
    x_3437F8393 = T13;
    FUNINIT(x_3437F8393, 2,code_out_,x_3437F8393);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF8392);
    T14 = CALL1(0,x_3437F8393,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_523));
  x_3439F8394 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3439F8394,LITREF(lit_524));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3439F8394,init_declF8389);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_3439F8394,LITREF(lit_525));
  x_3440F8395 = code_out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3440F8395,init_declF8389);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_3440F8395,LITREF(lit_526));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_527));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_528));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_529));
  T18 = CALL1(1,VARREF(Ynot),VARREF(YevalSg2cYTdynamic_linkingQT));
  if (T18 != YPfalse) {
    T19 = FUNSHELL(1,fun_x_3442_231,2);
    x_3442F8396 = T19;
    FUNINIT(x_3442F8396, 2,code_out_,x_3442F8396);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF8392);
    T20 = CALL1(0,x_3442F8396,T21);
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
  P x_3448F8403;
  P x_3447F8402;
  P x_3446F8401;
  P x_3445F8400;
  P x_3444F8399;
  P info_nameF8398;
  P nameF8397;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF8397 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF8397);
  info_nameF8398 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_538));
  x_3444F8399 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3444F8399,LITREF(lit_539));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3444F8399,info_nameF8398);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_3444F8399,LITREF(lit_540));
  x_3445F8400 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3445F8400,LITREF(lit_541));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF8397);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3445F8400,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_3445F8400,LITREF(lit_542));
  x_3446F8401 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3446F8401,LITREF(lit_543));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3446F8401,info_nameF8398);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_3446F8401,LITREF(lit_544));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_545));
  x_3447F8402 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3447F8402,LITREF(lit_546));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_547));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3447F8402,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_3447F8402,LITREF(lit_548));
  x_3448F8403 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_3448F8403,LITREF(lit_549));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF8397);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_3448F8403,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_3448F8403,LITREF(lit_550));
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169;
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
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
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
  lit_74 = YPsb((P)"\t$(CC) -I.. -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -g -O -o $@ $<\n\n");
  lit_75 = YPsb((P)"OBJS = \\\n");
  lit_76 = YPsb((P)"\t");
  lit_77 = YPsb((P)" \\\n");
  lit_78 = YPsb((P)"\t");
  lit_79 = YPsb((P)"\n\n");
  lit_80 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_81 = YPsb((P)"\t$(CC) $(LD_OPTS) -o ");
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
  T169 = VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_112));
  T168 = T169;
  return T168;
}

P YevalSg2cY___main_1___() {
  P x_3271F8409;
  P x_3269F8408;
  P x_3267F8407;
  P x_3265F8406;
  P tableF8405;
  P vecF8404;
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
loop:
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
  T7 = CALLN(1,VARREF(Ytup),18,LITREF(lit_113),LITREF(lit_114),LITREF(lit_115),LITREF(lit_116),LITREF(lit_117),LITREF(lit_118),LITREF(lit_119),LITREF(lit_120),LITREF(lit_121),LITREF(lit_122),LITREF(lit_123),LITREF(lit_124),LITREF(lit_125),LITREF(lit_126),LITREF(lit_127),LITREF(lit_128),LITREF(lit_129),LITREF(lit_130));
  VARSET(YevalSg2cYDmangles_data,T7);
  lit_131 = YPPsym((P)"char-buffer-as-string");
  lit_132 = YPPsym((P)"buffer");
  lit_133 = YPPsym((P)"loop");
  lit_134 = YPPsym((P)"i");
  T9 = YPsig(YPPlist(1,LITREF(lit_134)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_50 = YPmet(FUNCODEREF(fun_loop_50),LITREF(lit_133),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_132)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_131),T8,ENVNUL,PNUL,YPfalse);
  T10 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T10);
  lit_135 = YPsb((P)"\\t");
  lit_136 = YPsb((P)"\\f");
  lit_137 = YPsb((P)"\\r");
  lit_138 = YPsb((P)"\\n");
  lit_139 = YPsb((P)"\\\"");
  lit_140 = YPsb((P)"\\\\");
  T13 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T12 = CALL2(1,VARREF(YgooScolsScolYfill),T13,YPfalse);
  vecF8404 = T12;
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_135),vecF8404,T14);
  T15 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_136),vecF8404,T15);
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_137),vecF8404,T16);
  T17 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_138),vecF8404,T17);
  T18 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_139),vecF8404,T18);
  T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_140),vecF8404,T19);
  T20 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF8404);
  T11 = T20;
  VARSET(YevalSg2cYDc_escapes,T11);
  lit_141 = YPPsym((P)"mangle-string-literal");
  lit_142 = YPPsym((P)"str");
  T22 = YPsig(YPPlist(1,LITREF(lit_134)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_52 = YPmet(FUNCODEREF(fun_loop_52),LITREF(lit_133),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_142)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_53 = YPmet(FUNCODEREF(fun_mangle_string_literal_53),LITREF(lit_141),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_mangle_string_literal_53;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSg2cYmangle_string_literal,T23);
  lit_143 = YPPsym((P)"sym");
  T27 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_54 = YPmet(FUNCODEREF(fun_mangle_string_literal_54),LITREF(lit_141),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_mangle_string_literal_54;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSg2cYmangle_string_literal,T28);
  lit_144 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_144));
  lit_145 = YPPsym((P)"mangle-integer");
  lit_146 = YPPsym((P)"number");
  lit_147 = YPPsym((P)"process-integer");
  lit_148 = YPPsym((P)"index");
  T33 = YPsig(YPPlist(2,LITREF(lit_146),LITREF(lit_148)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_55 = YPmet(FUNCODEREF(fun_process_integer_55),LITREF(lit_147),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_56 = YPmet(FUNCODEREF(fun_mangle_integer_56),LITREF(lit_145),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSg2cYmangle_integer);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSg2cYmangle_integer);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_mangle_integer_56;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSg2cYmangle_integer,T34);
  lit_149 = YPPsym((P)"x-3265");
  lit_150 = YPPsym((P)"x-3264");
  lit_151 = YPPsym((P)"x-3267");
  lit_152 = YPPsym((P)"x-3266");
  lit_153 = YPPsym((P)"x-3269");
  lit_154 = YPPsym((P)"x-3268");
  lit_155 = YPPsym((P)"x-3271");
  lit_156 = YPPsym((P)"x-3270");
  T41 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3265_57 = YPmet(FUNCODEREF(fun_x_3265_57),LITREF(lit_149),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_152)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3267_58 = YPmet(FUNCODEREF(fun_x_3267_58),LITREF(lit_151),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_154)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3269_59 = YPmet(FUNCODEREF(fun_x_3269_59),LITREF(lit_153),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3271_60 = YPmet(FUNCODEREF(fun_x_3271_60),LITREF(lit_155),T38,ENVNUL,PNUL,YPfalse);
  T44 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T43 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T44);
  tableF8405 = T43;
  T45 = FUNSHELL(1,fun_x_3265_57,2);
  x_3265F8406 = T45;
  FUNINIT(x_3265F8406, 2,tableF8405,x_3265F8406);
  T48 = CALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T47 = CALL1(1,VARREF(YgooScolsScolYenum),T48);
  T46 = CALL1(0,x_3265F8406,T47);
  T49 = FUNSHELL(1,fun_x_3267_58,2);
  x_3267F8407 = T49;
  FUNINIT(x_3267F8407, 2,tableF8405,x_3267F8407);
  T51 = CALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  T50 = CALL1(0,x_3267F8407,T51);
  T52 = FUNSHELL(1,fun_x_3269_59,2);
  x_3269F8408 = T52;
  FUNINIT(x_3269F8408, 2,tableF8405,x_3269F8408);
  T56 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T57 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T55 = CALL3(1,VARREF(YgooScolsSrangeYrange),T56,VARREF(YgooSmagYLE),T57);
  T54 = CALL1(1,VARREF(YgooScolsScolYenum),T55);
  T53 = CALL1(0,x_3269F8408,T54);
  T58 = FUNSHELL(1,fun_x_3271_60,2);
  x_3271F8409 = T58;
  FUNINIT(x_3271F8409, 2,tableF8405,x_3271F8409);
  T62 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T63 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T61 = CALL3(1,VARREF(YgooScolsSrangeYrange),T62,VARREF(YgooSmagYLE),T63);
  T60 = CALL1(1,VARREF(YgooScolsScolYenum),T61);
  T59 = CALL1(0,x_3271F8409,T60);
  T42 = tableF8405;
  VARSET(YevalSg2cYDname_mangler_table,T42);
  lit_157 = YPPsym((P)"mangler-reset");
  T64 = YPsig(YPPlist(1,LITREF(lit_132)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_157),T64,ENVNUL,PNUL,YPfalse);
  T65 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T65);
  lit_158 = YPPsym((P)"mangle-name-into");
  lit_159 = YPPsym((P)"buf");
  lit_160 = YPPsym((P)"x-3273");
  lit_161 = YPPsym((P)"x-3272");
  T67 = YPsig(YPPlist(1,LITREF(lit_161)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3273_62 = YPmet(FUNCODEREF(fun_x_3273_62),LITREF(lit_160),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_158),T66,ENVNUL,PNUL,YPfalse);
  T68 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T68);
  lit_162 = YPPsym((P)"mangle-raw-name");
  T69 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_64 = YPmet(FUNCODEREF(fun_mangle_raw_name_64),LITREF(lit_162),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_mangle_raw_name_64;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSg2cYmangle_raw_name,T70);
  T74 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_65 = YPmet(FUNCODEREF(fun_mangle_raw_name_65),LITREF(lit_162),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_mangle_raw_name_65;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSg2cYmangle_raw_name,T75);
  lit_163 = YPPsym((P)"mangle-local-name");
  T79 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_66 = YPmet(FUNCODEREF(fun_mangle_local_name_66),LITREF(lit_163),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_mangle_local_name_66;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSg2cYmangle_local_name,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_67 = YPmet(FUNCODEREF(fun_mangle_local_name_67),LITREF(lit_163),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_mangle_local_name_67;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSg2cYmangle_local_name,T85);
  lit_164 = YPPsym((P)"return");
  lit_165 = YPPsym((P)"x-3277");
  lit_166 = YPPsym((P)"msg");
  lit_167 = YPPsym((P)"args");
  lit_168 = YPPsym((P)"or/set");
  lit_169 = YPsb((P)"Match Pattern Failure");
  lit_170 = YPPsym((P)"or");
  lit_171 = YPPsym((P)"set");
  T91 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3277_68 = YPmet(FUNCODEREF(fun_x_3277_68),LITREF(lit_165),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T92 = fun_70;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"or/set"),T92);
  lit_172 = YPPsym((P)"buf-cat2!");
  T94 = YPsig(YPPlist(1,LITREF(lit_134)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_71 = YPmet(FUNCODEREF(fun_loop_71),LITREF(lit_133),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_172),T93,ENVNUL,PNUL,YPfalse);
  T95 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T95);
  lit_173 = YPPsym((P)"mangle-module-into");
  T96 = YPsig(YPPlist(2,LITREF(lit_159),LITREF(lit_20)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_73 = YPmet(FUNCODEREF(fun_mangle_module_into_73),LITREF(lit_173),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYmangle_module_into);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYmangle_module_into);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_mangle_module_into_73;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYmangle_module_into,T97);
  lit_174 = YPPsym((P)"mangle-global-name");
  T101 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_74 = YPmet(FUNCODEREF(fun_mangle_global_name_74),LITREF(lit_174),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_mangle_global_name_74;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYmangle_global_name,T102);
  T106 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_75 = YPmet(FUNCODEREF(fun_mangle_global_name_75),LITREF(lit_174),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_mangle_global_name_75;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSg2cYmangle_global_name,T107);
  lit_175 = YPPsym((P)"mangle-boot-name");
  T111 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_175),T111,ENVNUL,PNUL,YPfalse);
  T112 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T112);
  lit_176 = YPPsym((P)"mangle-quotation-name");
  lit_177 = YPsb((P)"lit_");
  T113 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_176),T113,ENVNUL,PNUL,YPfalse);
  T114 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T114);
  lit_178 = YPPsym((P)"mangle-binding");
  lit_179 = YPPsym((P)"quotation");
  T115 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_78 = YPmet(FUNCODEREF(fun_mangle_binding_78),LITREF(lit_178),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSg2cYmangle_binding);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_mangle_binding_78;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSg2cYmangle_binding,T116);
  lit_180 = YPPsym((P)"mangle-local-marked-name");
  lit_181 = YPPsym((P)"marker");
  T120 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_181)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_180),T120,ENVNUL,PNUL,YPfalse);
  T121 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T121);
  T122 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_80 = YPmet(FUNCODEREF(fun_mangle_binding_80),LITREF(lit_178),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYmangle_binding);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_mangle_binding_80;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYmangle_binding,T123);
  T127 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_81 = YPmet(FUNCODEREF(fun_mangle_binding_81),LITREF(lit_178),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYmangle_binding);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_mangle_binding_81;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYmangle_binding,T128);
  lit_182 = YPPsym((P)"x-3281");
  lit_183 = YPPsym((P)"for-commas");
  lit_184 = YPPsym((P)"let");
  lit_185 = YPPsym((P)"for");
  lit_186 = YPPsym((P)"first?");
  lit_187 = YPPsym((P)"first-then");
  lit_188 = YPPsym((P)"op");
  lit_189 = YPPsym((P)"unless");
  lit_190 = YPPsym((P)"put");
  T134 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3281_82 = YPmet(FUNCODEREF(fun_x_3281_82),LITREF(lit_182),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_84;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T135);
  lit_191 = YPPsym((P)"x-3285");
  lit_192 = YPPsym((P)"between-parentheses");
  T138 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3285_85 = YPmet(FUNCODEREF(fun_x_3285_85),LITREF(lit_191),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T139 = fun_87;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T139);
  lit_193 = YPPsym((P)"x-3289");
  lit_194 = YPPsym((P)"between-parentheses-comma-separated");
  lit_195 = YPPsym((P)"forms");
  lit_196 = YPPsym((P)"body");
  T143 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3289_88 = YPmet(FUNCODEREF(fun_x_3289_88),LITREF(lit_193),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(3,LITREF(lit_195),LITREF(lit_196),LITREF(lit_186)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_133),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T144 = fun_91;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T144);
  lit_197 = YPPsym((P)"gen-result");
  lit_198 = YPPsym((P)"d");
  lit_199 = YPsb((P)"T");
  lit_200 = YPsb((P)" = ");
  T145 = YPsig(YPPlist(3,LITREF(lit_52),LITREF(lit_198),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_92 = YPmet(FUNCODEREF(fun_gen_result_92),LITREF(lit_197),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSg2cYgen_result);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSg2cYgen_result);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_gen_result_92;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSg2cYgen_result,T146);
  lit_201 = YPPsym((P)"gen-depth");
  lit_202 = YPPsym((P)"x-3292");
  lit_203 = YPPsym((P)"x-3291");
  lit_204 = YPsb((P)"  ");
  T151 = YPsig(YPPlist(1,LITREF(lit_203)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3292_93 = YPmet(FUNCODEREF(fun_x_3292_93),LITREF(lit_202),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_198),LITREF(lit_61)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_94 = YPmet(FUNCODEREF(fun_gen_depth_94),LITREF(lit_201),T150,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgen_depth);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgen_depth);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_gen_depth_94;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgen_depth,T152);
  lit_205 = YPPsym((P)"x-3296");
  lit_206 = YPPsym((P)"with-statement");
  lit_207 = YPPsym((P)"seq");
  lit_208 = YPPsym((P)"puts");
  lit_209 = YPsb((P)";\n");
  T158 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3296_95 = YPmet(FUNCODEREF(fun_x_3296_95),LITREF(lit_205),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T159 = fun_97;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T159);
  lit_210 = YPPsym((P)"x-3300");
  lit_211 = YPPsym((P)"with-expression");
  T162 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3300_98 = YPmet(FUNCODEREF(fun_x_3300_98),LITREF(lit_210),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T163 = fun_100;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T163);
  lit_212 = YPPsym((P)"x-3304");
  lit_213 = YPPsym((P)"with-used-expression");
  lit_214 = YPPsym((P)"when");
  lit_215 = YPPsym((P)"program-register");
  T166 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_167)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3304_101 = YPmet(FUNCODEREF(fun_x_3304_101),LITREF(lit_212),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_103;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T167);
  lit_216 = YPPsym((P)"generate-quotation-forwards");
  lit_217 = YPPsym((P)"qb*");
  lit_218 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_219 = YPPsym((P)"x-3306");
  lit_220 = YPPsym((P)"x-3305");
  lit_221 = YPsb((P)"DEFLIT(lit_");
  lit_222 = YPsb((P)");\n");
  T169 = YPsig(YPPlist(1,LITREF(lit_220)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3306_104 = YPmet(FUNCODEREF(fun_x_3306_104),LITREF(lit_219),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_217)),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_105 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_105),LITREF(lit_216),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSg2cYgenerate_quotation_forwards);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSg2cYgenerate_quotation_forwards);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_generate_quotation_forwards_105;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T170);
  lit_223 = YPPsym((P)"generate-quotations");
  lit_224 = YPPsym((P)"x-3309");
  lit_225 = YPPsym((P)"x-3308");
  lit_226 = YPsb((P)"lit_");
  lit_227 = YPsb((P)" = ");
  T175 = YPsig(YPPlist(1,LITREF(lit_225)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3309_106 = YPmet(FUNCODEREF(fun_x_3309_106),LITREF(lit_224),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_217)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_107 = YPmet(FUNCODEREF(fun_generate_quotations_107),LITREF(lit_223),T174,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSg2cYgenerate_quotations);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSg2cYgenerate_quotations);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_generate_quotations_107;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSg2cYgenerate_quotations,T176);
  lit_228 = YPPsym((P)"false-name");
  lit_229 = YPsb((P)"%false");
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_108 = YPmet(FUNCODEREF(fun_false_name_108),LITREF(lit_228),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSg2cYfalse_name);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSg2cYfalse_name);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_false_name_108;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSg2cYfalse_name,T181);
  lit_230 = YPPsym((P)"generate-quotation");
  lit_231 = YPPsym((P)"qb");
  lit_232 = YPsb((P)"%true");
  lit_233 = YPsb((P)"%false");
  T185 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_231)),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_109 = YPmet(FUNCODEREF(fun_generate_quotation_109),LITREF(lit_230),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_generate_quotation_109;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSg2cYgenerate_quotation,T186);
  lit_234 = YPsb((P)"nil");
  T191 = CALL1(1,VARREF(YgooStypesYtE),Ynil);
  T190 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_231)),YPPlist(2,VARREF(YLanyG),T191),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_110 = YPmet(FUNCODEREF(fun_generate_quotation_110),LITREF(lit_230),T190,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_generate_quotation_110;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSg2cYgenerate_quotation,T192);
  T197 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_231)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPmet(FUNCODEREF(fun_generate_quotation_112),LITREF(lit_230),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_generate_quotation_112;
  T198 = CALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSg2cYgenerate_quotation,T198);
  lit_235 = YPsb((P)"%int");
  lit_236 = YPsb((P)"((P)");
  lit_237 = YPsb((P)")");
  T202 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPmet(FUNCODEREF(fun_generate_quotation_113),LITREF(lit_230),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_generate_quotation_113;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSg2cYgenerate_quotation,T203);
  lit_238 = YPsb((P)"%chr");
  lit_239 = YPsb((P)"((P)");
  lit_240 = YPsb((P)")");
  T207 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_230),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_generate_quotation_114;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSg2cYgenerate_quotation,T208);
  lit_241 = YPPsym((P)"float-to-c-string");
  lit_242 = YPPsym((P)"o");
  lit_243 = YPPsym((P)"done");
  T214 = YPsig(YPPlist(1,LITREF(lit_134)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_115 = YPmet(FUNCODEREF(fun_loop_115),LITREF(lit_133),T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(1,LITREF(lit_243)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPmet(FUNCODEREF(fun_116),YPfalse,T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(YPPlist(1,LITREF(lit_242)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_117 = YPmet(FUNCODEREF(fun_float_to_c_string_117),LITREF(lit_241),T212,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YevalSg2cYfloat_to_c_string);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSg2cYfloat_to_c_string);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_float_to_c_string_117;
  T215 = CALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSg2cYfloat_to_c_string,T215);
  lit_244 = YPsb((P)"%flo");
  lit_245 = YPsb((P)"(FLOINT(");
  lit_246 = YPsb((P)"))");
  T219 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_118 = YPmet(FUNCODEREF(fun_generate_quotation_118),LITREF(lit_230),T219,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_generate_quotation_118;
  T220 = CALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSg2cYgenerate_quotation,T220);
  lit_247 = YPsb((P)"%sb");
  lit_248 = YPsb((P)"((P)\"");
  lit_249 = YPsb((P)"\")");
  T224 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_119 = YPmet(FUNCODEREF(fun_generate_quotation_119),LITREF(lit_230),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T227 != YPfalse) {
    T226 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_generate_quotation_119;
  T225 = CALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YevalSg2cYgenerate_quotation,T225);
  lit_250 = YPsb((P)"CALLN(1, ");
  lit_251 = YPsb((P)"vec");
  lit_252 = YPsb((P)", ");
  lit_253 = YPPsym((P)"x-3319");
  lit_254 = YPPsym((P)"x-3318");
  lit_255 = YPsb((P)", ");
  lit_256 = YPsb((P)")");
  T230 = YPsig(YPPlist(1,LITREF(lit_254)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3319_120 = YPmet(FUNCODEREF(fun_x_3319_120),LITREF(lit_253),T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_121 = YPmet(FUNCODEREF(fun_generate_quotation_121),LITREF(lit_230),T229,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_generate_quotation_121;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSg2cYgenerate_quotation,T231);
  lit_257 = YPsb((P)"CALLN(1, ");
  lit_258 = YPsb((P)"tup");
  lit_259 = YPsb((P)", ");
  lit_260 = YPPsym((P)"x-3322");
  lit_261 = YPPsym((P)"x-3321");
  lit_262 = YPsb((P)", ");
  lit_263 = YPsb((P)")");
  T236 = YPsig(YPPlist(1,LITREF(lit_261)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3322_122 = YPmet(FUNCODEREF(fun_x_3322_122),LITREF(lit_260),T236,ENVNUL,PNUL,YPfalse);
  T235 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_123 = YPmet(FUNCODEREF(fun_generate_quotation_123),LITREF(lit_230),T235,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_generate_quotation_123;
  T237 = CALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSg2cYgenerate_quotation,T237);
  lit_264 = YPsb((P)"%%sym");
  lit_265 = YPsb((P)"((P)\"");
  lit_266 = YPsb((P)"\")");
  T241 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_124 = YPmet(FUNCODEREF(fun_generate_quotation_124),LITREF(lit_230),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T244 != YPfalse) {
    T243 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_generate_quotation_124;
  T242 = CALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YevalSg2cYgenerate_quotation,T242);
  lit_267 = YPPsym((P)"binding->c");
  T246 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_267),T246,ENVNUL,PNUL,YPfalse);
  T247 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T247);
  lit_268 = YPPsym((P)"reference->c");
  lit_269 = YPPsym((P)"v");
  T249 = YPsig(YPPlist(2,LITREF(lit_269),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T248 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_268),T249,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T248);
  T250 = YPsig(YPPlist(2,LITREF(lit_269),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_126 = YPmet(FUNCODEREF(fun_reference_Gc_126),LITREF(lit_268),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YevalSg2cYreference_Gc);
  if (T253 != YPfalse) {
    T252 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_reference_Gc_126;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YevalSg2cYreference_Gc,T251);
  lit_270 = YPsb((P)"LITREF");
  lit_271 = YPsb((P)"VARREF");
  T255 = YPsig(YPPlist(2,LITREF(lit_269),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_127 = YPmet(FUNCODEREF(fun_reference_Gc_127),LITREF(lit_268),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YevalSg2cYreference_Gc);
  if (T258 != YPfalse) {
    T257 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_reference_Gc_127;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YevalSg2cYreference_Gc,T256);
  lit_272 = YPPsym((P)"to-c");
  lit_273 = YPPsym((P)"f");
  T261 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T260 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_272),T261,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T260);
  T262 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_128 = YPmet(FUNCODEREF(fun_to_c_128),LITREF(lit_272),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YevalSg2cYto_c);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSg2cYto_c);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_to_c_128;
  T263 = CALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSg2cYto_c,T263);
  T267 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_129 = YPmet(FUNCODEREF(fun_to_c_129),LITREF(lit_272),T267,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YevalSg2cYto_c);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSg2cYto_c);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_to_c_129;
  T268 = CALL2(1,VARREF(YPdefine_method),T269,T271);
  VARSET(YevalSg2cYto_c,T268);
  lit_274 = YPPsym((P)"gen-ref");
  T274 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T273 = fun_gen_ref_130 = YPmet(FUNCODEREF(fun_gen_ref_130),LITREF(lit_274),T274,ENVNUL,PNUL,YPfalse);
  T278 = BOUNDP(YevalSg2cYgen_ref);
  if (T278 != YPfalse) {
    T277 = VARREF(YevalSg2cYgen_ref);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_gen_ref_130;
  T276 = CALL2(1,VARREF(YPdefine_method),T277,T279);
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
loop:
  lit_275 = YPsb((P)"FREEREF");
  T0 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_131 = YPmet(FUNCODEREF(fun_gen_ref_131),LITREF(lit_274),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_131;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_276 = YPsb((P)"T");
  lit_277 = YPsb((P)"T_1");
  T5 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_132 = YPmet(FUNCODEREF(fun_gen_ref_132),LITREF(lit_274),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_132;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSg2cYgen_ref,T6);
  lit_278 = YPsb((P)"(P)");
  T10 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_133 = YPmet(FUNCODEREF(fun_gen_ref_133),LITREF(lit_274),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSg2cYgen_ref);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSg2cYgen_ref);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_gen_ref_133;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSg2cYgen_ref,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_134 = YPmet(FUNCODEREF(fun_gen_ref_134),LITREF(lit_274),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSg2cYgen_ref);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSg2cYgen_ref);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_gen_ref_134;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSg2cYgen_ref,T16);
  T20 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_135 = YPmet(FUNCODEREF(fun_gen_ref_135),LITREF(lit_274),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSg2cYgen_ref);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYgen_ref);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_gen_ref_135;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYgen_ref,T21);
  lit_279 = YPsb((P)"VARSET(");
  lit_280 = YPsb((P)",");
  lit_281 = YPsb((P)")");
  T25 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPmet(FUNCODEREF(fun_to_c_136),LITREF(lit_272),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSg2cYto_c);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYto_c);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_to_c_136;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYto_c,T26);
  lit_282 = YPsb((P)"BOUNDP");
  T30 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_137 = YPmet(FUNCODEREF(fun_to_c_137),LITREF(lit_272),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_137;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSg2cYto_c,T31);
  lit_283 = YPsb((P)"BOXVAL");
  T35 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_138 = YPmet(FUNCODEREF(fun_to_c_138),LITREF(lit_272),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_138;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSg2cYto_c,T36);
  lit_284 = YPsb((P)"BOXVAL");
  lit_285 = YPsb((P)" = ");
  T40 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPmet(FUNCODEREF(fun_to_c_139),LITREF(lit_272),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSg2cYto_c);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSg2cYto_c);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_to_c_139;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSg2cYto_c,T41);
  lit_286 = YPsb((P)" = BOXFAB");
  T45 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_272),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSg2cYto_c);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSg2cYto_c);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_to_c_140;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSg2cYto_c,T46);
  lit_287 = YPsb((P)"if (");
  lit_288 = YPsb((P)" != ");
  lit_289 = YPsb((P)") {\n");
  lit_290 = YPsb((P)"} else {\n");
  lit_291 = YPsb((P)"}\n");
  T50 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_141 = YPmet(FUNCODEREF(fun_to_c_141),LITREF(lit_272),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSg2cYto_c);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSg2cYto_c);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_to_c_141;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSg2cYto_c,T51);
  T56 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_143 = YPmet(FUNCODEREF(fun_to_c_143),LITREF(lit_272),T55,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSg2cYto_c);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSg2cYto_c);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_to_c_143;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSg2cYto_c,T57);
  lit_292 = YPPsym((P)"generate-self-recursive-call");
  lit_293 = YPPsym((P)"x-3335");
  lit_294 = YPPsym((P)"x-3334");
  lit_295 = YPPsym((P)"x-3338");
  lit_296 = YPPsym((P)"x-3337");
  lit_297 = YPPsym((P)"x-3336");
  lit_298 = YPsb((P)"a");
  lit_299 = YPsb((P)" = ");
  lit_300 = YPPsym((P)"x-3342");
  lit_301 = YPPsym((P)"x-3341");
  lit_302 = YPPsym((P)"x-3340");
  lit_303 = YPsb((P)" = a");
  lit_304 = YPsb((P)"goto loop");
  T64 = YPsig(YPPlist(1,LITREF(lit_294)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3335_144 = YPmet(FUNCODEREF(fun_x_3335_144),LITREF(lit_293),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(2,LITREF(lit_296),LITREF(lit_297)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3338_145 = YPmet(FUNCODEREF(fun_x_3338_145),LITREF(lit_295),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(2,LITREF(lit_301),LITREF(lit_302)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3342_146 = YPmet(FUNCODEREF(fun_x_3342_146),LITREF(lit_300),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_147 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_147),LITREF(lit_292),T61,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YevalSg2cYgenerate_self_recursive_call);
  if (T67 != YPfalse) {
    T66 = VARREF(YevalSg2cYgenerate_self_recursive_call);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_generate_self_recursive_call_147;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YevalSg2cYgenerate_self_recursive_call,T65);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_305 = YPPsym((P)"x-3345");
  lit_306 = YPPsym((P)"x-3344");
  lit_307 = YPsb((P)"CALL");
  lit_308 = YPsb((P)"N");
  lit_309 = YPsb((P)"0,");
  lit_310 = YPsb((P)"1,");
  lit_311 = YPsb((P)",");
  lit_312 = YPPsym((P)"x-3350");
  lit_313 = YPPsym((P)"x-3349");
  T71 = YPsig(YPPlist(1,LITREF(lit_306)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3345_148 = YPmet(FUNCODEREF(fun_x_3345_148),LITREF(lit_305),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(1,LITREF(lit_313)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3350_149 = YPmet(FUNCODEREF(fun_x_3350_149),LITREF(lit_312),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_272),T69,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSg2cYto_c);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSg2cYto_c);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_to_c_150;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSg2cYto_c,T72);
  lit_314 = YPPsym((P)"x-3354");
  lit_315 = YPPsym((P)"x-3353");
  lit_316 = YPPsym((P)"x-3352");
  T79 = YPsig(YPPlist(2,LITREF(lit_315),LITREF(lit_316)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3354_151 = YPmet(FUNCODEREF(fun_x_3354_151),LITREF(lit_314),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_152 = YPmet(FUNCODEREF(fun_152),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_272),T76,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSg2cYto_c);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSg2cYto_c);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_to_c_154;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSg2cYto_c,T80);
  lit_317 = YPPsym((P)"x-3358");
  lit_318 = YPPsym((P)"x-3357");
  lit_319 = YPPsym((P)"x-3356");
  lit_320 = YPPsym((P)"x-3355");
  lit_321 = YPsb((P)"check_type");
  lit_322 = YPsb((P)" = ");
  T85 = YPsig(YPPlist(3,LITREF(lit_318),LITREF(lit_319),LITREF(lit_320)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_3358_155 = YPmet(FUNCODEREF(fun_x_3358_155),LITREF(lit_317),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_156 = YPmet(FUNCODEREF(fun_to_c_156),LITREF(lit_272),T84,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSg2cYto_c);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSg2cYto_c);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_to_c_156;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSg2cYto_c,T86);
  lit_323 = YPPsym((P)"x-3362");
  lit_324 = YPPsym((P)"x-3361");
  lit_325 = YPPsym((P)"x-3360");
  lit_326 = YPsb((P)" = ");
  T91 = YPsig(YPPlist(2,LITREF(lit_324),LITREF(lit_325)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3362_157 = YPmet(FUNCODEREF(fun_x_3362_157),LITREF(lit_323),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_272),T90,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSg2cYto_c);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSg2cYto_c);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_to_c_158;
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSg2cYto_c,T92);
  lit_327 = YPsb((P)"with_exit");
  T96 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_159 = YPmet(FUNCODEREF(fun_to_c_159),LITREF(lit_272),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_159;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYto_c,T97);
  lit_328 = YPsb((P)"with_cleanup");
  T101 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_160 = YPmet(FUNCODEREF(fun_to_c_160),LITREF(lit_272),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYto_c);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYto_c);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_to_c_160;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYto_c,T102);
  lit_329 = YPsb((P)"CALLN");
  lit_330 = YPsb((P)"1");
  lit_331 = YPsb((P)"%with-monitor");
  lit_332 = YPsb((P)"5");
  T106 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_161 = YPmet(FUNCODEREF(fun_to_c_161),LITREF(lit_272),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSg2cYto_c);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSg2cYto_c);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_to_c_161;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSg2cYto_c,T107);
  lit_333 = YPPsym((P)"x-3367");
  lit_334 = YPPsym((P)"x-3366");
  lit_335 = YPsb((P)"(P)");
  lit_336 = YPPsym((P)"x-3373");
  lit_337 = YPPsym((P)"x-3372");
  lit_338 = YPPsym((P)"x-3371");
  T115 = YPsig(YPPlist(1,LITREF(lit_334)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3367_162 = YPmet(FUNCODEREF(fun_x_3367_162),LITREF(lit_333),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,LITREF(lit_337),LITREF(lit_338)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3373_163 = YPmet(FUNCODEREF(fun_x_3373_163),LITREF(lit_336),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_166 = YPmet(FUNCODEREF(fun_to_c_166),LITREF(lit_272),T111,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSg2cYto_c);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSg2cYto_c);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_to_c_166;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSg2cYto_c,T116);
  lit_339 = YPsb((P)"FUNFAB");
  lit_340 = YPsb((P)",");
  lit_341 = YPPsym((P)"x-3377");
  lit_342 = YPPsym((P)"x-3376");
  T122 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(1,LITREF(lit_342)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3377_168 = YPmet(FUNCODEREF(fun_x_3377_168),LITREF(lit_341),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPmet(FUNCODEREF(fun_to_c_169),LITREF(lit_272),T120,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYto_c);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYto_c);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_to_c_169;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYto_c,T123);
  lit_343 = YPPsym((P)"funshell-to-c");
  lit_344 = YPPsym((P)"b");
  lit_345 = YPsb((P)"FUNSHELL");
  T127 = YPsig(YPPlist(5,LITREF(lit_344),LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_170 = YPmet(FUNCODEREF(fun_funshell_to_c_170),LITREF(lit_343),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYfunshell_to_c);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYfunshell_to_c);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_funshell_to_c_170;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYfunshell_to_c,T128);
  lit_346 = YPPsym((P)"funinit-to-c");
  lit_347 = YPsb((P)"FUNINIT");
  lit_348 = YPsb((P)", ");
  lit_349 = YPPsym((P)"x-3384");
  lit_350 = YPPsym((P)"x-3383");
  T134 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_350)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3384_172 = YPmet(FUNCODEREF(fun_x_3384_172),LITREF(lit_349),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(5,LITREF(lit_344),LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_173 = YPmet(FUNCODEREF(fun_funinit_to_c_173),LITREF(lit_346),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSg2cYfuninit_to_c);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSg2cYfuninit_to_c);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_funinit_to_c_173;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSg2cYfuninit_to_c,T135);
  lit_351 = YPsb((P)"%macro");
  T139 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_174 = YPmet(FUNCODEREF(fun_to_c_174),LITREF(lit_272),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSg2cYto_c);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSg2cYto_c);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_to_c_174;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSg2cYto_c,T140);
  lit_352 = YPPsym((P)"out-list-builder");
  lit_353 = YPPsym((P)"elts");
  lit_354 = YPsb((P)"nil");
  lit_355 = YPsb((P)"%%list");
  lit_356 = YPPsym((P)"x-3389");
  lit_357 = YPPsym((P)"x-3388");
  T145 = YPsig(YPPlist(1,LITREF(lit_357)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3389_175 = YPmet(FUNCODEREF(fun_x_3389_175),LITREF(lit_356),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(3,LITREF(lit_273),LITREF(lit_61),LITREF(lit_353)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_176 = YPmet(FUNCODEREF(fun_out_list_builder_176),LITREF(lit_352),T144,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSg2cYout_list_builder);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSg2cYout_list_builder);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_out_list_builder_176;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSg2cYout_list_builder,T146);
  lit_358 = YPPsym((P)"gen-fab-list");
  lit_359 = YPPsym((P)"refs");
  T151 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_359)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_178 = YPmet(FUNCODEREF(fun_gen_fab_list_178),LITREF(lit_358),T150,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgen_fab_list);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgen_fab_list);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_gen_fab_list_178;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgen_fab_list,T152);
  lit_360 = YPPsym((P)"generate-function-specs");
  lit_361 = YPPsym((P)"sig");
  T156 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_361)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_179 = YPmet(FUNCODEREF(fun_generate_function_specs_179),LITREF(lit_360),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSg2cYgenerate_function_specs);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSg2cYgenerate_function_specs);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_generate_function_specs_179;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSg2cYgenerate_function_specs,T157);
  lit_362 = YPsb((P)"%sig");
  lit_363 = YPsb((P)"nil");
  T162 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_181 = YPmet(FUNCODEREF(fun_to_c_181),LITREF(lit_272),T161,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSg2cYto_c);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSg2cYto_c);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_to_c_181;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSg2cYto_c,T163);
  lit_364 = YPsb((P)"%gen");
  lit_365 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_366 = YPsb((P)"nil");
  lit_367 = YPsb((P)"%false");
  lit_368 = YPsb((P)"%false");
  lit_369 = YPsb((P)"%false");
  T167 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_182 = YPmet(FUNCODEREF(fun_to_c_182),LITREF(lit_272),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSg2cYto_c);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYto_c);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_to_c_182;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYto_c,T168);
  lit_370 = YPPsym((P)"generate-function-forwards");
  lit_371 = YPPsym((P)"definitions");
  lit_372 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_373 = YPPsym((P)"x-3393");
  lit_374 = YPPsym((P)"x-3392");
  T173 = YPsig(YPPlist(1,LITREF(lit_374)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3393_183 = YPmet(FUNCODEREF(fun_x_3393_183),LITREF(lit_373),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_371)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_184 = YPmet(FUNCODEREF(fun_generate_function_forwards_184),LITREF(lit_370),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSg2cYgenerate_function_forwards);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSg2cYgenerate_function_forwards);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_generate_function_forwards_184;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSg2cYgenerate_function_forwards,T174);
  lit_375 = YPPsym((P)"generate-function-forward");
  lit_376 = YPPsym((P)"defn");
  lit_377 = YPsb((P)"static");
  lit_378 = YPsb((P)"extern");
  lit_379 = YPsb((P)" P ");
  lit_380 = YPsb((P)" (");
  lit_381 = YPPsym((P)"x-3398");
  lit_382 = YPPsym((P)"x-3397");
  lit_383 = YPPsym((P)"x-3396");
  lit_384 = YPsb((P)"P");
  lit_385 = YPsb((P)");\n");
  T181 = YPsig(YPPlist(2,LITREF(lit_382),LITREF(lit_383)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3398_185 = YPmet(FUNCODEREF(fun_x_3398_185),LITREF(lit_381),T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_376)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_188 = YPmet(FUNCODEREF(fun_generate_function_forward_188),LITREF(lit_375),T178,ENVNUL,PNUL,YPfalse);
  T184 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T184 != YPfalse) {
    T183 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_generate_function_forward_188;
  T182 = CALL2(1,VARREF(YPdefine_method),T183,T185);
  VARSET(YevalSg2cYgenerate_function_forward,T182);
  lit_386 = YPPsym((P)"generate-function-binding");
  lit_387 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_388 = YPsb((P)"fun_");
  lit_389 = YPsb((P)"fun_");
  lit_390 = YPsb((P)"_");
  T186 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_376)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_189 = YPmet(FUNCODEREF(fun_generate_function_binding_189),LITREF(lit_386),T186,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSg2cYgenerate_function_binding);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSg2cYgenerate_function_binding);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_generate_function_binding_189;
  T187 = CALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSg2cYgenerate_function_binding,T187);
  lit_391 = YPsb((P)"FUNFOR(");
  lit_392 = YPsb((P)"LOCFOR(");
  lit_393 = YPsb((P)");\n");
  T191 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_376)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_190 = YPmet(FUNCODEREF(fun_generate_function_forward_190),LITREF(lit_375),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_generate_function_forward_190;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSg2cYgenerate_function_forward,T192);
  lit_394 = YPPsym((P)"generate-function-bodies");
  lit_395 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_396 = YPPsym((P)"def");
  T197 = YPsig(YPPlist(1,LITREF(lit_396)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_371)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_192 = YPmet(FUNCODEREF(fun_generate_function_bodies_192),LITREF(lit_394),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSg2cYgenerate_function_bodies);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSg2cYgenerate_function_bodies);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_generate_function_bodies_192;
  T198 = CALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSg2cYgenerate_function_bodies,T198);
  lit_397 = YPPsym((P)"generate-functions");
  T203 = YPsig(YPPlist(1,LITREF(lit_396)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T203,ENVNUL,PNUL,YPfalse);
  T202 = YPsig(YPPlist(4,LITREF(lit_371),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_194 = YPmet(FUNCODEREF(fun_generate_functions_194),LITREF(lit_397),T202,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSg2cYgenerate_functions);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSg2cYgenerate_functions);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_generate_functions_194;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSg2cYgenerate_functions,T204);
  lit_398 = YPPsym((P)"generate-closure-structure");
  lit_399 = YPPsym((P)"definition");
  lit_400 = YPsb((P)" = ");
  lit_401 = YPsb((P)"%met");
  lit_402 = YPsb((P)"ENVNUL");
  lit_403 = YPsb((P)"PNUL");
  T208 = YPsig(YPPlist(4,LITREF(lit_399),LITREF(lit_273),LITREF(lit_198),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_195 = YPmet(FUNCODEREF(fun_generate_closure_structure_195),LITREF(lit_398),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSg2cYgenerate_closure_structure);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSg2cYgenerate_closure_structure);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_generate_closure_structure_195;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSg2cYgenerate_closure_structure,T209);
  lit_404 = YPPsym((P)"generate-function-body-reference");
  lit_405 = YPsb((P)"FUNCODEREF(");
  lit_406 = YPsb((P)")");
  T213 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_399)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_196 = YPmet(FUNCODEREF(fun_generate_function_body_reference_196),LITREF(lit_404),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSg2cYgenerate_function_body_reference);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSg2cYgenerate_function_body_reference);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_generate_function_body_reference_196;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSg2cYgenerate_function_body_reference,T214);
  lit_407 = YPPsym((P)"generate-shadow-args");
  lit_408 = YPPsym((P)"bindings");
  lit_409 = YPsb((P)"P ");
  lit_410 = YPPsym((P)"x-3407");
  lit_411 = YPPsym((P)"x-3406");
  lit_412 = YPPsym((P)"x-3405");
  lit_413 = YPPsym((P)"x-3404");
  lit_414 = YPsb((P)"a");
  T221 = YPsig(YPPlist(3,LITREF(lit_411),LITREF(lit_412),LITREF(lit_413)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_3407_197 = YPmet(FUNCODEREF(fun_x_3407_197),LITREF(lit_410),T221,ENVNUL,PNUL,YPfalse);
  T220 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T220,ENVNUL,PNUL,YPfalse);
  T219 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T219,ENVNUL,PNUL,YPfalse);
  T218 = YPsig(YPPlist(2,LITREF(lit_408),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_200 = YPmet(FUNCODEREF(fun_generate_shadow_args_200),LITREF(lit_407),T218,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YevalSg2cYgenerate_shadow_args);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSg2cYgenerate_shadow_args);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_generate_shadow_args_200;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSg2cYgenerate_shadow_args,T222);
  lit_415 = YPPsym((P)"generate-return");
  lit_416 = YPsb((P)"return ");
  T226 = YPsig(YPPlist(3,LITREF(lit_376),LITREF(lit_198),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_201 = YPmet(FUNCODEREF(fun_generate_return_201),LITREF(lit_415),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YevalSg2cYgenerate_return);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_generate_return_201;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSg2cYgenerate_return,T227);
  lit_417 = YPsb((P)"RET");
  T231 = YPsig(YPPlist(3,LITREF(lit_376),LITREF(lit_198),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_202 = YPmet(FUNCODEREF(fun_generate_return_202),LITREF(lit_415),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YevalSg2cYgenerate_return);
  if (T234 != YPfalse) {
    T233 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_generate_return_202;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YevalSg2cYgenerate_return,T232);
  lit_418 = YPPsym((P)"primitive-inlinable?");
  lit_419 = YPPlist(46,YPPsym((P)"%tag-bits"),YPPsym((P)"%tag"),YPPsym((P)"%untag"),YPPsym((P)"%class-of"),YPPsym((P)"%int"),YPPsym((P)"%ib"),YPPsym((P)"%iu"),YPPsym((P)"%chr"),YPPsym((P)"%cb"),YPPsym((P)"%cu"),YPPsym((P)"%loc"),YPPsym((P)"%lb"),YPPsym((P)"%lu"),YPPsym((P)"%empty?"),YPPsym((P)"%head"),YPPsym((P)"%tail"),YPPsym((P)"@empty?"),YPPsym((P)"@head"),YPPsym((P)"@tail"),YPPsym((P)"@=="),YPPsym((P)"@="),YPPsym((P)"@+"),YPPsym((P)"@<"),YPPsym((P)"%new"),YPPsym((P)"%gen-cache-arg-pos"),YPPsym((P)"%gen-cache-singletons"),YPPsym((P)"%gen-cache-classes"),YPPsym((P)"%gen-cache-missable?"),YPPsym((P)"%class-type-cache"),YPPsym((P)"%class-type-cache-setter"),YPPsym((P)"@telt"),YPPsym((P)"@telt-setter"),YPPsym((P)"@tlen"),YPPsym((P)"%to-tup"),YPPsym((P)"@oelt"),YPPsym((P)"@oelt-setter"),YPPsym((P)"@olen"),YPPsym((P)"%opts-location"),YPPsym((P)"%opts-count"),YPPsym((P)"%class-ancestors"),YPPsym((P)"@class-in?"),YPPsym((P)"@subclass?"),YPPsym((P)"prop-value-at"),YPPsym((P)"prop-value-at-setter"),YPPsym((P)"gen-lookup"),YPPsym((P)"gen-lookup-1-using"));
  T236 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_203 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_203),LITREF(lit_418),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSg2cYprimitive_inlinableQ);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSg2cYprimitive_inlinableQ);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_primitive_inlinableQ_203;
  T237 = CALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSg2cYprimitive_inlinableQ,T237);
  lit_420 = YPPsym((P)"generate-function-code");
  lit_421 = YPsb((P)"\n");
  lit_422 = YPsb((P)"static ");
  lit_423 = YPsb((P)"");
  lit_424 = YPsb((P)"INLINE ");
  lit_425 = YPsb((P)"P ");
  lit_426 = YPPsym((P)"x-3415");
  lit_427 = YPPsym((P)"x-3414");
  lit_428 = YPPsym((P)"x-3413");
  lit_429 = YPsb((P)"P ");
  lit_430 = YPsb((P)" {\n");
  lit_431 = YPsb((P)"loop:\n");
  lit_432 = YPsb((P)"}\n");
  T244 = YPsig(YPPlist(2,LITREF(lit_427),LITREF(lit_428)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3415_204 = YPmet(FUNCODEREF(fun_x_3415_204),LITREF(lit_426),T244,ENVNUL,PNUL,YPfalse);
  T243 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T242,ENVNUL,PNUL,YPfalse);
  T241 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_207 = YPmet(FUNCODEREF(fun_generate_function_code_207),LITREF(lit_420),T241,ENVNUL,PNUL,YPfalse);
  T247 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T247 != YPfalse) {
    T246 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_generate_function_code_207;
  T245 = CALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(YevalSg2cYgenerate_function_code,T245);
  lit_433 = YPPsym((P)"dispatcher?");
  lit_434 = YPsb((P)"%dispatch");
  lit_435 = YPsb((P)"-dispatch");
  lit_436 = YPsb((P)"-dispatch");
  T249 = YPsig(YPPlist(1,LITREF(lit_399)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_208 = YPmet(FUNCODEREF(fun_dispatcherQ_208),LITREF(lit_433),T249,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YevalSg2cYdispatcherQ);
  if (T252 != YPfalse) {
    T251 = VARREF(YevalSg2cYdispatcherQ);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_dispatcherQ_208;
  T250 = CALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YevalSg2cYdispatcherQ,T250);
  lit_437 = YPsb((P)"\nFUNCODEDEF(");
  lit_438 = YPsb((P)") {\n");
  lit_439 = YPsb((P)"P ");
  lit_440 = YPPsym((P)"x-3419");
  lit_441 = YPPsym((P)"x-3418");
  lit_442 = YPPsym((P)"x-3417");
  lit_443 = YPsb((P)"LINK_STACK();\n");
  lit_444 = YPsb((P)"NARGS(");
  lit_445 = YPsb((P)"ARG(");
  lit_446 = YPsb((P)", ");
  lit_447 = YPsb((P)")");
  lit_448 = YPsb((P)"loop:\n");
  lit_449 = YPsb((P)"UNLINK_STACK();\n");
  lit_450 = YPsb((P)"}\n");
  T258 = YPsig(YPPlist(2,LITREF(lit_441),LITREF(lit_442)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3419_209 = YPmet(FUNCODEREF(fun_x_3419_209),LITREF(lit_440),T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(1,LITREF(lit_344)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_399)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_213 = YPmet(FUNCODEREF(fun_generate_function_code_213),LITREF(lit_420),T254,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T261 != YPfalse) {
    T260 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_generate_function_code_213;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YevalSg2cYgenerate_function_code,T259);
  lit_451 = YPPsym((P)"generate-local-temporaries");
  lit_452 = YPPsym((P)"temps");
  lit_453 = YPPsym((P)"x-3422");
  lit_454 = YPPsym((P)"x-3421");
  lit_455 = YPsb((P)"P ");
  T264 = YPsig(YPPlist(1,LITREF(lit_454)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3422_214 = YPmet(FUNCODEREF(fun_x_3422_214),LITREF(lit_453),T264,ENVNUL,PNUL,YPfalse);
  T263 = YPsig(YPPlist(2,LITREF(lit_452),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_215 = YPmet(FUNCODEREF(fun_generate_local_temporaries_215),LITREF(lit_451),T263,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(YevalSg2cYgenerate_local_temporaries);
  if (T267 != YPfalse) {
    T266 = VARREF(YevalSg2cYgenerate_local_temporaries);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_generate_local_temporaries_215;
  T265 = CALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YevalSg2cYgenerate_local_temporaries,T265);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_456 = YPPsym((P)"generate-registers");
  lit_457 = YPPsym((P)"regs");
  lit_458 = YPPsym((P)"next-line");
  lit_459 = YPPsym((P)"j");
  lit_460 = YPsb((P)"P ");
  lit_461 = YPPsym((P)"next-reg");
  lit_462 = YPsb((P)";\n");
  T271 = YPsig(YPPlist(2,LITREF(lit_459),LITREF(lit_134)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_216 = YPmet(FUNCODEREF(fun_next_reg_216),LITREF(lit_461),T271,ENVNUL,PNUL,YPfalse);
  T270 = YPsig(YPPlist(1,LITREF(lit_459)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_217 = YPmet(FUNCODEREF(fun_next_line_217),LITREF(lit_458),T270,ENVNUL,PNUL,YPfalse);
  T269 = YPsig(YPPlist(2,LITREF(lit_457),LITREF(lit_61)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_218 = YPmet(FUNCODEREF(fun_generate_registers_218),LITREF(lit_456),T269,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YevalSg2cYgenerate_registers);
  if (T274 != YPfalse) {
    T273 = VARREF(YevalSg2cYgenerate_registers);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_generate_registers_218;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  VARSET(YevalSg2cYgenerate_registers,T272);
  lit_463 = YPPsym((P)"module-info-name");
  lit_464 = YPsb((P)"module_info_");
  T276 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_219 = YPmet(FUNCODEREF(fun_module_info_name_219),LITREF(lit_463),T276,ENVNUL,PNUL,YPfalse);
  T279 = BOUNDP(YevalSg2cYmodule_info_name);
  if (T279 != YPfalse) {
    T278 = VARREF(YevalSg2cYmodule_info_name);
  } else {
    T278 = YPfalse;
  }
  T280 = fun_module_info_name_219;
  T277 = CALL2(1,VARREF(YPdefine_method),T278,T280);
  VARSET(YevalSg2cYmodule_info_name,T277);
  lit_465 = YPPsym((P)"declare-imported-module-infos");
  lit_466 = YPPsym((P)"maybe-declare");
  lit_467 = YPsb((P)"extern MODULE_INFO ");
  lit_468 = YPsb((P)";\n");
  T283 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_220 = YPmet(FUNCODEREF(fun_maybe_declare_220),LITREF(lit_466),T283,ENVNUL,PNUL,YPfalse);
  T282 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T282,ENVNUL,PNUL,YPfalse);
  T281 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_465),T281,ENVNUL,PNUL,YPfalse);
  T284 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T284);
  lit_469 = YPPsym((P)"generate-module-info");
  lit_470 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_471 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_472 = YPPsym((P)"x-3425");
  lit_473 = YPPsym((P)"x-3424");
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
  lit_492 = YPPsym((P)"x-3431");
  lit_493 = YPPsym((P)"x-3430");
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
  T289 = YPsig(YPPlist(1,LITREF(lit_473)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3425_223 = YPmet(FUNCODEREF(fun_x_3425_223),LITREF(lit_472),T289,ENVNUL,PNUL,YPfalse);
  T288 = YPsig(YPPlist(2,LITREF(lit_478),LITREF(lit_95)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T288,ENVNUL,PNUL,YPfalse);
  T287 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T287,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(YPPlist(1,LITREF(lit_493)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3431_226 = YPmet(FUNCODEREF(fun_x_3431_226),LITREF(lit_492),T286,ENVNUL,PNUL,YPfalse);
  T285 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_469),T285,ENVNUL,PNUL,YPfalse);
  T290 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T290);
  lit_510 = YPPsym((P)"module-init-name");
  lit_511 = YPsb((P)"load_module_");
  T291 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_228 = YPmet(FUNCODEREF(fun_module_init_name_228),LITREF(lit_510),T291,ENVNUL,PNUL,YPfalse);
  T294 = BOUNDP(YevalSg2cYmodule_init_name);
  if (T294 != YPfalse) {
    T293 = VARREF(YevalSg2cYmodule_init_name);
  } else {
    T293 = YPfalse;
  }
  T295 = fun_module_init_name_228;
  T292 = CALL2(1,VARREF(YPdefine_method),T293,T295);
  VARSET(YevalSg2cYmodule_init_name,T292);
  lit_512 = YPPsym((P)"module-init-decl");
  lit_513 = YPsb((P)"void ");
  lit_514 = YPsb((P)" (void)");
  T296 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_229 = YPmet(FUNCODEREF(fun_module_init_decl_229),LITREF(lit_512),T296,ENVNUL,PNUL,YPfalse);
  T299 = BOUNDP(YevalSg2cYmodule_init_decl);
  if (T299 != YPfalse) {
    T298 = VARREF(YevalSg2cYmodule_init_decl);
  } else {
    T298 = YPfalse;
  }
  T300 = fun_module_init_decl_229;
  T297 = CALL2(1,VARREF(YPdefine_method),T298,T300);
  VARSET(YevalSg2cYmodule_init_decl,T297);
  lit_515 = YPPsym((P)"generate-module-init");
  lit_516 = YPPsym((P)"form");
  lit_517 = YPsb((P)"dl");
  lit_518 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_519 = YPPsym((P)"x-3437");
  lit_520 = YPPsym((P)"x-3436");
  lit_521 = YPsb((P)"extern ");
  lit_522 = YPsb((P)";\n");
  lit_523 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_524 = YPsb((P)"extern ");
  lit_525 = YPsb((P)";\n\n");
  lit_526 = YPsb((P)" {\n");
  lit_527 = YPsb((P)"  static int need_init = 1;\n");
  lit_528 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_529 = YPsb((P)"  need_init = 0;\n");
  lit_530 = YPPsym((P)"x-3442");
  lit_531 = YPPsym((P)"x-3441");
  lit_532 = YPsb((P)"  ");
  lit_533 = YPsb((P)"();\n");
  lit_534 = YPsb((P)"\n");
  lit_535 = YPsb((P)"\n");
  lit_536 = YPsb((P)"}\n");
  T303 = YPsig(YPPlist(1,LITREF(lit_520)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3437_230 = YPmet(FUNCODEREF(fun_x_3437_230),LITREF(lit_519),T303,ENVNUL,PNUL,YPfalse);
  T302 = YPsig(YPPlist(1,LITREF(lit_531)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3442_231 = YPmet(FUNCODEREF(fun_x_3442_231),LITREF(lit_530),T302,ENVNUL,PNUL,YPfalse);
  T301 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_20),LITREF(lit_516)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_232 = YPmet(FUNCODEREF(fun_generate_module_init_232),LITREF(lit_515),T301,ENVNUL,PNUL,YPfalse);
  T306 = BOUNDP(YevalSg2cYgenerate_module_init);
  if (T306 != YPfalse) {
    T305 = VARREF(YevalSg2cYgenerate_module_init);
  } else {
    T305 = YPfalse;
  }
  T307 = fun_generate_module_init_232;
  T304 = CALL2(1,VARREF(YPdefine_method),T305,T307);
  VARSET(YevalSg2cYgenerate_module_init,T304);
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
  T308 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_233 = YPmet(FUNCODEREF(fun_generate_main_233),LITREF(lit_537),T308,ENVNUL,PNUL,YPfalse);
  T311 = BOUNDP(YevalSg2cYgenerate_main);
  if (T311 != YPfalse) {
    T310 = VARREF(YevalSg2cYgenerate_main);
  } else {
    T310 = YPfalse;
  }
  T312 = fun_generate_main_233;
  T309 = CALL2(1,VARREF(YPdefine_method),T310,T312);
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
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
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
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"~", &module_info_gooSmath, "~"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"find", &module_info_gooScolsScol, "find"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"tan", &module_info_gooSmath, "tan"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"error", &module_info_gooSboot, "error"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"+", &module_info_gooSmath, "+"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"in", &module_info_gooSioSport, "in"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"put", &module_info_gooSioSport, "put"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%im", &module_info_gooSboot, "%im"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"t?", &module_info_gooStypes, "t?"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"=", &module_info_gooSmath, "="},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"and", &module_info_gooSmacros, "and"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"when", &module_info_gooSmacros, "when"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"read", &module_info_gooSruntime, "read"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%str", &module_info_gooSboot, "%str"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"bt", &module_info_evalStop, "bt"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"^", &module_info_gooSmath, "^"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"|", &module_info_gooSmath, "|"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"frame", &module_info_evalStop, "frame"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"mif", &module_info_gooSboot, "mif"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"dv", &module_info_gooSboot, "dv"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"~=", &module_info_gooSmath, "~="},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"t=", &module_info_gooStypes, "t="},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"top", &module_info_evalStop, "top"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"tup", &module_info_gooSboot, "tup"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"round", &module_info_gooSmath, "round"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"close", &module_info_gooSioSport, "close"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"load", &module_info_evalStop, "load"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"do", &module_info_gooSmacros, "do"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"max", &module_info_gooSmag, "max"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"lst", &module_info_gooSboot, "lst"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"add", &module_info_gooScolsScol, "add"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"&", &module_info_gooSmath, "&"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"logn", &module_info_gooSmath, "logn"},
  {"let", &module_info_gooSboot, "let"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"application-function", &module_info_evalSast, "application-function"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"always", &module_info_gooSruntime, "always"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"for", &module_info_gooSmacros, "for"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"-", &module_info_gooSmath, "-"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"df", &module_info_gooSboot, "df"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"*", &module_info_gooSmath, "*"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dg", &module_info_gooSboot, "dg"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {">=", &module_info_gooSmag, ">="},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {">>", &module_info_gooSmath, ">>"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"open", &module_info_gooSioSport, "open"},
  {"dc", &module_info_gooSboot, "dc"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"len", &module_info_gooStypes, "len"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"op", &module_info_gooSmacros, "op"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"get", &module_info_gooSioSport, "get"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"or", &module_info_gooSmacros, "or"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"set", &module_info_gooSboot, "set"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"@+", &module_info_gooSboot, "@+"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sin", &module_info_gooSmath, "sin"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"new", &module_info_gooSboot, "new"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"purge-outdated-modules", &YevalSg2cYpurge_outdated_modules},
  {"---main-0---", NULL},
  {"generate-function-binding", &YevalSg2cYgenerate_function_binding},
  {"module-loader-app-modname-setter", &YevalSg2cYmodule_loader_app_modname_setter},
  {"mangle-integer", &YevalSg2cYmangle_integer},
  {"generate-quotation", &YevalSg2cYgenerate_quotation},
  {"mangler-reset", &YevalSg2cYmangler_reset},
  {"generate-makefile", &YevalSg2cYgenerate_makefile},
  {"$iep-marker", &YevalSg2cYDiep_marker},
  {"g2c-def-app", &YevalSg2cYg2c_def_app},
  {"g2c-test", &YevalSg2cYg2c_test},
  {"mangle-quotation-name", &YevalSg2cYmangle_quotation_name},
  {"generate-function-bodies", &YevalSg2cYgenerate_function_bodies},
  {"compute-program", &YevalSg2cYcompute_program},
  {"$local-suffix", &YevalSg2cYDlocal_suffix},
  {"$method-mangled-marker", &YevalSg2cYDmethod_mangled_marker},
  {"module-init-name", &YevalSg2cYmodule_init_name},
  {"gen-fab-list", &YevalSg2cYgen_fab_list},
  {"module-up-to-date?", &YevalSg2cYmodule_up_to_dateQ},
  {"generate-function-body-reference", &YevalSg2cYgenerate_function_body_reference},
  {"generate-global-binding", &YevalSg2cYgenerate_global_binding},
  {"<g2c-module-loader>", &YevalSg2cYLg2c_module_loaderG},
  {"g2c-ast", &YevalSg2cYg2c_ast},
  {"with-statement", NULL},
  {"generate-c-application", &YevalSg2cYgenerate_c_application},
  {"primitive-inlinable?", &YevalSg2cYprimitive_inlinableQ},
  {"module-init-decl", &YevalSg2cYmodule_init_decl},
  {"*dynamic-linking?*", &YevalSg2cYTdynamic_linkingQT},
  {"$number-call-templates", &YevalSg2cYDnumber_call_templates},
  {"module-loader-app-modname", &YevalSg2cYmodule_loader_app_modname},
  {"$max-character-code", &YevalSg2cYDmax_character_code},
  {"pp", &YevalSg2cYpp},
  {"generate-quotations", &YevalSg2cYgenerate_quotations},
  {"generate-shadow-args", &YevalSg2cYgenerate_shadow_args},
  {"funinit-to-c", &YevalSg2cYfuninit_to_c},
  {"gen-depth", &YevalSg2cYgen_depth},
  {"g2c-top", &YevalSg2cYg2c_top},
  {"generate-functions", &YevalSg2cYgenerate_functions},
  {"module-src-file", &YevalSg2cYmodule_src_file},
  {"mangle-module-into", &YevalSg2cYmangle_module_into},
  {"between-parentheses", NULL},
  {"with-expression", NULL},
  {"$c-escapes", &YevalSg2cYDc_escapes},
  {"generate-quotation-forwards", &YevalSg2cYgenerate_quotation_forwards},
  {"mangle-name-into", &YevalSg2cYmangle_name_into},
  {"generate-module-info", &YevalSg2cYgenerate_module_info},
  {"generate-function-specs", &YevalSg2cYgenerate_function_specs},
  {"$local-marker", &YevalSg2cYDlocal_marker},
  {"*definitions*", &YevalSg2cYTdefinitionsT},
  {"generate-self-recursive-call", &YevalSg2cYgenerate_self_recursive_call},
  {"false-name", &YevalSg2cYfalse_name},
  {"mangle-global-name", &YevalSg2cYmangle_global_name},
  {"binding->c", &YevalSg2cYbinding_Gc},
  {"for-commas", NULL},
  {"$hygiene-marker", &YevalSg2cYDhygiene_marker},
  {"*mangle-buffer*", &YevalSg2cYTmangle_bufferT},
  {"reference->c", &YevalSg2cYreference_Gc},
  {"*g2c-app*", &YevalSg2cYTg2c_appT},
  {"$name-mangler-table", &YevalSg2cYDname_mangler_table},
  {"generate-global-environment", &YevalSg2cYgenerate_global_environment},
  {"module-mtime-setter", &YevalSg2cYmodule_mtime_setter},
  {"funshell-to-c", &YevalSg2cYfunshell_to_c},
  {"between-parentheses-comma-separated", NULL},
  {"gen-result", &YevalSg2cYgen_result},
  {"$min-character-code", &YevalSg2cYDmin_character_code},
  {"---main-1---", NULL},
  {"compute-ast", &YevalSg2cYcompute_ast},
  {"generate-main", &YevalSg2cYgenerate_main},
  {"compile-load", &YevalSg2cYcompile_load},
  {"$iep-suffix", &YevalSg2cYDiep_suffix},
  {"char-buffer-as-string", &YevalSg2cYchar_buffer_as_string},
  {"generate-function-code", &YevalSg2cYgenerate_function_code},
  {"%print-cpu-usage", NULL},
  {"generate-local-temporaries", &YevalSg2cYgenerate_local_temporaries},
  {"g2c-build-app", &YevalSg2cYg2c_build_app},
  {"*registers-per-line*", &YevalSg2cYTregisters_per_lineT},
  {"$module-separator", &YevalSg2cYDmodule_separator},
  {"$hygiene-char", &YevalSg2cYDhygiene_char},
  {"*trace-registers?*", &YevalSg2cYTtrace_registersQT},
  {"generate-module-init", &YevalSg2cYgenerate_module_init},
  {"mangle-boot-name", &YevalSg2cYmangle_boot_name},
  {"g2c-goo", &YevalSg2cYg2c_goo},
  {"gen-ref", &YevalSg2cYgen_ref},
  {"generate-function-forward", &YevalSg2cYgenerate_function_forward},
  {"buf-cat2!", &YevalSg2cYbuf_cat2X},
  {"$escape-marker", &YevalSg2cYDescape_marker},
  {"generate-closure-structure", &YevalSg2cYgenerate_closure_structure},
  {"generate-trailer", &YevalSg2cYgenerate_trailer},
  {"or/set", NULL},
  {"mangle-raw-name", &YevalSg2cYmangle_raw_name},
  {"dispatcher?", &YevalSg2cYdispatcherQ},
  {"mangle-string-literal", &YevalSg2cYmangle_string_literal},
  {"$number-characters", &YevalSg2cYDnumber_characters},
  {"g2c-clean", &YevalSg2cYg2c_clean},
  {"declare-imported-module-infos", &YevalSg2cYdeclare_imported_module_infos},
  {"mangle-local-name", &YevalSg2cYmangle_local_name},
  {"---main-2---", NULL},
  {"*tmp-file-counter*", &YevalSg2cYTtmp_file_counterT},
  {"module-loader-appname", &YevalSg2cYmodule_loader_appname},
  {"mangle-local-marked-name", &YevalSg2cYmangle_local_marked_name},
  {"generate-c-module", &YevalSg2cYgenerate_c_module},
  {"generate-registers", &YevalSg2cYgenerate_registers},
  {"$method-mangled-marker-string", &YevalSg2cYDmethod_mangled_marker_string},
  {"module-mtime", &YevalSg2cYmodule_mtime},
  {"$escape-separator", &YevalSg2cYDescape_separator},
  {"mangle-binding", &YevalSg2cYmangle_binding},
  {"generate-function-forwards", &YevalSg2cYgenerate_function_forwards},
  {"g2c-exp", &YevalSg2cYg2c_exp},
  {"generate-return", &YevalSg2cYgenerate_return},
  {"$module-marker", &YevalSg2cYDmodule_marker},
  {"module-loader-appname-setter", &YevalSg2cYmodule_loader_appname_setter},
  {"with-used-expression", NULL},
  {"out-list-builder", &YevalSg2cYout_list_builder},
  {"module-info-name", &YevalSg2cYmodule_info_name},
  {"float-to-c-string", &YevalSg2cYfloat_to_c_string},
  {"module-src-file-setter", &YevalSg2cYmodule_src_file_setter},
  {"generate-header", &YevalSg2cYgenerate_header},
  {"$mangles-data", &YevalSg2cYDmangles_data},
  {"to-c", &YevalSg2cYto_c},
  {"<g2c-module>", &YevalSg2cYLg2c_moduleG},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-ast", "g2c-ast"},
  {"g2c-test", "g2c-test"},
  {"g2c-goo", "g2c-goo"},
  {"g2c-build-app", "g2c-build-app"},
  {"g2c-eval", "g2c-eval"},
  {"g2c-clean", "g2c-clean"},
  {"g2c-exp", "g2c-exp"},
  {"g2c-def-app", "g2c-def-app"},
  {"g2c-top", "g2c-top"},
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
