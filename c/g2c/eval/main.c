/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/main */

EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yerror,"goo/boot","error");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
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
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
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
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
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
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
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
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_10);
DEFLIT(lit_0);
DEFLIT(lit_9);
DEFLIT(lit_4);
DEFLIT(lit_7);
DEFLIT(lit_5);
DEFLIT(lit_1);
DEFLIT(lit_6);
DEFLIT(lit_11);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_2);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF8413;
  P fileF8412;
  P tmpF8411;
  P fileF8410;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
loop:
  lit_0 = YPsb((P)"0.131");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"APR 11, 2002");
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
  fileF8410 = T0;
  tmpF8411 = fileF8410;
  if (tmpF8411 != YPfalse) {
    T3 = CALL2(1,VARREF(YevalStopYload_file),fileF8410,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF8412 = T4;
  tmpF8413 = fileF8412;
  if (tmpF8413 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalStopYload_file),fileF8412,LITREF(lit_10));
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
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSread;

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
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"~", &module_info_gooSmath, "~"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"bt", &module_info_evalStop, "bt"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"find", &module_info_gooScolsScol, "find"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"tan", &module_info_gooSmath, "tan"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"error", &module_info_gooSboot, "error"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"+", &module_info_gooSmath, "+"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"in", &module_info_gooSioSport, "in"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"<", &module_info_gooSmag, "<"},
  {"g2c-test", &module_info_evalSg2c, "g2c-test"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"g2c-top", &module_info_evalSg2c, "g2c-top"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"put", &module_info_gooSioSport, "put"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"==", &module_info_gooSmacros, "=="},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"g2c-ast", &module_info_evalSg2c, "g2c-ast"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"t?", &module_info_gooStypes, "t?"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"=", &module_info_gooSmath, "="},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"when", &module_info_gooSmacros, "when"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"read", &module_info_gooSruntime, "read"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"rem", &module_info_gooSmath, "rem"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"items", &module_info_gooScolsScol, "items"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"^", &module_info_gooSmath, "^"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"|", &module_info_gooSmath, "|"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"frame", &module_info_evalStop, "frame"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"mif", &module_info_gooSboot, "mif"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"dv", &module_info_gooSboot, "dv"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"~=", &module_info_gooSmath, "~="},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"t=", &module_info_gooStypes, "t="},
  {"load-in", &module_info_evalSast, "load-in"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"top", &module_info_evalStop, "top"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"tup", &module_info_gooSboot, "tup"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"loc", &module_info_gooSboot, "loc"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"round", &module_info_gooSmath, "round"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"close", &module_info_gooSioSport, "close"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"load", &module_info_evalStop, "load"},
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
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"max", &module_info_gooSmag, "max"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"log", &module_info_gooSmath, "log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"add", &module_info_gooScolsScol, "add"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"&", &module_info_gooSmath, "&"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"def", &module_info_gooSboot, "def"},
  {"logn", &module_info_gooSmath, "logn"},
  {"let", &module_info_gooSboot, "let"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"t+", &module_info_gooStypes, "t+"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"always", &module_info_gooSruntime, "always"},
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
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"min", &module_info_gooSmag, "min"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
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
  {"g2c-build-app", &module_info_evalSg2c, "g2c-build-app"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"-", &module_info_gooSmath, "-"},
  {"as", &module_info_gooStypes, "as"},
  {"not", &module_info_gooSboot, "not"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"df", &module_info_gooSboot, "df"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
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
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"g2c-goo", &module_info_evalSg2c, "g2c-goo"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"mod", &module_info_gooSmath, "mod"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"*", &module_info_gooSmath, "*"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dg", &module_info_gooSboot, "dg"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {">=", &module_info_gooSmag, ">="},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
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
  {"decf", &module_info_gooSmacros, "decf"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"acos", &module_info_gooSmath, "acos"},
  {"g2c-clean", &module_info_evalSg2c, "g2c-clean"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"open", &module_info_gooSioSport, "open"},
  {"dc", &module_info_gooSboot, "dc"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"len", &module_info_gooStypes, "len"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"t*", &module_info_gooSboot, "t*"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"op", &module_info_gooSmacros, "op"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<<", &module_info_gooSmath, "<<"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"g2c-exp", &module_info_evalSg2c, "g2c-exp"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"get", &module_info_gooSioSport, "get"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"g2c-def-app", &module_info_evalSg2c, "g2c-def-app"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"set", &module_info_gooSboot, "set"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"nil", &module_info_gooSboot, "nil"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
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
  {"function-value", &module_info_evalSast, "function-value"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-date*", &YevalSmainYTgoo_dateT},
  {"*goo-version*", &YevalSmainYTgoo_versionT},
  {"---main-0---", NULL},
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
