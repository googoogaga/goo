/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-linearize */

EXT(Ynot,"goo/boot","not");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
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
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ytype_error,"goo/boot","type-error");
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
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
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
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclone,"goo/boot","clone");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
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
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
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
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
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
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
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
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSast_linearizeYdo_do_analysisX,"eval/ast-linearize","do-do-analysis!");
DEF(YevalSast_linearizeYdo_analysisX,"eval/ast-linearize","do-analysis!");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
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
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
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
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
DEF(YevalSast_linearizeYprogram_bindings_setter,"eval/ast-linearize","program-bindings-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
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
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
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
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Ynul,"goo/boot","nul");
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
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Ynew,"goo/boot","new");
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
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
DEF(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSmathYround,"goo/math","round");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(YPprop,"goo/boot","%prop");
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
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
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
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yunexec,"goo/boot","unexec");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_77);
DEFLIT(lit_177);
DEFLIT(lit_151);
DEFLIT(lit_89);
DEFLIT(lit_127);
DEFLIT(lit_145);
DEFLIT(lit_167);
DEFLIT(lit_181);
DEFLIT(lit_118);
DEFLIT(lit_138);
DEFLIT(lit_182);
DEFLIT(lit_57);
DEFLIT(lit_175);
DEFLIT(lit_19);
DEFLIT(lit_78);
DEFLIT(lit_64);
DEFLIT(lit_17);
DEFLIT(lit_80);
DEFLIT(lit_109);
DEFLIT(lit_119);
DEFLIT(lit_73);
DEFLIT(lit_38);
DEFLIT(lit_98);
DEFLIT(lit_59);
DEFLIT(lit_51);
DEFLIT(lit_16);
DEFLIT(lit_56);
DEFLIT(lit_22);
DEFLIT(lit_135);
DEFLIT(lit_4);
DEFLIT(lit_144);
DEFLIT(lit_79);
DEFLIT(lit_189);
DEFLIT(lit_129);
DEFLIT(lit_142);
DEFLIT(lit_70);
DEFLIT(lit_0);
DEFLIT(lit_93);
DEFLIT(lit_14);
DEFLIT(lit_170);
DEFLIT(lit_168);
DEFLIT(lit_185);
DEFLIT(lit_162);
DEFLIT(lit_9);
DEFLIT(lit_186);
DEFLIT(lit_191);
DEFLIT(lit_69);
DEFLIT(lit_25);
DEFLIT(lit_49);
DEFLIT(lit_36);
DEFLIT(lit_31);
DEFLIT(lit_41);
DEFLIT(lit_117);
DEFLIT(lit_132);
DEFLIT(lit_63);
DEFLIT(lit_147);
DEFLIT(lit_146);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_75);
DEFLIT(lit_97);
DEFLIT(lit_180);
DEFLIT(lit_176);
DEFLIT(lit_184);
DEFLIT(lit_42);
DEFLIT(lit_12);
DEFLIT(lit_94);
DEFLIT(lit_48);
DEFLIT(lit_196);
DEFLIT(lit_43);
DEFLIT(lit_90);
DEFLIT(lit_178);
DEFLIT(lit_148);
DEFLIT(lit_91);
DEFLIT(lit_108);
DEFLIT(lit_30);
DEFLIT(lit_120);
DEFLIT(lit_82);
DEFLIT(lit_13);
DEFLIT(lit_194);
DEFLIT(lit_152);
DEFLIT(lit_157);
DEFLIT(lit_66);
DEFLIT(lit_159);
DEFLIT(lit_166);
DEFLIT(lit_174);
DEFLIT(lit_40);
DEFLIT(lit_1);
DEFLIT(lit_153);
DEFLIT(lit_67);
DEFLIT(lit_133);
DEFLIT(lit_81);
DEFLIT(lit_187);
DEFLIT(lit_149);
DEFLIT(lit_198);
DEFLIT(lit_3);
DEFLIT(lit_101);
DEFLIT(lit_23);
DEFLIT(lit_110);
DEFLIT(lit_50);
DEFLIT(lit_28);
DEFLIT(lit_128);
DEFLIT(lit_143);
DEFLIT(lit_32);
DEFLIT(lit_156);
DEFLIT(lit_134);
DEFLIT(lit_8);
DEFLIT(lit_102);
DEFLIT(lit_18);
DEFLIT(lit_115);
DEFLIT(lit_44);
DEFLIT(lit_34);
DEFLIT(lit_103);
DEFLIT(lit_20);
DEFLIT(lit_130);
DEFLIT(lit_111);
DEFLIT(lit_169);
DEFLIT(lit_83);
DEFLIT(lit_46);
DEFLIT(lit_29);
DEFLIT(lit_126);
DEFLIT(lit_158);
DEFLIT(lit_164);
DEFLIT(lit_11);
DEFLIT(lit_61);
DEFLIT(lit_45);
DEFLIT(lit_190);
DEFLIT(lit_72);
DEFLIT(lit_154);
DEFLIT(lit_112);
DEFLIT(lit_124);
DEFLIT(lit_125);
DEFLIT(lit_10);
DEFLIT(lit_121);
DEFLIT(lit_53);
DEFLIT(lit_95);
DEFLIT(lit_35);
DEFLIT(lit_199);
DEFLIT(lit_92);
DEFLIT(lit_85);
DEFLIT(lit_27);
DEFLIT(lit_37);
DEFLIT(lit_55);
DEFLIT(lit_58);
DEFLIT(lit_193);
DEFLIT(lit_99);
DEFLIT(lit_195);
DEFLIT(lit_52);
DEFLIT(lit_140);
DEFLIT(lit_131);
DEFLIT(lit_172);
DEFLIT(lit_21);
DEFLIT(lit_150);
DEFLIT(lit_163);
DEFLIT(lit_96);
DEFLIT(lit_160);
DEFLIT(lit_65);
DEFLIT(lit_171);
DEFLIT(lit_84);
DEFLIT(lit_106);
DEFLIT(lit_54);
DEFLIT(lit_105);
DEFLIT(lit_26);
DEFLIT(lit_76);
DEFLIT(lit_68);
DEFLIT(lit_123);
DEFLIT(lit_7);
DEFLIT(lit_104);
DEFLIT(lit_122);
DEFLIT(lit_87);
DEFLIT(lit_116);
DEFLIT(lit_100);
DEFLIT(lit_197);
DEFLIT(lit_60);
DEFLIT(lit_139);
DEFLIT(lit_47);
DEFLIT(lit_161);
DEFLIT(lit_71);
DEFLIT(lit_33);
DEFLIT(lit_24);
DEFLIT(lit_62);
DEFLIT(lit_188);
DEFLIT(lit_141);
DEFLIT(lit_114);
DEFLIT(lit_136);
DEFLIT(lit_183);
DEFLIT(lit_155);
DEFLIT(lit_86);
DEFLIT(lit_192);
DEFLIT(lit_179);
DEFLIT(lit_137);
DEFLIT(lit_173);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_113);
DEFLIT(lit_39);
DEFLIT(lit_165);
DEFLIT(lit_107);
DEFLIT(lit_88);
DEFLIT(lit_74);

/* FUNCTIONS: */

