/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-eval */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSast_evalYenv_names_setter,"eval/ast-eval","env-names-setter");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
DEF(YevalSast_evalYenv_dynamic_value,"eval/ast-eval","env-dynamic-value");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
DEF(YevalSast_evalYenv_function_setter,"eval/ast-eval","env-function-setter");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
DEF(YevalSast_evalYenv_parent_setter,"eval/ast-eval","env-parent-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSast_evalYenv_dynamic_value_setter,"eval/ast-eval","env-dynamic-value-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSast_evalYenv_values_setter,"eval/ast-eval","env-values-setter");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYtan,"goo/math","tan");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_97);
DEFLIT(lit_123);
DEFLIT(lit_39);
DEFLIT(lit_99);
DEFLIT(lit_80);
DEFLIT(lit_121);
DEFLIT(lit_135);
DEFLIT(lit_118);
DEFLIT(lit_139);
DEFLIT(lit_34);
DEFLIT(lit_85);
DEFLIT(lit_96);
DEFLIT(lit_65);
DEFLIT(lit_64);
DEFLIT(lit_28);
DEFLIT(lit_111);
DEFLIT(lit_104);
DEFLIT(lit_110);
DEFLIT(lit_94);
DEFLIT(lit_119);
DEFLIT(lit_124);
DEFLIT(lit_55);
DEFLIT(lit_40);
DEFLIT(lit_21);
DEFLIT(lit_120);
DEFLIT(lit_71);
DEFLIT(lit_75);
DEFLIT(lit_113);
DEFLIT(lit_51);
DEFLIT(lit_11);
DEFLIT(lit_100);
DEFLIT(lit_14);
DEFLIT(lit_31);
DEFLIT(lit_2);
DEFLIT(lit_20);
DEFLIT(lit_107);
DEFLIT(lit_49);
DEFLIT(lit_127);
DEFLIT(lit_89);
DEFLIT(lit_35);
DEFLIT(lit_134);
DEFLIT(lit_24);
DEFLIT(lit_106);
DEFLIT(lit_98);
DEFLIT(lit_103);
DEFLIT(lit_12);
DEFLIT(lit_73);
DEFLIT(lit_27);
DEFLIT(lit_125);
DEFLIT(lit_44);
DEFLIT(lit_115);
DEFLIT(lit_81);
DEFLIT(lit_56);
DEFLIT(lit_114);
DEFLIT(lit_109);
DEFLIT(lit_137);
DEFLIT(lit_77);
DEFLIT(lit_93);
DEFLIT(lit_61);
DEFLIT(lit_84);
DEFLIT(lit_9);
DEFLIT(lit_32);
DEFLIT(lit_3);
DEFLIT(lit_92);
DEFLIT(lit_19);
DEFLIT(lit_62);
DEFLIT(lit_79);
DEFLIT(lit_78);
DEFLIT(lit_67);
DEFLIT(lit_26);
DEFLIT(lit_88);
DEFLIT(lit_50);
DEFLIT(lit_131);
DEFLIT(lit_46);
DEFLIT(lit_140);
DEFLIT(lit_33);
DEFLIT(lit_74);
DEFLIT(lit_108);
DEFLIT(lit_87);
DEFLIT(lit_117);
DEFLIT(lit_8);
DEFLIT(lit_1);
DEFLIT(lit_86);
DEFLIT(lit_132);
DEFLIT(lit_10);
DEFLIT(lit_52);
DEFLIT(lit_136);
DEFLIT(lit_45);
DEFLIT(lit_17);
DEFLIT(lit_47);
DEFLIT(lit_38);
DEFLIT(lit_7);
DEFLIT(lit_69);
DEFLIT(lit_128);
DEFLIT(lit_29);
DEFLIT(lit_138);
DEFLIT(lit_57);
DEFLIT(lit_90);
DEFLIT(lit_60);
DEFLIT(lit_66);
DEFLIT(lit_25);
DEFLIT(lit_13);
DEFLIT(lit_58);
DEFLIT(lit_5);
DEFLIT(lit_126);
DEFLIT(lit_43);
DEFLIT(lit_76);
DEFLIT(lit_116);
DEFLIT(lit_6);
DEFLIT(lit_72);
DEFLIT(lit_59);
DEFLIT(lit_23);
DEFLIT(lit_70);
DEFLIT(lit_37);
DEFLIT(lit_41);
DEFLIT(lit_68);
DEFLIT(lit_48);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_83);
DEFLIT(lit_36);
DEFLIT(lit_0);
DEFLIT(lit_101);
DEFLIT(lit_91);
DEFLIT(lit_18);
DEFLIT(lit_130);
DEFLIT(lit_105);
DEFLIT(lit_133);
DEFLIT(lit_112);
DEFLIT(lit_30);
DEFLIT(lit_54);
DEFLIT(lit_102);
DEFLIT(lit_122);
DEFLIT(lit_95);
DEFLIT(lit_53);
DEFLIT(lit_82);
DEFLIT(lit_22);
DEFLIT(lit_63);
DEFLIT(lit_129);
DEFLIT(lit_42);
DEFLIT(lit_4);

/* FUNCTIONS: */

