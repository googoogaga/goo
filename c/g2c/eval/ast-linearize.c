/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/ast-linearize */

EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
EXT(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yx8rSastYconstant_value,"x8r/ast","constant-value");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(Yx8rSast_linearizeYclosure_creation_free_setter,"x8r/ast-linearize","closure-creation-free-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(Yx8rSast_linearizeYprogram_form,"x8r/ast-linearize","program-form");
EXT(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(Yx8rSast_linearizeYclosure_creation_index,"x8r/ast-linearize","closure-creation-index");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(Yx8rSast_linearizeYadjoin_free_bindingX,"x8r/ast-linearize","adjoin-free-binding!");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
EXT(Yx8rSastYfree_environment,"x8r/ast","free-environment");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yx8rSastYsignature_value,"x8r/ast","signature-value");
EXT(Ytup,"goo/boot","tup");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
DEF(Yx8rSast_linearizeYTrenaming_bindings_counterT,"x8r/ast-linearize","*renaming-bindings-counter*");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(Yx8rSast_linearizeYassoc_key,"x8r/ast-linearize","assoc-key");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
DEF(Yx8rSast_linearizeYLbox_creationG,"x8r/ast-linearize","<box-creation>");
EXT(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
EXT(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(Yx8rSast_linearizeYclosurize_mainX,"x8r/ast-linearize","closurize-main!");
EXT(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
DEF(Yx8rSast_linearizeYextract_thingsX,"x8r/ast-linearize","extract-things!");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(Yx8rSast_linearizeYassocq,"x8r/ast-linearize","assocq");
EXT(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
DEF(Yx8rSast_linearizeYadjoin_definitionX,"x8r/ast-linearize","adjoin-definition!");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
DEF(Yx8rSast_linearizeYprogram_definitions_setter,"x8r/ast-linearize","program-definitions-setter");
EXT(Yx8rSastYfunction_free,"x8r/ast","function-free");
EXT(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
EXT(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
EXT(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(Yx8rSast_linearizeYbox_form,"x8r/ast-linearize","box-form");
EXT(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(YLlstG,"goo/boot","<lst>");
DEF(Yx8rSast_linearizeYclosure_creation_index_setter,"x8r/ast-linearize","closure-creation-index-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yx8rSastYfunction_source,"x8r/ast","function-source");
DEF(Yx8rSast_linearizeYdo_do_call_upgradesX,"x8r/ast-linearize","do-do-call-upgrades!");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
DEF(Yx8rSast_linearizeYassoc_value,"x8r/ast-linearize","assoc-value");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
EXT(Yx8rSastYsignature_names,"x8r/ast","signature-names");
EXT(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
EXT(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
EXT(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
DEF(Yx8rSast_linearizeYdo_call_upgradesX,"x8r/ast-linearize","do-call-upgrades!");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(Yx8rSast_linearizeYdo_do_call_referencesX,"x8r/ast-linearize","do-do-call-references!");
EXT(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
DEF(Yx8rSast_linearizeYreference_offset,"x8r/ast-linearize","reference-offset");
EXT(Yx8rSastYprogram_register,"x8r/ast","program-register");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
EXT(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(Yx8rSast_linearizeYclosure_creation_free,"x8r/ast-linearize","closure-creation-free");
DEF(Yx8rSast_linearizeYprogram_definitions,"x8r/ast-linearize","program-definitions");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
DEF(Yx8rSast_linearizeYform_definitions_setter,"x8r/ast-linearize","form-definitions-setter");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
EXT(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
DEF(Yx8rSast_linearizeYas_top_level_forms,"x8r/ast-linearize","as-top-level-forms");
DEF(Yx8rSast_linearizeYform_quotations_setter,"x8r/ast-linearize","form-quotations-setter");
EXT(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(Yx8rSast_linearizeYassoc_value_setter,"x8r/ast-linearize","assoc-value-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yerror,"goo/boot","error");
EXT(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(Yx8rSast_linearizeYbox_form_setter,"x8r/ast-linearize","box-form-setter");
EXT(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
DEF(Yx8rSast_linearizeYextractX,"x8r/ast-linearize","extract!");
EXT(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
DEF(Yx8rSast_linearizeYform_program,"x8r/ast-linearize","form-program");
DEF(Yx8rSast_linearizeYreference_selfQ,"x8r/ast-linearize","reference-self?");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
DEF(Yx8rSast_linearizeYboxify_mutable_bindings,"x8r/ast-linearize","boxify-mutable-bindings");
DEF(Yx8rSast_linearizeYinsert_boxX,"x8r/ast-linearize","insert-box!");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
DEF(Yx8rSast_linearizeYLtop_level_formG,"x8r/ast-linearize","<top-level-form>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(Yx8rSast_linearizeYunconstrained_typeQ,"x8r/ast-linearize","unconstrained-type?");
EXT(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
EXT(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
DEF(Yx8rSast_linearizeYregister_allocateX,"x8r/ast-linearize","register-allocate!");
EXT(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
EXT(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yx8rSastYmodule_name,"x8r/ast","module-name");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(Yx8rSast_linearizeYast_walk,"x8r/ast-linearize","ast-walk");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ylst,"goo/boot","lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(Yx8rSast_linearizeYast_contains_funQ,"x8r/ast-linearize","ast-contains-fun?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhead,"goo/boot","head");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
DEF(Yx8rSast_linearizeYanalyze_calls,"x8r/ast-linearize","analyze-calls");
EXT(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yx8rSastYLbindingG,"x8r/ast","<binding>");
EXT(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
DEF(Yx8rSast_linearizeYanalyze_dynamic_extent,"x8r/ast-linearize","analyze-dynamic-extent");
DEF(Yx8rSast_linearizeYassoc_key_setter,"x8r/ast-linearize","assoc-key-setter");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
EXT(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(Yx8rSast_linearizeYprogram_form_setter,"x8r/ast-linearize","program-form-setter");
EXT(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
EXT(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(Yx8rSast_linearizeYform_definitions,"x8r/ast-linearize","form-definitions");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yx8rSastYapplication_function,"x8r/ast","application-function");
DEF(Yx8rSast_linearizeYassoc,"x8r/ast-linearize","assoc");
EXT(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ynot,"goo/boot","not");
EXT(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yx8rSastYload_in,"x8r/ast","load-in");
EXT(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
EXT(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
DEF(Yx8rSast_linearizeYallocate_register,"x8r/ast-linearize","allocate-register");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(Yx8rSast_linearizeYdo_call_referencesX,"x8r/ast-linearize","do-call-references!");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(Yx8rSast_linearizeYbox_reference,"x8r/ast-linearize","box-reference");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
DEF(Yx8rSast_linearizeYbox_reference_setter,"x8r/ast-linearize","box-reference-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(Yx8rSast_linearizeYflatten_seqs,"x8r/ast-linearize","flatten-seqs");
EXT(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(Yx8rSast_linearizeYTregister_passiveQT,"x8r/ast-linearize","*register-passive?*");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
EXT(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
DEF(Yx8rSast_linearizeYsplit_program,"x8r/ast-linearize","split-program");
EXT(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(Yx8rSast_linearizeYcollect_temporariesX,"x8r/ast-linearize","collect-temporaries!");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
DEF(Yx8rSast_linearizeYprogram_quotations,"x8r/ast-linearize","program-quotations");
EXT(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
EXT(Yx8rSastYfunction_value,"x8r/ast","function-value");
DEF(Yx8rSast_linearizeYLclosure_creationG,"x8r/ast-linearize","<closure-creation>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(Yx8rSast_linearizeYliftX,"x8r/ast-linearize","lift!");
EXT(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
EXT(Yx8rSastYLapplicationG,"x8r/ast","<application>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
EXT(Yx8rSastYbinding_index,"x8r/ast","binding-index");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLstrG,"goo/boot","<str>");
DEF(Yx8rSast_linearizeYlift_proceduresX,"x8r/ast-linearize","lift-procedures!");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(Yx8rSast_linearizeYanalyze_call_references,"x8r/ast-linearize","analyze-call-references");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yx8rSastYbinding_info,"x8r/ast","binding-info");
EXT(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(Yx8rSast_linearizeYreference_offset_setter,"x8r/ast-linearize","reference-offset-setter");
EXT(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
EXT(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
EXT(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
EXT(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
DEF(Yx8rSast_linearizeYLbox_writeG,"x8r/ast-linearize","<box-write>");
DEF(Yx8rSast_linearizeYnew_renamed_binding,"x8r/ast-linearize","new-renamed-binding");
EXT(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(Yx8rSast_linearizeYform_program_setter,"x8r/ast-linearize","form-program-setter");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(Yx8rSast_linearizeYform_quotations,"x8r/ast-linearize","form-quotations");
DEF(Yx8rSast_linearizeYreference_selfQ_setter,"x8r/ast-linearize","reference-self?-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(Yx8rSast_linearizeYgather_temporariesX,"x8r/ast-linearize","gather-temporaries!");
EXT(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
DEF(Yx8rSast_linearizeYcollect_registersX,"x8r/ast-linearize","collect-registers!");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(Yx8rSast_linearizeYdo_do_dynamic_extentX,"x8r/ast-linearize","do-do-dynamic-extent!");
EXT(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(Yx8rSast_linearizeYLflattened_programG,"x8r/ast-linearize","<flattened-program>");
EXT(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
DEF(Yx8rSast_linearizeYdo_dynamic_extentX,"x8r/ast-linearize","do-dynamic-extent!");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yx8rSastYfunction_index,"x8r/ast","function-index");
DEF(Yx8rSast_linearizeYLbox_readG,"x8r/ast-linearize","<box-read>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
DEF(Yx8rSast_linearizeYLassocG,"x8r/ast-linearize","<assoc>");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
DEF(Yx8rSast_linearizeYLfree_referenceG,"x8r/ast-linearize","<free-reference>");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
DEF(Yx8rSast_linearizeYLrenamed_local_bindingG,"x8r/ast-linearize","<renamed-local-binding>");
DEF(Yx8rSast_linearizeYupdate_walkX,"x8r/ast-linearize","update-walk!");
EXT(YPprop,"goo/boot","%prop");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yx8rSastYbinding_name,"x8r/ast","binding-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
EXT(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
EXT(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
EXT(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
DEF(Yx8rSast_linearizeYprogram_quotations_setter,"x8r/ast-linearize","program-quotations-setter");
EXT(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
EXT(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
DEF(Yx8rSast_linearizeYadjoin_temporary_variablesX,"x8r/ast-linearize","adjoin-temporary-variables!");
EXT(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
EXT(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_32);
DEFLIT(lit_110);
DEFLIT(lit_14);
DEFLIT(lit_114);
DEFLIT(lit_39);
DEFLIT(lit_23);
DEFLIT(lit_13);
DEFLIT(lit_63);
DEFLIT(lit_84);
DEFLIT(lit_18);
DEFLIT(lit_86);
DEFLIT(lit_0);
DEFLIT(lit_59);
DEFLIT(lit_80);
DEFLIT(lit_98);
DEFLIT(lit_78);
DEFLIT(lit_91);
DEFLIT(lit_122);
DEFLIT(lit_66);
DEFLIT(lit_10);
DEFLIT(lit_62);
DEFLIT(lit_15);
DEFLIT(lit_106);
DEFLIT(lit_30);
DEFLIT(lit_57);
DEFLIT(lit_43);
DEFLIT(lit_95);
DEFLIT(lit_44);
DEFLIT(lit_1);
DEFLIT(lit_111);
DEFLIT(lit_74);
DEFLIT(lit_19);
DEFLIT(lit_41);
DEFLIT(lit_60);
DEFLIT(lit_121);
DEFLIT(lit_83);
DEFLIT(lit_115);
DEFLIT(lit_100);
DEFLIT(lit_65);
DEFLIT(lit_2);
DEFLIT(lit_51);
DEFLIT(lit_8);
DEFLIT(lit_28);
DEFLIT(lit_118);
DEFLIT(lit_20);
DEFLIT(lit_117);
DEFLIT(lit_92);
DEFLIT(lit_101);
DEFLIT(lit_71);
DEFLIT(lit_21);
DEFLIT(lit_64);
DEFLIT(lit_119);
DEFLIT(lit_113);
DEFLIT(lit_31);
DEFLIT(lit_93);
DEFLIT(lit_37);
DEFLIT(lit_82);
DEFLIT(lit_90);
DEFLIT(lit_6);
DEFLIT(lit_69);
DEFLIT(lit_42);
DEFLIT(lit_58);
DEFLIT(lit_9);
DEFLIT(lit_22);
DEFLIT(lit_88);
DEFLIT(lit_46);
DEFLIT(lit_55);
DEFLIT(lit_89);
DEFLIT(lit_24);
DEFLIT(lit_72);
DEFLIT(lit_73);
DEFLIT(lit_56);
DEFLIT(lit_25);
DEFLIT(lit_105);
DEFLIT(lit_112);
DEFLIT(lit_35);
DEFLIT(lit_17);
DEFLIT(lit_4);
DEFLIT(lit_107);
DEFLIT(lit_61);
DEFLIT(lit_38);
DEFLIT(lit_27);
DEFLIT(lit_53);
DEFLIT(lit_26);
DEFLIT(lit_36);
DEFLIT(lit_70);
DEFLIT(lit_75);
DEFLIT(lit_104);
DEFLIT(lit_96);
DEFLIT(lit_11);
DEFLIT(lit_48);
DEFLIT(lit_16);
DEFLIT(lit_109);
DEFLIT(lit_54);
DEFLIT(lit_94);
DEFLIT(lit_49);
DEFLIT(lit_99);
DEFLIT(lit_102);
DEFLIT(lit_68);
DEFLIT(lit_120);
DEFLIT(lit_45);
DEFLIT(lit_79);
DEFLIT(lit_5);
DEFLIT(lit_85);
DEFLIT(lit_33);
DEFLIT(lit_108);
DEFLIT(lit_52);
DEFLIT(lit_50);
DEFLIT(lit_81);
DEFLIT(lit_77);
DEFLIT(lit_87);
DEFLIT(lit_34);
DEFLIT(lit_97);
DEFLIT(lit_29);
DEFLIT(lit_67);
DEFLIT(lit_3);
DEFLIT(lit_76);
DEFLIT(lit_103);
DEFLIT(lit_116);
DEFLIT(lit_40);
DEFLIT(lit_47);
DEFLIT(lit_7);
DEFLIT(lit_12);

/* FUNCTIONS: */

LOCFOR(fun_assoc_key_0);
LOCFOR(fun_assoc_key_setter_1);
LOCFOR(fun_assoc_value_2);
LOCFOR(fun_assoc_value_setter_3);
FUNFOR(Yx8rSast_linearizeYassoc);
LOCFOR(fun_assocq_5);
LOCFOR(fun_x_1454_6);
LOCFOR(fun_update_walkX_7);
LOCFOR(fun_x_1456_8);
LOCFOR(fun_ast_walk_9);
LOCFOR(fun_box_reference_10);
LOCFOR(fun_box_reference_setter_11);
LOCFOR(fun_box_reference_12);
LOCFOR(fun_box_reference_setter_13);
LOCFOR(fun_box_form_14);
LOCFOR(fun_box_form_setter_15);
LOCFOR(fun_box_reference_16);
LOCFOR(fun_box_reference_setter_17);
LOCFOR(fun_insert_boxX_18);
LOCFOR(fun_insert_boxX_19);
LOCFOR(fun_insert_boxX_20);
LOCFOR(fun_insert_boxX_21);
LOCFOR(fun_insert_boxX_22);
LOCFOR(fun_insert_boxX_23);
LOCFOR(fun_loop_24);
LOCFOR(fun_boxify_mutable_bindings_25);
LOCFOR(fun_do_do_call_referencesX_26);
LOCFOR(fun_do_call_referencesX_27);
LOCFOR(fun_do_call_referencesX_28);
LOCFOR(fun_analyze_call_references_29);
LOCFOR(fun_do_do_dynamic_extentX_30);
LOCFOR(fun_do_dynamic_extentX_31);
LOCFOR(fun_do_dynamic_extentX_32);
LOCFOR(fun_analyze_dynamic_extent_33);
LOCFOR(fun_do_do_call_upgradesX_34);
LOCFOR(fun_do_call_upgradesX_35);
LOCFOR(fun_unconstrained_typeQ_36);
LOCFOR(fun_unconstrained_typeQ_37);
LOCFOR(fun_unconstrained_typeQ_38);
LOCFOR(fun_39);
LOCFOR(fun_do_call_upgradesX_40);
LOCFOR(fun_analyze_calls_41);
LOCFOR(fun_reference_offset_42);
LOCFOR(fun_reference_offset_setter_43);
LOCFOR(fun_reference_selfQ_44);
LOCFOR(fun_reference_selfQ_setter_45);
LOCFOR(fun_liftX_46);
LOCFOR(fun_lift_proceduresX_47);
LOCFOR(fun_lift_proceduresX_48);
LOCFOR(fun_add_49);
LOCFOR(fun_check_50);
LOCFOR(fun_adjoin_free_bindingX_51);
LOCFOR(fun_lift_proceduresX_52);
LOCFOR(fun_lift_proceduresX_53);
LOCFOR(fun_lift_proceduresX_54);
LOCFOR(fun_lift_proceduresX_55);
LOCFOR(fun_lift_proceduresX_56);
LOCFOR(fun_program_form_57);
LOCFOR(fun_program_form_setter_58);
LOCFOR(fun_program_quotations_59);
LOCFOR(fun_program_quotations_setter_60);
LOCFOR(fun_61);
LOCFOR(fun_program_definitions_62);
LOCFOR(fun_program_definitions_setter_63);
LOCFOR(fun_64);
LOCFOR(fun_form_program_65);
LOCFOR(fun_form_program_setter_66);
LOCFOR(fun_form_quotations_67);
LOCFOR(fun_form_quotations_setter_68);
LOCFOR(fun_69);
LOCFOR(fun_form_definitions_70);
LOCFOR(fun_form_definitions_setter_71);
LOCFOR(fun_72);
LOCFOR(fun_closure_creation_index_73);
LOCFOR(fun_closure_creation_index_setter_74);
LOCFOR(fun_closure_creation_free_75);
LOCFOR(fun_closure_creation_free_setter_76);
LOCFOR(fun_flatten_seqs_77);
LOCFOR(fun_inner_78);
LOCFOR(fun_loop_79);
LOCFOR(fun_flatten_seqs_80);
LOCFOR(fun_81);
LOCFOR(fun_as_top_level_forms_82);
LOCFOR(fun_83);
LOCFOR(fun_extract_thingsX_84);
LOCFOR(fun_extractX_85);
LOCFOR(fun_extractX_86);
LOCFOR(fun_extractX_87);
LOCFOR(fun_88);
LOCFOR(fun_extractX_89);
LOCFOR(fun_extractX_90);
LOCFOR(fun_adjoin_definitionX_91);
LOCFOR(fun_split_program_92);
LOCFOR(fun_inner_93);
LOCFOR(fun_loop_94);
LOCFOR(fun_split_program_95);
LOCFOR(fun_loop_96);
LOCFOR(fun_closurize_mainX_97);
LOCFOR(fun_98);
LOCFOR(fun_gather_temporariesX_99);
LOCFOR(fun_collect_temporariesX_100);
LOCFOR(fun_collect_temporariesX_101);
LOCFOR(fun_collect_temporariesX_102);
LOCFOR(fun_collect_temporariesX_103);
LOCFOR(fun_adjoin_104);
LOCFOR(fun_adjoin_temporary_variablesX_105);
LOCFOR(fun_binding_index_106);
LOCFOR(fun_binding_index_setter_107);
LOCFOR(fun_new_renamed_binding_108);
LOCFOR(fun_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_register_allocateX_112);
LOCFOR(fun_allocate_register_113);
LOCFOR(fun_collect_registersX_114);
LOCFOR(fun_loop_115);
LOCFOR(fun_collect_registersX_116);
LOCFOR(fun_collect_registersX_117);
LOCFOR(fun_118);
LOCFOR(fun_collect_registersX_119);
LOCFOR(fun_collect_registersX_120);
LOCFOR(fun_collect_registersX_121);
LOCFOR(fun_ast_contains_funQ_122);
LOCFOR(fun_walk_123);
LOCFOR(fun_124);
LOCFOR(fun_ast_contains_funQ_125);
extern P Yx8rSast_linearizeY___main_0___ ();
extern P Yx8rSast_linearizeY___main_1___ ();
extern P Yx8rSast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_assoc_key_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSast_linearizeYassoc) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSast_linearizeYLassocG),VARREF(Yx8rSast_linearizeYassoc_key),x_,VARREF(Yx8rSast_linearizeYassoc_value),y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_5) {
  P x_,l_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    T4 = CALL1(1,VARREF(Yx8rSast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(Yx8rSast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1454_6) {
  P x_1453_;
  P xF1870;
  P setterF1869;
  P getterF1868;
  P propF1867;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1453_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1453_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1453_);
    propF1867 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1867);
    getterF1868 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF1867);
    setterF1869 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1868,VARREF(Yx8rSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1868);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF1868,FREEREF(0));
        xF1870 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF1870,VARREF(Yx8rSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF1870,FREEREF(2));
          T17 = CALL2(1,setterF1869,T18,FREEREF(0));
          T15 = T17;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T11 = T13;
      } else {
        T11 = YPfalse;
      }
    } else {
    }
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1453_);
    a1 = T20;
    x_1453_ = a1;
    goto loop;
    T7 = T19;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_update_walkX_7) {
  P g_,o_,args_;
  P x_1454F1871;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1454_6,4);
  x_1454F1871 = T0;
  FUNINIT(x_1454F1871, 4,o_,g_,args_,x_1454F1871);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1454F1871,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1456_8) {
  P x_1455_;
  P xF1874;
  P getterF1873;
  P propF1872;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1455_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1455_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1455_);
    propF1872 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1872);
    getterF1873 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1873,VARREF(Yx8rSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1873);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF1873,FREEREF(0));
        xF1874 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF1874,VARREF(Yx8rSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALL4(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,xF1874,FREEREF(2));
          T13 = T15;
        } else {
          T13 = YPfalse;
        }
        T11 = T13;
        T9 = T11;
      } else {
        T9 = YPfalse;
      }
    } else {
    }
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1455_);
    a1 = T17;
    x_1455_ = a1;
    goto loop;
    T5 = T16;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walk_9) {
  P g_,o_,args_;
  P x_1456F1875;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1456_8,4);
  x_1456F1875 = T0;
  FUNINIT(x_1456F1875, 4,o_,g_,args_,x_1456F1875);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1456F1875,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_box_reference_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_18) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_19) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSast_linearizeYLbox_readG),VARREF(Yx8rSast_linearizeYbox_reference),o_);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_20) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(Yx8rSastYassignment_form),o_);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T3);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSast_linearizeYLbox_writeG),VARREF(Yx8rSast_linearizeYbox_reference),T1,VARREF(Yx8rSast_linearizeYbox_form),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_21) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(Yx8rSast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_22) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(Yx8rSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(Yx8rSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(Yx8rSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_23) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(Yx8rSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYlocals_body),o_);
  T5 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(Yx8rSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(Yx8rSastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_loop_24) {
  P res_,bindings_;
  P creatorF1877;
  P bindingF1876;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    bindingF1876 = T5;
    T7 = CALL1(1,VARREF(Yx8rSastYbinding_mutableQ),bindingF1876);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_binding),bindingF1876);
      T9 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSast_linearizeYLbox_creationG),VARREF(Yx8rSast_linearizeYbox_reference),T10);
      creatorF1877 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF1877,res_);
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

FUNCODEDEF(fun_boxify_mutable_bindings_25) {
  P form_,bindings_;
  P loopF1878;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_24,2);
  loopF1878 = T2;
  FUNINIT(loopF1878, 2,form_,loopF1878);
  T3 = CALL2(0,loopF1878,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,VARREF(Yx8rSastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_referencesX_26) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_27) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_28) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_call_referencesX),o_);
  T1 = CALL1(1,VARREF(Yx8rSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(Yx8rSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYapplication_function),o_);
    T2 = CALL2(1,VARREF(Yx8rSastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_call_references_29) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_dynamic_extentX_30) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_31) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_32) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_dynamic_extentX),o_);
  T1 = CALL1(1,VARREF(Yx8rSastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
    T2 = CALL2(1,VARREF(Yx8rSastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_dynamic_extent_33) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yx8rSast_linearizeYanalyze_call_references),o_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_upgradesX_34) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_35) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_36) {
  P b_;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_unconstrained_typeQ_37) {
  P b_;
  P tmpF1879;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_44));
  tmpF1879 = T1;
  if (tmpF1879 != YPfalse) {
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_45));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_38) {
  P o_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_39) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_type),x_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_40) {
  P o_;
  P tmpF1884;
  P tmpF1883;
  P tmpF1882;
  P tmpF1881;
  P metF1880;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_call_upgradesX),o_);
  T1 = CALL1(1,VARREF(Yx8rSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(Yx8rSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(Yx8rSastYapplication_function),o_);
    T4 = CALL1(1,VARREF(Yx8rSastYreference_binding),T5);
    T3 = CALL1(1,VARREF(Yx8rSastYbinding_value),T4);
    metF1880 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF1880,VARREF(Yx8rSastYLast_functionG));
    tmpF1881 = T8;
    if (tmpF1881 != YPfalse) {
      T12 = fun_39;
      T13 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),metF1880);
      T11 = CALL2(1,VARREF(YgooScolsScolYallQ),T12,T13);
      tmpF1882 = T11;
      if (tmpF1882 != YPfalse) {
        T17 = CALL1(1,VARREF(Yx8rSastYfunction_value),metF1880);
        T16 = CALL1(1,VARREF(Yx8rSast_linearizeYunconstrained_typeQ),T17);
        tmpF1883 = T16;
        if (tmpF1883 != YPfalse) {
          T21 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),metF1880);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF1884 = T20;
          if (tmpF1884 != YPfalse) {
            T25 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),metF1880);
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
      T28 = CALL2(1,VARREF(Yx8rSastYapplication_knownQ_setter),YPtrue,o_);
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

FUNCODEDEF(fun_analyze_calls_41) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_42) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_43) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_44) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_45) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_liftX_46) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_47) {
  P o_,flat_fun_,bindings_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T0 = CALL4(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_48) {
  P o_,flat_fun_,bindings_;
  P offsetF1886;
  P bF1885;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
  bF1885 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF1885);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(Yx8rSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1886 = T5;
    T8 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(Yx8rSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSast_linearizeYLfree_referenceG),VARREF(Yx8rSastYreference_binding),bF1885,VARREF(Yx8rSast_linearizeYreference_offset),offsetF1886,VARREF(Yx8rSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_49) {
  P freeT_;
  P tailF1887;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF1887 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF1887);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF1887;
    freeT_ = a1;
    goto loop;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_50) {
  P i_,freeT_;
  P addF1889;
  P new_envF1888;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLfree_environmentG));
    T3 = CALL2(1,VARREF(Yx8rSastYfree_environment),FREEREF(0),T4);
    new_envF1888 = T3;
    T6 = CALL1(1,VARREF(Yx8rSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(Yx8rSastYfunction_free_setter),new_envF1888,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_49,2);
      addF1889 = T9;
      FUNINIT(addF1889, 2,new_envF1888,addF1889);
      T11 = CALL1(1,VARREF(Yx8rSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF1889,T11);
      T8 = T10;
    }
    T2 = i_;
    T0 = T2;
  } else {
    T14 = CALL1(1,VARREF(Yx8rSastYreference_binding),FREEREF(0));
    T16 = CALL1(1,VARREF(Yhead),freeT_);
    T15 = CALL1(1,VARREF(Yx8rSastYreference_binding),T16);
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

FUNCODEDEF(fun_adjoin_free_bindingX_51) {
  P flat_fun_,ref_;
  P checkF1890;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_50,3);
  checkF1890 = T1;
  FUNINIT(checkF1890, 3,ref_,flat_fun_,checkF1890);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF1890,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_52) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1891;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(Yx8rSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,bindings_);
  new_bindingsF1891 = T3;
  T6 = CALL1(1,VARREF(Yx8rSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF1891);
  CALL2(1,VARREF(Yx8rSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_53) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1892;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF1892 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1892);
  T5 = CALL1(1,VARREF(Yx8rSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(Yx8rSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(Yx8rSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF1892);
  CALL2(1,VARREF(Yx8rSastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_54) {
  P o_,flat_fun_,bindings_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_55) {
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

FUNCODEDEF(fun_lift_proceduresX_56) {
  P o_,flat_fun_,bindings_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYfunction_free),o_);
  T3 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(Yx8rSastYfunction_free_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_program_form_57) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_58) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_59) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_60) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
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

FUNCODEDEF(fun_program_definitions_62) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_63) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_65) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_66) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_67) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_68) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_70) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_71) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_73) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_74) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_75) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_76) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_77) {
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

FUNCODEDEF(fun_inner_78) {
  P ss_,r_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),FREEREF(1));
    T2 = CALL2(0,FREEREF(0),T3,r_);
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

