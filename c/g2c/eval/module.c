/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/module");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/module */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
DEF(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
DEF(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
DEF(YevalSmoduleYmodule_target_environment_setter,"eval/module","module-target-environment-setter");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YevalSmoduleYmodule_syntax_environment_setter,"eval/module","module-syntax-environment-setter");
DEF(YevalSmoduleYenvironment_allows_foreign_namesQ_setter,"eval/module","environment-allows-foreign-names?-setter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DEF(YevalSmoduleYload_module,"eval/module","load-module");
DEF(YevalSmoduleYmodule_loader_stack_setter,"eval/module","module-loader-stack-setter");
DEF(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
DEF(YevalSmoduleYTtracing_refsQT,"eval/module","*tracing-refs?*");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
DEF(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
DEF(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
DEF(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
DEF(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
DEF(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
DEF(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YevalSmoduleYenvironment_uses_modules_setter,"eval/module","environment-uses-modules-setter");
DEF(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
DEF(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
DEF(YevalSmoduleYenvironment_next_setter,"eval/module","environment-next-setter");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YevalSmoduleYenvironment_module_loader_setter,"eval/module","environment-module-loader-setter");
DEF(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
DEF(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YPfalse,"goo/boot","%false");
DEF(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
DYNDEF(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
DEF(YevalSmoduleYbinding_name_setter,"eval/module","binding-name-setter");
DEF(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSdependencyYdependency_nulQ,"eval/dependency","dependency-nul?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
DEF(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
DEF(YevalSmoduleYtransaction_implemented_bindings,"eval/module","transaction-implemented-bindings");
DEF(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YevalSmoduleYPmodule_exports,"eval/module","%module-exports");
DEF(YevalSmoduleYreloader_do_create_module,"eval/module","reloader-do-create-module");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
DEF(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
DEF(YevalSmoduleYload_and_register_module,"eval/module","load-and-register-module");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
DEF(YevalSmoduleYDnul_static_environment,"eval/module","$nul-static-environment");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yfun_env,"goo/boot","fun-env");
DEF(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DEF(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
DEF(YevalSmoduleYTruntime_module_loaderT,"eval/module","*runtime-module-loader*");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YevalSdependencyYDnul_dependency,"eval/dependency","$nul-dependency");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
DEF(YevalSmoduleYinsert_and_mangle_globalX,"eval/module","insert-and-mangle-global!");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
DEF(YevalSmoduleYenvironment_next,"eval/module","environment-next");
DEF(YevalSmoduleYbinding_type,"eval/module","binding-type");
DEF(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YOlit,"goo/boot","@lit");
DEF(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
DEF(YevalSmoduleYremove_module_internalX,"eval/module","remove-module-internal!");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YevalSmoduleYenvironment_bindings_setter,"eval/module","environment-bindings-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSsystemYos_val,"goo/system","os-val");
DEF(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
DEF(YevalSmoduleYwalk_bindingsT,"eval/module","walk-bindings*");
DEF(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
DEF(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSmoduleYLtransactionG,"eval/module","<transaction>");
DEF(YevalSmoduleYruntime_core_environment,"eval/module","runtime-core-environment");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSmoduleYmodule_loader_modules_setter,"eval/module","module-loader-modules-setter");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSmoduleYreloader_do_dynamic_binding,"eval/module","reloader-do-dynamic-binding");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
DEF(YevalSmoduleYLbindingG,"eval/module","<binding>");
DEF(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
DEF(YevalSmoduleYmodule_c_forms,"eval/module","module-c-forms");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
DEF(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
DEF(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSmoduleYload_in,"eval/module","load-in");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
DEF(YevalSmoduleYreloader_do_import,"eval/module","reloader-do-import");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSmoduleYprocess_module_data,"eval/module","process-module-data");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
DEF(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLnumG,"goo/boot","<num>");
DEF(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
DEF(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalSmoduleYmerge_transactionsX,"eval/module","merge-transactions!");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSmoduleYtransaction_dependents,"eval/module","transaction-dependents");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
DEF(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
DEF(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
DEF(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSmoduleYmodule_loader_modules,"eval/module","module-loader-modules");
DYNDEF(YevalSmoduleYTnow_rt_envT,"eval/module","*now-rt-env*");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSmoduleYmodule_transaction_setter,"eval/module","module-transaction-setter");
DEF(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
DEF(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
DEF(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
DEF(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YLboxG,"goo/boot","<box>");
DEF(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSmoduleYtransaction_nulQ,"eval/module","transaction-nul?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPtrue,"goo/boot","%true");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YevalSmoduleYreloader_do_runtime_binding,"eval/module","reloader-do-runtime-binding");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSmoduleYenvironment_module_setter,"eval/module","environment-module-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yunexec,"goo/boot","unexec");
DYNDEF(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YOtanyQ,"goo/boot","@tany?");
DEF(YevalSmoduleYreloader_do_export,"eval/module","reloader-do-export");
DEF(YevalSmoduleYreloader_do_other_binding,"eval/module","reloader-do-other-binding");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
DEF(YevalSmoduleYbinding_module_setter,"eval/module","binding-module-setter");
DEF(YevalSmoduleYLruntime_module_loaderG,"eval/module","<runtime-module-loader>");
DEF(YevalSmoduleYreloader_do_use_module,"eval/module","reloader-do-use-module");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
DEF(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
DEF(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
DEF(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YevalSmoduleYcompute_transitive_users,"eval/module","compute-transitive-users");
DEF(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_14);
DEFLIT(lit_105);
DEFLIT(lit_306);
DEFLIT(lit_215);
DEFLIT(lit_100);
DEFLIT(lit_279);
DEFLIT(lit_178);
DEFLIT(lit_41);
DEFLIT(lit_237);
DEFLIT(lit_240);
DEFLIT(lit_113);
DEFLIT(lit_211);
DEFLIT(lit_76);
DEFLIT(lit_126);
DEFLIT(lit_267);
DEFLIT(lit_301);
DEFLIT(lit_284);
DEFLIT(lit_231);
DEFLIT(lit_83);
DEFLIT(lit_226);
DEFLIT(lit_170);
DEFLIT(lit_261);
DEFLIT(lit_59);
DEFLIT(lit_265);
DEFLIT(lit_250);
DEFLIT(lit_145);
DEFLIT(lit_182);
DEFLIT(lit_227);
DEFLIT(lit_288);
DEFLIT(lit_260);
DEFLIT(lit_15);
DEFLIT(lit_222);
DEFLIT(lit_216);
DEFLIT(lit_86);
DEFLIT(lit_17);
DEFLIT(lit_55);
DEFLIT(lit_217);
DEFLIT(lit_50);
DEFLIT(lit_242);
DEFLIT(lit_243);
DEFLIT(lit_167);
DEFLIT(lit_204);
DEFLIT(lit_21);
DEFLIT(lit_209);
DEFLIT(lit_67);
DEFLIT(lit_115);
DEFLIT(lit_70);
DEFLIT(lit_307);
DEFLIT(lit_174);
DEFLIT(lit_273);
DEFLIT(lit_276);
DEFLIT(lit_277);
DEFLIT(lit_13);
DEFLIT(lit_266);
DEFLIT(lit_191);
DEFLIT(lit_65);
DEFLIT(lit_207);
DEFLIT(lit_135);
DEFLIT(lit_52);
DEFLIT(lit_228);
DEFLIT(lit_27);
DEFLIT(lit_64);
DEFLIT(lit_225);
DEFLIT(lit_137);
DEFLIT(lit_152);
DEFLIT(lit_141);
DEFLIT(lit_53);
DEFLIT(lit_134);
DEFLIT(lit_200);
DEFLIT(lit_97);
DEFLIT(lit_8);
DEFLIT(lit_25);
DEFLIT(lit_12);
DEFLIT(lit_194);
DEFLIT(lit_23);
DEFLIT(lit_18);
DEFLIT(lit_57);
DEFLIT(lit_136);
DEFLIT(lit_31);
DEFLIT(lit_293);
DEFLIT(lit_309);
DEFLIT(lit_96);
DEFLIT(lit_281);
DEFLIT(lit_154);
DEFLIT(lit_124);
DEFLIT(lit_256);
DEFLIT(lit_269);
DEFLIT(lit_290);
DEFLIT(lit_118);
DEFLIT(lit_44);
DEFLIT(lit_172);
DEFLIT(lit_104);
DEFLIT(lit_127);
DEFLIT(lit_49);
DEFLIT(lit_19);
DEFLIT(lit_302);
DEFLIT(lit_58);
DEFLIT(lit_146);
DEFLIT(lit_51);
DEFLIT(lit_289);
DEFLIT(lit_16);
DEFLIT(lit_158);
DEFLIT(lit_103);
DEFLIT(lit_130);
DEFLIT(lit_119);
DEFLIT(lit_68);
DEFLIT(lit_202);
DEFLIT(lit_24);
DEFLIT(lit_90);
DEFLIT(lit_168);
DEFLIT(lit_71);
DEFLIT(lit_101);
DEFLIT(lit_28);
DEFLIT(lit_42);
DEFLIT(lit_157);
DEFLIT(lit_165);
DEFLIT(lit_285);
DEFLIT(lit_190);
DEFLIT(lit_40);
DEFLIT(lit_149);
DEFLIT(lit_234);
DEFLIT(lit_317);
DEFLIT(lit_69);
DEFLIT(lit_123);
DEFLIT(lit_110);
DEFLIT(lit_295);
DEFLIT(lit_233);
DEFLIT(lit_300);
DEFLIT(lit_151);
DEFLIT(lit_303);
DEFLIT(lit_4);
DEFLIT(lit_1);
DEFLIT(lit_311);
DEFLIT(lit_238);
DEFLIT(lit_37);
DEFLIT(lit_316);
DEFLIT(lit_156);
DEFLIT(lit_161);
DEFLIT(lit_47);
DEFLIT(lit_107);
DEFLIT(lit_292);
DEFLIT(lit_192);
DEFLIT(lit_62);
DEFLIT(lit_125);
DEFLIT(lit_296);
DEFLIT(lit_147);
DEFLIT(lit_93);
DEFLIT(lit_274);
DEFLIT(lit_203);
DEFLIT(lit_84);
DEFLIT(lit_318);
DEFLIT(lit_314);
DEFLIT(lit_308);
DEFLIT(lit_5);
DEFLIT(lit_257);
DEFLIT(lit_162);
DEFLIT(lit_2);
DEFLIT(lit_195);
DEFLIT(lit_304);
DEFLIT(lit_252);
DEFLIT(lit_236);
DEFLIT(lit_106);
DEFLIT(lit_254);
DEFLIT(lit_72);
DEFLIT(lit_87);
DEFLIT(lit_214);
DEFLIT(lit_247);
DEFLIT(lit_205);
DEFLIT(lit_148);
DEFLIT(lit_160);
DEFLIT(lit_78);
DEFLIT(lit_264);
DEFLIT(lit_184);
DEFLIT(lit_9);
DEFLIT(lit_197);
DEFLIT(lit_223);
DEFLIT(lit_282);
DEFLIT(lit_258);
DEFLIT(lit_259);
DEFLIT(lit_183);
DEFLIT(lit_73);
DEFLIT(lit_34);
DEFLIT(lit_297);
DEFLIT(lit_144);
DEFLIT(lit_140);
DEFLIT(lit_315);
DEFLIT(lit_80);
DEFLIT(lit_278);
DEFLIT(lit_212);
DEFLIT(lit_38);
DEFLIT(lit_186);
DEFLIT(lit_221);
DEFLIT(lit_224);
DEFLIT(lit_111);
DEFLIT(lit_138);
DEFLIT(lit_169);
DEFLIT(lit_220);
DEFLIT(lit_251);
DEFLIT(lit_229);
DEFLIT(lit_43);
DEFLIT(lit_131);
DEFLIT(lit_245);
DEFLIT(lit_193);
DEFLIT(lit_36);
DEFLIT(lit_312);
DEFLIT(lit_85);
DEFLIT(lit_114);
DEFLIT(lit_109);
DEFLIT(lit_201);
DEFLIT(lit_246);
DEFLIT(lit_88);
DEFLIT(lit_3);
DEFLIT(lit_30);
DEFLIT(lit_81);
DEFLIT(lit_32);
DEFLIT(lit_263);
DEFLIT(lit_29);
DEFLIT(lit_142);
DEFLIT(lit_48);
DEFLIT(lit_291);
DEFLIT(lit_39);
DEFLIT(lit_219);
DEFLIT(lit_287);
DEFLIT(lit_10);
DEFLIT(lit_20);
DEFLIT(lit_56);
DEFLIT(lit_249);
DEFLIT(lit_128);
DEFLIT(lit_268);
DEFLIT(lit_230);
DEFLIT(lit_286);
DEFLIT(lit_155);
DEFLIT(lit_232);
DEFLIT(lit_199);
DEFLIT(lit_305);
DEFLIT(lit_77);
DEFLIT(lit_153);
DEFLIT(lit_63);
DEFLIT(lit_33);
DEFLIT(lit_176);
DEFLIT(lit_0);
DEFLIT(lit_120);
DEFLIT(lit_280);
DEFLIT(lit_177);
DEFLIT(lit_188);
DEFLIT(lit_173);
DEFLIT(lit_26);
DEFLIT(lit_208);
DEFLIT(lit_60);
DEFLIT(lit_180);
DEFLIT(lit_187);
DEFLIT(lit_298);
DEFLIT(lit_95);
DEFLIT(lit_171);
DEFLIT(lit_92);
DEFLIT(lit_283);
DEFLIT(lit_196);
DEFLIT(lit_262);
DEFLIT(lit_54);
DEFLIT(lit_198);
DEFLIT(lit_102);
DEFLIT(lit_319);
DEFLIT(lit_181);
DEFLIT(lit_6);
DEFLIT(lit_213);
DEFLIT(lit_271);
DEFLIT(lit_159);
DEFLIT(lit_129);
DEFLIT(lit_117);
DEFLIT(lit_166);
DEFLIT(lit_133);
DEFLIT(lit_270);
DEFLIT(lit_179);
DEFLIT(lit_46);
DEFLIT(lit_98);
DEFLIT(lit_235);
DEFLIT(lit_66);
DEFLIT(lit_206);
DEFLIT(lit_244);
DEFLIT(lit_163);
DEFLIT(lit_189);
DEFLIT(lit_175);
DEFLIT(lit_112);
DEFLIT(lit_22);
DEFLIT(lit_75);
DEFLIT(lit_313);
DEFLIT(lit_218);
DEFLIT(lit_143);
DEFLIT(lit_99);
DEFLIT(lit_248);
DEFLIT(lit_139);
DEFLIT(lit_150);
DEFLIT(lit_121);
DEFLIT(lit_7);
DEFLIT(lit_89);
DEFLIT(lit_272);
DEFLIT(lit_185);
DEFLIT(lit_132);
DEFLIT(lit_310);
DEFLIT(lit_108);
DEFLIT(lit_241);
DEFLIT(lit_239);
DEFLIT(lit_74);
DEFLIT(lit_61);
DEFLIT(lit_122);
DEFLIT(lit_116);
DEFLIT(lit_299);
DEFLIT(lit_35);
DEFLIT(lit_210);
DEFLIT(lit_294);
DEFLIT(lit_11);
DEFLIT(lit_45);
DEFLIT(lit_82);
DEFLIT(lit_253);
DEFLIT(lit_275);
DEFLIT(lit_94);
DEFLIT(lit_79);
DEFLIT(lit_255);
DEFLIT(lit_164);
DEFLIT(lit_91);

/* FUNCTIONS: */

LOCFOR(fun_namespace_error_0);
LOCFOR(fun_binding_name_1);
LOCFOR(fun_binding_name_setter_2);
LOCFOR(fun_binding_mangled_name_3);
LOCFOR(fun_binding_mangled_name_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_binding_type_6);
LOCFOR(fun_binding_type_setter_7);
LOCFOR(fun_binding_inferred_type_8);
LOCFOR(fun_binding_inferred_type_setter_9);
LOCFOR(fun_10);
LOCFOR(fun_global_box_value_11);
LOCFOR(fun_global_box_value_setter_12);
LOCFOR(fun_binding_kind_13);
LOCFOR(fun_binding_kind_setter_14);
LOCFOR(fun_15);
LOCFOR(fun_binding_module_16);
LOCFOR(fun_binding_module_setter_17);
LOCFOR(fun_18);
LOCFOR(fun_binding_freeQ_19);
LOCFOR(fun_binding_freeQ_setter_20);
LOCFOR(fun_21);
LOCFOR(fun_binding_info_22);
LOCFOR(fun_binding_info_setter_23);
LOCFOR(fun_24);
LOCFOR(fun_binding_prop_25);
LOCFOR(fun_binding_prop_setter_26);
LOCFOR(fun_27);
LOCFOR(fun_binding_module_name_28);
LOCFOR(fun_environment_next_29);
LOCFOR(fun_environment_next_setter_30);
LOCFOR(fun_31);
LOCFOR(fun_environment_bindings_32);
LOCFOR(fun_environment_bindings_setter_33);
LOCFOR(fun_environment_module_34);
LOCFOR(fun_environment_module_setter_35);
LOCFOR(fun_environment_module_loader_36);
LOCFOR(fun_environment_module_loader_setter_37);
LOCFOR(fun_environment_uses_modules_38);
LOCFOR(fun_environment_uses_modules_setter_39);
LOCFOR(fun_40);
LOCFOR(fun_environment_allows_foreign_namesQ_41);
LOCFOR(fun_environment_allows_foreign_namesQ_setter_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_env_object_name_46);
LOCFOR(fun_frame_bindings_47);
LOCFOR(fun_do_static_global_bindings_48);
FUNFOR(YevalSmoduleYdo_named_static_global_bindings);
LOCFOR(fun_insert_globalX_50);
LOCFOR(fun_51);
LOCFOR(fun_insert_globalsX_52);
LOCFOR(fun_find_static_global_environment_53);
LOCFOR(fun_find_static_global_environment_54);
LOCFOR(fun_find_syntax_environment_55);
LOCFOR(fun_find_environment_module_56);
LOCFOR(fun_find_binding_57);
LOCFOR(fun_transaction_implemented_bindings_58);
LOCFOR(fun_59);
LOCFOR(fun_transaction_dependents_60);
LOCFOR(fun_61);
FUNFOR(YevalSmoduleYtransaction_register_implemented_binding);
FUNFOR(YevalSmoduleYtransaction_register_dependent);
FUNFOR(YevalSmoduleYtransaction_nulQ);
LOCFOR(fun_65);
LOCFOR(fun_66);
FUNFOR(YevalSmoduleYmerge_transactionsX);
LOCFOR(fun_68);
LOCFOR(fun_69);
FUNFOR(YevalSmoduleYroll_back_transaction);
LOCFOR(fun_71);
LOCFOR(fun_72);
FUNFOR(YevalSmoduleYcall_with_subtransaction);
LOCFOR(fun_x_1487_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_module_loader_modules_77);
LOCFOR(fun_module_loader_modules_setter_78);
LOCFOR(fun_79);
LOCFOR(fun_module_loader_stack_80);
LOCFOR(fun_module_loader_stack_setter_81);
LOCFOR(fun_82);
LOCFOR(fun_module_name_83);
LOCFOR(fun_module_mangled_name_84);
LOCFOR(fun_module_mangled_name_setter_85);
LOCFOR(fun_86);
LOCFOR(fun_module_mangled_string_name_87);
LOCFOR(fun_module_mangled_string_name_setter_88);
LOCFOR(fun_89);
LOCFOR(fun_module_target_environment_90);
LOCFOR(fun_module_target_environment_setter_91);
LOCFOR(fun_module_syntax_environment_92);
LOCFOR(fun_module_syntax_environment_setter_93);
LOCFOR(fun_Pmodule_exports_94);
LOCFOR(fun_95);
LOCFOR(fun_module_data_processedQ_96);
LOCFOR(fun_module_data_processedQ_setter_97);
LOCFOR(fun_98);
LOCFOR(fun_module_runtime_data_99);
LOCFOR(fun_module_runtime_data_setter_100);
LOCFOR(fun_101);
LOCFOR(fun_module_transaction_102);
LOCFOR(fun_module_transaction_setter_103);
LOCFOR(fun_104);
LOCFOR(fun_module_referenced_bindings_105);
LOCFOR(fun_106);
LOCFOR(fun_module_uses_c_files_107);
LOCFOR(fun_108);
LOCFOR(fun_module_c_forms_109);
LOCFOR(fun_110);
LOCFOR(fun_module_uses_c_includes_111);
LOCFOR(fun_112);
LOCFOR(fun_module_uses_c_libraries_113);
LOCFOR(fun_114);
LOCFOR(fun_module_exports_115);
FUNFOR(YevalSmoduleYimport_globalX);
LOCFOR(fun_insert_and_mangle_globalX_117);
FUNFOR(YevalSmoduleYimport_and_mangle_globalX);
FUNFOR(YevalSmoduleYset_module_environments);
LOCFOR(fun_120);
FUNFOR(YevalSmoduleYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_122);
FUNFOR(YevalSmoduleYregister_moduleX);
FUNFOR(YevalSmoduleYprobe_module);
LOCFOR(fun_125);
LOCFOR(fun_126);
FUNFOR(YevalSmoduleYload_and_register_module);
FUNFOR(YevalSmoduleYexport_bindingX);
FUNFOR(YevalSmoduleYbinding_native_toQ);
LOCFOR(fun_130);
FUNFOR(YevalSmoduleYreport_undefined_global_bindings);
LOCFOR(fun_132);
LOCFOR(fun_133);
LOCFOR(fun_add_user_134);
LOCFOR(fun_135);
FUNFOR(YevalSmoduleYcompute_transitive_users);
FUNFOR(YevalSmoduleYremove_module_internalX);
LOCFOR(fun_138);
FUNFOR(YevalSmoduleYremove_modules_by_nameX);
FUNFOR(YevalSmoduleYmodule_name_to_relpath);
LOCFOR(fun_zap_referenced_bindingsX_141);
LOCFOR(fun_zap_referenced_bindingsX_142);
LOCFOR(fun_register_referenced_binding_143);
LOCFOR(fun_register_referenced_binding_144);
LOCFOR(fun_145);
LOCFOR(fun_146);
LOCFOR(fun_147);
LOCFOR(fun_148);
LOCFOR(fun_load_module_149);
FUNFOR(YevalSmoduleYruntime_module_loader);
FUNFOR(YevalSmoduleYruntime_module);
FUNFOR(YevalSmoduleYruntime_environment);
FUNFOR(YevalSmoduleYruntime_core_environment);
FUNFOR(YevalSmoduleYunchecked_runtime_environment);
FUNFOR(YevalSmoduleYreloader_do_create_module);
FUNFOR(YevalSmoduleYreloader_do_use_module);
FUNFOR(YevalSmoduleYreloader_do_import);
FUNFOR(YevalSmoduleYprocess_module_data);
LOCFOR(fun_ensure_module_data_159);
FUNFOR(YevalSmoduleYreloader_do_runtime_binding);
FUNFOR(YevalSmoduleYreloader_do_dynamic_binding);
FUNFOR(YevalSmoduleYreloader_do_other_binding);
FUNFOR(YevalSmoduleYreloader_do_export);
FUNFOR(YevalSmoduleYreload_modules);
FUNFOR(YevalSmoduleYfab_static_global_environment);
LOCFOR(fun_166);
FUNFOR(YevalSmoduleYfab_subset_environment);
FUNFOR(YevalSmoduleYwalk_bindings);
FUNFOR(YevalSmoduleYwalk_bindingsT);
extern P YevalSmoduleY___main_0___ ();
extern P YevalSmoduleY___main_1___ ();
extern P YevalSmoduleY___main_2___ ();
extern P YevalSmoduleY___main_3___ ();
extern P YevalSmoduleY___main_4___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_namespace_error_0) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YevalSmoduleYLnamespace_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_name_1) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_name_setter_2) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_mangled_name_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_mangled_name_setter_4) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_type_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_type_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_inferred_type_8) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_inferred_type_setter_9) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_inferred_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_10) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(VARREF(YgooStypesYDbot));
}

LOCCODEDEF(fun_global_box_value_11) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_global_box_value_setter_12) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYglobal_box_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_kind_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_kind_setter_14) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_kind));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_34));
}

LOCCODEDEF(fun_binding_module_16) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_module));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_module_setter_17) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_module));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_18) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_freeQ_19) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_freeQ_setter_20) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_freeQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_21) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_info_22) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_info_setter_23) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_prop_25) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYbinding_prop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_binding_prop_setter_26) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYbinding_prop));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_27) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_binding_module_name_28) {
  P b_;
  P modF4001;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_module),b_);
  modF4001 = T2;
  if (modF4001 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSmoduleYmodule_name),modF4001);
    T0 = T1;
  } else {
    T0 = VARREF(YevalSmoduleYDgoo_boot_module_name);
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_environment_next_29) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_next_setter_30) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYenvironment_next));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_31) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_environment_bindings_32) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_bindings_setter_33) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYenvironment_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_module_34) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_module_setter_35) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYenvironment_module));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_module_loader_36) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_module_loader_setter_37) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYenvironment_module_loader));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_uses_modules_38) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_uses_modules_setter_39) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYenvironment_uses_modules));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_40) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_allows_foreign_namesQ_41) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_environment_allows_foreign_namesQ_setter_42) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_43) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_44) {
  P binding_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(binding_, 0);
  T3 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,LITREF(lit_34));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYbinding_global_box),binding_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSmoduleYbinding_global_box),binding_);
      T7 = CALL1(1,VARREF(YevalSmoduleYglobal_box_value),T8);
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T7);
      T4 = T6;
    } else {
      T4 = YPfalse;
    }
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T9 = CALL1(0,FREEREF(1),T10);
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_45) {
  P return_;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  T0 = FUNFAB(fun_44,2,FREEREF(0),return_);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),LITREF(lit_3));
  CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T0,T1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_env_object_name_46) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_45,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_frame_bindings_47) {
  P env_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),env_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do_static_global_bindings_48) {
  P f_,env_;
  P envF4002;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  envF4002 = env_;
  LOOP_176: {
    P a176_0;
    T2 = CALL2(1,VARREF(YisaQ),envF4002,VARREF(YevalSmoduleYLstatic_nul_environmentG));
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSmoduleYframe_bindings),envF4002);
      CALL2(1,VARREF(YgooSmacrosYdo),f_,T3);
      T5 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),envF4002);
      a176_0 = T5;
      envF4002 = a176_0;
      goto LOOP_176;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYdo_named_static_global_bindings) {
  P f_,env_;
  P envF4003;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  envF4003 = env_;
  LOOP_177: {
    P a177_0;
    T2 = CALL2(1,VARREF(YisaQ),envF4003,VARREF(YevalSmoduleYLstatic_nul_environmentG));
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSmoduleYframe_bindings),envF4003);
      CALL2(1,VARREF(YgooScolsScolYdo_keyed),f_,T3);
      T5 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),envF4003);
      a177_0 = T5;
      envF4003 = a177_0;
      goto LOOP_177;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_insert_globalX_50) {
  P binding_,r_;
  P rF4004;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  T3 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  check_type(T3,VARREF(YevalSmoduleYLstatic_global_environmentG));
  rF4004 = T3;
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),rF4004);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_51) {
  P b_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),b_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_insert_globalsX_52) {
  P bindings_,r_;
  P T0,T1;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(r_, 1);
  T1 = FUNFAB(fun_51,1,r_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,bindings_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_static_global_environment_53) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),r_);
  T0 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_find_static_global_environment_54) {
  P r_;
LINK_STACK();
  ARG(r_, 0);
UNLINK_STACK();
  RET(r_);
}

