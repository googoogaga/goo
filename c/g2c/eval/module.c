/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/module");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/module */

DEF(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
DEF(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
DEF(YevalSmoduleYbinding_name,"eval/module","binding-name");
DEF(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
DEF(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
DEF(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
DEF(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
DEF(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
DEF(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSmoduleYreloader_do_runtime_binding,"eval/module","reloader-do-runtime-binding");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSmoduleYtransaction_implemented_bindings,"eval/module","transaction-implemented-bindings");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
DEF(YevalSmoduleYPmodule_exports,"eval/module","%module-exports");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YevalSmoduleYreloader_do_use_module,"eval/module","reloader-do-use-module");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
DEF(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DEF(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
DEF(YevalSmoduleYreloader_do_export,"eval/module","reloader-do-export");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
DEF(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalSdependencyYDnul_dependency,"eval/dependency","$nul-dependency");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytail,"goo/boot","tail");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
DEF(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
DEF(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
DEF(YevalSmoduleYTruntime_module_loaderT,"eval/module","*runtime-module-loader*");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
DYNDEF(YevalSmoduleYTnow_rt_envT,"eval/module","*now-rt-env*");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
DEF(YevalSmoduleYenvironment_bindings_setter,"eval/module","environment-bindings-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSmoduleYprocess_module_data,"eval/module","process-module-data");
DEF(YevalSmoduleYTtracing_refsQT,"eval/module","*tracing-refs?*");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
DEF(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
DEF(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YevalSmoduleYreloader_do_create_module,"eval/module","reloader-do-create-module");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSmoduleYcompute_transitive_users,"eval/module","compute-transitive-users");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOelt,"goo/boot","@elt");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalSmoduleYreloader_do_other_binding,"eval/module","reloader-do-other-binding");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
DEF(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSmoduleYprobe_module,"eval/module","probe-module");
DEF(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSmoduleYLtransactionG,"eval/module","<transaction>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yarity_error,"goo/boot","arity-error");
DYNDEF(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
DEF(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
DEF(YevalSmoduleYLruntime_module_loaderG,"eval/module","<runtime-module-loader>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSmoduleYreloader_do_import,"eval/module","reloader-do-import");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
DEF(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalSmoduleYinsert_and_mangle_globalX,"eval/module","insert-and-mangle-global!");
DEF(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YevalSmoduleYload_and_register_module,"eval/module","load-and-register-module");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YevalSmoduleYremove_module_internalX,"eval/module","remove-module-internal!");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
DEF(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
DEF(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
DEF(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
DEF(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
DEF(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSmoduleYDnul_static_environment,"eval/module","$nul-static-environment");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YevalSdependencyYdependency_nulQ,"eval/dependency","dependency-nul?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSsystemYso_load,"goo/system","so-load");
DEF(YevalSmoduleYmodule_target_environment_setter,"eval/module","module-target-environment-setter");
DEF(YevalSmoduleYmerge_transactionsX,"eval/module","merge-transactions!");
DEF(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YOdo,"goo/boot","@do");
DEF(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YevalSmoduleYmodule_loader_stack_setter,"eval/module","module-loader-stack-setter");
DEF(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
DEF(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
DEF(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
DEF(YevalSmoduleYenvironment_uses_modules_setter,"eval/module","environment-uses-modules-setter");
DEF(YevalSmoduleYenvironment_allows_foreign_namesQ_setter,"eval/module","environment-allows-foreign-names?-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
DEF(YevalSmoduleYwalk_bindingsT,"eval/module","walk-bindings*");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
DEF(YevalSmoduleYtransaction_dependents,"eval/module","transaction-dependents");
EXT(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
DEF(YevalSmoduleYenvironment_next_setter,"eval/module","environment-next-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSmoduleYmodule_loader_modules,"eval/module","module-loader-modules");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
DYNDEF(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YevalSmoduleYruntime_core_environment,"eval/module","runtime-core-environment");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOrevX,"goo/boot","@rev!");
DEF(YevalSmoduleYmodule_transaction_setter,"eval/module","module-transaction-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
DEF(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YOpick,"goo/boot","@pick");
DEF(YevalSmoduleYtransaction_nulQ,"eval/module","transaction-nul?");
EXT(YgooStypesYDbot,"goo/types","$bot");
DEF(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
DEF(YevalSmoduleYmodule_syntax_environment_setter,"eval/module","module-syntax-environment-setter");
DEF(YevalSmoduleYbinding_name_setter,"eval/module","binding-name-setter");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YevalSmoduleYenvironment_module_setter,"eval/module","environment-module-setter");
DEF(YevalSmoduleYreloader_do_dynamic_binding,"eval/module","reloader-do-dynamic-binding");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YevalSmoduleYbinding_module_setter,"eval/module","binding-module-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
DEF(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YevalSmoduleYmodule_loader_modules_setter,"eval/module","module-loader-modules-setter");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Yopts_location,"goo/boot","opts-location");
DEF(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(YevalSmoduleYload_in,"eval/module","load-in");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
DEF(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
DEF(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
DEF(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
DEF(YevalSmoduleYenvironment_module_loader_setter,"eval/module","environment-module-loader-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YOnew,"goo/boot","@new");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathY_,"goo/math","-");
DEF(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YOrev,"goo/boot","@rev");
DEF(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_117);
DEFLIT(lit_33);
DEFLIT(lit_74);
DEFLIT(lit_255);
DEFLIT(lit_96);
DEFLIT(lit_150);
DEFLIT(lit_248);
DEFLIT(lit_126);
DEFLIT(lit_301);
DEFLIT(lit_136);
DEFLIT(lit_44);
DEFLIT(lit_208);
DEFLIT(lit_271);
DEFLIT(lit_116);
DEFLIT(lit_20);
DEFLIT(lit_268);
DEFLIT(lit_191);
DEFLIT(lit_243);
DEFLIT(lit_246);
DEFLIT(lit_214);
DEFLIT(lit_158);
DEFLIT(lit_103);
DEFLIT(lit_100);
DEFLIT(lit_122);
DEFLIT(lit_118);
DEFLIT(lit_190);
DEFLIT(lit_168);
DEFLIT(lit_172);
DEFLIT(lit_174);
DEFLIT(lit_221);
DEFLIT(lit_181);
DEFLIT(lit_26);
DEFLIT(lit_269);
DEFLIT(lit_219);
DEFLIT(lit_304);
DEFLIT(lit_226);
DEFLIT(lit_145);
DEFLIT(lit_146);
DEFLIT(lit_110);
DEFLIT(lit_5);
DEFLIT(lit_201);
DEFLIT(lit_125);
DEFLIT(lit_83);
DEFLIT(lit_86);
DEFLIT(lit_286);
DEFLIT(lit_130);
DEFLIT(lit_6);
DEFLIT(lit_31);
DEFLIT(lit_12);
DEFLIT(lit_161);
DEFLIT(lit_131);
DEFLIT(lit_151);
DEFLIT(lit_253);
DEFLIT(lit_28);
DEFLIT(lit_51);
DEFLIT(lit_45);
DEFLIT(lit_193);
DEFLIT(lit_257);
DEFLIT(lit_188);
DEFLIT(lit_187);
DEFLIT(lit_56);
DEFLIT(lit_69);
DEFLIT(lit_54);
DEFLIT(lit_309);
DEFLIT(lit_279);
DEFLIT(lit_133);
DEFLIT(lit_198);
DEFLIT(lit_259);
DEFLIT(lit_155);
DEFLIT(lit_65);
DEFLIT(lit_180);
DEFLIT(lit_294);
DEFLIT(lit_138);
DEFLIT(lit_1);
DEFLIT(lit_210);
DEFLIT(lit_111);
DEFLIT(lit_106);
DEFLIT(lit_58);
DEFLIT(lit_79);
DEFLIT(lit_60);
DEFLIT(lit_295);
DEFLIT(lit_152);
DEFLIT(lit_313);
DEFLIT(lit_212);
DEFLIT(lit_109);
DEFLIT(lit_303);
DEFLIT(lit_288);
DEFLIT(lit_70);
DEFLIT(lit_160);
DEFLIT(lit_80);
DEFLIT(lit_53);
DEFLIT(lit_302);
DEFLIT(lit_142);
DEFLIT(lit_298);
DEFLIT(lit_241);
DEFLIT(lit_205);
DEFLIT(lit_256);
DEFLIT(lit_59);
DEFLIT(lit_134);
DEFLIT(lit_113);
DEFLIT(lit_55);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_50);
DEFLIT(lit_185);
DEFLIT(lit_25);
DEFLIT(lit_47);
DEFLIT(lit_11);
DEFLIT(lit_101);
DEFLIT(lit_178);
DEFLIT(lit_244);
DEFLIT(lit_316);
DEFLIT(lit_260);
DEFLIT(lit_274);
DEFLIT(lit_265);
DEFLIT(lit_223);
DEFLIT(lit_14);
DEFLIT(lit_41);
DEFLIT(lit_222);
DEFLIT(lit_186);
DEFLIT(lit_84);
DEFLIT(lit_114);
DEFLIT(lit_66);
DEFLIT(lit_176);
DEFLIT(lit_203);
DEFLIT(lit_35);
DEFLIT(lit_68);
DEFLIT(lit_139);
DEFLIT(lit_49);
DEFLIT(lit_0);
DEFLIT(lit_312);
DEFLIT(lit_21);
DEFLIT(lit_163);
DEFLIT(lit_22);
DEFLIT(lit_87);
DEFLIT(lit_224);
DEFLIT(lit_211);
DEFLIT(lit_239);
DEFLIT(lit_78);
DEFLIT(lit_307);
DEFLIT(lit_165);
DEFLIT(lit_105);
DEFLIT(lit_40);
DEFLIT(lit_261);
DEFLIT(lit_284);
DEFLIT(lit_123);
DEFLIT(lit_280);
DEFLIT(lit_85);
DEFLIT(lit_216);
DEFLIT(lit_310);
DEFLIT(lit_199);
DEFLIT(lit_169);
DEFLIT(lit_196);
DEFLIT(lit_195);
DEFLIT(lit_37);
DEFLIT(lit_19);
DEFLIT(lit_89);
DEFLIT(lit_264);
DEFLIT(lit_82);
DEFLIT(lit_64);
DEFLIT(lit_217);
DEFLIT(lit_112);
DEFLIT(lit_149);
DEFLIT(lit_147);
DEFLIT(lit_311);
DEFLIT(lit_17);
DEFLIT(lit_296);
DEFLIT(lit_177);
DEFLIT(lit_228);
DEFLIT(lit_43);
DEFLIT(lit_277);
DEFLIT(lit_92);
DEFLIT(lit_251);
DEFLIT(lit_276);
DEFLIT(lit_281);
DEFLIT(lit_242);
DEFLIT(lit_39);
DEFLIT(lit_129);
DEFLIT(lit_121);
DEFLIT(lit_81);
DEFLIT(lit_72);
DEFLIT(lit_154);
DEFLIT(lit_144);
DEFLIT(lit_227);
DEFLIT(lit_148);
DEFLIT(lit_73);
DEFLIT(lit_245);
DEFLIT(lit_240);
DEFLIT(lit_278);
DEFLIT(lit_38);
DEFLIT(lit_204);
DEFLIT(lit_179);
DEFLIT(lit_119);
DEFLIT(lit_98);
DEFLIT(lit_124);
DEFLIT(lit_23);
DEFLIT(lit_229);
DEFLIT(lit_18);
DEFLIT(lit_233);
DEFLIT(lit_232);
DEFLIT(lit_34);
DEFLIT(lit_15);
DEFLIT(lit_249);
DEFLIT(lit_162);
DEFLIT(lit_32);
DEFLIT(lit_2);
DEFLIT(lit_194);
DEFLIT(lit_140);
DEFLIT(lit_99);
DEFLIT(lit_170);
DEFLIT(lit_102);
DEFLIT(lit_91);
DEFLIT(lit_189);
DEFLIT(lit_166);
DEFLIT(lit_209);
DEFLIT(lit_62);
DEFLIT(lit_235);
DEFLIT(lit_289);
DEFLIT(lit_24);
DEFLIT(lit_218);
DEFLIT(lit_164);
DEFLIT(lit_237);
DEFLIT(lit_97);
DEFLIT(lit_287);
DEFLIT(lit_107);
DEFLIT(lit_10);
DEFLIT(lit_266);
DEFLIT(lit_108);
DEFLIT(lit_272);
DEFLIT(lit_4);
DEFLIT(lit_308);
DEFLIT(lit_299);
DEFLIT(lit_7);
DEFLIT(lit_282);
DEFLIT(lit_314);
DEFLIT(lit_292);
DEFLIT(lit_263);
DEFLIT(lit_192);
DEFLIT(lit_29);
DEFLIT(lit_247);
DEFLIT(lit_305);
DEFLIT(lit_293);
DEFLIT(lit_197);
DEFLIT(lit_94);
DEFLIT(lit_61);
DEFLIT(lit_225);
DEFLIT(lit_128);
DEFLIT(lit_57);
DEFLIT(lit_262);
DEFLIT(lit_297);
DEFLIT(lit_52);
DEFLIT(lit_141);
DEFLIT(lit_153);
DEFLIT(lit_63);
DEFLIT(lit_220);
DEFLIT(lit_173);
DEFLIT(lit_120);
DEFLIT(lit_135);
DEFLIT(lit_175);
DEFLIT(lit_167);
DEFLIT(lit_291);
DEFLIT(lit_93);
DEFLIT(lit_184);
DEFLIT(lit_16);
DEFLIT(lit_156);
DEFLIT(lit_285);
DEFLIT(lit_182);
DEFLIT(lit_36);
DEFLIT(lit_270);
DEFLIT(lit_254);
DEFLIT(lit_206);
DEFLIT(lit_30);
DEFLIT(lit_231);
DEFLIT(lit_183);
DEFLIT(lit_315);
DEFLIT(lit_250);
DEFLIT(lit_48);
DEFLIT(lit_252);
DEFLIT(lit_88);
DEFLIT(lit_230);
DEFLIT(lit_273);
DEFLIT(lit_275);
DEFLIT(lit_213);
DEFLIT(lit_236);
DEFLIT(lit_159);
DEFLIT(lit_95);
DEFLIT(lit_42);
DEFLIT(lit_104);
DEFLIT(lit_300);
DEFLIT(lit_9);
DEFLIT(lit_115);
DEFLIT(lit_202);
DEFLIT(lit_267);
DEFLIT(lit_215);
DEFLIT(lit_207);
DEFLIT(lit_77);
DEFLIT(lit_283);
DEFLIT(lit_75);
DEFLIT(lit_127);
DEFLIT(lit_71);
DEFLIT(lit_46);
DEFLIT(lit_137);
DEFLIT(lit_157);
DEFLIT(lit_67);
DEFLIT(lit_143);
DEFLIT(lit_27);
DEFLIT(lit_238);
DEFLIT(lit_200);
DEFLIT(lit_234);
DEFLIT(lit_290);
DEFLIT(lit_76);
DEFLIT(lit_306);
DEFLIT(lit_258);
DEFLIT(lit_171);
DEFLIT(lit_90);
DEFLIT(lit_132);

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
LOCFOR(fun_x_1481_74);
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
LOCFOR(fun_module_uses_c_includes_109);
LOCFOR(fun_110);
LOCFOR(fun_module_uses_c_libraries_111);
LOCFOR(fun_112);
LOCFOR(fun_module_exports_113);
FUNFOR(YevalSmoduleYimport_globalX);
LOCFOR(fun_insert_and_mangle_globalX_115);
FUNFOR(YevalSmoduleYimport_and_mangle_globalX);
FUNFOR(YevalSmoduleYset_module_environments);
LOCFOR(fun_118);
FUNFOR(YevalSmoduleYdo_module_loader_modules);
LOCFOR(fun_module_loader_module_type_120);
FUNFOR(YevalSmoduleYregister_moduleX);
FUNFOR(YevalSmoduleYprobe_module);
LOCFOR(fun_123);
LOCFOR(fun_124);
FUNFOR(YevalSmoduleYload_and_register_module);
FUNFOR(YevalSmoduleYexport_bindingX);
FUNFOR(YevalSmoduleYbinding_native_toQ);
LOCFOR(fun_128);
FUNFOR(YevalSmoduleYreport_undefined_global_bindings);
LOCFOR(fun_130);
LOCFOR(fun_131);
LOCFOR(fun_add_user_132);
LOCFOR(fun_133);
FUNFOR(YevalSmoduleYcompute_transitive_users);
FUNFOR(YevalSmoduleYremove_module_internalX);
LOCFOR(fun_136);
FUNFOR(YevalSmoduleYremove_modules_by_nameX);
FUNFOR(YevalSmoduleYmodule_name_to_relpath);
LOCFOR(fun_zap_referenced_bindingsX_139);
LOCFOR(fun_zap_referenced_bindingsX_140);
LOCFOR(fun_register_referenced_binding_141);
LOCFOR(fun_register_referenced_binding_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
LOCFOR(fun_145);
LOCFOR(fun_146);
LOCFOR(fun_load_module_147);
FUNFOR(YevalSmoduleYruntime_module_loader);
FUNFOR(YevalSmoduleYruntime_module);
FUNFOR(YevalSmoduleYruntime_environment);
FUNFOR(YevalSmoduleYruntime_core_environment);
FUNFOR(YevalSmoduleYunchecked_runtime_environment);
FUNFOR(YevalSmoduleYreloader_do_create_module);
FUNFOR(YevalSmoduleYreloader_do_use_module);
FUNFOR(YevalSmoduleYreloader_do_import);
FUNFOR(YevalSmoduleYprocess_module_data);
LOCFOR(fun_ensure_module_data_157);
FUNFOR(YevalSmoduleYreloader_do_runtime_binding);
FUNFOR(YevalSmoduleYreloader_do_dynamic_binding);
FUNFOR(YevalSmoduleYreloader_do_other_binding);
FUNFOR(YevalSmoduleYreloader_do_export);
FUNFOR(YevalSmoduleYreload_modules);
FUNFOR(YevalSmoduleYfab_static_global_environment);
LOCFOR(fun_164);
FUNFOR(YevalSmoduleYfab_subset_environment);
FUNFOR(YevalSmoduleYwalk_bindings);
FUNFOR(YevalSmoduleYwalk_bindingsT);
extern P YevalSmoduleY___main_0___ ();
extern P YevalSmoduleY___main_1___ ();
extern P YevalSmoduleY___main_2___ ();
extern P YevalSmoduleY___main_3___ ();
extern P YevalSmoduleY___main_4___ ();

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
  P modF3975;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_module),b_);
  modF3975 = T2;
  if (modF3975 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSmoduleYmodule_name),modF3975);
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
  P envF3976;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  envF3976 = env_;
  LOOP_172: {
    P a172_0;
    T2 = CALL2(1,VARREF(YisaQ),envF3976,VARREF(YevalSmoduleYLstatic_nul_environmentG));
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSmoduleYframe_bindings),envF3976);
      CALL2(1,VARREF(YgooSmacrosYdo),f_,T3);
      T5 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),envF3976);
      a172_0 = T5;
      envF3976 = a172_0;
      goto LOOP_172;
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
  P envF3977;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  envF3977 = env_;
  LOOP_173: {
    P a173_0;
    T2 = CALL2(1,VARREF(YisaQ),envF3977,VARREF(YevalSmoduleYLstatic_nul_environmentG));
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSmoduleYframe_bindings),envF3977);
      CALL2(1,VARREF(YgooScolsScolYdo_keyed),f_,T3);
      T5 = CALL1(1,VARREF(YevalSmoduleYenvironment_next),envF3977);
      a173_0 = T5;
      envF3977 = a173_0;
      goto LOOP_173;
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
  P rF3978;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(binding_, 0);
  ARG(r_, 1);
  T3 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  check_type(T3,VARREF(YevalSmoduleYLstatic_global_environmentG));
  rF3978 = T3;
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),rF3978);
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
  P tmpF3979;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(r_, 1);
  T4 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),r_);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),T4,name_,YPfalse);
  tmpF3979 = T3;
  if (tmpF3979 != YPfalse) {
    T0 = tmpF3979;
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
  P t2_dependentsF3983;
  P t1_dependentsF3982;
  P t2_imp_bindingsF3981;
  P t1_imp_bindingsF3980;
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
        t1_imp_bindingsF3980 = T10;
        T9 = CALL1(1,VARREF(YevalSmoduleYtransaction_implemented_bindings),t2_);
        t2_imp_bindingsF3981 = T9;
        T8 = CALL1(1,VARREF(YevalSmoduleYtransaction_dependents),t1_);
        t1_dependentsF3982 = T8;
        T7 = CALL1(1,VARREF(YevalSmoduleYtransaction_dependents),t2_);
        t2_dependentsF3983 = T7;
        T5 = FUNFAB(fun_65,1,t1_imp_bindingsF3980);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T5,t2_imp_bindingsF3981);
        T6 = FUNFAB(fun_66,1,t1_dependentsF3982);
        CALL2(1,VARREF(YgooScolsScolYdo_keyed),T6,t2_dependentsF3983);
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
  P valueF3984;
  P T0,T1;
LINK_STACK();
  T0 = CALL1(1,VARREF(Ynew),VARREF(YevalSmoduleYLtransactionG));
  DYNSET(YevalSmoduleYTcurrent_subtransactionT,T0);
  T1 = CALL0(0,FREEREF(0));
  valueF3984 = T1;
  BOXPUT(YPtrue,FREEREF(1));
UNLINK_STACK();
  QRET(valueF3984);
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
  P savedF3986;
  P successQF3985;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(module_, 0);
  ARG(thunk_, 1);
  successQF3985 = YPfalse;
  successQF3985 = BOXFAB(successQF3985);
  savedF3986 = DYNREF(YevalSmoduleYTcurrent_subtransactionT);
  T2 = FUNFAB(fun_71,2,thunk_,successQF3985);
  T3 = FUNFAB(fun_72,3,successQF3985,module_,savedF3986);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_x_1481_74) {
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
  P x_1480F3999;
  P x_1480F3998;
  P x_1480F3997;
  P x_1480F3996;
  P x_1480F3995;
  P x_1480F3994;
  P x_1480F3993;
  P x_1480F3992;
  P x_1480F3991;
  P bodyF3990;
  P moduleF3989;
  P x_1480F3988;
  P x_1481F3987;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(return_, 0);
  T26 = FUNSHELL(0,fun_x_1481_74,2);
  x_1481F3987 = T26;
  FUNINIT(x_1481F3987, 2,FREEREF(0),return_);
  x_1480F3988 = FREEREF(0);
  moduleF3989 = YPfalse;
  bodyF3990 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1480F3988,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1480F3988,LITREF(lit_143),x_1481F3987);
    x_1480F3991 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1480F3991,x_1481F3987);
    x_1480F3992 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1480F3992,x_1481F3987);
    moduleF3989 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1480F3992);
    x_1480F3993 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1480F3993,x_1481F3987);
    x_1480F3994 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1480F3994,x_1481F3987);
    T10 = CALL1(1,VARREF(Ytail),x_1480F3993);
    x_1480F3995 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1480F3995,x_1481F3987);
    T14 = CALL1(1,VARREF(Ytail),x_1480F3991);
    x_1480F3996 = T14;
    bodyF3990 = x_1480F3996;
    x_1480F3997 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1480F3997,x_1481F3987);
    x_1480F3998 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1480F3998,x_1481F3987);
    T6 = CALL1(1,VARREF(Ytail),x_1480F3997);
    x_1480F3999 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1480F3999,x_1481F3987);
  } else {
    T16 = CALL2(1,x_1481F3987,LITREF(lit_144),x_1480F3988);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T20 = moduleF3989;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_145));
  T24 = CALL1(1,VARREF(Ylst),Ynil);
  T25 = bodyF3990;
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_146));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T21,LITREF(lit_146));
UNLINK_STACK();
  QRET(T17);
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