FUNCODEDEF(fun_loop_79) {
  P s_,r_;
  P innerF1893;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
    T4 = FUNSHELL(1,fun_inner_78,3);
    innerF1893 = T4;
    FUNINIT(innerF1893, 3,FREEREF(0),s_,innerF1893);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(Yx8rSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF1893,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_80) {
  P o_;
  P loopF1894;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_79,1);
  loopF1894 = T1;
  FUNINIT(loopF1894, 1,loopF1894);
  T2 = CALL2(0,loopF1894,o_,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_program),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_82) {
  P programs_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(programs_, 0);
loop:
  T1 = fun_81;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_84) {
  P o_;
  P resultF1896;
  P formsF1895;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYas_top_level_forms),T2);
  formsF1895 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSast_linearizeYLflattened_programG));
  resultF1896 = T4;
  T7 = FUNFAB(fun_83,1,resultF1896);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF1895);
  T5 = CALL1(1,VARREF(Yx8rSastYsequentialize),T6);
  CALL2(1,VARREF(Yx8rSast_linearizeYprogram_form_setter),T5,resultF1896);
  T3 = resultF1896;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_85) {
  P o_,form_,result_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T0 = CALL4(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_86) {
  P o_,form_,result_;
  P x_1457F1906;
  P qbF1905;
  P probeF1904;
  P indexF1903;
  P qbTF1902;
  P tmpF1901;
  P tmpF1900;
  P tmpF1899;
  P tmpF1898;
  P valueF1897;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYconstant_value),o_);
  valueF1897 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1897,YPfalse);
  tmpF1898 = T4;
  if (tmpF1898 != YPfalse) {
    T5 = tmpF1898;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1897,YPtrue);
    tmpF1899 = T7;
    if (tmpF1899 != YPfalse) {
      T8 = tmpF1899;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1897,Ynil);
      tmpF1900 = T10;
      if (tmpF1900 != YPfalse) {
        T11 = tmpF1900;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF1897,VARREF(YLintG));
        tmpF1901 = T13;
        if (tmpF1901 != YPfalse) {
          T14 = tmpF1901;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF1897,VARREF(YLchrG));
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
    T17 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_quotations),result_);
    qbTF1902 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF1902);
    indexF1903 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF1902,valueF1897,YPfalse);
    probeF1904 = T21;
    if (probeF1904 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSastYreference_binding),probeF1904);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_90),VARREF(Yx8rSastYbinding_name),indexF1903,VARREF(Yx8rSastYbinding_info),valueF1897);
      qbF1905 = T25;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF1905,qbTF1902,valueF1897);
      x_1457F1906 = form_;
      T28 = CALL1(1,VARREF(Yx8rSast_linearizeYform_quotations),x_1457F1906);
      T27 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T28,qbF1905);
      T26 = CALL2(1,VARREF(Yx8rSast_linearizeYform_quotations_setter),T27,x_1457F1906);
      T29 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSastYreference_binding),qbF1905);
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