LOCCODEDEF(fun_find_syntax_environment_55) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYfind_environment_module),r_);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_syntax_environment),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_find_environment_module_56) {
  P r_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  T0 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_binding_57) {
  P name_,r_;
  P tmpF4005;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T4 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),r_);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),T4,name_,YPfalse);
  tmpF4005 = T3;
  if (tmpF4005 != YPfalse) {
    T0 = tmpF4005;
  } else {
    T2 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),r_);
    T1 = CALL2(1,VARREF(YevalSmoduleYfind_binding),name_,T2);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_transaction_implemented_bindings_58) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYtransaction_implemented_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_59) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_transaction_dependents_60) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYtransaction_dependents));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_61) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYtransaction_register_implemented_binding) {
  P b_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(b_, 0);
  T0 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_122));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSmoduleYtransaction_implemented_bindings),DYNREF(YevalSmoduleYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,b_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSmoduleYtransaction_register_dependent) {
  P d_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(d_, 0);
  T0 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTcurrent_subtransactionT));
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSdependencyYast_error),LITREF(lit_125));
  } else {
  }
  T3 = CALL1(1,VARREF(YevalSmoduleYtransaction_dependents),DYNREF(YevalSmoduleYTcurrent_subtransactionT));
  T2 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T3,d_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSmoduleYtransaction_nulQ) {
  P t_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(t_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYtransaction_implemented_bindings),t_);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYtransaction_dependents),t_);
    T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_65) {
  P k_,v_;
  P T0;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_66) {
  P k_,v_;
  P T0;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYmerge_transactionsX) {
  P t1_,t2_;
  P t2_dependentsF4009;
  P t1_dependentsF4008;
  P t2_imp_bindingsF4007;
  P t1_imp_bindingsF4006;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYtransaction_nulQ),t2_);
  if (T1 != YPfalse) {
    T0 = t1_;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYtransaction_nulQ),t1_);
    if (T3 != YPfalse) {
      T2 = t2_;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,VARREF(YevalSmoduleYtransaction_implemented_bindings),t1_);
        t1_imp_bindingsF4006 = T10;
        T9 = CALL1(1,VARREF(YevalSmoduleYtransaction_implemented_bindings),t2_);
        t2_imp_bindingsF4007 = T9;
        T8 = CALL1(1,VARREF(YevalSmoduleYtransaction_dependents),t1_);
        t1_dependentsF4008 = T8;
        T7 = CALL1(1,VARREF(YevalSmoduleYtransaction_dependents),t2_);
        t2_dependentsF4009 = T7;
        T5 = FUNFAB(fun_65,1,t1_imp_bindingsF4006);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,t2_imp_bindingsF4007);
        T6 = FUNFAB(fun_66,1,t1_dependentsF4008);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T6,t2_dependentsF4009);
        T4 = t1_;
      } else {
        T4 = YPfalse;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_68) {
  P binding_,junk_;
  P T0;
LINK_STACK();
  ARG(binding_, 0);
  ARG(junk_, 1);
  T0 = CALL2(1,VARREF(YevalSmoduleYbinding_freeQ_setter),YPtrue,binding_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_69) {
  P dependent_,junk_;
  P T0;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(junk_, 1);
  T0 = CALL1(1,VARREF(YevalSdependencyYdetach_dependent),dependent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYroll_back_transaction) {
  P t_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(t_, 0);
  T0 = fun_68;
  T1 = CALL1(1,VARREF(YevalSmoduleYtransaction_implemented_bindings),t_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = fun_69;
  T4 = CALL1(1,VARREF(YevalSmoduleYtransaction_dependents),t_);
  T2 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_71) {
  P valueF4010;
  P T0,T1;
LINK_STACK();
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSmoduleYLtransactionG));
  DYNSET(YevalSmoduleYTcurrent_subtransactionT,T0);
  T1 = CALL0(0,FREEREF(0));
  valueF4010 = T1;
  BOXPUT(YPtrue,FREEREF(1));
UNLINK_STACK();
  QRET(valueF4010);
}

LOCCODEDEF(fun_72) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T0 = BOXGET(FREEREF(0));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSmoduleYmodule_transaction),FREEREF(1));
    T2 = CALL2(1,VARREF(YevalSmoduleYmerge_transactionsX),T3,DYNREF(YevalSmoduleYTcurrent_subtransactionT));
    T1 = CALL2(1,VARREF(YevalSmoduleYmodule_transaction_setter),T2,FREEREF(1));
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYroll_back_transaction),DYNREF(YevalSmoduleYTcurrent_subtransactionT));
  }
  T5 = DYNSET(YevalSmoduleYTcurrent_subtransactionT,FREEREF(2));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(YevalSmoduleYcall_with_subtransaction) {
  P module_,thunk_;
  P savedF4012;
  P successQF4011;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
  successQF4011 = YPfalse;
  successQF4011 = BOXFAB(successQF4011);
  savedF4012 = DYNREF(YevalSmoduleYTcurrent_subtransactionT);
  T2 = FUNFAB(fun_71,2,thunk_,successQF4011);
  T3 = FUNFAB(fun_72,3,successQF4011,module_,savedF4012);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_x_1487_74) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_143),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_75) {
  P return_;
  P x_1486F4023;
  P x_1486F4022;
  P x_1486F4021;
  P x_1486F4020;
  P x_1486F4019;
  P x_1486F4018;
  P x_1486F4017;
  P bodyF4016;
  P moduleF4015;
  P x_1486F4014;
  P x_1487F4013;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T23 = FUNSHELL(0,fun_x_1487_74,2);
  x_1487F4013 = T23;
  FUNINIT(x_1487F4013, 2,FREEREF(0),return_);
  x_1486F4014 = FREEREF(0);
  moduleF4015 = YPfalse;
  bodyF4016 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1486F4014,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1486F4014,LITREF(lit_143),x_1487F4013);
    x_1486F4017 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1486F4017,x_1487F4013);
    x_1486F4018 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1486F4018,x_1487F4013);
    moduleF4015 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1486F4018);
    x_1486F4019 = T9;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1486F4019,x_1487F4013);
    x_1486F4020 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1486F4020,x_1487F4013);
    T7 = CALL1(1,VARREF(Ytail),x_1486F4019);
    x_1486F4021 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1486F4021,x_1487F4013);
    T11 = CALL1(1,VARREF(Ytail),x_1486F4017);
    x_1486F4022 = T11;
    bodyF4016 = x_1486F4022;
    x_1486F4023 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1486F4023,x_1487F4013);
  } else {
    T13 = CALL2(1,x_1487F4013,LITREF(lit_144),x_1486F4014);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T17 = moduleF4015;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
  T21 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = bodyF4016;
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_146));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T18,LITREF(lit_146));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_76) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_75,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_modules_77) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_modules_setter_78) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_loader_modules));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_79) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_stack_80) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_stack_setter_81) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_loader_stack));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_82) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_module_name_83) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mangled_name_84) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mangled_name_setter_85) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_mangled_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_86) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_module_mangled_string_name_87) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_mangled_string_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mangled_string_name_setter_88) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_mangled_string_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_89) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_module_target_environment_90) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_target_environment_setter_91) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_target_environment));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_syntax_environment_92) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_syntax_environment_setter_93) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_syntax_environment));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pmodule_exports_94) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYPmodule_exports));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_95) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_data_processedQ_96) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_data_processedQ_setter_97) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_data_processedQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_98) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_module_runtime_data_99) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_runtime_data_setter_100) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_runtime_data));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_101) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_module_transaction_102) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_transaction_setter_103) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSmoduleYmodule_transaction));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_104) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSmoduleYLtransactionG));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_referenced_bindings_105) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_referenced_bindings));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_106) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_uses_c_files_107) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_uses_c_files));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_108) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_c_forms_109) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_c_forms));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_110) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_uses_c_includes_111) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_uses_c_includes));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_112) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_uses_c_libraries_113) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_uses_c_libraries));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_114) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_exports_115) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  CALL1(1,VARREF(YevalSmoduleYensure_module_data),x_);
  T0 = CALL1(1,VARREF(YevalSmoduleYPmodule_exports),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSmoduleYimport_globalX) {
  P b_,env_;
  P tmpF4025;
  P existingF4024;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
  T8 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
  T7 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T8,env_);
  existingF4024 = T7;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4024,YPfalse);
  tmpF4025 = T3;
  if (tmpF4025 != YPfalse) {
    T1 = tmpF4025;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4024,b_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),b_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_218),T5,T6);
  } else {
  }
  CALL2(1,VARREF(YevalSmoduleYinsert_globalX),b_,env_);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_insert_and_mangle_globalX_117) {
  P binding_,mangle_prefix_,r_;
  P rF4026;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(mangle_prefix_, 1);
  ARG(r_, 2);
  T4 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  check_type(T4,VARREF(YevalSmoduleYLstatic_global_environmentG));
  rF4026 = T4;
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),rF4026);
  T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T3);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYimport_and_mangle_globalX) {
  P b_,mangle_prefix_,env_;
  P tmpF4028;
  P existingF4027;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  ARG(mangle_prefix_, 1);
  ARG(env_, 2);
  T10 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
  T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T10);
  T8 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T9,env_);
  existingF4027 = T8;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4027,YPfalse);
  tmpF4028 = T3;
  if (tmpF4028 != YPfalse) {
    T1 = tmpF4028;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4027,b_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T5 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T6);
    T7 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),b_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_223),T5,T7);
  } else {
  }
  CALL3(1,VARREF(YevalSmoduleYinsert_and_mangle_globalX),b_,mangle_prefix_,env_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSmoduleYset_module_environments) {
  P mod_,syntax_env_,target_env_;
  P T0;
LINK_STACK();
  ARG(mod_, 0);
  ARG(syntax_env_, 1);
  ARG(target_env_, 2);
  CALL2(1,VARREF(YevalSmoduleYmodule_syntax_environment_setter),syntax_env_,mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYmodule_target_environment_setter),target_env_,mod_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_120) {
  P mod_;
  P T0;
LINK_STACK();
  ARG(mod_, 0);
  T0 = CALL1(0,FREEREF(0),mod_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYdo_module_loader_modules) {
  P f_,loader_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(loader_, 1);
  T1 = FUNFAB(fun_120,1,f_);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_module_type_122) {
  P loader_;
LINK_STACK();
  ARG(loader_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSmoduleYLmoduleG));
}

