/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-eval");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-eval */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
DEF(YevalSast_evalYenv_dynamic_value_setter,"eval/ast-eval","env-dynamic-value-setter");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSastYc_inline_exprQ,"eval/ast","c-inline-expr?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YPfalse,"goo/boot","%false");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yhead,"goo/boot","head");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYc_inline_strs,"eval/ast","c-inline-strs");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YevalSast_evalYenv_dynamic_value,"eval/ast-eval","env-dynamic-value");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYc_inline_refs,"eval/ast","c-inline-refs");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYLc_inlineG,"eval/ast","<c-inline>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YOlit,"goo/boot","@lit");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YtT,"goo/boot","t*");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSlocYas_c,"goo/loc","as-c");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSlocYas_goo,"goo/loc","as-goo");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSmoduleYmodule_c_forms,"eval/module","module-c-forms");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSast_evalYenv_global_binding_value_or,"eval/ast-eval","env-global-binding-value-or");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPtrue,"goo/boot","%true");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yunexec,"goo/boot","unexec");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
DEF(YevalSast_evalYbinding_value_or,"eval/ast-eval","binding-value-or");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_27);
DEFLIT(lit_65);
DEFLIT(lit_14);
DEFLIT(lit_30);
DEFLIT(lit_55);
DEFLIT(lit_60);
DEFLIT(lit_91);
DEFLIT(lit_118);
DEFLIT(lit_106);
DEFLIT(lit_84);
DEFLIT(lit_107);
DEFLIT(lit_16);
DEFLIT(lit_80);
DEFLIT(lit_50);
DEFLIT(lit_17);
DEFLIT(lit_103);
DEFLIT(lit_109);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_115);
DEFLIT(lit_22);
DEFLIT(lit_29);
DEFLIT(lit_110);
DEFLIT(lit_108);
DEFLIT(lit_68);
DEFLIT(lit_7);
DEFLIT(lit_82);
DEFLIT(lit_76);
DEFLIT(lit_24);
DEFLIT(lit_102);
DEFLIT(lit_94);
DEFLIT(lit_6);
DEFLIT(lit_96);
DEFLIT(lit_31);
DEFLIT(lit_25);
DEFLIT(lit_42);
DEFLIT(lit_101);
DEFLIT(lit_123);
DEFLIT(lit_40);
DEFLIT(lit_46);
DEFLIT(lit_43);
DEFLIT(lit_78);
DEFLIT(lit_52);
DEFLIT(lit_12);
DEFLIT(lit_90);
DEFLIT(lit_0);
DEFLIT(lit_53);
DEFLIT(lit_20);
DEFLIT(lit_132);
DEFLIT(lit_113);
DEFLIT(lit_88);
DEFLIT(lit_104);
DEFLIT(lit_122);
DEFLIT(lit_56);
DEFLIT(lit_75);
DEFLIT(lit_67);
DEFLIT(lit_54);
DEFLIT(lit_34);
DEFLIT(lit_21);
DEFLIT(lit_18);
DEFLIT(lit_120);
DEFLIT(lit_66);
DEFLIT(lit_105);
DEFLIT(lit_128);
DEFLIT(lit_47);
DEFLIT(lit_41);
DEFLIT(lit_133);
DEFLIT(lit_39);
DEFLIT(lit_37);
DEFLIT(lit_3);
DEFLIT(lit_93);
DEFLIT(lit_100);
DEFLIT(lit_129);
DEFLIT(lit_87);
DEFLIT(lit_111);
DEFLIT(lit_99);
DEFLIT(lit_45);
DEFLIT(lit_117);
DEFLIT(lit_92);
DEFLIT(lit_134);
DEFLIT(lit_23);
DEFLIT(lit_61);
DEFLIT(lit_49);
DEFLIT(lit_98);
DEFLIT(lit_97);
DEFLIT(lit_125);
DEFLIT(lit_38);
DEFLIT(lit_81);
DEFLIT(lit_70);
DEFLIT(lit_79);
DEFLIT(lit_5);
DEFLIT(lit_62);
DEFLIT(lit_9);
DEFLIT(lit_19);
DEFLIT(lit_119);
DEFLIT(lit_77);
DEFLIT(lit_69);
DEFLIT(lit_95);
DEFLIT(lit_74);
DEFLIT(lit_4);
DEFLIT(lit_73);
DEFLIT(lit_83);
DEFLIT(lit_116);
DEFLIT(lit_127);
DEFLIT(lit_124);
DEFLIT(lit_71);
DEFLIT(lit_48);
DEFLIT(lit_13);
DEFLIT(lit_72);
DEFLIT(lit_28);
DEFLIT(lit_114);
DEFLIT(lit_131);
DEFLIT(lit_86);
DEFLIT(lit_58);
DEFLIT(lit_32);
DEFLIT(lit_33);
DEFLIT(lit_15);
DEFLIT(lit_35);
DEFLIT(lit_2);
DEFLIT(lit_121);
DEFLIT(lit_126);
DEFLIT(lit_63);
DEFLIT(lit_89);
DEFLIT(lit_44);
DEFLIT(lit_57);
DEFLIT(lit_26);
DEFLIT(lit_36);
DEFLIT(lit_51);
DEFLIT(lit_85);
DEFLIT(lit_112);
DEFLIT(lit_10);
DEFLIT(lit_64);
DEFLIT(lit_130);
DEFLIT(lit_59);
DEFLIT(lit_8);

/* FUNCTIONS: */

LOCFOR(fun_env_global_binding_value_0);
LOCFOR(fun_env_global_binding_value_setter_1);
LOCFOR(fun_env_global_binding_boundQ_2);
LOCFOR(fun_env_runtime_value_3);
LOCFOR(fun_env_runtime_value_setter_4);
LOCFOR(fun_env_dynamic_value_5);
LOCFOR(fun_env_dynamic_value_setter_6);
LOCFOR(fun_env_parent_7);
LOCFOR(fun_8);
LOCFOR(fun_env_function_9);
LOCFOR(fun_10);
LOCFOR(fun_env_names_11);
LOCFOR(fun_12);
LOCFOR(fun_env_values_13);
LOCFOR(fun_env_frameX_14);
LOCFOR(fun_env_local_value_15);
LOCFOR(fun_env_local_value_setter_16);
LOCFOR(fun_env_binding_value_17);
LOCFOR(fun_env_binding_value_setter_18);
LOCFOR(fun_ast_evaluate_19);
LOCFOR(fun_ast_eval_20);
LOCFOR(fun_ast_eval_21);
LOCFOR(fun_ast_eval_22);
LOCFOR(fun_ast_eval_specs_23);
FUNFOR(YevalSast_evalYarrange_arguments);
LOCFOR(fun_x_1528_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_as_fun_name_28);
LOCFOR(fun_as_fun_name_29);
LOCFOR(fun_as_fun_name_30);
LOCFOR(fun_as_fun_name_31);
LOCFOR(fun_as_fun_name_32);
LOCFOR(fun_as_fun_name_33);
LOCFOR(fun_34);
LOCFOR(fun_export_goo_method_35);
LOCFOR(fun_36);
LOCFOR(fun_ast_eval_37);
LOCFOR(fun_ast_eval_38);
LOCFOR(fun_env_local_reference_value_39);
LOCFOR(fun_env_local_reference_value_setter_40);
LOCFOR(fun_ast_eval_41);
LOCFOR(fun_ast_eval_42);
LOCFOR(fun_ast_eval_43);
LOCFOR(fun_ast_eval_44);
LOCFOR(fun_ast_eval_45);
LOCFOR(fun_ast_eval_46);
LOCFOR(fun_env_global_binding_value_or_47);
LOCFOR(fun_ast_eval_boundQ_48);
LOCFOR(fun_ast_eval_boundQ_49);
LOCFOR(fun_ast_eval_50);
LOCFOR(fun_ast_eval_51);
LOCFOR(fun_ast_eval_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_env_define_bindingX_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_ast_eval_66);
LOCFOR(fun_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_ast_eval_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_ast_eval_74);
LOCFOR(fun_ast_eval_75);
FUNFOR(YevalSastYinit_environment_for_eval);
extern P YevalSast_evalYPdefine_binding (P,P);
extern P YevalSast_evalYPlookup_binding (P,P);
extern P YevalSast_evalYPensure_binding (P,P);
extern P YevalSast_evalYPdlvar_binding (P);
extern P YevalSast_evalYPbinding_value_of (P);
extern P YevalSast_evalYPbinding_value (P);
extern P YevalSast_evalYPbinding_value_of_setter (P,P);
extern P YevalSast_evalYPbinding_value_setter (P,P);
extern P YevalSast_evalYPbinding_value_or_of (P,P);
FUNFOR(YevalSast_evalYbinding_value_or);
extern P YevalSast_evalYPbinding_value_or (P,P);
extern P YevalSast_evalY___main_0___ ();
extern P YevalSast_evalY___main_1___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF4322;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(b_, 0);
  T5 = CALL1(1,VARREF(YevalSmoduleYbinding_global_box),b_);
  boxF4322 = T5;
  if (boxF4322 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSmoduleYglobal_box_value),boxF4322);
    T0 = T1;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T3 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),T4);
    T2 = CALL1(1,VARREF(YgooSconditionsYsig),T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF4323;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
  T8 = CALL1(1,VARREF(YevalSmoduleYbinding_global_box),b_);
  boxF4323 = T8;
  T2 = boxF4323;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(Ynew),VARREF(YevalSmoduleYLglobal_boxG));
    T4 = CALL2(1,VARREF(YevalSmoduleYbinding_global_box_setter),T5,b_);
    T3 = boxF4323 = T4;
  } else {
  }
  T7 = boxF4323;
  T6 = CALL2(1,VARREF(YevalSmoduleYglobal_box_value_setter),value_,T7);