LOCFOR(fun_env_global_binding_value_0);
LOCFOR(fun_env_global_binding_value_setter_1);
LOCFOR(fun_env_global_binding_boundQ_2);
LOCFOR(fun_env_runtime_value_3);
LOCFOR(fun_env_runtime_value_setter_4);
LOCFOR(fun_env_dynamic_value_5);
LOCFOR(fun_env_dynamic_value_setter_6);
LOCFOR(fun_env_parent_7);
LOCFOR(fun_env_parent_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_env_function_10);
LOCFOR(fun_env_function_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_env_names_13);
LOCFOR(fun_env_names_setter_14);
LOCFOR(fun_15);
LOCFOR(fun_env_values_16);
LOCFOR(fun_env_values_setter_17);
LOCFOR(fun_env_frameX_18);
LOCFOR(fun_env_local_value_19);
LOCFOR(fun_env_local_value_setter_20);
LOCFOR(fun_loop_21);
LOCFOR(fun_env_binding_value_22);
LOCFOR(fun_loop_23);
LOCFOR(fun_env_binding_value_setter_24);
LOCFOR(fun_ast_evaluate_25);
LOCFOR(fun_ast_eval_26);
LOCFOR(fun_ast_eval_27);
LOCFOR(fun_ast_eval_28);
LOCFOR(fun_loop_29);
LOCFOR(fun_ast_eval_specs_30);
FUNFOR(YevalSast_evalYarrange_arguments);
LOCFOR(fun_x_1472_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
LOCFOR(fun_as_fun_name_39);
LOCFOR(fun_as_fun_name_40);
LOCFOR(fun_41);
LOCFOR(fun_export_goo_method_42);
LOCFOR(fun_43);
LOCFOR(fun_ast_eval_44);
LOCFOR(fun_ast_eval_45);
LOCFOR(fun_env_local_reference_value_46);
LOCFOR(fun_env_local_reference_value_setter_47);
LOCFOR(fun_ast_eval_48);
LOCFOR(fun_ast_eval_49);
LOCFOR(fun_ast_eval_50);
LOCFOR(fun_ast_eval_51);
LOCFOR(fun_ast_eval_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_boundQ_54);
LOCFOR(fun_ast_eval_boundQ_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_ast_eval_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_env_define_bindingX_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_eval_66);
LOCFOR(fun_ast_eval_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_ast_eval_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_71);
LOCFOR(fun_ast_eval_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_ast_eval_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_ast_eval_78);
LOCFOR(fun_ast_eval_79);
FUNFOR(YevalSastYinit_environment_for_eval);
extern P YevalSast_evalYPdefine_binding (P,P);
extern P YevalSast_evalYPlookup_binding (P,P);
extern P YevalSast_evalYPensure_binding (P,P);
extern P YevalSast_evalYPdlvar_binding (P);
extern P YevalSast_evalYPbinding_bound_ofQ (P);
extern P YevalSast_evalYPbinding_boundQ (P);
extern P YevalSast_evalYPbinding_value_of (P);
extern P YevalSast_evalYPbinding_value (P);
extern P YevalSast_evalYPbinding_value_of_setter (P,P);
extern P YevalSast_evalYPbinding_value_setter (P,P);
extern P YevalSast_evalY___main_0___ ();
extern P YevalSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF2812;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2812 = T1;
  if (boxF2812 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYglobal_box_value),boxF2812);
    T2 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),T6);
    T4 = CALL1(1,VARREF(YgooSconditionsYsig),T5);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF2813;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2813 = T1;
  boxF2813 = BOXFAB(boxF2813);
  T4 = BOXVAL(boxF2813);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(YevalSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF2813) = T6;
  } else {
  }
  T9 = BOXVAL(boxF2813);
  T8 = CALL2(1,VARREF(YevalSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF2814;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2814 = T1;
  if (boxF2814 != YPfalse) {
    T2 = YPtrue;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_runtime_value_3) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_runtime_value_setter_4) {
  P v_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYloc_val_setter),v_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_dynamic_value_5) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
  T0 = (P)YPdyn_var_val(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_dynamic_value_setter_6) {
  P v_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
  (P)YPdyn_var_val_setter(v_,T0);
UNLINK_STACK();
  QRET(v_);
}

FUNCODEDEF(fun_env_parent_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_setter_8) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_function_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_function_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_names_13) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_names_setter_14) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_env_values_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_values_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_frameX_18) {
  P env_,function_,names_,args_;
  P valuesF2815;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),args_);
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T3,VARREF(Ynul));
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_intoX),T2,args_);
  valuesF2815 = T1;
  T4 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF2815,VARREF(YevalSast_evalYenv_names),names_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_19) {
  P env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
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

FUNCODEDEF(fun_env_local_value_setter_20) {
  P v_,env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
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

FUNCODEDEF(fun_loop_21) {
  P names_,i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),FREEREF(0));
    T2 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),T3,FREEREF(1));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),FREEREF(0));
      T7 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T10;
      a2 = T11;
      names_ = a1;
      i_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_22) {
  P env_,name_;
  P loopF2816;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(YevalSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = FUNSHELL(1,fun_loop_21,3);
    loopF2816 = T3;
    FUNINIT(loopF2816, 3,env_,name_,loopF2816);
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    T4 = CALL2(0,loopF2816,T5,YPint((P)0));
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_23) {
  P names_,i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),FREEREF(1));
    T2 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),FREEREF(0),T3,FREEREF(2));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(2),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),FREEREF(1));
      T7 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(0),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T10;
      a2 = T11;
      names_ = a1;
      i_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_setter_24) {
  P v_,env_,name_;
  P loopF2817;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_23,4);
  loopF2817 = T1;
  FUNINIT(loopF2817, 4,v_,env_,name_,loopF2817);
  T3 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  T2 = CALL2(0,loopF2817,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_25) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),e_,VARREF(YevalSast_evalYDnul_loc_env));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_27) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_28) {
  P e_,ee_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_29) {
  P res_,specs_,i_;
  P typeF2819;
  P specF2818;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(specs_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),specs_);
    specF2818 = T4;
    if (specF2818 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF2818,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF2819 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF2819,res_);
    T10 = CALL1(1,VARREF(Ytail),specs_);
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T9;
    a2 = T10;
    a3 = T11;
    res_ = a1;
    specs_ = a2;
    i_ = a3;
    goto loop;
    T5 = T8;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_specs_30) {
  P specs_,naryQ_,env_;
  P loopF2821;
  P nreqF2820;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T1 = T4;
  }
  nreqF2820 = T1;
  T6 = FUNSHELL(1,fun_loop_29,3);
  loopF2821 = T6;
  FUNINIT(loopF2821, 3,nreqF2820,env_,loopF2821);
  T7 = CALL3(0,loopF2821,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF2822;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF2822 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYL),countF2822,arity_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ynarity_error),f_,args_);
      T3 = T5;
    } else {
      T7 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T9 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF2822);
      T8 = CALL1(1,VARREF(Ylst),T9);
      T6 = CALL2(1,VARREF(YgooScolsSseqYcat2),T7,T8);
      T3 = T6;
    }
    T2 = T3;
  } else {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),countF2822,arity_);
    if (T11 != YPfalse) {
      T12 = CALL2(1,VARREF(Yarity_error),f_,args_);
      T10 = T12;
    } else {
      T10 = args_;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1472_32) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_63),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P return_;
  P x_1471F2837;
  P x_1471F2836;
  P x_1471F2835;
  P x_1471F2834;
  P x_1471F2833;
  P x_1471F2832;
  P x_1471F2831;
  P bodyF2830;
  P namesF2829;
  P arityF2828;
  P naryQF2827;
  P fF2826;
  P envF2825;
  P x_1471F2824;
  P x_1472F2823;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1472_32,2);
  x_1472F2823 = T1;
  FUNINIT(x_1472F2823, 2,FREEREF(0),return_);
  x_1471F2824 = FREEREF(0);
  envF2825 = YPfalse;
  envF2825 = BOXFAB(envF2825);
  fF2826 = YPfalse;
  fF2826 = BOXFAB(fF2826);
  naryQF2827 = YPfalse;
  naryQF2827 = BOXFAB(naryQF2827);
  arityF2828 = YPfalse;
  arityF2828 = BOXFAB(arityF2828);
  namesF2829 = YPfalse;
  namesF2829 = BOXFAB(namesF2829);
  bodyF2830 = YPfalse;
  bodyF2830 = BOXFAB(bodyF2830);
  T15 = CALL2(1,VARREF(YisaQ),x_1471F2824,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1471F2824,LITREF(lit_63),x_1472F2823);
    x_1471F2831 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1471F2831,x_1472F2823);
    BOXVAL(envF2825) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1471F2831);
    x_1471F2832 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1471F2832,x_1472F2823);
    BOXVAL(fF2826) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1471F2832);
    x_1471F2833 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1471F2833,x_1472F2823);
    BOXVAL(naryQF2827) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1471F2833);
    x_1471F2834 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1471F2834,x_1472F2823);
    BOXVAL(arityF2828) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1471F2834);
    x_1471F2835 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1471F2835,x_1472F2823);
    BOXVAL(namesF2829) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1471F2835);
    x_1471F2836 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1471F2836,x_1472F2823);
    BOXVAL(bodyF2830) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1471F2836);
    x_1471F2837 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1471F2837,x_1472F2823);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_1472F2823,LITREF(lit_64),x_1471F2824);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T54,T55,T56,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T66 = CALL2(1,VARREF(YgooSmacrosYcat),T67,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALL4(1,VARREF(YgooSmacrosYcat),T63,T64,T65,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T76 = BOXVAL(envF2825);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF2826);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T83 = BOXVAL(namesF2829);
  T82 = CALL1(1,VARREF(Ylst),T83);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T84,Ynil);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T96 = CALL3(1,VARREF(YgooSmacrosYcat),T97,T98,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T92 = CALL4(1,VARREF(YgooSmacrosYcat),T93,T94,T95,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T73 = CALLN(1,VARREF(YgooSmacrosYcat),6,T74,T75,T77,T79,T91,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T102 = BOXVAL(bodyF2830);
  T101 = CALL1(1,VARREF(Ylst),T102);
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T100 = CALL3(1,VARREF(YgooSmacrosYcat),T101,T103,Ynil);
  T99 = CALL1(1,VARREF(Ylst),T100);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),7,T39,T40,T46,T61,T68,T99,Ynil);
  T13 = T38;
  T11 = T13;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_33,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Yfun_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_38) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_39) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_40) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_41) {
  P arg_vector_;
  P frameF2840;
  P nmsF2839;
  P argsF2838;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF2838 = T1;
  T4 = (P)YPnext_methods();
  nmsF2839 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF2839);
  T9 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF2838,T10);
  T6 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T7,T9);
  frameF2840 = T6;
  T11 = CALL1(1,FREEREF(5),frameF2840);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_42) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF2842;
  P arityF2841;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3,a4,a5,a6,a7;