FUNCODEDEF(YevalSmoduleYregister_moduleX) {
  P module_loader_,mod_;
  P T0,T1;
LINK_STACK();
  ARG(module_loader_, 0);
  ARG(mod_, 1);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_modules),module_loader_);
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),mod_,T0,T1);
UNLINK_STACK();
  RET(module_loader_);
}

FUNCODEDEF(YevalSmoduleYprobe_module) {
  P loader_,name_;
  P tmpF4029;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_modules),loader_);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),T3,name_,YPfalse);
  tmpF4029 = T2;
  if (tmpF4029 != YPfalse) {
    T0 = tmpF4029;
  } else {
    T1 = CALL2(1,VARREF(YevalSmoduleYload_and_register_module),loader_,name_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_125) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSmoduleYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_126) {
  P x_1489F4032;
  P x_1488F4031;
  P tup33F4030;
  P T0,T1,T2,T3;
LINK_STACK();
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_stack),FREEREF(0));
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup33F4030 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F4030,YPint((P)0));
  x_1488F4031 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F4030,YPint((P)1));
  x_1489F4032 = T0;
  CALL2(1,VARREF(YevalSmoduleYmodule_loader_stack_setter),x_1488F4031,FREEREF(0));
UNLINK_STACK();
  QRET(x_1489F4032);
}

FUNCODEDEF(YevalSmoduleYload_and_register_module) {
  P loader_,name_;
  P modF4036;
  P indentF4035;
  P depthF4034;
  P stackF4033;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_stack),loader_);
  stackF4033 = T10;
  T9 = CALL1(1,VARREF(YgooStypesYlen),stackF4033);
  depthF4034 = T9;
  T8 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_237),depthF4034);
  indentF4035 = T8;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF4033,name_);
  if (T0 != YPfalse) {
    T2 = CALL1(1,VARREF(Yhead),stackF4033);
    T1 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_238),T2,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_239),indentF4035,name_);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_stack),loader_);
  T3 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T4,name_);
  CALL2(1,VARREF(YevalSmoduleYmodule_loader_stack_setter),T3,loader_);
  T6 = FUNFAB(fun_125,2,loader_,name_);
  T7 = FUNFAB(fun_126,1,loader_);
  T5 = with_cleanup(T6,T7);
  modF4036 = T5;
  CALL2(1,VARREF(YevalSmoduleYregister_moduleX),loader_,modF4036);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_240),indentF4035);
UNLINK_STACK();
  RET(modF4036);
}

FUNCODEDEF(YevalSmoduleYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF4039;
  P existingF4038;
  P exportsF4037;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),module_);
  exportsF4037 = T6;
  T5 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF4037,name_,YPfalse);
  existingF4038 = T5;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4038,YPfalse);
  tmpF4039 = T3;
  if (tmpF4039 != YPfalse) {
    T1 = tmpF4039;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4038,binding_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T4 = CALL5(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_245),existingF4038,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF4037,name_);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(YevalSmoduleYbinding_native_toQ) {
  P binding_,module_;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(module_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_name),module_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_130) {
  P binding_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(binding_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_freeQ),binding_);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYmodule_name),FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_251),T5,T6);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreport_undefined_global_bindings) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_130,1,mod_);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_132) {
  P uses_mod_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(uses_mod_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_name),uses_mod_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_name),FREEREF(1));
    T3 = CALL1(0,FREEREF(2),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_133) {
  P mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_132,3,FREEREF(0),mod_,FREEREF(1));
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_add_user_134) {
  P modname_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),modname_,FREEREF(0),modname_);
    T4 = FUNFAB(fun_133,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_135) {
  P v_;
  P UF4040;
  P T0,T1,T2;
LINK_STACK();
  ARG(v_, 0);
  T2 = BOXGET(FREEREF(0));
  UF4040 = T2;
  T1 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF4040,v_);
  T0 = BOXPUT(T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F4043;
  P add_userF4042;
  P usersF4041;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
  T6 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF4041 = T6;
  T5 = FUNSHELL(0,fun_add_user_134,3);
  add_userF4042 = T5;
  FUNINIT(add_userF4042, 3,usersF4041,add_userF4042,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF4042,modnames_);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F4043 = T4;
  packer_F4043 = BOXFAB(packer_F4043);
  T1 = FUNFAB(fun_135,1,packer_F4043);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,usersF4041);
  T3 = BOXGET(packer_F4043);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_res),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(YevalSmoduleYremove_module_internalX) {
  P loader_,mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_transaction),mod_);
  CALL1(1,VARREF(YevalSmoduleYroll_back_transaction),T0);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_modules),loader_);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  T1 = CALL2(1,VARREF(YgooScolsScolxYdelX),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_138) {
  P modname_;
  P modF4044;
  P T0,T1,T2;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF4044 = T1;
  T0 = CALL2(1,VARREF(YevalSmoduleYremove_module_internalX),FREEREF(0),modF4044);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF4045;
  P T0,T1;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
  T1 = CALL2(1,VARREF(YevalSmoduleYcompute_transitive_users),loader_,modnames_);
  remove_namesF4045 = T1;
  T0 = FUNFAB(fun_138,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,remove_namesF4045);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(YevalSmoduleYmodule_name_to_relpath) {
  P name_;
  P namestrF4046;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = CALL1(1,VARREF(Ysym_name),name_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSchrYto_lower),T3);
  namestrF4046 = T2;
  T1 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF4046,YPchr((P)47));
  T0 = CALL2(1,VARREF(YgooScolsSseqYjoin),T1,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_zap_referenced_bindingsX_141) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  if (VARREF(YevalSmoduleYTtracing_refsQT) != YPfalse) {
    T0 = CALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_268));
  } else {
  }
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_referenced_bindings),mod_);
  T1 = CALL1(1,VARREF(YgooScolsScolxYzapX),T2);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_zap_referenced_bindingsX_142) {
  P r_;
  P T0,T1,T2;
LINK_STACK();
  ARG(r_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),T2);
  T0 = CALL1(1,VARREF(YevalSmoduleYzap_referenced_bindingsX),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_register_referenced_binding_143) {
  P mod_,b_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(b_, 1);
  if (VARREF(YevalSmoduleYTtracing_refsQT) != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T0 = CALL3(1,VARREF(YgooSioSwriteYpost),LITREF(lit_272),T1,DYNREF(YevalSmoduleYTdynamic_compilationQT));
  } else {
  }
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_referenced_bindings),mod_);
    T3 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),b_,T4,b_);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_register_referenced_binding_144) {
  P r_,b_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(r_, 0);
  ARG(b_, 1);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
    T2 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),T3);
    T1 = CALL2(1,VARREF(YevalSmoduleYregister_referenced_binding),T2,b_);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_145) {
  P T0;
LINK_STACK();
  DYNSET(YevalSmoduleYTnow_rt_envT,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYload_in),FREEREF(1),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_146) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_147) {
  P x_1490F4047;
  P T0,T1,T2;
LINK_STACK();
  CALL2(1,VARREF(YevalSmoduleYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1490F4047 = DYNREF(YevalSmoduleYTnow_rt_envT);
  T1 = FUNFAB(fun_145,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_146,1,x_1490F4047);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXPUT(YPtrue,FREEREF(3));
UNLINK_STACK();
  QRET(FREEREF(4));
}

LOCCODEDEF(fun_148) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T2 = BOXGET(FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_transaction),FREEREF(1));
    T3 = CALL1(1,VARREF(YevalSmoduleYroll_back_transaction),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_load_module_149) {
  P loader_,name_;
  P fileF4053;
  P modpathF4052;
  P keepmodQF4051;
  P envF4050;
  P moduleF4049;
  P typeF4048;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_module_type),loader_);
  typeF4048 = T10;
  T9 = CALL3(1,VARREF(Ynew),typeF4048,VARREF(YevalSmoduleYmodule_name),name_);
  moduleF4049 = T9;
  T8 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),moduleF4049,loader_,YPfalse);
  envF4050 = T8;
  keepmodQF4051 = YPfalse;
  keepmodQF4051 = BOXFAB(keepmodQF4051);
  T7 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  modpathF4052 = T7;
  T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF4052,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF4053 = T6;
  CALL3(1,VARREF(YevalSmoduleYset_module_environments),moduleF4049,envF4050,envF4050);
  T1 = CALL1(1,VARREF(Ynot),fileF4053);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_278),modpathF4052);
  } else {
  }
  T4 = FUNFAB(fun_147,5,envF4050,loader_,fileF4053,keepmodQF4051,moduleF4049);
  T5 = FUNFAB(fun_148,2,keepmodQF4051,moduleF4049);
  T3 = with_cleanup(T4,T5);
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(YevalSmoduleYruntime_module_loader) {
LINK_STACK();
UNLINK_STACK();
  QRET(VARREF(YevalSmoduleYTruntime_module_loaderT));
}

FUNCODEDEF(YevalSmoduleYruntime_module) {
  P modname_;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = CALL0(1,VARREF(YevalSmoduleYruntime_module_loader));
  T0 = CALL2(1,VARREF(YevalSmoduleYprobe_module),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYruntime_environment) {
  P modname_;
  P moduleF4054;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_module),modname_);
  moduleF4054 = T1;
  CALL1(1,VARREF(YevalSmoduleYensure_module_data),moduleF4054);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),moduleF4054);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYruntime_core_environment) {
  P modname_;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_module),modname_);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYunchecked_runtime_environment) {
  P modname_;
  P loaderF4055;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(modname_, 0);
  T6 = CALL0(1,VARREF(YevalSmoduleYruntime_module_loader));
  loaderF4055 = T6;
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_stack),loaderF4055);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),T3,YPint((P)0),YPfalse);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,modname_);
  if (T1 != YPfalse) {
    T0 = DYNREF(YevalSmoduleYTnow_rt_envT);
  } else {
    T5 = CALL1(1,VARREF(YevalSmoduleYruntime_module),modname_);
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),T5);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_create_module) {
  P modname_,data_;
  P envF4059;
  P modF4058;
  P typeF4057;
  P loaderF4056;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
  T4 = CALL0(1,VARREF(YevalSmoduleYruntime_module_loader));
  loaderF4056 = T4;
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_module_type),loaderF4056);
  typeF4057 = T3;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T1 = CALL3(1,VARREF(Ynew),typeF4057,VARREF(YevalSmoduleYmodule_name),T2);
  modF4058 = T1;
  T0 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),modF4058,loaderF4056,YPtrue);
  envF4059 = T0;
  CALL2(1,VARREF(YevalSmoduleYmodule_data_processedQ_setter),YPfalse,modF4058);
  CALL3(1,VARREF(YevalSmoduleYset_module_environments),modF4058,envF4059,envF4059);
  CALL2(1,VARREF(YevalSmoduleYmodule_runtime_data_setter),data_,modF4058);
  CALL2(1,VARREF(YevalSmoduleYregister_moduleX),loaderF4056,modF4058);
UNLINK_STACK();
  RET(modF4058);
}

FUNCODEDEF(YevalSmoduleYreloader_do_use_module) {
  P mod_,uses_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(uses_, 1);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),T2);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T1,uses_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_import) {
  P mod_,name_,from_mod_,original_name_;
  P bindingF4061;
  P home_envF4060;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
  T8 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),from_mod_);
  home_envF4060 = T8;
  T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T6 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T7,home_envF4060);
  bindingF4061 = T6;
  T0 = CALL1(1,VARREF(Ynot),bindingF4061);
  if (T0 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSmoduleYmodule_name),from_mod_);
    T3 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T1 = CALL4(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_294),original_name_,T2,T3);
  } else {
  }
  T5 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4061,T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YevalSmoduleYprocess_module_data) {
  P module_;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_runtime_data),module_);
  T0 = (P)YPprocess_module(T1,VARREF(YevalSmoduleYreloader_do_import),VARREF(YevalSmoduleYreloader_do_export));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ensure_module_data_159) {
  P module_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(module_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_data_processedQ),module_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSmoduleYmodule_data_processedQ_setter),YPtrue,module_);
    T3 = CALL1(1,VARREF(YevalSmoduleYprocess_module_data),module_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_runtime_binding) {
  P mod_,name_,loc_;
  P bindingF4062;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_300),VARREF(YevalSmoduleYbinding_module),mod_,VARREF(YevalSmoduleYbinding_name),T3,VARREF(YevalSmoduleYbinding_freeQ),YPfalse,VARREF(YevalSmoduleYbinding_locative),loc_);
  bindingF4062 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4062,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF4063;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_303),VARREF(YevalSmoduleYbinding_module),mod_,VARREF(YevalSmoduleYbinding_name),T3,VARREF(YevalSmoduleYbinding_freeQ),YPfalse,VARREF(YevalSmoduleYbinding_locative),loc_);
  bindingF4063 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4063,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF4064;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_306),VARREF(YevalSmoduleYbinding_module),mod_,VARREF(YevalSmoduleYbinding_name),T3,VARREF(YevalSmoduleYbinding_freeQ),YPtrue);
  bindingF4064 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4064,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF4065;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(as_name_, 2);
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T7 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T5 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T6,T7);
  bindingF4065 = T5;
  if (bindingF4065 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T1 = CALL3(1,VARREF(YevalSmoduleYexport_bindingX),mod_,T2,bindingF4065);
    T0 = T1;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T3 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_309),name_,T4);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreload_modules) {
  P T0;
LINK_STACK();
  T0 = (P)YPbuild_runtime_modules(VARREF(YevalSmoduleYreloader_do_create_module),VARREF(YevalSmoduleYreloader_do_use_module),VARREF(YevalSmoduleYreloader_do_runtime_binding),VARREF(YevalSmoduleYreloader_do_other_binding),VARREF(YevalSmoduleYreloader_do_dynamic_binding));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYfab_static_global_environment) {
  P module_,module_loader_,allow_foreign_namesQ_;
  P new_envF4066;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_module),module_,VARREF(YevalSmoduleYenvironment_module_loader),module_loader_,VARREF(YevalSmoduleYenvironment_next),VARREF(YevalSmoduleYDnul_static_environment),VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSmoduleYenvironment_bindings),T1);
  new_envF4066 = T0;
UNLINK_STACK();
  RET(new_envF4066);
}

LOCCODEDEF(fun_166) {
  P name_,binding_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(binding_, 1);
  T2 = CALL2(1,VARREF(YgooScolsScolYmemQ),FREEREF(0),name_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),binding_,FREEREF(1));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYfab_subset_environment) {
  P module_,src_module_,excluded_;
  P new_envF4068;
  P loaderF4067;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),src_module_);
  T3 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),T4);
  loaderF4067 = T3;
  T2 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),module_,loaderF4067,YPfalse);
  new_envF4068 = T2;
  T0 = FUNFAB(fun_166,2,excluded_,new_envF4068);
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
UNLINK_STACK();
  RET(new_envF4068);
}

FUNCODEDEF(YevalSmoduleYwalk_bindings) {
  P fun_,mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(fun_, 0);
  ARG(mod_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),mod_);
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)1000));
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)10));
  T0 = CALL4(1,VARREF(YevalSmoduleYwalk_bindingsT),fun_,T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYwalk_bindingsT) {
  P f_,env_,walkedQ_,mods_;
  P bF4072;
  P x_1493F4071;
  P modF4070;
  P x_1491F4069;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  ARG(walkedQ_, 2);
  ARG(mods_, 3);
  T12 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),env_);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  x_1491F4069 = T11;
  LOOP_178: {
    P a178_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1491F4069);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1491F4069);
      modF4070 = T10;
      T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),mods_,modF4070,YPfalse);
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,mods_,modF4070);
        T7 = CALL1(1,VARREF(YevalSmoduleYmodule_name),modF4070);
        T6 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),T7);
        T5 = CALL4(1,VARREF(YevalSmoduleYwalk_bindingsT),f_,T6,walkedQ_,mods_);
      } else {
      }
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1491F4069);
      a178_0 = T9;
      x_1491F4069 = a178_0;
      goto LOOP_178;
      T0 = T8;
    } else {
      T0 = YPfalse;
    }
  }
  T23 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),env_);
  T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
  x_1493F4071 = T22;
  LOOP_179: {
    P a179_0;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1493F4071);
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1493F4071);
      bF4072 = T21;
      T17 = CALL3(1,VARREF(YgooScolsScolYelt_or),walkedQ_,bF4072,YPfalse);
      T16 = CALL1(1,VARREF(Ynot),T17);
      if (T16 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,walkedQ_,bF4072);
        T18 = CALL1(0,f_,bF4072);
      } else {
      }
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1493F4071);
      a179_0 = T20;
      x_1493F4071 = a179_0;
      goto LOOP_179;
      T13 = T19;
    } else {
      T13 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T13);
}