FUNCODEDEF(fun_extractX_87) {
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

FUNCODEDEF(fun_88) {
  P binding_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(Yx8rSastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_89) {
  P o_,form_,result_;
  P indexF1909;
  P free_bindingsF1908;
  P freeF1907;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(Yx8rSastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  T4 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_88,2,form_,result_);
  T7 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
  T9 = CALL1(1,VARREF(Yx8rSastYfunction_free),o_);
  freeF1907 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYreference_binding),freeF1907);
  free_bindingsF1908 = T11;
  T13 = CALL3(1,VARREF(Yx8rSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF1909 = T13;
  CALL2(1,VARREF(Yx8rSastYfunction_index_setter),indexF1909,o_);
  CALL2(1,VARREF(Yx8rSastYfunction_free_setter),free_bindingsF1908,o_);
  T14 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(Yx8rSast_linearizeYclosure_creation_index),indexF1909,VARREF(Yx8rSast_linearizeYclosure_creation_free),freeF1907);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_90) {
  P o_,form_,result_;
  P x_1458F1911;
  P primF1910;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYassignment_form),o_);
  primF1910 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_body),primF1910);
  T2 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T2,primF1910);
  x_1458F1911 = result_;
  T6 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),x_1458F1911);
  T5 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,primF1910);
  T4 = CALL2(1,VARREF(Yx8rSast_linearizeYprogram_definitions_setter),T5,x_1458F1911);
  T8 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_91) {
  P form_,result_,x_;
  P x_1460F1914;
  P x_1459F1913;
  P new_indexF1912;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF1912 = T1;
  x_1459F1913 = result_;
  T5 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),x_1459F1913);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(Yx8rSast_linearizeYprogram_definitions_setter),T4,x_1459F1913);
  x_1460F1914 = form_;
  T8 = CALL1(1,VARREF(Yx8rSast_linearizeYform_definitions),x_1460F1914);
  T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,x_);
  T6 = CALL2(1,VARREF(Yx8rSast_linearizeYform_definitions_setter),T7,x_1460F1914);
  T0 = new_indexF1912;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_92) {
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

FUNCODEDEF(fun_inner_93) {
  P res_,es_,count_;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(es_, 1);
  ARG(count_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),es_);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T4 = CALL1(1,VARREF(Yx8rSastYsequentialize),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
      T10 = CALL1(1,VARREF(Yx8rSastYsequentialize),T11);
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

FUNCODEDEF(fun_loop_94) {
  P forms_,s_;
  P innerF1915;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_93,4);
  innerF1915 = T1;
  FUNINIT(innerF1915, 4,forms_,FREEREF(0),FREEREF(1),innerF1915);
  T2 = CALL3(0,innerF1915,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_95) {
  P o_,max_count_;
  P loopF1916;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_94,2);
  loopF1916 = T1;
  FUNINIT(loopF1916, 2,max_count_,loopF1916);
  T2 = CALL2(0,loopF1916,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_96) {
  P calls_,defns_,i_,forms_;
  P callF1920;
  P defnF1919;
  P bindingF1918;
  P nameF1917;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
    CALL2(1,VARREF(Yx8rSast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),calls_);
    T4 = CALL1(1,VARREF(Yx8rSastYsequentialize),T5);
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    T3 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_program),T4,VARREF(Yx8rSast_linearizeYform_definitions),T6);
    CALL2(1,VARREF(Yx8rSast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T8 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_101),i_,LITREF(lit_102));
    nameF1917 = T8;
    T10 = CALL4(1,VARREF(Yx8rSastYast_define_binding),FREEREF(1),nameF1917,YPfalse,LITREF(lit_103));
    bindingF1918 = T10;
    T13 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),nameF1917,YPint((P)4));
    T14 = CALL2(1,VARREF(Yx8rSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLast_primitiveG),VARREF(Yx8rSastYfunction_binding),bindingF1918,VARREF(Yx8rSastYfunction_debug_name),T13,VARREF(Yx8rSastYfunction_signature),T14,VARREF(Yx8rSastYfunction_body),T15);
    defnF1919 = T12;
    T18 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLpredefined_applicationG),VARREF(Yx8rSastYapplication_binding),bindingF1918,VARREF(Yx8rSastYapplication_arguments),T18,VARREF(Yx8rSastYapplication_tailQ),YPfalse);
    callF1920 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF1920,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF1919,defns_);
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

FUNCODEDEF(fun_closurize_mainX_97) {
  P o_,r_,max_count_;
  P loopF1923;
  P base_indexF1922;
  P formsF1921;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(Yx8rSast_linearizeYsplit_program),T2,max_count_);
  formsF1921 = T1;
  T5 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF1922 = T4;
  T7 = FUNSHELL(1,fun_loop_96,3);
  loopF1923 = T7;
  FUNINIT(loopF1923, 3,o_,r_,loopF1923);
  T9 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),o_);
  T8 = CALL4(0,loopF1923,Ynil,T9,YPint((P)0),formsF1921);
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_98) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_99) {
  P o_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = fun_98;
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(Yx8rSast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_100) {
  P o_,flat_fun_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T0 = CALL4(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_101) {
  P o_,flat_fun_,r_;
  P bF1925;
  P bindingF1924;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
  bindingF1924 = T1;
  T3 = CALL2(1,VARREF(Yx8rSast_linearizeYassocq),bindingF1924,r_);
  bF1925 = T3;
  if (bF1925 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSast_linearizeYassoc_value),bF1925);
    T5 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_binding),T6);
    T4 = T5;
  } else {
    T4 = o_;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_102) {
  P o_,flat_fun_,r_;
  P new_rF1927;
  P new_bindingsF1926;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(Yx8rSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSast_linearizeYnew_renamed_binding),T4);
  new_bindingsF1926 = T3;
  T8 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),o_);
  T7 = CALL3(1,VARREF(YgooScolsScolYmap2),VARREF(Yx8rSast_linearizeYassoc),T8,new_bindingsF1926);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),T7,r_);
  new_rF1927 = T6;
  CALL2(1,VARREF(Yx8rSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1926);
  CALL2(1,VARREF(Yx8rSastYfix_let_bindings_setter),new_bindingsF1926,o_);
  T10 = CALL1(1,VARREF(Yx8rSastYfix_let_body),o_);
  T9 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF1927);
  CALL2(1,VARREF(Yx8rSastYfix_let_body_setter),T9,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_103) {
  P o_,flat_fun_,r_;
  P new_rF1929;
  P new_bindingsF1928;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF1928 = T1;
  T6 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),o_);
  T5 = CALL3(1,VARREF(YgooScolsScolYmap2),VARREF(Yx8rSast_linearizeYassoc),T6,new_bindingsF1928);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,r_);
  new_rF1929 = T4;
  T8 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSast_linearizeYcollect_temporariesX),flat_fun_,new_rF1929);
  T9 = CALL1(1,VARREF(Yx8rSastYlocals_functions),o_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,T9);
  CALL2(1,VARREF(Yx8rSastYlocals_functions_setter),T7,o_);
  CALL2(1,VARREF(Yx8rSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1928);
  CALL2(1,VARREF(Yx8rSastYlocals_bindings_setter),new_bindingsF1928,o_);
  T11 = CALL1(1,VARREF(Yx8rSastYlocals_body),o_);
  T10 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_temporariesX),T11,flat_fun_,new_rF1929);
  CALL2(1,VARREF(Yx8rSastYlocals_body_setter),T10,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_104) {
  P temps_,bindings_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yx8rSastYfunction_temporaries_setter),temps_,FREEREF(0));
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