LINK_STACK();
  ARG(f_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(value_, 4);
  ARG(body_, 5);
  ARG(env_, 6);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T1 = T4;
  }
  arityF2841 = T1;
  T6 = FUNFAB(fun_41,6,f_,naryQ_,arityF2841,env_,names_,body_);
  efunF2842 = T6;
  T7 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF2842);
  T9 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF2841,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF2842);
  T5 = efunF2842;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P env_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P evalF2844;
  P paramsF2843;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF2843 = T1;
  T3 = FUNFAB(fun_43,1,e_);
  evalF2844 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF2843);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF2843);
  T7 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF2844,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_45) {
  P e_,env_;
  P specsF2848;
  P namesF2847;
  P naryQF2846;
  P paramsF2845;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF2845 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF2846 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF2845);
  namesF2847 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF2845);
  T7 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T8,naryQF2846,env_);
  specsF2848 = T7;
  T10 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),6,T10,namesF2847,specsF2848,naryQF2846,VARREF(YLanyG),Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_46) {
  P env_,ref_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_47) {
  P val_,env_,ref_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_49) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_50) {
  P e_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_51) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_52) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(YevalSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_54) {
  P e_,binding_,env_;
  P x_1474F2850;
  P x_1473F2849;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1473F2849 = T1;
  x_1474F2850 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1474F2850,x_1473F2849,LITREF(lit_106));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_boundQ),binding_);
    T3 = T5;
  } else {
    T3 = YPtrue;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_55) {
  P e_,binding_,env_;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF2851;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2851 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF2851,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P valueF2852;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2852 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF2852,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_59) {
  P e_,env_;
  P valueF2853;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2853 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),valueF2853,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P valueF2854;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2854 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF2854,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_61) {
  P b_,v_;
  P xF2857;
  P x_1476F2856;
  P x_1475F2855;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1475F2855 = T1;
  x_1476F2856 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1476F2856,x_1475F2855,LITREF(lit_115));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1476F2856,x_1475F2855,LITREF(lit_106));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL2(1,x_1476F2856,x_1475F2855,LITREF(lit_116));
      if (T11 != YPfalse) {
        T13 = (P)YPfab_dyn_var();
        xF2857 = T13;
        T14 = (P)YPtag_into(xF2857,(P)3);
        T12 = T14;
        CALL2(1,VARREF(YevalSastYbinding_locative_setter),T12,b_);
        T16 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
        T15 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),v_,T16);
        T10 = T15;
      } else {
        T18 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
        T17 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_117),T18);
        T10 = T17;
      }
      T7 = T10;
    }
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_62) {
  P e_,env_;
  P valueF2858;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2858 = T1;
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T3,valueF2858);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
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