P YevalSmoduleY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115;
DEFCREGS();
  DYNDEFSET(YevalSmoduleYTdynamic_compilationQT,YPfalse);
  lit_0 = YPPsym((P)"<namespace-error>");
  T2 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcompiler_errorG),T2);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YevalSmoduleYLnamespace_errorG,T0);
  lit_1 = YPPsym((P)"namespace-error");
  lit_2 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_namespace_error_0 = YPfab_met(FUNCODEREF(fun_namespace_error_0),T3,LITREF(lit_1),LITREF(lit_2),sloc(14),YPfalse);
  T5 = VARREF_OR(YevalSmoduleYnamespace_error,YPfalse);
  T6 = fun_namespace_error_0;
  T4 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T5,T6);
  VARSET(YevalSmoduleYnamespace_error,T4);
  lit_3 = YPPsym((P)"goo/boot");
  VARSET(YevalSmoduleYDgoo_boot_module_name,LITREF(lit_3));
  VARSET(YevalSmoduleYLbinding_nameG,VARREF(YLanyG));
  lit_4 = YPPsym((P)"<binding>");
  T8 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T7 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_4),T8);
  VARSET(YevalSmoduleYLbindingG,T7);
  lit_5 = YPPsym((P)"binding-name");
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_name_1 = YPfab_met(FUNCODEREF(fun_binding_name_1),T9,LITREF(lit_5),LITREF(lit_6),sloc(31),YPfalse);
  T11 = VARREF_OR(YevalSmoduleYbinding_name,YPfalse);
  T12 = fun_binding_name_1;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSmoduleYbinding_name,T10);
  lit_7 = YPPsym((P)"binding-name-setter");
  lit_8 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbinding_nameG),VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_2 = YPfab_met(FUNCODEREF(fun_binding_name_setter_2),T13,LITREF(lit_7),LITREF(lit_8),sloc(31),YPfalse);
  T15 = VARREF_OR(YevalSmoduleYbinding_name_setter,YPfalse);
  T16 = fun_binding_name_setter_2;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalSmoduleYbinding_name_setter,T14);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLbindingG),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSmoduleYbinding_name_setter),VARREF(YevalSmoduleYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_9 = YPPsym((P)"binding-mangled-name");
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_3 = YPfab_met(FUNCODEREF(fun_binding_mangled_name_3),T17,LITREF(lit_9),LITREF(lit_10),sloc(32),YPfalse);
  T19 = VARREF_OR(YevalSmoduleYbinding_mangled_name,YPfalse);
  T20 = fun_binding_mangled_name_3;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YevalSmoduleYbinding_mangled_name,T18);
  lit_11 = YPPsym((P)"binding-mangled-name-setter");
  lit_12 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T21 = YPfab_sig(YPPlist(2,T22,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_4 = YPfab_met(FUNCODEREF(fun_binding_mangled_name_setter_4),T21,LITREF(lit_11),LITREF(lit_12),sloc(32),YPfalse);
  T24 = VARREF_OR(YevalSmoduleYbinding_mangled_name_setter,YPfalse);
  T25 = fun_binding_mangled_name_setter_4;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSmoduleYbinding_mangled_name_setter,T23);
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T26,YPfalse,LITREF(lit_13),sloc(32),YPfalse);
  T27 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T28 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLbindingG),VARREF(YevalSmoduleYbinding_mangled_name),VARREF(YevalSmoduleYbinding_mangled_name_setter),T27,T28);
  lit_14 = YPPsym((P)"binding-type");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_6 = YPfab_met(FUNCODEREF(fun_binding_type_6),T29,LITREF(lit_14),LITREF(lit_15),sloc(33),YPfalse);
  T31 = VARREF_OR(YevalSmoduleYbinding_type,YPfalse);
  T32 = fun_binding_type_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSmoduleYbinding_type,T30);
  lit_16 = YPPsym((P)"binding-type-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_7 = YPfab_met(FUNCODEREF(fun_binding_type_setter_7),T33,LITREF(lit_16),LITREF(lit_17),sloc(33),YPfalse);
  T35 = VARREF_OR(YevalSmoduleYbinding_type_setter,YPfalse);
  T36 = fun_binding_type_setter_7;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSmoduleYbinding_type_setter,T34);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLbindingG),VARREF(YevalSmoduleYbinding_type),VARREF(YevalSmoduleYbinding_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"binding-inferred-type");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_8 = YPfab_met(FUNCODEREF(fun_binding_inferred_type_8),T37,LITREF(lit_18),LITREF(lit_19),sloc(34),YPfalse);
  T39 = VARREF_OR(YevalSmoduleYbinding_inferred_type,YPfalse);
  T40 = fun_binding_inferred_type_8;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSmoduleYbinding_inferred_type,T38);
  lit_20 = YPPsym((P)"binding-inferred-type-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_9 = YPfab_met(FUNCODEREF(fun_binding_inferred_type_setter_9),T41,LITREF(lit_20),LITREF(lit_21),sloc(34),YPfalse);
  T43 = VARREF_OR(YevalSmoduleYbinding_inferred_type_setter,YPfalse);
  T44 = fun_binding_inferred_type_setter_9;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSmoduleYbinding_inferred_type_setter,T42);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T45,YPfalse,LITREF(lit_22),sloc(34),YPfalse);
  T46 = fun_10;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLbindingG),VARREF(YevalSmoduleYbinding_inferred_type),VARREF(YevalSmoduleYbinding_inferred_type_setter),VARREF(YLanyG),T46);
  lit_23 = YPPsym((P)"<global-box>");
  T48 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T47 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_23),T48);
  VARSET(YevalSmoduleYLglobal_boxG,T47);
  lit_24 = YPPsym((P)"global-box-value");
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_11 = YPfab_met(FUNCODEREF(fun_global_box_value_11),T49,LITREF(lit_24),LITREF(lit_25),sloc(39),YPfalse);
  T51 = VARREF_OR(YevalSmoduleYglobal_box_value,YPfalse);
  T52 = fun_global_box_value_11;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSmoduleYglobal_box_value,T50);
  lit_26 = YPPsym((P)"global-box-value-setter");
  lit_27 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_12 = YPfab_met(FUNCODEREF(fun_global_box_value_setter_12),T53,LITREF(lit_26),LITREF(lit_27),sloc(39),YPfalse);
  T55 = VARREF_OR(YevalSmoduleYglobal_box_value_setter,YPfalse);
  T56 = fun_global_box_value_setter_12;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSmoduleYglobal_box_value_setter,T54);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLglobal_boxG),VARREF(YevalSmoduleYglobal_box_value),VARREF(YevalSmoduleYglobal_box_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_28 = YPPsym((P)"<module-binding>");
  T59 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSdependencyYLdependableG),Ynil);
  T58 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLbindingG),T59);
  T57 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_28),T58);
  VARSET(YevalSmoduleYLmodule_bindingG,T57);
  lit_29 = YPPsym((P)"binding-kind");
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_kind_13 = YPfab_met(FUNCODEREF(fun_binding_kind_13),T60,LITREF(lit_29),LITREF(lit_30),sloc(43),YPfalse);
  T62 = VARREF_OR(YevalSmoduleYbinding_kind,YPfalse);
  T63 = fun_binding_kind_13;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSmoduleYbinding_kind,T61);
  lit_31 = YPPsym((P)"binding-kind-setter");
  lit_32 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_14 = YPfab_met(FUNCODEREF(fun_binding_kind_setter_14),T64,LITREF(lit_31),LITREF(lit_32),sloc(43),YPfalse);
  T66 = VARREF_OR(YevalSmoduleYbinding_kind_setter,YPfalse);
  T67 = fun_binding_kind_setter_14;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSmoduleYbinding_kind_setter,T65);
  lit_33 = YPPlist(1,YPPsym((P)"_x"));
  lit_34 = YPPsym((P)"global");
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T68,YPfalse,LITREF(lit_33),sloc(43),YPfalse);
  T69 = fun_15;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),VARREF(YevalSmoduleYbinding_kind_setter),VARREF(YLanyG),T69);
  lit_35 = YPPsym((P)"binding-module");
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_16 = YPfab_met(FUNCODEREF(fun_binding_module_16),T70,LITREF(lit_35),LITREF(lit_36),sloc(44),YPfalse);
  T72 = VARREF_OR(YevalSmoduleYbinding_module,YPfalse);
  T73 = fun_binding_module_16;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSmoduleYbinding_module,T71);
  lit_37 = YPPsym((P)"binding-module-setter");
  lit_38 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_setter_17 = YPfab_met(FUNCODEREF(fun_binding_module_setter_17),T74,LITREF(lit_37),LITREF(lit_38),sloc(44),YPfalse);
  T76 = VARREF_OR(YevalSmoduleYbinding_module_setter,YPfalse);
  T77 = fun_binding_module_setter_17;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSmoduleYbinding_module_setter,T75);
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T78,YPfalse,LITREF(lit_39),sloc(44),YPfalse);
  T79 = fun_18;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_module),VARREF(YevalSmoduleYbinding_module_setter),VARREF(YLanyG),T79);
  lit_40 = YPPsym((P)"binding-free?");
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_19 = YPfab_met(FUNCODEREF(fun_binding_freeQ_19),T80,LITREF(lit_40),LITREF(lit_41),sloc(45),YPfalse);
  T82 = VARREF_OR(YevalSmoduleYbinding_freeQ,YPfalse);
  T83 = fun_binding_freeQ_19;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSmoduleYbinding_freeQ,T81);
  lit_42 = YPPsym((P)"binding-free?-setter");
  lit_43 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_20 = YPfab_met(FUNCODEREF(fun_binding_freeQ_setter_20),T84,LITREF(lit_42),LITREF(lit_43),sloc(45),YPfalse);
  T86 = VARREF_OR(YevalSmoduleYbinding_freeQ_setter,YPfalse);
  T87 = fun_binding_freeQ_setter_20;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSmoduleYbinding_freeQ_setter,T85);
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPfab_met(FUNCODEREF(fun_21),T88,YPfalse,LITREF(lit_44),sloc(45),YPfalse);
  T89 = fun_21;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_freeQ),VARREF(YevalSmoduleYbinding_freeQ_setter),VARREF(YLlogG),T89);
  lit_45 = YPPsym((P)"binding-info");
  lit_46 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_22 = YPfab_met(FUNCODEREF(fun_binding_info_22),T90,LITREF(lit_45),LITREF(lit_46),sloc(46),YPfalse);
  T92 = VARREF_OR(YevalSmoduleYbinding_info,YPfalse);
  T93 = fun_binding_info_22;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSmoduleYbinding_info,T91);
  lit_47 = YPPsym((P)"binding-info-setter");
  lit_48 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_23 = YPfab_met(FUNCODEREF(fun_binding_info_setter_23),T94,LITREF(lit_47),LITREF(lit_48),sloc(46),YPfalse);
  T96 = VARREF_OR(YevalSmoduleYbinding_info_setter,YPfalse);
  T97 = fun_binding_info_setter_23;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSmoduleYbinding_info_setter,T95);
  lit_49 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T98,YPfalse,LITREF(lit_49),sloc(46),YPfalse);
  T99 = fun_24;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_info),VARREF(YevalSmoduleYbinding_info_setter),VARREF(YLanyG),T99);
  lit_50 = YPPsym((P)"binding-prop");
  lit_51 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_prop_25 = YPfab_met(FUNCODEREF(fun_binding_prop_25),T100,LITREF(lit_50),LITREF(lit_51),sloc(47),YPfalse);
  T102 = VARREF_OR(YevalSmoduleYbinding_prop,YPfalse);
  T103 = fun_binding_prop_25;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSmoduleYbinding_prop,T101);
  lit_52 = YPPsym((P)"binding-prop-setter");
  lit_53 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_prop_setter_26 = YPfab_met(FUNCODEREF(fun_binding_prop_setter_26),T104,LITREF(lit_52),LITREF(lit_53),sloc(47),YPfalse);
  T106 = VARREF_OR(YevalSmoduleYbinding_prop_setter,YPfalse);
  T107 = fun_binding_prop_setter_26;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSmoduleYbinding_prop_setter,T105);
  lit_54 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T108,YPfalse,LITREF(lit_54),sloc(47),YPfalse);
  T109 = fun_27;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_prop),VARREF(YevalSmoduleYbinding_prop_setter),VARREF(YLanyG),T109);
  lit_55 = YPPsym((P)"binding-module-name");
  lit_56 = YPPlist(1,YPPsym((P)"b"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_binding_module_name_28 = YPfab_met(FUNCODEREF(fun_binding_module_name_28),T110,LITREF(lit_55),LITREF(lit_56),sloc(49),YPfalse);
  T112 = VARREF_OR(YevalSmoduleYbinding_module_name,YPfalse);
  T113 = fun_binding_module_name_28;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSmoduleYbinding_module_name,T111);
  VARSET(YevalSmoduleYbinding_global_box,VARREF(YevalSmoduleYbinding_info));
  VARSET(YevalSmoduleYbinding_global_box_setter,VARREF(YevalSmoduleYbinding_info_setter));
  T115 = VARSET(YevalSmoduleYbinding_locative,VARREF(YevalSmoduleYbinding_info));
  T114 = T115;
  return T114;
}

