/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/main */

DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Yerror,"goo/boot","error");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSmathYlogn,"goo/math","logn");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Ynot,"goo/boot","not");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalStopYD,"eval/top","$");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(Ynew,"goo/boot","new");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_1);
DEFLIT(lit_8);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P fileF5409;
  P fileF5408;
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  lit_0 = YPsb((P)"0.152");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"SEP 30, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T2 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF5408 = T2;
  if (fileF5408 != YPfalse) {
    T1 = XCALL2(1,VARREF(YevalStopYload_file),fileF5408,LITREF(lit_10));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  lit_11 = YPsb((P)"init");
  T5 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF5409 = T5;
  if (fileF5409 != YPfalse) {
    T4 = XCALL2(1,VARREF(YevalStopYload_file),fileF5409,LITREF(lit_10));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T7 = XCALL1(1,VARREF(YevalStopYtop),LITREF(lit_10));
  T6 = T7;
  return T6;
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
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_evalSsyntax;

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
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"g2c-top", &module_info_evalSg2c, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"g2c-build-app", &module_info_evalSg2c, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"top", &module_info_evalStop, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"g2c-clean", &module_info_evalSg2c, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"g2c-def-app", &module_info_evalSg2c, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"g2c-ast", &module_info_evalSg2c, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"g2c-goo", &module_info_evalSg2c, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"$", &module_info_evalStop, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"use", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"g2c-test", &module_info_evalSg2c, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"load", &module_info_evalStop, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"g2c-exp", &module_info_evalSg2c, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
  {"---main-0---", PVAR, NULL},
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
  load_module_gooSuser();

  (P)YevalSmainY___main_0___();

}

/* END OF GENERATED CODE. */