LOCFOR(fun_box_reference_0);
LOCFOR(fun_box_reference_setter_1);
LOCFOR(fun_box_reference_2);
LOCFOR(fun_box_reference_setter_3);
LOCFOR(fun_box_form_4);
LOCFOR(fun_box_form_setter_5);
LOCFOR(fun_box_reference_6);
LOCFOR(fun_box_reference_setter_7);
LOCFOR(fun_insert_boxX_8);
LOCFOR(fun_insert_boxX_9);
LOCFOR(fun_insert_boxX_10);
LOCFOR(fun_insert_boxX_11);
LOCFOR(fun_insert_boxX_12);
LOCFOR(fun_insert_boxX_13);
LOCFOR(fun_insert_boxX_14);
LOCFOR(fun_loop_15);
LOCFOR(fun_boxify_mutable_bindings_16);
LOCFOR(fun_unconstrained_typeQ_17);
LOCFOR(fun_unconstrained_typeQ_18);
LOCFOR(fun_unconstrained_typeQ_19);
LOCFOR(fun_do_do_analysisX_20);
LOCFOR(fun_do_analysisX_21);
LOCFOR(fun_do_analysisX_22);
LOCFOR(fun_23);
LOCFOR(fun_do_analysisX_24);
LOCFOR(fun_analyze_ast_25);
LOCFOR(fun_reference_offset_26);
LOCFOR(fun_reference_offset_setter_27);
LOCFOR(fun_reference_selfQ_28);
LOCFOR(fun_reference_selfQ_setter_29);
LOCFOR(fun_liftX_30);
LOCFOR(fun_lift_proceduresX_31);
LOCFOR(fun_lift_proceduresX_32);
LOCFOR(fun_add_33);
LOCFOR(fun_check_34);
LOCFOR(fun_adjoin_free_bindingX_35);
LOCFOR(fun_lift_proceduresX_36);
LOCFOR(fun_lift_proceduresX_37);
LOCFOR(fun_lift_proceduresX_38);
LOCFOR(fun_lift_proceduresX_39);
LOCFOR(fun_lift_proceduresX_40);
LOCFOR(fun_program_form_41);
LOCFOR(fun_program_form_setter_42);
LOCFOR(fun_program_quotations_43);
LOCFOR(fun_program_quotations_setter_44);
LOCFOR(fun_45);
LOCFOR(fun_program_bindings_46);
LOCFOR(fun_program_bindings_setter_47);
LOCFOR(fun_48);
LOCFOR(fun_program_definitions_49);
LOCFOR(fun_program_definitions_setter_50);
LOCFOR(fun_51);
LOCFOR(fun_form_program_52);
LOCFOR(fun_form_program_setter_53);
LOCFOR(fun_form_quotations_54);
LOCFOR(fun_form_quotations_setter_55);
LOCFOR(fun_56);
LOCFOR(fun_form_definitions_57);
LOCFOR(fun_form_definitions_setter_58);
LOCFOR(fun_59);
LOCFOR(fun_closure_creation_index_60);
LOCFOR(fun_closure_creation_index_setter_61);
LOCFOR(fun_closure_creation_free_62);
LOCFOR(fun_closure_creation_free_setter_63);
LOCFOR(fun_flatten_seqs_64);
LOCFOR(fun_inner_65);
LOCFOR(fun_loop_66);
LOCFOR(fun_flatten_seqs_67);
LOCFOR(fun_68);
LOCFOR(fun_as_top_level_forms_69);
LOCFOR(fun_70);
LOCFOR(fun_extract_thingsX_71);
LOCFOR(fun_extractX_72);
LOCFOR(fun_extractX_73);
LOCFOR(fun_extractX_74);
LOCFOR(fun_75);
LOCFOR(fun_extractX_76);
LOCFOR(fun_extractX_77);
LOCFOR(fun_adjoin_definitionX_78);
LOCFOR(fun_split_program_79);
LOCFOR(fun_inner_80);
LOCFOR(fun_loop_81);
LOCFOR(fun_split_program_82);
LOCFOR(fun_loop_83);
LOCFOR(fun_closurize_mainX_84);
LOCFOR(fun_assoc_key_85);
LOCFOR(fun_assoc_key_setter_86);
LOCFOR(fun_assoc_value_87);
LOCFOR(fun_assoc_value_setter_88);
FUNFOR(YevalSast_linearizeYassoc);
LOCFOR(fun_assocq_90);
LOCFOR(fun_91);
LOCFOR(fun_gather_temporariesX_92);
LOCFOR(fun_collect_temporariesX_93);
LOCFOR(fun_collect_temporariesX_94);
LOCFOR(fun_loop_95);
FUNFOR(YevalSast_linearizeYprepend_renamings);
LOCFOR(fun_collect_temporariesX_97);
LOCFOR(fun_collect_temporariesX_98);
LOCFOR(fun_adjoin_99);
LOCFOR(fun_adjoin_temporary_variablesX_100);
LOCFOR(fun_binding_index_101);
LOCFOR(fun_binding_index_setter_102);
LOCFOR(fun_new_renamed_binding_103);
LOCFOR(fun_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_register_allocateX_107);
FUNFOR(YevalSast_linearizeYallocate_register);
LOCFOR(fun_collect_registersX_109);
LOCFOR(fun_loop_110);
LOCFOR(fun_collect_registersX_111);
LOCFOR(fun_collect_registersX_112);
LOCFOR(fun_113);
LOCFOR(fun_collect_registersX_114);
LOCFOR(fun_collect_registersX_115);
LOCFOR(fun_collect_registersX_116);
LOCFOR(fun_ast_contains_funQ_117);
LOCFOR(fun_walk_118);
LOCFOR(fun_119);
LOCFOR(fun_ast_contains_funQ_120);
extern P YevalSast_linearizeY___main_0___ ();
extern P YevalSast_linearizeY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_box_reference_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_8) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_9) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),o_);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_10) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
    T2 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_11) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),T1,VARREF(YevalSast_linearizeYbox_form),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_12) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_13) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_14) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_loop_15) {
  P res_,bindings_;
  P creatorF2739;
  P bindingF2738;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(0),res_);
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    bindingF2738 = T5;
    T7 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF2738);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF2738);
      T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T10);
      creatorF2739 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF2739,res_);
      T13 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T12;
      a2 = T13;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T8 = T11;
      T6 = T8;
    } else {
      T15 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = res_;
      a2 = T15;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T6 = T14;
    }
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boxify_mutable_bindings_16) {
  P form_,bindings_;
  P loopF2740;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_15,2);
  loopF2740 = T2;
  FUNINIT(loopF2740, 2,form_,loopF2740);
  T3 = CALL2(0,loopF2740,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_17) {
  P b_;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_unconstrained_typeQ_18) {
  P b_;
  P tmpF2741;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_30));
  tmpF2741 = T1;
  if (tmpF2741 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_31));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_19) {
  P o_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_do_analysisX_20) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSastYast_walk),VARREF(YevalSast_linearizeYdo_analysisX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_analysisX_21) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYdo_do_analysisX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_analysisX_22) {
  P o_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(YevalSast_linearizeYdo_do_analysisX),o_);
  T1 = CALL1(1,VARREF(YevalSastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T2 = CALL2(1,VARREF(YevalSastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_23) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_type),x_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_analysisX_24) {
  P o_;
  P tmpF2746;
  P tmpF2745;
  P tmpF2744;
  P tmpF2743;
  P metF2742;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(YevalSast_linearizeYdo_do_analysisX),o_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),T5);
    T3 = CALL1(1,VARREF(YevalSastYbinding_value),T4);
    metF2742 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF2742,VARREF(YevalSastYLast_functionG));
    tmpF2743 = T8;
    if (tmpF2743 != YPfalse) {
      T12 = fun_23;
      T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF2742);
      T11 = CALL2(1,VARREF(YgooScolsScolYallQ),T12,T13);
      tmpF2744 = T11;
      if (tmpF2744 != YPfalse) {
        T17 = CALL1(1,VARREF(YevalSastYfunction_value),metF2742);
        T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T17);
        tmpF2745 = T16;
        if (tmpF2745 != YPfalse) {
          T21 = CALL1(1,VARREF(YevalSastYfunction_naryQ),metF2742);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF2746 = T20;
          if (tmpF2746 != YPfalse) {
            T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF2742);
            T26 = CALL1(1,VARREF(YgooStypesYlen),T27);
            T23 = CALL2(1,VARREF(YgooSmathYE),T24,T26);
            T22 = T23;
          } else {
            T22 = YPfalse;
          }
          T19 = T22;
          T18 = T19;
        } else {
          T18 = YPfalse;
        }
        T15 = T18;
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
      T10 = T14;
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T7 = T9;
    if (T7 != YPfalse) {
      T28 = CALL2(1,VARREF(YevalSastYapplication_knownQ_setter),YPtrue,o_);
      T6 = T28;
    } else {
      T6 = YPfalse;
    }
    T2 = T6;
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_ast_25) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYdo_analysisX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_26) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_27) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_28) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_29) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_liftX_30) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_31) {
  P o_,flat_fun_,bindings_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_32) {
  P o_,flat_fun_,bindings_;
  P offsetF2748;
  P bF2747;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF2747 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF2747);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF2748 = T5;
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF2747,VARREF(YevalSast_linearizeYreference_offset),offsetF2748,VARREF(YevalSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_33) {
  P freeT_;
  P tailF2749;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF2749 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF2749);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF2749;
    freeT_ = a1;
    goto loop;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_34) {
  P i_,freeT_;
  P addF2751;
  P new_envF2750;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfree_environmentG));
    T3 = CALL2(1,VARREF(YevalSastYfree_environment),FREEREF(0),T4);
    new_envF2750 = T3;
    T6 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF2750,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_33,2);
      addF2751 = T9;
      FUNINIT(addF2751, 2,new_envF2750,addF2751);
      T11 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF2751,T11);
      T8 = T10;
    }
    T2 = i_;
    T0 = T2;
  } else {
    T14 = CALL1(1,VARREF(YevalSastYreference_binding),FREEREF(0));
    T16 = CALL1(1,VARREF(Yhead),freeT_);
    T15 = CALL1(1,VARREF(YevalSastYreference_binding),T16);
    T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,T15);
    if (T13 != YPfalse) {
      T12 = i_;
    } else {
      T18 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T19 = CALL1(1,VARREF(Ytail),freeT_);
      a1 = T18;
      a2 = T19;
      i_ = a1;
      freeT_ = a2;
      goto loop;
      T12 = T17;
    }
    T0 = T12;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_free_bindingX_35) {
  P flat_fun_,ref_;
  P checkF2752;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_34,3);
  checkF2752 = T1;
  FUNINIT(checkF2752, 3,ref_,flat_fun_,checkF2752);
  T3 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF2752,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_36) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF2753;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,bindings_);
  new_bindingsF2753 = T3;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF2753);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_37) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF2754;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF2754 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF2754);
  T5 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF2754);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_38) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_39) {
  P o_,flat_fun_,bindings_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_40) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_program_form_41) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_42) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_43) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_44) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_bindings_46) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_bindings_setter_47) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_49) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_50) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_52) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_53) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_54) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_55) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_57) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_58) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_60) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_61) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_62) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_63) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_64) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_65) {
  P ss_,r_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),FREEREF(0));
    T2 = CALL2(0,FREEREF(1),T3,r_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),ss_);
    T7 = CALL1(1,VARREF(Yhead),ss_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,r_);
    a1 = T5;
    a2 = T6;
    ss_ = a1;
    r_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_66) {
  P s_,r_;
  P innerF2755;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),r_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_inner_65,3);
    innerF2755 = T4;
    FUNINIT(innerF2755, 3,s_,FREEREF(0),innerF2755);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF2755,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_67) {
  P o_;
  P loopF2756;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_66,1);
  loopF2756 = T1;
  FUNINIT(loopF2756, 1,loopF2756);
  T2 = CALL2(0,loopF2756,o_,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_69) {
  P programs_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(programs_, 0);
loop:
  T1 = fun_68;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_71) {
  P o_;
  P resultF2758;
  P formsF2757;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T2);
  formsF2757 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF2758 = T4;
  T7 = FUNFAB(fun_70,1,resultF2758);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF2757);
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),T6);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T5,resultF2758);
  T3 = resultF2758;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_72) {
  P o_,form_,result_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_73) {
  P o_,form_,result_;
  P x_1462F2768;
  P qbF2767;
  P probeF2766;
  P indexF2765;
  P qbTF2764;
  P tmpF2763;
  P tmpF2762;
  P tmpF2761;
  P tmpF2760;
  P valueF2759;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF2759 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2759,YPfalse);
  tmpF2760 = T4;
  if (tmpF2760 != YPfalse) {
    T5 = tmpF2760;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2759,YPtrue);
    tmpF2761 = T7;
    if (tmpF2761 != YPfalse) {
      T8 = tmpF2761;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2759,Ynil);
      tmpF2762 = T10;
      if (tmpF2762 != YPfalse) {
        T11 = tmpF2762;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF2759,VARREF(YLintG));
        tmpF2763 = T13;
        if (tmpF2763 != YPfalse) {
          T14 = tmpF2763;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF2759,VARREF(YLchrG));
          T14 = T15;
        }
        T12 = T14;
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T17 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),result_);
    qbTF2764 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF2764);
    indexF2765 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF2764,valueF2759,YPfalse);
    probeF2766 = T21;
    if (probeF2766 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF2766);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_126),VARREF(YevalSastYbinding_name),indexF2765,VARREF(YevalSastYbinding_info),valueF2759);
      qbF2767 = T25;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF2767,qbTF2764,valueF2759);
      x_1462F2768 = form_;
      T28 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),x_1462F2768);
      T27 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T28,qbF2767);
      T26 = CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T27,x_1462F2768);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF2767);
      T24 = T29;
      T22 = T24;
    }
    T20 = T22;
    T18 = T20;
    T16 = T18;
    T2 = T16;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_74) {
  P o_,form_,result_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_75) {
  P binding_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(YevalSastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_76) {
  P o_,form_,result_;
  P indexF2771;
  P free_bindingsF2770;
  P freeF2769;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_75,2,form_,result_);
  T7 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
  T9 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  freeF2769 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF2769);
  free_bindingsF2770 = T11;
  T13 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF2771 = T13;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF2771,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF2770,o_);
  T14 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF2771,VARREF(YevalSast_linearizeYclosure_creation_free),freeF2769);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_77) {
  P o_,form_,result_;
  P x_1463F2773;
  P primF2772;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF2772 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),primF2772);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T2,primF2772);
  x_1463F2773 = result_;
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1463F2773);
  T5 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,primF2772);
  T4 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T5,x_1463F2773);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_78) {
  P form_,result_,x_;
  P x_1465F2776;
  P x_1464F2775;
  P new_indexF2774;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF2774 = T1;
  x_1464F2775 = result_;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1464F2775);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T4,x_1464F2775);
  x_1465F2776 = form_;
  T8 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),x_1465F2776);
  T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,x_);
  T6 = CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T7,x_1465F2776);
  T0 = new_indexF2774;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_79) {
  P o_,max_count_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_80) {
  P res_,es_,count_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(es_, 1);
  ARG(count_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),es_);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T4 = CALL1(1,VARREF(YevalSastYsequentialize),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
      T10 = CALL1(1,VARREF(YevalSastYsequentialize),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,FREEREF(0));
      T8 = CALL2(0,FREEREF(2),T9,es_);
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T15 = CALL1(1,VARREF(Yhead),es_);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,res_);
        T16 = CALL1(1,VARREF(Ytail),es_);
        T17 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
        a1 = T14;
        a2 = T16;
        a3 = T17;
        res_ = a1;
        es_ = a2;
        count_ = a3;
        goto loop;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T6 = T12;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_81) {
  P forms_,s_;
  P innerF2777;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_80,4);
  innerF2777 = T1;
  FUNINIT(innerF2777, 4,forms_,FREEREF(0),FREEREF(1),innerF2777);
  T2 = CALL3(0,innerF2777,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_82) {
  P o_,max_count_;
  P loopF2778;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_81,2);
  loopF2778 = T1;
  FUNINIT(loopF2778, 2,max_count_,loopF2778);
  T2 = CALL2(0,loopF2778,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P calls_,defns_,i_,forms_;
  P callF2782;
  P defnF2781;
  P bindingF2780;
  P nameF2779;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(calls_, 0);
  ARG(defns_, 1);
  ARG(i_, 2);
  ARG(forms_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),forms_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),calls_);
    T4 = CALL1(1,VARREF(YevalSastYsequentialize),T5);
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    T3 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),T4,VARREF(YevalSast_linearizeYform_definitions),T6);
    CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T8 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_141),i_,LITREF(lit_142));
    nameF2779 = T8;
    T10 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(1),nameF2779,YPfalse,LITREF(lit_143));
    bindingF2780 = T10;
    T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF2779,YPint((P)4));
    T14 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2780,VARREF(YevalSastYfunction_debug_name),T13,VARREF(YevalSastYfunction_signature),T14,VARREF(YevalSastYfunction_body),T15);
    defnF2781 = T12;
    T18 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF2780,VARREF(YevalSastYapplication_arguments),T18,VARREF(YevalSastYapplication_tailQ),YPfalse);
    callF2782 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF2782,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF2781,defns_);
    T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T23 = CALL1(1,VARREF(Ytail),forms_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    a4 = T23;
    calls_ = a1;
    defns_ = a2;
    i_ = a3;
    forms_ = a4;
    goto loop;
    T16 = T19;
    T11 = T16;
    T9 = T11;
    T7 = T9;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_84) {
  P o_,r_,max_count_;
  P loopF2785;
  P base_indexF2784;
  P formsF2783;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T2,max_count_);
  formsF2783 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF2784 = T4;
  T7 = FUNSHELL(1,fun_loop_83,3);
  loopF2785 = T7;
  FUNINIT(loopF2785, 3,o_,r_,loopF2785);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T8 = CALL4(0,loopF2785,Ynil,T9,YPint((P)0),formsF2783);
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assoc_key_85) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_86) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_87) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_88) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYassoc) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),x_,VARREF(YevalSast_linearizeYassoc_value),y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_90) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YevalSast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_92) {
  P o_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = fun_91;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_93) {
  P o_,flat_fun_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_94) {
  P o_,flat_fun_,r_;
  P bF2787;
  P bindingF2786;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF2786 = T1;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF2786,r_);
  bF2787 = T3;
  if (bF2787 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF2787);
    T5 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),T6);
    T4 = T5;
  } else {
    T4 = o_;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_95) {
  P z_,x_,y_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = z_;
  } else {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T6 = CALL1(1,VARREF(Yhead),y_);
    T4 = CALL2(1,VARREF(YevalSast_linearizeYassoc),T5,T6);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,z_);
    T7 = CALL1(1,VARREF(Ytail),x_);
    T8 = CALL1(1,VARREF(Ytail),y_);
    a1 = T3;
    a2 = T7;
    a3 = T8;
    z_ = a1;
    x_ = a2;
    y_ = a3;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYprepend_renamings) {
  P x_,y_,r_;
  P loopF2788;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_95,1);
  loopF2788 = T1;
  FUNINIT(loopF2788, 1,loopF2788);
  T2 = CALL3(0,loopF2788,r_,x_,y_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_97) {
  P o_,flat_fun_,r_;
  P new_rF2790;
  P new_bindingsF2789;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T4);
  new_bindingsF2789 = T3;
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T7,new_bindingsF2789,r_);
  new_rF2790 = T6;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2789);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF2789,o_);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T8 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T9,flat_fun_,new_rF2790);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T8,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_98) {
  P o_,flat_fun_,r_;
  P new_rF2792;
  P new_bindingsF2791;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF2791 = T1;
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF2791,r_);
  new_rF2792 = T4;
  T7 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF2792);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,T8);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T6,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2791);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF2791,o_);
  T10 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T9 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF2792);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T9,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_99) {
  P temps_,bindings_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSastYfunction_temporaries_setter),temps_,FREEREF(0));
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),temps_,T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = temps_;
      a2 = T7;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T6;
    } else {
      T10 = CALL1(1,VARREF(Yhead),bindings_);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,temps_);
      T11 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T9;
      a2 = T11;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_temporary_variablesX_100) {
  P flat_fun_,new_bindings_;
  P adjoinF2793;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_99,2);
  adjoinF2793 = T1;
  FUNINIT(adjoinF2793, 2,flat_fun_,adjoinF2793);
  T3 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF2793,T3,new_bindings_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_101) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_102) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_renamed_binding_103) {
  P binding_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  DYNSET(YevalSast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YevalSastYbinding_type),binding_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_type),T3,VARREF(YevalSastYbinding_dynamic_extentQ),T4,VARREF(YevalSastYbinding_index),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_104) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P T0,T1,T2;