P YevalSmoduleY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130;
DEFCREGS();
  VARSET(YevalSmoduleYbinding_locative_setter,VARREF(YevalSmoduleYbinding_info_setter));
  VARSET(YevalSmoduleYbinding_handler,VARREF(YevalSmoduleYbinding_info));
  VARSET(YevalSmoduleYbinding_handler_setter,VARREF(YevalSmoduleYbinding_info_setter));
  lit_57 = YPPsym((P)"<static-environment>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_57),T1);
  VARSET(YevalSmoduleYLstatic_environmentG,T0);
  lit_58 = YPPsym((P)"environment-next");
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_next_29 = YPfab_met(FUNCODEREF(fun_environment_next_29),T2,LITREF(lit_58),LITREF(lit_59),sloc(88),YPfalse);
  T4 = VARREF_OR(YevalSmoduleYenvironment_next,YPfalse);
  T5 = fun_environment_next_29;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSmoduleYenvironment_next,T3);
  lit_60 = YPPsym((P)"environment-next-setter");
  lit_61 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_30 = YPfab_met(FUNCODEREF(fun_environment_next_setter_30),T6,LITREF(lit_60),LITREF(lit_61),sloc(88),YPfalse);
  T8 = VARREF_OR(YevalSmoduleYenvironment_next_setter,YPfalse);
  T9 = fun_environment_next_setter_30;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSmoduleYenvironment_next_setter,T7);
  lit_62 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T10,YPfalse,LITREF(lit_62),sloc(88),YPfalse);
  T11 = fun_31;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YevalSmoduleYenvironment_next),VARREF(YevalSmoduleYenvironment_next_setter),VARREF(YLanyG),T11);
  lit_63 = YPPsym((P)"environment-bindings");
  lit_64 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_32 = YPfab_met(FUNCODEREF(fun_environment_bindings_32),T12,LITREF(lit_63),LITREF(lit_64),sloc(89),YPfalse);
  T14 = VARREF_OR(YevalSmoduleYenvironment_bindings,YPfalse);
  T15 = fun_environment_bindings_32;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSmoduleYenvironment_bindings,T13);
  lit_65 = YPPsym((P)"environment-bindings-setter");
  lit_66 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_33 = YPfab_met(FUNCODEREF(fun_environment_bindings_setter_33),T16,LITREF(lit_65),LITREF(lit_66),sloc(89),YPfalse);
  T18 = VARREF_OR(YevalSmoduleYenvironment_bindings_setter,YPfalse);
  T19 = fun_environment_bindings_setter_33;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSmoduleYenvironment_bindings_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YevalSmoduleYenvironment_bindings),VARREF(YevalSmoduleYenvironment_bindings_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_67 = YPPsym((P)"<static-global-environment>");
  T21 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLstatic_environmentG),Ynil);
  T20 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_67),T21);
  VARSET(YevalSmoduleYLstatic_global_environmentG,T20);
  lit_68 = YPPsym((P)"environment-module");
  lit_69 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_34 = YPfab_met(FUNCODEREF(fun_environment_module_34),T22,LITREF(lit_68),LITREF(lit_69),sloc(93),YPfalse);
  T24 = VARREF_OR(YevalSmoduleYenvironment_module,YPfalse);
  T25 = fun_environment_module_34;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSmoduleYenvironment_module,T23);
  lit_70 = YPPsym((P)"environment-module-setter");
  lit_71 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_35 = YPfab_met(FUNCODEREF(fun_environment_module_setter_35),T26,LITREF(lit_70),LITREF(lit_71),sloc(93),YPfalse);
  T28 = VARREF_OR(YevalSmoduleYenvironment_module_setter,YPfalse);
  T29 = fun_environment_module_setter_35;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSmoduleYenvironment_module_setter,T27);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_module),VARREF(YevalSmoduleYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_72 = YPPsym((P)"environment-module-loader");
  lit_73 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_36 = YPfab_met(FUNCODEREF(fun_environment_module_loader_36),T30,LITREF(lit_72),LITREF(lit_73),sloc(96),YPfalse);
  T32 = VARREF_OR(YevalSmoduleYenvironment_module_loader,YPfalse);
  T33 = fun_environment_module_loader_36;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSmoduleYenvironment_module_loader,T31);
  lit_74 = YPPsym((P)"environment-module-loader-setter");
  lit_75 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_37 = YPfab_met(FUNCODEREF(fun_environment_module_loader_setter_37),T34,LITREF(lit_74),LITREF(lit_75),sloc(96),YPfalse);
  T36 = VARREF_OR(YevalSmoduleYenvironment_module_loader_setter,YPfalse);
  T37 = fun_environment_module_loader_setter_37;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSmoduleYenvironment_module_loader_setter,T35);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_module_loader),VARREF(YevalSmoduleYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_76 = YPPsym((P)"environment-uses-modules");
  lit_77 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_38 = YPfab_met(FUNCODEREF(fun_environment_uses_modules_38),T38,LITREF(lit_76),LITREF(lit_77),sloc(98),YPfalse);
  T40 = VARREF_OR(YevalSmoduleYenvironment_uses_modules,YPfalse);
  T41 = fun_environment_uses_modules_38;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSmoduleYenvironment_uses_modules,T39);
  lit_78 = YPPsym((P)"environment-uses-modules-setter");
  lit_79 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_39 = YPfab_met(FUNCODEREF(fun_environment_uses_modules_setter_39),T42,LITREF(lit_78),LITREF(lit_79),sloc(98),YPfalse);
  T44 = VARREF_OR(YevalSmoduleYenvironment_uses_modules_setter,YPfalse);
  T45 = fun_environment_uses_modules_setter_39;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSmoduleYenvironment_uses_modules_setter,T43);
  lit_80 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T46,YPfalse,LITREF(lit_80),sloc(98),YPfalse);
  T47 = fun_40;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_uses_modules),VARREF(YevalSmoduleYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T47);
  lit_81 = YPPsym((P)"environment-allows-foreign-names?");
  lit_82 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_41 = YPfab_met(FUNCODEREF(fun_environment_allows_foreign_namesQ_41),T48,LITREF(lit_81),LITREF(lit_82),sloc(102),YPfalse);
  T50 = VARREF_OR(YevalSmoduleYenvironment_allows_foreign_namesQ,YPfalse);
  T51 = fun_environment_allows_foreign_namesQ_41;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSmoduleYenvironment_allows_foreign_namesQ,T49);
  lit_83 = YPPsym((P)"environment-allows-foreign-names?-setter");
  lit_84 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_42 = YPfab_met(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_42),T52,LITREF(lit_83),LITREF(lit_84),sloc(102),YPfalse);
  T54 = VARREF_OR(YevalSmoduleYenvironment_allows_foreign_namesQ_setter,YPfalse);
  T55 = fun_environment_allows_foreign_namesQ_setter_42;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSmoduleYenvironment_allows_foreign_namesQ_setter,T53);
  lit_85 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T56,YPfalse,LITREF(lit_85),sloc(102),YPfalse);
  T57 = fun_43;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ),VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ_setter),VARREF(YLlogG),T57);
  lit_86 = YPPsym((P)"<static-nul-environment>");
  T59 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLstatic_environmentG),Ynil);
  T58 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_86),T59);
  VARSET(YevalSmoduleYLstatic_nul_environmentG,T58);
  T60 = XCALL1(1,VARREF(Ynew),VARREF(YevalSmoduleYLstatic_nul_environmentG));
  VARSET(YevalSmoduleYDnul_static_environment,T60);
  lit_87 = YPPsym((P)"<static-local-environment>");
  T62 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLstatic_environmentG),Ynil);
  T61 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_87),T62);
  VARSET(YevalSmoduleYLstatic_local_environmentG,T61);
  lit_88 = YPPsym((P)"env-object-name");
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  lit_90 = YPPlist(1,YPPsym((P)"return"));
  lit_91 = YPPlist(1,YPPsym((P)"binding"));
  T65 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T65,YPfalse,LITREF(lit_91),sloc(119),YPfalse);
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T64,YPfalse,LITREF(lit_90),sloc(117),YPfalse);
  T63 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_46 = YPfab_met(FUNCODEREF(fun_env_object_name_46),T63,LITREF(lit_88),LITREF(lit_89),sloc(116),YPfalse);
  T67 = VARREF_OR(YevalSmoduleYenv_object_name,YPfalse);
  T68 = fun_env_object_name_46;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSmoduleYenv_object_name,T66);
  lit_92 = YPPsym((P)"frame-bindings");
  lit_93 = YPPlist(1,YPPsym((P)"env"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_47 = YPfab_met(FUNCODEREF(fun_frame_bindings_47),T69,LITREF(lit_92),LITREF(lit_93),sloc(129),YPfalse);
  T71 = VARREF_OR(YevalSmoduleYframe_bindings,YPfalse);
  T72 = fun_frame_bindings_47;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSmoduleYframe_bindings,T70);
  lit_94 = YPPsym((P)"do-static-global-bindings");
  lit_95 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_static_global_bindings_48 = YPfab_met(FUNCODEREF(fun_do_static_global_bindings_48),T73,LITREF(lit_94),LITREF(lit_95),sloc(134),YPfalse);
  T75 = VARREF_OR(YevalSmoduleYdo_static_global_bindings,YPfalse);
  T76 = fun_do_static_global_bindings_48;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSmoduleYdo_static_global_bindings,T74);
  lit_96 = YPPsym((P)"do-named-static-global-bindings");
  lit_97 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYdo_named_static_global_bindings = YPfab_met(FUNCODEREF(YevalSmoduleYdo_named_static_global_bindings),T77,LITREF(lit_96),LITREF(lit_97),sloc(141),YPfalse);
  T78 = YevalSmoduleYdo_named_static_global_bindings;
  VARSET(YevalSmoduleYdo_named_static_global_bindings,T78);
  lit_98 = YPPsym((P)"insert-global!");
  lit_99 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  T79 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_50 = YPfab_met(FUNCODEREF(fun_insert_globalX_50),T79,LITREF(lit_98),LITREF(lit_99),sloc(147),YPfalse);
  T81 = VARREF_OR(YevalSmoduleYinsert_globalX,YPfalse);
  T82 = fun_insert_globalX_50;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YevalSmoduleYinsert_globalX,T80);
  lit_100 = YPPsym((P)"insert-globals!");
  lit_101 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"r"));
  lit_102 = YPPlist(1,YPPsym((P)"b"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T84,YPfalse,LITREF(lit_102),sloc(152),YPfalse);
  T83 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_52 = YPfab_met(FUNCODEREF(fun_insert_globalsX_52),T83,LITREF(lit_100),LITREF(lit_101),sloc(151),YPfalse);
  T86 = VARREF_OR(YevalSmoduleYinsert_globalsX,YPfalse);
  T87 = fun_insert_globalsX_52;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSmoduleYinsert_globalsX,T85);
  lit_103 = YPPsym((P)"find-static-global-environment");
  lit_104 = YPPlist(1,YPPsym((P)"r"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_53 = YPfab_met(FUNCODEREF(fun_find_static_global_environment_53),T88,LITREF(lit_103),LITREF(lit_104),sloc(154),YPfalse);
  T90 = VARREF_OR(YevalSmoduleYfind_static_global_environment,YPfalse);
  T91 = fun_find_static_global_environment_53;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSmoduleYfind_static_global_environment,T89);
  lit_105 = YPPlist(1,YPPsym((P)"r"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_54 = YPfab_met(FUNCODEREF(fun_find_static_global_environment_54),T92,LITREF(lit_103),LITREF(lit_105),sloc(158),YPfalse);
  T94 = VARREF_OR(YevalSmoduleYfind_static_global_environment,YPfalse);
  T95 = fun_find_static_global_environment_54;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSmoduleYfind_static_global_environment,T93);
  lit_106 = YPPsym((P)"find-syntax-environment");
  lit_107 = YPPlist(1,YPPsym((P)"r"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_55 = YPfab_met(FUNCODEREF(fun_find_syntax_environment_55),T96,LITREF(lit_106),LITREF(lit_107),sloc(162),YPfalse);
  T98 = VARREF_OR(YevalSmoduleYfind_syntax_environment,YPfalse);
  T99 = fun_find_syntax_environment_55;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSmoduleYfind_syntax_environment,T97);
  lit_108 = YPPsym((P)"find-environment-module");
  lit_109 = YPPlist(1,YPPsym((P)"r"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_56 = YPfab_met(FUNCODEREF(fun_find_environment_module_56),T100,LITREF(lit_108),LITREF(lit_109),sloc(166),YPfalse);
  T102 = VARREF_OR(YevalSmoduleYfind_environment_module,YPfalse);
  T103 = fun_find_environment_module_56;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSmoduleYfind_environment_module,T101);
  lit_110 = YPPsym((P)"find-binding");
  lit_111 = YPPlist(2,YPPsym((P)"<binding-name>"),YPPsym((P)"<static-environment>"));
  T105 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T104 = YPfab_gen(T105,LITREF(lit_110),LITREF(lit_111),YPfalse);
  VARSET(YevalSmoduleYfind_binding,T104);
  lit_112 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"r"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_binding_57 = YPfab_met(FUNCODEREF(fun_find_binding_57),T106,LITREF(lit_110),LITREF(lit_112),sloc(171),YPfalse);
  T108 = VARREF_OR(YevalSmoduleYfind_binding,YPfalse);
  T109 = fun_find_binding_57;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSmoduleYfind_binding,T107);
  lit_113 = YPPsym((P)"<transaction>");
  T111 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T110 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_113),T111);
  VARSET(YevalSmoduleYLtransactionG,T110);
  lit_114 = YPPsym((P)"transaction-implemented-bindings");
  lit_115 = YPPlist(1,YPPsym((P)"_x"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_implemented_bindings_58 = YPfab_met(FUNCODEREF(fun_transaction_implemented_bindings_58),T112,LITREF(lit_114),LITREF(lit_115),sloc(226),YPfalse);
  T114 = VARREF_OR(YevalSmoduleYtransaction_implemented_bindings,YPfalse);
  T115 = fun_transaction_implemented_bindings_58;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalSmoduleYtransaction_implemented_bindings,T113);
  lit_116 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPfab_met(FUNCODEREF(fun_59),T116,YPfalse,LITREF(lit_116),sloc(226),YPfalse);
  T117 = fun_59;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLtransactionG),VARREF(YevalSmoduleYtransaction_implemented_bindings),YPfalse,VARREF(YgooScolsScolYLtabG),T117);
  lit_117 = YPPsym((P)"transaction-dependents");
  lit_118 = YPPlist(1,YPPsym((P)"_x"));
  T118 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_60 = YPfab_met(FUNCODEREF(fun_transaction_dependents_60),T118,LITREF(lit_117),LITREF(lit_118),sloc(227),YPfalse);
  T120 = VARREF_OR(YevalSmoduleYtransaction_dependents,YPfalse);
  T121 = fun_transaction_dependents_60;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSmoduleYtransaction_dependents,T119);
  lit_119 = YPPlist(1,YPPsym((P)"_x"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPfab_met(FUNCODEREF(fun_61),T122,YPfalse,LITREF(lit_119),sloc(227),YPfalse);
  T123 = fun_61;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLtransactionG),VARREF(YevalSmoduleYtransaction_dependents),YPfalse,VARREF(YgooScolsScolYLtabG),T123);
  DYNDEFSET(YevalSmoduleYTcurrent_subtransactionT,YPfalse);
  lit_120 = YPPsym((P)"transaction-register-implemented-binding");
  lit_121 = YPPlist(1,YPPsym((P)"b"));
  lit_122 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T124 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYtransaction_register_implemented_binding = YPfab_met(FUNCODEREF(YevalSmoduleYtransaction_register_implemented_binding),T124,LITREF(lit_120),LITREF(lit_121),sloc(231),YPfalse);
  T125 = YevalSmoduleYtransaction_register_implemented_binding;
  VARSET(YevalSmoduleYtransaction_register_implemented_binding,T125);
  lit_123 = YPPsym((P)"transaction-register-dependent");
  lit_124 = YPPlist(1,YPPsym((P)"d"));
  lit_125 = YPsb((P)"Can't register dependent (no subtransaction)");
  T128 = YPfab_sig(YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T127 = YevalSmoduleYtransaction_register_dependent = YPfab_met(FUNCODEREF(YevalSmoduleYtransaction_register_dependent),T128,LITREF(lit_123),LITREF(lit_124),sloc(237),YPfalse);
  T130 = YevalSmoduleYtransaction_register_dependent;
  T129 = VARSET(YevalSmoduleYtransaction_register_dependent,T130);
  T126 = T129;
  return T126;
}

