/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/main */

EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
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
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
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
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(Ynil,"goo/boot","nil");
EXT(YevalStopYtop,"eval/top","top");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalStopYframe,"eval/top","frame");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
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
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLintG,"goo/boot","<int>");
EXT(Yadd_prop,"goo/boot","add-prop");
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
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_5);
DEFLIT(lit_11);
DEFLIT(lit_9);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF3457;
  P fileF3456;
  P tmpF3455;
  P fileF3454;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
loop:
  lit_0 = YPsb((P)"0.126");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"APR 02, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  CALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T0 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF3454 = T0;
  tmpF3455 = fileF3454;
  if (tmpF3455 != YPfalse) {
    T3 = CALL2(1,VARREF(YevalStopYload_file),fileF3454,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF3456 = T4;
  tmpF3457 = fileF3456;
  if (tmpF3457 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalStopYload_file),fileF3456,LITREF(lit_10));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  T9 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_10));
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
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScycle;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSg2c},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"t=", &module_info_gooStypes, "t="},
  {"try", &module_info_gooSboot, "try"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
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
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"/", &module_info_gooSmath, "/"},
  {"dg", &module_info_gooSboot, "dg"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"g2c-build-app", &module_info_evalSg2c, "g2c-build-app"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"out", &module_info_gooSioSport, "out"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"rep", &module_info_gooSboot, "rep"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"even?", &module_info_gooSmath, "even?"},
  {"error", &module_info_gooSboot, "error"},
  {"map", &module_info_gooSmacros, "map"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"into", &module_info_gooScolsScol, "into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"let", &module_info_gooSboot, "let"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"while", &module_info_gooSmacros, "while"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"open", &module_info_gooSioSport, "open"},
  {"def", &module_info_gooSboot, "def"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"add", &module_info_gooScolsScol, "add"},
  {"put", &module_info_gooSioSport, "put"},
  {"round", &module_info_gooSmath, "round"},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"ds", &module_info_gooSboot, "ds"},
  {"g2c-test", &module_info_evalSg2c, "g2c-test"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"&", &module_info_gooSmath, "&"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"g2c-clean", &module_info_evalSg2c, "g2c-clean"},
  {"round/", &module_info_gooSmath, "round/"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"and", &module_info_gooSmacros, "and"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"when", &module_info_gooSmacros, "when"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"bt", &module_info_evalStop, "bt"},
  {"case", &module_info_gooSmacros, "case"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"log", &module_info_gooSmath, "log"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"in", &module_info_gooSioSport, "in"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
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
  {"dm", &module_info_gooSboot, "dm"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"head", &module_info_gooSboot, "head"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"g2c-exp", &module_info_evalSg2c, "g2c-exp"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"cos", &module_info_gooSmath, "cos"},
  {"t?", &module_info_gooStypes, "t?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"loc", &module_info_gooSboot, "loc"},
  {"if", &module_info_gooSboot, "if"},
  {"g2c-def-app", &module_info_evalSg2c, "g2c-def-app"},
  {"always", &module_info_gooSruntime, "always"},
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
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"g2c-top", &module_info_evalSg2c, "g2c-top"},
  {"nil", &module_info_gooSboot, "nil"},
  {"top", &module_info_evalStop, "top"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"len", &module_info_gooStypes, "len"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"acos", &module_info_gooSmath, "acos"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"tup", &module_info_gooSboot, "tup"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"app", &module_info_gooSmacros, "app"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"export", &module_info_gooSboot, "export"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"*", &module_info_gooSmath, "*"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"frame", &module_info_evalStop, "frame"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"del", &module_info_gooScolsScol, "del"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"for", &module_info_gooSmacros, "for"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"match", &module_info_gooSmacros, "match"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"-", &module_info_gooSmath, "-"},
  {"find", &module_info_gooScolsScol, "find"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"ct", &module_info_gooSboot, "ct"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<<", &module_info_gooSmath, "<<"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pow", &module_info_gooSmath, "pow"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"as", &module_info_gooStypes, "as"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"t*", &module_info_gooStypes, "t*"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"load", &module_info_evalStop, "load"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"^", &module_info_gooSmath, "^"},
  {"g2c-ast", &module_info_evalSg2c, "g2c-ast"},
  {"df", &module_info_gooSboot, "df"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"neg", &module_info_gooSmath, "neg"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"read", &module_info_gooSruntime, "read"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"<", &module_info_gooSmag, "<"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {">=", &module_info_gooSmag, ">="},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"new", &module_info_gooSboot, "new"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"until", &module_info_gooSmacros, "until"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"~=", &module_info_gooSmath, "~="},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"1-", &module_info_gooSmath, "1-"},
  {"=", &module_info_gooSmath, "="},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"sin", &module_info_gooSmath, "sin"},
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
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"fin", &module_info_gooSboot, "fin"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"op", &module_info_gooSmacros, "op"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
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
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"close", &module_info_gooSioSport, "close"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"set", &module_info_gooSboot, "set"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {"*goo-date*", &YevalSmainYTgoo_dateT},
  {"*goo-version*", &YevalSmainYTgoo_versionT},
  {NULL, NULL}
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
  load_module_gooSuser();

  (P)YevalSmainY___main_0___();

}

/* END OF GENERATED CODE. */