FUNCODEDEF(fun_eval_64) {
  P e_;
  P valF2860;
  P nxtF2859;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF2859 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,FREEREF(0));
  valF2860 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF2859);
  if (T6 != YPfalse) {
    T5 = valF2860;
  } else {
    a1 = nxtF2859;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P evalF2861;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_64,2);
  evalF2861 = T1;
  FUNINIT(evalF2861, 2,env_,evalF2861);
  T2 = CALL1(0,evalF2861,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_66) {
  P res_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),args_);
    T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,FREEREF(0));
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,res_);
    T7 = CALL1(1,VARREF(Ytail),args_);
    a1 = T4;
    a2 = T7;
    res_ = a1;
    args_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_67) {
  P e_,env_;
  P evalF2862;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_66,2);
  evalF2862 = T1;
  FUNINIT(evalF2862, 2,env_,evalF2862);
  T2 = CALL2(0,evalF2862,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P argsF2864;
  P fF2863;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  fF2863 = T1;
  T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
  argsF2864 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF2863,YPfalse,argsF2864);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_69) {
  P e_,env_;
  P argsF2868;
  P fF2867;
  P nmsF2866;
  P bF2865;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF2865 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),bF2865);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_76));
    nmsF2866 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF2866,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF2866;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YevalSastYbinding_info),bF2865);
    fF2867 = T10;
    T13 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,env_);
    argsF2868 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF2867,YPfalse,argsF2868);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  P e_,env_;
  P nenvF2870;
  P argsF2869;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF2869 = T1;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),T6);
  T4 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T5,argsF2869);
  nenvF2870 = T4;
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,nenvF2870);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P name_,value_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_72) {
  P e_,env_;
  P new_envF2872;
  P bindingsF2871;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF2871 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF2871);
  T6 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF2871);
  T3 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T4,T5);
  new_envF2872 = T3;
  T7 = FUNFAB(fun_71,1,new_envF2872);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF2871);
  T10 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_evalYast_eval),new_envF2872);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,new_envF2872);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P env_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_133));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P exitF2874;
  P rprocF2873;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_73,1,return_);
  rprocF2873 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_133));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF2873,T4,T5,YPfalse,YPfalse,rprocF2873,FREEREF(0));
  exitF2874 = T3;
  T8 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF2874);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  P e_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_74,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_78) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_76,2,e_,env_);
  T2 = FUNFAB(fun_77,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_79) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
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
  P bF2875;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_76),YPfalse,LITREF(lit_139));
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_140),YPfalse,LITREF(lit_106));
  bF2875 = T1;
  T2 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF2875);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF2876;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF2876 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = XCALL4(1,VARREF(YevalSastYast_define_binding),eF2876,T4,YPfalse,LITREF(lit_106));
  T0 = T3;
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF2877;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF2877 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = XCALL2(1,VARREF(YevalSastYfind_binding),T4,eF2877);
  T0 = T3;
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF2878;
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF2878 = T1;
  if (tmpF2878 != YPfalse) {
    T2 = tmpF2878;
  } else {
    T3 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P yF2883;
  P xF2882;
  P xF2881;
  P xF2880;
  P bF2879;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF2879 = T1;
  xF2882 = bF2879;
  xF2880 = YPint((P)0);
  xF2881 = xF2880;
  T6 = (P)YPiGG(xF2881,(P)2);
  T5 = T6;
  T4 = T5;
  yF2883 = T4;
  T8 = (P)YPeqQ(xF2882,yF2883);
  T7 = (P)YPbb(T8);
  T3 = T7;
  if (T3 != YPfalse) {
    T11 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T12 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T10 = (P)YevalSast_evalYPensure_binding(T11,T12);
    T9 = (P)YevalSast_evalYPdlvar_setter(T10,dlvar_);
    T2 = T9;
  } else {
    T2 = bF2879;
  }
  T0 = T2;
  return T0;
}