P YevalSmoduleY___main_2___() {
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
  lit_126 = YPPsym((P)"transaction-nul?");
  lit_127 = YPPlist(1,YPPsym((P)"t"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSmoduleYtransaction_nulQ = YPfab_met(FUNCODEREF(YevalSmoduleYtransaction_nulQ),T0,LITREF(lit_126),LITREF(lit_127),sloc(242),YPfalse);
  T1 = YevalSmoduleYtransaction_nulQ;
  VARSET(YevalSmoduleYtransaction_nulQ,T1);
  lit_128 = YPPsym((P)"merge-transactions!");
  lit_129 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_130 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_131 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T4,YPfalse,LITREF(lit_130),sloc(257),YPfalse);
  T3 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_66 = YPfab_met(FUNCODEREF(fun_66),T3,YPfalse,LITREF(lit_131),sloc(258),YPfalse);
  T2 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLtransactionG),VARREF(YevalSmoduleYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLtransactionG),Ynil);
  YevalSmoduleYmerge_transactionsX = YPfab_met(FUNCODEREF(YevalSmoduleYmerge_transactionsX),T2,LITREF(lit_128),LITREF(lit_129),sloc(246),YPfalse);
  T5 = YevalSmoduleYmerge_transactionsX;
  VARSET(YevalSmoduleYmerge_transactionsX,T5);
  lit_132 = YPPsym((P)"roll-back-transaction");
  lit_133 = YPPlist(1,YPPsym((P)"t"));
  lit_134 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"junk"));
  lit_135 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"junk"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_68 = YPfab_met(FUNCODEREF(fun_68),T8,YPfalse,LITREF(lit_134),sloc(263),YPfalse);
  T7 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T7,YPfalse,LITREF(lit_135),sloc(266),YPfalse);
  T6 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYroll_back_transaction = YPfab_met(FUNCODEREF(YevalSmoduleYroll_back_transaction),T6,LITREF(lit_132),LITREF(lit_133),sloc(261),YPfalse);
  T9 = YevalSmoduleYroll_back_transaction;
  VARSET(YevalSmoduleYroll_back_transaction,T9);
  lit_136 = YPPsym((P)"call-with-subtransaction");
  lit_137 = YPPlist(2,YPPsym((P)"module"),YPPsym((P)"thunk"));
  lit_138 = Ynil;
  T12 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_71 = YPfab_met(FUNCODEREF(fun_71),T12,YPfalse,LITREF(lit_138),sloc(272),YPfalse);
  T11 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPfab_met(FUNCODEREF(fun_72),T11,YPfalse,LITREF(lit_138),sloc(282),YPfalse);
  T10 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYcall_with_subtransaction = YPfab_met(FUNCODEREF(YevalSmoduleYcall_with_subtransaction),T10,LITREF(lit_136),LITREF(lit_137),sloc(269),YPfalse);
  T13 = YevalSmoduleYcall_with_subtransaction;
  VARSET(YevalSmoduleYcall_with_subtransaction,T13);
  lit_139 = YPPlist(1,YPPsym((P)"exp"));
  lit_140 = YPPlist(1,YPPsym((P)"return"));
  lit_141 = YPPsym((P)"x-1487");
  lit_142 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_143 = YPPsym((P)"with-subtransaction");
  lit_144 = YPsb((P)"Match Pattern Failure");
  lit_145 = YPPsym((P)"fun");
  lit_146 = Ynil;
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1487_74 = YPfab_met(FUNCODEREF(fun_x_1487_74),T16,LITREF(lit_141),LITREF(lit_142),YPfalse,YPfalse);
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T15,YPfalse,LITREF(lit_140),YPfalse,YPfalse);
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPfab_met(FUNCODEREF(fun_76),T14,YPfalse,LITREF(lit_139),YPfalse,YPfalse);
  T17 = fun_76;
  YPmacro(YPPsym((P)"eval/module"),YPPsym((P)"with-subtransaction"),T17);
  lit_147 = YPPsym((P)"<module-loader>");
  T19 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T18 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_147),T19);
  VARSET(YevalSmoduleYLmodule_loaderG,T18);
  lit_148 = YPPsym((P)"module-loader-modules");
  lit_149 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_77 = YPfab_met(FUNCODEREF(fun_module_loader_modules_77),T20,LITREF(lit_148),LITREF(lit_149),sloc(317),YPfalse);
  T22 = VARREF_OR(YevalSmoduleYmodule_loader_modules,YPfalse);
  T23 = fun_module_loader_modules_77;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSmoduleYmodule_loader_modules,T21);
  lit_150 = YPPsym((P)"module-loader-modules-setter");
  lit_151 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_78 = YPfab_met(FUNCODEREF(fun_module_loader_modules_setter_78),T24,LITREF(lit_150),LITREF(lit_151),sloc(317),YPfalse);
  T26 = VARREF_OR(YevalSmoduleYmodule_loader_modules_setter,YPfalse);
  T27 = fun_module_loader_modules_setter_78;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSmoduleYmodule_loader_modules_setter,T25);
  lit_152 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T28,YPfalse,LITREF(lit_152),sloc(317),YPfalse);
  T29 = fun_79;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYmodule_loader_modules),VARREF(YevalSmoduleYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T29);
  lit_153 = YPPsym((P)"module-loader-stack");
  lit_154 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_80 = YPfab_met(FUNCODEREF(fun_module_loader_stack_80),T30,LITREF(lit_153),LITREF(lit_154),sloc(320),YPfalse);
  T32 = VARREF_OR(YevalSmoduleYmodule_loader_stack,YPfalse);
  T33 = fun_module_loader_stack_80;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSmoduleYmodule_loader_stack,T31);
  lit_155 = YPPsym((P)"module-loader-stack-setter");
  lit_156 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_81 = YPfab_met(FUNCODEREF(fun_module_loader_stack_setter_81),T34,LITREF(lit_155),LITREF(lit_156),sloc(320),YPfalse);
  T36 = VARREF_OR(YevalSmoduleYmodule_loader_stack_setter,YPfalse);
  T37 = fun_module_loader_stack_setter_81;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSmoduleYmodule_loader_stack_setter,T35);
  lit_157 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPfab_met(FUNCODEREF(fun_82),T38,YPfalse,LITREF(lit_157),sloc(320),YPfalse);
  T39 = fun_82;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYmodule_loader_stack),VARREF(YevalSmoduleYmodule_loader_stack_setter),VARREF(YLlstG),T39);
  lit_158 = YPPsym((P)"<module>");
  T41 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T40 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_158),T41);
  VARSET(YevalSmoduleYLmoduleG,T40);
  lit_159 = YPPsym((P)"module-name");
  lit_160 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_83 = YPfab_met(FUNCODEREF(fun_module_name_83),T42,LITREF(lit_159),LITREF(lit_160),sloc(325),YPfalse);
  T44 = VARREF_OR(YevalSmoduleYmodule_name,YPfalse);
  T45 = fun_module_name_83;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSmoduleYmodule_name,T43);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_name),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_161 = YPPsym((P)"module-mangled-name");
  lit_162 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_84 = YPfab_met(FUNCODEREF(fun_module_mangled_name_84),T46,LITREF(lit_161),LITREF(lit_162),sloc(326),YPfalse);
  T48 = VARREF_OR(YevalSmoduleYmodule_mangled_name,YPfalse);
  T49 = fun_module_mangled_name_84;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSmoduleYmodule_mangled_name,T47);
  lit_163 = YPPsym((P)"module-mangled-name-setter");
  lit_164 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T50 = YPfab_sig(YPPlist(2,T51,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_85 = YPfab_met(FUNCODEREF(fun_module_mangled_name_setter_85),T50,LITREF(lit_163),LITREF(lit_164),sloc(326),YPfalse);
  T53 = VARREF_OR(YevalSmoduleYmodule_mangled_name_setter,YPfalse);
  T54 = fun_module_mangled_name_setter_85;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSmoduleYmodule_mangled_name_setter,T52);
  lit_165 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPfab_met(FUNCODEREF(fun_86),T55,YPfalse,LITREF(lit_165),sloc(326),YPfalse);
  T56 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T57 = fun_86;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_mangled_name),VARREF(YevalSmoduleYmodule_mangled_name_setter),T56,T57);
  lit_166 = YPPsym((P)"module-mangled-string-name");
  lit_167 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_87 = YPfab_met(FUNCODEREF(fun_module_mangled_string_name_87),T58,LITREF(lit_166),LITREF(lit_167),sloc(327),YPfalse);
  T60 = VARREF_OR(YevalSmoduleYmodule_mangled_string_name,YPfalse);
  T61 = fun_module_mangled_string_name_87;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSmoduleYmodule_mangled_string_name,T59);
  lit_168 = YPPsym((P)"module-mangled-string-name-setter");
  lit_169 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T62 = YPfab_sig(YPPlist(2,T63,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_88 = YPfab_met(FUNCODEREF(fun_module_mangled_string_name_setter_88),T62,LITREF(lit_168),LITREF(lit_169),sloc(327),YPfalse);
  T65 = VARREF_OR(YevalSmoduleYmodule_mangled_string_name_setter,YPfalse);
  T66 = fun_module_mangled_string_name_setter_88;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSmoduleYmodule_mangled_string_name_setter,T64);
  lit_170 = YPPlist(1,YPPsym((P)"_x"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T67,YPfalse,LITREF(lit_170),sloc(327),YPfalse);
  T68 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T69 = fun_89;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_mangled_string_name),VARREF(YevalSmoduleYmodule_mangled_string_name_setter),T68,T69);
  lit_171 = YPPsym((P)"module-target-environment");
  lit_172 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_90 = YPfab_met(FUNCODEREF(fun_module_target_environment_90),T70,LITREF(lit_171),LITREF(lit_172),sloc(329),YPfalse);
  T72 = VARREF_OR(YevalSmoduleYmodule_target_environment,YPfalse);
  T73 = fun_module_target_environment_90;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSmoduleYmodule_target_environment,T71);
  lit_173 = YPPsym((P)"module-target-environment-setter");
  lit_174 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_91 = YPfab_met(FUNCODEREF(fun_module_target_environment_setter_91),T74,LITREF(lit_173),LITREF(lit_174),sloc(329),YPfalse);
  T76 = VARREF_OR(YevalSmoduleYmodule_target_environment_setter,YPfalse);
  T77 = fun_module_target_environment_setter_91;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSmoduleYmodule_target_environment_setter,T75);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_target_environment),VARREF(YevalSmoduleYmodule_target_environment_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_175 = YPPsym((P)"module-syntax-environment");
  lit_176 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_92 = YPfab_met(FUNCODEREF(fun_module_syntax_environment_92),T78,LITREF(lit_175),LITREF(lit_176),sloc(330),YPfalse);
  T80 = VARREF_OR(YevalSmoduleYmodule_syntax_environment,YPfalse);
  T81 = fun_module_syntax_environment_92;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSmoduleYmodule_syntax_environment,T79);
  lit_177 = YPPsym((P)"module-syntax-environment-setter");
  lit_178 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T82 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_93 = YPfab_met(FUNCODEREF(fun_module_syntax_environment_setter_93),T82,LITREF(lit_177),LITREF(lit_178),sloc(330),YPfalse);
  T84 = VARREF_OR(YevalSmoduleYmodule_syntax_environment_setter,YPfalse);
  T85 = fun_module_syntax_environment_setter_93;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSmoduleYmodule_syntax_environment_setter,T83);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_syntax_environment),VARREF(YevalSmoduleYmodule_syntax_environment_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_179 = YPPsym((P)"%module-exports");
  lit_180 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_94 = YPfab_met(FUNCODEREF(fun_Pmodule_exports_94),T86,LITREF(lit_179),LITREF(lit_180),sloc(332),YPfalse);
  T88 = VARREF_OR(YevalSmoduleYPmodule_exports,YPfalse);
  T89 = fun_Pmodule_exports_94;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSmoduleYPmodule_exports,T87);
  lit_181 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPfab_met(FUNCODEREF(fun_95),T90,YPfalse,LITREF(lit_181),sloc(332),YPfalse);
  T91 = fun_95;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYPmodule_exports),YPfalse,VARREF(YgooScolsScolYLtabG),T91);
  lit_182 = YPPsym((P)"module-data-processed?");
  lit_183 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_96 = YPfab_met(FUNCODEREF(fun_module_data_processedQ_96),T92,LITREF(lit_182),LITREF(lit_183),sloc(333),YPfalse);
  T94 = VARREF_OR(YevalSmoduleYmodule_data_processedQ,YPfalse);
  T95 = fun_module_data_processedQ_96;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSmoduleYmodule_data_processedQ,T93);
  lit_184 = YPPsym((P)"module-data-processed?-setter");
  lit_185 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_97 = YPfab_met(FUNCODEREF(fun_module_data_processedQ_setter_97),T96,LITREF(lit_184),LITREF(lit_185),sloc(333),YPfalse);
  T98 = VARREF_OR(YevalSmoduleYmodule_data_processedQ_setter,YPfalse);
  T99 = fun_module_data_processedQ_setter_97;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSmoduleYmodule_data_processedQ_setter,T97);
  lit_186 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPfab_met(FUNCODEREF(fun_98),T100,YPfalse,LITREF(lit_186),sloc(333),YPfalse);
  T101 = fun_98;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_data_processedQ),VARREF(YevalSmoduleYmodule_data_processedQ_setter),VARREF(YLlogG),T101);
  lit_187 = YPPsym((P)"module-runtime-data");
  lit_188 = YPPlist(1,YPPsym((P)"_x"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_99 = YPfab_met(FUNCODEREF(fun_module_runtime_data_99),T102,LITREF(lit_187),LITREF(lit_188),sloc(334),YPfalse);
  T104 = VARREF_OR(YevalSmoduleYmodule_runtime_data,YPfalse);
  T105 = fun_module_runtime_data_99;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSmoduleYmodule_runtime_data,T103);
  lit_189 = YPPsym((P)"module-runtime-data-setter");
  lit_190 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_100 = YPfab_met(FUNCODEREF(fun_module_runtime_data_setter_100),T106,LITREF(lit_189),LITREF(lit_190),sloc(334),YPfalse);
  T108 = VARREF_OR(YevalSmoduleYmodule_runtime_data_setter,YPfalse);
  T109 = fun_module_runtime_data_setter_100;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSmoduleYmodule_runtime_data_setter,T107);
  lit_191 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPfab_met(FUNCODEREF(fun_101),T110,YPfalse,LITREF(lit_191),sloc(334),YPfalse);
  T111 = fun_101;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_runtime_data),VARREF(YevalSmoduleYmodule_runtime_data_setter),VARREF(YLanyG),T111);
  lit_192 = YPPsym((P)"module-transaction");
  lit_193 = YPPlist(1,YPPsym((P)"_x"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_102 = YPfab_met(FUNCODEREF(fun_module_transaction_102),T112,LITREF(lit_192),LITREF(lit_193),sloc(335),YPfalse);
  T114 = VARREF_OR(YevalSmoduleYmodule_transaction,YPfalse);
  T115 = fun_module_transaction_102;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalSmoduleYmodule_transaction,T113);
  lit_194 = YPPsym((P)"module-transaction-setter");
  lit_195 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T116 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLtransactionG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_103 = YPfab_met(FUNCODEREF(fun_module_transaction_setter_103),T116,LITREF(lit_194),LITREF(lit_195),sloc(335),YPfalse);
  T118 = VARREF_OR(YevalSmoduleYmodule_transaction_setter,YPfalse);
  T119 = fun_module_transaction_setter_103;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalSmoduleYmodule_transaction_setter,T117);
  lit_196 = YPPlist(1,YPPsym((P)"_x"));
  T120 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPfab_met(FUNCODEREF(fun_104),T120,YPfalse,LITREF(lit_196),sloc(335),YPfalse);
  T121 = fun_104;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_transaction),VARREF(YevalSmoduleYmodule_transaction_setter),VARREF(YevalSmoduleYLtransactionG),T121);
  lit_197 = YPPsym((P)"module-referenced-bindings");
  lit_198 = YPPlist(1,YPPsym((P)"_x"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_referenced_bindings_105 = YPfab_met(FUNCODEREF(fun_module_referenced_bindings_105),T122,LITREF(lit_197),LITREF(lit_198),sloc(336),YPfalse);
  T124 = VARREF_OR(YevalSmoduleYmodule_referenced_bindings,YPfalse);
  T125 = fun_module_referenced_bindings_105;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSmoduleYmodule_referenced_bindings,T123);
  lit_199 = YPPlist(1,YPPsym((P)"_x"));
  T126 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPfab_met(FUNCODEREF(fun_106),T126,YPfalse,LITREF(lit_199),sloc(336),YPfalse);
  T127 = fun_106;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_referenced_bindings),YPfalse,VARREF(YgooScolsScolYLtabG),T127);
  lit_200 = YPPsym((P)"module-uses-c-files");
  lit_201 = YPPlist(1,YPPsym((P)"_x"));
  T128 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_107 = YPfab_met(FUNCODEREF(fun_module_uses_c_files_107),T128,LITREF(lit_200),LITREF(lit_201),sloc(337),YPfalse);
  T130 = VARREF_OR(YevalSmoduleYmodule_uses_c_files,YPfalse);
  T131 = fun_module_uses_c_files_107;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSmoduleYmodule_uses_c_files,T129);
  lit_202 = YPPlist(1,YPPsym((P)"_x"));
  T132 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPfab_met(FUNCODEREF(fun_108),T132,YPfalse,LITREF(lit_202),sloc(337),YPfalse);
  T133 = fun_108;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_uses_c_files),YPfalse,VARREF(YgooScolsSvecYLvecG),T133);
  lit_203 = YPPsym((P)"module-c-forms");
  lit_204 = YPPlist(1,YPPsym((P)"_x"));
  T134 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_c_forms_109 = YPfab_met(FUNCODEREF(fun_module_c_forms_109),T134,LITREF(lit_203),LITREF(lit_204),sloc(338),YPfalse);
  T136 = VARREF_OR(YevalSmoduleYmodule_c_forms,YPfalse);
  T137 = fun_module_c_forms_109;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSmoduleYmodule_c_forms,T135);
  T138 = YPfalse;
  return T138;
}