FUNCODEDEF(fun_adjoin_temporary_variablesX_105) {
  P flat_fun_,new_bindings_;
  P adjoinF1930;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_104,2);
  adjoinF1930 = T1;
  FUNINIT(adjoinF1930, 2,flat_fun_,adjoinF1930);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF1930,T3,new_bindings_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_106) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_107) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_renamed_binding_108) {
  P binding_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(Yx8rSast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  VARSET(Yx8rSast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(Yx8rSastYbinding_type),binding_);
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_dynamic_extentQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG),VARREF(Yx8rSastYbinding_name),T2,VARREF(Yx8rSastYbinding_type),T3,VARREF(Yx8rSastYbinding_dynamic_extentQ),T4,VARREF(Yx8rSastYbinding_index),VARREF(Yx8rSast_linearizeYTrenaming_bindings_counterT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_109) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P T2,T1,T0;
LINK_STACK();
loop:
  VARSET(Yx8rSast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_109;
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yx8rSast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_112) {
  P o_,register_passiveQ_;
  P x_1461F1931;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1461F1931 = VARREF(Yx8rSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_110,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_111,1,x_1461F1931);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_allocate_register_113) {
  P o_,flat_fun_,valQ_;
  P x_1462F1934;
  P tmpF1933;
  P tmpF1932;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF1932 = valQ_;
  if (tmpF1932 != YPfalse) {
    tmpF1933 = flat_fun_;
    if (tmpF1933 != YPfalse) {
      T6 = CALL1(1,VARREF(Yx8rSastYprogram_register),o_);
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
    T8 = CALL1(1,VARREF(Yx8rSastYfunction_registers),flat_fun_);
    T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
    CALL2(1,VARREF(Yx8rSastYprogram_register_setter),T7,o_);
    x_1462F1934 = flat_fun_;
    T12 = CALL1(1,VARREF(Yx8rSastYfunction_registers),x_1462F1934);
    T11 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T12,o_);
    T10 = CALL2(1,VARREF(Yx8rSastYfunction_registers_setter),T11,x_1462F1934);
    T9 = T10;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_114) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yx8rSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL4(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_115) {
  P x_;
  P tmpF1936;
  P next_xF1935;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL1(1,VARREF(Ytail),x_);
    next_xF1935 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF1936 = FREEREF(2);
    if (tmpF1936 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF1935);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF1935;
    x_ = a1;
    goto loop;
    T2 = T8;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_116) {
  P o_,flat_fun_,valQ_;
  P loopF1937;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_115,4);
  loopF1937 = T1;
  FUNINIT(loopF1937, 4,o_,flat_fun_,valQ_,loopF1937);
  T2 = CALL1(0,loopF1937,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_117) {
  P o_,flat_fun_,valQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  if (VARREF(Yx8rSast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(Yx8rSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  } else {
  }
  T1 = CALL4(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_118) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_119) {
  P o_,flat_fun_,valQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yx8rSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_118,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYform_program),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_120) {
  P o_,flat_fun_,valQ_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yx8rSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,VARREF(Yx8rSastYfunction_signature),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSast_linearizeYcollect_registersX),flat_fun_,YPtrue);
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_data_refs),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_debug_name),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T4,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_121) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T0,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_contains_funQ_122) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_123) {
  P y_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(Yx8rSastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(Yx8rSast_linearizeYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  P return_;
  P walkF1938;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_123,2);
  walkF1938 = T0;
  FUNINIT(walkF1938, 2,return_,walkF1938);
  T1 = CALL2(1,VARREF(Yx8rSast_linearizeYast_walk),walkF1938,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_125) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_124,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P Yx8rSast_linearizeY___main_0___() {
  P T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220;
  P T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204;
  P T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188;
  P T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172;
  P T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156;
  P T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140;
  P T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124;
  P T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108;
  P T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92;
  P T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76;
  P T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<assoc>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(Yx8rSast_linearizeYLassocG,T0);
  lit_1 = YPPsym((P)"assoc-key");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_0 = YPmet(FUNCODEREF(fun_assoc_key_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(Yx8rSast_linearizeYassoc_key);
  if (T5 != YPfalse) {
    T4 = VARREF(Yx8rSast_linearizeYassoc_key);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_assoc_key_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(Yx8rSast_linearizeYassoc_key,T3);
  lit_3 = YPPsym((P)"assoc-key-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_1 = YPmet(FUNCODEREF(fun_assoc_key_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yx8rSast_linearizeYassoc_key_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(Yx8rSast_linearizeYassoc_key_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_assoc_key_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yx8rSast_linearizeYassoc_key_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLassocG),VARREF(Yx8rSast_linearizeYassoc_key),VARREF(Yx8rSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"assoc-value");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_2 = YPmet(FUNCODEREF(fun_assoc_value_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rSast_linearizeYassoc_value);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rSast_linearizeYassoc_value);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_assoc_value_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rSast_linearizeYassoc_value,T13);
  lit_6 = YPPsym((P)"assoc-value-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_3 = YPmet(FUNCODEREF(fun_assoc_value_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSast_linearizeYassoc_value_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSast_linearizeYassoc_value_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_assoc_value_setter_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSast_linearizeYassoc_value_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLassocG),VARREF(Yx8rSast_linearizeYassoc_value),VARREF(Yx8rSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"assoc");
  lit_8 = YPPsym((P)"x");
  lit_9 = YPPsym((P)"y");
  T22 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSast_linearizeYLassocG),Ynil);
  Yx8rSast_linearizeYassoc = YPmet(FUNCODEREF(Yx8rSast_linearizeYassoc),LITREF(lit_7),T22,ENVNUL,PNUL,YPfalse);
  T23 = Yx8rSast_linearizeYassoc;
  VARSET(Yx8rSast_linearizeYassoc,T23);
  lit_10 = YPPsym((P)"assocq");
  lit_11 = YPPsym((P)"l");
  T24 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_5 = YPmet(FUNCODEREF(fun_assocq_5),LITREF(lit_10),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(Yx8rSast_linearizeYassocq);
  if (T27 != YPfalse) {
    T26 = VARREF(Yx8rSast_linearizeYassocq);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_assocq_5;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(Yx8rSast_linearizeYassocq,T25);
  lit_12 = YPPsym((P)"update-walk!");
  lit_13 = YPPsym((P)"g");
  lit_14 = YPPsym((P)"o");
  lit_15 = YPPsym((P)"args");
  lit_16 = YPPsym((P)"x-1454");
  lit_17 = YPPsym((P)"x-1453");
  T30 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1454_6 = YPmet(FUNCODEREF(fun_x_1454_6),LITREF(lit_16),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_update_walkX_7 = YPmet(FUNCODEREF(fun_update_walkX_7),LITREF(lit_12),T29,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSast_linearizeYupdate_walkX);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSast_linearizeYupdate_walkX);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_update_walkX_7;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSast_linearizeYupdate_walkX,T31);
  lit_18 = YPPsym((P)"ast-walk");
  lit_19 = YPPsym((P)"x-1456");
  lit_20 = YPPsym((P)"x-1455");
  T36 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1456_8 = YPmet(FUNCODEREF(fun_x_1456_8),LITREF(lit_19),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_9 = YPmet(FUNCODEREF(fun_ast_walk_9),LITREF(lit_18),T35,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(Yx8rSast_linearizeYast_walk);
  if (T39 != YPfalse) {
    T38 = VARREF(Yx8rSast_linearizeYast_walk);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_ast_walk_9;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(Yx8rSast_linearizeYast_walk,T37);
  lit_21 = YPPsym((P)"<box-read>");
  T42 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T41 = CALL2(1,VARREF(Yfab_class),LITREF(lit_21),T42);
  VARSET(Yx8rSast_linearizeYLbox_readG,T41);
  lit_22 = YPPsym((P)"box-reference");
  T43 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_10 = YPmet(FUNCODEREF(fun_box_reference_10),LITREF(lit_22),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(Yx8rSast_linearizeYbox_reference);
  if (T46 != YPfalse) {
    T45 = VARREF(Yx8rSast_linearizeYbox_reference);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_box_reference_10;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(Yx8rSast_linearizeYbox_reference,T44);
  lit_23 = YPPsym((P)"box-reference-setter");
  T48 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_11 = YPmet(FUNCODEREF(fun_box_reference_setter_11),LITREF(lit_23),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(Yx8rSast_linearizeYbox_reference_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(Yx8rSast_linearizeYbox_reference_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_box_reference_setter_11;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(Yx8rSast_linearizeYbox_reference_setter,T49);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLbox_readG),VARREF(Yx8rSast_linearizeYbox_reference),VARREF(Yx8rSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_24 = YPPsym((P)"<box-write>");
  T54 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T53 = CALL2(1,VARREF(Yfab_class),LITREF(lit_24),T54);
  VARSET(Yx8rSast_linearizeYLbox_writeG,T53);
  T55 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_12 = YPmet(FUNCODEREF(fun_box_reference_12),LITREF(lit_22),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(Yx8rSast_linearizeYbox_reference);
  if (T58 != YPfalse) {
    T57 = VARREF(Yx8rSast_linearizeYbox_reference);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_box_reference_12;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(Yx8rSast_linearizeYbox_reference,T56);
  T60 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_13 = YPmet(FUNCODEREF(fun_box_reference_setter_13),LITREF(lit_23),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(Yx8rSast_linearizeYbox_reference_setter);
  if (T63 != YPfalse) {
    T62 = VARREF(Yx8rSast_linearizeYbox_reference_setter);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_box_reference_setter_13;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(Yx8rSast_linearizeYbox_reference_setter,T61);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLbox_writeG),VARREF(Yx8rSast_linearizeYbox_reference),VARREF(Yx8rSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_25 = YPPsym((P)"box-form");
  T65 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_14 = YPmet(FUNCODEREF(fun_box_form_14),LITREF(lit_25),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(Yx8rSast_linearizeYbox_form);
  if (T68 != YPfalse) {
    T67 = VARREF(Yx8rSast_linearizeYbox_form);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_box_form_14;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(Yx8rSast_linearizeYbox_form,T66);
  lit_26 = YPPsym((P)"box-form-setter");
  T70 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_15 = YPmet(FUNCODEREF(fun_box_form_setter_15),LITREF(lit_26),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(Yx8rSast_linearizeYbox_form_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(Yx8rSast_linearizeYbox_form_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_box_form_setter_15;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(Yx8rSast_linearizeYbox_form_setter,T71);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLbox_writeG),VARREF(Yx8rSast_linearizeYbox_form),VARREF(Yx8rSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"<box-creation>");
  T76 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T75 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T76);
  VARSET(Yx8rSast_linearizeYLbox_creationG,T75);
  T77 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_16 = YPmet(FUNCODEREF(fun_box_reference_16),LITREF(lit_22),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(Yx8rSast_linearizeYbox_reference);
  if (T80 != YPfalse) {
    T79 = VARREF(Yx8rSast_linearizeYbox_reference);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_box_reference_16;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(Yx8rSast_linearizeYbox_reference,T78);
  T82 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_17 = YPmet(FUNCODEREF(fun_box_reference_setter_17),LITREF(lit_23),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yx8rSast_linearizeYbox_reference_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(Yx8rSast_linearizeYbox_reference_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_box_reference_setter_17;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yx8rSast_linearizeYbox_reference_setter,T83);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLbox_creationG),VARREF(Yx8rSast_linearizeYbox_reference),VARREF(Yx8rSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_28 = YPPsym((P)"insert-box!");
  T87 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_18 = YPmet(FUNCODEREF(fun_insert_boxX_18),LITREF(lit_28),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T90 != YPfalse) {
    T89 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_insert_boxX_18;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T88);
  T92 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_19 = YPmet(FUNCODEREF(fun_insert_boxX_19),LITREF(lit_28),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T95 != YPfalse) {
    T94 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_insert_boxX_19;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_20 = YPmet(FUNCODEREF(fun_insert_boxX_20),LITREF(lit_28),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T100 != YPfalse) {
    T99 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_insert_boxX_20;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T98);
  T102 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_21 = YPmet(FUNCODEREF(fun_insert_boxX_21),LITREF(lit_28),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T105 != YPfalse) {
    T104 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_insert_boxX_21;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T103);
  T107 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_22 = YPmet(FUNCODEREF(fun_insert_boxX_22),LITREF(lit_28),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T110 != YPfalse) {
    T109 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_insert_boxX_22;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T108);
  T112 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_23 = YPmet(FUNCODEREF(fun_insert_boxX_23),LITREF(lit_28),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T115 != YPfalse) {
    T114 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_insert_boxX_23;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T113);
  lit_29 = YPPsym((P)"boxify-mutable-bindings");
  lit_30 = YPPsym((P)"form");
  lit_31 = YPPsym((P)"bindings");
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPsym((P)"res");
  T118 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_24 = YPmet(FUNCODEREF(fun_loop_24),LITREF(lit_32),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_25 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_25),LITREF(lit_29),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yx8rSast_linearizeYboxify_mutable_bindings);
  if (T121 != YPfalse) {
    T120 = VARREF(Yx8rSast_linearizeYboxify_mutable_bindings);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_boxify_mutable_bindings_25;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yx8rSast_linearizeYboxify_mutable_bindings,T119);
  lit_34 = YPPsym((P)"do-do-call-references!");
  T123 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_referencesX_26 = YPmet(FUNCODEREF(fun_do_do_call_referencesX_26),LITREF(lit_34),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yx8rSast_linearizeYdo_do_call_referencesX);
  if (T126 != YPfalse) {
    T125 = VARREF(Yx8rSast_linearizeYdo_do_call_referencesX);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_do_do_call_referencesX_26;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yx8rSast_linearizeYdo_do_call_referencesX,T124);
  lit_35 = YPPsym((P)"do-call-references!");
  T128 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_27 = YPmet(FUNCODEREF(fun_do_call_referencesX_27),LITREF(lit_35),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yx8rSast_linearizeYdo_call_referencesX);
  if (T131 != YPfalse) {
    T130 = VARREF(Yx8rSast_linearizeYdo_call_referencesX);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_do_call_referencesX_27;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yx8rSast_linearizeYdo_call_referencesX,T129);
  T133 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_28 = YPmet(FUNCODEREF(fun_do_call_referencesX_28),LITREF(lit_35),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yx8rSast_linearizeYdo_call_referencesX);
  if (T136 != YPfalse) {
    T135 = VARREF(Yx8rSast_linearizeYdo_call_referencesX);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_do_call_referencesX_28;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yx8rSast_linearizeYdo_call_referencesX,T134);
  lit_36 = YPPsym((P)"analyze-call-references");
  T138 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_call_references_29 = YPmet(FUNCODEREF(fun_analyze_call_references_29),LITREF(lit_36),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(Yx8rSast_linearizeYanalyze_call_references);
  if (T141 != YPfalse) {
    T140 = VARREF(Yx8rSast_linearizeYanalyze_call_references);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_analyze_call_references_29;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(Yx8rSast_linearizeYanalyze_call_references,T139);
  lit_37 = YPPsym((P)"do-do-dynamic-extent!");
  T143 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_dynamic_extentX_30 = YPmet(FUNCODEREF(fun_do_do_dynamic_extentX_30),LITREF(lit_37),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(Yx8rSast_linearizeYdo_do_dynamic_extentX);
  if (T146 != YPfalse) {
    T145 = VARREF(Yx8rSast_linearizeYdo_do_dynamic_extentX);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_do_do_dynamic_extentX_30;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(Yx8rSast_linearizeYdo_do_dynamic_extentX,T144);
  lit_38 = YPPsym((P)"do-dynamic-extent!");
  T148 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_31 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_31),LITREF(lit_38),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Yx8rSast_linearizeYdo_dynamic_extentX);
  if (T151 != YPfalse) {
    T150 = VARREF(Yx8rSast_linearizeYdo_dynamic_extentX);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_do_dynamic_extentX_31;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Yx8rSast_linearizeYdo_dynamic_extentX,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_32 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_32),LITREF(lit_38),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(Yx8rSast_linearizeYdo_dynamic_extentX);
  if (T156 != YPfalse) {
    T155 = VARREF(Yx8rSast_linearizeYdo_dynamic_extentX);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_do_dynamic_extentX_32;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(Yx8rSast_linearizeYdo_dynamic_extentX,T154);
  lit_39 = YPPsym((P)"analyze-dynamic-extent");
  T158 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_dynamic_extent_33 = YPmet(FUNCODEREF(fun_analyze_dynamic_extent_33),LITREF(lit_39),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(Yx8rSast_linearizeYanalyze_dynamic_extent);
  if (T161 != YPfalse) {
    T160 = VARREF(Yx8rSast_linearizeYanalyze_dynamic_extent);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_analyze_dynamic_extent_33;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(Yx8rSast_linearizeYanalyze_dynamic_extent,T159);
  lit_40 = YPPsym((P)"do-do-call-upgrades!");
  T163 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_upgradesX_34 = YPmet(FUNCODEREF(fun_do_do_call_upgradesX_34),LITREF(lit_40),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yx8rSast_linearizeYdo_do_call_upgradesX);
  if (T166 != YPfalse) {
    T165 = VARREF(Yx8rSast_linearizeYdo_do_call_upgradesX);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_do_do_call_upgradesX_34;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yx8rSast_linearizeYdo_do_call_upgradesX,T164);
  lit_41 = YPPsym((P)"do-call-upgrades!");
  T168 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_35 = YPmet(FUNCODEREF(fun_do_call_upgradesX_35),LITREF(lit_41),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(Yx8rSast_linearizeYdo_call_upgradesX);
  if (T171 != YPfalse) {
    T170 = VARREF(Yx8rSast_linearizeYdo_call_upgradesX);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_do_call_upgradesX_35;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Yx8rSast_linearizeYdo_call_upgradesX,T169);
  lit_42 = YPPsym((P)"unconstrained-type?");
  lit_43 = YPPsym((P)"b");
  T173 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_36 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_36),LITREF(lit_42),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(Yx8rSast_linearizeYunconstrained_typeQ);
  if (T176 != YPfalse) {
    T175 = VARREF(Yx8rSast_linearizeYunconstrained_typeQ);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_unconstrained_typeQ_36;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(Yx8rSast_linearizeYunconstrained_typeQ,T174);
  lit_44 = YPPsym((P)"goo/boot");
  lit_45 = YPPsym((P)"<any>");
  T178 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_37 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_37),LITREF(lit_42),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yx8rSast_linearizeYunconstrained_typeQ);
  if (T181 != YPfalse) {
    T180 = VARREF(Yx8rSast_linearizeYunconstrained_typeQ);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_unconstrained_typeQ_37;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yx8rSast_linearizeYunconstrained_typeQ,T179);
  T183 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_38 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_38),LITREF(lit_42),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yx8rSast_linearizeYunconstrained_typeQ);
  if (T186 != YPfalse) {
    T185 = VARREF(Yx8rSast_linearizeYunconstrained_typeQ);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_unconstrained_typeQ_38;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yx8rSast_linearizeYunconstrained_typeQ,T184);
  T189 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T189,ENVNUL,PNUL,YPfalse);
  T188 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_40 = YPmet(FUNCODEREF(fun_do_call_upgradesX_40),LITREF(lit_41),T188,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(Yx8rSast_linearizeYdo_call_upgradesX);
  if (T192 != YPfalse) {
    T191 = VARREF(Yx8rSast_linearizeYdo_call_upgradesX);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_do_call_upgradesX_40;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(Yx8rSast_linearizeYdo_call_upgradesX,T190);
  lit_46 = YPPsym((P)"analyze-calls");
  T194 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_calls_41 = YPmet(FUNCODEREF(fun_analyze_calls_41),LITREF(lit_46),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(Yx8rSast_linearizeYanalyze_calls);
  if (T197 != YPfalse) {
    T196 = VARREF(Yx8rSast_linearizeYanalyze_calls);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_analyze_calls_41;
  T195 = CALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(Yx8rSast_linearizeYanalyze_calls,T195);
  lit_47 = YPPsym((P)"<free-reference>");
  T200 = (P)YPpair(VARREF(Yx8rSastYLreal_referenceG),Ynil);
  T199 = CALL2(1,VARREF(Yfab_class),LITREF(lit_47),T200);
  VARSET(Yx8rSast_linearizeYLfree_referenceG,T199);
  lit_48 = YPPsym((P)"reference-offset");
  T201 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_42 = YPmet(FUNCODEREF(fun_reference_offset_42),LITREF(lit_48),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(Yx8rSast_linearizeYreference_offset);
  if (T204 != YPfalse) {
    T203 = VARREF(Yx8rSast_linearizeYreference_offset);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_reference_offset_42;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(Yx8rSast_linearizeYreference_offset,T202);
  lit_49 = YPPsym((P)"reference-offset-setter");
  T207 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T206 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T207,VARREF(Yx8rSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_43 = YPmet(FUNCODEREF(fun_reference_offset_setter_43),LITREF(lit_49),T206,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(Yx8rSast_linearizeYreference_offset_setter);
  if (T210 != YPfalse) {
    T209 = VARREF(Yx8rSast_linearizeYreference_offset_setter);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_reference_offset_setter_43;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(Yx8rSast_linearizeYreference_offset_setter,T208);
  T212 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLfree_referenceG),VARREF(Yx8rSast_linearizeYreference_offset),VARREF(Yx8rSast_linearizeYreference_offset_setter),T212,VARREF(YPprop_unbound_error));
  lit_50 = YPPsym((P)"reference-self?");
  T213 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_44 = YPmet(FUNCODEREF(fun_reference_selfQ_44),LITREF(lit_50),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(Yx8rSast_linearizeYreference_selfQ);
  if (T216 != YPfalse) {
    T215 = VARREF(Yx8rSast_linearizeYreference_selfQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_reference_selfQ_44;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(Yx8rSast_linearizeYreference_selfQ,T214);
  lit_51 = YPPsym((P)"reference-self?-setter");
  T218 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLlogG),VARREF(Yx8rSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_45 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_45),LITREF(lit_51),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(Yx8rSast_linearizeYreference_selfQ_setter);
  if (T221 != YPfalse) {
    T220 = VARREF(Yx8rSast_linearizeYreference_selfQ_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_reference_selfQ_setter_45;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(Yx8rSast_linearizeYreference_selfQ_setter,T219);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLfree_referenceG),VARREF(Yx8rSast_linearizeYreference_selfQ),VARREF(Yx8rSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_52 = YPPsym((P)"lift!");
  T223 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_46 = YPmet(FUNCODEREF(fun_liftX_46),LITREF(lit_52),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(Yx8rSast_linearizeYliftX);
  if (T226 != YPfalse) {
    T225 = VARREF(Yx8rSast_linearizeYliftX);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_liftX_46;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(Yx8rSast_linearizeYliftX,T224);
  lit_53 = YPPsym((P)"lift-procedures!");
  lit_54 = YPPsym((P)"flat-fun");
  T230 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T229 = fun_lift_proceduresX_47 = YPmet(FUNCODEREF(fun_lift_proceduresX_47),LITREF(lit_53),T230,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T234 != YPfalse) {
    T233 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_lift_proceduresX_47;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  T231 = VARSET(Yx8rSast_linearizeYlift_proceduresX,T232);
  T228 = T231;
  return T228;
}

P Yx8rSast_linearizeY___main_1___() {
  P T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267;
  P T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251;
  P T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235;
  P T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219;
  P T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203;
  P T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187;
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_48 = YPmet(FUNCODEREF(fun_lift_proceduresX_48),LITREF(lit_53),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_lift_proceduresX_48;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T1);
  lit_55 = YPPsym((P)"adjoin-free-binding!");
  lit_56 = YPPsym((P)"ref");
  lit_57 = YPPsym((P)"check");
  lit_58 = YPPsym((P)"i");
  lit_59 = YPPsym((P)"free*");
  lit_60 = YPPsym((P)"add");
  T7 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_49 = YPmet(FUNCODEREF(fun_add_49),LITREF(lit_60),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_58),LITREF(lit_59)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_50 = YPmet(FUNCODEREF(fun_check_50),LITREF(lit_57),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_56)),YPPlist(2,VARREF(Yx8rSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_51 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_51),LITREF(lit_55),T5,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yx8rSast_linearizeYadjoin_free_bindingX);
  if (T10 != YPfalse) {
    T9 = VARREF(Yx8rSast_linearizeYadjoin_free_bindingX);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_adjoin_free_bindingX_51;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yx8rSast_linearizeYadjoin_free_bindingX,T8);
  T12 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_52 = YPmet(FUNCODEREF(fun_lift_proceduresX_52),LITREF(lit_53),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_lift_proceduresX_52;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T13);
  T17 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_53 = YPmet(FUNCODEREF(fun_lift_proceduresX_53),LITREF(lit_53),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_lift_proceduresX_53;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T18);
  T22 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_54 = YPmet(FUNCODEREF(fun_lift_proceduresX_54),LITREF(lit_53),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T25 != YPfalse) {
    T24 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_lift_proceduresX_54;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T23);
  T27 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_55 = YPmet(FUNCODEREF(fun_lift_proceduresX_55),LITREF(lit_53),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T30 != YPfalse) {
    T29 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_lift_proceduresX_55;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T28);
  T32 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_56 = YPmet(FUNCODEREF(fun_lift_proceduresX_56),LITREF(lit_53),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T35 != YPfalse) {
    T34 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_lift_proceduresX_56;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T33);
  lit_61 = YPPsym((P)"<flattened-program>");
  T38 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T37 = CALL2(1,VARREF(Yfab_class),LITREF(lit_61),T38);
  VARSET(Yx8rSast_linearizeYLflattened_programG,T37);
  lit_62 = YPPsym((P)"program-form");
  T39 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_57 = YPmet(FUNCODEREF(fun_program_form_57),LITREF(lit_62),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yx8rSast_linearizeYprogram_form);
  if (T42 != YPfalse) {
    T41 = VARREF(Yx8rSast_linearizeYprogram_form);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_program_form_57;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yx8rSast_linearizeYprogram_form,T40);
  lit_63 = YPPsym((P)"program-form-setter");
  T45 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(Yx8rSastYLprogramG));
  T44 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T45,VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_58 = YPmet(FUNCODEREF(fun_program_form_setter_58),LITREF(lit_63),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yx8rSast_linearizeYprogram_form_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(Yx8rSast_linearizeYprogram_form_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_program_form_setter_58;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yx8rSast_linearizeYprogram_form_setter,T46);
  T50 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(Yx8rSastYLprogramG));
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(Yx8rSast_linearizeYprogram_form),VARREF(Yx8rSast_linearizeYprogram_form_setter),T50,VARREF(YPprop_unbound_error));
  lit_64 = YPPsym((P)"program-quotations");
  T51 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_59 = YPmet(FUNCODEREF(fun_program_quotations_59),LITREF(lit_64),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(Yx8rSast_linearizeYprogram_quotations);
  if (T54 != YPfalse) {
    T53 = VARREF(Yx8rSast_linearizeYprogram_quotations);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_program_quotations_59;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(Yx8rSast_linearizeYprogram_quotations,T52);
  lit_65 = YPPsym((P)"program-quotations-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_60 = YPmet(FUNCODEREF(fun_program_quotations_setter_60),LITREF(lit_65),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yx8rSast_linearizeYprogram_quotations_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(Yx8rSast_linearizeYprogram_quotations_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_program_quotations_setter_60;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yx8rSast_linearizeYprogram_quotations_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_61;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(Yx8rSast_linearizeYprogram_quotations),VARREF(Yx8rSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T62);
  lit_66 = YPPsym((P)"program-definitions");
  T63 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_62 = YPmet(FUNCODEREF(fun_program_definitions_62),LITREF(lit_66),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Yx8rSast_linearizeYprogram_definitions);
  if (T66 != YPfalse) {
    T65 = VARREF(Yx8rSast_linearizeYprogram_definitions);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_program_definitions_62;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yx8rSast_linearizeYprogram_definitions,T64);
  lit_67 = YPPsym((P)"program-definitions-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_63 = YPmet(FUNCODEREF(fun_program_definitions_setter_63),LITREF(lit_67),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rSast_linearizeYprogram_definitions_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rSast_linearizeYprogram_definitions_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_program_definitions_setter_63;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rSast_linearizeYprogram_definitions_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_64;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(Yx8rSast_linearizeYprogram_definitions),VARREF(Yx8rSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T74);
  lit_68 = YPPsym((P)"<top-level-form>");
  T76 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T75 = CALL2(1,VARREF(Yfab_class),LITREF(lit_68),T76);
  VARSET(Yx8rSast_linearizeYLtop_level_formG,T75);
  lit_69 = YPPsym((P)"form-program");
  T77 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_65 = YPmet(FUNCODEREF(fun_form_program_65),LITREF(lit_69),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(Yx8rSast_linearizeYform_program);
  if (T80 != YPfalse) {
    T79 = VARREF(Yx8rSast_linearizeYform_program);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_form_program_65;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(Yx8rSast_linearizeYform_program,T78);
  lit_70 = YPPsym((P)"form-program-setter");
  T82 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_66 = YPmet(FUNCODEREF(fun_form_program_setter_66),LITREF(lit_70),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yx8rSast_linearizeYform_program_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(Yx8rSast_linearizeYform_program_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_form_program_setter_66;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yx8rSast_linearizeYform_program_setter,T83);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_program),VARREF(Yx8rSast_linearizeYform_program_setter),VARREF(Yx8rSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_71 = YPPsym((P)"form-quotations");
  T87 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_67 = YPmet(FUNCODEREF(fun_form_quotations_67),LITREF(lit_71),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yx8rSast_linearizeYform_quotations);
  if (T90 != YPfalse) {
    T89 = VARREF(Yx8rSast_linearizeYform_quotations);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_form_quotations_67;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yx8rSast_linearizeYform_quotations,T88);
  lit_72 = YPPsym((P)"form-quotations-setter");
  T92 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_68 = YPmet(FUNCODEREF(fun_form_quotations_setter_68),LITREF(lit_72),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yx8rSast_linearizeYform_quotations_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(Yx8rSast_linearizeYform_quotations_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_form_quotations_setter_68;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yx8rSast_linearizeYform_quotations_setter,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T98 = fun_69;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_quotations),VARREF(Yx8rSast_linearizeYform_quotations_setter),VARREF(YLanyG),T98);
  lit_73 = YPPsym((P)"form-definitions");
  T99 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_70 = YPmet(FUNCODEREF(fun_form_definitions_70),LITREF(lit_73),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(Yx8rSast_linearizeYform_definitions);
  if (T102 != YPfalse) {
    T101 = VARREF(Yx8rSast_linearizeYform_definitions);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_form_definitions_70;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(Yx8rSast_linearizeYform_definitions,T100);
  lit_74 = YPPsym((P)"form-definitions-setter");
  T104 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_71 = YPmet(FUNCODEREF(fun_form_definitions_setter_71),LITREF(lit_74),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(Yx8rSast_linearizeYform_definitions_setter);
  if (T107 != YPfalse) {
    T106 = VARREF(Yx8rSast_linearizeYform_definitions_setter);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_form_definitions_setter_71;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(Yx8rSast_linearizeYform_definitions_setter,T105);
  T109 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T110 = fun_72;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_definitions),VARREF(Yx8rSast_linearizeYform_definitions_setter),VARREF(YLanyG),T110);
  lit_75 = YPPsym((P)"<closure-creation>");
  T112 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T111 = CALL2(1,VARREF(Yfab_class),LITREF(lit_75),T112);
  VARSET(Yx8rSast_linearizeYLclosure_creationG,T111);
  lit_76 = YPPsym((P)"closure-creation-index");
  T113 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_73 = YPmet(FUNCODEREF(fun_closure_creation_index_73),LITREF(lit_76),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(Yx8rSast_linearizeYclosure_creation_index);
  if (T116 != YPfalse) {
    T115 = VARREF(Yx8rSast_linearizeYclosure_creation_index);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_closure_creation_index_73;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(Yx8rSast_linearizeYclosure_creation_index,T114);
  lit_77 = YPPsym((P)"closure-creation-index-setter");
  T118 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_74 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_74),LITREF(lit_77),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yx8rSast_linearizeYclosure_creation_index_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(Yx8rSast_linearizeYclosure_creation_index_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_closure_creation_index_setter_74;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yx8rSast_linearizeYclosure_creation_index_setter,T119);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(Yx8rSast_linearizeYclosure_creation_index),VARREF(Yx8rSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"closure-creation-free");
  T123 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_75 = YPmet(FUNCODEREF(fun_closure_creation_free_75),LITREF(lit_78),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yx8rSast_linearizeYclosure_creation_free);
  if (T126 != YPfalse) {
    T125 = VARREF(Yx8rSast_linearizeYclosure_creation_free);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_closure_creation_free_75;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yx8rSast_linearizeYclosure_creation_free,T124);
  lit_79 = YPPsym((P)"closure-creation-free-setter");
  T128 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_76 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_76),LITREF(lit_79),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yx8rSast_linearizeYclosure_creation_free_setter);
  if (T131 != YPfalse) {
    T130 = VARREF(Yx8rSast_linearizeYclosure_creation_free_setter);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_closure_creation_free_setter_76;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yx8rSast_linearizeYclosure_creation_free_setter,T129);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(Yx8rSast_linearizeYclosure_creation_free),VARREF(Yx8rSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_80 = YPPsym((P)"flatten-seqs");
  T133 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_77 = YPmet(FUNCODEREF(fun_flatten_seqs_77),LITREF(lit_80),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yx8rSast_linearizeYflatten_seqs);
  if (T136 != YPfalse) {
    T135 = VARREF(Yx8rSast_linearizeYflatten_seqs);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_flatten_seqs_77;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yx8rSast_linearizeYflatten_seqs,T134);
  lit_81 = YPPsym((P)"s");
  lit_82 = YPPsym((P)"r");
  lit_83 = YPPsym((P)"inner");
  lit_84 = YPPsym((P)"ss");
  T140 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_78 = YPmet(FUNCODEREF(fun_inner_78),LITREF(lit_83),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_81),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_79 = YPmet(FUNCODEREF(fun_loop_79),LITREF(lit_32),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_80 = YPmet(FUNCODEREF(fun_flatten_seqs_80),LITREF(lit_80),T138,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(Yx8rSast_linearizeYflatten_seqs);
  if (T143 != YPfalse) {
    T142 = VARREF(Yx8rSast_linearizeYflatten_seqs);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_flatten_seqs_80;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(Yx8rSast_linearizeYflatten_seqs,T141);
  lit_85 = YPPsym((P)"as-top-level-forms");
  lit_86 = YPPsym((P)"programs");
  T146 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_82 = YPmet(FUNCODEREF(fun_as_top_level_forms_82),LITREF(lit_85),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(Yx8rSast_linearizeYas_top_level_forms);
  if (T149 != YPfalse) {
    T148 = VARREF(Yx8rSast_linearizeYas_top_level_forms);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_as_top_level_forms_82;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(Yx8rSast_linearizeYas_top_level_forms,T147);
  lit_87 = YPPsym((P)"extract-things!");
  T152 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_84 = YPmet(FUNCODEREF(fun_extract_thingsX_84),LITREF(lit_87),T151,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(Yx8rSast_linearizeYextract_thingsX);
  if (T155 != YPfalse) {
    T154 = VARREF(Yx8rSast_linearizeYextract_thingsX);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_extract_thingsX_84;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(Yx8rSast_linearizeYextract_thingsX,T153);
  lit_88 = YPPsym((P)"extract!");
  lit_89 = YPPsym((P)"result");
  T157 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_85 = YPmet(FUNCODEREF(fun_extractX_85),LITREF(lit_88),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T160 != YPfalse) {
    T159 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_extractX_85;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(Yx8rSast_linearizeYextractX,T158);
  lit_90 = YPPsym((P)"quotation");
  T162 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_86 = YPmet(FUNCODEREF(fun_extractX_86),LITREF(lit_88),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T165 != YPfalse) {
    T164 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_extractX_86;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(Yx8rSast_linearizeYextractX,T163);
  T167 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLraw_constantG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_87 = YPmet(FUNCODEREF(fun_extractX_87),LITREF(lit_88),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T170 != YPfalse) {
    T169 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_extractX_87;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(Yx8rSast_linearizeYextractX,T168);
  lit_91 = YPPsym((P)"binding");
  T173 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLast_methodG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_89 = YPmet(FUNCODEREF(fun_extractX_89),LITREF(lit_88),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T176 != YPfalse) {
    T175 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_extractX_89;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(Yx8rSast_linearizeYextractX,T174);
  T178 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLast_primitive_definitionG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_90 = YPmet(FUNCODEREF(fun_extractX_90),LITREF(lit_88),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T181 != YPfalse) {
    T180 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_extractX_90;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yx8rSast_linearizeYextractX,T179);
  lit_92 = YPPsym((P)"adjoin-definition!");
  T183 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_89),LITREF(lit_8)),YPPlist(3,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_91 = YPmet(FUNCODEREF(fun_adjoin_definitionX_91),LITREF(lit_92),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yx8rSast_linearizeYadjoin_definitionX);
  if (T186 != YPfalse) {
    T185 = VARREF(Yx8rSast_linearizeYadjoin_definitionX);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_adjoin_definitionX_91;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yx8rSast_linearizeYadjoin_definitionX,T184);
  lit_93 = YPPsym((P)"split-program");
  lit_94 = YPPsym((P)"max-count");
  T188 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_92 = YPmet(FUNCODEREF(fun_split_program_92),LITREF(lit_93),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(Yx8rSast_linearizeYsplit_program);
  if (T191 != YPfalse) {
    T190 = VARREF(Yx8rSast_linearizeYsplit_program);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_split_program_92;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(Yx8rSast_linearizeYsplit_program,T189);
  lit_95 = YPPsym((P)"forms");
  lit_96 = YPPsym((P)"es");
  lit_97 = YPPsym((P)"count");
  T195 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_96),LITREF(lit_97)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_93 = YPmet(FUNCODEREF(fun_inner_93),LITREF(lit_83),T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_94 = YPmet(FUNCODEREF(fun_loop_94),LITREF(lit_32),T194,ENVNUL,PNUL,YPfalse);
  T193 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(Yx8rSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_95 = YPmet(FUNCODEREF(fun_split_program_95),LITREF(lit_93),T193,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(Yx8rSast_linearizeYsplit_program);
  if (T198 != YPfalse) {
    T197 = VARREF(Yx8rSast_linearizeYsplit_program);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_split_program_95;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(Yx8rSast_linearizeYsplit_program,T196);
  lit_98 = YPPsym((P)"closurize-main!");
  lit_99 = YPPsym((P)"calls");
  lit_100 = YPPsym((P)"defns");
  lit_101 = YPsb((P)"---main-");
  lit_102 = YPsb((P)"---");
  lit_103 = YPPsym((P)"predefined");
  T201 = YPsig(YPPlist(4,LITREF(lit_99),LITREF(lit_100),LITREF(lit_58),LITREF(lit_95)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_96 = YPmet(FUNCODEREF(fun_loop_96),LITREF(lit_32),T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_82),LITREF(lit_94)),YPPlist(3,VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_97 = YPmet(FUNCODEREF(fun_closurize_mainX_97),LITREF(lit_98),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(Yx8rSast_linearizeYclosurize_mainX);
  if (T204 != YPfalse) {
    T203 = VARREF(Yx8rSast_linearizeYclosurize_mainX);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_closurize_mainX_97;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(Yx8rSast_linearizeYclosurize_mainX,T202);
  lit_104 = YPPsym((P)"gather-temporaries!");
  lit_105 = YPPsym((P)"def");
  T207 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T207,ENVNUL,PNUL,YPfalse);
  T206 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_99 = YPmet(FUNCODEREF(fun_gather_temporariesX_99),LITREF(lit_104),T206,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(Yx8rSast_linearizeYgather_temporariesX);
  if (T210 != YPfalse) {
    T209 = VARREF(Yx8rSast_linearizeYgather_temporariesX);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_gather_temporariesX_99;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(Yx8rSast_linearizeYgather_temporariesX,T208);
  lit_106 = YPPsym((P)"collect-temporaries!");
  T212 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_100 = YPmet(FUNCODEREF(fun_collect_temporariesX_100),LITREF(lit_106),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(Yx8rSast_linearizeYcollect_temporariesX);
  if (T215 != YPfalse) {
    T214 = VARREF(Yx8rSast_linearizeYcollect_temporariesX);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_collect_temporariesX_100;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(Yx8rSast_linearizeYcollect_temporariesX,T213);
  T217 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(Yx8rSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_101 = YPmet(FUNCODEREF(fun_collect_temporariesX_101),LITREF(lit_106),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(Yx8rSast_linearizeYcollect_temporariesX);
  if (T220 != YPfalse) {
    T219 = VARREF(Yx8rSast_linearizeYcollect_temporariesX);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_collect_temporariesX_101;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(Yx8rSast_linearizeYcollect_temporariesX,T218);
  T222 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(Yx8rSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_102 = YPmet(FUNCODEREF(fun_collect_temporariesX_102),LITREF(lit_106),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(Yx8rSast_linearizeYcollect_temporariesX);
  if (T225 != YPfalse) {
    T224 = VARREF(Yx8rSast_linearizeYcollect_temporariesX);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_collect_temporariesX_102;
  T223 = CALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(Yx8rSast_linearizeYcollect_temporariesX,T223);
  T227 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(Yx8rSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_103 = YPmet(FUNCODEREF(fun_collect_temporariesX_103),LITREF(lit_106),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(Yx8rSast_linearizeYcollect_temporariesX);
  if (T230 != YPfalse) {
    T229 = VARREF(Yx8rSast_linearizeYcollect_temporariesX);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_collect_temporariesX_103;
  T228 = CALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(Yx8rSast_linearizeYcollect_temporariesX,T228);
  lit_107 = YPPsym((P)"adjoin-temporary-variables!");
  lit_108 = YPPsym((P)"new-bindings");
  lit_109 = YPPsym((P)"adjoin");
  lit_110 = YPPsym((P)"temps");
  T233 = YPsig(YPPlist(2,LITREF(lit_110),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_104 = YPmet(FUNCODEREF(fun_adjoin_104),LITREF(lit_109),T233,ENVNUL,PNUL,YPfalse);
  T232 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_105 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_105),LITREF(lit_107),T232,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(Yx8rSast_linearizeYadjoin_temporary_variablesX);
  if (T236 != YPfalse) {
    T235 = VARREF(Yx8rSast_linearizeYadjoin_temporary_variablesX);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_adjoin_temporary_variablesX_105;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(Yx8rSast_linearizeYadjoin_temporary_variablesX,T234);
  lit_111 = YPPsym((P)"<renamed-local-binding>");
  T239 = (P)YPpair(VARREF(Yx8rSastYLlocal_bindingG),Ynil);
  T238 = CALL2(1,VARREF(Yfab_class),LITREF(lit_111),T239);
  VARSET(Yx8rSast_linearizeYLrenamed_local_bindingG,T238);
  lit_112 = YPPsym((P)"binding-index");
  T240 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_106 = YPmet(FUNCODEREF(fun_binding_index_106),LITREF(lit_112),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(Yx8rSastYbinding_index);
  if (T243 != YPfalse) {
    T242 = VARREF(Yx8rSastYbinding_index);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_binding_index_106;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(Yx8rSastYbinding_index,T241);
  lit_113 = YPPsym((P)"binding-index-setter");
  T245 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_107 = YPmet(FUNCODEREF(fun_binding_index_setter_107),LITREF(lit_113),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(Yx8rSastYbinding_index_setter);
  if (T248 != YPfalse) {
    T247 = VARREF(Yx8rSastYbinding_index_setter);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_binding_index_setter_107;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(Yx8rSastYbinding_index_setter,T246);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG),VARREF(Yx8rSastYbinding_index),VARREF(Yx8rSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  VARSET(Yx8rSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_114 = YPPsym((P)"new-renamed-binding");
  T250 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_108 = YPmet(FUNCODEREF(fun_new_renamed_binding_108),LITREF(lit_114),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(Yx8rSast_linearizeYnew_renamed_binding);
  if (T253 != YPfalse) {
    T252 = VARREF(Yx8rSast_linearizeYnew_renamed_binding);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_new_renamed_binding_108;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(Yx8rSast_linearizeYnew_renamed_binding,T251);
  VARSET(Yx8rSast_linearizeYTregister_passiveQT,YPfalse);
  lit_115 = YPPsym((P)"register-allocate!");
  lit_116 = YPPsym((P)"register-passive?");
  T258 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_116)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_112 = YPmet(FUNCODEREF(fun_register_allocateX_112),LITREF(lit_115),T255,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(Yx8rSast_linearizeYregister_allocateX);
  if (T261 != YPfalse) {
    T260 = VARREF(Yx8rSast_linearizeYregister_allocateX);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_register_allocateX_112;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(Yx8rSast_linearizeYregister_allocateX,T259);
  lit_117 = YPPsym((P)"allocate-register");
  lit_118 = YPPsym((P)"val?");
  T263 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_allocate_register_113 = YPmet(FUNCODEREF(fun_allocate_register_113),LITREF(lit_117),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(Yx8rSast_linearizeYallocate_register);
  if (T266 != YPfalse) {
    T265 = VARREF(Yx8rSast_linearizeYallocate_register);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_allocate_register_113;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(Yx8rSast_linearizeYallocate_register,T264);
  lit_119 = YPPsym((P)"collect-registers!");
  T268 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_114 = YPmet(FUNCODEREF(fun_collect_registersX_114),LITREF(lit_119),T268,ENVNUL,PNUL,YPfalse);
  T271 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T271 != YPfalse) {
    T270 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T270 = YPfalse;
  }
  T272 = fun_collect_registersX_114;
  T269 = CALL2(1,VARREF(YPdefine_method),T270,T272);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T269);
  T277 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T276 = fun_loop_115 = YPmet(FUNCODEREF(fun_loop_115),LITREF(lit_32),T277,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T274 = fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_119),T275,ENVNUL,PNUL,YPfalse);
  T281 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T281 != YPfalse) {
    T280 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_collect_registersX_116;
  T279 = CALL2(1,VARREF(YPdefine_method),T280,T282);
  T278 = VARSET(Yx8rSast_linearizeYcollect_registersX,T279);
  T273 = T278;
  return T273;
}

P Yx8rSast_linearizeY___main_2___() {
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_117 = YPmet(FUNCODEREF(fun_collect_registersX_117),LITREF(lit_119),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_collect_registersX_117;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T1);
  T6 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_119 = YPmet(FUNCODEREF(fun_collect_registersX_119),LITREF(lit_119),T5,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T9 != YPfalse) {
    T8 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_collect_registersX_119;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T7);
  T11 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_120 = YPmet(FUNCODEREF(fun_collect_registersX_120),LITREF(lit_119),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T14 != YPfalse) {
    T13 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_collect_registersX_120;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T12);
  T16 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_121 = YPmet(FUNCODEREF(fun_collect_registersX_121),LITREF(lit_119),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T19 != YPfalse) {
    T18 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_collect_registersX_121;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T17);
  lit_120 = YPPsym((P)"ast-contains-fun?");
  T21 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(Yx8rSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_122 = YPmet(FUNCODEREF(fun_ast_contains_funQ_122),LITREF(lit_120),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(Yx8rSast_linearizeYast_contains_funQ);
  if (T24 != YPfalse) {
    T23 = VARREF(Yx8rSast_linearizeYast_contains_funQ);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_ast_contains_funQ_122;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(Yx8rSast_linearizeYast_contains_funQ,T22);
  lit_121 = YPPsym((P)"return");
  lit_122 = YPPsym((P)"walk");
  T28 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_123 = YPmet(FUNCODEREF(fun_walk_123),LITREF(lit_122),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_121)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_125 = YPmet(FUNCODEREF(fun_ast_contains_funQ_125),LITREF(lit_120),T26,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(Yx8rSast_linearizeYast_contains_funQ);
  if (T31 != YPfalse) {
    T30 = VARREF(Yx8rSast_linearizeYast_contains_funQ);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_ast_contains_funQ_125;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(Yx8rSast_linearizeYast_contains_funQ,T29);
  T33 = YPfalse;
  return T33;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_x8rSast;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_x8rSast},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"fix-let-bindings", &module_info_x8rSast, "fix-let-bindings"},
  {"assignment-reference", &module_info_x8rSast, "assignment-reference"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"binding-locative", &module_info_x8rSast, "binding-locative"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"constant-value", &module_info_x8rSast, "constant-value"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"read", &module_info_gooSruntime, "read"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"while", &module_info_gooSmacros, "while"},
  {"~=", &module_info_gooSmath, "~="},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<constant>", &module_info_x8rSast, "<constant>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"rem", &module_info_gooSmath, "rem"},
  {"now", &module_info_gooScolsScol, "now"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"module-exports", &module_info_x8rSast, "module-exports"},
  {"t+", &module_info_gooStypes, "t+"},
  {"$e", &module_info_gooSmath, "$e"},
  {"~", &module_info_gooSmath, "~"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"locals-bindings-setter", &module_info_x8rSast, "locals-bindings-setter"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<global-reference>", &module_info_x8rSast, "<global-reference>"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"function-free-setter", &module_info_x8rSast, "function-free-setter"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"format", &module_info_gooSruntime, "format"},
  {"<ast-signature>", &module_info_x8rSast, "<ast-signature>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"free-environment", &module_info_x8rSast, "free-environment"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"def-list", &module_info_x8rSast, "def-list"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"locals-functions-setter", &module_info_x8rSast, "locals-functions-setter"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"signature-value", &module_info_x8rSast, "signature-value"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"locals-body-setter", &module_info_x8rSast, "locals-body-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"program-type-setter", &module_info_x8rSast, "program-type-setter"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"binding-dotted?", &module_info_x8rSast, "binding-dotted?"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"function-signature-setter", &module_info_x8rSast, "function-signature-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"$goo-boot-module-name", &module_info_x8rSast, "$goo-boot-module-name"},
  {"compile-time-program", &module_info_x8rSast, "compile-time-program"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"binding-value", &module_info_x8rSast, "binding-value"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<fab-list>", &module_info_x8rSast, "<fab-list>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"binding-inferred-type-setter", &module_info_x8rSast, "binding-inferred-type-setter"},
  {"ct", &module_info_gooSboot, "ct"},
  {"reference-called-function?-setter", &module_info_x8rSast, "reference-called-function?-setter"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"reference-binding", &module_info_x8rSast, "reference-binding"},
  {"function-free", &module_info_x8rSast, "function-free"},
  {"function-self-recursive?-setter", &module_info_x8rSast, "function-self-recursive?-setter"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"signature-names-setter", &module_info_x8rSast, "signature-names-setter"},
  {"reference-frame-number", &module_info_x8rSast, "reference-frame-number"},
  {"module-name-to-relpath", &module_info_x8rSast, "module-name-to-relpath"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"locals-body", &module_info_x8rSast, "locals-body"},
  {"<ast-primitive-definition>", &module_info_x8rSast, "<ast-primitive-definition>"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"app", &module_info_gooSmacros, "app"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"function-source", &module_info_x8rSast, "function-source"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<local-assignment>", &module_info_x8rSast, "<local-assignment>"},
  {"dm", &module_info_gooSboot, "dm"},
  {"signature-names", &module_info_x8rSast, "signature-names"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"binding-type-setter", &module_info_x8rSast, "binding-type-setter"},
  {"<module-binding-reference>", &module_info_x8rSast, "<module-binding-reference>"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"<alternative>", &module_info_x8rSast, "<alternative>"},
  {"function-registers-setter", &module_info_x8rSast, "function-registers-setter"},
  {"function-data-refs", &module_info_x8rSast, "function-data-refs"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"find-binding", &module_info_x8rSast, "find-binding"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"module-target-environment", &module_info_x8rSast, "module-target-environment"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<ast-generic>", &module_info_x8rSast, "<ast-generic>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"function-self-recursive?", &module_info_x8rSast, "function-self-recursive?"},
  {"alternative-consequent", &module_info_x8rSast, "alternative-consequent"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"pow", &module_info_gooSmath, "pow"},
  {"t?", &module_info_gooStypes, "t?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"function-registers", &module_info_x8rSast, "function-registers"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"global-box-value", &module_info_x8rSast, "global-box-value"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"remove-modules-by-name!", &module_info_x8rSast, "remove-modules-by-name!"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"program-register", &module_info_x8rSast, "program-register"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"<immediate-constant>", &module_info_x8rSast, "<immediate-constant>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"sequentialize", &module_info_x8rSast, "sequentialize"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"and", &module_info_gooSmacros, "and"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"function-nary?", &module_info_x8rSast, "function-nary?"},
  {"match", &module_info_gooSmacros, "match"},
  {"/", &module_info_gooSmath, "/"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"@len", &module_info_gooSboot, "@len"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"use", &module_info_gooSboot, "use"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"when", &module_info_gooSmacros, "when"},
  {"module-loader-module-type", &module_info_x8rSast, "module-loader-module-type"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"assignment-binding", &module_info_x8rSast, "assignment-binding"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"locals-bindings", &module_info_x8rSast, "locals-bindings"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"binding-global-box-setter", &module_info_x8rSast, "binding-global-box-setter"},
  {"init-environment-for-eval", &module_info_x8rSast, "init-environment-for-eval"},
  {"<passive-program>", &module_info_x8rSast, "<passive-program>"},
  {"*", &module_info_gooSmath, "*"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"application-binding", &module_info_x8rSast, "application-binding"},
  {"runtime-environment", &module_info_x8rSast, "runtime-environment"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"module-binding", &module_info_x8rSast, "module-binding"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"error", &module_info_gooSboot, "error"},
  {"function-debug-name-setter", &module_info_x8rSast, "function-debug-name-setter"},
  {"signature-specs-setter", &module_info_x8rSast, "signature-specs-setter"},
  {"<module>", &module_info_x8rSast, "<module>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"binding-dynamic-extent?-setter", &module_info_x8rSast, "binding-dynamic-extent?-setter"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<definition>", &module_info_x8rSast, "<definition>"},
  {"signature-nary?-setter", &module_info_x8rSast, "signature-nary?-setter"},
  {"<regular-application>", &module_info_x8rSast, "<regular-application>"},
  {"fix-let-arguments-setter", &module_info_x8rSast, "fix-let-arguments-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"signature-specs", &module_info_x8rSast, "signature-specs"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<runtime-reference>", &module_info_x8rSast, "<runtime-reference>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<locals>", &module_info_x8rSast, "<locals>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"seq", &module_info_gooSboot, "seq"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"report-undefined-global-bindings", &module_info_x8rSast, "report-undefined-global-bindings"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"mod", &module_info_gooSmath, "mod"},
  {"do-named-static-global-bindings", &module_info_x8rSast, "do-named-static-global-bindings"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<free-environment>", &module_info_x8rSast, "<free-environment>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"signature-nary?", &module_info_x8rSast, "signature-nary?"},
  {"objectify-with-subtransaction", &module_info_x8rSast, "objectify-with-subtransaction"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"until", &module_info_gooSmacros, "until"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ast-evaluate", &module_info_x8rSast, "ast-evaluate"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"==", &module_info_gooSmacros, "=="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"any?", &module_info_gooStypes, "any?"},
  {"alternative-alternant", &module_info_x8rSast, "alternative-alternant"},
  {"<global-box>", &module_info_x8rSast, "<global-box>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"function-data-refs-setter", &module_info_x8rSast, "function-data-refs-setter"},
  {"def-programs", &module_info_x8rSast, "def-programs"},
  {"t=", &module_info_gooStypes, "t="},
  {"signature-arity", &module_info_x8rSast, "signature-arity"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<real-reference>", &module_info_x8rSast, "<real-reference>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"items", &module_info_gooScolsScol, "items"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"unwind-protect-cleanup-thunk", &module_info_x8rSast, "unwind-protect-cleanup-thunk"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"module-name", &module_info_x8rSast, "module-name"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"program-type", &module_info_x8rSast, "program-type"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"probe-module", &module_info_x8rSast, "probe-module"},
  {"find", &module_info_gooScolsScol, "find"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"t*", &module_info_gooStypes, "t*"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"round/", &module_info_gooSmath, "round/"},
  {"env-object-name", &module_info_x8rSast, "env-object-name"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"function-signature", &module_info_x8rSast, "function-signature"},
  {"@==", &module_info_gooSboot, "@=="},
  {"case", &module_info_gooSmacros, "case"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<assignment>", &module_info_x8rSast, "<assignment>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"@<", &module_info_gooSboot, "@<"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"unwind-protect-protected-thunk", &module_info_x8rSast, "unwind-protect-protected-thunk"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"max", &module_info_gooSmag, "max"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"head", &module_info_gooSboot, "head"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"load-module", &module_info_x8rSast, "load-module"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"constant-index", &module_info_x8rSast, "constant-index"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"<local-binding>", &module_info_x8rSast, "<local-binding>"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"function-binding", &module_info_x8rSast, "function-binding"},
  {"def", &module_info_gooSboot, "def"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<compile-time>", &module_info_x8rSast, "<compile-time>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {">", &module_info_gooSmag, ">"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"len", &module_info_gooStypes, "len"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<binding>", &module_info_x8rSast, "<binding>"},
  {"program-register-setter", &module_info_x8rSast, "program-register-setter"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<static-global-environment>", &module_info_x8rSast, "<static-global-environment>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"application-tail?", &module_info_x8rSast, "application-tail?"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"if", &module_info_gooSboot, "if"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<monitor>", &module_info_x8rSast, "<monitor>"},
  {"application-arguments", &module_info_x8rSast, "application-arguments"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"as-lst", &module_info_x8rSast, "as-lst"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"round", &module_info_gooSmath, "round"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"<", &module_info_gooSmag, "<"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"install-initial-bindings", &module_info_x8rSast, "install-initial-bindings"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"environment-module", &module_info_x8rSast, "environment-module"},
  {"<module-binding>", &module_info_x8rSast, "<module-binding>"},
  {"bind-exit-main-fun", &module_info_x8rSast, "bind-exit-main-fun"},
  {"min", &module_info_gooSmag, "min"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"fix-let-arguments", &module_info_x8rSast, "fix-let-arguments"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"as", &module_info_gooStypes, "as"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"binding-global-box", &module_info_x8rSast, "binding-global-box"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"application-function", &module_info_x8rSast, "application-function"},
  {"binding-kind", &module_info_x8rSast, "binding-kind"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"function-temporaries-setter", &module_info_x8rSast, "function-temporaries-setter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"not", &module_info_gooSboot, "not"},
  {"<fix-let>", &module_info_x8rSast, "<fix-let>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"ast-define-binding", &module_info_x8rSast, "ast-define-binding"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"load-in", &module_info_x8rSast, "load-in"},
  {"monitor-main-thunk", &module_info_x8rSast, "monitor-main-thunk"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<runtime-assignment>", &module_info_x8rSast, "<runtime-assignment>"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"try", &module_info_gooSboot, "try"},
  {"<ast-primitive>", &module_info_x8rSast, "<ast-primitive>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"always", &module_info_gooSruntime, "always"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"=", &module_info_gooSmath, "="},
  {"cos", &module_info_gooSmath, "cos"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"do-static-global-bindings", &module_info_x8rSast, "do-static-global-bindings"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"binding-dynamic-extent?", &module_info_x8rSast, "binding-dynamic-extent?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"fix-let-types-setter", &module_info_x8rSast, "fix-let-types-setter"},
  {"do", &module_info_gooSmacros, "do"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"fix-let-bindings-setter", &module_info_x8rSast, "fix-let-bindings-setter"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"function-temporaries", &module_info_x8rSast, "function-temporaries"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"fix-let-body-setter", &module_info_x8rSast, "fix-let-body-setter"},
  {"monitor-info", &module_info_x8rSast, "monitor-info"},
  {"<bound?>", &module_info_x8rSast, "<bound?>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"<module-loader>", &module_info_x8rSast, "<module-loader>"},
  {"+", &module_info_gooSmath, "+"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<ast-macro-definition>", &module_info_x8rSast, "<ast-macro-definition>"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"monitor-handler", &module_info_x8rSast, "monitor-handler"},
  {"constant-index-setter", &module_info_x8rSast, "constant-index-setter"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"assignment-form-setter", &module_info_x8rSast, "assignment-form-setter"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%str", &module_info_gooSboot, "%str"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"<ast-function>", &module_info_x8rSast, "<ast-function>"},
  {"signature-value-setter", &module_info_x8rSast, "signature-value-setter"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"<programs>", &module_info_x8rSast, "<programs>"},
  {"df", &module_info_gooSboot, "df"},
  {"let", &module_info_gooSboot, "let"},
  {"for", &module_info_gooSmacros, "for"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fix-let-types", &module_info_x8rSast, "fix-let-types"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"function-value", &module_info_x8rSast, "function-value"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"isa", &module_info_gooSboot, "isa"},
  {"set-module-environments", &module_info_x8rSast, "set-module-environments"},
  {"function-body-setter", &module_info_x8rSast, "function-body-setter"},
  {"<application>", &module_info_x8rSast, "<application>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"dv", &module_info_gooSboot, "dv"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"binding-native-to?", &module_info_x8rSast, "binding-native-to?"},
  {">=", &module_info_gooSmag, ">="},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<computed-program>", &module_info_x8rSast, "<computed-program>"},
  {"binding-index", &module_info_x8rSast, "binding-index"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"function-debug-name", &module_info_x8rSast, "function-debug-name"},
  {"dg", &module_info_gooSboot, "dg"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"binding-info", &module_info_x8rSast, "binding-info"},
  {"function-body", &module_info_x8rSast, "function-body"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<program>", &module_info_x8rSast, "<program>"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"environment-uses-modules", &module_info_x8rSast, "environment-uses-modules"},
  {"binding-info-setter", &module_info_x8rSast, "binding-info-setter"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"unchecked-runtime-environment", &module_info_x8rSast, "unchecked-runtime-environment"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"signature-bindings-setter", &module_info_x8rSast, "signature-bindings-setter"},
  {"reference-called-function?", &module_info_x8rSast, "reference-called-function?"},
  {"&", &module_info_gooSmath, "&"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"binding-mutable?", &module_info_x8rSast, "binding-mutable?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"binding-index-setter", &module_info_x8rSast, "binding-index-setter"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"application-known?-setter", &module_info_x8rSast, "application-known?-setter"},
  {"signature-arity-setter", &module_info_x8rSast, "signature-arity-setter"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"signature-bindings", &module_info_x8rSast, "signature-bindings"},
  {"@+", &module_info_gooSboot, "@+"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"bound?-reference", &module_info_x8rSast, "bound?-reference"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ds", &module_info_gooSboot, "ds"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"atan", &module_info_gooSmath, "atan"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"application-known?", &module_info_x8rSast, "application-known?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"op", &module_info_gooSmacros, "op"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"init-ast", &module_info_x8rSast, "init-ast"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"dc", &module_info_gooSboot, "dc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"binding-module-name", &module_info_x8rSast, "binding-module-name"},
  {"function-index-setter", &module_info_x8rSast, "function-index-setter"},
  {"binding-value-setter", &module_info_x8rSast, "binding-value-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"export", &module_info_gooSboot, "export"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"new", &module_info_gooSboot, "new"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"reference-frame-offset", &module_info_x8rSast, "reference-frame-offset"},
  {"<arguments>", &module_info_x8rSast, "<arguments>"},
  {"binding-type", &module_info_x8rSast, "binding-type"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<=", &module_info_gooSmag, "<="},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<sequential>", &module_info_x8rSast, "<sequential>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<ast-method>", &module_info_x8rSast, "<ast-method>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"opf", &module_info_gooSmacros, "opf"},
  {">>", &module_info_gooSmath, ">>"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"environment-bindings", &module_info_x8rSast, "environment-bindings"},
  {"^", &module_info_gooSmath, "^"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"function-bindings", &module_info_x8rSast, "function-bindings"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"function-index", &module_info_x8rSast, "function-index"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"locals-functions", &module_info_x8rSast, "locals-functions"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<local-reference>", &module_info_x8rSast, "<local-reference>"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"binding-dotted?-setter", &module_info_x8rSast, "binding-dotted?-setter"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"do-module-loader-modules", &module_info_x8rSast, "do-module-loader-modules"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"del", &module_info_gooScolsScol, "del"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<global-assignment>", &module_info_x8rSast, "<global-assignment>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fin", &module_info_gooSboot, "fin"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"binding-name", &module_info_x8rSast, "binding-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"module-syntax-environment", &module_info_x8rSast, "module-syntax-environment"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"objectify-quotation", &module_info_x8rSast, "objectify-quotation"},
  {"function-source-setter", &module_info_x8rSast, "function-source-setter"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<predefined-application>", &module_info_x8rSast, "<predefined-application>"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"find-environment-module", &module_info_x8rSast, "find-environment-module"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"assignment-form", &module_info_x8rSast, "assignment-form"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"monitor-test", &module_info_x8rSast, "monitor-test"},
  {"<bind-exit>", &module_info_x8rSast, "<bind-exit>"},
  {"fab-g2c-module", &module_info_x8rSast, "fab-g2c-module"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"global-box-value-setter", &module_info_x8rSast, "global-box-value-setter"},
  {"binding-inferred-type", &module_info_x8rSast, "binding-inferred-type"},
  {"objectify-signature", &module_info_x8rSast, "objectify-signature"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"<reference>", &module_info_x8rSast, "<reference>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"monitor-type", &module_info_x8rSast, "monitor-type"},
  {"alternative-condition", &module_info_x8rSast, "alternative-condition"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"or", &module_info_gooSmacros, "or"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"fix-let-body", &module_info_x8rSast, "fix-let-body"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<unwind-protect>", &module_info_x8rSast, "<unwind-protect>"},
  {"<raw-constant>", &module_info_x8rSast, "<raw-constant>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"closure-creation-free-setter", &Yx8rSast_linearizeYclosure_creation_free_setter},
  {"program-form", &Yx8rSast_linearizeYprogram_form},
  {"closure-creation-index", &Yx8rSast_linearizeYclosure_creation_index},
  {"adjoin-free-binding!", &Yx8rSast_linearizeYadjoin_free_bindingX},
  {"*renaming-bindings-counter*", &Yx8rSast_linearizeYTrenaming_bindings_counterT},
  {"assoc-key", &Yx8rSast_linearizeYassoc_key},
  {"<box-creation>", &Yx8rSast_linearizeYLbox_creationG},
  {"closurize-main!", &Yx8rSast_linearizeYclosurize_mainX},
  {"extract-things!", &Yx8rSast_linearizeYextract_thingsX},
  {"assocq", &Yx8rSast_linearizeYassocq},
  {"adjoin-definition!", &Yx8rSast_linearizeYadjoin_definitionX},
  {"program-definitions-setter", &Yx8rSast_linearizeYprogram_definitions_setter},
  {"box-form", &Yx8rSast_linearizeYbox_form},
  {"closure-creation-index-setter", &Yx8rSast_linearizeYclosure_creation_index_setter},
  {"do-do-call-upgrades!", &Yx8rSast_linearizeYdo_do_call_upgradesX},
  {"assoc-value", &Yx8rSast_linearizeYassoc_value},
  {"do-call-upgrades!", &Yx8rSast_linearizeYdo_call_upgradesX},
  {"do-do-call-references!", &Yx8rSast_linearizeYdo_do_call_referencesX},
  {"reference-offset", &Yx8rSast_linearizeYreference_offset},
  {"closure-creation-free", &Yx8rSast_linearizeYclosure_creation_free},
  {"program-definitions", &Yx8rSast_linearizeYprogram_definitions},
  {"---main-1---", NULL},
  {"form-definitions-setter", &Yx8rSast_linearizeYform_definitions_setter},
  {"as-top-level-forms", &Yx8rSast_linearizeYas_top_level_forms},
  {"form-quotations-setter", &Yx8rSast_linearizeYform_quotations_setter},
  {"assoc-value-setter", &Yx8rSast_linearizeYassoc_value_setter},
  {"box-form-setter", &Yx8rSast_linearizeYbox_form_setter},
  {"extract!", &Yx8rSast_linearizeYextractX},
  {"form-program", &Yx8rSast_linearizeYform_program},
  {"reference-self?", &Yx8rSast_linearizeYreference_selfQ},
  {"boxify-mutable-bindings", &Yx8rSast_linearizeYboxify_mutable_bindings},
  {"insert-box!", &Yx8rSast_linearizeYinsert_boxX},
  {"<top-level-form>", &Yx8rSast_linearizeYLtop_level_formG},
  {"unconstrained-type?", &Yx8rSast_linearizeYunconstrained_typeQ},
  {"register-allocate!", &Yx8rSast_linearizeYregister_allocateX},
  {"ast-walk", &Yx8rSast_linearizeYast_walk},
  {"ast-contains-fun?", &Yx8rSast_linearizeYast_contains_funQ},
  {"analyze-calls", &Yx8rSast_linearizeYanalyze_calls},
  {"analyze-dynamic-extent", &Yx8rSast_linearizeYanalyze_dynamic_extent},
  {"assoc-key-setter", &Yx8rSast_linearizeYassoc_key_setter},
  {"---main-0---", NULL},
  {"program-form-setter", &Yx8rSast_linearizeYprogram_form_setter},
  {"form-definitions", &Yx8rSast_linearizeYform_definitions},
  {"assoc", &Yx8rSast_linearizeYassoc},
  {"allocate-register", &Yx8rSast_linearizeYallocate_register},
  {"do-call-references!", &Yx8rSast_linearizeYdo_call_referencesX},
  {"box-reference", &Yx8rSast_linearizeYbox_reference},
  {"box-reference-setter", &Yx8rSast_linearizeYbox_reference_setter},
  {"flatten-seqs", &Yx8rSast_linearizeYflatten_seqs},
  {"*register-passive?*", &Yx8rSast_linearizeYTregister_passiveQT},
  {"split-program", &Yx8rSast_linearizeYsplit_program},
  {"collect-temporaries!", &Yx8rSast_linearizeYcollect_temporariesX},
  {"program-quotations", &Yx8rSast_linearizeYprogram_quotations},
  {"<closure-creation>", &Yx8rSast_linearizeYLclosure_creationG},
  {"lift!", &Yx8rSast_linearizeYliftX},
  {"lift-procedures!", &Yx8rSast_linearizeYlift_proceduresX},
  {"analyze-call-references", &Yx8rSast_linearizeYanalyze_call_references},
  {"reference-offset-setter", &Yx8rSast_linearizeYreference_offset_setter},
  {"<box-write>", &Yx8rSast_linearizeYLbox_writeG},
  {"new-renamed-binding", &Yx8rSast_linearizeYnew_renamed_binding},
  {"form-program-setter", &Yx8rSast_linearizeYform_program_setter},
  {"form-quotations", &Yx8rSast_linearizeYform_quotations},
  {"reference-self?-setter", &Yx8rSast_linearizeYreference_selfQ_setter},
  {"gather-temporaries!", &Yx8rSast_linearizeYgather_temporariesX},
  {"collect-registers!", &Yx8rSast_linearizeYcollect_registersX},
  {"do-do-dynamic-extent!", &Yx8rSast_linearizeYdo_do_dynamic_extentX},
  {"---main-2---", NULL},
  {"<flattened-program>", &Yx8rSast_linearizeYLflattened_programG},
  {"do-dynamic-extent!", &Yx8rSast_linearizeYdo_dynamic_extentX},
  {"<box-read>", &Yx8rSast_linearizeYLbox_readG},
  {"<assoc>", &Yx8rSast_linearizeYLassocG},
  {"<free-reference>", &Yx8rSast_linearizeYLfree_referenceG},
  {"<renamed-local-binding>", &Yx8rSast_linearizeYLrenamed_local_bindingG},
  {"update-walk!", &Yx8rSast_linearizeYupdate_walkX},
  {"program-quotations-setter", &Yx8rSast_linearizeYprogram_quotations_setter},
  {"adjoin-temporary-variables!", &Yx8rSast_linearizeYadjoin_temporary_variablesX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"program-form", "program-form"},
  {"update-walk!", "update-walk!"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"<box-creation>", "<box-creation>"},
  {"extract-things!", "extract-things!"},
  {"box-form", "box-form"},
  {"reference-offset", "reference-offset"},
  {"closure-creation-free", "closure-creation-free"},
  {"program-definitions", "program-definitions"},
  {"form-program", "form-program"},
  {"reference-self?", "reference-self?"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"insert-box!", "insert-box!"},
  {"<top-level-form>", "<top-level-form>"},
  {"register-allocate!", "register-allocate!"},
  {"<box-write>", "<box-write>"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"analyze-calls", "analyze-calls"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"form-definitions", "form-definitions"},
  {"box-reference", "box-reference"},
  {"flatten-seqs", "flatten-seqs"},
  {"*register-passive?*", "*register-passive?*"},
  {"collect-temporaries!", "collect-temporaries!"},
  {"program-quotations", "program-quotations"},
  {"<closure-creation>", "<closure-creation>"},
  {"lift!", "lift!"},
  {"closure-creation-index", "closure-creation-index"},
  {"closurize-main!", "closurize-main!"},
  {"form-quotations", "form-quotations"},
  {"collect-registers!", "collect-registers!"},
  {"<free-reference>", "<free-reference>"},
  {"<box-read>", "<box-read>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSast_linearize;
MODULE_INFO module_info_x8rSast_linearize = {
  "x8r/ast-linearize",
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
extern void load_module_x8rSast (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_x8rSast_linearize (void);

void load_module_x8rSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_x8rSast();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();

  (P)Yx8rSast_linearizeY___main_0___();
  (P)Yx8rSast_linearizeY___main_1___();
  (P)Yx8rSast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