LOCCODEDEF(fun_module_uses_c_includes_109) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_uses_c_includes));
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

LOCCODEDEF(fun_module_uses_c_libraries_111) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSmoduleYmodule_uses_c_libraries));
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

LOCCODEDEF(fun_module_exports_113) {
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
  P tmpF4001;
  P existingF4000;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(b_, 0);
  ARG(env_, 1);
  T8 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
  T7 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T8,env_);
  existingF4000 = T7;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4000,YPfalse);
  tmpF4001 = T3;
  if (tmpF4001 != YPfalse) {
    T1 = tmpF4001;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4000,b_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),b_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_215),T5,T6);
  } else {
  }
  CALL2(1,VARREF(YevalSmoduleYinsert_globalX),b_,env_);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_insert_and_mangle_globalX_115) {
  P binding_,mangle_prefix_,r_;
  P rF4002;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  ARG(mangle_prefix_, 1);
  ARG(r_, 2);
  T4 = CALL1(1,VARREF(YevalSmoduleYfind_static_global_environment),r_);
  check_type(T4,VARREF(YevalSmoduleYLstatic_global_environmentG));
  rF4002 = T4;
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),rF4002);
  T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T3);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYimport_and_mangle_globalX) {
  P b_,mangle_prefix_,env_;
  P tmpF4004;
  P existingF4003;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  ARG(mangle_prefix_, 1);
  ARG(env_, 2);
  T10 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
  T9 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T10);
  T8 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T9,env_);
  existingF4003 = T8;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4003,YPfalse);
  tmpF4004 = T3;
  if (tmpF4004 != YPfalse) {
    T1 = tmpF4004;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4003,b_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T5 = CALL2(1,VARREF(YgooSmacrosYcat_sym),mangle_prefix_,T6);
    T7 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),b_);
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_220),T5,T7);
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

LOCCODEDEF(fun_118) {
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
  T1 = FUNFAB(fun_118,1,f_);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_modules),loader_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_module_type_120) {
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
  P tmpF4005;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_modules),loader_);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),T3,name_,YPfalse);
  tmpF4005 = T2;
  if (tmpF4005 != YPfalse) {
    T0 = tmpF4005;
  } else {
    T1 = CALL2(1,VARREF(YevalSmoduleYload_and_register_module),loader_,name_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_123) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSmoduleYload_module),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_124) {
  P x_1483F4008;
  P x_1482F4007;
  P tup33F4006;
  P T0,T1,T2,T3;
LINK_STACK();
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_stack),FREEREF(0));
  T2 = CALL1(1,VARREF(YgooScolsSseqxYpopX),T3);
  tup33F4006 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F4006,YPint((P)0));
  x_1482F4007 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F4006,YPint((P)1));
  x_1483F4008 = T0;
  CALL2(1,VARREF(YevalSmoduleYmodule_loader_stack_setter),x_1482F4007,FREEREF(0));
UNLINK_STACK();
  QRET(x_1483F4008);
}

FUNCODEDEF(YevalSmoduleYload_and_register_module) {
  P loader_,name_;
  P modF4012;
  P indentF4011;
  P depthF4010;
  P stackF4009;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_stack),loader_);
  stackF4009 = T10;
  T9 = CALL1(1,VARREF(YgooStypesYlen),stackF4009);
  depthF4010 = T9;
  T8 = CALL2(1,VARREF(YgooScolsSseqYrepeat),LITREF(lit_234),depthF4010);
  indentF4011 = T8;
  T0 = CALL2(1,VARREF(YgooScolsScolYmemQ),stackF4009,name_);
  if (T0 != YPfalse) {
    T2 = CALL1(1,VARREF(Yhead),stackF4009);
    T1 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_235),T2,name_);
  } else {
  }
  CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_236),indentF4011,name_);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_stack),loader_);
  T3 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T4,name_);
  CALL2(1,VARREF(YevalSmoduleYmodule_loader_stack_setter),T3,loader_);
  T6 = FUNFAB(fun_123,2,loader_,name_);
  T7 = FUNFAB(fun_124,1,loader_);
  T5 = with_cleanup(T6,T7);
  modF4012 = T5;
  CALL2(1,VARREF(YevalSmoduleYregister_moduleX),loader_,modF4012);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_237),indentF4011);
UNLINK_STACK();
  RET(modF4012);
}

FUNCODEDEF(YevalSmoduleYexport_bindingX) {
  P module_,name_,binding_;
  P tmpF4015;
  P existingF4014;
  P exportsF4013;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(module_, 0);
  ARG(name_, 1);
  ARG(binding_, 2);
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),module_);
  exportsF4013 = T6;
  T5 = CALL3(1,VARREF(YgooScolsScolYelt_or),exportsF4013,name_,YPfalse);
  existingF4014 = T5;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4014,YPfalse);
  tmpF4015 = T3;
  if (tmpF4015 != YPfalse) {
    T1 = tmpF4015;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),existingF4014,binding_);
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T4 = CALL5(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_242),existingF4014,binding_,module_,name_);
  } else {
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),binding_,exportsF4013,name_);
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

LOCCODEDEF(fun_128) {
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
    T4 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_248),T5,T6);
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
  T1 = FUNFAB(fun_128,1,mod_);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_130) {
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

LOCCODEDEF(fun_131) {
  P mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_130,3,FREEREF(0),mod_,FREEREF(1));
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T2 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_add_user_132) {
  P modname_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),modname_,FREEREF(0),modname_);
    T4 = FUNFAB(fun_131,2,modname_,FREEREF(1));
    T3 = CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T4,FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_133) {
  P v_;
  P UF4016;
  P T0,T1,T2;
LINK_STACK();
  ARG(v_, 0);
  T2 = BOXGET(FREEREF(0));
  UF4016 = T2;
  T1 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF4016,v_);
  T0 = BOXPUT(T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYcompute_transitive_users) {
  P loader_,modnames_;
  P packer_F4019;
  P add_userF4018;
  P usersF4017;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
  T6 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)100));
  usersF4017 = T6;
  T5 = FUNSHELL(0,fun_add_user_132,3);
  add_userF4018 = T5;
  FUNINIT(add_userF4018, 3,usersF4017,add_userF4018,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),add_userF4018,modnames_);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F4019 = T4;
  packer_F4019 = BOXFAB(packer_F4019);
  T1 = FUNFAB(fun_133,1,packer_F4019);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,usersF4017);
  T3 = BOXGET(packer_F4019);
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

LOCCODEDEF(fun_136) {
  P modname_;
  P modF4020;
  P T0,T1,T2;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_modules),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,modname_);
  modF4020 = T1;
  T0 = CALL2(1,VARREF(YevalSmoduleYremove_module_internalX),FREEREF(0),modF4020);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYremove_modules_by_nameX) {
  P loader_,modnames_;
  P remove_namesF4021;
  P T0,T1;
LINK_STACK();
  ARG(loader_, 0);
  ARG(modnames_, 1);
  T1 = CALL2(1,VARREF(YevalSmoduleYcompute_transitive_users),loader_,modnames_);
  remove_namesF4021 = T1;
  T0 = FUNFAB(fun_136,1,loader_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,remove_namesF4021);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(YevalSmoduleYmodule_name_to_relpath) {
  P name_;
  P namestrF4022;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = CALL1(1,VARREF(Ysym_name),name_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSchrYto_lower),T3);
  namestrF4022 = T2;
  T1 = CALL2(1,VARREF(YgooScolsSseqYsplit),namestrF4022,YPchr((P)47));
  T0 = CALL2(1,VARREF(YgooScolsSseqYjoin),T1,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_zap_referenced_bindingsX_139) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  if (VARREF(YevalSmoduleYTtracing_refsQT) != YPfalse) {
    T0 = CALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_265));
  } else {
  }
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_referenced_bindings),mod_);
  T1 = CALL1(1,VARREF(YgooScolsScolxYzapX),T2);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_zap_referenced_bindingsX_140) {
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

LOCCODEDEF(fun_register_referenced_binding_141) {
  P mod_,b_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(mod_, 0);
  ARG(b_, 1);
  if (VARREF(YevalSmoduleYTtracing_refsQT) != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T0 = CALL3(1,VARREF(YgooSioSwriteYpost),LITREF(lit_269),T1,DYNREF(YevalSmoduleYTdynamic_compilationQT));
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

LOCCODEDEF(fun_register_referenced_binding_142) {
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

LOCCODEDEF(fun_143) {
  P T0;
LINK_STACK();
  DYNSET(YevalSmoduleYTnow_rt_envT,FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYload_in),FREEREF(1),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_144) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTnow_rt_envT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_145) {
  P x_1484F4023;
  P T0,T1,T2;
LINK_STACK();
  CALL2(1,VARREF(YevalSmoduleYinstall_initial_bindings),FREEREF(0),FREEREF(1));
  x_1484F4023 = DYNREF(YevalSmoduleYTnow_rt_envT);
  T1 = FUNFAB(fun_143,2,FREEREF(0),FREEREF(2));
  T2 = FUNFAB(fun_144,1,x_1484F4023);
  T0 = with_cleanup(T1,T2);
  CALL2(1,VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ_setter),YPtrue,FREEREF(0));
  BOXPUT(YPtrue,FREEREF(3));
UNLINK_STACK();
  QRET(FREEREF(4));
}

LOCCODEDEF(fun_146) {
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

LOCCODEDEF(fun_load_module_147) {
  P loader_,name_;
  P fileF4029;
  P modpathF4028;
  P keepmodQF4027;
  P envF4026;
  P moduleF4025;
  P typeF4024;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_module_type),loader_);
  typeF4024 = T10;
  T9 = CALL3(1,VARREF(Ynew),typeF4024,VARREF(YevalSmoduleYmodule_name),name_);
  moduleF4025 = T9;
  T8 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),moduleF4025,loader_,YPfalse);
  envF4026 = T8;
  keepmodQF4027 = YPfalse;
  keepmodQF4027 = BOXFAB(keepmodQF4027);
  T7 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  modpathF4028 = T7;
  T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),modpathF4028,VARREF(YgooSsystemYTmodule_search_pathT));
  fileF4029 = T6;
  CALL3(1,VARREF(YevalSmoduleYset_module_environments),moduleF4025,envF4026,envF4026);
  T1 = CALL1(1,VARREF(Ynot),fileF4029);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_275),modpathF4028);
  } else {
  }
  T4 = FUNFAB(fun_145,5,envF4026,loader_,fileF4029,keepmodQF4027,moduleF4025);
  T5 = FUNFAB(fun_146,2,keepmodQF4027,moduleF4025);
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
  P moduleF4030;
  P T0,T1;
LINK_STACK();
  ARG(modname_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_module),modname_);
  moduleF4030 = T1;
  CALL1(1,VARREF(YevalSmoduleYensure_module_data),moduleF4030);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),moduleF4030);
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
  P loaderF4031;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(modname_, 0);
  T6 = CALL0(1,VARREF(YevalSmoduleYruntime_module_loader));
  loaderF4031 = T6;
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_stack),loaderF4031);
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
  P envF4035;
  P modF4034;
  P typeF4033;
  P loaderF4032;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  ARG(data_, 1);
  T4 = CALL0(1,VARREF(YevalSmoduleYruntime_module_loader));
  loaderF4032 = T4;
  T3 = CALL1(1,VARREF(YevalSmoduleYmodule_loader_module_type),loaderF4032);
  typeF4033 = T3;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),modname_);
  T1 = CALL3(1,VARREF(Ynew),typeF4033,VARREF(YevalSmoduleYmodule_name),T2);
  modF4034 = T1;
  T0 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),modF4034,loaderF4032,YPtrue);
  envF4035 = T0;
  CALL2(1,VARREF(YevalSmoduleYmodule_data_processedQ_setter),YPfalse,modF4034);
  CALL3(1,VARREF(YevalSmoduleYset_module_environments),modF4034,envF4035,envF4035);
  CALL2(1,VARREF(YevalSmoduleYmodule_runtime_data_setter),data_,modF4034);
  CALL2(1,VARREF(YevalSmoduleYregister_moduleX),loaderF4032,modF4034);
UNLINK_STACK();
  RET(modF4034);
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
  P bindingF4037;
  P home_envF4036;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(from_mod_, 2);
  ARG(original_name_, 3);
  T8 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),from_mod_);
  home_envF4036 = T8;
  T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),original_name_);
  T6 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T7,home_envF4036);
  bindingF4037 = T6;
  T0 = CALL1(1,VARREF(Ynot),bindingF4037);
  if (T0 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSmoduleYmodule_name),from_mod_);
    T3 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T1 = CALL4(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_291),original_name_,T2,T3);
  } else {
  }
  T5 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T4 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4037,T5);
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

LOCCODEDEF(fun_ensure_module_data_157) {
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
  P bindingF4038;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_297),VARREF(YevalSmoduleYbinding_module),mod_,VARREF(YevalSmoduleYbinding_name),T3,VARREF(YevalSmoduleYbinding_freeQ),YPfalse,VARREF(YevalSmoduleYbinding_locative),loc_);
  bindingF4038 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4038,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_dynamic_binding) {
  P mod_,name_,loc_;
  P bindingF4039;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(loc_, 2);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_300),VARREF(YevalSmoduleYbinding_module),mod_,VARREF(YevalSmoduleYbinding_name),T3,VARREF(YevalSmoduleYbinding_freeQ),YPfalse,VARREF(YevalSmoduleYbinding_locative),loc_);
  bindingF4039 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4039,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_other_binding) {
  P mod_,name_;
  P bindingF4040;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T2 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),LITREF(lit_303),VARREF(YevalSmoduleYbinding_module),mod_,VARREF(YevalSmoduleYbinding_name),T3,VARREF(YevalSmoduleYbinding_freeQ),YPtrue);
  bindingF4040 = T2;
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T0 = CALL2(1,VARREF(YevalSmoduleYinsert_globalX),bindingF4040,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSmoduleYreloader_do_export) {
  P mod_,name_,as_name_;
  P bindingF4041;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  ARG(as_name_, 2);
  T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),name_);
  T7 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T5 = CALL2(1,VARREF(YevalSmoduleYfind_binding),T6,T7);
  bindingF4041 = T5;
  if (bindingF4041 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),as_name_);
    T1 = CALL3(1,VARREF(YevalSmoduleYexport_bindingX),mod_,T2,bindingF4041);
    T0 = T1;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T3 = CALL3(1,VARREF(YevalSmoduleYnamespace_error),LITREF(lit_306),name_,T4);
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
  P new_envF4042;
  P T0,T1;