P YevalSmoduleY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116;
DEFCREGS();
  lit_205 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPfab_met(FUNCODEREF(fun_110),T0,YPfalse,LITREF(lit_205),sloc(338),YPfalse);
  T1 = fun_110;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_c_forms),YPfalse,VARREF(YgooScolsSvecYLvecG),T1);
  lit_206 = YPPsym((P)"module-uses-c-includes");
  lit_207 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_111 = YPfab_met(FUNCODEREF(fun_module_uses_c_includes_111),T2,LITREF(lit_206),LITREF(lit_207),sloc(339),YPfalse);
  T4 = VARREF_OR(YevalSmoduleYmodule_uses_c_includes,YPfalse);
  T5 = fun_module_uses_c_includes_111;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSmoduleYmodule_uses_c_includes,T3);
  lit_208 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPfab_met(FUNCODEREF(fun_112),T6,YPfalse,LITREF(lit_208),sloc(339),YPfalse);
  T7 = fun_112;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_uses_c_includes),YPfalse,VARREF(YgooScolsSvecYLvecG),T7);
  lit_209 = YPPsym((P)"module-uses-c-libraries");
  lit_210 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_113 = YPfab_met(FUNCODEREF(fun_module_uses_c_libraries_113),T8,LITREF(lit_209),LITREF(lit_210),sloc(340),YPfalse);
  T10 = VARREF_OR(YevalSmoduleYmodule_uses_c_libraries,YPfalse);
  T11 = fun_module_uses_c_libraries_113;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSmoduleYmodule_uses_c_libraries,T9);
  lit_211 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPfab_met(FUNCODEREF(fun_114),T12,YPfalse,LITREF(lit_211),sloc(340),YPfalse);
  T13 = fun_114;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_uses_c_libraries),YPfalse,VARREF(YgooScolsSvecYLvecG),T13);
  lit_212 = YPPsym((P)"ensure-module-data");
  lit_213 = YPPlist(1,YPPsym((P)"module"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_212),LITREF(lit_213),YPfalse);
  VARSET(YevalSmoduleYensure_module_data,T14);
  lit_214 = YPPsym((P)"module-exports");
  lit_215 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_115 = YPfab_met(FUNCODEREF(fun_module_exports_115),T16,LITREF(lit_214),LITREF(lit_215),sloc(344),YPfalse);
  T18 = VARREF_OR(YevalSmoduleYmodule_exports,YPfalse);
  T19 = fun_module_exports_115;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSmoduleYmodule_exports,T17);
  lit_216 = YPPsym((P)"import-global!");
  lit_217 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"env"));
  lit_218 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T20 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYimport_globalX = YPfab_met(FUNCODEREF(YevalSmoduleYimport_globalX),T20,LITREF(lit_216),LITREF(lit_217),sloc(349),YPfalse);
  T21 = YevalSmoduleYimport_globalX;
  VARSET(YevalSmoduleYimport_globalX,T21);
  lit_219 = YPPsym((P)"insert-and-mangle-global!");
  lit_220 = YPPlist(3,YPPsym((P)"binding"),YPPsym((P)"mangle-prefix"),YPPsym((P)"r"));
  T22 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_insert_and_mangle_globalX_117 = YPfab_met(FUNCODEREF(fun_insert_and_mangle_globalX_117),T22,LITREF(lit_219),LITREF(lit_220),sloc(357),YPfalse);
  T24 = VARREF_OR(YevalSmoduleYinsert_and_mangle_globalX,YPfalse);
  T25 = fun_insert_and_mangle_globalX_117;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSmoduleYinsert_and_mangle_globalX,T23);
  lit_221 = YPPsym((P)"import-and-mangle-global!");
  lit_222 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"mangle-prefix"),YPPsym((P)"env"));
  lit_223 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T26 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLstrG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYimport_and_mangle_globalX = YPfab_met(FUNCODEREF(YevalSmoduleYimport_and_mangle_globalX),T26,LITREF(lit_221),LITREF(lit_222),sloc(363),YPfalse);
  T27 = YevalSmoduleYimport_and_mangle_globalX;
  VARSET(YevalSmoduleYimport_and_mangle_globalX,T27);
  lit_224 = YPPsym((P)"set-module-environments");
  lit_225 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"syntax-env"),YPPsym((P)"target-env"));
  T28 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYset_module_environments = YPfab_met(FUNCODEREF(YevalSmoduleYset_module_environments),T28,LITREF(lit_224),LITREF(lit_225),sloc(385),YPfalse);
  T29 = YevalSmoduleYset_module_environments;
  VARSET(YevalSmoduleYset_module_environments,T29);
  lit_226 = YPPsym((P)"do-module-loader-modules");
  lit_227 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"loader"));
  lit_228 = YPPlist(1,YPPsym((P)"mod"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPfab_met(FUNCODEREF(fun_120),T31,YPfalse,LITREF(lit_228),sloc(392),YPfalse);
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYdo_module_loader_modules = YPfab_met(FUNCODEREF(YevalSmoduleYdo_module_loader_modules),T30,LITREF(lit_226),LITREF(lit_227),sloc(391),YPfalse);
  T32 = YevalSmoduleYdo_module_loader_modules;
  VARSET(YevalSmoduleYdo_module_loader_modules,T32);
  lit_229 = YPPsym((P)"module-loader-module-type");
  lit_230 = YPPlist(1,YPPsym((P)"loader"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_122 = YPfab_met(FUNCODEREF(fun_module_loader_module_type_122),T33,LITREF(lit_229),LITREF(lit_230),sloc(397),YPfalse);
  T35 = VARREF_OR(YevalSmoduleYmodule_loader_module_type,YPfalse);
  T36 = fun_module_loader_module_type_122;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSmoduleYmodule_loader_module_type,T34);
  lit_231 = YPPsym((P)"register-module!");
  lit_232 = YPPlist(2,YPPsym((P)"module-loader"),YPPsym((P)"mod"));
  T37 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmodule_loaderG),Ynil);
  YevalSmoduleYregister_moduleX = YPfab_met(FUNCODEREF(YevalSmoduleYregister_moduleX),T37,LITREF(lit_231),LITREF(lit_232),sloc(401),YPfalse);
  T38 = YevalSmoduleYregister_moduleX;
  VARSET(YevalSmoduleYregister_moduleX,T38);
  lit_233 = YPPsym((P)"probe-module");
  lit_234 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSmoduleYprobe_module = YPfab_met(FUNCODEREF(YevalSmoduleYprobe_module),T39,LITREF(lit_233),LITREF(lit_234),sloc(407),YPfalse);
  T40 = YevalSmoduleYprobe_module;
  VARSET(YevalSmoduleYprobe_module,T40);
  lit_235 = YPPsym((P)"load-and-register-module");
  lit_236 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_237 = YPsb((P)"  ");
  lit_238 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_239 = YPsb((P)"%s[Loading module %s...\n");
  lit_240 = YPsb((P)"%s]\n");
  T43 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_125 = YPfab_met(FUNCODEREF(fun_125),T43,YPfalse,LITREF(lit_138),sloc(428),YPfalse);
  T42 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_126 = YPfab_met(FUNCODEREF(fun_126),T42,YPfalse,LITREF(lit_138),sloc(429),YPfalse);
  T41 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSmoduleYload_and_register_module = YPfab_met(FUNCODEREF(YevalSmoduleYload_and_register_module),T41,LITREF(lit_235),LITREF(lit_236),sloc(412),YPfalse);
  T44 = YevalSmoduleYload_and_register_module;
  VARSET(YevalSmoduleYload_and_register_module,T44);
  lit_241 = YPPsym((P)"load-module");
  lit_242 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  T45 = YPfab_gen(T46,LITREF(lit_241),LITREF(lit_242),YPfalse);
  VARSET(YevalSmoduleYload_module,T45);
  lit_243 = YPPsym((P)"export-binding!");
  lit_244 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"name"),YPPsym((P)"binding"));
  lit_245 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T48 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T47 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYLbinding_nameG),VARREF(YLanyG)),YPfalse,YPint((P)3),T48,Ynil);
  YevalSmoduleYexport_bindingX = YPfab_met(FUNCODEREF(YevalSmoduleYexport_bindingX),T47,LITREF(lit_243),LITREF(lit_244),sloc(445),YPfalse);
  T49 = YevalSmoduleYexport_bindingX;
  VARSET(YevalSmoduleYexport_bindingX,T49);
  lit_246 = YPPsym((P)"binding-native-to?");
  lit_247 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"module"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSmoduleYbinding_native_toQ = YPfab_met(FUNCODEREF(YevalSmoduleYbinding_native_toQ),T50,LITREF(lit_246),LITREF(lit_247),sloc(460),YPfalse);
  T51 = YevalSmoduleYbinding_native_toQ;
  VARSET(YevalSmoduleYbinding_native_toQ,T51);
  lit_248 = YPPsym((P)"report-undefined-global-bindings");
  lit_249 = YPPlist(1,YPPsym((P)"mod"));
  lit_250 = YPPlist(1,YPPsym((P)"binding"));
  lit_251 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPfab_met(FUNCODEREF(fun_130),T53,YPfalse,LITREF(lit_250),sloc(466),YPfalse);
  T52 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYreport_undefined_global_bindings = YPfab_met(FUNCODEREF(YevalSmoduleYreport_undefined_global_bindings),T52,LITREF(lit_248),LITREF(lit_249),sloc(464),YPfalse);
  T54 = YevalSmoduleYreport_undefined_global_bindings;
  VARSET(YevalSmoduleYreport_undefined_global_bindings,T54);
  lit_252 = YPPsym((P)"compute-transitive-users");
  lit_253 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_254 = YPPsym((P)"add-user");
  lit_255 = YPPlist(1,YPPsym((P)"modname"));
  lit_256 = YPPlist(1,YPPsym((P)"mod"));
  lit_257 = YPPlist(1,YPPsym((P)"uses-mod"));
  lit_258 = YPPlist(1,YPPsym((P)"v"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_132 = YPfab_met(FUNCODEREF(fun_132),T59,YPfalse,LITREF(lit_257),sloc(485),YPfalse);
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPfab_met(FUNCODEREF(fun_133),T58,YPfalse,LITREF(lit_256),sloc(483),YPfalse);
  T57 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_134 = YPfab_met(FUNCODEREF(fun_add_user_134),T57,LITREF(lit_254),LITREF(lit_255),sloc(479),YPfalse);
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPfab_met(FUNCODEREF(fun_135),T56,YPfalse,LITREF(lit_258),sloc(491),YPfalse);
  T55 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSmoduleYcompute_transitive_users = YPfab_met(FUNCODEREF(YevalSmoduleYcompute_transitive_users),T55,LITREF(lit_252),LITREF(lit_253),sloc(476),YPfalse);
  T60 = YevalSmoduleYcompute_transitive_users;
  VARSET(YevalSmoduleYcompute_transitive_users,T60);
  lit_259 = YPPsym((P)"remove-module-internal!");
  lit_260 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  T61 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYremove_module_internalX = YPfab_met(FUNCODEREF(YevalSmoduleYremove_module_internalX),T61,LITREF(lit_259),LITREF(lit_260),sloc(496),YPfalse);
  T62 = YevalSmoduleYremove_module_internalX;
  VARSET(YevalSmoduleYremove_module_internalX,T62);
  lit_261 = YPPsym((P)"remove-modules-by-name!");
  lit_262 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_263 = YPPlist(1,YPPsym((P)"modname"));
  T65 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPfab_met(FUNCODEREF(fun_138),T65,YPfalse,LITREF(lit_263),sloc(503),YPfalse);
  T64 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T63 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T64,Ynil);
  YevalSmoduleYremove_modules_by_nameX = YPfab_met(FUNCODEREF(YevalSmoduleYremove_modules_by_nameX),T63,LITREF(lit_261),LITREF(lit_262),sloc(501),YPfalse);
  T66 = YevalSmoduleYremove_modules_by_nameX;
  VARSET(YevalSmoduleYremove_modules_by_nameX,T66);
  lit_264 = YPPsym((P)"module-name-to-relpath");
  lit_265 = YPPlist(1,YPPsym((P)"name"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSmoduleYmodule_name_to_relpath = YPfab_met(FUNCODEREF(YevalSmoduleYmodule_name_to_relpath),T67,LITREF(lit_264),LITREF(lit_265),sloc(511),YPfalse);
  T68 = YevalSmoduleYmodule_name_to_relpath;
  VARSET(YevalSmoduleYmodule_name_to_relpath,T68);
  VARSET(YevalSmoduleYTtracing_refsQT,YPfalse);
  lit_266 = YPPsym((P)"zap-referenced-bindings!");
  lit_267 = YPPlist(1,YPPsym((P)"mod"));
  lit_268 = YPsb((P)"ZAPPING REFS\n");
  T69 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zap_referenced_bindingsX_141 = YPfab_met(FUNCODEREF(fun_zap_referenced_bindingsX_141),T69,LITREF(lit_266),LITREF(lit_267),sloc(517),YPfalse);
  T71 = VARREF_OR(YevalSmoduleYzap_referenced_bindingsX,YPfalse);
  T72 = fun_zap_referenced_bindingsX_141;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSmoduleYzap_referenced_bindingsX,T70);
  lit_269 = YPPlist(1,YPPsym((P)"r"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zap_referenced_bindingsX_142 = YPfab_met(FUNCODEREF(fun_zap_referenced_bindingsX_142),T73,LITREF(lit_266),LITREF(lit_269),sloc(522),YPfalse);
  T75 = VARREF_OR(YevalSmoduleYzap_referenced_bindingsX,YPfalse);
  T76 = fun_zap_referenced_bindingsX_142;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSmoduleYzap_referenced_bindingsX,T74);
  lit_270 = YPPsym((P)"register-referenced-binding");
  lit_271 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"b"));
  lit_272 = YPsb((P)"REG %= %=\n");
  T77 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmoduleG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_referenced_binding_143 = YPfab_met(FUNCODEREF(fun_register_referenced_binding_143),T77,LITREF(lit_270),LITREF(lit_271),sloc(526),YPfalse);
  T79 = VARREF_OR(YevalSmoduleYregister_referenced_binding,YPfalse);
  T80 = fun_register_referenced_binding_143;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSmoduleYregister_referenced_binding,T78);
  lit_273 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"b"));
  T81 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_referenced_binding_144 = YPfab_met(FUNCODEREF(fun_register_referenced_binding_144),T81,LITREF(lit_270),LITREF(lit_273),sloc(532),YPfalse);
  T83 = VARREF_OR(YevalSmoduleYregister_referenced_binding,YPfalse);
  T84 = fun_register_referenced_binding_144;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalSmoduleYregister_referenced_binding,T82);
  lit_274 = YPPsym((P)"<runtime-module-loader>");
  T86 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLmodule_loaderG),Ynil);
  T85 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_274),T86);
  VARSET(YevalSmoduleYLruntime_module_loaderG,T85);
  DYNDEFSET(YevalSmoduleYTnow_rt_envT,YPfalse);
  lit_275 = YPPsym((P)"install-initial-bindings");
  lit_276 = YPPlist(2,YPPsym((P)"<static-global-environment>"),YPPsym((P)"<module-loader>"));
  T88 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T87 = YPfab_gen(T88,LITREF(lit_275),LITREF(lit_276),YPfalse);
  VARSET(YevalSmoduleYinstall_initial_bindings,T87);
  lit_277 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_278 = YPsb((P)"Unable to find module %s");
  T93 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_145 = YPfab_met(FUNCODEREF(fun_145),T93,YPfalse,LITREF(lit_138),sloc(591),YPfalse);
  T92 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_146 = YPfab_met(FUNCODEREF(fun_146),T92,YPfalse,LITREF(lit_138),sloc(591),YPfalse);
  T91 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_147 = YPfab_met(FUNCODEREF(fun_147),T91,YPfalse,LITREF(lit_138),sloc(588),YPfalse);
  T90 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_148 = YPfab_met(FUNCODEREF(fun_148),T90,YPfalse,LITREF(lit_138),sloc(607),YPfalse);
  T89 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  fun_load_module_149 = YPfab_met(FUNCODEREF(fun_load_module_149),T89,LITREF(lit_241),LITREF(lit_277),sloc(578),YPfalse);
  T95 = VARREF_OR(YevalSmoduleYload_module,YPfalse);
  T96 = fun_load_module_149;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSmoduleYload_module,T94);
  if (YPfalse != YPfalse) {
  } else {
  }
  T97 = XCALL1(1,VARREF(Ynew),VARREF(YevalSmoduleYLruntime_module_loaderG));
  VARSET(YevalSmoduleYTruntime_module_loaderT,T97);
  lit_279 = YPPsym((P)"runtime-module-loader");
  T98 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSmoduleYruntime_module_loader = YPfab_met(FUNCODEREF(YevalSmoduleYruntime_module_loader),T98,LITREF(lit_279),LITREF(lit_138),sloc(612),YPfalse);
  T99 = YevalSmoduleYruntime_module_loader;
  VARSET(YevalSmoduleYruntime_module_loader,T99);
  lit_280 = YPPsym((P)"runtime-module");
  lit_281 = YPPlist(1,YPPsym((P)"modname"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYruntime_module = YPfab_met(FUNCODEREF(YevalSmoduleYruntime_module),T100,LITREF(lit_280),LITREF(lit_281),sloc(613),YPfalse);
  T101 = YevalSmoduleYruntime_module;
  VARSET(YevalSmoduleYruntime_module,T101);
  lit_282 = YPPsym((P)"runtime-environment");
  lit_283 = YPPlist(1,YPPsym((P)"modname"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYruntime_environment = YPfab_met(FUNCODEREF(YevalSmoduleYruntime_environment),T102,LITREF(lit_282),LITREF(lit_283),sloc(615),YPfalse);
  T103 = YevalSmoduleYruntime_environment;
  VARSET(YevalSmoduleYruntime_environment,T103);
  lit_284 = YPPsym((P)"runtime-core-environment");
  lit_285 = YPPlist(1,YPPsym((P)"modname"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYruntime_core_environment = YPfab_met(FUNCODEREF(YevalSmoduleYruntime_core_environment),T104,LITREF(lit_284),LITREF(lit_285),sloc(619),YPfalse);
  T105 = YevalSmoduleYruntime_core_environment;
  VARSET(YevalSmoduleYruntime_core_environment,T105);
  lit_286 = YPPsym((P)"unchecked-runtime-environment");
  lit_287 = YPPlist(1,YPPsym((P)"modname"));
  T106 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYunchecked_runtime_environment = YPfab_met(FUNCODEREF(YevalSmoduleYunchecked_runtime_environment),T106,LITREF(lit_286),LITREF(lit_287),sloc(621),YPfalse);
  T107 = YevalSmoduleYunchecked_runtime_environment;
  VARSET(YevalSmoduleYunchecked_runtime_environment,T107);
  lit_288 = YPPsym((P)"reloader-do-create-module");
  lit_289 = YPPlist(2,YPPsym((P)"modname"),YPPsym((P)"data"));
  T108 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSmoduleYreloader_do_create_module = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_create_module),T108,LITREF(lit_288),LITREF(lit_289),sloc(630),YPfalse);
  T109 = YevalSmoduleYreloader_do_create_module;
  VARSET(YevalSmoduleYreloader_do_create_module,T109);
  lit_290 = YPPsym((P)"reloader-do-use-module");
  lit_291 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"uses"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_use_module = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_use_module),T110,LITREF(lit_290),LITREF(lit_291),sloc(641),YPfalse);
  T111 = YevalSmoduleYreloader_do_use_module;
  VARSET(YevalSmoduleYreloader_do_use_module,T111);
  lit_292 = YPPsym((P)"reloader-do-import");
  lit_293 = YPPlist(4,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"from-mod"),YPPsym((P)"original-name"));
  lit_294 = YPsb((P)"Can't find %s from %s for %s\n");
  T114 = YPfab_sig(YPPlist(4,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG),VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T113 = YevalSmoduleYreloader_do_import = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_import),T114,LITREF(lit_292),LITREF(lit_293),sloc(644),YPfalse);
  T116 = YevalSmoduleYreloader_do_import;
  T115 = VARSET(YevalSmoduleYreloader_do_import,T116);
  T112 = T115;
  return T112;
}

