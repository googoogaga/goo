/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/main */

EXT(YisaQ,"goo/boot","isa?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YcolsSpipeYdequeueX,"cols/pipe","dequeue!");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YcolsSpipeYenqueueX,"cols/pipe","enqueue!");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalStopYtop,"eval/top","top");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSmathYT,"goo/math","*");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_9);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_0);
DEFLIT(lit_2);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF2661;
  P fileF2660;
  P tmpF2659;
  P fileF2658;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
loop:
  lit_0 = YPsb((P)"0.138");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"JUL 03, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T0 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF2658 = T0;
  tmpF2659 = fileF2658;
  if (tmpF2659 != YPfalse) {
    T3 = XCALL2(1,VARREF(YevalStopYload_file),fileF2658,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF2660 = T4;
  tmpF2661 = fileF2660;
  if (tmpF2661 != YPfalse) {
    T7 = XCALL2(1,VARREF(YevalStopYload_file),fileF2660,LITREF(lit_10));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  T9 = XCALL1(1,VARREF(YevalStopYtop),LITREF(lit_10));
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
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_timeSevent;
extern MODULE_INFO module_info_colsSpipe;
extern MODULE_INFO module_info_gooSrandom;
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSg2c},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {&module_info_timeSevent},
  {&module_info_colsSpipe},
  {&module_info_gooSrandom},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"event-wait", &module_info_timeSevent, "event-wait"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"until", &module_info_gooSmacros, "until"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"close", &module_info_gooSioSport, "close"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"error", &module_info_gooSboot, "error"},
  {"out", &module_info_gooSioSport, "out"},
  {"dequeue!", &module_info_colsSpipe, "dequeue!"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"event-signal", &module_info_timeSevent, "event-signal"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"tup", &module_info_gooSboot, "tup"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"event-wait-timed", &module_info_timeSevent, "event-wait-timed"},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"tail", &module_info_gooSboot, "tail"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"set", &module_info_gooSboot, "set"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"col", &module_info_gooScolsScol, "col"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"event-name", &module_info_timeSevent, "event-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"t*", &module_info_gooSboot, "t*"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"fab-random", &module_info_gooSrandom, "fab-random"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {">=", &module_info_gooSmag, ">="},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"if", &module_info_gooSboot, "if"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"logn", &module_info_gooSmath, "logn"},
  {"open", &module_info_gooSioSport, "open"},
  {"always", &module_info_gooSruntime, "always"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"rep", &module_info_gooSboot, "rep"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"random-using", &module_info_gooSrandom, "random-using"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"g2c-test", &module_info_evalSg2c, "g2c-test"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"range", &module_info_gooScolsSrange, "range"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"match", &module_info_gooSmacros, "match"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"and", &module_info_gooSmacros, "and"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"<=", &module_info_gooSmag, "<="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"op", &module_info_gooSmacros, "op"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"let", &module_info_gooSboot, "let"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"enqueue!", &module_info_colsSpipe, "enqueue!"},
  {"add", &module_info_gooScolsScol, "add"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"while", &module_info_gooSmacros, "while"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"frame", &module_info_evalStop, "frame"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"thread-function", &module_info_timeSthreads, "thread-function"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"seq", &module_info_gooSboot, "seq"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"event-reset", &module_info_timeSevent, "event-reset"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"find", &module_info_gooScolsScol, "find"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"g2c-build-app", &module_info_evalSg2c, "g2c-build-app"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"top", &module_info_evalStop, "top"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"read", &module_info_gooSruntime, "read"},
  {"acos", &module_info_gooSmath, "acos"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"<event>", &module_info_timeSevent, "<event>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"-", &module_info_gooSmath, "-"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"for", &module_info_gooSmacros, "for"},
  {"+", &module_info_gooSmath, "+"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"map", &module_info_gooSmacros, "map"},
  {"export", &module_info_gooSboot, "export"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"g2c-exp", &module_info_evalSg2c, "g2c-exp"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"items", &module_info_gooScolsScol, "items"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {">>", &module_info_gooSmath, ">>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"g2c-goo", &module_info_evalSg2c, "g2c-goo"},
  {"<pipe>", &module_info_colsSpipe, "<pipe>"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"&", &module_info_gooSmath, "&"},
  {"t?", &module_info_gooStypes, "t?"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"in", &module_info_gooSioSport, "in"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"==", &module_info_gooSmacros, "=="},
  {"peek", &module_info_gooSioSport, "peek"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"spawn", &module_info_timeSthreads, "spawn"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"load", &module_info_evalStop, "load"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"random", &module_info_gooSrandom, "random"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"fin", &module_info_gooSboot, "fin"},
  {"any?", &module_info_gooStypes, "any?"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {">", &module_info_gooSmag, ">"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"g2c-top", &module_info_evalSg2c, "g2c-top"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"t<", &module_info_gooStypes, "t<"},
  {"thread-name", &module_info_timeSthreads, "thread-name"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"=", &module_info_gooSmath, "="},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"g2c-def-app", &module_info_evalSg2c, "g2c-def-app"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"esc", &module_info_gooSboot, "esc"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"/", &module_info_gooSmath, "/"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"asin", &module_info_gooSmath, "asin"},
  {"neg", &module_info_gooSmath, "neg"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"not", &module_info_gooSboot, "not"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"t=", &module_info_gooStypes, "t="},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"get", &module_info_gooSioSport, "get"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"time", &module_info_gooSsystem, "time"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"random-unit-using", &module_info_gooSrandom, "random-unit-using"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"~==", &module_info_gooSmath, "~=="},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"even?", &module_info_gooSmath, "even?"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"random-unit", &module_info_gooSrandom, "random-unit"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"bt", &module_info_evalStop, "bt"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"event-broadcast", &module_info_timeSevent, "event-broadcast"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"new", &module_info_gooSboot, "new"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"g2c-ast", &module_info_evalSg2c, "g2c-ast"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"g2c-clean", &module_info_evalSg2c, "g2c-clean"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"max", &module_info_gooSmag, "max"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"*", &module_info_gooSmath, "*"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"~=", &module_info_gooSmath, "~="},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"nul", &module_info_gooSboot, "nul"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
  {"*goo-date*", CVAR, &YevalSmainYTgoo_dateT},
  {NULL, NVAR, NULL}
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
extern void load_module_timeSthreads (void);
extern void load_module_timeSlock (void);
extern void load_module_timeSevent (void);
extern void load_module_colsSpipe (void);
extern void load_module_gooSrandom (void);
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
  load_module_timeSthreads();
  load_module_timeSlock();
  load_module_timeSevent();
  load_module_colsSpipe();
  load_module_gooSrandom();
  load_module_gooSuser();

  (P)YevalSmainY___main_0___();

}

/* END OF GENERATED CODE. */