INLINE P YevalSast_evalYPbinding_bound_ofQ(P b_) {
  P tmpF2884;
  P T0,T1,T2;
  P a1;
DEFCREGS();
loop:
  tmpF2884 = b_;
  if (tmpF2884 != YPfalse) {
    T2 = XCALL1(1,VARREF(YevalSastYbinding_info),b_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  return T0;
}

P YevalSast_evalYPbinding_boundQ(P dlvar_) {
  P T0,T1,T2,T3;
  P a1;
DEFCREGS();
loop:
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  T0 = (P)YevalSast_evalYPbinding_bound_ofQ(T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_of(P binding_) {
  P x_1478F2886;
  P x_1477F2885;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
DEFCREGS();
loop:
  T1 = XCALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1477F2885 = T1;
  x_1478F2886 = VARREF(YgooSmacrosYEE);
  T4 = XCALL2(1,x_1478F2886,x_1477F2885,LITREF(lit_115));
  if (T4 != YPfalse) {
    T6 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
    T5 = XCALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T6);
    T3 = T5;
  } else {
    T8 = XCALL2(1,x_1478F2886,x_1477F2885,LITREF(lit_116));
    if (T8 != YPfalse) {
      T10 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
      T9 = XCALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T10);
      T7 = T9;
    } else {
      T11 = XCALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),binding_);
      T7 = T11;
    }
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_value(P dlvar_) {
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  T0 = (P)YevalSast_evalYPbinding_value_of(T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_of_setter(P val_,P binding_) {
  P x_1480F2888;
  P x_1479F2887;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
DEFCREGS();
loop:
  T1 = XCALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1479F2887 = T1;
  x_1480F2888 = VARREF(YgooSmacrosYEE);
  T4 = XCALL2(1,x_1480F2888,x_1479F2887,LITREF(lit_115));
  if (T4 != YPfalse) {
    T6 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
    T5 = XCALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T6);
    T3 = T5;
  } else {
    T8 = XCALL2(1,x_1480F2888,x_1479F2887,LITREF(lit_116));
    if (T8 != YPfalse) {
      T10 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
      T9 = XCALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),val_,T10);
      T7 = T9;
    } else {
      T11 = XCALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),val_,binding_);
      T7 = T11;
    }
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  T0 = (P)YevalSast_evalYPbinding_value_of_setter(val_,T1);
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPlist(1,YPPsym((P)"b"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_evalYenv_global_binding_value);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_evalYenv_global_binding_value);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_global_binding_value_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_evalYenv_global_binding_value,T1);
  lit_2 = YPPsym((P)"env-global-binding-value-setter");
  lit_3 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"b"));
  T5 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSast_evalYenv_global_binding_value_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSast_evalYenv_global_binding_value_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_env_global_binding_value_setter_1;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSast_evalYenv_global_binding_value_setter,T6);
  lit_4 = YPPsym((P)"env-global-binding-bound?");
  lit_5 = YPPlist(1,YPPsym((P)"b"));
  T10 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_4),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSast_evalYenv_global_binding_boundQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSast_evalYenv_global_binding_boundQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_env_global_binding_boundQ_2;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSast_evalYenv_global_binding_boundQ,T11);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSast_evalYenv_runtime_value);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSast_evalYenv_runtime_value);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_env_runtime_value_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSast_evalYenv_runtime_value,T16);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSast_evalYenv_runtime_value_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSast_evalYenv_runtime_value_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_env_runtime_value_setter_4;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSast_evalYenv_runtime_value_setter,T21);
  lit_10 = YPPsym((P)"env-dynamic-value");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_5 = YPmet(FUNCODEREF(fun_env_dynamic_value_5),LITREF(lit_10),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSast_evalYenv_dynamic_value);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSast_evalYenv_dynamic_value);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_env_dynamic_value_5;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSast_evalYenv_dynamic_value,T26);
  lit_12 = YPPsym((P)"env-dynamic-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_setter_6 = YPmet(FUNCODEREF(fun_env_dynamic_value_setter_6),LITREF(lit_12),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSast_evalYenv_dynamic_value_setter);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSast_evalYenv_dynamic_value_setter);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_env_dynamic_value_setter_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSast_evalYenv_dynamic_value_setter,T31);
  lit_14 = YPPsym((P)"<loc-env>");
  T36 = (P)YPpair(VARREF(YLanyG),Ynil);
  T35 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_14),T36);
  VARSET(YevalSast_evalYLloc_envG,T35);
  lit_15 = YPPsym((P)"env-parent");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_7 = YPmet(FUNCODEREF(fun_env_parent_7),LITREF(lit_15),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSast_evalYenv_parent);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSast_evalYenv_parent);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_env_parent_7;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSast_evalYenv_parent,T38);
  lit_17 = YPPsym((P)"env-parent-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_8 = YPmet(FUNCODEREF(fun_env_parent_setter_8),LITREF(lit_17),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YevalSast_evalYenv_parent_setter);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSast_evalYenv_parent_setter);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_env_parent_setter_8;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSast_evalYenv_parent_setter,T43);
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T48 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),VARREF(YevalSast_evalYenv_parent_setter),VARREF(YLanyG),T48);
  lit_20 = YPPsym((P)"env-function");
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_10 = YPmet(FUNCODEREF(fun_env_function_10),LITREF(lit_20),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YevalSast_evalYenv_function);
  if (T52 != YPfalse) {
    T51 = VARREF(YevalSast_evalYenv_function);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_env_function_10;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YevalSast_evalYenv_function,T50);
  lit_22 = YPPsym((P)"env-function-setter");
  lit_23 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_11 = YPmet(FUNCODEREF(fun_env_function_setter_11),LITREF(lit_22),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSast_evalYenv_function_setter);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSast_evalYenv_function_setter);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_env_function_setter_11;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSast_evalYenv_function_setter,T55);
  lit_24 = YPPlist(1,YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T60 = fun_12;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_function),VARREF(YevalSast_evalYenv_function_setter),VARREF(YLanyG),T60);
  lit_25 = YPPsym((P)"env-names");
  lit_26 = YPPlist(1,YPPsym((P)"_x"));
  T61 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_13 = YPmet(FUNCODEREF(fun_env_names_13),LITREF(lit_25),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSast_evalYenv_names);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSast_evalYenv_names);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_env_names_13;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSast_evalYenv_names,T62);
  lit_27 = YPPsym((P)"env-names-setter");
  lit_28 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLlstG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_14 = YPmet(FUNCODEREF(fun_env_names_setter_14),LITREF(lit_27),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSast_evalYenv_names_setter);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSast_evalYenv_names_setter);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_env_names_setter_14;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSast_evalYenv_names_setter,T67);
  lit_29 = YPPlist(1,YPPsym((P)"_x"));
  T71 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T72 = fun_15;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_names),VARREF(YevalSast_evalYenv_names_setter),VARREF(YLlstG),T72);
  lit_30 = YPPsym((P)"env-values");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_16 = YPmet(FUNCODEREF(fun_env_values_16),LITREF(lit_30),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSast_evalYenv_values);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSast_evalYenv_values);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_env_values_16;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSast_evalYenv_values,T74);
  lit_32 = YPPsym((P)"env-values-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLrepG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_17 = YPmet(FUNCODEREF(fun_env_values_setter_17),LITREF(lit_32),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YevalSast_evalYenv_values_setter);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalSast_evalYenv_values_setter);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_env_values_setter_17;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalSast_evalYenv_values_setter,T79);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_values),VARREF(YevalSast_evalYenv_values_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  T83 = XCALL1(1,VARREF(Ynew),VARREF(YevalSast_evalYLloc_envG));
  VARSET(YevalSast_evalYDnul_loc_env,T83);
  lit_34 = YPPsym((P)"env-frame!");
  lit_35 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"function"),YPPsym((P)"names"),YPPsym((P)"args"));
  T84 = YPsig(LITREF(lit_35),YPPlist(4,VARREF(YevalSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YevalSast_evalYLloc_envG),Ynil);
  fun_env_frameX_18 = YPmet(FUNCODEREF(fun_env_frameX_18),LITREF(lit_34),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSast_evalYenv_frameX);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSast_evalYenv_frameX);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_env_frameX_18;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSast_evalYenv_frameX,T85);
  lit_36 = YPPsym((P)"env-local-value");
  lit_37 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T89 = YPsig(LITREF(lit_37),YPPlist(3,VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_19 = YPmet(FUNCODEREF(fun_env_local_value_19),LITREF(lit_36),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YevalSast_evalYenv_local_value);
  if (T92 != YPfalse) {
    T91 = VARREF(YevalSast_evalYenv_local_value);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_env_local_value_19;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YevalSast_evalYenv_local_value,T90);
  lit_38 = YPPsym((P)"env-local-value-setter");
  lit_39 = YPPlist(4,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T94 = YPsig(LITREF(lit_39),YPPlist(4,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_20 = YPmet(FUNCODEREF(fun_env_local_value_setter_20),LITREF(lit_38),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSast_evalYenv_local_value_setter);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSast_evalYenv_local_value_setter);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_env_local_value_setter_20;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSast_evalYenv_local_value_setter,T95);
  lit_40 = YPPsym((P)"env-binding-value");
  lit_41 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"name"));
  lit_42 = YPPsym((P)"loop");
  lit_43 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"i"));
  T100 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_42),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_22 = YPmet(FUNCODEREF(fun_env_binding_value_22),LITREF(lit_40),T99,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSast_evalYenv_binding_value);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSast_evalYenv_binding_value);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_env_binding_value_22;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSast_evalYenv_binding_value,T101);
  lit_44 = YPPsym((P)"env-binding-value-setter");
  lit_45 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"name"));
  lit_46 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"i"));
  T106 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_23 = YPmet(FUNCODEREF(fun_loop_23),LITREF(lit_42),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(LITREF(lit_45),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_24 = YPmet(FUNCODEREF(fun_env_binding_value_setter_24),LITREF(lit_44),T105,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSast_evalYenv_binding_value_setter);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSast_evalYenv_binding_value_setter);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_env_binding_value_setter_24;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSast_evalYenv_binding_value_setter,T107);
  lit_47 = YPPsym((P)"ast-evaluate");
  lit_48 = YPPlist(1,YPPsym((P)"e"));
  T111 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_25 = YPmet(FUNCODEREF(fun_ast_evaluate_25),LITREF(lit_47),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSastYast_evaluate);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYast_evaluate);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_ast_evaluate_25;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYast_evaluate,T112);
  lit_49 = YPPsym((P)"ast-eval");
  lit_50 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T117 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T116 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_49),T117,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSast_evalYast_eval,T116);
  lit_51 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T118 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_49),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSast_evalYast_eval);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSast_evalYast_eval);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_ast_eval_26;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSast_evalYast_eval,T119);
  lit_52 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T123 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),LITREF(lit_49),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YevalSast_evalYast_eval);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSast_evalYast_eval);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_ast_eval_27;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSast_evalYast_eval,T124);
  lit_53 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"ee"));
  T128 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YevalSastYLcompile_timeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_28 = YPmet(FUNCODEREF(fun_ast_eval_28),LITREF(lit_49),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YevalSast_evalYast_eval);
  if (T131 != YPfalse) {
    T130 = VARREF(YevalSast_evalYast_eval);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_ast_eval_28;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YevalSast_evalYast_eval,T129);
  lit_54 = YPPsym((P)"ast-eval-specs");
  lit_55 = YPPlist(3,YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"env"));
  lit_56 = YPPlist(3,YPPsym((P)"res"),YPPsym((P)"specs"),YPPsym((P)"i"));
  T134 = YPsig(LITREF(lit_56),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_42),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_55),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_30 = YPmet(FUNCODEREF(fun_ast_eval_specs_30),LITREF(lit_54),T133,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSast_evalYast_eval_specs);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSast_evalYast_eval_specs);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_ast_eval_specs_30;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSast_evalYast_eval_specs,T135);
  lit_57 = YPPsym((P)"arrange-arguments");
  lit_58 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"args"));
  T139 = YPsig(LITREF(lit_58),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YevalSast_evalYarrange_arguments = YPmet(FUNCODEREF(YevalSast_evalYarrange_arguments),LITREF(lit_57),T139,ENVNUL,PNUL,YPfalse);
  T140 = YevalSast_evalYarrange_arguments;
  VARSET(YevalSast_evalYarrange_arguments,T140);
  lit_59 = YPPlist(1,YPPsym((P)"exp"));
  lit_60 = YPPlist(1,YPPsym((P)"return"));
  lit_61 = YPPsym((P)"x-1472");
  lit_62 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_63 = YPPsym((P)"ifun");
  lit_64 = YPsb((P)"Match Pattern Failure");
  lit_65 = YPPsym((P)"fun");
  lit_66 = YPPsym((P)"arg-vector");
  lit_67 = YPPsym((P)"...");
  lit_68 = YPPsym((P)"def");
  lit_69 = YPPsym((P)"args");
  lit_70 = YPPsym((P)"f");
  lit_71 = YPPsym((P)"nary?");
  lit_72 = YPPsym((P)"arity");
  lit_73 = YPPsym((P)"as");
  lit_74 = YPPsym((P)"<lst>");
  lit_75 = YPPsym((P)"nms");
  lit_76 = YPPsym((P)"%next-methods");
  lit_77 = YPPsym((P)"frame");
  lit_78 = YPPsym((P)"cat2");
  lit_79 = YPPsym((P)"lst");
  lit_80 = YPPsym((P)"quote");
  T143 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1472_32 = YPmet(FUNCODEREF(fun_x_1472_32),LITREF(lit_61),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T144 = fun_34;
  YPmacro(YPPsym((P)"eval/ast-eval"),YPPsym((P)"ifun"),T144);
  lit_81 = YPPsym((P)"as-fun-name");
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  T145 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_81),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_as_fun_name_35;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSast_evalYas_fun_name,T146);
  lit_83 = YPPlist(1,YPPsym((P)"x"));
  T150 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_81),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_as_fun_name_36;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSast_evalYas_fun_name,T151);
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  T155 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_81),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_as_fun_name_37;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSast_evalYas_fun_name,T156);
  lit_85 = YPPlist(1,YPPsym((P)"x"));
  T160 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_81),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_as_fun_name_38;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSast_evalYas_fun_name,T161);
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  T165 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_39 = YPmet(FUNCODEREF(fun_as_fun_name_39),LITREF(lit_81),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_as_fun_name_39;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSast_evalYas_fun_name,T166);
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T170 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_40 = YPmet(FUNCODEREF(fun_as_fun_name_40),LITREF(lit_81),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_as_fun_name_40;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSast_evalYas_fun_name,T171);
  lit_88 = YPPsym((P)"export-goo-method");
  lit_89 = YPPlist(7,YPPsym((P)"f"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"value"),YPPsym((P)"body"),YPPsym((P)"env"));
  lit_90 = YPPlist(1,YPPsym((P)"arg-vector"));
  T176 = YPsig(LITREF(lit_90),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(LITREF(lit_89),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_42 = YPmet(FUNCODEREF(fun_export_goo_method_42),LITREF(lit_88),T175,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YevalSast_evalYexport_goo_method);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSast_evalYexport_goo_method);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_export_goo_method_42;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSast_evalYexport_goo_method,T177);
  lit_91 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_92 = YPPlist(1,YPPsym((P)"env"));
  T182 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_44 = YPmet(FUNCODEREF(fun_ast_eval_44),LITREF(lit_49),T181,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSast_evalYast_eval);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSast_evalYast_eval);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_ast_eval_44;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSast_evalYast_eval,T183);
  lit_93 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T187 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_45 = YPmet(FUNCODEREF(fun_ast_eval_45),LITREF(lit_49),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalSast_evalYast_eval);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSast_evalYast_eval);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_ast_eval_45;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSast_evalYast_eval,T188);
  lit_94 = YPPsym((P)"env-local-reference-value");
  lit_95 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"ref"));
  T192 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_46 = YPmet(FUNCODEREF(fun_env_local_reference_value_46),LITREF(lit_94),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YevalSast_evalYenv_local_reference_value);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSast_evalYenv_local_reference_value);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_env_local_reference_value_46;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSast_evalYenv_local_reference_value,T193);
  lit_96 = YPPsym((P)"env-local-reference-value-setter");
  lit_97 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"env"),YPPsym((P)"ref"));
  T197 = YPsig(LITREF(lit_97),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_47 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_47),LITREF(lit_96),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSast_evalYenv_local_reference_value_setter);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSast_evalYenv_local_reference_value_setter);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_env_local_reference_value_setter_47;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSast_evalYenv_local_reference_value_setter,T198);
  lit_98 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T202 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_49),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSast_evalYast_eval);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSast_evalYast_eval);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_ast_eval_48;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSast_evalYast_eval,T203);
  lit_99 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T207 = YPsig(LITREF(lit_99),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_49),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSast_evalYast_eval);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSast_evalYast_eval);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_ast_eval_49;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSast_evalYast_eval,T208);
  lit_100 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T212 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),LITREF(lit_49),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YevalSast_evalYast_eval);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSast_evalYast_eval);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_ast_eval_50;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSast_evalYast_eval,T213);
  lit_101 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T217 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_51 = YPmet(FUNCODEREF(fun_ast_eval_51),LITREF(lit_49),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YevalSast_evalYast_eval);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSast_evalYast_eval);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_ast_eval_51;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSast_evalYast_eval,T218);
  lit_102 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T222 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),LITREF(lit_49),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YevalSast_evalYast_eval);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSast_evalYast_eval);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_ast_eval_52;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSast_evalYast_eval,T223);
  lit_103 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T227 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_49),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(YevalSast_evalYast_eval);
  if (T230 != YPfalse) {
    T229 = VARREF(YevalSast_evalYast_eval);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_ast_eval_53;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YevalSast_evalYast_eval,T228);
  lit_104 = YPPsym((P)"ast-eval-bound?");
  lit_105 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  lit_106 = YPPsym((P)"global");
  T232 = YPsig(LITREF(lit_105),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_54 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_54),LITREF(lit_104),T232,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YevalSast_evalYast_eval_boundQ);
  if (T235 != YPfalse) {
    T234 = VARREF(YevalSast_evalYast_eval_boundQ);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_ast_eval_boundQ_54;
  T233 = XCALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YevalSast_evalYast_eval_boundQ,T233);
  lit_107 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  T237 = YPsig(LITREF(lit_107),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_55 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_55),LITREF(lit_104),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YevalSast_evalYast_eval_boundQ);
  if (T240 != YPfalse) {
    T239 = VARREF(YevalSast_evalYast_eval_boundQ);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_ast_eval_boundQ_55;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YevalSast_evalYast_eval_boundQ,T238);
  lit_108 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T242 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),LITREF(lit_49),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YevalSast_evalYast_eval);
  if (T245 != YPfalse) {
    T244 = VARREF(YevalSast_evalYast_eval);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_ast_eval_56;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YevalSast_evalYast_eval,T243);
  lit_109 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T247 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),LITREF(lit_49),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(YevalSast_evalYast_eval);
  if (T250 != YPfalse) {
    T249 = VARREF(YevalSast_evalYast_eval);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_ast_eval_57;
  T248 = XCALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YevalSast_evalYast_eval,T248);
  lit_110 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T252 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_49),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YevalSast_evalYast_eval);
  if (T255 != YPfalse) {
    T254 = VARREF(YevalSast_evalYast_eval);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_ast_eval_58;
  T253 = XCALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YevalSast_evalYast_eval,T253);
  lit_111 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T257 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_59 = YPmet(FUNCODEREF(fun_ast_eval_59),LITREF(lit_49),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YevalSast_evalYast_eval);
  if (T260 != YPfalse) {
    T259 = VARREF(YevalSast_evalYast_eval);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_ast_eval_59;
  T258 = XCALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YevalSast_evalYast_eval,T258);
  lit_112 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T264 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T263 = fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),LITREF(lit_49),T264,ENVNUL,PNUL,YPfalse);
  T268 = BOUNDP(YevalSast_evalYast_eval);
  if (T268 != YPfalse) {
    T267 = VARREF(YevalSast_evalYast_eval);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_ast_eval_60;
  T266 = XCALL2(1,VARREF(YPdefine_method),T267,T269);
  T265 = VARSET(YevalSast_evalYast_eval,T266);
  T262 = T265;
  return T262;
}