UNLINK_STACK();
  QRET(T6);
}

LOCCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF4324;
  P T0,T1;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_global_box),b_);
  boxF4324 = T1;
  if (boxF4324 != YPfalse) {
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_env_runtime_value_3) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSlocYloc_val),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_runtime_value_setter_4) {
  P v_,x_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSlocYloc_val_setter),v_,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_dynamic_value_5) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSlocYloc_val),x_);
  T0 = (P)YPdyn_var_val(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_dynamic_value_setter_6) {
  P v_,x_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
  T0 = CALL1(1,VARREF(YgooSlocYloc_val),x_);
  (P)YPdyn_var_val_setter(v_,T0);
UNLINK_STACK();
  QRET(v_);
}

LOCCODEDEF(fun_env_parent_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_8) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_env_function_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_10) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_env_names_11) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_env_values_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_frameX_14) {
  P env_,function_,names_,args_;
  P valuesF4325;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
  T3 = CALL1(1,VARREF(YgooStypesYlen),args_);
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T3,YPfalse);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_intoX),T2,args_);
  valuesF4325 = T1;
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF4325,VARREF(YevalSast_evalYenv_names),names_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_env_local_value_15) {
  P env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
  T1 = CALL2(1,VARREF(YgooSlogYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_local_value_setter_16) {
  P v_,env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
  T1 = CALL2(1,VARREF(YgooSlogYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),v_,T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_binding_value_17) {
  P env_,name_;
  P iF4327;
  P namesF4326;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(YevalSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T14 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    namesF4326 = T14;
    iF4327 = YPint((P)0);
    LOOP_192: {
      P a192_0,a192_1;
      T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),namesF4326);
      if (T3 != YPfalse) {
        T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
        T4 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),T5,name_);
        T2 = T4;
      } else {
        T8 = CALL1(1,VARREF(Yhead),namesF4326);
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T8);
        if (T7 != YPfalse) {
          T10 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
          T9 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T10,iF4327);
          T6 = T9;
        } else {
          T12 = CALL1(1,VARREF(Ytail),namesF4326);
          T13 = CALL2(1,VARREF(YgooSmathYA),iF4327,YPint((P)1));
          a192_0 = T12;
          a192_1 = T13;
          namesF4326 = a192_0;
          iF4327 = a192_1;
          goto LOOP_192;
          T6 = T11;
        }
        T2 = T6;
      }
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_binding_value_setter_18) {
  P v_,env_,name_;
  P iF4329;
  P namesF4328;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
  T12 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  namesF4328 = T12;
  iF4329 = YPint((P)0);
  LOOP_193: {
    P a193_0,a193_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),namesF4328);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
      T2 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),v_,T3,name_);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(Yhead),namesF4328);
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T6);
      if (T5 != YPfalse) {
        T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
        T7 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),v_,T8,iF4329);
        T4 = T7;
      } else {
        T10 = CALL1(1,VARREF(Ytail),namesF4328);
        T11 = CALL2(1,VARREF(YgooSmathYA),iF4329,YPint((P)1));
        a193_0 = T10;
        a193_1 = T11;
        namesF4328 = a193_0;
        iF4329 = a193_1;
        goto LOOP_193;
        T4 = T9;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_evaluate_19) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),e_,VARREF(YevalSast_evalYDnul_loc_env));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_20) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_21) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_22) {
  P e_,ee_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
  T1 = CALL1(1,VARREF(YevalSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_specs_23) {
  P specs_,naryQ_,env_;
  P typeF4335;
  P specF4334;
  P iF4333;
  P specsF4332;
  P resF4331;
  P nreqF4330;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
  if (naryQ_ != YPfalse) {
    T12 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
    T10 = T11;
  } else {
    T13 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T10 = T13;
  }
  nreqF4330 = T10;
  resF4331 = Ynil;
  specsF4332 = specs_;
  iF4333 = YPint((P)0);
  LOOP_194: {
    P a194_0,a194_1,a194_2;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF4333,nreqF4330);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF4331);
      T0 = T2;
    } else {
      T9 = CALL1(1,VARREF(Yhead),specsF4332);
      specF4334 = T9;
      if (specF4334 != YPfalse) {
        T8 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF4334,env_);
        T7 = T8;
      } else {
        T7 = VARREF(YLanyG);
      }
      typeF4335 = T7;
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),typeF4335,resF4331);
      T5 = CALL1(1,VARREF(Ytail),specsF4332);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF4333,YPint((P)1));
      a194_0 = T4;
      a194_1 = T5;
      a194_2 = T6;
      resF4331 = a194_0;
      specsF4332 = a194_1;
      iF4333 = a194_2;
      goto LOOP_194;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF4336;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
  T11 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF4336 = T11;
  if (naryQ_ != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmagYL),countF4336,arity_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(Ynarity_error),f_,args_);
      T1 = T3;
    } else {
      T5 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T7 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF4336);
      T6 = CALL1(1,VARREF(Ylst),T7);
      T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),T5,T6);
      T1 = T4;
    }
    T0 = T1;
  } else {
    T9 = CALL2(1,VARREF(YgooSlogYNEE),countF4336,arity_);
    if (T9 != YPfalse) {
      T10 = CALL2(1,VARREF(Yarity_error),f_,args_);
      T8 = T10;
    } else {
      T8 = args_;
    }
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1528_25) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_51),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_26) {
  P return_;
  P x_1527F4351;
  P x_1527F4350;
  P x_1527F4349;
  P x_1527F4348;
  P x_1527F4347;
  P x_1527F4346;
  P x_1527F4345;
  P bodyF4344;
  P namesF4343;
  P arityF4342;
  P naryQF4341;
  P fF4340;
  P envF4339;
  P x_1527F4338;
  P x_1528F4337;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88;
LINK_STACK();
  ARG(return_, 0);
  T88 = FUNSHELL(0,fun_x_1528_25,2);
  x_1528F4337 = T88;
  FUNINIT(x_1528F4337, 2,FREEREF(0),return_);
  x_1527F4338 = FREEREF(0);
  envF4339 = YPfalse;
  fF4340 = YPfalse;
  naryQF4341 = YPfalse;
  arityF4342 = YPfalse;
  namesF4343 = YPfalse;
  bodyF4344 = YPfalse;
  T6 = CALL2(1,VARREF(YisaQ),x_1527F4338,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T20 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1527F4338,LITREF(lit_51),x_1528F4337);
    x_1527F4345 = T20;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1527F4345,x_1528F4337);
    envF4339 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1527F4345);
    x_1527F4346 = T19;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1527F4346,x_1528F4337);
    fF4340 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1527F4346);
    x_1527F4347 = T17;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1527F4347,x_1528F4337);
    naryQF4341 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1527F4347);
    x_1527F4348 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1527F4348,x_1528F4337);
    arityF4342 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1527F4348);
    x_1527F4349 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1527F4349,x_1528F4337);
    namesF4343 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1527F4349);
    x_1527F4350 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1527F4350,x_1528F4337);
    bodyF4344 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1527F4350);
    x_1527F4351 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1527F4351,x_1528F4337);
  } else {
    T21 = CALL2(1,x_1528F4337,LITREF(lit_52),x_1527F4338);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,LITREF(lit_56));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,LITREF(lit_56));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T44,LITREF(lit_56));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),6,T36,T37,T38,T39,T40,LITREF(lit_56));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,LITREF(lit_56));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T50 = CALL2(1,VARREF(YgooSmacrosYcat),T51,LITREF(lit_56));
  T49 = CALL1(1,VARREF(Ylst),T50);
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T49,LITREF(lit_56));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T60 = envF4339;
  T59 = CALL1(1,VARREF(Ylst),T60);
  T62 = fF4340;
  T61 = CALL1(1,VARREF(Ylst),T62);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T67 = namesF4343;
  T66 = CALL1(1,VARREF(Ylst),T67);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T72 = CALL3(1,VARREF(YgooSmacrosYcat),T73,T74,Ynil);
  T71 = CALL1(1,VARREF(Ylst),T72);
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T71,LITREF(lit_56));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T64 = CALL4(1,VARREF(YgooSmacrosYcat),T65,T66,T68,LITREF(lit_56));
  T63 = CALL1(1,VARREF(Ylst),T64);
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T78 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T80 = CALL3(1,VARREF(YgooSmacrosYcat),T81,T82,LITREF(lit_56));
  T79 = CALL1(1,VARREF(Ylst),T80);
  T76 = CALL4(1,VARREF(YgooSmacrosYcat),T77,T78,T79,LITREF(lit_56));
  T75 = CALL1(1,VARREF(Ylst),T76);
  T57 = CALLN(1,VARREF(YgooSmacrosYcat),6,T58,T59,T61,T63,T75,LITREF(lit_56));
  T56 = CALL1(1,VARREF(Ylst),T57);
  T53 = CALL4(1,VARREF(YgooSmacrosYcat),T54,T55,T56,LITREF(lit_56));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T86 = bodyF4344;
  T85 = CALL1(1,VARREF(Ylst),T86);
  T87 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T84 = CALL3(1,VARREF(YgooSmacrosYcat),T85,T87,LITREF(lit_56));
  T83 = CALL1(1,VARREF(Ylst),T84);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),7,T23,T24,T30,T45,T52,T83,LITREF(lit_56));