LINK_STACK();
  ARG(module_, 0);
  ARG(module_loader_, 1);
  ARG(allow_foreign_namesQ_, 2);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)2000));
  T0 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_module),module_,VARREF(YevalSmoduleYenvironment_module_loader),module_loader_,VARREF(YevalSmoduleYenvironment_next),VARREF(YevalSmoduleYDnul_static_environment),VARREF(YevalSmoduleYenvironment_allows_foreign_namesQ),allow_foreign_namesQ_,VARREF(YevalSmoduleYenvironment_bindings),T1);
  new_envF4042 = T0;
UNLINK_STACK();
  RET(new_envF4042);
}

LOCCODEDEF(fun_164) {
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
  P new_envF4044;
  P loaderF4043;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(module_, 0);
  ARG(src_module_, 1);
  ARG(excluded_, 2);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),src_module_);
  T3 = CALL1(1,VARREF(YevalSmoduleYenvironment_module_loader),T4);
  loaderF4043 = T3;
  T2 = CALL3(1,VARREF(YevalSmoduleYfab_static_global_environment),module_,loaderF4043,YPfalse);
  new_envF4044 = T2;
  T0 = FUNFAB(fun_164,2,excluded_,new_envF4044);
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),src_module_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
UNLINK_STACK();
  RET(new_envF4044);
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
  P bF4048;
  P x_1487F4047;
  P modF4046;
  P x_1485F4045;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(f_, 0);
  ARG(env_, 1);
  ARG(walkedQ_, 2);
  ARG(mods_, 3);
  T12 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),env_);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  x_1485F4045 = T11;
  LOOP_174: {
    P a174_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1485F4045);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1485F4045);
      modF4046 = T10;
      T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),mods_,modF4046,YPfalse);
      T3 = CALL1(1,VARREF(Ynot),T4);
      if (T3 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,mods_,modF4046);
        T7 = CALL1(1,VARREF(YevalSmoduleYmodule_name),modF4046);
        T6 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),T7);
        T5 = CALL4(1,VARREF(YevalSmoduleYwalk_bindingsT),f_,T6,walkedQ_,mods_);
      } else {
      }
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1485F4045);
      a174_0 = T9;
      x_1485F4045 = a174_0;
      goto LOOP_174;
      T0 = T8;
    } else {
      T0 = YPfalse;
    }
  }
  T23 = CALL1(1,VARREF(YevalSmoduleYenvironment_bindings),env_);
  T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
  x_1487F4047 = T22;
  LOOP_175: {
    P a175_0;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1487F4047);
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1487F4047);
      bF4048 = T21;
      T17 = CALL3(1,VARREF(YgooScolsScolYelt_or),walkedQ_,bF4048,YPfalse);
      T16 = CALL1(1,VARREF(Ynot),T17);
      if (T16 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,walkedQ_,bF4048);
        T18 = CALL1(0,f_,bF4048);
      } else {
      }
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1487F4047);
      a175_0 = T20;
      x_1487F4047 = a175_0;
      goto LOOP_175;
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
  fun_namespace_error_0 = YPfab_met(FUNCODEREF(fun_namespace_error_0),T3,LITREF(lit_1),LITREF(lit_2),sloc(14),YPsb((P)"(fun ((msg <str>) (args ...)) (sig (new <namespace-error> condition-message msg condition-arguments (as <lst> args))))"));
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
  fun_binding_name_1 = YPfab_met(FUNCODEREF(fun_binding_name_1),T9,LITREF(lit_5),LITREF(lit_6),sloc(31),YPsb((P)"(fun ((_x <binding>)) (prop-value _x binding-name))"));
  T11 = VARREF_OR(YevalSmoduleYbinding_name,YPfalse);
  T12 = fun_binding_name_1;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YevalSmoduleYbinding_name,T10);
  lit_7 = YPPsym((P)"binding-name-setter");
  lit_8 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbinding_nameG),VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_name_setter_2 = YPfab_met(FUNCODEREF(fun_binding_name_setter_2),T13,LITREF(lit_7),LITREF(lit_8),sloc(31),YPsb((P)"(fun ((_z <binding-name>) (_x <binding>)) (prop-value-setter _z _x binding-name))"));
  T15 = VARREF_OR(YevalSmoduleYbinding_name_setter,YPfalse);
  T16 = fun_binding_name_setter_2;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalSmoduleYbinding_name_setter,T14);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLbindingG),VARREF(YevalSmoduleYbinding_name),VARREF(YevalSmoduleYbinding_name_setter),VARREF(YevalSmoduleYLbinding_nameG),VARREF(YPprop_unbound_error));
  lit_9 = YPPsym((P)"binding-mangled-name");
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_3 = YPfab_met(FUNCODEREF(fun_binding_mangled_name_3),T17,LITREF(lit_9),LITREF(lit_10),sloc(32),YPsb((P)"(fun ((_x <binding>)) (prop-value _x binding-mangled-name))"));
  T19 = VARREF_OR(YevalSmoduleYbinding_mangled_name,YPfalse);
  T20 = fun_binding_mangled_name_3;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YevalSmoduleYbinding_mangled_name,T18);
  lit_11 = YPPsym((P)"binding-mangled-name-setter");
  lit_12 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T21 = YPfab_sig(YPPlist(2,T22,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_mangled_name_setter_4 = YPfab_met(FUNCODEREF(fun_binding_mangled_name_setter_4),T21,LITREF(lit_11),LITREF(lit_12),sloc(32),YPsb((P)"(fun ((_z (t? <str>)) (_x <binding>)) (prop-value-setter _z _x binding-mangled-name))"));
  T24 = VARREF_OR(YevalSmoduleYbinding_mangled_name_setter,YPfalse);
  T25 = fun_binding_mangled_name_setter_4;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSmoduleYbinding_mangled_name_setter,T23);
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T26,YPfalse,LITREF(lit_13),sloc(32),YPsb((P)"(fun ((_x <any>)) #f)"));
  T27 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T28 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLbindingG),VARREF(YevalSmoduleYbinding_mangled_name),VARREF(YevalSmoduleYbinding_mangled_name_setter),T27,T28);
  lit_14 = YPPsym((P)"binding-type");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_type_6 = YPfab_met(FUNCODEREF(fun_binding_type_6),T29,LITREF(lit_14),LITREF(lit_15),sloc(33),YPsb((P)"(fun ((_x <binding>)) (prop-value _x binding-type))"));
  T31 = VARREF_OR(YevalSmoduleYbinding_type,YPfalse);
  T32 = fun_binding_type_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSmoduleYbinding_type,T30);
  lit_16 = YPPsym((P)"binding-type-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_type_setter_7 = YPfab_met(FUNCODEREF(fun_binding_type_setter_7),T33,LITREF(lit_16),LITREF(lit_17),sloc(33),YPsb((P)"(fun ((_z <any>) (_x <binding>)) (prop-value-setter _z _x binding-type))"));
  T35 = VARREF_OR(YevalSmoduleYbinding_type_setter,YPfalse);
  T36 = fun_binding_type_setter_7;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSmoduleYbinding_type_setter,T34);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLbindingG),VARREF(YevalSmoduleYbinding_type),VARREF(YevalSmoduleYbinding_type_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"binding-inferred-type");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_8 = YPfab_met(FUNCODEREF(fun_binding_inferred_type_8),T37,LITREF(lit_18),LITREF(lit_19),sloc(34),YPsb((P)"(fun ((_x <binding>)) (prop-value _x binding-inferred-type))"));
  T39 = VARREF_OR(YevalSmoduleYbinding_inferred_type,YPfalse);
  T40 = fun_binding_inferred_type_8;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSmoduleYbinding_inferred_type,T38);
  lit_20 = YPPsym((P)"binding-inferred-type-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLbindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_inferred_type_setter_9 = YPfab_met(FUNCODEREF(fun_binding_inferred_type_setter_9),T41,LITREF(lit_20),LITREF(lit_21),sloc(34),YPsb((P)"(fun ((_z <any>) (_x <binding>)) (prop-value-setter _z _x binding-inferred-type))"));
  T43 = VARREF_OR(YevalSmoduleYbinding_inferred_type_setter,YPfalse);
  T44 = fun_binding_inferred_type_setter_9;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSmoduleYbinding_inferred_type_setter,T42);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T45,YPfalse,LITREF(lit_22),sloc(34),YPsb((P)"(fun ((_x <any>)) $bot)"));
  T46 = fun_10;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLbindingG),VARREF(YevalSmoduleYbinding_inferred_type),VARREF(YevalSmoduleYbinding_inferred_type_setter),VARREF(YLanyG),T46);
  lit_23 = YPPsym((P)"<global-box>");
  T48 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T47 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_23),T48);
  VARSET(YevalSmoduleYLglobal_boxG,T47);
  lit_24 = YPPsym((P)"global-box-value");
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLglobal_boxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_global_box_value_11 = YPfab_met(FUNCODEREF(fun_global_box_value_11),T49,LITREF(lit_24),LITREF(lit_25),sloc(39),YPsb((P)"(fun ((_x <global-box>)) (prop-value _x global-box-value))"));
  T51 = VARREF_OR(YevalSmoduleYglobal_box_value,YPfalse);
  T52 = fun_global_box_value_11;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YevalSmoduleYglobal_box_value,T50);
  lit_26 = YPPsym((P)"global-box-value-setter");
  lit_27 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLglobal_boxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_global_box_value_setter_12 = YPfab_met(FUNCODEREF(fun_global_box_value_setter_12),T53,LITREF(lit_26),LITREF(lit_27),sloc(39),YPsb((P)"(fun ((_z <any>) (_x <global-box>)) (prop-value-setter _z _x global-box-value))"));
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
  fun_binding_kind_13 = YPfab_met(FUNCODEREF(fun_binding_kind_13),T60,LITREF(lit_29),LITREF(lit_30),sloc(43),YPsb((P)"(fun ((_x <module-binding>)) (prop-value _x binding-kind))"));
  T62 = VARREF_OR(YevalSmoduleYbinding_kind,YPfalse);
  T63 = fun_binding_kind_13;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSmoduleYbinding_kind,T61);
  lit_31 = YPPsym((P)"binding-kind-setter");
  lit_32 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_kind_setter_14 = YPfab_met(FUNCODEREF(fun_binding_kind_setter_14),T64,LITREF(lit_31),LITREF(lit_32),sloc(43),YPsb((P)"(fun ((_z <any>) (_x <module-binding>)) (prop-value-setter _z _x binding-kind))"));
  T66 = VARREF_OR(YevalSmoduleYbinding_kind_setter,YPfalse);
  T67 = fun_binding_kind_setter_14;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSmoduleYbinding_kind_setter,T65);
  lit_33 = YPPlist(1,YPPsym((P)"_x"));
  lit_34 = YPPsym((P)"global");
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T68,YPfalse,LITREF(lit_33),sloc(43),YPsb((P)"(fun ((_x <any>)) 'global)"));
  T69 = fun_15;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_kind),VARREF(YevalSmoduleYbinding_kind_setter),VARREF(YLanyG),T69);
  lit_35 = YPPsym((P)"binding-module");
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_module_16 = YPfab_met(FUNCODEREF(fun_binding_module_16),T70,LITREF(lit_35),LITREF(lit_36),sloc(44),YPsb((P)"(fun ((_x <module-binding>)) (prop-value _x binding-module))"));
  T72 = VARREF_OR(YevalSmoduleYbinding_module,YPfalse);
  T73 = fun_binding_module_16;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSmoduleYbinding_module,T71);
  lit_37 = YPPsym((P)"binding-module-setter");
  lit_38 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_module_setter_17 = YPfab_met(FUNCODEREF(fun_binding_module_setter_17),T74,LITREF(lit_37),LITREF(lit_38),sloc(44),YPsb((P)"(fun ((_z <any>) (_x <module-binding>)) (prop-value-setter _z _x binding-module))"));
  T76 = VARREF_OR(YevalSmoduleYbinding_module_setter,YPfalse);
  T77 = fun_binding_module_setter_17;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSmoduleYbinding_module_setter,T75);
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T78,YPfalse,LITREF(lit_39),sloc(44),YPsb((P)"(fun ((_x <any>)) #f)"));
  T79 = fun_18;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_module),VARREF(YevalSmoduleYbinding_module_setter),VARREF(YLanyG),T79);
  lit_40 = YPPsym((P)"binding-free?");
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_19 = YPfab_met(FUNCODEREF(fun_binding_freeQ_19),T80,LITREF(lit_40),LITREF(lit_41),sloc(45),YPsb((P)"(fun ((_x <module-binding>)) (prop-value _x binding-free?))"));
  T82 = VARREF_OR(YevalSmoduleYbinding_freeQ,YPfalse);
  T83 = fun_binding_freeQ_19;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSmoduleYbinding_freeQ,T81);
  lit_42 = YPPsym((P)"binding-free?-setter");
  lit_43 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_freeQ_setter_20 = YPfab_met(FUNCODEREF(fun_binding_freeQ_setter_20),T84,LITREF(lit_42),LITREF(lit_43),sloc(45),YPsb((P)"(fun ((_z <log>) (_x <module-binding>)) (prop-value-setter _z _x binding-free?))"));
  T86 = VARREF_OR(YevalSmoduleYbinding_freeQ_setter,YPfalse);
  T87 = fun_binding_freeQ_setter_20;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSmoduleYbinding_freeQ_setter,T85);
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPfab_met(FUNCODEREF(fun_21),T88,YPfalse,LITREF(lit_44),sloc(45),YPsb((P)"(fun ((_x <any>)) #f)"));
  T89 = fun_21;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_freeQ),VARREF(YevalSmoduleYbinding_freeQ_setter),VARREF(YLlogG),T89);
  lit_45 = YPPsym((P)"binding-info");
  lit_46 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_info_22 = YPfab_met(FUNCODEREF(fun_binding_info_22),T90,LITREF(lit_45),LITREF(lit_46),sloc(46),YPsb((P)"(fun ((_x <module-binding>)) (prop-value _x binding-info))"));
  T92 = VARREF_OR(YevalSmoduleYbinding_info,YPfalse);
  T93 = fun_binding_info_22;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSmoduleYbinding_info,T91);
  lit_47 = YPPsym((P)"binding-info-setter");
  lit_48 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_info_setter_23 = YPfab_met(FUNCODEREF(fun_binding_info_setter_23),T94,LITREF(lit_47),LITREF(lit_48),sloc(46),YPsb((P)"(fun ((_z <any>) (_x <module-binding>)) (prop-value-setter _z _x binding-info))"));
  T96 = VARREF_OR(YevalSmoduleYbinding_info_setter,YPfalse);
  T97 = fun_binding_info_setter_23;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSmoduleYbinding_info_setter,T95);
  lit_49 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T98,YPfalse,LITREF(lit_49),sloc(46),YPsb((P)"(fun ((_x <any>)) #f)"));
  T99 = fun_24;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_info),VARREF(YevalSmoduleYbinding_info_setter),VARREF(YLanyG),T99);
  lit_50 = YPPsym((P)"binding-prop");
  lit_51 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_prop_25 = YPfab_met(FUNCODEREF(fun_binding_prop_25),T100,LITREF(lit_50),LITREF(lit_51),sloc(47),YPsb((P)"(fun ((_x <module-binding>)) (prop-value _x binding-prop))"));
  T102 = VARREF_OR(YevalSmoduleYbinding_prop,YPfalse);
  T103 = fun_binding_prop_25;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSmoduleYbinding_prop,T101);
  lit_52 = YPPsym((P)"binding-prop-setter");
  lit_53 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_prop_setter_26 = YPfab_met(FUNCODEREF(fun_binding_prop_setter_26),T104,LITREF(lit_52),LITREF(lit_53),sloc(47),YPsb((P)"(fun ((_z <any>) (_x <module-binding>)) (prop-value-setter _z _x binding-prop))"));
  T106 = VARREF_OR(YevalSmoduleYbinding_prop_setter,YPfalse);
  T107 = fun_binding_prop_setter_26;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSmoduleYbinding_prop_setter,T105);
  lit_54 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T108,YPfalse,LITREF(lit_54),sloc(47),YPsb((P)"(fun ((_x <any>)) #f)"));
  T109 = fun_27;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYbinding_prop),VARREF(YevalSmoduleYbinding_prop_setter),VARREF(YLanyG),T109);
  lit_55 = YPPsym((P)"binding-module-name");
  lit_56 = YPPlist(1,YPPsym((P)"b"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_binding_module_name_28 = YPfab_met(FUNCODEREF(fun_binding_module_name_28),T110,LITREF(lit_55),LITREF(lit_56),sloc(49),YPsb((P)"(fun ((b <module-binding>) => <sym>) (def mod (binding-module b)) (if mod (module-name mod) $goo-boot-module-name))"));
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
  fun_environment_next_29 = YPfab_met(FUNCODEREF(fun_environment_next_29),T2,LITREF(lit_58),LITREF(lit_59),sloc(88),YPsb((P)"(fun ((_x <static-environment>)) (prop-value _x environment-next))"));
  T4 = VARREF_OR(YevalSmoduleYenvironment_next,YPfalse);
  T5 = fun_environment_next_29;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSmoduleYenvironment_next,T3);
  lit_60 = YPPsym((P)"environment-next-setter");
  lit_61 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_next_setter_30 = YPfab_met(FUNCODEREF(fun_environment_next_setter_30),T6,LITREF(lit_60),LITREF(lit_61),sloc(88),YPsb((P)"(fun ((_z <any>) (_x <static-environment>)) (prop-value-setter _z _x environment-next))"));
  T8 = VARREF_OR(YevalSmoduleYenvironment_next_setter,YPfalse);
  T9 = fun_environment_next_setter_30;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSmoduleYenvironment_next_setter,T7);
  lit_62 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T10,YPfalse,LITREF(lit_62),sloc(88),YPsb((P)"(fun ((_x <any>)) #f)"));
  T11 = fun_31;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_environmentG),VARREF(YevalSmoduleYenvironment_next),VARREF(YevalSmoduleYenvironment_next_setter),VARREF(YLanyG),T11);
  lit_63 = YPPsym((P)"environment-bindings");
  lit_64 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_bindings_32 = YPfab_met(FUNCODEREF(fun_environment_bindings_32),T12,LITREF(lit_63),LITREF(lit_64),sloc(89),YPsb((P)"(fun ((_x <static-environment>)) (prop-value _x environment-bindings))"));
  T14 = VARREF_OR(YevalSmoduleYenvironment_bindings,YPfalse);
  T15 = fun_environment_bindings_32;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSmoduleYenvironment_bindings,T13);
  lit_65 = YPPsym((P)"environment-bindings-setter");
  lit_66 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_bindings_setter_33 = YPfab_met(FUNCODEREF(fun_environment_bindings_setter_33),T16,LITREF(lit_65),LITREF(lit_66),sloc(89),YPsb((P)"(fun ((_z <col>) (_x <static-environment>)) (prop-value-setter _z _x environment-bindings))"));
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
  fun_environment_module_34 = YPfab_met(FUNCODEREF(fun_environment_module_34),T22,LITREF(lit_68),LITREF(lit_69),sloc(93),YPsb((P)"(fun ((_x <static-global-environment>)) (prop-value _x environment-module))"));
  T24 = VARREF_OR(YevalSmoduleYenvironment_module,YPfalse);
  T25 = fun_environment_module_34;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSmoduleYenvironment_module,T23);
  lit_70 = YPPsym((P)"environment-module-setter");
  lit_71 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_setter_35 = YPfab_met(FUNCODEREF(fun_environment_module_setter_35),T26,LITREF(lit_70),LITREF(lit_71),sloc(93),YPsb((P)"(fun ((_z <any>) (_x <static-global-environment>)) (prop-value-setter _z _x environment-module))"));
  T28 = VARREF_OR(YevalSmoduleYenvironment_module_setter,YPfalse);
  T29 = fun_environment_module_setter_35;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSmoduleYenvironment_module_setter,T27);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_module),VARREF(YevalSmoduleYenvironment_module_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_72 = YPPsym((P)"environment-module-loader");
  lit_73 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_36 = YPfab_met(FUNCODEREF(fun_environment_module_loader_36),T30,LITREF(lit_72),LITREF(lit_73),sloc(96),YPsb((P)"(fun ((_x <static-global-environment>)) (prop-value _x environment-module-loader))"));
  T32 = VARREF_OR(YevalSmoduleYenvironment_module_loader,YPfalse);
  T33 = fun_environment_module_loader_36;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSmoduleYenvironment_module_loader,T31);
  lit_74 = YPPsym((P)"environment-module-loader-setter");
  lit_75 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_module_loader_setter_37 = YPfab_met(FUNCODEREF(fun_environment_module_loader_setter_37),T34,LITREF(lit_74),LITREF(lit_75),sloc(96),YPsb((P)"(fun ((_z <any>) (_x <static-global-environment>)) (prop-value-setter _z _x environment-module-loader))"));
  T36 = VARREF_OR(YevalSmoduleYenvironment_module_loader_setter,YPfalse);
  T37 = fun_environment_module_loader_setter_37;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSmoduleYenvironment_module_loader_setter,T35);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_module_loader),VARREF(YevalSmoduleYenvironment_module_loader_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_76 = YPPsym((P)"environment-uses-modules");
  lit_77 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_38 = YPfab_met(FUNCODEREF(fun_environment_uses_modules_38),T38,LITREF(lit_76),LITREF(lit_77),sloc(98),YPsb((P)"(fun ((_x <static-global-environment>)) (prop-value _x environment-uses-modules))"));
  T40 = VARREF_OR(YevalSmoduleYenvironment_uses_modules,YPfalse);
  T41 = fun_environment_uses_modules_38;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSmoduleYenvironment_uses_modules,T39);
  lit_78 = YPPsym((P)"environment-uses-modules-setter");
  lit_79 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_uses_modules_setter_39 = YPfab_met(FUNCODEREF(fun_environment_uses_modules_setter_39),T42,LITREF(lit_78),LITREF(lit_79),sloc(98),YPsb((P)"(fun ((_z <vec>) (_x <static-global-environment>)) (prop-value-setter _z _x environment-uses-modules))"));
  T44 = VARREF_OR(YevalSmoduleYenvironment_uses_modules_setter,YPfalse);
  T45 = fun_environment_uses_modules_setter_39;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSmoduleYenvironment_uses_modules_setter,T43);
  lit_80 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T46,YPfalse,LITREF(lit_80),sloc(98),YPsb((P)"(fun ((_x <any>)) (fab <vec> 0))"));
  T47 = fun_40;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YevalSmoduleYenvironment_uses_modules),VARREF(YevalSmoduleYenvironment_uses_modules_setter),VARREF(YgooScolsSvecYLvecG),T47);
  lit_81 = YPPsym((P)"environment-allows-foreign-names?");
  lit_82 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_41 = YPfab_met(FUNCODEREF(fun_environment_allows_foreign_namesQ_41),T48,LITREF(lit_81),LITREF(lit_82),sloc(102),YPsb((P)"(fun ((_x <static-global-environment>)) (prop-value _x environment-allows-foreign-names?))"));
  T50 = VARREF_OR(YevalSmoduleYenvironment_allows_foreign_namesQ,YPfalse);
  T51 = fun_environment_allows_foreign_namesQ_41;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSmoduleYenvironment_allows_foreign_namesQ,T49);
  lit_83 = YPPsym((P)"environment-allows-foreign-names?-setter");
  lit_84 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_environment_allows_foreign_namesQ_setter_42 = YPfab_met(FUNCODEREF(fun_environment_allows_foreign_namesQ_setter_42),T52,LITREF(lit_83),LITREF(lit_84),sloc(102),YPsb((P)"(fun ((_z <log>) (_x <static-global-environment>)) (prop-value-setter _z _x environment-allows-foreign-names?))"));
  T54 = VARREF_OR(YevalSmoduleYenvironment_allows_foreign_namesQ_setter,YPfalse);
  T55 = fun_environment_allows_foreign_namesQ_setter_42;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSmoduleYenvironment_allows_foreign_namesQ_setter,T53);
  lit_85 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T56,YPfalse,LITREF(lit_85),sloc(102),YPsb((P)"(fun ((_x <any>)) #f)"));
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
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T65,YPfalse,LITREF(lit_91),sloc(119),YPsb((P)"(fun (binding) (when (and (== (binding-kind binding) 'global) (binding-global-box binding) (== x (global-box-value (binding-global-box binding)))) (return (binding-name binding))))"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T64,YPfalse,LITREF(lit_90),sloc(117),YPsb((P)"(fun (return) (do-static-global-bindings (fun (binding) (when (and (== (binding-kind binding) 'global) (binding-global-box binding) (== x (global-box-value (binding-global-box binding)))) (return (binding-name binding)))) (runtime-environment 'goo/boot)) #f)"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_object_name_46 = YPfab_met(FUNCODEREF(fun_env_object_name_46),T63,LITREF(lit_88),LITREF(lit_89),sloc(116),YPsb((P)"(fun (x => <any>) (esc return (do-static-global-bindings (fun (binding) (when (and (== (binding-kind binding) 'global) (binding-global-box binding) (== x (global-box-value (binding-global-box binding)))) (return (binding-name binding)))) (runtime-environment 'goo/boot)) #f))"));
  T67 = VARREF_OR(YevalSmoduleYenv_object_name,YPfalse);
  T68 = fun_env_object_name_46;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSmoduleYenv_object_name,T66);
  lit_92 = YPPsym((P)"frame-bindings");
  lit_93 = YPPlist(1,YPPsym((P)"env"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_frame_bindings_47 = YPfab_met(FUNCODEREF(fun_frame_bindings_47),T69,LITREF(lit_92),LITREF(lit_93),sloc(129),YPsb((P)"(fun ((env <static-environment>) => <col>) (environment-bindings env))"));
  T71 = VARREF_OR(YevalSmoduleYframe_bindings,YPfalse);
  T72 = fun_frame_bindings_47;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSmoduleYframe_bindings,T70);
  lit_94 = YPPsym((P)"do-static-global-bindings");
  lit_95 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_static_global_bindings_48 = YPfab_met(FUNCODEREF(fun_do_static_global_bindings_48),T73,LITREF(lit_94),LITREF(lit_95),sloc(134),YPsb((P)"(fun ((f <fun>) (env <static-global-environment>)) (rep loop ((env env)) (unless (isa? env <static-nul-environment>) (do f (frame-bindings env)) (loop (environment-next env)))))"));
  T75 = VARREF_OR(YevalSmoduleYdo_static_global_bindings,YPfalse);
  T76 = fun_do_static_global_bindings_48;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSmoduleYdo_static_global_bindings,T74);
  lit_96 = YPPsym((P)"do-named-static-global-bindings");
  lit_97 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"env"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYdo_named_static_global_bindings = YPfab_met(FUNCODEREF(YevalSmoduleYdo_named_static_global_bindings),T77,LITREF(lit_96),LITREF(lit_97),sloc(141),YPsb((P)"(fun ((f <fun>) (env <static-global-environment>)) (rep loop ((env env)) (unless (isa? env <static-nul-environment>) (do-keyed f (frame-bindings env)) (loop (environment-next env)))))"));
  T78 = YevalSmoduleYdo_named_static_global_bindings;
  VARSET(YevalSmoduleYdo_named_static_global_bindings,T78);
  lit_98 = YPPsym((P)"insert-global!");
  lit_99 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"r"));
  T79 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalX_50 = YPfab_met(FUNCODEREF(fun_insert_globalX_50),T79,LITREF(lit_98),LITREF(lit_99),sloc(147),YPsb((P)"(fun (binding r) (def (r <static-global-environment>) (find-static-global-environment r)) (set (elt (environment-bindings r) (binding-name binding)) binding))"));
  T81 = VARREF_OR(YevalSmoduleYinsert_globalX,YPfalse);
  T82 = fun_insert_globalX_50;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YevalSmoduleYinsert_globalX,T80);
  lit_100 = YPPsym((P)"insert-globals!");
  lit_101 = YPPlist(2,YPPsym((P)"bindings"),YPPsym((P)"r"));
  lit_102 = YPPlist(1,YPPsym((P)"b"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T84,YPfalse,LITREF(lit_102),sloc(152),YPsb((P)"(fun (b) (insert-global! b r))"));
  T83 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_globalsX_52 = YPfab_met(FUNCODEREF(fun_insert_globalsX_52),T83,LITREF(lit_100),LITREF(lit_101),sloc(151),YPsb((P)"(fun ((bindings <lst>) r) (do (fun (b) (insert-global! b r)) bindings))"));
  T86 = VARREF_OR(YevalSmoduleYinsert_globalsX,YPfalse);
  T87 = fun_insert_globalsX_52;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSmoduleYinsert_globalsX,T85);
  lit_103 = YPPsym((P)"find-static-global-environment");
  lit_104 = YPPlist(1,YPPsym((P)"r"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_local_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_53 = YPfab_met(FUNCODEREF(fun_find_static_global_environment_53),T88,LITREF(lit_103),LITREF(lit_104),sloc(154),YPsb((P)"(fun ((r <static-local-environment>) => <static-global-environment>) (find-static-global-environment (environment-next r)))"));
  T90 = VARREF_OR(YevalSmoduleYfind_static_global_environment,YPfalse);
  T91 = fun_find_static_global_environment_53;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSmoduleYfind_static_global_environment,T89);
  lit_105 = YPPlist(1,YPPsym((P)"r"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  fun_find_static_global_environment_54 = YPfab_met(FUNCODEREF(fun_find_static_global_environment_54),T92,LITREF(lit_103),LITREF(lit_105),sloc(158),YPsb((P)"(fun ((r <static-global-environment>) => <static-global-environment>) r)"));
  T94 = VARREF_OR(YevalSmoduleYfind_static_global_environment,YPfalse);
  T95 = fun_find_static_global_environment_54;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSmoduleYfind_static_global_environment,T93);
  lit_106 = YPPsym((P)"find-syntax-environment");
  lit_107 = YPPlist(1,YPPsym((P)"r"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  fun_find_syntax_environment_55 = YPfab_met(FUNCODEREF(fun_find_syntax_environment_55),T96,LITREF(lit_106),LITREF(lit_107),sloc(162),YPsb((P)"(fun ((r <static-environment>) => <static-global-environment>) (module-syntax-environment (find-environment-module r)))"));
  T98 = VARREF_OR(YevalSmoduleYfind_syntax_environment,YPfalse);
  T99 = fun_find_syntax_environment_55;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSmoduleYfind_syntax_environment,T97);
  lit_108 = YPPsym((P)"find-environment-module");
  lit_109 = YPPlist(1,YPPsym((P)"r"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_environment_module_56 = YPfab_met(FUNCODEREF(fun_find_environment_module_56),T100,LITREF(lit_108),LITREF(lit_109),sloc(166),YPsb((P)"(fun ((r <static-environment>)) (environment-module (find-static-global-environment r)))"));
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
  fun_find_binding_57 = YPfab_met(FUNCODEREF(fun_find_binding_57),T106,LITREF(lit_110),LITREF(lit_112),sloc(171),YPsb((P)"(fun (name (r <static-global-environment>) => <any>) (or (elt-or (environment-bindings r) name #f) (find-binding name (environment-next r))))"));
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
  fun_transaction_implemented_bindings_58 = YPfab_met(FUNCODEREF(fun_transaction_implemented_bindings_58),T112,LITREF(lit_114),LITREF(lit_115),sloc(226),YPsb((P)"(fun ((_x <transaction>)) (prop-value _x transaction-implemented-bindings))"));
  T114 = VARREF_OR(YevalSmoduleYtransaction_implemented_bindings,YPfalse);
  T115 = fun_transaction_implemented_bindings_58;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalSmoduleYtransaction_implemented_bindings,T113);
  lit_116 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPfab_met(FUNCODEREF(fun_59),T116,YPfalse,LITREF(lit_116),sloc(226),YPsb((P)"(fun ((_x <any>)) (fab <tab> 10))"));
  T117 = fun_59;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLtransactionG),VARREF(YevalSmoduleYtransaction_implemented_bindings),YPfalse,VARREF(YgooScolsScolYLtabG),T117);
  lit_117 = YPPsym((P)"transaction-dependents");
  lit_118 = YPPlist(1,YPPsym((P)"_x"));
  T118 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_transaction_dependents_60 = YPfab_met(FUNCODEREF(fun_transaction_dependents_60),T118,LITREF(lit_117),LITREF(lit_118),sloc(227),YPsb((P)"(fun ((_x <transaction>)) (prop-value _x transaction-dependents))"));
  T120 = VARREF_OR(YevalSmoduleYtransaction_dependents,YPfalse);
  T121 = fun_transaction_dependents_60;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSmoduleYtransaction_dependents,T119);
  lit_119 = YPPlist(1,YPPsym((P)"_x"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPfab_met(FUNCODEREF(fun_61),T122,YPfalse,LITREF(lit_119),sloc(227),YPsb((P)"(fun ((_x <any>)) (fab <tab> 10))"));
  T123 = fun_61;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLtransactionG),VARREF(YevalSmoduleYtransaction_dependents),YPfalse,VARREF(YgooScolsScolYLtabG),T123);
  DYNDEFSET(YevalSmoduleYTcurrent_subtransactionT,YPfalse);
  lit_120 = YPPsym((P)"transaction-register-implemented-binding");
  lit_121 = YPPlist(1,YPPsym((P)"b"));
  lit_122 = YPsb((P)"Can't register implemented foreign binding (no subtransaction)");
  T124 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYtransaction_register_implemented_binding = YPfab_met(FUNCODEREF(YevalSmoduleYtransaction_register_implemented_binding),T124,LITREF(lit_120),LITREF(lit_121),sloc(231),YPsb((P)"(fun (b) (unless *current-subtransaction* (ast-error Can't register implemented foreign binding (no subtransaction))) (set (elt (transaction-implemented-bindings *current-subtransaction*) b) #t))"));
  T125 = YevalSmoduleYtransaction_register_implemented_binding;
  VARSET(YevalSmoduleYtransaction_register_implemented_binding,T125);
  lit_123 = YPPsym((P)"transaction-register-dependent");
  lit_124 = YPPlist(1,YPPsym((P)"d"));
  lit_125 = YPsb((P)"Can't register dependent (no subtransaction)");
  T128 = YPfab_sig(YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T127 = YevalSmoduleYtransaction_register_dependent = YPfab_met(FUNCODEREF(YevalSmoduleYtransaction_register_dependent),T128,LITREF(lit_123),LITREF(lit_124),sloc(237),YPsb((P)"(fun ((d <dependent>)) (unless *current-subtransaction* (ast-error Can't register dependent (no subtransaction))) (set (elt (transaction-dependents *current-subtransaction*) d) #t))"));
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
  YevalSmoduleYtransaction_nulQ = YPfab_met(FUNCODEREF(YevalSmoduleYtransaction_nulQ),T0,LITREF(lit_126),LITREF(lit_127),sloc(242),YPsb((P)"(fun ((t <transaction>) => <log>) (and (nul? (transaction-implemented-bindings t)) (nul? (transaction-dependents t))))"));
  T1 = YevalSmoduleYtransaction_nulQ;
  VARSET(YevalSmoduleYtransaction_nulQ,T1);
  lit_128 = YPPsym((P)"merge-transactions!");
  lit_129 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_130 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_131 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T4,YPfalse,LITREF(lit_130),sloc(257),YPsb((P)"(fun (k v) (set (elt t1-imp-bindings k) #t))"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_66 = YPfab_met(FUNCODEREF(fun_66),T3,YPfalse,LITREF(lit_131),sloc(258),YPsb((P)"(fun (k v) (set (elt t1-dependents k) #t))"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLtransactionG),VARREF(YevalSmoduleYLtransactionG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLtransactionG),Ynil);
  YevalSmoduleYmerge_transactionsX = YPfab_met(FUNCODEREF(YevalSmoduleYmerge_transactionsX),T2,LITREF(lit_128),LITREF(lit_129),sloc(246),YPsb((P)"(fun ((t1 <transaction>) (t2 <transaction>) => <transaction>) (cond ((transaction-nul? t2) t1) ((transaction-nul? t1) t2) (#t (def t1-imp-bindings (transaction-implemented-bindings t1)) (def t2-imp-bindings (transaction-implemented-bindings t2)) (def t1-dependents (transaction-dependents t1)) (def t2-dependents (transaction-dependents t2)) (do-keyed (fun (k v) (set (elt t1-imp-bindings k) #t)) t2-imp-bindings) (do-keyed (fun (k v) (set (elt t1-dependents k) #t)) t2-dependents) t1)))"));
  T5 = YevalSmoduleYmerge_transactionsX;
  VARSET(YevalSmoduleYmerge_transactionsX,T5);
  lit_132 = YPPsym((P)"roll-back-transaction");
  lit_133 = YPPlist(1,YPPsym((P)"t"));
  lit_134 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"junk"));
  lit_135 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"junk"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_68 = YPfab_met(FUNCODEREF(fun_68),T8,YPfalse,LITREF(lit_134),sloc(263),YPsb((P)"(fun (binding junk) (set (binding-free? binding) #t))"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T7,YPfalse,LITREF(lit_135),sloc(266),YPsb((P)"(fun (dependent junk) (detach-dependent dependent))"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLtransactionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYroll_back_transaction = YPfab_met(FUNCODEREF(YevalSmoduleYroll_back_transaction),T6,LITREF(lit_132),LITREF(lit_133),sloc(261),YPsb((P)"(fun ((t <transaction>)) (do-keyed (fun (binding junk) (set (binding-free? binding) #t)) (transaction-implemented-bindings t)) (do-keyed (fun (dependent junk) (detach-dependent dependent)) (transaction-dependents t)))"));
  T9 = YevalSmoduleYroll_back_transaction;
  VARSET(YevalSmoduleYroll_back_transaction,T9);
  lit_136 = YPPsym((P)"call-with-subtransaction");
  lit_137 = YPPlist(2,YPPsym((P)"module"),YPPsym((P)"thunk"));
  lit_138 = Ynil;
  T12 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_71 = YPfab_met(FUNCODEREF(fun_71),T12,YPfalse,LITREF(lit_138),sloc(272),YPsb((P)"(fun () (seq (set *current-subtransaction* (new <transaction>)) (def value (thunk)) (set success? #t) value))"));
  T11 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPfab_met(FUNCODEREF(fun_72),T11,YPfalse,LITREF(lit_138),sloc(282),YPsb((P)"(fun () (seq (if success? (set (module-transaction module) (merge-transactions! (module-transaction module) *current-subtransaction*)) (roll-back-transaction *current-subtransaction*)) (set *current-subtransaction* saved)))"));
  T10 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYcall_with_subtransaction = YPfab_met(FUNCODEREF(YevalSmoduleYcall_with_subtransaction),T10,LITREF(lit_136),LITREF(lit_137),sloc(269),YPsb((P)"(fun (module thunk => <any>) (def success? #f) (def saved *current-subtransaction*) (fin (seq (set *current-subtransaction* (new <transaction>)) (def value (thunk)) (set success? #t) value) (seq (if success? (set (module-transaction module) (merge-transactions! (module-transaction module) *current-subtransaction*)) (roll-back-transaction *current-subtransaction*)) (set *current-subtransaction* saved))))"));
  T13 = YevalSmoduleYcall_with_subtransaction;
  VARSET(YevalSmoduleYcall_with_subtransaction,T13);
  lit_139 = YPPlist(1,YPPsym((P)"exp"));
  lit_140 = YPPlist(1,YPPsym((P)"return"));
  lit_141 = YPPsym((P)"x-1481");
  lit_142 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_143 = YPPsym((P)"with-subtransaction");
  lit_144 = YPsb((P)"Match Pattern Failure");
  lit_145 = YPPsym((P)"fun");
  lit_146 = Ynil;
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1481_74 = YPfab_met(FUNCODEREF(fun_x_1481_74),T16,LITREF(lit_141),LITREF(lit_142),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'with-subtransaction exp)))"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T15,YPfalse,LITREF(lit_140),YPfalse,YPsb((P)"(fun (return) (loc ((x-1481 ((msg <str>) (args ...)) (return (macro-error 'with-subtransaction exp)))) (let ((x-1480 exp)) (let ((module #f) (body #f)) (if (isa? x-1480 <lst>) (let ((x-1480 (match-atom x-1480 'with-subtransaction x-1481))) (let ((x-1480 (seq (let ((x-1480 (match-sublist x-1480 x-1481))) (let ((x-1480 (seq (set module (match-unquote x-1480 x-1481)) (tail x-1480)))) (let ((x-1480 (seq (let ((x-1480 (match-sublist x-1480 x-1481))) (match-nul-list x-1480 x-1481)) (tail x-1480)))) (match-nul-list x-1480 x-1481)))) (tail x-1480)))) (let ((x-1480 (seq (set body x-1480) '()))) (let ((x-1480 (seq (let ((x-1480 (match-sublist x-1480 x-1481))) (match-nul-list x-1480 x-1481)) (tail x-1480)))) (match-nul-list x-1480 x-1481))))) (x-1481 Match Pattern Failure x-1480)) (quasiquote (call-with-subtransaction (unquote module) (fun () (unquote-splicing body))))))))"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPfab_met(FUNCODEREF(fun_76),T14,YPfalse,LITREF(lit_139),YPfalse,YPsb((P)"(fun (exp) (mif ((with-subtransaction ((unquote module)) (unquote-splicing body)) exp) (quasiquote (call-with-subtransaction (unquote module) (fun () (unquote-splicing body)))) (macro-error 'with-subtransaction exp)))"));
  T17 = fun_76;
  YPmacro(YPPsym((P)"eval/module"),YPPsym((P)"with-subtransaction"),T17);
  lit_147 = YPPsym((P)"<module-loader>");
  T19 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T18 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_147),T19);
  VARSET(YevalSmoduleYLmodule_loaderG,T18);
  lit_148 = YPPsym((P)"module-loader-modules");
  lit_149 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_77 = YPfab_met(FUNCODEREF(fun_module_loader_modules_77),T20,LITREF(lit_148),LITREF(lit_149),sloc(317),YPsb((P)"(fun ((_x <module-loader>)) (prop-value _x module-loader-modules))"));
  T22 = VARREF_OR(YevalSmoduleYmodule_loader_modules,YPfalse);
  T23 = fun_module_loader_modules_77;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSmoduleYmodule_loader_modules,T21);
  lit_150 = YPPsym((P)"module-loader-modules-setter");
  lit_151 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_modules_setter_78 = YPfab_met(FUNCODEREF(fun_module_loader_modules_setter_78),T24,LITREF(lit_150),LITREF(lit_151),sloc(317),YPsb((P)"(fun ((_z <tab>) (_x <module-loader>)) (prop-value-setter _z _x module-loader-modules))"));
  T26 = VARREF_OR(YevalSmoduleYmodule_loader_modules_setter,YPfalse);
  T27 = fun_module_loader_modules_setter_78;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSmoduleYmodule_loader_modules_setter,T25);
  lit_152 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T28,YPfalse,LITREF(lit_152),sloc(317),YPsb((P)"(fun ((_x <any>)) (fab <tab> 1000))"));
  T29 = fun_79;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYmodule_loader_modules),VARREF(YevalSmoduleYmodule_loader_modules_setter),VARREF(YgooScolsScolYLtabG),T29);
  lit_153 = YPPsym((P)"module-loader-stack");
  lit_154 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_80 = YPfab_met(FUNCODEREF(fun_module_loader_stack_80),T30,LITREF(lit_153),LITREF(lit_154),sloc(320),YPsb((P)"(fun ((_x <module-loader>)) (prop-value _x module-loader-stack))"));
  T32 = VARREF_OR(YevalSmoduleYmodule_loader_stack,YPfalse);
  T33 = fun_module_loader_stack_80;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSmoduleYmodule_loader_stack,T31);
  lit_155 = YPPsym((P)"module-loader-stack-setter");
  lit_156 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_stack_setter_81 = YPfab_met(FUNCODEREF(fun_module_loader_stack_setter_81),T34,LITREF(lit_155),LITREF(lit_156),sloc(320),YPsb((P)"(fun ((_z <lst>) (_x <module-loader>)) (prop-value-setter _z _x module-loader-stack))"));
  T36 = VARREF_OR(YevalSmoduleYmodule_loader_stack_setter,YPfalse);
  T37 = fun_module_loader_stack_setter_81;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSmoduleYmodule_loader_stack_setter,T35);
  lit_157 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPfab_met(FUNCODEREF(fun_82),T38,YPfalse,LITREF(lit_157),sloc(320),YPsb((P)"(fun ((_x <any>)) '())"));
  T39 = fun_82;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYmodule_loader_stack),VARREF(YevalSmoduleYmodule_loader_stack_setter),VARREF(YLlstG),T39);
  lit_158 = YPPsym((P)"<module>");
  T41 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T40 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_158),T41);
  VARSET(YevalSmoduleYLmoduleG,T40);
  lit_159 = YPPsym((P)"module-name");
  lit_160 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_name_83 = YPfab_met(FUNCODEREF(fun_module_name_83),T42,LITREF(lit_159),LITREF(lit_160),sloc(325),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-name))"));
  T44 = VARREF_OR(YevalSmoduleYmodule_name,YPfalse);
  T45 = fun_module_name_83;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSmoduleYmodule_name,T43);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_name),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_161 = YPPsym((P)"module-mangled-name");
  lit_162 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_84 = YPfab_met(FUNCODEREF(fun_module_mangled_name_84),T46,LITREF(lit_161),LITREF(lit_162),sloc(326),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-mangled-name))"));
  T48 = VARREF_OR(YevalSmoduleYmodule_mangled_name,YPfalse);
  T49 = fun_module_mangled_name_84;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSmoduleYmodule_mangled_name,T47);
  lit_163 = YPPsym((P)"module-mangled-name-setter");
  lit_164 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T50 = YPfab_sig(YPPlist(2,T51,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_name_setter_85 = YPfab_met(FUNCODEREF(fun_module_mangled_name_setter_85),T50,LITREF(lit_163),LITREF(lit_164),sloc(326),YPsb((P)"(fun ((_z (t? <str>)) (_x <module>)) (prop-value-setter _z _x module-mangled-name))"));
  T53 = VARREF_OR(YevalSmoduleYmodule_mangled_name_setter,YPfalse);
  T54 = fun_module_mangled_name_setter_85;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSmoduleYmodule_mangled_name_setter,T52);
  lit_165 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPfab_met(FUNCODEREF(fun_86),T55,YPfalse,LITREF(lit_165),sloc(326),YPsb((P)"(fun ((_x <any>)) #f)"));
  T56 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T57 = fun_86;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_mangled_name),VARREF(YevalSmoduleYmodule_mangled_name_setter),T56,T57);
  lit_166 = YPPsym((P)"module-mangled-string-name");
  lit_167 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_87 = YPfab_met(FUNCODEREF(fun_module_mangled_string_name_87),T58,LITREF(lit_166),LITREF(lit_167),sloc(327),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-mangled-string-name))"));
  T60 = VARREF_OR(YevalSmoduleYmodule_mangled_string_name,YPfalse);
  T61 = fun_module_mangled_string_name_87;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSmoduleYmodule_mangled_string_name,T59);
  lit_168 = YPPsym((P)"module-mangled-string-name-setter");
  lit_169 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T62 = YPfab_sig(YPPlist(2,T63,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mangled_string_name_setter_88 = YPfab_met(FUNCODEREF(fun_module_mangled_string_name_setter_88),T62,LITREF(lit_168),LITREF(lit_169),sloc(327),YPsb((P)"(fun ((_z (t? <str>)) (_x <module>)) (prop-value-setter _z _x module-mangled-string-name))"));
  T65 = VARREF_OR(YevalSmoduleYmodule_mangled_string_name_setter,YPfalse);
  T66 = fun_module_mangled_string_name_setter_88;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSmoduleYmodule_mangled_string_name_setter,T64);
  lit_170 = YPPlist(1,YPPsym((P)"_x"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T67,YPfalse,LITREF(lit_170),sloc(327),YPsb((P)"(fun ((_x <any>)) #f)"));
  T68 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T69 = fun_89;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_mangled_string_name),VARREF(YevalSmoduleYmodule_mangled_string_name_setter),T68,T69);
  lit_171 = YPPsym((P)"module-target-environment");
  lit_172 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_target_environment_90 = YPfab_met(FUNCODEREF(fun_module_target_environment_90),T70,LITREF(lit_171),LITREF(lit_172),sloc(329),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-target-environment))"));
  T72 = VARREF_OR(YevalSmoduleYmodule_target_environment,YPfalse);
  T73 = fun_module_target_environment_90;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSmoduleYmodule_target_environment,T71);
  lit_173 = YPPsym((P)"module-target-environment-setter");
  lit_174 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_target_environment_setter_91 = YPfab_met(FUNCODEREF(fun_module_target_environment_setter_91),T74,LITREF(lit_173),LITREF(lit_174),sloc(329),YPsb((P)"(fun ((_z <any>) (_x <module>)) (prop-value-setter _z _x module-target-environment))"));
  T76 = VARREF_OR(YevalSmoduleYmodule_target_environment_setter,YPfalse);
  T77 = fun_module_target_environment_setter_91;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YevalSmoduleYmodule_target_environment_setter,T75);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_target_environment),VARREF(YevalSmoduleYmodule_target_environment_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_175 = YPPsym((P)"module-syntax-environment");
  lit_176 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_92 = YPfab_met(FUNCODEREF(fun_module_syntax_environment_92),T78,LITREF(lit_175),LITREF(lit_176),sloc(330),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-syntax-environment))"));
  T80 = VARREF_OR(YevalSmoduleYmodule_syntax_environment,YPfalse);
  T81 = fun_module_syntax_environment_92;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSmoduleYmodule_syntax_environment,T79);
  lit_177 = YPPsym((P)"module-syntax-environment-setter");
  lit_178 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T82 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_syntax_environment_setter_93 = YPfab_met(FUNCODEREF(fun_module_syntax_environment_setter_93),T82,LITREF(lit_177),LITREF(lit_178),sloc(330),YPsb((P)"(fun ((_z <any>) (_x <module>)) (prop-value-setter _z _x module-syntax-environment))"));
  T84 = VARREF_OR(YevalSmoduleYmodule_syntax_environment_setter,YPfalse);
  T85 = fun_module_syntax_environment_setter_93;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSmoduleYmodule_syntax_environment_setter,T83);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_syntax_environment),VARREF(YevalSmoduleYmodule_syntax_environment_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_179 = YPPsym((P)"%module-exports");
  lit_180 = YPPlist(1,YPPsym((P)"_x"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pmodule_exports_94 = YPfab_met(FUNCODEREF(fun_Pmodule_exports_94),T86,LITREF(lit_179),LITREF(lit_180),sloc(332),YPsb((P)"(fun ((_x <module>)) (prop-value _x %module-exports))"));
  T88 = VARREF_OR(YevalSmoduleYPmodule_exports,YPfalse);
  T89 = fun_Pmodule_exports_94;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSmoduleYPmodule_exports,T87);
  lit_181 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPfab_met(FUNCODEREF(fun_95),T90,YPfalse,LITREF(lit_181),sloc(332),YPsb((P)"(fun ((_x <any>)) (fab <tab> 1000))"));
  T91 = fun_95;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYPmodule_exports),YPfalse,VARREF(YgooScolsScolYLtabG),T91);
  lit_182 = YPPsym((P)"module-data-processed?");
  lit_183 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_96 = YPfab_met(FUNCODEREF(fun_module_data_processedQ_96),T92,LITREF(lit_182),LITREF(lit_183),sloc(333),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-data-processed?))"));
  T94 = VARREF_OR(YevalSmoduleYmodule_data_processedQ,YPfalse);
  T95 = fun_module_data_processedQ_96;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSmoduleYmodule_data_processedQ,T93);
  lit_184 = YPPsym((P)"module-data-processed?-setter");
  lit_185 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_data_processedQ_setter_97 = YPfab_met(FUNCODEREF(fun_module_data_processedQ_setter_97),T96,LITREF(lit_184),LITREF(lit_185),sloc(333),YPsb((P)"(fun ((_z <log>) (_x <module>)) (prop-value-setter _z _x module-data-processed?))"));
  T98 = VARREF_OR(YevalSmoduleYmodule_data_processedQ_setter,YPfalse);
  T99 = fun_module_data_processedQ_setter_97;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSmoduleYmodule_data_processedQ_setter,T97);
  lit_186 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPfab_met(FUNCODEREF(fun_98),T100,YPfalse,LITREF(lit_186),sloc(333),YPsb((P)"(fun ((_x <any>)) #t)"));
  T101 = fun_98;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_data_processedQ),VARREF(YevalSmoduleYmodule_data_processedQ_setter),VARREF(YLlogG),T101);
  lit_187 = YPPsym((P)"module-runtime-data");
  lit_188 = YPPlist(1,YPPsym((P)"_x"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_99 = YPfab_met(FUNCODEREF(fun_module_runtime_data_99),T102,LITREF(lit_187),LITREF(lit_188),sloc(334),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-runtime-data))"));
  T104 = VARREF_OR(YevalSmoduleYmodule_runtime_data,YPfalse);
  T105 = fun_module_runtime_data_99;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSmoduleYmodule_runtime_data,T103);
  lit_189 = YPPsym((P)"module-runtime-data-setter");
  lit_190 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_runtime_data_setter_100 = YPfab_met(FUNCODEREF(fun_module_runtime_data_setter_100),T106,LITREF(lit_189),LITREF(lit_190),sloc(334),YPsb((P)"(fun ((_z <any>) (_x <module>)) (prop-value-setter _z _x module-runtime-data))"));
  T108 = VARREF_OR(YevalSmoduleYmodule_runtime_data_setter,YPfalse);
  T109 = fun_module_runtime_data_setter_100;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSmoduleYmodule_runtime_data_setter,T107);
  lit_191 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPfab_met(FUNCODEREF(fun_101),T110,YPfalse,LITREF(lit_191),sloc(334),YPsb((P)"(fun ((_x <any>)) #f)"));
  T111 = fun_101;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_runtime_data),VARREF(YevalSmoduleYmodule_runtime_data_setter),VARREF(YLanyG),T111);
  lit_192 = YPPsym((P)"module-transaction");
  lit_193 = YPPlist(1,YPPsym((P)"_x"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_transaction_102 = YPfab_met(FUNCODEREF(fun_module_transaction_102),T112,LITREF(lit_192),LITREF(lit_193),sloc(335),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-transaction))"));
  T114 = VARREF_OR(YevalSmoduleYmodule_transaction,YPfalse);
  T115 = fun_module_transaction_102;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalSmoduleYmodule_transaction,T113);
  lit_194 = YPPsym((P)"module-transaction-setter");
  lit_195 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T116 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLtransactionG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_transaction_setter_103 = YPfab_met(FUNCODEREF(fun_module_transaction_setter_103),T116,LITREF(lit_194),LITREF(lit_195),sloc(335),YPsb((P)"(fun ((_z <transaction>) (_x <module>)) (prop-value-setter _z _x module-transaction))"));
  T118 = VARREF_OR(YevalSmoduleYmodule_transaction_setter,YPfalse);
  T119 = fun_module_transaction_setter_103;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalSmoduleYmodule_transaction_setter,T117);
  lit_196 = YPPlist(1,YPPsym((P)"_x"));
  T120 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPfab_met(FUNCODEREF(fun_104),T120,YPfalse,LITREF(lit_196),sloc(335),YPsb((P)"(fun ((_x <any>)) (new <transaction>))"));
  T121 = fun_104;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_transaction),VARREF(YevalSmoduleYmodule_transaction_setter),VARREF(YevalSmoduleYLtransactionG),T121);
  lit_197 = YPPsym((P)"module-referenced-bindings");
  lit_198 = YPPlist(1,YPPsym((P)"_x"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_referenced_bindings_105 = YPfab_met(FUNCODEREF(fun_module_referenced_bindings_105),T122,LITREF(lit_197),LITREF(lit_198),sloc(336),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-referenced-bindings))"));
  T124 = VARREF_OR(YevalSmoduleYmodule_referenced_bindings,YPfalse);
  T125 = fun_module_referenced_bindings_105;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSmoduleYmodule_referenced_bindings,T123);
  lit_199 = YPPlist(1,YPPsym((P)"_x"));
  T126 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPfab_met(FUNCODEREF(fun_106),T126,YPfalse,LITREF(lit_199),sloc(336),YPsb((P)"(fun ((_x <any>)) (fab <tab> 0))"));
  T127 = fun_106;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_referenced_bindings),YPfalse,VARREF(YgooScolsScolYLtabG),T127);
  lit_200 = YPPsym((P)"module-uses-c-files");
  lit_201 = YPPlist(1,YPPsym((P)"_x"));
  T128 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_files_107 = YPfab_met(FUNCODEREF(fun_module_uses_c_files_107),T128,LITREF(lit_200),LITREF(lit_201),sloc(337),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-uses-c-files))"));
  T130 = VARREF_OR(YevalSmoduleYmodule_uses_c_files,YPfalse);
  T131 = fun_module_uses_c_files_107;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSmoduleYmodule_uses_c_files,T129);
  lit_202 = YPPlist(1,YPPsym((P)"_x"));
  T132 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPfab_met(FUNCODEREF(fun_108),T132,YPfalse,LITREF(lit_202),sloc(337),YPsb((P)"(fun ((_x <any>)) (fab <vec> 0))"));
  T133 = fun_108;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_uses_c_files),YPfalse,VARREF(YgooScolsSvecYLvecG),T133);
  lit_203 = YPPsym((P)"module-uses-c-includes");
  lit_204 = YPPlist(1,YPPsym((P)"_x"));
  T134 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_includes_109 = YPfab_met(FUNCODEREF(fun_module_uses_c_includes_109),T134,LITREF(lit_203),LITREF(lit_204),sloc(338),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-uses-c-includes))"));
  T136 = VARREF_OR(YevalSmoduleYmodule_uses_c_includes,YPfalse);
  T137 = fun_module_uses_c_includes_109;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSmoduleYmodule_uses_c_includes,T135);
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
  P T112,T113,T114,T115,T116,T117,T118;