P YevalSmoduleY___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
DEFCREGS();
  lit_295 = YPPsym((P)"process-module-data");
  lit_296 = YPPlist(1,YPPsym((P)"module"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYprocess_module_data = YPfab_met(FUNCODEREF(YevalSmoduleYprocess_module_data),T0,LITREF(lit_295),LITREF(lit_296),sloc(654),YPfalse);
  T1 = YevalSmoduleYprocess_module_data;
  VARSET(YevalSmoduleYprocess_module_data,T1);
  lit_297 = YPPlist(1,YPPsym((P)"module"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_module_data_159 = YPfab_met(FUNCODEREF(fun_ensure_module_data_159),T2,LITREF(lit_212),LITREF(lit_297),sloc(659),YPfalse);
  T4 = VARREF_OR(YevalSmoduleYensure_module_data,YPfalse);
  T5 = fun_ensure_module_data_159;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSmoduleYensure_module_data,T3);
  lit_298 = YPPsym((P)"reloader-do-runtime-binding");
  lit_299 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  lit_300 = YPPsym((P)"runtime");
  T6 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_runtime_binding = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_runtime_binding),T6,LITREF(lit_298),LITREF(lit_299),sloc(665),YPfalse);
  T7 = YevalSmoduleYreloader_do_runtime_binding;
  VARSET(YevalSmoduleYreloader_do_runtime_binding,T7);
  lit_301 = YPPsym((P)"reloader-do-dynamic-binding");
  lit_302 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  lit_303 = YPPsym((P)"dynamic");
  T8 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_dynamic_binding = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_dynamic_binding),T8,LITREF(lit_301),LITREF(lit_302),sloc(674),YPfalse);
  T9 = YevalSmoduleYreloader_do_dynamic_binding;
  VARSET(YevalSmoduleYreloader_do_dynamic_binding,T9);
  lit_304 = YPPsym((P)"reloader-do-other-binding");
  lit_305 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_306 = YPPsym((P)"predefined");
  T10 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_other_binding = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_other_binding),T10,LITREF(lit_304),LITREF(lit_305),sloc(687),YPfalse);
  T11 = YevalSmoduleYreloader_do_other_binding;
  VARSET(YevalSmoduleYreloader_do_other_binding,T11);
  lit_307 = YPPsym((P)"reloader-do-export");
  lit_308 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"as-name"));
  lit_309 = YPsb((P)"Can't find %s in %s\n");
  T12 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_export = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_export),T12,LITREF(lit_307),LITREF(lit_308),sloc(695),YPfalse);
  T13 = YevalSmoduleYreloader_do_export;
  VARSET(YevalSmoduleYreloader_do_export,T13);
  lit_310 = YPPsym((P)"reload-modules");
  T14 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSmoduleYreload_modules = YPfab_met(FUNCODEREF(YevalSmoduleYreload_modules),T14,LITREF(lit_310),LITREF(lit_138),sloc(702),YPfalse);
  T15 = YevalSmoduleYreload_modules;
  VARSET(YevalSmoduleYreload_modules,T15);
  lit_311 = YPPsym((P)"fab-static-global-environment");
  lit_312 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"module-loader"),YPPsym((P)"allow-foreign-names?"));
  T16 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  YevalSmoduleYfab_static_global_environment = YPfab_met(FUNCODEREF(YevalSmoduleYfab_static_global_environment),T16,LITREF(lit_311),LITREF(lit_312),sloc(709),YPfalse);
  T17 = YevalSmoduleYfab_static_global_environment;
  VARSET(YevalSmoduleYfab_static_global_environment,T17);
  lit_313 = YPPsym((P)"fab-subset-environment");
  lit_314 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"src-module"),YPPsym((P)"excluded"));
  lit_315 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"binding"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_166 = YPfab_met(FUNCODEREF(fun_166),T19,YPfalse,LITREF(lit_315),sloc(730),YPfalse);
  T18 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  YevalSmoduleYfab_subset_environment = YPfab_met(FUNCODEREF(YevalSmoduleYfab_subset_environment),T18,LITREF(lit_313),LITREF(lit_314),sloc(723),YPfalse);
  T20 = YevalSmoduleYfab_subset_environment;
  VARSET(YevalSmoduleYfab_subset_environment,T20);
  lit_316 = YPPsym((P)"walk-bindings");
  lit_317 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"mod"));
  T21 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYwalk_bindings = YPfab_met(FUNCODEREF(YevalSmoduleYwalk_bindings),T21,LITREF(lit_316),LITREF(lit_317),sloc(737),YPfalse);
  T22 = YevalSmoduleYwalk_bindings;
  VARSET(YevalSmoduleYwalk_bindings,T22);
  lit_318 = YPPsym((P)"walk-bindings*");
  lit_319 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"env"),YPPsym((P)"walked?"),YPPsym((P)"mods"));
  T23 = YPfab_sig(YPPlist(4,VARREF(YLfunG),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSmoduleYwalk_bindingsT = YPfab_met(FUNCODEREF(YevalSmoduleYwalk_bindingsT),T23,LITREF(lit_318),LITREF(lit_319),sloc(741),YPfalse);
  T24 = YevalSmoduleYwalk_bindingsT;
  VARSET(YevalSmoduleYwalk_bindingsT,T24);
  T25 = YPfalse;
  return T25;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSsym;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooStypes},
  {&module_info_gooSsym},
  {&module_info_gooSsystem},
  {&module_info_evalSdependency},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"invalidate-dependents", &module_info_evalSdependency, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"$expansion-parse-dependency", &module_info_evalSdependency, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"<dependable>", &module_info_evalSdependency, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"dependency-includes-any?", &module_info_evalSdependency, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"dependency-and", &module_info_evalSdependency, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"dependency-nul?", &module_info_evalSdependency, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"invalidate-dependent", &module_info_evalSdependency, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"<dependent>", &module_info_evalSdependency, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"$nul-dependency", &module_info_evalSdependency, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"find-dependency", &module_info_evalSdependency, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"dependency-includes-all?", &module_info_evalSdependency, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"log-dependency", &module_info_evalSdependency, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"detach-dependent", &module_info_evalSdependency, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"$optimizaton-dependencies", &module_info_evalSdependency, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"dependency-or", &module_info_evalSdependency, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"$name-parse-dependency", &module_info_evalSdependency, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"<dependency-type>", &module_info_evalSdependency, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"$parse-dependencies", &module_info_evalSdependency, NULL},
  {"$value-optimization-dependency", &module_info_evalSdependency, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"$all-dependency-types", &module_info_evalSdependency, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"module-target-environment", CVAR, &YevalSmoduleYmodule_target_environment},
  {"module-name-to-relpath", CVAR, &YevalSmoduleYmodule_name_to_relpath},
  {"module-syntax-environment", CVAR, &YevalSmoduleYmodule_syntax_environment},
  {"module-target-environment-setter", CVAR, &YevalSmoduleYmodule_target_environment_setter},
  {"module-syntax-environment-setter", CVAR, &YevalSmoduleYmodule_syntax_environment_setter},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSmoduleYenvironment_allows_foreign_namesQ_setter},
  {"module-loader-stack", CVAR, &YevalSmoduleYmodule_loader_stack},
  {"load-module", CVAR, &YevalSmoduleYload_module},
  {"module-loader-stack-setter", CVAR, &YevalSmoduleYmodule_loader_stack_setter},
  {"<module>", CVAR, &YevalSmoduleYLmoduleG},
  {"module-mangled-string-name-setter", CVAR, &YevalSmoduleYmodule_mangled_string_name_setter},
  {"*tracing-refs?*", CVAR, &YevalSmoduleYTtracing_refsQT},
  {"transaction-register-dependent", CVAR, &YevalSmoduleYtransaction_register_dependent},
  {"binding-free?", CVAR, &YevalSmoduleYbinding_freeQ},
  {"roll-back-transaction", CVAR, &YevalSmoduleYroll_back_transaction},
  {"global-box-value-setter", CVAR, &YevalSmoduleYglobal_box_value_setter},
  {"<namespace-error>", CVAR, &YevalSmoduleYLnamespace_errorG},
  {"binding-locative-setter", CVAR, &YevalSmoduleYbinding_locative_setter},
  {"env-object-name", CVAR, &YevalSmoduleYenv_object_name},
  {"module-mangled-name-setter", CVAR, &YevalSmoduleYmodule_mangled_name_setter},
  {"find-environment-module", CVAR, &YevalSmoduleYfind_environment_module},
  {"environment-uses-modules-setter", CVAR, &YevalSmoduleYenvironment_uses_modules_setter},
  {"do-static-global-bindings", CVAR, &YevalSmoduleYdo_static_global_bindings},
  {"environment-allows-foreign-names?", CVAR, &YevalSmoduleYenvironment_allows_foreign_namesQ},
  {"binding-type-setter", CVAR, &YevalSmoduleYbinding_type_setter},
  {"---main-0---", PVAR, NULL},
  {"<static-environment>", CVAR, &YevalSmoduleYLstatic_environmentG},
  {"environment-next-setter", CVAR, &YevalSmoduleYenvironment_next_setter},
  {"environment-module-loader-setter", CVAR, &YevalSmoduleYenvironment_module_loader_setter},
  {"environment-module", CVAR, &YevalSmoduleYenvironment_module},
  {"module-transaction", CVAR, &YevalSmoduleYmodule_transaction},
  {"binding-module-name", CVAR, &YevalSmoduleYbinding_module_name},
  {"binding-module", CVAR, &YevalSmoduleYbinding_module},
  {"namespace-error", CVAR, &YevalSmoduleYnamespace_error},
  {"*current-subtransaction*", DVAR, &YevalSmoduleYTcurrent_subtransactionT},
  {"binding-name", CVAR, &YevalSmoduleYbinding_name},
  {"binding-name-setter", CVAR, &YevalSmoduleYbinding_name_setter},
  {"find-binding", CVAR, &YevalSmoduleYfind_binding},
  {"fab-subset-environment", CVAR, &YevalSmoduleYfab_subset_environment},
  {"binding-kind-setter", CVAR, &YevalSmoduleYbinding_kind_setter},
  {"binding-handler-setter", CVAR, &YevalSmoduleYbinding_handler_setter},
  {"transaction-implemented-bindings", CVAR, &YevalSmoduleYtransaction_implemented_bindings},
  {"binding-prop-setter", CVAR, &YevalSmoduleYbinding_prop_setter},
  {"transaction-register-implemented-binding", CVAR, &YevalSmoduleYtransaction_register_implemented_binding},
  {"$goo-boot-module-name", CVAR, &YevalSmoduleYDgoo_boot_module_name},
  {"%module-exports", CVAR, &YevalSmoduleYPmodule_exports},
  {"reloader-do-create-module", CVAR, &YevalSmoduleYreloader_do_create_module},
  {"module-runtime-data", CVAR, &YevalSmoduleYmodule_runtime_data},
  {"<static-nul-environment>", CVAR, &YevalSmoduleYLstatic_nul_environmentG},
  {"module-uses-c-libraries", CVAR, &YevalSmoduleYmodule_uses_c_libraries},
  {"load-and-register-module", CVAR, &YevalSmoduleYload_and_register_module},
  {"---main-2---", PVAR, NULL},
  {"reload-modules", CVAR, &YevalSmoduleYreload_modules},
  {"<module-loader>", CVAR, &YevalSmoduleYLmodule_loaderG},
  {"$nul-static-environment", CVAR, &YevalSmoduleYDnul_static_environment},
  {"module-uses-c-files", CVAR, &YevalSmoduleYmodule_uses_c_files},
  {"---main-4---", PVAR, NULL},
  {"module-mangled-name", CVAR, &YevalSmoduleYmodule_mangled_name},
  {"insert-globals!", CVAR, &YevalSmoduleYinsert_globalsX},
  {"binding-mangled-name-setter", CVAR, &YevalSmoduleYbinding_mangled_name_setter},
  {"environment-module-loader", CVAR, &YevalSmoduleYenvironment_module_loader},
  {"*runtime-module-loader*", CVAR, &YevalSmoduleYTruntime_module_loaderT},
  {"<static-local-environment>", CVAR, &YevalSmoduleYLstatic_local_environmentG},
  {"unchecked-runtime-environment", CVAR, &YevalSmoduleYunchecked_runtime_environment},
  {"insert-and-mangle-global!", CVAR, &YevalSmoduleYinsert_and_mangle_globalX},
  {"binding-inferred-type-setter", CVAR, &YevalSmoduleYbinding_inferred_type_setter},
  {"---main-1---", PVAR, NULL},
  {"install-initial-bindings", CVAR, &YevalSmoduleYinstall_initial_bindings},
  {"module-data-processed?", CVAR, &YevalSmoduleYmodule_data_processedQ},
  {"report-undefined-global-bindings", CVAR, &YevalSmoduleYreport_undefined_global_bindings},
  {"environment-next", CVAR, &YevalSmoduleYenvironment_next},
  {"binding-type", CVAR, &YevalSmoduleYbinding_type},
  {"probe-module", CVAR, &YevalSmoduleYprobe_module},
  {"frame-bindings", CVAR, &YevalSmoduleYframe_bindings},
  {"binding-kind", CVAR, &YevalSmoduleYbinding_kind},
  {"binding-prop", CVAR, &YevalSmoduleYbinding_prop},
  {"remove-module-internal!", CVAR, &YevalSmoduleYremove_module_internalX},
  {"binding-global-box", CVAR, &YevalSmoduleYbinding_global_box},
  {"environment-bindings-setter", CVAR, &YevalSmoduleYenvironment_bindings_setter},
  {"with-subtransaction", PVAR, NULL},
  {"module-uses-c-includes", CVAR, &YevalSmoduleYmodule_uses_c_includes},
  {"walk-bindings*", CVAR, &YevalSmoduleYwalk_bindingsT},
  {"binding-locative", CVAR, &YevalSmoduleYbinding_locative},
  {"environment-uses-modules", CVAR, &YevalSmoduleYenvironment_uses_modules},
  {"binding-global-box-setter", CVAR, &YevalSmoduleYbinding_global_box_setter},
  {"find-syntax-environment", CVAR, &YevalSmoduleYfind_syntax_environment},
  {"register-referenced-binding", CVAR, &YevalSmoduleYregister_referenced_binding},
  {"<transaction>", CVAR, &YevalSmoduleYLtransactionG},
  {"runtime-core-environment", CVAR, &YevalSmoduleYruntime_core_environment},
  {"insert-global!", CVAR, &YevalSmoduleYinsert_globalX},
  {"import-global!", CVAR, &YevalSmoduleYimport_globalX},
  {"binding-mangled-name", CVAR, &YevalSmoduleYbinding_mangled_name},
  {"module-loader-modules-setter", CVAR, &YevalSmoduleYmodule_loader_modules_setter},
  {"reloader-do-dynamic-binding", CVAR, &YevalSmoduleYreloader_do_dynamic_binding},
  {"binding-native-to?", CVAR, &YevalSmoduleYbinding_native_toQ},
  {"binding-inferred-type", CVAR, &YevalSmoduleYbinding_inferred_type},
  {"set-module-environments", CVAR, &YevalSmoduleYset_module_environments},
  {"<binding>", CVAR, &YevalSmoduleYLbindingG},
  {"do-module-loader-modules", CVAR, &YevalSmoduleYdo_module_loader_modules},
  {"module-c-forms", CVAR, &YevalSmoduleYmodule_c_forms},
  {"walk-bindings", CVAR, &YevalSmoduleYwalk_bindings},
  {"<module-binding>", CVAR, &YevalSmoduleYLmodule_bindingG},
  {"load-in", CVAR, &YevalSmoduleYload_in},
  {"reloader-do-import", CVAR, &YevalSmoduleYreloader_do_import},
  {"process-module-data", CVAR, &YevalSmoduleYprocess_module_data},
  {"runtime-environment", CVAR, &YevalSmoduleYruntime_environment},
  {"binding-info-setter", CVAR, &YevalSmoduleYbinding_info_setter},
  {"environment-bindings", CVAR, &YevalSmoduleYenvironment_bindings},
  {"do-named-static-global-bindings", CVAR, &YevalSmoduleYdo_named_static_global_bindings},
  {"<global-box>", CVAR, &YevalSmoduleYLglobal_boxG},
  {"register-module!", CVAR, &YevalSmoduleYregister_moduleX},
  {"merge-transactions!", CVAR, &YevalSmoduleYmerge_transactionsX},
  {"binding-info", CVAR, &YevalSmoduleYbinding_info},
  {"transaction-dependents", CVAR, &YevalSmoduleYtransaction_dependents},
  {"module-name", CVAR, &YevalSmoduleYmodule_name},
  {"module-referenced-bindings", CVAR, &YevalSmoduleYmodule_referenced_bindings},
  {"binding-handler", CVAR, &YevalSmoduleYbinding_handler},
  {"module-exports", CVAR, &YevalSmoduleYmodule_exports},
  {"binding-free?-setter", CVAR, &YevalSmoduleYbinding_freeQ_setter},
  {"module-loader-modules", CVAR, &YevalSmoduleYmodule_loader_modules},
  {"*now-rt-env*", DVAR, &YevalSmoduleYTnow_rt_envT},
  {"runtime-module", CVAR, &YevalSmoduleYruntime_module},
  {"module-transaction-setter", CVAR, &YevalSmoduleYmodule_transaction_setter},
  {"zap-referenced-bindings!", CVAR, &YevalSmoduleYzap_referenced_bindingsX},
  {"export-binding!", CVAR, &YevalSmoduleYexport_bindingX},
  {"module-data-processed?-setter", CVAR, &YevalSmoduleYmodule_data_processedQ_setter},
  {"---main-3---", PVAR, NULL},
  {"find-static-global-environment", CVAR, &YevalSmoduleYfind_static_global_environment},
  {"<static-global-environment>", CVAR, &YevalSmoduleYLstatic_global_environmentG},
  {"<binding-name>", CVAR, &YevalSmoduleYLbinding_nameG},
  {"module-mangled-string-name", CVAR, &YevalSmoduleYmodule_mangled_string_name},
  {"transaction-nul?", CVAR, &YevalSmoduleYtransaction_nulQ},
  {"reloader-do-runtime-binding", CVAR, &YevalSmoduleYreloader_do_runtime_binding},
  {"environment-module-setter", CVAR, &YevalSmoduleYenvironment_module_setter},
  {"*dynamic-compilation?*", DVAR, &YevalSmoduleYTdynamic_compilationQT},
  {"reloader-do-export", CVAR, &YevalSmoduleYreloader_do_export},
  {"reloader-do-other-binding", CVAR, &YevalSmoduleYreloader_do_other_binding},
  {"fab-static-global-environment", CVAR, &YevalSmoduleYfab_static_global_environment},
  {"call-with-subtransaction", CVAR, &YevalSmoduleYcall_with_subtransaction},
  {"remove-modules-by-name!", CVAR, &YevalSmoduleYremove_modules_by_nameX},
  {"binding-module-setter", CVAR, &YevalSmoduleYbinding_module_setter},
  {"<runtime-module-loader>", CVAR, &YevalSmoduleYLruntime_module_loaderG},
  {"reloader-do-use-module", CVAR, &YevalSmoduleYreloader_do_use_module},
  {"global-box-value", CVAR, &YevalSmoduleYglobal_box_value},
  {"runtime-module-loader", CVAR, &YevalSmoduleYruntime_module_loader},
  {"module-runtime-data-setter", CVAR, &YevalSmoduleYmodule_runtime_data_setter},
  {"ensure-module-data", CVAR, &YevalSmoduleYensure_module_data},
  {"import-and-mangle-global!", CVAR, &YevalSmoduleYimport_and_mangle_globalX},
  {"compute-transitive-users", CVAR, &YevalSmoduleYcompute_transitive_users},
  {"module-loader-module-type", CVAR, &YevalSmoduleYmodule_loader_module_type},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"module-target-environment", NULL},
  {"module-name-to-relpath", NULL},
  {"module-runtime-data-setter", NULL},
  {"module-loader-stack", NULL},
  {"load-module", NULL},
  {"module-mangled-string-name", NULL},
  {"binding-free?", NULL},
  {"roll-back-transaction", NULL},
  {"transaction-register-dependent", NULL},
  {"global-box-value-setter", NULL},
  {"<namespace-error>", NULL},
  {"env-object-name", NULL},
  {"module-mangled-name-setter", NULL},
  {"do-named-static-global-bindings", NULL},
  {"do-static-global-bindings", NULL},
  {"call-with-subtransaction", NULL},
  {"binding-module-name", NULL},
  {"module-transaction", NULL},
  {"namespace-error", NULL},
  {"*current-subtransaction*", NULL},
  {"module-syntax-environment", NULL},
  {"module-data-processed?-setter", NULL},
  {"environment-module", NULL},
  {"fab-subset-environment", NULL},
  {"<module>", NULL},
  {"binding-type-setter", NULL},
  {"binding-kind-setter", NULL},
  {"binding-handler-setter", NULL},
  {"binding-prop-setter", NULL},
  {"transaction-register-implemented-binding", NULL},
  {"$goo-boot-module-name", NULL},
  {"binding-name", NULL},
  {"binding-module", NULL},
  {"module-runtime-data", NULL},
  {"<static-nul-environment>", NULL},
  {"module-uses-c-libraries", NULL},
  {"find-environment-module", NULL},
  {"remove-modules-by-name!", NULL},
  {"<module-loader>", NULL},
  {"global-box-value", NULL},
  {"module-mangled-name", NULL},
  {"insert-globals!", NULL},
  {"binding-mangled-name-setter", NULL},
  {"do-module-loader-modules", NULL},
  {"environment-module-loader", NULL},
  {"unchecked-runtime-environment", NULL},
  {"binding-inferred-type-setter", NULL},
  {"environment-allows-foreign-names?", NULL},
  {"install-initial-bindings", NULL},
  {"module-data-processed?", NULL},
  {"binding-locative-setter", NULL},
  {"report-undefined-global-bindings", NULL},
  {"environment-next", NULL},
  {"binding-type", NULL},
  {"probe-module", NULL},
  {"frame-bindings", NULL},
  {"binding-kind", NULL},
  {"binding-prop", NULL},
  {"binding-global-box", NULL},
  {"with-subtransaction", NULL},
  {"module-uses-c-includes", NULL},
  {"environment-uses-modules", NULL},
  {"binding-global-box-setter", NULL},
  {"find-syntax-environment", NULL},
  {"binding-info-setter", NULL},
  {"fab-static-global-environment", NULL},
  {"<static-local-environment>", NULL},
  {"register-referenced-binding", NULL},
  {"insert-global!", NULL},
  {"import-global!", NULL},
  {"binding-mangled-name", NULL},
  {"binding-native-to?", NULL},
  {"binding-locative", NULL},
  {"binding-inferred-type", NULL},
  {"<binding>", NULL},
  {"module-c-forms", NULL},
  {"walk-bindings", NULL},
  {"<module-binding>", NULL},
  {"load-in", NULL},
  {"runtime-environment", NULL},
  {"environment-bindings", NULL},
  {"<global-box>", NULL},
  {"register-module!", NULL},
  {"module-uses-c-files", NULL},
  {"binding-info", NULL},
  {"module-name", NULL},
  {"set-module-environments", NULL},
  {"module-referenced-bindings", NULL},
  {"binding-handler", NULL},
  {"module-exports", NULL},
  {"binding-free?-setter", NULL},
  {"runtime-module", NULL},
  {"zap-referenced-bindings!", NULL},
  {"export-binding!", NULL},
  {"<static-environment>", NULL},
  {"find-static-global-environment", NULL},
  {"<static-global-environment>", NULL},
  {"<binding-name>", NULL},
  {"module-mangled-string-name-setter", NULL},
  {"*dynamic-compilation?*", NULL},
  {"reload-modules", NULL},
  {"ensure-module-data", NULL},
  {"runtime-module-loader", NULL},
  {"module-loader-module-type", NULL},
  {"import-and-mangle-global!", NULL},
  {"find-binding", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSmodule;
MODULE_INFO module_info_evalSmodule = {
  "eval/module",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSsym (void);
extern void load_module_gooSsystem (void);
extern void load_module_evalSdependency (void);

/* EXPRESSION: */

extern void load_module_evalSmodule (void);

void load_module_evalSmodule (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooStypes();
  load_module_gooSsym();
  load_module_gooSsystem();
  load_module_evalSdependency();

  (P)YevalSmoduleY___main_0___();
  (P)YevalSmoduleY___main_1___();
  (P)YevalSmoduleY___main_2___();
  (P)YevalSmoduleY___main_3___();
  (P)YevalSmoduleY___main_4___();

}

/* END OF GENERATED CODE. */