UNLINK_STACK();
  QRET(T22);
}

LOCCODEDEF(fun_27) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_26,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_fun_name_28) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSfunYfun_name),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_fun_name_29) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_fun_name_30) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YevalSmoduleYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_fun_name_31) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_fun_name_32) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_as_fun_name_33) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_34) {
  P arg_vector_;
  P frameF4354;
  P nmsF4353;
  P argsF4352;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  NARGS(arg_vector_, 0);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T7 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T8);
  argsF4352 = T7;
  T6 = (P)YPnext_methods();
  nmsF4353 = T6;
  T3 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T2 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T3);
  T5 = CALL1(1,VARREF(Ylst),nmsF4353);
  T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF4352,T5);
  T1 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T2,T4);
  frameF4354 = T1;
  T0 = CALL1(1,FREEREF(5),frameF4354);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_export_goo_method_35) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF4356;
  P arityF4355;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(f_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(value_, 4);
  ARG(body_, 5);
  ARG(env_, 6);
  if (naryQ_ != YPfalse) {
    T9 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T8 = CALL2(1,VARREF(YgooSmathY_),T9,YPint((P)1));
    T7 = T8;
  } else {
    T10 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T7 = T10;
  }
  arityF4355 = T7;
  T6 = FUNFAB(fun_34,6,f_,naryQ_,arityF4355,env_,names_,body_);
  efunF4356 = T6;
  T1 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YLfun_infoG),VARREF(Yfun_info_name),T1,VARREF(Yfun_info_names),names_);
  CALL2(1,VARREF(Yfun_info_setter),T0,efunF4356);
  T3 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T4 = T5;
  } else {
    T4 = VARREF(YLanyG);
  }
  T2 = CALLN(1,VARREF(Ynew),11,VARREF(YLsigG),VARREF(Ysig_specs),T3,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF4355,VARREF(Ysig_val),T4,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T2,efunF4356);
UNLINK_STACK();
  QRET(efunF4356);
}

LOCCODEDEF(fun_36) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_37) {
  P e_,env_;
  P evalF4358;
  P paramsF4357;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF4357 = T6;
  T5 = FUNFAB(fun_36,1,e_);
  evalF4358 = T5;
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_name),paramsF4357);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_type),paramsF4357);
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T4 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T0 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T1,T2,T3,T4,evalF4358,env_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_38) {
  P e_,env_;
  P specsF4362;
  P namesF4361;
  P naryQF4360;
  P paramsF4359;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF4359 = T6;
  T5 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF4360 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_name),paramsF4359);
  namesF4361 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_type),paramsF4359);
  T2 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T3,naryQF4360,env_);
  specsF4362 = T2;
  T1 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T0 = CALL5(1,VARREF(YgooSfunYfab_gen),specsF4362,naryQF4360,VARREF(YLanyG),T1,namesF4361);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_local_reference_value_39) {
  P env_,ref_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_local_reference_value_setter_40) {
  P val_,env_,ref_;
  P T0,T1,T2;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_41) {
  P e_,env_;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_ast_eval_42) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_45) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_46) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(YevalSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_global_binding_value_or_47) {
  P b_,default_,env_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(b_, 0);
  ARG(default_, 1);
  ARG(env_, 2);
  T1 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_boundQ),b_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),b_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),default_,env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_boundQ_48) {
  P e_,binding_,env_;
  P x_1530F4364;
  P x_1529F4363;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
  x_1529F4363 = T6;
  x_1530F4364 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1530F4364,x_1529F4363,LITREF(lit_97));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    T2 = CALL3(1,VARREF(YevalSast_evalYenv_global_binding_value_or),binding_,T3,env_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_boundQ_49) {
  P e_,binding_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
  T1 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_50) {
  P e_,env_;
  P valueF4365;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T2 = CALL2(1,VARREF(YevalSast_evalYast_eval),T3,env_);
  valueF4365 = T2;
  T1 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF4365,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_51) {
  P e_,env_;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_ast_eval_52) {
  P e_,env_;
  P valueF4366;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  valueF4366 = T3;
  T2 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_locative),T2);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF4366,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P valueF4367;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  valueF4367 = T3;
  T2 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_locative),T2);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),valueF4367,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P valueF4368;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T2 = CALL2(1,VARREF(YevalSast_evalYast_eval),T3,env_);
  valueF4368 = T2;
  T1 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF4368,env_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_env_define_bindingX_55) {
  P b_,v_;
  P xF4371;
  P x_1532F4370;
  P x_1531F4369;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
  T15 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),b_);
  x_1531F4369 = T15;
  x_1532F4370 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1532F4370,x_1531F4369,LITREF(lit_106));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_locative),b_);
    T2 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T3);
    T0 = T2;
  } else {
    T5 = CALL2(1,x_1532F4370,x_1531F4369,LITREF(lit_97));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T4 = T6;
    } else {
      T8 = CALL2(1,x_1532F4370,x_1531F4369,LITREF(lit_107));
      if (T8 != YPfalse) {
        T10 = (P)YPfab_dyn_var();
        xF4371 = T10;
        T9 = (P)YPtag_into(xF4371,(P)3);
        CALL2(1,VARREF(YevalSmoduleYbinding_locative_setter),T9,b_);
        T12 = CALL1(1,VARREF(YevalSmoduleYbinding_locative),b_);
        T11 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),v_,T12);
        T7 = T11;
      } else {
        T14 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),b_);
        T13 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_108),T14);
        T7 = T13;
      }
      T4 = T7;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF4372;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF4372 = T1;
  T0 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T0,valueF4372);
UNLINK_STACK();
  QRET(valueF4372);
}

LOCCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_58) {
  P continue_;
  P T0,T1,T2;
LINK_STACK();
  ARG(continue_, 0);
  CALL2(1,VARREF(YevalSastYloop_continue_setter),continue_,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYloop_body),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL1(0,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_59) {
  P return_;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  LOOP_195: {
    T0 = FUNFAB(fun_58,3,FREEREF(0),FREEREF(1),return_);
    with_exit(T0);
    goto LOOP_195;
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_59,2,e_,env_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_61) {
  P e_,env_;
  P valF4375;
  P nxtF4374;
  P eF4373;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  eF4373 = e_;
  LOOP_196: {
    P a196_0;
    T5 = CALL1(1,VARREF(Ytail),eF4373);
    nxtF4374 = T5;
    T4 = CALL1(1,VARREF(Yhead),eF4373);
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
    valF4375 = T3;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),nxtF4374);
    if (T1 != YPfalse) {
      T0 = valF4375;
    } else {
      a196_0 = nxtF4374;
      eF4373 = a196_0;
      goto LOOP_196;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_62) {
  P e_,env_;
  P argsF4377;
  P resF4376;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  resF4376 = Ynil;
  argsF4377 = e_;
  LOOP_197: {
    P a197_0,a197_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),argsF4377);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF4376);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(Yhead),argsF4377);
      T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,resF4376);
      T7 = CALL1(1,VARREF(Ytail),argsF4377);
      a197_0 = T4;
      a197_1 = T7;
      resF4376 = a197_0;
      argsF4377 = a197_1;
      goto LOOP_197;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P argsF4379;
  P fF4378;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  fF4378 = T3;
  T2 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF4379 = T1;
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),fF4378,YPfalse,argsF4379);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P bindingF4386;
  P argF4385;
  P tmpF4384;
  P x_1533F4383;
  P x_1534F4382;
  P argsF4381;
  P loopF4380;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T18 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF4380 = T18;
  T17 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T16 = CALL2(1,VARREF(YevalSast_evalYast_eval),T17,env_);
  argsF4381 = T16;
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),argsF4381);
  x_1534F4382 = T11;
  T13 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF4380);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_1533F4383 = T12;
  LOOP_198: {
    P a198_0,a198_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1534F4382);
    tmpF4384 = T4;
    if (tmpF4384 != YPfalse) {
      T2 = tmpF4384;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1533F4383);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1534F4382);
      argF4385 = T10;
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1533F4383);
      bindingF4386 = T9;
      T5 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF4386);
      CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),argF4385,env_,T5);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1534F4382);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1533F4383);
      a198_0 = T7;
      a198_1 = T8;
      x_1534F4382 = a198_0;
      x_1533F4383 = a198_1;
      goto LOOP_198;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
  T15 = CALL1(1,VARREF(YevalSastYloop_continue),loopF4380);
  T14 = CALL1(1,T15,YPfalse);
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P argsF4391;
  P fF4390;
  P x_1537F4389;
  P x_1536F4388;
  P bF4387;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T10 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF4387 = T10;
  T9 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bF4387);
  x_1536F4388 = T9;
  x_1537F4389 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1537F4389,x_1536F4388,LITREF(lit_65));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_65));
    T0 = T2;
  } else {
    T4 = CALL2(1,x_1537F4389,x_1536F4388,LITREF(lit_119));
    if (T4 != YPfalse) {
      T3 = YPfalse;
    } else {
      T8 = CALL1(1,VARREF(YevalSast_evalYPbinding_value_of),bF4387);
      fF4390 = T8;
      T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
      T6 = CALL2(1,VARREF(YevalSast_evalYast_eval),T7,env_);
      argsF4391 = T6;
      T5 = CALL3(1,VARREF(YgooSmacrosYnapp),fF4390,YPfalse,argsF4391);
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_66) {
  P e_,env_;
  P nenvF4393;
  P argsF4392;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
  argsF4392 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_name),T4);
  T2 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T3,argsF4392);
  nenvF4393 = T2;
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,nenvF4393);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_67) {
  P name_,value_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P new_envF4395;
  P bindingsF4394;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF4394 = T11;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_name),bindingsF4394);
  T10 = CALL1(1,VARREF(YgooSfunctionalYalways),YPfalse);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,bindingsF4394);
  T7 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T8,T9);
  new_envF4395 = T7;
  T0 = FUNFAB(fun_67,1,new_envF4395);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_name),bindingsF4394);
  T3 = CALL2(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSast_evalYast_eval),new_envF4395);
  T4 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,T4);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T0,T1,T2);
  T6 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,new_envF4395);
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_69) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_126));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_70) {
  P return_;
  P exitF4397;
  P rprocF4396;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNFAB(fun_69,1,return_);
  rprocF4396 = T6;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_126));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF4396,T4,T5,YPfalse,YPfalse,rprocF4396,FREEREF(0));
  exitF4397 = T3;
  T2 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL1(1,T1,exitF4397);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_71) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_70,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_72) {
  P T0,T1,T2;
LINK_STACK();
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P T0,T1,T2;
LINK_STACK();
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_74) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_72,2,e_,env_);
  T2 = FUNFAB(fun_73,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ast_eval_75) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  T6 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
  T8 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,env_);
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  T9 = CALL2(1,VARREF(YevalSast_evalYast_eval),T10,env_);
  T0 = CALL5(1,VARREF(YPwith_monitor),T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_environment_for_eval) {
  P env_;
  P T0;
LINK_STACK();
  ARG(env_, 0);
  T0 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_65),YPfalse,LITREF(lit_132));
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF4398;
  P T0,T1,T2,T3;
DEFCREGS();
  T3 = (P)YPPsym(raw_mod_);
  T2 = XCALL1(1,VARREF(YevalSmoduleYunchecked_runtime_environment),T3);
  eF4398 = T2;
  T1 = (P)YPPsym(raw_nam_);
  T0 = XCALL4(1,VARREF(YevalSastYast_define_binding),eF4398,T1,YPfalse,LITREF(lit_97));
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF4399;
  P T0,T1,T2,T3;
DEFCREGS();
  T3 = (P)YPPsym(raw_mod_);
  T2 = XCALL1(1,VARREF(YevalSmoduleYunchecked_runtime_environment),T3);
  eF4399 = T2;
  T1 = (P)YPPsym(raw_nam_);
  T0 = XCALL2(1,VARREF(YevalSmoduleYfind_binding),T1,eF4399);
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF4400;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF4400 = T2;
  if (tmpF4400 != YPfalse) {
    T0 = tmpF4400;
  } else {
    T1 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T0 = T1;
  }
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P yF4405;
  P xF4404;
  P xF4403;
  P xF4402;
  P bF4401;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  T8 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF4401 = T8;
  xF4404 = bF4401;
  xF4402 = YPint((P)0);
  xF4403 = xF4402;
  T3 = (P)YPiGG(xF4403,(P)2);
  yF4405 = T3;
  T2 = (P)YPeqQ(xF4404,yF4405);
  T1 = (P)YPbb(T2);
  if (T2) {
    T6 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T7 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T5 = (P)YevalSast_evalYPensure_binding(T6,T7);
    T4 = (P)YevalSast_evalYPdlvar_setter(T5,dlvar_);
    T0 = T4;
  } else {
    T0 = bF4401;
  }
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_of(P binding_) {
  P x_1539F4407;
  P x_1538F4406;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  T9 = XCALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
  x_1538F4406 = T9;
  x_1539F4407 = VARREF(YgooSmacrosYEE);
  T1 = XCALL2(1,x_1539F4407,x_1538F4406,LITREF(lit_106));
  if (T1 != YPfalse) {
    T3 = XCALL1(1,VARREF(YevalSmoduleYbinding_locative),binding_);
    T2 = XCALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T3);
    T0 = T2;
  } else {
    T5 = XCALL2(1,x_1539F4407,x_1538F4406,LITREF(lit_107));
    if (T5 != YPfalse) {
      T7 = XCALL1(1,VARREF(YevalSmoduleYbinding_locative),binding_);
      T6 = XCALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T7);
      T4 = T6;
    } else {
      T8 = XCALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),binding_);
      T4 = T8;
    }
    T0 = T4;
  }
  return T0;
}

P YevalSast_evalYPbinding_value(P dlvar_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  T0 = (P)YevalSast_evalYPbinding_value_of(T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_of_setter(P val_,P binding_) {
  P x_1541F4409;
  P x_1540F4408;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  T9 = XCALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
  x_1540F4408 = T9;
  x_1541F4409 = VARREF(YgooSmacrosYEE);
  T1 = XCALL2(0,x_1541F4409,x_1540F4408,LITREF(lit_106));
  if (T1 != YPfalse) {
    T3 = XCALL1(1,VARREF(YevalSmoduleYbinding_locative),binding_);
    T2 = XCALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T3);
    T0 = T2;
  } else {
    T5 = XCALL2(0,x_1541F4409,x_1540F4408,LITREF(lit_107));
    if (T5 != YPfalse) {
      T7 = XCALL1(1,VARREF(YevalSmoduleYbinding_locative),binding_);
      T6 = XCALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),val_,T7);
      T4 = T6;
    } else {
      T8 = XCALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),val_,binding_);
      T4 = T8;
    }
    T0 = T4;
  }
  return T0;
}

P YevalSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  T0 = (P)YevalSast_evalYPbinding_value_of_setter(val_,T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_or_of(P b_,P default_) {
  P T0,T1,T2,T3;
DEFCREGS();
  if (b_ != YPfalse) {
    T2 = XCALL1(1,VARREF(YevalSmoduleYbinding_info),b_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T3 = (P)YevalSast_evalYPbinding_value_of(b_);
    T0 = T3;
  } else {
    T0 = default_;
  }
  return T0;
}

FUNCODEDEF(YevalSast_evalYbinding_value_or) {
  P b_,def_;
  P T0;
LINK_STACK();
  ARG(b_, 0);
  ARG(def_, 1);
  T0 = (P)YevalSast_evalYPbinding_value_or_of(b_,def_);
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPbinding_value_or(P dlvar_,P default_) {
  P T0,T1,T2,T3;
DEFCREGS();
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  T0 = (P)YevalSast_evalYPbinding_value_or_of(T1,default_);
  return T0;
}

P YevalSast_evalY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141;
DEFCREGS();
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPlist(1,YPPsym((P)"b"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPfab_met(FUNCODEREF(fun_env_global_binding_value_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(18),YPfalse);
  T2 = VARREF_OR(YevalSast_evalYenv_global_binding_value,YPfalse);
  T3 = fun_env_global_binding_value_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSast_evalYenv_global_binding_value,T1);
  lit_2 = YPPsym((P)"env-global-binding-value-setter");
  lit_3 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"b"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPfab_met(FUNCODEREF(fun_env_global_binding_value_setter_1),T4,LITREF(lit_2),LITREF(lit_3),sloc(25),YPfalse);
  T6 = VARREF_OR(YevalSast_evalYenv_global_binding_value_setter,YPfalse);
  T7 = fun_env_global_binding_value_setter_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSast_evalYenv_global_binding_value_setter,T5);
  lit_4 = YPPsym((P)"env-global-binding-bound?");
  lit_5 = YPPlist(1,YPPsym((P)"b"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPfab_met(FUNCODEREF(fun_env_global_binding_boundQ_2),T8,LITREF(lit_4),LITREF(lit_5),sloc(33),YPfalse);
  T10 = VARREF_OR(YevalSast_evalYenv_global_binding_boundQ,YPfalse);
  T11 = fun_env_global_binding_boundQ_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSast_evalYenv_global_binding_boundQ,T9);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPfab_met(FUNCODEREF(fun_env_runtime_value_3),T12,LITREF(lit_6),LITREF(lit_7),sloc(39),YPfalse);
  T14 = VARREF_OR(YevalSast_evalYenv_runtime_value,YPfalse);
  T15 = fun_env_runtime_value_3;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSast_evalYenv_runtime_value,T13);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPfab_met(FUNCODEREF(fun_env_runtime_value_setter_4),T16,LITREF(lit_8),LITREF(lit_9),sloc(42),YPfalse);
  T18 = VARREF_OR(YevalSast_evalYenv_runtime_value_setter,YPfalse);
  T19 = fun_env_runtime_value_setter_4;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSast_evalYenv_runtime_value_setter,T17);
  lit_10 = YPPsym((P)"env-dynamic-value");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_5 = YPfab_met(FUNCODEREF(fun_env_dynamic_value_5),T20,LITREF(lit_10),LITREF(lit_11),sloc(47),YPfalse);
  T22 = VARREF_OR(YevalSast_evalYenv_dynamic_value,YPfalse);
  T23 = fun_env_dynamic_value_5;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSast_evalYenv_dynamic_value,T21);
  lit_12 = YPPsym((P)"env-dynamic-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_setter_6 = YPfab_met(FUNCODEREF(fun_env_dynamic_value_setter_6),T24,LITREF(lit_12),LITREF(lit_13),sloc(50),YPfalse);
  T26 = VARREF_OR(YevalSast_evalYenv_dynamic_value_setter,YPfalse);
  T27 = fun_env_dynamic_value_setter_6;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSast_evalYenv_dynamic_value_setter,T25);
  lit_14 = YPPsym((P)"<loc-env>");
  T29 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T29);
  VARSET(YevalSast_evalYLloc_envG,T28);
  lit_15 = YPPsym((P)"env-parent");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_7 = YPfab_met(FUNCODEREF(fun_env_parent_7),T30,LITREF(lit_15),LITREF(lit_16),sloc(54),YPfalse);
  T32 = VARREF_OR(YevalSast_evalYenv_parent,YPfalse);
  T33 = fun_env_parent_7;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSast_evalYenv_parent,T31);
  lit_17 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T34,YPfalse,LITREF(lit_17),sloc(54),YPfalse);
  T35 = fun_8;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),YPfalse,VARREF(YLanyG),T35);
  lit_18 = YPPsym((P)"env-function");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_9 = YPfab_met(FUNCODEREF(fun_env_function_9),T36,LITREF(lit_18),LITREF(lit_19),sloc(55),YPfalse);
  T38 = VARREF_OR(YevalSast_evalYenv_function,YPfalse);
  T39 = fun_env_function_9;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSast_evalYenv_function,T37);
  lit_20 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T40,YPfalse,LITREF(lit_20),sloc(55),YPfalse);
  T41 = fun_10;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_function),YPfalse,VARREF(YLanyG),T41);
  lit_21 = YPPsym((P)"env-names");
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_11 = YPfab_met(FUNCODEREF(fun_env_names_11),T42,LITREF(lit_21),LITREF(lit_22),sloc(56),YPfalse);
  T44 = VARREF_OR(YevalSast_evalYenv_names,YPfalse);
  T45 = fun_env_names_11;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSast_evalYenv_names,T43);
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T46,YPfalse,LITREF(lit_23),sloc(56),YPfalse);
  T47 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_names),YPfalse,VARREF(YLlstG),T47);
  lit_24 = YPPsym((P)"env-values");
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_13 = YPfab_met(FUNCODEREF(fun_env_values_13),T48,LITREF(lit_24),LITREF(lit_25),sloc(57),YPfalse);
  T50 = VARREF_OR(YevalSast_evalYenv_values,YPfalse);
  T51 = fun_env_values_13;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSast_evalYenv_values,T49);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_values),YPfalse,VARREF(YLrepG),VARREF(YPprop_unbound_error));
  T52 = XCALL1(1,VARREF(Ynew),VARREF(YevalSast_evalYLloc_envG));
  VARSET(YevalSast_evalYDnul_loc_env,T52);
  lit_26 = YPPsym((P)"env-frame!");
  lit_27 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"function"),YPPsym((P)"names"),YPPsym((P)"args"));
  T53 = YPfab_sig(YPPlist(4,VARREF(YevalSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YevalSast_evalYLloc_envG),Ynil);
  fun_env_frameX_14 = YPfab_met(FUNCODEREF(fun_env_frameX_14),T53,LITREF(lit_26),LITREF(lit_27),sloc(61),YPfalse);
  T55 = VARREF_OR(YevalSast_evalYenv_frameX,YPfalse);
  T56 = fun_env_frameX_14;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSast_evalYenv_frameX,T54);
  lit_28 = YPPsym((P)"env-local-value");
  lit_29 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T57 = YPfab_sig(YPPlist(3,VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_15 = YPfab_met(FUNCODEREF(fun_env_local_value_15),T57,LITREF(lit_28),LITREF(lit_29),sloc(69),YPfalse);
  T59 = VARREF_OR(YevalSast_evalYenv_local_value,YPfalse);
  T60 = fun_env_local_value_15;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSast_evalYenv_local_value,T58);
  lit_30 = YPPsym((P)"env-local-value-setter");
  lit_31 = YPPlist(4,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T61 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_16 = YPfab_met(FUNCODEREF(fun_env_local_value_setter_16),T61,LITREF(lit_30),LITREF(lit_31),sloc(74),YPfalse);
  T63 = VARREF_OR(YevalSast_evalYenv_local_value_setter,YPfalse);
  T64 = fun_env_local_value_setter_16;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSast_evalYenv_local_value_setter,T62);
  lit_32 = YPPsym((P)"env-binding-value");
  lit_33 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"name"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_17 = YPfab_met(FUNCODEREF(fun_env_binding_value_17),T65,LITREF(lit_32),LITREF(lit_33),sloc(80),YPfalse);
  T67 = VARREF_OR(YevalSast_evalYenv_binding_value,YPfalse);
  T68 = fun_env_binding_value_17;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSast_evalYenv_binding_value,T66);
  lit_34 = YPPsym((P)"env-binding-value-setter");
  lit_35 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"name"));
  T69 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_18 = YPfab_met(FUNCODEREF(fun_env_binding_value_setter_18),T69,LITREF(lit_34),LITREF(lit_35),sloc(90),YPfalse);
  T71 = VARREF_OR(YevalSast_evalYenv_binding_value_setter,YPfalse);
  T72 = fun_env_binding_value_setter_18;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSast_evalYenv_binding_value_setter,T70);
  lit_36 = YPPsym((P)"ast-evaluate");
  lit_37 = YPPlist(1,YPPsym((P)"e"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_19 = YPfab_met(FUNCODEREF(fun_ast_evaluate_19),T73,LITREF(lit_36),LITREF(lit_37),sloc(102),YPfalse);
  T75 = VARREF_OR(YevalSastYast_evaluate,YPfalse);
  T76 = fun_ast_evaluate_19;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYast_evaluate,T74);
  lit_38 = YPPsym((P)"ast-eval");
  lit_39 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T78 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T77 = YPfab_gen(T78,LITREF(lit_38),LITREF(lit_39),YPfalse);
  VARSET(YevalSast_evalYast_eval,T77);
  lit_40 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T79 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_20 = YPfab_met(FUNCODEREF(fun_ast_eval_20),T79,LITREF(lit_38),LITREF(lit_40),sloc(107),YPfalse);
  T81 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T82 = fun_ast_eval_20;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YevalSast_evalYast_eval,T80);
  lit_41 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T83 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_21 = YPfab_met(FUNCODEREF(fun_ast_eval_21),T83,LITREF(lit_38),LITREF(lit_41),sloc(110),YPfalse);
  T85 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T86 = fun_ast_eval_21;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSast_evalYast_eval,T84);
  lit_42 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"ee"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLcompile_timeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_22 = YPfab_met(FUNCODEREF(fun_ast_eval_22),T87,LITREF(lit_38),LITREF(lit_42),sloc(113),YPfalse);
  T89 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T90 = fun_ast_eval_22;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSast_evalYast_eval,T88);
  lit_43 = YPPsym((P)"ast-eval-specs");
  lit_44 = YPPlist(3,YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"env"));
  T91 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_23 = YPfab_met(FUNCODEREF(fun_ast_eval_specs_23),T91,LITREF(lit_43),LITREF(lit_44),sloc(116),YPfalse);
  T93 = VARREF_OR(YevalSast_evalYast_eval_specs,YPfalse);
  T94 = fun_ast_eval_specs_23;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSast_evalYast_eval_specs,T92);
  lit_45 = YPPsym((P)"arrange-arguments");
  lit_46 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"args"));
  T95 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YevalSast_evalYarrange_arguments = YPfab_met(FUNCODEREF(YevalSast_evalYarrange_arguments),T95,LITREF(lit_45),LITREF(lit_46),sloc(131),YPfalse);
  T96 = YevalSast_evalYarrange_arguments;
  VARSET(YevalSast_evalYarrange_arguments,T96);
  lit_47 = YPPlist(1,YPPsym((P)"exp"));
  lit_48 = YPPlist(1,YPPsym((P)"return"));
  lit_49 = YPPsym((P)"x-1528");
  lit_50 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_51 = YPPsym((P)"ifun");
  lit_52 = YPsb((P)"Match Pattern Failure");
  lit_53 = YPPsym((P)"fun");
  lit_54 = YPPsym((P)"arg-vector");
  lit_55 = YPPsym((P)"...");
  lit_56 = Ynil;
  lit_57 = YPPsym((P)"def");
  lit_58 = YPPsym((P)"args");
  lit_59 = YPPsym((P)"f");
  lit_60 = YPPsym((P)"nary?");
  lit_61 = YPPsym((P)"arity");
  lit_62 = YPPsym((P)"as");
  lit_63 = YPPsym((P)"<lst>");
  lit_64 = YPPsym((P)"nms");
  lit_65 = YPPsym((P)"%next-methods");
  lit_66 = YPPsym((P)"frame");
  lit_67 = YPPsym((P)"cat2");
  lit_68 = YPPsym((P)"lst");
  lit_69 = YPPsym((P)"quote");
  T99 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1528_25 = YPfab_met(FUNCODEREF(fun_x_1528_25),T99,LITREF(lit_49),LITREF(lit_50),YPfalse,YPfalse);
  T98 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T98,YPfalse,LITREF(lit_48),YPfalse,YPfalse);
  T97 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T97,YPfalse,LITREF(lit_47),YPfalse,YPfalse);
  T100 = fun_27;
  YPmacro(YPPsym((P)"eval/ast-eval"),YPPsym((P)"ifun"),T100);
  lit_70 = YPPsym((P)"as-fun-name");
  lit_71 = YPPlist(1,YPPsym((P)"x"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_28 = YPfab_met(FUNCODEREF(fun_as_fun_name_28),T101,LITREF(lit_70),LITREF(lit_71),sloc(151),YPfalse);
  T103 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T104 = fun_as_fun_name_28;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSast_evalYas_fun_name,T102);
  lit_72 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_29 = YPfab_met(FUNCODEREF(fun_as_fun_name_29),T105,LITREF(lit_70),LITREF(lit_72),sloc(153),YPfalse);
  T107 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T108 = fun_as_fun_name_29;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSast_evalYas_fun_name,T106);
  lit_73 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_30 = YPfab_met(FUNCODEREF(fun_as_fun_name_30),T109,LITREF(lit_70),LITREF(lit_73),sloc(155),YPfalse);
  T111 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T112 = fun_as_fun_name_30;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSast_evalYas_fun_name,T110);
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T113 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_31 = YPfab_met(FUNCODEREF(fun_as_fun_name_31),T113,LITREF(lit_70),LITREF(lit_74),sloc(157),YPfalse);
  T115 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T116 = fun_as_fun_name_31;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSast_evalYas_fun_name,T114);
  lit_75 = YPPlist(1,YPPsym((P)"x"));
  T117 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_32 = YPfab_met(FUNCODEREF(fun_as_fun_name_32),T117,LITREF(lit_70),LITREF(lit_75),sloc(159),YPfalse);
  T119 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T120 = fun_as_fun_name_32;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSast_evalYas_fun_name,T118);
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T121 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_33 = YPfab_met(FUNCODEREF(fun_as_fun_name_33),T121,LITREF(lit_70),LITREF(lit_76),sloc(161),YPfalse);
  T123 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T124 = fun_as_fun_name_33;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSast_evalYas_fun_name,T122);
  lit_77 = YPPsym((P)"export-goo-method");
  lit_78 = YPPlist(7,YPPsym((P)"f"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"value"),YPPsym((P)"body"),YPPsym((P)"env"));
  lit_79 = YPPlist(1,YPPsym((P)"arg-vector"));
  T126 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T126,YPfalse,LITREF(lit_79),sloc(166),YPfalse);
  T125 = YPfab_sig(YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_35 = YPfab_met(FUNCODEREF(fun_export_goo_method_35),T125,LITREF(lit_77),LITREF(lit_78),sloc(164),YPfalse);
  T128 = VARREF_OR(YevalSast_evalYexport_goo_method,YPfalse);
  T129 = fun_export_goo_method_35;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSast_evalYexport_goo_method,T127);
  lit_80 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_81 = YPPlist(1,YPPsym((P)"env"));
  T131 = YPfab_sig(YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T131,YPfalse,LITREF(lit_81),sloc(182),YPfalse);
  T130 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_37 = YPfab_met(FUNCODEREF(fun_ast_eval_37),T130,LITREF(lit_38),LITREF(lit_80),sloc(180),YPfalse);
  T133 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T134 = fun_ast_eval_37;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YevalSast_evalYast_eval,T132);
  lit_82 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T137 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T136 = fun_ast_eval_38 = YPfab_met(FUNCODEREF(fun_ast_eval_38),T137,LITREF(lit_38),LITREF(lit_82),sloc(192),YPfalse);
  T140 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T141 = fun_ast_eval_38;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  T138 = VARSET(YevalSast_evalYast_eval,T139);
  T135 = T138;
  return T135;
}