DEFCREGS();
  lit_205 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPfab_met(FUNCODEREF(fun_110),T0,YPfalse,LITREF(lit_205),sloc(338),YPsb((P)"(fun ((_x <any>)) (fab <vec> 0))"));
  T1 = fun_110;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_uses_c_includes),YPfalse,VARREF(YgooScolsSvecYLvecG),T1);
  lit_206 = YPPsym((P)"module-uses-c-libraries");
  lit_207 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_uses_c_libraries_111 = YPfab_met(FUNCODEREF(fun_module_uses_c_libraries_111),T2,LITREF(lit_206),LITREF(lit_207),sloc(339),YPsb((P)"(fun ((_x <module>)) (prop-value _x module-uses-c-libraries))"));
  T4 = VARREF_OR(YevalSmoduleYmodule_uses_c_libraries,YPfalse);
  T5 = fun_module_uses_c_libraries_111;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSmoduleYmodule_uses_c_libraries,T3);
  lit_208 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPfab_met(FUNCODEREF(fun_112),T6,YPfalse,LITREF(lit_208),sloc(339),YPsb((P)"(fun ((_x <any>)) (fab <vec> 0))"));
  T7 = fun_112;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYmodule_uses_c_libraries),YPfalse,VARREF(YgooScolsSvecYLvecG),T7);
  lit_209 = YPPsym((P)"ensure-module-data");
  lit_210 = YPPlist(1,YPPsym((P)"module"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_209),LITREF(lit_210),YPfalse);
  VARSET(YevalSmoduleYensure_module_data,T8);
  lit_211 = YPPsym((P)"module-exports");
  lit_212 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_module_exports_113 = YPfab_met(FUNCODEREF(fun_module_exports_113),T10,LITREF(lit_211),LITREF(lit_212),sloc(343),YPsb((P)"(fun ((x <module>) => <tab>) (ensure-module-data x) (%module-exports x))"));
  T12 = VARREF_OR(YevalSmoduleYmodule_exports,YPfalse);
  T13 = fun_module_exports_113;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSmoduleYmodule_exports,T11);
  lit_213 = YPPsym((P)"import-global!");
  lit_214 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"env"));
  lit_215 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T14 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYimport_globalX = YPfab_met(FUNCODEREF(YevalSmoduleYimport_globalX),T14,LITREF(lit_213),LITREF(lit_214),sloc(348),YPsb((P)"(fun ((b <module-binding>) (env <static-global-environment>)) (def existing (find-binding (binding-name b) env)) (unless (or (== existing #f) (== existing b)) (msg out warning: '%s' from %s clobbers local binding.\n (binding-name b) (binding-module-name b))) (insert-global! b env) #f)"));
  T15 = YevalSmoduleYimport_globalX;
  VARSET(YevalSmoduleYimport_globalX,T15);
  lit_216 = YPPsym((P)"insert-and-mangle-global!");
  lit_217 = YPPlist(3,YPPsym((P)"binding"),YPPsym((P)"mangle-prefix"),YPPsym((P)"r"));
  T16 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_insert_and_mangle_globalX_115 = YPfab_met(FUNCODEREF(fun_insert_and_mangle_globalX_115),T16,LITREF(lit_216),LITREF(lit_217),sloc(356),YPsb((P)"(fun (binding (mangle-prefix <str>) r) (def (r <static-global-environment>) (find-static-global-environment r)) (set (elt (environment-bindings r) (cat-sym mangle-prefix (binding-name binding))) binding))"));
  T18 = VARREF_OR(YevalSmoduleYinsert_and_mangle_globalX,YPfalse);
  T19 = fun_insert_and_mangle_globalX_115;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSmoduleYinsert_and_mangle_globalX,T17);
  lit_218 = YPPsym((P)"import-and-mangle-global!");
  lit_219 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"mangle-prefix"),YPPsym((P)"env"));
  lit_220 = YPsb((P)"warning: '%s' from %s clobbers local binding.\n");
  T20 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLstrG),VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYimport_and_mangle_globalX = YPfab_met(FUNCODEREF(YevalSmoduleYimport_and_mangle_globalX),T20,LITREF(lit_218),LITREF(lit_219),sloc(362),YPsb((P)"(fun ((b <module-binding>) (mangle-prefix <str>) (env <static-global-environment>)) (def existing (find-binding (cat-sym mangle-prefix (binding-name b)) env)) (unless (or (== existing #f) (== existing b)) (msg out warning: '%s' from %s clobbers local binding.\n (cat-sym mangle-prefix (binding-name b)) (binding-module-name b))) (insert-and-mangle-global! b mangle-prefix env) #f)"));
  T21 = YevalSmoduleYimport_and_mangle_globalX;
  VARSET(YevalSmoduleYimport_and_mangle_globalX,T21);
  lit_221 = YPPsym((P)"set-module-environments");
  lit_222 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"syntax-env"),YPPsym((P)"target-env"));
  T22 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYset_module_environments = YPfab_met(FUNCODEREF(YevalSmoduleYset_module_environments),T22,LITREF(lit_221),LITREF(lit_222),sloc(384),YPsb((P)"(fun ((mod <module>) syntax-env target-env) (set (module-syntax-environment mod) syntax-env) (set (module-target-environment mod) target-env))"));
  T23 = YevalSmoduleYset_module_environments;
  VARSET(YevalSmoduleYset_module_environments,T23);
  lit_223 = YPPsym((P)"do-module-loader-modules");
  lit_224 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"loader"));
  lit_225 = YPPlist(1,YPPsym((P)"mod"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPfab_met(FUNCODEREF(fun_118),T25,YPfalse,LITREF(lit_225),sloc(391),YPsb((P)"(fun (mod) (f mod))"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYdo_module_loader_modules = YPfab_met(FUNCODEREF(YevalSmoduleYdo_module_loader_modules),T24,LITREF(lit_223),LITREF(lit_224),sloc(390),YPsb((P)"(fun (f loader) (do (fun (mod) (f mod)) (module-loader-modules loader)))"));
  T26 = YevalSmoduleYdo_module_loader_modules;
  VARSET(YevalSmoduleYdo_module_loader_modules,T26);
  lit_226 = YPPsym((P)"module-loader-module-type");
  lit_227 = YPPlist(1,YPPsym((P)"loader"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_120 = YPfab_met(FUNCODEREF(fun_module_loader_module_type_120),T27,LITREF(lit_226),LITREF(lit_227),sloc(396),YPsb((P)"(fun ((loader <module-loader>) => <type>) <module>)"));
  T29 = VARREF_OR(YevalSmoduleYmodule_loader_module_type,YPfalse);
  T30 = fun_module_loader_module_type_120;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YevalSmoduleYmodule_loader_module_type,T28);
  lit_228 = YPPsym((P)"register-module!");
  lit_229 = YPPlist(2,YPPsym((P)"module-loader"),YPPsym((P)"mod"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmodule_loaderG),Ynil);
  YevalSmoduleYregister_moduleX = YPfab_met(FUNCODEREF(YevalSmoduleYregister_moduleX),T31,LITREF(lit_228),LITREF(lit_229),sloc(400),YPsb((P)"(fun ((module-loader <module-loader>) (mod <module>) => <module-loader>) (set (elt (module-loader-modules module-loader) (module-name mod)) mod) module-loader)"));
  T32 = YevalSmoduleYregister_moduleX;
  VARSET(YevalSmoduleYregister_moduleX,T32);
  lit_230 = YPPsym((P)"probe-module");
  lit_231 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSmoduleYprobe_module = YPfab_met(FUNCODEREF(YevalSmoduleYprobe_module),T33,LITREF(lit_230),LITREF(lit_231),sloc(406),YPsb((P)"(fun ((loader <module-loader>) (name <sym>) => <module>) (or (elt-or (module-loader-modules loader) name #f) (load-and-register-module loader name)))"));
  T34 = YevalSmoduleYprobe_module;
  VARSET(YevalSmoduleYprobe_module,T34);
  lit_232 = YPPsym((P)"load-and-register-module");
  lit_233 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_234 = YPsb((P)"  ");
  lit_235 = YPsb((P)"%s: error: Circular use of %s not allowed");
  lit_236 = YPsb((P)"%s[Loading module %s...\n");
  lit_237 = YPsb((P)"%s]\n");
  T37 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_123 = YPfab_met(FUNCODEREF(fun_123),T37,YPfalse,LITREF(lit_138),sloc(427),YPsb((P)"(fun () (load-module loader name))"));
  T36 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_124 = YPfab_met(FUNCODEREF(fun_124),T36,YPfalse,LITREF(lit_138),sloc(428),YPsb((P)"(fun () (popf (module-loader-stack loader)))"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSmoduleYload_and_register_module = YPfab_met(FUNCODEREF(YevalSmoduleYload_and_register_module),T35,LITREF(lit_232),LITREF(lit_233),sloc(411),YPsb((P)"(fun ((loader <module-loader>) (name <sym>) => <module>) (def stack (module-loader-stack loader)) (def depth (len stack)) (def indent (repeat    depth)) (when (mem? stack name) (namespace-error %s: error: Circular use of %s not allowed (head stack) name)) (msg out %s[Loading module %s...\n indent name) (def mod (seq (pushf (module-loader-stack loader) name) (fin (load-module loader name) (popf (module-loader-stack loader))))) (register-module! loader mod) (msg out %s]\n indent) mod)"));
  T38 = YevalSmoduleYload_and_register_module;
  VARSET(YevalSmoduleYload_and_register_module,T38);
  lit_238 = YPPsym((P)"load-module");
  lit_239 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  T39 = YPfab_gen(T40,LITREF(lit_238),LITREF(lit_239),YPfalse);
  VARSET(YevalSmoduleYload_module,T39);
  lit_240 = YPPsym((P)"export-binding!");
  lit_241 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"name"),YPPsym((P)"binding"));
  lit_242 = YPsb((P)"Tried to export %= and %= from %= as %=");
  T42 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T41 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYLbinding_nameG),VARREF(YLanyG)),YPfalse,YPint((P)3),T42,Ynil);
  YevalSmoduleYexport_bindingX = YPfab_met(FUNCODEREF(YevalSmoduleYexport_bindingX),T41,LITREF(lit_240),LITREF(lit_241),sloc(444),YPsb((P)"(fun ((module <module>) (name <binding-name>) binding => (t= #f)) (def exports (module-exports module)) (def existing (elt-or exports name #f)) (unless (or (== existing #f) (== existing binding)) (namespace-error Tried to export %= and %= from %= as %= existing binding module name)) (set (elt exports name) binding) #f)"));
  T43 = YevalSmoduleYexport_bindingX;
  VARSET(YevalSmoduleYexport_bindingX,T43);
  lit_243 = YPPsym((P)"binding-native-to?");
  lit_244 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"module"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSmoduleYbinding_native_toQ = YPfab_met(FUNCODEREF(YevalSmoduleYbinding_native_toQ),T44,LITREF(lit_243),LITREF(lit_244),sloc(459),YPsb((P)"(fun (binding (module <module>) => <log>) (== (module-name module) (binding-module-name binding)))"));
  T45 = YevalSmoduleYbinding_native_toQ;
  VARSET(YevalSmoduleYbinding_native_toQ,T45);
  lit_245 = YPPsym((P)"report-undefined-global-bindings");
  lit_246 = YPPlist(1,YPPsym((P)"mod"));
  lit_247 = YPPlist(1,YPPsym((P)"binding"));
  lit_248 = YPsb((P)"%s: warning: undefined binding '%s'.\n");
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPfab_met(FUNCODEREF(fun_128),T47,YPfalse,LITREF(lit_247),sloc(465),YPsb((P)"(fun (binding) (when (and (binding-free? binding) (binding-native-to? binding mod)) (msg out %s: warning: undefined binding '%s'.\n (module-name mod) (binding-name binding))))"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYreport_undefined_global_bindings = YPfab_met(FUNCODEREF(YevalSmoduleYreport_undefined_global_bindings),T46,LITREF(lit_245),LITREF(lit_246),sloc(463),YPsb((P)"(fun ((mod <module>)) (do-static-global-bindings (fun (binding) (when (and (binding-free? binding) (binding-native-to? binding mod)) (msg out %s: warning: undefined binding '%s'.\n (module-name mod) (binding-name binding)))) (module-target-environment mod)))"));
  T48 = YevalSmoduleYreport_undefined_global_bindings;
  VARSET(YevalSmoduleYreport_undefined_global_bindings,T48);
  lit_249 = YPPsym((P)"compute-transitive-users");
  lit_250 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_251 = YPPsym((P)"add-user");
  lit_252 = YPPlist(1,YPPsym((P)"modname"));
  lit_253 = YPPlist(1,YPPsym((P)"mod"));
  lit_254 = YPPlist(1,YPPsym((P)"uses-mod"));
  lit_255 = YPPlist(1,YPPsym((P)"v"));
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_130 = YPfab_met(FUNCODEREF(fun_130),T53,YPfalse,LITREF(lit_254),sloc(484),YPsb((P)"(fun (uses-mod) (when (== modname (module-name uses-mod)) (add-user (module-name mod))))"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPfab_met(FUNCODEREF(fun_131),T52,YPfalse,LITREF(lit_253),sloc(482),YPsb((P)"(fun (mod) (do (fun (uses-mod) (when (== modname (module-name uses-mod)) (add-user (module-name mod)))) (environment-uses-modules (module-target-environment mod))))"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_user_132 = YPfab_met(FUNCODEREF(fun_add_user_132),T51,LITREF(lit_251),LITREF(lit_252),sloc(478),YPsb((P)"(fun (modname) (unless (elt-or users modname #f) (set (elt users modname) modname) (do-module-loader-modules (fun (mod) (do (fun (uses-mod) (when (== modname (module-name uses-mod)) (add-user (module-name mod)))) (environment-uses-modules (module-target-environment mod)))) loader)))"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPfab_met(FUNCODEREF(fun_133),T50,YPfalse,LITREF(lit_255),sloc(490),YPsb((P)"(fun (v) (pack v))"));
  T49 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YevalSmoduleYcompute_transitive_users = YPfab_met(FUNCODEREF(YevalSmoduleYcompute_transitive_users),T49,LITREF(lit_249),LITREF(lit_250),sloc(475),YPsb((P)"(fun ((loader <module-loader>) (modnames <lst>) => <lst>) (def users (fab <tab> 100)) (loc ((add-user (modname) (unless (elt-or users modname #f) (set (elt users modname) modname) (do-module-loader-modules (fun (mod) (do (fun (uses-mod) (when (== modname (module-name uses-mod)) (add-user (module-name mod)))) (environment-uses-modules (module-target-environment mod)))) loader)))) (do add-user modnames) (packing () (do (fun (v) (pack v)) users))))"));
  T54 = YevalSmoduleYcompute_transitive_users;
  VARSET(YevalSmoduleYcompute_transitive_users,T54);
  lit_256 = YPPsym((P)"remove-module-internal!");
  lit_257 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYremove_module_internalX = YPfab_met(FUNCODEREF(YevalSmoduleYremove_module_internalX),T55,LITREF(lit_256),LITREF(lit_257),sloc(495),YPsb((P)"(fun ((loader <module-loader>) (mod <module>)) (roll-back-transaction (module-transaction mod)) (del! (module-loader-modules loader) (module-name mod)))"));
  T56 = YevalSmoduleYremove_module_internalX;
  VARSET(YevalSmoduleYremove_module_internalX,T56);
  lit_258 = YPPsym((P)"remove-modules-by-name!");
  lit_259 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"modnames"));
  lit_260 = YPPlist(1,YPPsym((P)"modname"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_136 = YPfab_met(FUNCODEREF(fun_136),T59,YPfalse,LITREF(lit_260),sloc(502),YPsb((P)"(fun (modname) (def mod (elt (module-loader-modules loader) modname)) (remove-module-internal! loader mod))"));
  T58 = XCALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T57 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLlstG)),YPfalse,YPint((P)2),T58,Ynil);
  YevalSmoduleYremove_modules_by_nameX = YPfab_met(FUNCODEREF(YevalSmoduleYremove_modules_by_nameX),T57,LITREF(lit_258),LITREF(lit_259),sloc(500),YPsb((P)"(fun ((loader <module-loader>) (modnames <lst>) => (t= #f)) (def remove-names (compute-transitive-users loader modnames)) (do (fun (modname) (def mod (elt (module-loader-modules loader) modname)) (remove-module-internal! loader mod)) remove-names) #f)"));
  T60 = YevalSmoduleYremove_modules_by_nameX;
  VARSET(YevalSmoduleYremove_modules_by_nameX,T60);
  lit_261 = YPPsym((P)"module-name-to-relpath");
  lit_262 = YPPlist(1,YPPsym((P)"name"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSmoduleYmodule_name_to_relpath = YPfab_met(FUNCODEREF(YevalSmoduleYmodule_name_to_relpath),T61,LITREF(lit_261),LITREF(lit_262),sloc(510),YPsb((P)"(fun ((name <sym>) => <str>) (def namestr (map to-lower (sym-name name))) (join (split namestr /) *path-separator*))"));
  T62 = YevalSmoduleYmodule_name_to_relpath;
  VARSET(YevalSmoduleYmodule_name_to_relpath,T62);
  VARSET(YevalSmoduleYTtracing_refsQT,YPfalse);
  lit_263 = YPPsym((P)"zap-referenced-bindings!");
  lit_264 = YPPlist(1,YPPsym((P)"mod"));
  lit_265 = YPsb((P)"ZAPPING REFS\n");
  T63 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zap_referenced_bindingsX_139 = YPfab_met(FUNCODEREF(fun_zap_referenced_bindingsX_139),T63,LITREF(lit_263),LITREF(lit_264),sloc(516),YPsb((P)"(fun ((mod <module>)) (when *tracing-refs?* (post ZAPPING REFS\n)) (zap! (module-referenced-bindings mod)))"));
  T65 = VARREF_OR(YevalSmoduleYzap_referenced_bindingsX,YPfalse);
  T66 = fun_zap_referenced_bindingsX_139;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSmoduleYzap_referenced_bindingsX,T64);
  lit_266 = YPPlist(1,YPPsym((P)"r"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zap_referenced_bindingsX_140 = YPfab_met(FUNCODEREF(fun_zap_referenced_bindingsX_140),T67,LITREF(lit_263),LITREF(lit_266),sloc(521),YPsb((P)"(fun (r) (zap-referenced-bindings! (environment-module (find-static-global-environment r))))"));
  T69 = VARREF_OR(YevalSmoduleYzap_referenced_bindingsX,YPfalse);
  T70 = fun_zap_referenced_bindingsX_140;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSmoduleYzap_referenced_bindingsX,T68);
  lit_267 = YPPsym((P)"register-referenced-binding");
  lit_268 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"b"));
  lit_269 = YPsb((P)"REG %= %=\n");
  T71 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmoduleG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_referenced_binding_141 = YPfab_met(FUNCODEREF(fun_register_referenced_binding_141),T71,LITREF(lit_267),LITREF(lit_268),sloc(525),YPsb((P)"(fun ((mod <module>) b) (when *tracing-refs?* (post REG %= %=\n (binding-name b) *dynamic-compilation?*)) (when *dynamic-compilation?* (set (elt (module-referenced-bindings mod) b) b)))"));
  T73 = VARREF_OR(YevalSmoduleYregister_referenced_binding,YPfalse);
  T74 = fun_register_referenced_binding_141;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSmoduleYregister_referenced_binding,T72);
  lit_270 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"b"));
  T75 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_referenced_binding_142 = YPfab_met(FUNCODEREF(fun_register_referenced_binding_142),T75,LITREF(lit_267),LITREF(lit_270),sloc(531),YPsb((P)"(fun (r b) (when *dynamic-compilation?* (register-referenced-binding (environment-module (find-static-global-environment r)) b)))"));
  T77 = VARREF_OR(YevalSmoduleYregister_referenced_binding,YPfalse);
  T78 = fun_register_referenced_binding_142;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YevalSmoduleYregister_referenced_binding,T76);
  lit_271 = YPPsym((P)"<runtime-module-loader>");
  T80 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLmodule_loaderG),Ynil);
  T79 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_271),T80);
  VARSET(YevalSmoduleYLruntime_module_loaderG,T79);
  DYNDEFSET(YevalSmoduleYTnow_rt_envT,YPfalse);
  lit_272 = YPPsym((P)"install-initial-bindings");
  lit_273 = YPPlist(2,YPPsym((P)"<static-global-environment>"),YPPsym((P)"<module-loader>"));
  T82 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T81 = YPfab_gen(T82,LITREF(lit_272),LITREF(lit_273),YPfalse);
  VARSET(YevalSmoduleYinstall_initial_bindings,T81);
  lit_274 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_275 = YPsb((P)"Unable to find module %s");
  T87 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_143 = YPfab_met(FUNCODEREF(fun_143),T87,YPfalse,LITREF(lit_138),sloc(589),YPsb((P)"(fun () (seq (set *now-rt-env* env) (dlet () (load-in file env))))"));
  T86 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_144 = YPfab_met(FUNCODEREF(fun_144),T86,YPfalse,LITREF(lit_138),sloc(589),YPsb((P)"(fun () (set *now-rt-env* x-1484))"));
  T85 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_145 = YPfab_met(FUNCODEREF(fun_145),T85,YPfalse,LITREF(lit_138),sloc(586),YPsb((P)"(fun () (seq (install-initial-bindings env loader) (dlet ((*now-rt-env* env)) (load-in file env)) (set (environment-allows-foreign-names? env) #t) (set keepmod? #t) module))"));
  T84 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_146 = YPfab_met(FUNCODEREF(fun_146),T84,YPfalse,LITREF(lit_138),sloc(605),YPsb((P)"(fun () (unless keepmod? (roll-back-transaction (module-transaction module))))"));
  T83 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLruntime_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  fun_load_module_147 = YPfab_met(FUNCODEREF(fun_load_module_147),T83,LITREF(lit_238),LITREF(lit_274),sloc(576),YPsb((P)"(fun ((loader <runtime-module-loader>) (name <sym>) => <module>) (def type (module-loader-module-type loader)) (def module (new type module-name name)) (def env (fab-static-global-environment module loader #f)) (def keepmod? #f) (def modpath (module-name-to-relpath name)) (def file (find-goo-file-in-path modpath *module-search-path*)) (set-module-environments module env env) (if (not file) (namespace-error Unable to find module %s modpath)) (fin (seq (install-initial-bindings env loader) (dlet ((*now-rt-env* env)) (load-in file env)) (set (environment-allows-foreign-names? env) #t) (set keepmod? #t) module) (unless keepmod? (roll-back-transaction (module-transaction module)))))"));
  T89 = VARREF_OR(YevalSmoduleYload_module,YPfalse);
  T90 = fun_load_module_147;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSmoduleYload_module,T88);
  if (YPfalse != YPfalse) {
  } else {
  }
  T91 = XCALL1(1,VARREF(Ynew),VARREF(YevalSmoduleYLruntime_module_loaderG));
  VARSET(YevalSmoduleYTruntime_module_loaderT,T91);
  lit_276 = YPPsym((P)"runtime-module-loader");
  T92 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSmoduleYruntime_module_loader = YPfab_met(FUNCODEREF(YevalSmoduleYruntime_module_loader),T92,LITREF(lit_276),LITREF(lit_138),sloc(610),YPsb((P)"(fun () *runtime-module-loader*)"));
  T93 = YevalSmoduleYruntime_module_loader;
  VARSET(YevalSmoduleYruntime_module_loader,T93);
  lit_277 = YPPsym((P)"runtime-module");
  lit_278 = YPPlist(1,YPPsym((P)"modname"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYruntime_module = YPfab_met(FUNCODEREF(YevalSmoduleYruntime_module),T94,LITREF(lit_277),LITREF(lit_278),sloc(611),YPsb((P)"(fun ((modname <sym>)) (probe-module (runtime-module-loader) modname))"));
  T95 = YevalSmoduleYruntime_module;
  VARSET(YevalSmoduleYruntime_module,T95);
  lit_279 = YPPsym((P)"runtime-environment");
  lit_280 = YPPlist(1,YPPsym((P)"modname"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYruntime_environment = YPfab_met(FUNCODEREF(YevalSmoduleYruntime_environment),T96,LITREF(lit_279),LITREF(lit_280),sloc(613),YPsb((P)"(fun ((modname <sym>)) (def module (runtime-module modname)) (ensure-module-data module) (module-target-environment module))"));
  T97 = YevalSmoduleYruntime_environment;
  VARSET(YevalSmoduleYruntime_environment,T97);
  lit_281 = YPPsym((P)"runtime-core-environment");
  lit_282 = YPPlist(1,YPPsym((P)"modname"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYruntime_core_environment = YPfab_met(FUNCODEREF(YevalSmoduleYruntime_core_environment),T98,LITREF(lit_281),LITREF(lit_282),sloc(617),YPsb((P)"(fun ((modname <sym>)) (module-target-environment (runtime-module modname)))"));
  T99 = YevalSmoduleYruntime_core_environment;
  VARSET(YevalSmoduleYruntime_core_environment,T99);
  lit_283 = YPPsym((P)"unchecked-runtime-environment");
  lit_284 = YPPlist(1,YPPsym((P)"modname"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYunchecked_runtime_environment = YPfab_met(FUNCODEREF(YevalSmoduleYunchecked_runtime_environment),T100,LITREF(lit_283),LITREF(lit_284),sloc(619),YPsb((P)"(fun ((modname <sym>)) (def loader (runtime-module-loader)) (if (== (elt-or (module-loader-stack loader) 0 #f) modname) *now-rt-env* (module-target-environment (runtime-module modname))))"));
  T101 = YevalSmoduleYunchecked_runtime_environment;
  VARSET(YevalSmoduleYunchecked_runtime_environment,T101);
  lit_285 = YPPsym((P)"reloader-do-create-module");
  lit_286 = YPPlist(2,YPPsym((P)"modname"),YPPsym((P)"data"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  YevalSmoduleYreloader_do_create_module = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_create_module),T102,LITREF(lit_285),LITREF(lit_286),sloc(628),YPsb((P)"(fun ((modname <str>) data => <module>) (def loader (runtime-module-loader)) (def type (module-loader-module-type loader)) (def mod (new type module-name (as <sym> modname))) (def env (fab-static-global-environment mod loader #t)) (set (module-data-processed? mod) #f) (set-module-environments mod env env) (set (module-runtime-data mod) data) (register-module! loader mod) mod)"));
  T103 = YevalSmoduleYreloader_do_create_module;
  VARSET(YevalSmoduleYreloader_do_create_module,T103);
  lit_287 = YPPsym((P)"reloader-do-use-module");
  lit_288 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"uses"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_use_module = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_use_module),T104,LITREF(lit_287),LITREF(lit_288),sloc(639),YPsb((P)"(fun ((mod <module>) (uses <module>)) (push! (environment-uses-modules (module-target-environment mod)) uses))"));
  T105 = YevalSmoduleYreloader_do_use_module;
  VARSET(YevalSmoduleYreloader_do_use_module,T105);
  lit_289 = YPPsym((P)"reloader-do-import");
  lit_290 = YPPlist(4,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"from-mod"),YPPsym((P)"original-name"));
  lit_291 = YPsb((P)"Can't find %s from %s for %s\n");
  T106 = YPfab_sig(YPPlist(4,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG),VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_import = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_import),T106,LITREF(lit_289),LITREF(lit_290),sloc(642),YPsb((P)"(fun ((mod <module>) (name <str>) (from-mod <module>) (original-name <str>)) (def home-env (module-target-environment from-mod)) (def binding (find-binding (as <sym> original-name) home-env)) (when (not binding) (namespace-error Can't find %s from %s for %s\n original-name (module-name from-mod) (module-name mod))) (insert-global! binding (module-target-environment mod)))"));
  T107 = YevalSmoduleYreloader_do_import;
  VARSET(YevalSmoduleYreloader_do_import,T107);
  lit_292 = YPPsym((P)"process-module-data");
  lit_293 = YPPlist(1,YPPsym((P)"module"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSmoduleYprocess_module_data = YPfab_met(FUNCODEREF(YevalSmoduleYprocess_module_data),T108,LITREF(lit_292),LITREF(lit_293),sloc(652),YPsb((P)"(fun ((module <module>)) (%process-module (module-runtime-data module) reloader-do-import reloader-do-export))"));
  T109 = YevalSmoduleYprocess_module_data;
  VARSET(YevalSmoduleYprocess_module_data,T109);
  lit_294 = YPPlist(1,YPPsym((P)"module"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_module_data_157 = YPfab_met(FUNCODEREF(fun_ensure_module_data_157),T110,LITREF(lit_209),LITREF(lit_294),sloc(657),YPsb((P)"(fun ((module <module>)) (unless (module-data-processed? module) (set (module-data-processed? module) #t) (process-module-data module)))"));
  T112 = VARREF_OR(YevalSmoduleYensure_module_data,YPfalse);
  T113 = fun_ensure_module_data_157;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSmoduleYensure_module_data,T111);
  lit_295 = YPPsym((P)"reloader-do-runtime-binding");
  lit_296 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  lit_297 = YPPsym((P)"runtime");
  T116 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T115 = YevalSmoduleYreloader_do_runtime_binding = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_runtime_binding),T116,LITREF(lit_295),LITREF(lit_296),sloc(663),YPsb((P)"(fun ((mod <module>) (name <str>) (loc <loc>)) (def binding (new <module-binding> binding-kind 'runtime binding-module mod binding-name (as <sym> name) binding-free? #f binding-locative loc)) (insert-global! binding (module-target-environment mod)))"));
  T118 = YevalSmoduleYreloader_do_runtime_binding;
  T117 = VARSET(YevalSmoduleYreloader_do_runtime_binding,T118);
  T114 = T117;
  return T114;
}

P YevalSmoduleY___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
DEFCREGS();
  lit_298 = YPPsym((P)"reloader-do-dynamic-binding");
  lit_299 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"loc"));
  lit_300 = YPPsym((P)"dynamic");
  T0 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG),VARREF(YLlocG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_dynamic_binding = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_dynamic_binding),T0,LITREF(lit_298),LITREF(lit_299),sloc(672),YPsb((P)"(fun ((mod <module>) (name <str>) (loc <loc>)) (def binding (new <module-binding> binding-kind 'dynamic binding-module mod binding-name (as <sym> name) binding-free? #f binding-locative loc)) (insert-global! binding (module-target-environment mod)))"));
  T1 = YevalSmoduleYreloader_do_dynamic_binding;
  VARSET(YevalSmoduleYreloader_do_dynamic_binding,T1);
  lit_301 = YPPsym((P)"reloader-do-other-binding");
  lit_302 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  lit_303 = YPPsym((P)"predefined");
  T2 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_other_binding = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_other_binding),T2,LITREF(lit_301),LITREF(lit_302),sloc(685),YPsb((P)"(fun ((mod <module>) (name <str>)) (def binding (new <module-binding> binding-kind 'predefined binding-module mod binding-name (as <sym> name) binding-free? #t)) (insert-global! binding (module-target-environment mod)))"));
  T3 = YevalSmoduleYreloader_do_other_binding;
  VARSET(YevalSmoduleYreloader_do_other_binding,T3);
  lit_304 = YPPsym((P)"reloader-do-export");
  lit_305 = YPPlist(3,YPPsym((P)"mod"),YPPsym((P)"name"),YPPsym((P)"as-name"));
  lit_306 = YPsb((P)"Can't find %s in %s\n");
  T4 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSmoduleYreloader_do_export = YPfab_met(FUNCODEREF(YevalSmoduleYreloader_do_export),T4,LITREF(lit_304),LITREF(lit_305),sloc(693),YPsb((P)"(fun ((mod <module>) (name <str>) (as-name <str>)) (def binding (find-binding (as <sym> name) (module-target-environment mod))) (if binding (export-binding! mod (as <sym> as-name) binding) (namespace-error Can't find %s in %s\n name (module-name mod))))"));
  T5 = YevalSmoduleYreloader_do_export;
  VARSET(YevalSmoduleYreloader_do_export,T5);
  lit_307 = YPPsym((P)"reload-modules");
  T6 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalSmoduleYreload_modules = YPfab_met(FUNCODEREF(YevalSmoduleYreload_modules),T6,LITREF(lit_307),LITREF(lit_138),sloc(700),YPsb((P)"(fun () (%build-runtime-modules reloader-do-create-module reloader-do-use-module reloader-do-runtime-binding reloader-do-other-binding reloader-do-dynamic-binding))"));
  T7 = YevalSmoduleYreload_modules;
  VARSET(YevalSmoduleYreload_modules,T7);
  lit_308 = YPPsym((P)"fab-static-global-environment");
  lit_309 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"module-loader"),YPPsym((P)"allow-foreign-names?"));
  T8 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YLlogG)),YPfalse,YPint((P)3),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  YevalSmoduleYfab_static_global_environment = YPfab_met(FUNCODEREF(YevalSmoduleYfab_static_global_environment),T8,LITREF(lit_308),LITREF(lit_309),sloc(707),YPsb((P)"(fun ((module <module>) (module-loader <module-loader>) (allow-foreign-names? <log>) => <static-global-environment>) (def new-env (new <static-global-environment> environment-module module environment-module-loader module-loader environment-next $nul-static-environment environment-allows-foreign-names? allow-foreign-names? environment-bindings (fab <tab> 2000))) new-env)"));
  T9 = YevalSmoduleYfab_static_global_environment;
  VARSET(YevalSmoduleYfab_static_global_environment,T9);
  lit_310 = YPPsym((P)"fab-subset-environment");
  lit_311 = YPPlist(3,YPPsym((P)"module"),YPPsym((P)"src-module"),YPPsym((P)"excluded"));
  lit_312 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"binding"));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_164 = YPfab_met(FUNCODEREF(fun_164),T11,YPfalse,LITREF(lit_312),sloc(728),YPsb((P)"(fun (name binding) (unless (mem? excluded name) (insert-global! binding new-env)))"));
  T10 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmoduleG),VARREF(YevalSmoduleYLmoduleG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YevalSmoduleYLstatic_global_environmentG),Ynil);
  YevalSmoduleYfab_subset_environment = YPfab_met(FUNCODEREF(YevalSmoduleYfab_subset_environment),T10,LITREF(lit_310),LITREF(lit_311),sloc(721),YPsb((P)"(fun ((module <module>) (src-module <module>) (excluded <col>) => <static-global-environment>) (def loader (environment-module-loader (module-target-environment src-module))) (def new-env (fab-static-global-environment module loader #f)) (do-keyed (fun (name binding) (unless (mem? excluded name) (insert-global! binding new-env))) (module-exports src-module)) new-env)"));
  T12 = YevalSmoduleYfab_subset_environment;
  VARSET(YevalSmoduleYfab_subset_environment,T12);
  lit_313 = YPPsym((P)"walk-bindings");
  lit_314 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"mod"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSmoduleYwalk_bindings = YPfab_met(FUNCODEREF(YevalSmoduleYwalk_bindings),T13,LITREF(lit_313),LITREF(lit_314),sloc(735),YPsb((P)"(fun ((fun <fun>) (mod <sym>)) (walk-bindings* fun (runtime-environment mod) (fab <tab> 1000) (fab <tab> 10)))"));
  T14 = YevalSmoduleYwalk_bindings;
  VARSET(YevalSmoduleYwalk_bindings,T14);
  lit_315 = YPPsym((P)"walk-bindings*");
  lit_316 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"env"),YPPsym((P)"walked?"),YPPsym((P)"mods"));
  T15 = YPfab_sig(YPPlist(4,VARREF(YLfunG),VARREF(YevalSmoduleYLstatic_global_environmentG),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YevalSmoduleYwalk_bindingsT = YPfab_met(FUNCODEREF(YevalSmoduleYwalk_bindingsT),T15,LITREF(lit_315),LITREF(lit_316),sloc(739),YPsb((P)"(fun ((f <fun>) (env <static-global-environment>) (walked? <tab>) (mods <tab>)) (for ((mod (environment-uses-modules env))) (unless (elt-or mods mod #f) (set (elt mods mod) #t) (walk-bindings* f (runtime-environment (module-name mod)) walked? mods))) (for ((b (environment-bindings env))) (unless (elt-or walked? b #f) (set (elt walked? b) #t) (f b))))"));
  T16 = YevalSmoduleYwalk_bindingsT;
  VARSET(YevalSmoduleYwalk_bindingsT,T16);
  T17 = YPfalse;
  return T17;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSsym;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSloc;

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
  {"log", &module_info_gooSmath, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<dependent>", &module_info_evalSdependency, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"$expansion-parse-dependency", &module_info_evalSdependency, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"dependency-and", &module_info_evalSdependency, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"$nul-dependency", &module_info_evalSdependency, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"$name-parse-dependency", &module_info_evalSdependency, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"$parse-dependencies", &module_info_evalSdependency, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"$value-optimization-dependency", &module_info_evalSdependency, NULL},
  {"<dependency-type>", &module_info_evalSdependency, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"detach-dependent", &module_info_evalSdependency, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"invalidate-dependent", &module_info_evalSdependency, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"$optimizaton-dependencies", &module_info_evalSdependency, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"dependency-nul?", &module_info_evalSdependency, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"dependency-or", &module_info_evalSdependency, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"dependency-includes-all?", &module_info_evalSdependency, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"find-dependency", &module_info_evalSdependency, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"dependency-includes-any?", &module_info_evalSdependency, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"invalidate-dependents", &module_info_evalSdependency, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"log-dependency", &module_info_evalSdependency, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"$all-dependency-types", &module_info_evalSdependency, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<dependable>", &module_info_evalSdependency, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"binding-native-to?", CVAR, &YevalSmoduleYbinding_native_toQ},
  {"module-syntax-environment", CVAR, &YevalSmoduleYmodule_syntax_environment},
  {"binding-name", CVAR, &YevalSmoduleYbinding_name},
  {"runtime-module", CVAR, &YevalSmoduleYruntime_module},
  {"environment-module", CVAR, &YevalSmoduleYenvironment_module},
  {"binding-prop-setter", CVAR, &YevalSmoduleYbinding_prop_setter},
  {"binding-kind-setter", CVAR, &YevalSmoduleYbinding_kind_setter},
  {"export-binding!", CVAR, &YevalSmoduleYexport_bindingX},
  {"module-data-processed?-setter", CVAR, &YevalSmoduleYmodule_data_processedQ_setter},
  {"binding-info-setter", CVAR, &YevalSmoduleYbinding_info_setter},
  {"module-mangled-string-name", CVAR, &YevalSmoduleYmodule_mangled_string_name},
  {"transaction-register-implemented-binding", CVAR, &YevalSmoduleYtransaction_register_implemented_binding},
  {"<module>", CVAR, &YevalSmoduleYLmoduleG},
  {"reloader-do-runtime-binding", CVAR, &YevalSmoduleYreloader_do_runtime_binding},
  {"transaction-implemented-bindings", CVAR, &YevalSmoduleYtransaction_implemented_bindings},
  {"binding-module", CVAR, &YevalSmoduleYbinding_module},
  {"%module-exports", CVAR, &YevalSmoduleYPmodule_exports},
  {"<static-nul-environment>", CVAR, &YevalSmoduleYLstatic_nul_environmentG},
  {"module-runtime-data", CVAR, &YevalSmoduleYmodule_runtime_data},
  {"reloader-do-use-module", CVAR, &YevalSmoduleYreloader_do_use_module},
  {"ensure-module-data", CVAR, &YevalSmoduleYensure_module_data},
  {"global-box-value", CVAR, &YevalSmoduleYglobal_box_value},
  {"module-loader-stack", CVAR, &YevalSmoduleYmodule_loader_stack},
  {"import-and-mangle-global!", CVAR, &YevalSmoduleYimport_and_mangle_globalX},
  {"reloader-do-export", CVAR, &YevalSmoduleYreloader_do_export},
  {"binding-mangled-name-setter", CVAR, &YevalSmoduleYbinding_mangled_name_setter},
  {"runtime-module-loader", CVAR, &YevalSmoduleYruntime_module_loader},
  {"module-name-to-relpath", CVAR, &YevalSmoduleYmodule_name_to_relpath},
  {"module-data-processed?", CVAR, &YevalSmoduleYmodule_data_processedQ},
  {"module-mangled-name", CVAR, &YevalSmoduleYmodule_mangled_name},
  {"binding-inferred-type-setter", CVAR, &YevalSmoduleYbinding_inferred_type_setter},
  {"load-module", CVAR, &YevalSmoduleYload_module},
  {"---main-0---", PVAR, NULL},
  {"roll-back-transaction", CVAR, &YevalSmoduleYroll_back_transaction},
  {"environment-allows-foreign-names?", CVAR, &YevalSmoduleYenvironment_allows_foreign_namesQ},
  {"binding-locative", CVAR, &YevalSmoduleYbinding_locative},
  {"*runtime-module-loader*", CVAR, &YevalSmoduleYTruntime_module_loaderT},
  {"environment-next", CVAR, &YevalSmoduleYenvironment_next},
  {"binding-prop", CVAR, &YevalSmoduleYbinding_prop},
  {"binding-kind", CVAR, &YevalSmoduleYbinding_kind},
  {"*now-rt-env*", DVAR, &YevalSmoduleYTnow_rt_envT},
  {"frame-bindings", CVAR, &YevalSmoduleYframe_bindings},
  {"environment-bindings-setter", CVAR, &YevalSmoduleYenvironment_bindings_setter},
  {"with-subtransaction", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"process-module-data", CVAR, &YevalSmoduleYprocess_module_data},
  {"---main-2---", PVAR, NULL},
  {"*tracing-refs?*", CVAR, &YevalSmoduleYTtracing_refsQT},
  {"environment-uses-modules", CVAR, &YevalSmoduleYenvironment_uses_modules},
  {"module-uses-c-libraries", CVAR, &YevalSmoduleYmodule_uses_c_libraries},
  {"<static-local-environment>", CVAR, &YevalSmoduleYLstatic_local_environmentG},
  {"import-global!", CVAR, &YevalSmoduleYimport_globalX},
  {"binding-global-box", CVAR, &YevalSmoduleYbinding_global_box},
  {"reloader-do-create-module", CVAR, &YevalSmoduleYreloader_do_create_module},
  {"remove-modules-by-name!", CVAR, &YevalSmoduleYremove_modules_by_nameX},
  {"compute-transitive-users", CVAR, &YevalSmoduleYcompute_transitive_users},
  {"<binding>", CVAR, &YevalSmoduleYLbindingG},
  {"reloader-do-other-binding", CVAR, &YevalSmoduleYreloader_do_other_binding},
  {"<module-binding>", CVAR, &YevalSmoduleYLmodule_bindingG},
  {"probe-module", CVAR, &YevalSmoduleYprobe_module},
  {"binding-inferred-type", CVAR, &YevalSmoduleYbinding_inferred_type},
  {"<transaction>", CVAR, &YevalSmoduleYLtransactionG},
  {"*current-subtransaction*", DVAR, &YevalSmoduleYTcurrent_subtransactionT},
  {"binding-locative-setter", CVAR, &YevalSmoduleYbinding_locative_setter},
  {"fab-subset-environment", CVAR, &YevalSmoduleYfab_subset_environment},
  {"do-module-loader-modules", CVAR, &YevalSmoduleYdo_module_loader_modules},
  {"<runtime-module-loader>", CVAR, &YevalSmoduleYLruntime_module_loaderG},
  {"runtime-environment", CVAR, &YevalSmoduleYruntime_environment},
  {"reloader-do-import", CVAR, &YevalSmoduleYreloader_do_import},
  {"---main-3---", PVAR, NULL},
  {"module-uses-c-includes", CVAR, &YevalSmoduleYmodule_uses_c_includes},
  {"insert-and-mangle-global!", CVAR, &YevalSmoduleYinsert_and_mangle_globalX},
  {"module-loader-module-type", CVAR, &YevalSmoduleYmodule_loader_module_type},
  {"load-and-register-module", CVAR, &YevalSmoduleYload_and_register_module},
  {"remove-module-internal!", CVAR, &YevalSmoduleYremove_module_internalX},
  {"<global-box>", CVAR, &YevalSmoduleYLglobal_boxG},
  {"environment-bindings", CVAR, &YevalSmoduleYenvironment_bindings},
  {"unchecked-runtime-environment", CVAR, &YevalSmoduleYunchecked_runtime_environment},
  {"module-uses-c-files", CVAR, &YevalSmoduleYmodule_uses_c_files},
  {"global-box-value-setter", CVAR, &YevalSmoduleYglobal_box_value_setter},
  {"module-mangled-name-setter", CVAR, &YevalSmoduleYmodule_mangled_name_setter},
  {"install-initial-bindings", CVAR, &YevalSmoduleYinstall_initial_bindings},
  {"module-mangled-string-name-setter", CVAR, &YevalSmoduleYmodule_mangled_string_name_setter},
  {"$nul-static-environment", CVAR, &YevalSmoduleYDnul_static_environment},
  {"report-undefined-global-bindings", CVAR, &YevalSmoduleYreport_undefined_global_bindings},
  {"do-named-static-global-bindings", CVAR, &YevalSmoduleYdo_named_static_global_bindings},
  {"module-target-environment-setter", CVAR, &YevalSmoduleYmodule_target_environment_setter},
  {"merge-transactions!", CVAR, &YevalSmoduleYmerge_transactionsX},
  {"call-with-subtransaction", CVAR, &YevalSmoduleYcall_with_subtransaction},
  {"<module-loader>", CVAR, &YevalSmoduleYLmodule_loaderG},
  {"module-name", CVAR, &YevalSmoduleYmodule_name},
  {"module-loader-stack-setter", CVAR, &YevalSmoduleYmodule_loader_stack_setter},
  {"insert-global!", CVAR, &YevalSmoduleYinsert_globalX},
  {"insert-globals!", CVAR, &YevalSmoduleYinsert_globalsX},
  {"find-syntax-environment", CVAR, &YevalSmoduleYfind_syntax_environment},
  {"find-environment-module", CVAR, &YevalSmoduleYfind_environment_module},
  {"binding-free?-setter", CVAR, &YevalSmoduleYbinding_freeQ_setter},
  {"environment-uses-modules-setter", CVAR, &YevalSmoduleYenvironment_uses_modules_setter},
  {"environment-allows-foreign-names?-setter", CVAR, &YevalSmoduleYenvironment_allows_foreign_namesQ_setter},
  {"module-referenced-bindings", CVAR, &YevalSmoduleYmodule_referenced_bindings},
  {"walk-bindings*", CVAR, &YevalSmoduleYwalk_bindingsT},
  {"env-object-name", CVAR, &YevalSmoduleYenv_object_name},
  {"<static-environment>", CVAR, &YevalSmoduleYLstatic_environmentG},
  {"transaction-dependents", CVAR, &YevalSmoduleYtransaction_dependents},
  {"environment-next-setter", CVAR, &YevalSmoduleYenvironment_next_setter},
  {"environment-module-loader", CVAR, &YevalSmoduleYenvironment_module_loader},
  {"module-loader-modules", CVAR, &YevalSmoduleYmodule_loader_modules},
  {"binding-info", CVAR, &YevalSmoduleYbinding_info},
  {"fab-static-global-environment", CVAR, &YevalSmoduleYfab_static_global_environment},
  {"*dynamic-compilation?*", DVAR, &YevalSmoduleYTdynamic_compilationQT},
  {"register-referenced-binding", CVAR, &YevalSmoduleYregister_referenced_binding},
  {"runtime-core-environment", CVAR, &YevalSmoduleYruntime_core_environment},
  {"module-transaction-setter", CVAR, &YevalSmoduleYmodule_transaction_setter},
  {"binding-mangled-name", CVAR, &YevalSmoduleYbinding_mangled_name},
  {"binding-type", CVAR, &YevalSmoduleYbinding_type},
  {"<static-global-environment>", CVAR, &YevalSmoduleYLstatic_global_environmentG},
  {"transaction-nul?", CVAR, &YevalSmoduleYtransaction_nulQ},
  {"find-static-global-environment", CVAR, &YevalSmoduleYfind_static_global_environment},
  {"<binding-name>", CVAR, &YevalSmoduleYLbinding_nameG},
  {"binding-handler", CVAR, &YevalSmoduleYbinding_handler},
  {"module-syntax-environment-setter", CVAR, &YevalSmoduleYmodule_syntax_environment_setter},
  {"binding-name-setter", CVAR, &YevalSmoduleYbinding_name_setter},
  {"environment-module-setter", CVAR, &YevalSmoduleYenvironment_module_setter},
  {"reloader-do-dynamic-binding", CVAR, &YevalSmoduleYreloader_do_dynamic_binding},
  {"binding-module-setter", CVAR, &YevalSmoduleYbinding_module_setter},
  {"reload-modules", CVAR, &YevalSmoduleYreload_modules},
  {"module-loader-modules-setter", CVAR, &YevalSmoduleYmodule_loader_modules_setter},
  {"binding-handler-setter", CVAR, &YevalSmoduleYbinding_handler_setter},
  {"module-target-environment", CVAR, &YevalSmoduleYmodule_target_environment},
  {"---main-4---", PVAR, NULL},
  {"walk-bindings", CVAR, &YevalSmoduleYwalk_bindings},
  {"module-runtime-data-setter", CVAR, &YevalSmoduleYmodule_runtime_data_setter},
  {"<namespace-error>", CVAR, &YevalSmoduleYLnamespace_errorG},
  {"find-binding", CVAR, &YevalSmoduleYfind_binding},
  {"binding-free?", CVAR, &YevalSmoduleYbinding_freeQ},
  {"transaction-register-dependent", CVAR, &YevalSmoduleYtransaction_register_dependent},
  {"load-in", CVAR, &YevalSmoduleYload_in},
  {"$goo-boot-module-name", CVAR, &YevalSmoduleYDgoo_boot_module_name},
  {"register-module!", CVAR, &YevalSmoduleYregister_moduleX},
  {"binding-module-name", CVAR, &YevalSmoduleYbinding_module_name},
  {"namespace-error", CVAR, &YevalSmoduleYnamespace_error},
  {"binding-global-box-setter", CVAR, &YevalSmoduleYbinding_global_box_setter},
  {"set-module-environments", CVAR, &YevalSmoduleYset_module_environments},
  {"environment-module-loader-setter", CVAR, &YevalSmoduleYenvironment_module_loader_setter},
  {"do-static-global-bindings", CVAR, &YevalSmoduleYdo_static_global_bindings},
  {"module-transaction", CVAR, &YevalSmoduleYmodule_transaction},
  {"module-exports", CVAR, &YevalSmoduleYmodule_exports},
  {"zap-referenced-bindings!", CVAR, &YevalSmoduleYzap_referenced_bindingsX},
  {"binding-type-setter", CVAR, &YevalSmoduleYbinding_type_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"module-syntax-environment", NULL},
  {"binding-name", NULL},
  {"environment-module", NULL},
  {"runtime-module", NULL},
  {"binding-prop-setter", NULL},
  {"binding-kind-setter", NULL},
  {"module-data-processed?-setter", NULL},
  {"module-mangled-string-name", NULL},
  {"transaction-register-implemented-binding", NULL},
  {"binding-module", NULL},
  {"binding-locative", NULL},
  {"<static-nul-environment>", NULL},
  {"module-runtime-data", NULL},
  {"<module-loader>", NULL},
  {"find-environment-module", NULL},
  {"ensure-module-data", NULL},
  {"global-box-value", NULL},
  {"import-and-mangle-global!", NULL},
  {"binding-mangled-name-setter", NULL},
  {"runtime-module-loader", NULL},
  {"module-name-to-relpath", NULL},
  {"module-loader-module-type", NULL},
  {"module-mangled-name", NULL},
  {"environment-module-loader", NULL},
  {"insert-globals!", NULL},
  {"binding-inferred-type-setter", NULL},
  {"load-module", NULL},
  {"roll-back-transaction", NULL},
  {"environment-allows-foreign-names?", NULL},
  {"binding-type", NULL},
  {"environment-next", NULL},
  {"binding-prop", NULL},
  {"binding-kind", NULL},
  {"module-data-processed?", NULL},
  {"frame-bindings", NULL},
  {"with-subtransaction", NULL},
  {"binding-global-box-setter", NULL},
  {"binding-info-setter", NULL},
  {"environment-uses-modules", NULL},
  {"module-uses-c-libraries", NULL},
  {"fab-subset-environment", NULL},
  {"find-syntax-environment", NULL},
  {"<static-local-environment>", NULL},
  {"binding-global-box", NULL},
  {"binding-mangled-name", NULL},
  {"remove-modules-by-name!", NULL},
  {"insert-global!", NULL},
  {"<binding>", NULL},
  {"<module-binding>", NULL},
  {"binding-inferred-type", NULL},
  {"*current-subtransaction*", NULL},
  {"binding-locative-setter", NULL},
  {"do-module-loader-modules", NULL},
  {"module-uses-c-includes", NULL},
  {"probe-module", NULL},
  {"export-binding!", NULL},
  {"<global-box>", NULL},
  {"environment-bindings", NULL},
  {"unchecked-runtime-environment", NULL},
  {"binding-info", NULL},
  {"<module>", NULL},
  {"install-initial-bindings", NULL},
  {"module-uses-c-files", NULL},
  {"report-undefined-global-bindings", NULL},
  {"do-named-static-global-bindings", NULL},
  {"module-name", NULL},
  {"binding-free?-setter", NULL},
  {"module-referenced-bindings", NULL},
  {"env-object-name", NULL},
  {"<static-environment>", NULL},
  {"fab-static-global-environment", NULL},
  {"*dynamic-compilation?*", NULL},
  {"register-referenced-binding", NULL},
  {"binding-handler-setter", NULL},
  {"import-global!", NULL},
  {"<static-global-environment>", NULL},
  {"find-static-global-environment", NULL},
  {"<binding-name>", NULL},
  {"module-mangled-string-name-setter", NULL},
  {"binding-native-to?", NULL},
  {"reload-modules", NULL},
  {"module-target-environment", NULL},
  {"walk-bindings", NULL},
  {"module-runtime-data-setter", NULL},
  {"<namespace-error>", NULL},
  {"binding-handler", NULL},
  {"find-binding", NULL},
  {"module-loader-stack", NULL},
  {"runtime-environment", NULL},
  {"global-box-value-setter", NULL},
  {"binding-free?", NULL},
  {"transaction-register-dependent", NULL},
  {"load-in", NULL},
  {"$goo-boot-module-name", NULL},
  {"register-module!", NULL},
  {"binding-module-name", NULL},
  {"call-with-subtransaction", NULL},
  {"namespace-error", NULL},
  {"set-module-environments", NULL},
  {"module-mangled-name-setter", NULL},
  {"do-static-global-bindings", NULL},
  {"module-transaction", NULL},
  {"module-exports", NULL},
  {"zap-referenced-bindings!", NULL},
  {"binding-type-setter", NULL},
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