P YevalSast_evalY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69;
DEFCREGS();
loop:
  lit_113 = YPPsym((P)"env-define-binding!");
  lit_114 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"v"));
  lit_115 = YPPsym((P)"runtime");
  lit_116 = YPPsym((P)"dynamic");
  lit_117 = YPsb((P)"Defining invalid binding kind %=");
  T0 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_61 = YPmet(FUNCODEREF(fun_env_define_bindingX_61),LITREF(lit_113),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_evalYenv_define_bindingX);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_evalYenv_define_bindingX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_define_bindingX_61;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_evalYenv_define_bindingX,T1);
  lit_118 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T5 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),LITREF(lit_49),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSast_evalYast_eval);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSast_evalYast_eval);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_ast_eval_62;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSast_evalYast_eval,T6);
  lit_119 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T10 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_49),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSast_evalYast_eval);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSast_evalYast_eval);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_ast_eval_63;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSast_evalYast_eval,T11);
  lit_120 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_121 = YPPsym((P)"eval");
  lit_122 = YPPlist(1,YPPsym((P)"e"));
  T16 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eval_64 = YPmet(FUNCODEREF(fun_eval_64),LITREF(lit_121),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_49),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_eval_65;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSast_evalYast_eval,T17);
  lit_123 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_124 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"args"));
  T22 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_66 = YPmet(FUNCODEREF(fun_eval_66),LITREF(lit_121),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YevalSastYLargumentsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),LITREF(lit_49),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSast_evalYast_eval);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSast_evalYast_eval);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_ast_eval_67;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSast_evalYast_eval,T23);
  lit_125 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T27 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_49),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSast_evalYast_eval);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSast_evalYast_eval);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_ast_eval_68;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSast_evalYast_eval,T28);
  lit_126 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T32 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_69 = YPmet(FUNCODEREF(fun_ast_eval_69),LITREF(lit_49),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSast_evalYast_eval);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSast_evalYast_eval);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_ast_eval_69;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSast_evalYast_eval,T33);
  lit_127 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T37 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),LITREF(lit_49),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSast_evalYast_eval);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSast_evalYast_eval);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_ast_eval_70;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSast_evalYast_eval,T38);
  lit_128 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_129 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T43 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_72 = YPmet(FUNCODEREF(fun_ast_eval_72),LITREF(lit_49),T42,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YevalSast_evalYast_eval);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSast_evalYast_eval);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_ast_eval_72;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSast_evalYast_eval,T44);
  lit_130 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_131 = YPPlist(1,YPPsym((P)"return"));
  lit_132 = YPPlist(1,YPPsym((P)"env"));
  lit_133 = YPPsym((P)"x");
  T50 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),LITREF(lit_49),T48,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSast_evalYast_eval);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSast_evalYast_eval);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_ast_eval_75;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSast_evalYast_eval,T51);
  lit_134 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_135 = Ynil;
  T57 = YPsig(LITREF(lit_135),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(LITREF(lit_135),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_78 = YPmet(FUNCODEREF(fun_ast_eval_78),LITREF(lit_49),T55,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSast_evalYast_eval);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSast_evalYast_eval);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_ast_eval_78;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSast_evalYast_eval,T58);
  lit_136 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T62 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_79 = YPmet(FUNCODEREF(fun_ast_eval_79),LITREF(lit_49),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YevalSast_evalYast_eval);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalSast_evalYast_eval);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_ast_eval_79;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalSast_evalYast_eval,T63);
  lit_137 = YPPsym((P)"init-environment-for-eval");
  lit_138 = YPPlist(1,YPPsym((P)"env"));
  lit_139 = YPPsym((P)"predefined");
  lit_140 = YPPsym((P)"%pair");
  T67 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_environment_for_eval = YPmet(FUNCODEREF(YevalSastYinit_environment_for_eval),LITREF(lit_137),T67,ENVNUL,PNUL,YPfalse);
  T68 = YevalSastYinit_environment_for_eval;
  VARSET(YevalSastYinit_environment_for_eval,T68);
  T69 = YPfalse;
  return T69;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSstep;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_goo},
  {&module_info_gooScolsSrep},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"loc", &module_info_gooSboot, "loc"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"add", &module_info_gooScolsScol, "add"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"mod", &module_info_gooSmath, "mod"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"in", &module_info_gooSioSport, "in"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"op", &module_info_gooSmacros, "op"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"export", &module_info_gooSboot, "export"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"put", &module_info_gooSioSport, "put"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"~==", &module_info_gooSmath, "~=="},
  {"close", &module_info_gooSioSport, "close"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<module>", &module_info_evalSast, "<module>"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"module-uses-c-libraries", &module_info_evalSast, "module-uses-c-libraries"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"now", &module_info_gooScolsScol, "now"},
  {"ct", &module_info_gooSboot, "ct"},
  {"t<", &module_info_gooStypes, "t<"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"case", &module_info_gooSmacros, "case"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"out", &module_info_gooSioSport, "out"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"always", &module_info_gooSruntime, "always"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"abs", &module_info_gooSmath, "abs"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"t=", &module_info_gooStypes, "t="},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"items", &module_info_gooScolsScol, "items"},
  {"max", &module_info_gooSmag, "max"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"~=", &module_info_gooSmath, "~="},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"ast-error", &module_info_evalSdependency, "ast-error"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"open", &module_info_gooSioSport, "open"},
  {"when", &module_info_gooSmacros, "when"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"1-", &module_info_gooSmath, "1-"},
  {"~", &module_info_gooSmath, "~"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"sin", &module_info_gooSmath, "sin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"read", &module_info_gooSconditions, "read"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"app", &module_info_gooSmacros, "app"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"program-register", &module_info_evalSast, "program-register"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"%met", &module_info_gooSboot, "%met"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"min", &module_info_gooSmag, "min"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%time", &module_info_gooSboot, "%time"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"seq", &module_info_gooSboot, "seq"},
  {"map", &module_info_gooSmacros, "map"},
  {"do", &module_info_gooSmacros, "do"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"for", &module_info_gooSmacros, "for"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {">", &module_info_gooSmag, ">"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"+", &module_info_gooSmath, "+"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {">>", &module_info_gooSmath, ">>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"df", &module_info_gooSboot, "df"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"=", &module_info_gooSmath, "="},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"get", &module_info_gooSioSport, "get"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"&", &module_info_gooSmath, "&"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<", &module_info_gooSmag, "<"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"round", &module_info_gooSmath, "round"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"log", &module_info_gooSmath, "log"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"/", &module_info_gooSmath, "/"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"tan", &module_info_gooSmath, "tan"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-names", CVAR, &YevalSast_evalYenv_names},
  {"%binding-value", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"%ensure-binding", PVAR, NULL},
  {"%binding-bound-of?", PVAR, NULL},
  {"env-global-binding-bound?", CVAR, &YevalSast_evalYenv_global_binding_boundQ},
  {"arrange-arguments", CVAR, &YevalSast_evalYarrange_arguments},
  {"env-values", CVAR, &YevalSast_evalYenv_values},
  {"env-local-value-setter", CVAR, &YevalSast_evalYenv_local_value_setter},
  {"%binding-bound?", PVAR, NULL},
  {"ast-eval-specs", CVAR, &YevalSast_evalYast_eval_specs},
  {"env-function", CVAR, &YevalSast_evalYenv_function},
  {"env-names-setter", CVAR, &YevalSast_evalYenv_names_setter},
  {"env-binding-value-setter", CVAR, &YevalSast_evalYenv_binding_value_setter},
  {"env-frame!", CVAR, &YevalSast_evalYenv_frameX},
  {"env-runtime-value-setter", CVAR, &YevalSast_evalYenv_runtime_value_setter},
  {"env-dynamic-value", CVAR, &YevalSast_evalYenv_dynamic_value},
  {"env-parent", CVAR, &YevalSast_evalYenv_parent},
  {"env-local-reference-value", CVAR, &YevalSast_evalYenv_local_reference_value},
  {"env-global-binding-value-setter", CVAR, &YevalSast_evalYenv_global_binding_value_setter},
  {"%define-binding", PVAR, NULL},
  {"%dlvar", PVAR, NULL},
  {"%dlvar-mod", PVAR, NULL},
  {"%binding-value-of", PVAR, NULL},
  {"ifun", PVAR, NULL},
  {"%dlvar-nam", PVAR, NULL},
  {"ast-eval-bound?", CVAR, &YevalSast_evalYast_eval_boundQ},
  {"%lookup-binding", PVAR, NULL},
  {"export-goo-method", CVAR, &YevalSast_evalYexport_goo_method},
  {"<loc-env>", CVAR, &YevalSast_evalYLloc_envG},
  {"env-function-setter", CVAR, &YevalSast_evalYenv_function_setter},
  {"as-fun-name", CVAR, &YevalSast_evalYas_fun_name},
  {"ast-eval", CVAR, &YevalSast_evalYast_eval},
  {"%dlvar-setter", PVAR, NULL},
  {"env-define-binding!", CVAR, &YevalSast_evalYenv_define_bindingX},
  {"%binding-value-setter", PVAR, NULL},
  {"env-global-binding-value", CVAR, &YevalSast_evalYenv_global_binding_value},
  {"env-local-value", CVAR, &YevalSast_evalYenv_local_value},
  {"env-parent-setter", CVAR, &YevalSast_evalYenv_parent_setter},
  {"env-runtime-value", CVAR, &YevalSast_evalYenv_runtime_value},
  {"%binding-value-of-setter", PVAR, NULL},
  {"env-dynamic-value-setter", CVAR, &YevalSast_evalYenv_dynamic_value_setter},
  {"$nul-loc-env", CVAR, &YevalSast_evalYDnul_loc_env},
  {"---main-0---", PVAR, NULL},
  {"env-values-setter", CVAR, &YevalSast_evalYenv_values_setter},
  {"env-local-reference-value-setter", CVAR, &YevalSast_evalYenv_local_reference_value_setter},
  {"env-binding-value", CVAR, &YevalSast_evalYenv_binding_value},
  {"%dlvar-binding", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value", "%binding-value"},
  {"%binding-bound-of?", "%binding-bound-of?"},
  {"%binding-bound?", "%binding-bound?"},
  {"%binding-value-setter", "%binding-value-setter"},
  {"%binding-value-of", "%binding-value-of"},
  {"%binding-value-of-setter", "%binding-value-of-setter"},
  {"ast-evaluate", "ast-evaluate"},
  {"init-environment-for-eval", "init-environment-for-eval"},
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
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
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
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_goo();
  load_module_gooScolsSrep();
  load_module_evalSast();

  (P)YevalSast_evalY___main_0___();
  (P)YevalSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