P YevalSast_evalY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131;
DEFCREGS();
  lit_83 = YPPsym((P)"env-local-reference-value");
  lit_84 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"ref"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_39 = YPfab_met(FUNCODEREF(fun_env_local_reference_value_39),T0,LITREF(lit_83),LITREF(lit_84),sloc(199),YPfalse);
  T2 = VARREF_OR(YevalSast_evalYenv_local_reference_value,YPfalse);
  T3 = fun_env_local_reference_value_39;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSast_evalYenv_local_reference_value,T1);
  lit_85 = YPPsym((P)"env-local-reference-value-setter");
  lit_86 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"env"),YPPsym((P)"ref"));
  T4 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_40 = YPfab_met(FUNCODEREF(fun_env_local_reference_value_setter_40),T4,LITREF(lit_85),LITREF(lit_86),sloc(203),YPfalse);
  T6 = VARREF_OR(YevalSast_evalYenv_local_reference_value_setter,YPfalse);
  T7 = fun_env_local_reference_value_setter_40;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSast_evalYenv_local_reference_value_setter,T5);
  lit_87 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_41 = YPfab_met(FUNCODEREF(fun_ast_eval_41),T8,LITREF(lit_38),LITREF(lit_87),sloc(208),YPfalse);
  T10 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T11 = fun_ast_eval_41;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSast_evalYast_eval,T9);
  lit_88 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_42 = YPfab_met(FUNCODEREF(fun_ast_eval_42),T12,LITREF(lit_38),LITREF(lit_88),sloc(210),YPfalse);
  T14 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T15 = fun_ast_eval_42;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSast_evalYast_eval,T13);
  lit_89 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPfab_met(FUNCODEREF(fun_ast_eval_43),T16,LITREF(lit_38),LITREF(lit_89),sloc(213),YPfalse);
  T18 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T19 = fun_ast_eval_43;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSast_evalYast_eval,T17);
  lit_90 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_44 = YPfab_met(FUNCODEREF(fun_ast_eval_44),T20,LITREF(lit_38),LITREF(lit_90),sloc(216),YPfalse);
  T22 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T23 = fun_ast_eval_44;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSast_evalYast_eval,T21);
  lit_91 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_45 = YPfab_met(FUNCODEREF(fun_ast_eval_45),T24,LITREF(lit_38),LITREF(lit_91),sloc(219),YPfalse);
  T26 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T27 = fun_ast_eval_45;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSast_evalYast_eval,T25);
  lit_92 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_46 = YPfab_met(FUNCODEREF(fun_ast_eval_46),T28,LITREF(lit_38),LITREF(lit_92),sloc(222),YPfalse);
  T30 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T31 = fun_ast_eval_46;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSast_evalYast_eval,T29);
  lit_93 = YPPsym((P)"env-global-binding-value-or");
  lit_94 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"default"),YPPsym((P)"env"));
  T32 = YPfab_sig(YPPlist(3,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_or_47 = YPfab_met(FUNCODEREF(fun_env_global_binding_value_or_47),T32,LITREF(lit_93),LITREF(lit_94),sloc(225),YPfalse);
  T34 = VARREF_OR(YevalSast_evalYenv_global_binding_value_or,YPfalse);
  T35 = fun_env_global_binding_value_or_47;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSast_evalYenv_global_binding_value_or,T33);
  lit_95 = YPPsym((P)"ast-eval-bound?");
  lit_96 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  lit_97 = YPPsym((P)"global");
  T36 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_48 = YPfab_met(FUNCODEREF(fun_ast_eval_boundQ_48),T36,LITREF(lit_95),LITREF(lit_96),sloc(230),YPfalse);
  T38 = VARREF_OR(YevalSast_evalYast_eval_boundQ,YPfalse);
  T39 = fun_ast_eval_boundQ_48;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSast_evalYast_eval_boundQ,T37);
  lit_98 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  T40 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_49 = YPfab_met(FUNCODEREF(fun_ast_eval_boundQ_49),T40,LITREF(lit_95),LITREF(lit_98),sloc(235),YPfalse);
  T42 = VARREF_OR(YevalSast_evalYast_eval_boundQ,YPfalse);
  T43 = fun_ast_eval_boundQ_49;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSast_evalYast_eval_boundQ,T41);
  lit_99 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPfab_met(FUNCODEREF(fun_ast_eval_50),T44,LITREF(lit_38),LITREF(lit_99),sloc(238),YPfalse);
  T46 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T47 = fun_ast_eval_50;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSast_evalYast_eval,T45);
  lit_100 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_51 = YPfab_met(FUNCODEREF(fun_ast_eval_51),T48,LITREF(lit_38),LITREF(lit_100),sloc(242),YPfalse);
  T50 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T51 = fun_ast_eval_51;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSast_evalYast_eval,T49);
  lit_101 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPfab_met(FUNCODEREF(fun_ast_eval_52),T52,LITREF(lit_38),LITREF(lit_101),sloc(245),YPfalse);
  T54 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T55 = fun_ast_eval_52;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSast_evalYast_eval,T53);
  lit_102 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T56 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPfab_met(FUNCODEREF(fun_ast_eval_53),T56,LITREF(lit_38),LITREF(lit_102),sloc(249),YPfalse);
  T58 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T59 = fun_ast_eval_53;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSast_evalYast_eval,T57);
  lit_103 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T60 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPfab_met(FUNCODEREF(fun_ast_eval_54),T60,LITREF(lit_38),LITREF(lit_103),sloc(253),YPfalse);
  T62 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T63 = fun_ast_eval_54;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSast_evalYast_eval,T61);
  lit_104 = YPPsym((P)"env-define-binding!");
  lit_105 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"v"));
  lit_106 = YPPsym((P)"runtime");
  lit_107 = YPPsym((P)"dynamic");
  lit_108 = YPsb((P)"Defining invalid binding kind %=");
  T64 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_55 = YPfab_met(FUNCODEREF(fun_env_define_bindingX_55),T64,LITREF(lit_104),LITREF(lit_105),sloc(257),YPfalse);
  T66 = VARREF_OR(YevalSast_evalYenv_define_bindingX,YPfalse);
  T67 = fun_env_define_bindingX_55;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSast_evalYenv_define_bindingX,T65);
  lit_109 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_56 = YPfab_met(FUNCODEREF(fun_ast_eval_56),T68,LITREF(lit_38),LITREF(lit_109),sloc(266),YPfalse);
  T70 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T71 = fun_ast_eval_56;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSast_evalYast_eval,T69);
  lit_110 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPfab_met(FUNCODEREF(fun_ast_eval_57),T72,LITREF(lit_38),LITREF(lit_110),sloc(286),YPfalse);
  T74 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T75 = fun_ast_eval_57;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSast_evalYast_eval,T73);
  lit_111 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_112 = YPPlist(1,YPPsym((P)"return"));
  lit_113 = YPPlist(1,YPPsym((P)"continue"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPfab_met(FUNCODEREF(fun_58),T78,YPfalse,LITREF(lit_113),sloc(294),YPfalse);
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPfab_met(FUNCODEREF(fun_59),T77,YPfalse,LITREF(lit_112),sloc(292),YPfalse);
  T76 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_60 = YPfab_met(FUNCODEREF(fun_ast_eval_60),T76,LITREF(lit_38),LITREF(lit_111),sloc(291),YPfalse);
  T80 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T81 = fun_ast_eval_60;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSast_evalYast_eval,T79);
  lit_114 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T82 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_61 = YPfab_met(FUNCODEREF(fun_ast_eval_61),T82,LITREF(lit_38),LITREF(lit_114),sloc(299),YPfalse);
  T84 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T85 = fun_ast_eval_61;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSast_evalYast_eval,T83);
  lit_115 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T86 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLargumentsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_62 = YPfab_met(FUNCODEREF(fun_ast_eval_62),T86,LITREF(lit_38),LITREF(lit_115),sloc(307),YPfalse);
  T88 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T89 = fun_ast_eval_62;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSast_evalYast_eval,T87);
  lit_116 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T90 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPfab_met(FUNCODEREF(fun_ast_eval_63),T90,LITREF(lit_38),LITREF(lit_116),sloc(313),YPfalse);
  T92 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T93 = fun_ast_eval_63;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSast_evalYast_eval,T91);
  lit_117 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloop_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPfab_met(FUNCODEREF(fun_ast_eval_64),T94,LITREF(lit_38),LITREF(lit_117),sloc(318),YPfalse);
  T96 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T97 = fun_ast_eval_64;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSast_evalYast_eval,T95);
  lit_118 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_119 = YPPsym((P)"%fun-reg");
  T98 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPfab_met(FUNCODEREF(fun_ast_eval_65),T98,LITREF(lit_38),LITREF(lit_118),sloc(325),YPfalse);
  T100 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T101 = fun_ast_eval_65;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSast_evalYast_eval,T99);
  lit_120 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_66 = YPfab_met(FUNCODEREF(fun_ast_eval_66),T102,LITREF(lit_38),LITREF(lit_120),sloc(337),YPfalse);
  T104 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T105 = fun_ast_eval_66;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSast_evalYast_eval,T103);
  lit_121 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_122 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_67 = YPfab_met(FUNCODEREF(fun_67),T107,YPfalse,LITREF(lit_122),sloc(347),YPfalse);
  T106 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPfab_met(FUNCODEREF(fun_ast_eval_68),T106,LITREF(lit_38),LITREF(lit_121),sloc(342),YPfalse);
  T109 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T110 = fun_ast_eval_68;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSast_evalYast_eval,T108);
  lit_123 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_124 = YPPlist(1,YPPsym((P)"return"));
  lit_125 = YPPlist(1,YPPsym((P)"env"));
  lit_126 = YPPsym((P)"x");
  T113 = YPfab_sig(YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T113,YPfalse,LITREF(lit_125),sloc(360),YPfalse);
  T112 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPfab_met(FUNCODEREF(fun_70),T112,YPfalse,LITREF(lit_124),sloc(359),YPfalse);
  T111 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_71 = YPfab_met(FUNCODEREF(fun_ast_eval_71),T111,LITREF(lit_38),LITREF(lit_123),sloc(358),YPfalse);
  T115 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T116 = fun_ast_eval_71;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSast_evalYast_eval,T114);
  lit_127 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_128 = Ynil;
  T119 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPfab_met(FUNCODEREF(fun_72),T119,YPfalse,LITREF(lit_128),sloc(365),YPfalse);
  T118 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T118,YPfalse,LITREF(lit_128),sloc(366),YPfalse);
  T117 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPfab_met(FUNCODEREF(fun_ast_eval_74),T117,LITREF(lit_38),LITREF(lit_127),sloc(364),YPfalse);
  T121 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T122 = fun_ast_eval_74;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSast_evalYast_eval,T120);
  lit_129 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T123 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPfab_met(FUNCODEREF(fun_ast_eval_75),T123,LITREF(lit_38),LITREF(lit_129),sloc(368),YPfalse);
  T125 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T126 = fun_ast_eval_75;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSast_evalYast_eval,T124);
  lit_130 = YPPsym((P)"init-environment-for-eval");
  lit_131 = YPPlist(1,YPPsym((P)"env"));
  lit_132 = YPPsym((P)"predefined");
  T127 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_environment_for_eval = YPfab_met(FUNCODEREF(YevalSastYinit_environment_for_eval),T127,LITREF(lit_130),LITREF(lit_131),sloc(383),YPfalse);
  T128 = YevalSastYinit_environment_for_eval;
  VARSET(YevalSastYinit_environment_for_eval,T128);
  lit_133 = YPPsym((P)"binding-value-or");
  lit_134 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"def"));
  T129 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSast_evalYbinding_value_or = YPfab_met(FUNCODEREF(YevalSast_evalYbinding_value_or),T129,LITREF(lit_133),LITREF(lit_134),sloc(445),YPfalse);
  T130 = YevalSast_evalYbinding_value_or;
  VARSET(YevalSast_evalYbinding_value_or,T130);
  T131 = YPfalse;
  return T131;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSmacros},
  {&module_info_gooSloc},
  {&module_info_goo},
  {&module_info_gooScolsSrep},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"c-inline-expr?", &module_info_evalSast, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"c-inline-strs", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"c-inline-refs", &module_info_evalSast, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<c-inline>", &module_info_evalSast, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"as-c", &module_info_gooSloc, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"as-goo", &module_info_gooSloc, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"module-c-forms", &module_info_evalSmodule, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-dynamic-value-setter", CVAR, &YevalSast_evalYenv_dynamic_value_setter},
  {"env-local-value", CVAR, &YevalSast_evalYenv_local_value},
  {"ast-eval-bound?", CVAR, &YevalSast_evalYast_eval_boundQ},
  {"env-local-reference-value-setter", CVAR, &YevalSast_evalYenv_local_reference_value_setter},
  {"export-goo-method", CVAR, &YevalSast_evalYexport_goo_method},
  {"ast-eval", CVAR, &YevalSast_evalYast_eval},
  {"---main-0---", PVAR, NULL},
  {"%binding-value-setter", PVAR, NULL},
  {"ast-eval-specs", CVAR, &YevalSast_evalYast_eval_specs},
  {"env-binding-value", CVAR, &YevalSast_evalYenv_binding_value},
  {"env-parent", CVAR, &YevalSast_evalYenv_parent},
  {"%define-binding", PVAR, NULL},
  {"%binding-value-or-of", PVAR, NULL},
  {"ifun", PVAR, NULL},
  {"env-dynamic-value", CVAR, &YevalSast_evalYenv_dynamic_value},
  {"env-global-binding-value-setter", CVAR, &YevalSast_evalYenv_global_binding_value_setter},
  {"env-values", CVAR, &YevalSast_evalYenv_values},
  {"%dlvar-binding", PVAR, NULL},
  {"env-global-binding-bound?", CVAR, &YevalSast_evalYenv_global_binding_boundQ},
  {"%binding-value", PVAR, NULL},
  {"$nul-loc-env", CVAR, &YevalSast_evalYDnul_loc_env},
  {"env-local-value-setter", CVAR, &YevalSast_evalYenv_local_value_setter},
  {"env-runtime-value-setter", CVAR, &YevalSast_evalYenv_runtime_value_setter},
  {"env-global-binding-value", CVAR, &YevalSast_evalYenv_global_binding_value},
  {"env-frame!", CVAR, &YevalSast_evalYenv_frameX},
  {"env-define-binding!", CVAR, &YevalSast_evalYenv_define_bindingX},
  {"env-function", CVAR, &YevalSast_evalYenv_function},
  {"%binding-value-of-setter", PVAR, NULL},
  {"arrange-arguments", CVAR, &YevalSast_evalYarrange_arguments},
  {"env-local-reference-value", CVAR, &YevalSast_evalYenv_local_reference_value},
  {"as-fun-name", CVAR, &YevalSast_evalYas_fun_name},
  {"env-binding-value-setter", CVAR, &YevalSast_evalYenv_binding_value_setter},
  {"<loc-env>", CVAR, &YevalSast_evalYLloc_envG},
  {"env-names", CVAR, &YevalSast_evalYenv_names},
  {"%dlvar-nam", PVAR, NULL},
  {"env-global-binding-value-or", CVAR, &YevalSast_evalYenv_global_binding_value_or},
  {"%ensure-binding", PVAR, NULL},
  {"%lookup-binding", PVAR, NULL},
  {"%dlvar-setter", PVAR, NULL},
  {"%dlvar", PVAR, NULL},
  {"%binding-value-of", PVAR, NULL},
  {"%dlvar-mod", PVAR, NULL},
  {"env-runtime-value", CVAR, &YevalSast_evalYenv_runtime_value},
  {"binding-value-or", CVAR, &YevalSast_evalYbinding_value_or},
  {"---main-1---", PVAR, NULL},
  {"%binding-value-or", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value-setter", NULL},
  {"init-environment-for-eval", NULL},
  {"%binding-value-or-of", NULL},
  {"ast-evaluate", NULL},
  {"%binding-value", NULL},
  {"%binding-value-of-setter", NULL},
  {"%binding-value-of", NULL},
  {"binding-value-or", NULL},
  {"%binding-value-or", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast_eval;
MODULE_INFO module_info_evalSast_eval = {
  "eval/ast-eval",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSloc (void);
extern void load_module_goo (void);
extern void load_module_gooScolsSrep (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSast_eval (void);

void load_module_evalSast_eval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSmacros();
  load_module_gooSloc();
  load_module_goo();
  load_module_gooScolsSrep();
  load_module_evalSast();

  (P)YevalSast_evalY___main_0___();
  (P)YevalSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