LINK_STACK();
loop:
  VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_104;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_107) {
  P o_,register_passiveQ_;
  P x_1466F2794;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1466F2794 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_105,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_106,1,x_1466F2794);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,flat_fun_,valQ_;
  P tmpF2796;
  P tmpF2795;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF2795 = valQ_;
  if (tmpF2795 != YPfalse) {
    tmpF2796 = flat_fun_;
    if (tmpF2796 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYprogram_register),o_);
      T5 = CALL1(1,VARREF(Ynot),T6);
      T4 = T5;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(YevalSastYfunction_registers),flat_fun_);
    T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
    CALL2(1,VARREF(YevalSastYprogram_register_setter),T7,o_);
    T10 = CALL1(1,VARREF(YevalSastYfunction_registers),flat_fun_);
    T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),T10,o_);
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_109) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_110) {
  P x_;
  P tmpF2798;
  P next_xF2797;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL1(1,VARREF(Ytail),x_);
    next_xF2797 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF2798 = FREEREF(2);
    if (tmpF2798 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF2797);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF2797;
    x_ = a1;
    goto loop;
    T2 = T8;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_111) {
  P o_,flat_fun_,valQ_;
  P loopF2799;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_110,4);
  loopF2799 = T1;
  FUNINIT(loopF2799, 4,o_,flat_fun_,valQ_,loopF2799);
  T2 = CALL1(0,loopF2799,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_112) {
  P o_,flat_fun_,valQ_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  if (VARREF(YevalSast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  } else {
  }
  T1 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_113) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_114) {
  P o_,flat_fun_,valQ_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_113,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_115) {
  P o_,flat_fun_,valQ_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_registersX),flat_fun_,YPtrue);
  T2 = CALL1(1,VARREF(YevalSastYfunction_data_refs),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_116) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_contains_funQ_117) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_118) {
  P y_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(YevalSastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalSastYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_119) {
  P return_;
  P walkF2800;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_118,2);
  walkF2800 = T0;
  FUNINIT(walkF2800, 2,return_,walkF2800);
  T1 = CALL2(1,VARREF(YevalSastYast_walk),walkF2800,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_120) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_119,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YevalSast_linearizeY___main_0___() {
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
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<box-read>");
  T1 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YevalSast_linearizeYLbox_readG,T0);
  lit_1 = YPPsym((P)"box-reference");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_0 = YPmet(FUNCODEREF(fun_box_reference_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSast_linearizeYbox_reference);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSast_linearizeYbox_reference);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_box_reference_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSast_linearizeYbox_reference,T3);
  lit_3 = YPPsym((P)"box-reference-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T7 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_1 = YPmet(FUNCODEREF(fun_box_reference_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSast_linearizeYbox_reference_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSast_linearizeYbox_reference_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_box_reference_setter_1;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSast_linearizeYbox_reference_setter,T8);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<box-write>");
  T13 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_5),T13);
  VARSET(YevalSast_linearizeYLbox_writeG,T12);
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_2 = YPmet(FUNCODEREF(fun_box_reference_2),LITREF(lit_1),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YevalSast_linearizeYbox_reference);
  if (T17 != YPfalse) {
    T16 = VARREF(YevalSast_linearizeYbox_reference);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_box_reference_2;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YevalSast_linearizeYbox_reference,T15);
  lit_7 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_3 = YPmet(FUNCODEREF(fun_box_reference_setter_3),LITREF(lit_3),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YevalSast_linearizeYbox_reference_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YevalSast_linearizeYbox_reference_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_box_reference_setter_3;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YevalSast_linearizeYbox_reference_setter,T20);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_8 = YPPsym((P)"box-form");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_4 = YPmet(FUNCODEREF(fun_box_form_4),LITREF(lit_8),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSast_linearizeYbox_form);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSast_linearizeYbox_form);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_box_form_4;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSast_linearizeYbox_form,T25);
  lit_10 = YPPsym((P)"box-form-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_5 = YPmet(FUNCODEREF(fun_box_form_setter_5),LITREF(lit_10),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSast_linearizeYbox_form_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSast_linearizeYbox_form_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_box_form_setter_5;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSast_linearizeYbox_form_setter,T30);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_form),VARREF(YevalSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"<box-creation>");
  T35 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T34 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_12),T35);
  VARSET(YevalSast_linearizeYLbox_creationG,T34);
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_6 = YPmet(FUNCODEREF(fun_box_reference_6),LITREF(lit_1),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSast_linearizeYbox_reference);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSast_linearizeYbox_reference);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_box_reference_6;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSast_linearizeYbox_reference,T37);
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_7 = YPmet(FUNCODEREF(fun_box_reference_setter_7),LITREF(lit_3),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSast_linearizeYbox_reference_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSast_linearizeYbox_reference_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_box_reference_setter_7;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSast_linearizeYbox_reference_setter,T42);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"insert-box!");
  lit_16 = YPPlist(1,YPPsym((P)"o"));
  T46 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_8 = YPmet(FUNCODEREF(fun_insert_boxX_8),LITREF(lit_15),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_insert_boxX_8;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSast_linearizeYinsert_boxX,T47);
  lit_17 = YPPlist(1,YPPsym((P)"o"));
  T51 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_9 = YPmet(FUNCODEREF(fun_insert_boxX_9),LITREF(lit_15),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_insert_boxX_9;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSast_linearizeYinsert_boxX,T52);
  lit_18 = YPPlist(1,YPPsym((P)"o"));
  T56 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_10 = YPmet(FUNCODEREF(fun_insert_boxX_10),LITREF(lit_15),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_insert_boxX_10;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSast_linearizeYinsert_boxX,T57);
  lit_19 = YPPlist(1,YPPsym((P)"o"));
  T61 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_11 = YPmet(FUNCODEREF(fun_insert_boxX_11),LITREF(lit_15),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_insert_boxX_11;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSast_linearizeYinsert_boxX,T62);
  lit_20 = YPPlist(1,YPPsym((P)"o"));
  T66 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_12 = YPmet(FUNCODEREF(fun_insert_boxX_12),LITREF(lit_15),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_insert_boxX_12;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSast_linearizeYinsert_boxX,T67);
  lit_21 = YPPlist(1,YPPsym((P)"o"));
  T71 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_13 = YPmet(FUNCODEREF(fun_insert_boxX_13),LITREF(lit_15),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_insert_boxX_13;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSast_linearizeYinsert_boxX,T72);
  lit_22 = YPPlist(1,YPPsym((P)"o"));
  T76 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),LITREF(lit_15),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_insert_boxX_14;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSast_linearizeYinsert_boxX,T77);
  lit_23 = YPPsym((P)"boxify-mutable-bindings");
  lit_24 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"bindings"));
  lit_25 = YPPsym((P)"loop");
  lit_26 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"bindings"));
  T82 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_15 = YPmet(FUNCODEREF(fun_loop_15),LITREF(lit_25),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_16 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_16),LITREF(lit_23),T81,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSast_linearizeYboxify_mutable_bindings);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSast_linearizeYboxify_mutable_bindings);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_boxify_mutable_bindings_16;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSast_linearizeYboxify_mutable_bindings,T83);
  lit_27 = YPPsym((P)"unconstrained-type?");
  lit_28 = YPPlist(1,YPPsym((P)"b"));
  T87 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_17 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_17),LITREF(lit_27),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_unconstrained_typeQ_17;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T88);
  lit_29 = YPPlist(1,YPPsym((P)"b"));
  lit_30 = YPPsym((P)"goo/boot");
  lit_31 = YPPsym((P)"<any>");
  T92 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_18 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_18),LITREF(lit_27),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_unconstrained_typeQ_18;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T93);
  lit_32 = YPPlist(1,YPPsym((P)"o"));
  T97 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YevalSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_19 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_19),LITREF(lit_27),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_unconstrained_typeQ_19;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T98);
  lit_33 = YPPsym((P)"do-do-analysis!");
  lit_34 = YPPlist(1,YPPsym((P)"o"));
  T102 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_analysisX_20 = YPmet(FUNCODEREF(fun_do_do_analysisX_20),LITREF(lit_33),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSast_linearizeYdo_do_analysisX);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSast_linearizeYdo_do_analysisX);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_do_do_analysisX_20;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSast_linearizeYdo_do_analysisX,T103);
  lit_35 = YPPsym((P)"do-analysis!");
  lit_36 = YPPlist(1,YPPsym((P)"o"));
  T107 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_21 = YPmet(FUNCODEREF(fun_do_analysisX_21),LITREF(lit_35),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_do_analysisX_21;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSast_linearizeYdo_analysisX,T108);
  lit_37 = YPPlist(1,YPPsym((P)"o"));
  T112 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_22 = YPmet(FUNCODEREF(fun_do_analysisX_22),LITREF(lit_35),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_do_analysisX_22;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSast_linearizeYdo_analysisX,T113);
  lit_38 = YPPlist(1,YPPsym((P)"o"));
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  T118 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_24 = YPmet(FUNCODEREF(fun_do_analysisX_24),LITREF(lit_35),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_do_analysisX_24;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSast_linearizeYdo_analysisX,T119);
  lit_40 = YPPsym((P)"analyze-ast");
  lit_41 = YPPlist(1,YPPsym((P)"o"));
  T123 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_ast_25 = YPmet(FUNCODEREF(fun_analyze_ast_25),LITREF(lit_40),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YevalSast_linearizeYanalyze_ast);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSast_linearizeYanalyze_ast);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_analyze_ast_25;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSast_linearizeYanalyze_ast,T124);
  lit_42 = YPPsym((P)"<free-reference>");
  T129 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_42),T129);
  VARSET(YevalSast_linearizeYLfree_referenceG,T128);
  lit_43 = YPPsym((P)"reference-offset");
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T130 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_26 = YPmet(FUNCODEREF(fun_reference_offset_26),LITREF(lit_43),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSast_linearizeYreference_offset);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSast_linearizeYreference_offset);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_reference_offset_26;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSast_linearizeYreference_offset,T131);
  lit_45 = YPPsym((P)"reference-offset-setter");
  lit_46 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T136 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T135 = YPsig(LITREF(lit_46),YPPlist(2,T136,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_27 = YPmet(FUNCODEREF(fun_reference_offset_setter_27),LITREF(lit_45),T135,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSast_linearizeYreference_offset_setter);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSast_linearizeYreference_offset_setter);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_reference_offset_setter_27;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSast_linearizeYreference_offset_setter,T137);
  T141 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_offset),VARREF(YevalSast_linearizeYreference_offset_setter),T141,VARREF(YPprop_unbound_error));
  lit_47 = YPPsym((P)"reference-self?");
  lit_48 = YPPlist(1,YPPsym((P)"_x"));
  T142 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_28 = YPmet(FUNCODEREF(fun_reference_selfQ_28),LITREF(lit_47),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YevalSast_linearizeYreference_selfQ);
  if (T145 != YPfalse) {
    T144 = VARREF(YevalSast_linearizeYreference_selfQ);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_reference_selfQ_28;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YevalSast_linearizeYreference_selfQ,T143);
  lit_49 = YPPsym((P)"reference-self?-setter");
  lit_50 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T147 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLlogG),VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_29 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_29),LITREF(lit_49),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YevalSast_linearizeYreference_selfQ_setter);
  if (T150 != YPfalse) {
    T149 = VARREF(YevalSast_linearizeYreference_selfQ_setter);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_reference_selfQ_setter_29;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YevalSast_linearizeYreference_selfQ_setter,T148);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_selfQ),VARREF(YevalSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_51 = YPPsym((P)"lift!");
  lit_52 = YPPlist(1,YPPsym((P)"o"));
  T152 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_30 = YPmet(FUNCODEREF(fun_liftX_30),LITREF(lit_51),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSast_linearizeYliftX);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSast_linearizeYliftX);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_liftX_30;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSast_linearizeYliftX,T153);
  lit_53 = YPPsym((P)"lift-procedures!");
  lit_54 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T157 = YPsig(LITREF(lit_54),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_31 = YPmet(FUNCODEREF(fun_lift_proceduresX_31),LITREF(lit_53),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_lift_proceduresX_31;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSast_linearizeYlift_proceduresX,T158);
  lit_55 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T162 = YPsig(LITREF(lit_55),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_32 = YPmet(FUNCODEREF(fun_lift_proceduresX_32),LITREF(lit_53),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_lift_proceduresX_32;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSast_linearizeYlift_proceduresX,T163);
  lit_56 = YPPsym((P)"adjoin-free-binding!");
  lit_57 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"ref"));
  lit_58 = YPPsym((P)"check");
  lit_59 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"free*"));
  lit_60 = YPPsym((P)"add");
  lit_61 = YPPlist(1,YPPsym((P)"free*"));
  T169 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_33 = YPmet(FUNCODEREF(fun_add_33),LITREF(lit_60),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_34 = YPmet(FUNCODEREF(fun_check_34),LITREF(lit_58),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_35 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_35),LITREF(lit_56),T167,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSast_linearizeYadjoin_free_bindingX);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSast_linearizeYadjoin_free_bindingX);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_adjoin_free_bindingX_35;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSast_linearizeYadjoin_free_bindingX,T170);
  lit_62 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T174 = YPsig(LITREF(lit_62),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_36 = YPmet(FUNCODEREF(fun_lift_proceduresX_36),LITREF(lit_53),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_lift_proceduresX_36;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSast_linearizeYlift_proceduresX,T175);
  lit_63 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T179 = YPsig(LITREF(lit_63),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_37 = YPmet(FUNCODEREF(fun_lift_proceduresX_37),LITREF(lit_53),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_lift_proceduresX_37;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSast_linearizeYlift_proceduresX,T180);
  lit_64 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T184 = YPsig(LITREF(lit_64),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_38 = YPmet(FUNCODEREF(fun_lift_proceduresX_38),LITREF(lit_53),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_lift_proceduresX_38;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSast_linearizeYlift_proceduresX,T185);
  lit_65 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T189 = YPsig(LITREF(lit_65),YPPlist(3,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_39 = YPmet(FUNCODEREF(fun_lift_proceduresX_39),LITREF(lit_53),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_lift_proceduresX_39;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSast_linearizeYlift_proceduresX,T190);
  lit_66 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T194 = YPsig(LITREF(lit_66),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_40 = YPmet(FUNCODEREF(fun_lift_proceduresX_40),LITREF(lit_53),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_lift_proceduresX_40;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalSast_linearizeYlift_proceduresX,T195);
  lit_67 = YPPsym((P)"<flattened-program>");
  T200 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T199 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_67),T200);
  VARSET(YevalSast_linearizeYLflattened_programG,T199);
  lit_68 = YPPsym((P)"program-form");
  lit_69 = YPPlist(1,YPPsym((P)"_x"));
  T201 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_41 = YPmet(FUNCODEREF(fun_program_form_41),LITREF(lit_68),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSast_linearizeYprogram_form);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSast_linearizeYprogram_form);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_program_form_41;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSast_linearizeYprogram_form,T202);
  lit_70 = YPPsym((P)"program-form-setter");
  lit_71 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T207 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  T206 = YPsig(LITREF(lit_71),YPPlist(2,T207,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_42 = YPmet(FUNCODEREF(fun_program_form_setter_42),LITREF(lit_70),T206,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSast_linearizeYprogram_form_setter);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSast_linearizeYprogram_form_setter);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_program_form_setter_42;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSast_linearizeYprogram_form_setter,T208);
  T212 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_form),VARREF(YevalSast_linearizeYprogram_form_setter),T212,VARREF(YPprop_unbound_error));
  lit_72 = YPPsym((P)"program-quotations");
  lit_73 = YPPlist(1,YPPsym((P)"_x"));
  T213 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_43 = YPmet(FUNCODEREF(fun_program_quotations_43),LITREF(lit_72),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSast_linearizeYprogram_quotations);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSast_linearizeYprogram_quotations);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_program_quotations_43;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSast_linearizeYprogram_quotations,T214);
  lit_74 = YPPsym((P)"program-quotations-setter");
  lit_75 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T218 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_44 = YPmet(FUNCODEREF(fun_program_quotations_setter_44),LITREF(lit_74),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSast_linearizeYprogram_quotations_setter);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSast_linearizeYprogram_quotations_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_program_quotations_setter_44;
  T219 = XCALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YevalSast_linearizeYprogram_quotations_setter,T219);
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T223 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T223,ENVNUL,PNUL,YPfalse);
  T224 = fun_45;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_quotations),VARREF(YevalSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T224);
  lit_77 = YPPsym((P)"program-bindings");
  lit_78 = YPPlist(1,YPPsym((P)"_x"));
  T225 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_bindings_46 = YPmet(FUNCODEREF(fun_program_bindings_46),LITREF(lit_77),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YevalSast_linearizeYprogram_bindings);
  if (T228 != YPfalse) {
    T227 = VARREF(YevalSast_linearizeYprogram_bindings);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_program_bindings_46;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YevalSast_linearizeYprogram_bindings,T226);
  lit_79 = YPPsym((P)"program-bindings-setter");
  lit_80 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T230 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_bindings_setter_47 = YPmet(FUNCODEREF(fun_program_bindings_setter_47),LITREF(lit_79),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSast_linearizeYprogram_bindings_setter);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSast_linearizeYprogram_bindings_setter);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_program_bindings_setter_47;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSast_linearizeYprogram_bindings_setter,T231);
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T235 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T235,ENVNUL,PNUL,YPfalse);
  T236 = fun_48;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_bindings),VARREF(YevalSast_linearizeYprogram_bindings_setter),VARREF(YLanyG),T236);
  lit_82 = YPPsym((P)"program-definitions");
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T237 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_49 = YPmet(FUNCODEREF(fun_program_definitions_49),LITREF(lit_82),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YevalSast_linearizeYprogram_definitions);
  if (T240 != YPfalse) {
    T239 = VARREF(YevalSast_linearizeYprogram_definitions);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_program_definitions_49;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YevalSast_linearizeYprogram_definitions,T238);
  lit_84 = YPPsym((P)"program-definitions-setter");
  lit_85 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T242 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_50 = YPmet(FUNCODEREF(fun_program_definitions_setter_50),LITREF(lit_84),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YevalSast_linearizeYprogram_definitions_setter);
  if (T245 != YPfalse) {
    T244 = VARREF(YevalSast_linearizeYprogram_definitions_setter);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_program_definitions_setter_50;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YevalSast_linearizeYprogram_definitions_setter,T243);
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  T247 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T247,ENVNUL,PNUL,YPfalse);
  T248 = fun_51;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_definitions),VARREF(YevalSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T248);
  lit_87 = YPPsym((P)"<top-level-form>");
  T252 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T251 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_87),T252);
  T250 = VARSET(YevalSast_linearizeYLtop_level_formG,T251);
  T249 = T250;
  return T249;
}

P YevalSast_linearizeY___main_1___() {
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
  P T256,T257,T258,T259,T260,T261,T262,T263,T264;
DEFCREGS();
loop:
  lit_88 = YPPsym((P)"form-program");
  lit_89 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_52 = YPmet(FUNCODEREF(fun_form_program_52),LITREF(lit_88),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_linearizeYform_program);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_linearizeYform_program);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_form_program_52;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_linearizeYform_program,T1);
  lit_90 = YPPsym((P)"form-program-setter");
  lit_91 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_53 = YPmet(FUNCODEREF(fun_form_program_setter_53),LITREF(lit_90),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSast_linearizeYform_program_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSast_linearizeYform_program_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_form_program_setter_53;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSast_linearizeYform_program_setter,T6);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),VARREF(YevalSast_linearizeYform_program_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_92 = YPPsym((P)"form-quotations");
  lit_93 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_54 = YPmet(FUNCODEREF(fun_form_quotations_54),LITREF(lit_92),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSast_linearizeYform_quotations);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSast_linearizeYform_quotations);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_form_quotations_54;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSast_linearizeYform_quotations,T11);
  lit_94 = YPPsym((P)"form-quotations-setter");
  lit_95 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T15 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_55 = YPmet(FUNCODEREF(fun_form_quotations_setter_55),LITREF(lit_94),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSast_linearizeYform_quotations_setter);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSast_linearizeYform_quotations_setter);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_form_quotations_setter_55;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSast_linearizeYform_quotations_setter,T16);
  lit_96 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T21 = fun_56;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_quotations),VARREF(YevalSast_linearizeYform_quotations_setter),VARREF(YLanyG),T21);
  lit_97 = YPPsym((P)"form-definitions");
  lit_98 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_57 = YPmet(FUNCODEREF(fun_form_definitions_57),LITREF(lit_97),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSast_linearizeYform_definitions);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSast_linearizeYform_definitions);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_form_definitions_57;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSast_linearizeYform_definitions,T23);
  lit_99 = YPPsym((P)"form-definitions-setter");
  lit_100 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_58 = YPmet(FUNCODEREF(fun_form_definitions_setter_58),LITREF(lit_99),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSast_linearizeYform_definitions_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSast_linearizeYform_definitions_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_form_definitions_setter_58;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSast_linearizeYform_definitions_setter,T28);
  lit_101 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T33 = fun_59;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_definitions),VARREF(YevalSast_linearizeYform_definitions_setter),VARREF(YLanyG),T33);
  lit_102 = YPPsym((P)"<closure-creation>");
  T35 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T34 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_102),T35);
  VARSET(YevalSast_linearizeYLclosure_creationG,T34);
  lit_103 = YPPsym((P)"closure-creation-index");
  lit_104 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_60 = YPmet(FUNCODEREF(fun_closure_creation_index_60),LITREF(lit_103),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSast_linearizeYclosure_creation_index);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSast_linearizeYclosure_creation_index);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_closure_creation_index_60;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSast_linearizeYclosure_creation_index,T37);
  lit_105 = YPPsym((P)"closure-creation-index-setter");
  lit_106 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_61 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_61),LITREF(lit_105),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSast_linearizeYclosure_creation_index_setter);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSast_linearizeYclosure_creation_index_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_closure_creation_index_setter_61;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSast_linearizeYclosure_creation_index_setter,T42);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),VARREF(YevalSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_107 = YPPsym((P)"closure-creation-free");
  lit_108 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_62 = YPmet(FUNCODEREF(fun_closure_creation_free_62),LITREF(lit_107),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YevalSast_linearizeYclosure_creation_free);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSast_linearizeYclosure_creation_free);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_closure_creation_free_62;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSast_linearizeYclosure_creation_free,T47);
  lit_109 = YPPsym((P)"closure-creation-free-setter");
  lit_110 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_63 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_63),LITREF(lit_109),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSast_linearizeYclosure_creation_free_setter);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSast_linearizeYclosure_creation_free_setter);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_closure_creation_free_setter_63;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSast_linearizeYclosure_creation_free_setter,T52);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_free),VARREF(YevalSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_111 = YPPsym((P)"flatten-seqs");
  lit_112 = YPPlist(1,YPPsym((P)"o"));
  T56 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_64 = YPmet(FUNCODEREF(fun_flatten_seqs_64),LITREF(lit_111),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSast_linearizeYflatten_seqs);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSast_linearizeYflatten_seqs);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_flatten_seqs_64;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSast_linearizeYflatten_seqs,T57);
  lit_113 = YPPlist(1,YPPsym((P)"o"));
  lit_114 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"r"));
  lit_115 = YPPsym((P)"inner");
  lit_116 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"r"));
  T63 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_65 = YPmet(FUNCODEREF(fun_inner_65),LITREF(lit_115),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_66 = YPmet(FUNCODEREF(fun_loop_66),LITREF(lit_25),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YevalSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_67 = YPmet(FUNCODEREF(fun_flatten_seqs_67),LITREF(lit_111),T61,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSast_linearizeYflatten_seqs);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSast_linearizeYflatten_seqs);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_flatten_seqs_67;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSast_linearizeYflatten_seqs,T64);
  lit_117 = YPPsym((P)"as-top-level-forms");
  lit_118 = YPPlist(1,YPPsym((P)"programs"));
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_69 = YPmet(FUNCODEREF(fun_as_top_level_forms_69),LITREF(lit_117),T68,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSast_linearizeYas_top_level_forms);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSast_linearizeYas_top_level_forms);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_as_top_level_forms_69;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSast_linearizeYas_top_level_forms,T70);
  lit_120 = YPPsym((P)"extract-things!");
  lit_121 = YPPlist(1,YPPsym((P)"o"));
  lit_122 = YPPlist(1,YPPsym((P)"form"));
  T75 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_71 = YPmet(FUNCODEREF(fun_extract_thingsX_71),LITREF(lit_120),T74,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSast_linearizeYextract_thingsX);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSast_linearizeYextract_thingsX);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_extract_thingsX_71;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSast_linearizeYextract_thingsX,T76);
  lit_123 = YPPsym((P)"extract!");
  lit_124 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T80 = YPsig(LITREF(lit_124),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_72 = YPmet(FUNCODEREF(fun_extractX_72),LITREF(lit_123),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSast_linearizeYextractX);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_extractX_72;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSast_linearizeYextractX,T81);
  lit_125 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_126 = YPPsym((P)"quotation");
  T85 = YPsig(LITREF(lit_125),YPPlist(3,VARREF(YevalSastYLconstantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_73 = YPmet(FUNCODEREF(fun_extractX_73),LITREF(lit_123),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSast_linearizeYextractX);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_extractX_73;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSast_linearizeYextractX,T86);
  lit_127 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T90 = YPsig(LITREF(lit_127),YPPlist(3,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_74 = YPmet(FUNCODEREF(fun_extractX_74),LITREF(lit_123),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSast_linearizeYextractX);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_extractX_74;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSast_linearizeYextractX,T91);
  lit_128 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_129 = YPPlist(1,YPPsym((P)"binding"));
  T96 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(LITREF(lit_128),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_76 = YPmet(FUNCODEREF(fun_extractX_76),LITREF(lit_123),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSast_linearizeYextractX);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_extractX_76;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSast_linearizeYextractX,T97);
  lit_130 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T101 = YPsig(LITREF(lit_130),YPPlist(3,VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_77 = YPmet(FUNCODEREF(fun_extractX_77),LITREF(lit_123),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSast_linearizeYextractX);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_extractX_77;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSast_linearizeYextractX,T102);
  lit_131 = YPPsym((P)"adjoin-definition!");
  lit_132 = YPPlist(3,YPPsym((P)"form"),YPPsym((P)"result"),YPPsym((P)"x"));
  T106 = YPsig(LITREF(lit_132),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_78 = YPmet(FUNCODEREF(fun_adjoin_definitionX_78),LITREF(lit_131),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSast_linearizeYadjoin_definitionX);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSast_linearizeYadjoin_definitionX);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_adjoin_definitionX_78;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSast_linearizeYadjoin_definitionX,T107);
  lit_133 = YPPsym((P)"split-program");
  lit_134 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  T111 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_79 = YPmet(FUNCODEREF(fun_split_program_79),LITREF(lit_133),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSast_linearizeYsplit_program);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSast_linearizeYsplit_program);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_split_program_79;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSast_linearizeYsplit_program,T112);
  lit_135 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  lit_136 = YPPlist(2,YPPsym((P)"forms"),YPPsym((P)"s"));
  lit_137 = YPPlist(3,YPPsym((P)"res"),YPPsym((P)"es"),YPPsym((P)"count"));
  T118 = YPsig(LITREF(lit_137),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_80 = YPmet(FUNCODEREF(fun_inner_80),LITREF(lit_115),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_81 = YPmet(FUNCODEREF(fun_loop_81),LITREF(lit_25),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_82 = YPmet(FUNCODEREF(fun_split_program_82),LITREF(lit_133),T116,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSast_linearizeYsplit_program);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSast_linearizeYsplit_program);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_split_program_82;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSast_linearizeYsplit_program,T119);
  lit_138 = YPPsym((P)"closurize-main!");
  lit_139 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"max-count"));
  lit_140 = YPPlist(4,YPPsym((P)"calls"),YPPsym((P)"defns"),YPPsym((P)"i"),YPPsym((P)"forms"));
  lit_141 = YPsb((P)"---main-");
  lit_142 = YPsb((P)"---");
  lit_143 = YPPsym((P)"predefined");
  T124 = YPsig(LITREF(lit_140),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_25),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(LITREF(lit_139),YPPlist(3,VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_84 = YPmet(FUNCODEREF(fun_closurize_mainX_84),LITREF(lit_138),T123,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSast_linearizeYclosurize_mainX);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSast_linearizeYclosurize_mainX);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_closurize_mainX_84;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSast_linearizeYclosurize_mainX,T125);
  lit_144 = YPPsym((P)"<assoc>");
  T130 = (P)YPpair(VARREF(YLanyG),Ynil);
  T129 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_144),T130);
  VARSET(YevalSast_linearizeYLassocG,T129);
  lit_145 = YPPsym((P)"assoc-key");
  lit_146 = YPPlist(1,YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_85 = YPmet(FUNCODEREF(fun_assoc_key_85),LITREF(lit_145),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YevalSast_linearizeYassoc_key);
  if (T134 != YPfalse) {
    T133 = VARREF(YevalSast_linearizeYassoc_key);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_assoc_key_85;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YevalSast_linearizeYassoc_key,T132);
  lit_147 = YPPsym((P)"assoc-key-setter");
  lit_148 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T136 = YPsig(LITREF(lit_148),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_86 = YPmet(FUNCODEREF(fun_assoc_key_setter_86),LITREF(lit_147),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSast_linearizeYassoc_key_setter);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSast_linearizeYassoc_key_setter);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_assoc_key_setter_86;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSast_linearizeYassoc_key_setter,T137);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),VARREF(YevalSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_149 = YPPsym((P)"assoc-value");
  lit_150 = YPPlist(1,YPPsym((P)"_x"));
  T141 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_87 = YPmet(FUNCODEREF(fun_assoc_value_87),LITREF(lit_149),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSast_linearizeYassoc_value);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSast_linearizeYassoc_value);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_assoc_value_87;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSast_linearizeYassoc_value,T142);
  lit_151 = YPPsym((P)"assoc-value-setter");
  lit_152 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T146 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_88 = YPmet(FUNCODEREF(fun_assoc_value_setter_88),LITREF(lit_151),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSast_linearizeYassoc_value_setter);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSast_linearizeYassoc_value_setter);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_assoc_value_setter_88;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSast_linearizeYassoc_value_setter,T147);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_value),VARREF(YevalSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_153 = YPPsym((P)"assoc");
  lit_154 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T151 = YPsig(LITREF(lit_154),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSast_linearizeYLassocG),Ynil);
  YevalSast_linearizeYassoc = YPmet(FUNCODEREF(YevalSast_linearizeYassoc),LITREF(lit_153),T151,ENVNUL,PNUL,YPfalse);
  T152 = YevalSast_linearizeYassoc;
  VARSET(YevalSast_linearizeYassoc,T152);
  lit_155 = YPPsym((P)"assocq");
  lit_156 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T153 = YPsig(LITREF(lit_156),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_90 = YPmet(FUNCODEREF(fun_assocq_90),LITREF(lit_155),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YevalSast_linearizeYassocq);
  if (T156 != YPfalse) {
    T155 = VARREF(YevalSast_linearizeYassocq);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_assocq_90;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YevalSast_linearizeYassocq,T154);
  lit_157 = YPPsym((P)"gather-temporaries!");
  lit_158 = YPPlist(1,YPPsym((P)"o"));
  lit_159 = YPPlist(1,YPPsym((P)"def"));
  T159 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_92 = YPmet(FUNCODEREF(fun_gather_temporariesX_92),LITREF(lit_157),T158,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YevalSast_linearizeYgather_temporariesX);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSast_linearizeYgather_temporariesX);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_gather_temporariesX_92;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSast_linearizeYgather_temporariesX,T160);
  lit_160 = YPPsym((P)"collect-temporaries!");
  lit_161 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T164 = YPsig(LITREF(lit_161),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_93 = YPmet(FUNCODEREF(fun_collect_temporariesX_93),LITREF(lit_160),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_collect_temporariesX_93;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T165);
  lit_162 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T169 = YPsig(LITREF(lit_162),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_94 = YPmet(FUNCODEREF(fun_collect_temporariesX_94),LITREF(lit_160),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_collect_temporariesX_94;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T170);
  lit_163 = YPPsym((P)"prepend-renamings");
  lit_164 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"r"));
  lit_165 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"y"));
  T175 = YPsig(LITREF(lit_165),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_95 = YPmet(FUNCODEREF(fun_loop_95),LITREF(lit_25),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(LITREF(lit_164),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYprepend_renamings = YPmet(FUNCODEREF(YevalSast_linearizeYprepend_renamings),LITREF(lit_163),T174,ENVNUL,PNUL,YPfalse);
  T176 = YevalSast_linearizeYprepend_renamings;
  VARSET(YevalSast_linearizeYprepend_renamings,T176);
  lit_166 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T177 = YPsig(LITREF(lit_166),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_97 = YPmet(FUNCODEREF(fun_collect_temporariesX_97),LITREF(lit_160),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_collect_temporariesX_97;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T178);
  lit_167 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T182 = YPsig(LITREF(lit_167),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_98 = YPmet(FUNCODEREF(fun_collect_temporariesX_98),LITREF(lit_160),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_collect_temporariesX_98;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T183);
  lit_168 = YPPsym((P)"adjoin-temporary-variables!");
  lit_169 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"new-bindings"));
  lit_170 = YPPsym((P)"adjoin");
  lit_171 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"bindings"));
  T188 = YPsig(LITREF(lit_171),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_99 = YPmet(FUNCODEREF(fun_adjoin_99),LITREF(lit_170),T188,ENVNUL,PNUL,YPfalse);
  T187 = YPsig(LITREF(lit_169),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_100 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_100),LITREF(lit_168),T187,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YevalSast_linearizeYadjoin_temporary_variablesX);
  if (T191 != YPfalse) {
    T190 = VARREF(YevalSast_linearizeYadjoin_temporary_variablesX);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_adjoin_temporary_variablesX_100;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YevalSast_linearizeYadjoin_temporary_variablesX,T189);
  lit_172 = YPPsym((P)"<renamed-local-binding>");
  T194 = (P)YPpair(VARREF(YevalSastYLlocal_bindingG),Ynil);
  T193 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_172),T194);
  VARSET(YevalSast_linearizeYLrenamed_local_bindingG,T193);
  lit_173 = YPPsym((P)"binding-index");
  lit_174 = YPPlist(1,YPPsym((P)"_x"));
  T195 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_101 = YPmet(FUNCODEREF(fun_binding_index_101),LITREF(lit_173),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YevalSastYbinding_index);
  if (T198 != YPfalse) {
    T197 = VARREF(YevalSastYbinding_index);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_binding_index_101;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YevalSastYbinding_index,T196);
  lit_175 = YPPsym((P)"binding-index-setter");
  lit_176 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T200 = YPsig(LITREF(lit_176),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_102 = YPmet(FUNCODEREF(fun_binding_index_setter_102),LITREF(lit_175),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YevalSastYbinding_index_setter);
  if (T203 != YPfalse) {
    T202 = VARREF(YevalSastYbinding_index_setter);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_binding_index_setter_102;
  T201 = XCALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YevalSastYbinding_index_setter,T201);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  DYNDEFSET(YevalSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_177 = YPPsym((P)"new-renamed-binding");
  lit_178 = YPPlist(1,YPPsym((P)"binding"));
  T205 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_103 = YPmet(FUNCODEREF(fun_new_renamed_binding_103),LITREF(lit_177),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YevalSast_linearizeYnew_renamed_binding);
  if (T208 != YPfalse) {
    T207 = VARREF(YevalSast_linearizeYnew_renamed_binding);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_new_renamed_binding_103;
  T206 = XCALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YevalSast_linearizeYnew_renamed_binding,T206);
  VARSET(YevalSast_linearizeYTregister_passiveQT,YPfalse);
  lit_179 = YPPsym((P)"register-allocate!");
  lit_180 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"register-passive?"));
  lit_181 = Ynil;
  lit_182 = YPPlist(1,YPPsym((P)"def"));
  T213 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(LITREF(lit_181),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(LITREF(lit_181),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T210 = YPsig(LITREF(lit_180),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_107 = YPmet(FUNCODEREF(fun_register_allocateX_107),LITREF(lit_179),T210,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSast_linearizeYregister_allocateX);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSast_linearizeYregister_allocateX);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_register_allocateX_107;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSast_linearizeYregister_allocateX,T214);
  lit_183 = YPPsym((P)"allocate-register");
  lit_184 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T218 = YPsig(LITREF(lit_184),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYallocate_register = YPmet(FUNCODEREF(YevalSast_linearizeYallocate_register),LITREF(lit_183),T218,ENVNUL,PNUL,YPfalse);
  T219 = YevalSast_linearizeYallocate_register;
  VARSET(YevalSast_linearizeYallocate_register,T219);
  lit_185 = YPPsym((P)"collect-registers!");
  lit_186 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T220 = YPsig(LITREF(lit_186),YPPlist(3,VARREF(YevalSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_109 = YPmet(FUNCODEREF(fun_collect_registersX_109),LITREF(lit_185),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T223 != YPfalse) {
    T222 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_collect_registersX_109;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YevalSast_linearizeYcollect_registersX,T221);
  lit_187 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  lit_188 = YPPlist(1,YPPsym((P)"x"));
  T226 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_110 = YPmet(FUNCODEREF(fun_loop_110),LITREF(lit_25),T226,ENVNUL,PNUL,YPfalse);
  T225 = YPsig(LITREF(lit_187),YPPlist(3,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_111 = YPmet(FUNCODEREF(fun_collect_registersX_111),LITREF(lit_185),T225,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_collect_registersX_111;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSast_linearizeYcollect_registersX,T227);
  lit_189 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T231 = YPsig(LITREF(lit_189),YPPlist(3,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_112 = YPmet(FUNCODEREF(fun_collect_registersX_112),LITREF(lit_185),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T234 != YPfalse) {
    T233 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_collect_registersX_112;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YevalSast_linearizeYcollect_registersX,T232);
  lit_190 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  lit_191 = YPPlist(1,YPPsym((P)"def"));
  T237 = YPsig(LITREF(lit_191),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T237,ENVNUL,PNUL,YPfalse);
  T236 = YPsig(LITREF(lit_190),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_114 = YPmet(FUNCODEREF(fun_collect_registersX_114),LITREF(lit_185),T236,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T240 != YPfalse) {
    T239 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_collect_registersX_114;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YevalSast_linearizeYcollect_registersX,T238);
  lit_192 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T242 = YPsig(LITREF(lit_192),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_115 = YPmet(FUNCODEREF(fun_collect_registersX_115),LITREF(lit_185),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T245 != YPfalse) {
    T244 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_collect_registersX_115;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YevalSast_linearizeYcollect_registersX,T243);
  lit_193 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T247 = YPsig(LITREF(lit_193),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_185),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T250 != YPfalse) {
    T249 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_collect_registersX_116;
  T248 = XCALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YevalSast_linearizeYcollect_registersX,T248);
  lit_194 = YPPsym((P)"ast-contains-fun?");
  lit_195 = YPPlist(1,YPPsym((P)"x"));
  T252 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_117 = YPmet(FUNCODEREF(fun_ast_contains_funQ_117),LITREF(lit_194),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YevalSast_linearizeYast_contains_funQ);
  if (T255 != YPfalse) {
    T254 = VARREF(YevalSast_linearizeYast_contains_funQ);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_ast_contains_funQ_117;
  T253 = XCALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YevalSast_linearizeYast_contains_funQ,T253);
  lit_196 = YPPlist(1,YPPsym((P)"x"));
  lit_197 = YPPlist(1,YPPsym((P)"return"));
  lit_198 = YPPsym((P)"walk");
  lit_199 = YPPlist(1,YPPsym((P)"y"));
  T259 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_118 = YPmet(FUNCODEREF(fun_walk_118),LITREF(lit_198),T259,ENVNUL,PNUL,YPfalse);
  T258 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_120 = YPmet(FUNCODEREF(fun_ast_contains_funQ_120),LITREF(lit_194),T257,ENVNUL,PNUL,YPfalse);
  T262 = BOUNDP(YevalSast_linearizeYast_contains_funQ);
  if (T262 != YPfalse) {
    T261 = VARREF(YevalSast_linearizeYast_contains_funQ);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_ast_contains_funQ_120;
  T260 = XCALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(YevalSast_linearizeYast_contains_funQ,T260);
  T264 = YPfalse;
  return T264;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSruntime;
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
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"not", &module_info_gooSboot, "not"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
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
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
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
  {"opf", &module_info_gooSmacros, "opf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%it/", &module_info_gooSboot, "%it/"},
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
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
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
  {"^", &module_info_gooSmath, "^"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
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
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
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
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"mod", &module_info_gooSmath, "mod"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"len", &module_info_gooStypes, "len"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"in", &module_info_gooSioSport, "in"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"%lb", &module_info_gooSboot, "%lb"},
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
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"clone", &module_info_gooSboot, "clone"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"def", &module_info_gooSboot, "def"},
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
  {"map", &module_info_gooSmacros, "map"},
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
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"@not", &module_info_gooSboot, "@not"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%relt", &module_info_gooSboot, "%relt"},
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
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"close", &module_info_gooSioSport, "close"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"1-", &module_info_gooSmath, "1-"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<module>", &module_info_evalSast, "<module>"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"if", &module_info_gooSboot, "if"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
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
  {"now", &module_info_gooScolsScol, "now"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"t<", &module_info_gooStypes, "t<"},
  {"ct", &module_info_gooSboot, "ct"},
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
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
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
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"out", &module_info_gooSioSport, "out"},
  {"any?", &module_info_gooStypes, "any?"},
  {"always", &module_info_gooSruntime, "always"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"abs", &module_info_gooSmath, "abs"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"items", &module_info_gooScolsScol, "items"},
  {"<met>", &module_info_gooSboot, "<met>"},
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
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
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
  {"msg", &module_info_gooSconditions, "msg"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"open", &module_info_gooSioSport, "open"},
  {"when", &module_info_gooSmacros, "when"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"min", &module_info_gooSmag, "min"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"pow", &module_info_gooSmath, "pow"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
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
  {"newline", &module_info_gooSioSport, "newline"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"@+", &module_info_gooSboot, "@+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"read", &module_info_gooSconditions, "read"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"app", &module_info_gooSmacros, "app"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
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
  {"pack", &module_info_gooSpacker, "pack"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%met", &module_info_gooSboot, "%met"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"dss", &module_info_gooSboot, "dss"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"do", &module_info_gooSmacros, "do"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%sb", &module_info_gooSboot, "%sb"},
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
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {">", &module_info_gooSmag, ">"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"error", &module_info_gooSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"+", &module_info_gooSmath, "+"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"<", &module_info_gooSmag, "<"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%im", &module_info_gooSboot, "%im"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"df", &module_info_gooSboot, "df"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
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
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"new", &module_info_gooSboot, "new"},
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
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"&", &module_info_gooSmath, "&"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"@<", &module_info_gooSboot, "@<"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"round", &module_info_gooSmath, "round"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"swapf", &module_info_gooSmacros, "swapf"},
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
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"/", &module_info_gooSmath, "/"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"---main-1---", PVAR, NULL},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"unconstrained-type?", CVAR, &YevalSast_linearizeYunconstrained_typeQ},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"ast-contains-fun?", CVAR, &YevalSast_linearizeYast_contains_funQ},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"do-do-analysis!", CVAR, &YevalSast_linearizeYdo_do_analysisX},
  {"do-analysis!", CVAR, &YevalSast_linearizeYdo_analysisX},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"program-bindings-setter", CVAR, &YevalSast_linearizeYprogram_bindings_setter},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {"---main-0---", PVAR, NULL},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"analyze-ast", CVAR, &YevalSast_linearizeYanalyze_ast},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {"program-bindings", CVAR, &YevalSast_linearizeYprogram_bindings},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<box-write>", "<box-write>"},
  {"<top-level-form>", "<top-level-form>"},
  {"*register-passive?*", "*register-passive?*"},
  {"reference-offset", "reference-offset"},
  {"form-quotations", "form-quotations"},
  {"program-quotations", "program-quotations"},
  {"box-reference", "box-reference"},
  {"<box-creation>", "<box-creation>"},
  {"form-program", "form-program"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"program-definitions", "program-definitions"},
  {"program-form", "program-form"},
  {"closure-creation-index", "closure-creation-index"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"<free-reference>", "<free-reference>"},
  {"extract-things!", "extract-things!"},
  {"form-definitions", "form-definitions"},
  {"closure-creation-free", "closure-creation-free"},
  {"flatten-seqs", "flatten-seqs"},
  {"lift!", "lift!"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"closurize-main!", "closurize-main!"},
  {"register-allocate!", "register-allocate!"},
  {"analyze-ast", "analyze-ast"},
  {"<closure-creation>", "<closure-creation>"},
  {"program-bindings", "program-bindings"},
  {"box-form", "box-form"},
  {"insert-box!", "insert-box!"},
  {"<box-read>", "<box-read>"},
  {"reference-self?", "reference-self?"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast_linearize;
MODULE_INFO module_info_evalSast_linearize = {
  "eval/ast-linearize",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSast_linearize (void);

void load_module_evalSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_evalSast();

  (P)YevalSast_linearizeY___main_0___();
  (P)YevalSast_linearizeY___main_1___();

}

/* END OF GENERATED CODE. */
