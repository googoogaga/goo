/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-linearize */

EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSruntimeYstack_overflow_error,"goo/runtime","stack-overflow-error");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
DEF(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
DEF(YevalSast_linearizeYprogram_bindings_setter,"eval/ast-linearize","program-bindings-setter");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalSast_linearizeYdo_analysisX,"eval/ast-linearize","do-analysis!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YevalSast_linearizeYdo_do_analysisX,"eval/ast-linearize","do-do-analysis!");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYNE,"goo/math","~=");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_107);
DEFLIT(lit_49);
DEFLIT(lit_109);
DEFLIT(lit_54);
DEFLIT(lit_11);
DEFLIT(lit_47);
DEFLIT(lit_3);
DEFLIT(lit_48);
DEFLIT(lit_56);
DEFLIT(lit_110);
DEFLIT(lit_33);
DEFLIT(lit_18);
DEFLIT(lit_0);
DEFLIT(lit_102);
DEFLIT(lit_60);
DEFLIT(lit_1);
DEFLIT(lit_57);
DEFLIT(lit_91);
DEFLIT(lit_58);
DEFLIT(lit_70);
DEFLIT(lit_97);
DEFLIT(lit_99);
DEFLIT(lit_32);
DEFLIT(lit_101);
DEFLIT(lit_36);
DEFLIT(lit_44);
DEFLIT(lit_104);
DEFLIT(lit_10);
DEFLIT(lit_14);
DEFLIT(lit_105);
DEFLIT(lit_43);
DEFLIT(lit_112);
DEFLIT(lit_22);
DEFLIT(lit_53);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_75);
DEFLIT(lit_83);
DEFLIT(lit_77);
DEFLIT(lit_5);
DEFLIT(lit_12);
DEFLIT(lit_52);
DEFLIT(lit_79);
DEFLIT(lit_6);
DEFLIT(lit_62);
DEFLIT(lit_82);
DEFLIT(lit_63);
DEFLIT(lit_98);
DEFLIT(lit_93);
DEFLIT(lit_40);
DEFLIT(lit_95);
DEFLIT(lit_23);
DEFLIT(lit_68);
DEFLIT(lit_38);
DEFLIT(lit_31);
DEFLIT(lit_39);
DEFLIT(lit_80);
DEFLIT(lit_65);
DEFLIT(lit_51);
DEFLIT(lit_2);
DEFLIT(lit_108);
DEFLIT(lit_17);
DEFLIT(lit_9);
DEFLIT(lit_50);
DEFLIT(lit_66);
DEFLIT(lit_73);
DEFLIT(lit_88);
DEFLIT(lit_74);
DEFLIT(lit_87);
DEFLIT(lit_19);
DEFLIT(lit_29);
DEFLIT(lit_111);
DEFLIT(lit_24);
DEFLIT(lit_21);
DEFLIT(lit_67);
DEFLIT(lit_71);
DEFLIT(lit_4);
DEFLIT(lit_103);
DEFLIT(lit_20);
DEFLIT(lit_85);
DEFLIT(lit_34);
DEFLIT(lit_35);
DEFLIT(lit_90);
DEFLIT(lit_81);
DEFLIT(lit_46);
DEFLIT(lit_15);
DEFLIT(lit_13);
DEFLIT(lit_94);
DEFLIT(lit_106);
DEFLIT(lit_16);
DEFLIT(lit_37);
DEFLIT(lit_45);
DEFLIT(lit_92);
DEFLIT(lit_64);
DEFLIT(lit_89);
DEFLIT(lit_59);
DEFLIT(lit_78);
DEFLIT(lit_96);
DEFLIT(lit_86);
DEFLIT(lit_41);
DEFLIT(lit_42);
DEFLIT(lit_55);
DEFLIT(lit_25);
DEFLIT(lit_69);
DEFLIT(lit_26);
DEFLIT(lit_30);
DEFLIT(lit_72);
DEFLIT(lit_84);
DEFLIT(lit_28);
DEFLIT(lit_100);
DEFLIT(lit_61);
DEFLIT(lit_76);
DEFLIT(lit_27);

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
extern P YevalSast_linearizeY___main_2___ ();

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
  P creatorF2714;
  P bindingF2713;
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
    bindingF2713 = T5;
    T7 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF2713);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF2713);
      T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T10);
      creatorF2714 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF2714,res_);
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
  P loopF2715;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_15,2);
  loopF2715 = T2;
  FUNINIT(loopF2715, 2,form_,loopF2715);
  T3 = CALL2(0,loopF2715,Ynil,bindings_);
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
  P tmpF2716;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_18));
  tmpF2716 = T1;
  if (tmpF2716 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_19));
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
  P tmpF2721;
  P tmpF2720;
  P tmpF2719;
  P tmpF2718;
  P metF2717;
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
    metF2717 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF2717,VARREF(YevalSastYLast_functionG));
    tmpF2718 = T8;
    if (tmpF2718 != YPfalse) {
      T12 = fun_23;
      T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF2717);
      T11 = CALL2(1,VARREF(YgooScolsScolYallQ),T12,T13);
      tmpF2719 = T11;
      if (tmpF2719 != YPfalse) {
        T17 = CALL1(1,VARREF(YevalSastYfunction_value),metF2717);
        T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T17);
        tmpF2720 = T16;
        if (tmpF2720 != YPfalse) {
          T21 = CALL1(1,VARREF(YevalSastYfunction_naryQ),metF2717);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF2721 = T20;
          if (tmpF2721 != YPfalse) {
            T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF2717);
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
  P offsetF2723;
  P bF2722;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF2722 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF2722);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF2723 = T5;
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF2722,VARREF(YevalSast_linearizeYreference_offset),offsetF2723,VARREF(YevalSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_33) {
  P freeT_;
  P tailF2724;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF2724 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF2724);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF2724;
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
  P addF2726;
  P new_envF2725;
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
    new_envF2725 = T3;
    T6 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF2725,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_33,2);
      addF2726 = T9;
      FUNINIT(addF2726, 2,new_envF2725,addF2726);
      T11 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF2726,T11);
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
  P checkF2727;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_34,3);
  checkF2727 = T1;
  FUNINIT(checkF2727, 3,ref_,flat_fun_,checkF2727);
  T3 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF2727,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_36) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF2728;
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
  new_bindingsF2728 = T3;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF2728);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_37) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF2729;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF2729 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF2729);
  T5 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF2729);
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
  P innerF2730;
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
    innerF2730 = T4;
    FUNINIT(innerF2730, 3,s_,FREEREF(0),innerF2730);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF2730,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_67) {
  P o_;
  P loopF2731;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_66,1);
  loopF2731 = T1;
  FUNINIT(loopF2731, 1,loopF2731);
  T2 = CALL2(0,loopF2731,o_,Ynil);
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
  P resultF2733;
  P formsF2732;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T2);
  formsF2732 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF2733 = T4;
  T7 = FUNFAB(fun_70,1,resultF2733);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF2732);
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),T6);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T5,resultF2733);
  T3 = resultF2733;
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
  P x_1466F2743;
  P qbF2742;
  P probeF2741;
  P indexF2740;
  P qbTF2739;
  P tmpF2738;
  P tmpF2737;
  P tmpF2736;
  P tmpF2735;
  P valueF2734;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF2734 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2734,YPfalse);
  tmpF2735 = T4;
  if (tmpF2735 != YPfalse) {
    T5 = tmpF2735;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2734,YPtrue);
    tmpF2736 = T7;
    if (tmpF2736 != YPfalse) {
      T8 = tmpF2736;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2734,Ynil);
      tmpF2737 = T10;
      if (tmpF2737 != YPfalse) {
        T11 = tmpF2737;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF2734,VARREF(YLintG));
        tmpF2738 = T13;
        if (tmpF2738 != YPfalse) {
          T14 = tmpF2738;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF2734,VARREF(YLchrG));
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
    qbTF2739 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF2739);
    indexF2740 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF2739,valueF2734,YPfalse);
    probeF2741 = T21;
    if (probeF2741 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF2741);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_69),VARREF(YevalSastYbinding_name),indexF2740,VARREF(YevalSastYbinding_info),valueF2734);
      qbF2742 = T25;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF2742,qbTF2739,valueF2734);
      x_1466F2743 = form_;
      T28 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),x_1466F2743);
      T27 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T28,qbF2742);
      T26 = CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T27,x_1466F2743);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF2742);
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
  P indexF2746;
  P free_bindingsF2745;
  P freeF2744;
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
  freeF2744 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF2744);
  free_bindingsF2745 = T11;
  T13 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF2746 = T13;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF2746,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF2745,o_);
  T14 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF2746,VARREF(YevalSast_linearizeYclosure_creation_free),freeF2744);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_77) {
  P o_,form_,result_;
  P x_1467F2748;
  P primF2747;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF2747 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),primF2747);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T2,primF2747);
  x_1467F2748 = result_;
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1467F2748);
  T5 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,primF2747);
  T4 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T5,x_1467F2748);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_78) {
  P form_,result_,x_;
  P x_1469F2751;
  P x_1468F2750;
  P new_indexF2749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF2749 = T1;
  x_1468F2750 = result_;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1468F2750);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T4,x_1468F2750);
  x_1469F2751 = form_;
  T8 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),x_1469F2751);
  T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,x_);
  T6 = CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T7,x_1469F2751);
  T0 = new_indexF2749;
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
  P innerF2752;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_80,4);
  innerF2752 = T1;
  FUNINIT(innerF2752, 4,forms_,FREEREF(0),FREEREF(1),innerF2752);
  T2 = CALL3(0,innerF2752,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_82) {
  P o_,max_count_;
  P loopF2753;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_81,2);
  loopF2753 = T1;
  FUNINIT(loopF2753, 2,max_count_,loopF2753);
  T2 = CALL2(0,loopF2753,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P calls_,defns_,i_,forms_;
  P callF2757;
  P defnF2756;
  P bindingF2755;
  P nameF2754;
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
    T8 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_80),i_,LITREF(lit_81));
    nameF2754 = T8;
    T10 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(1),nameF2754,YPfalse,LITREF(lit_82));
    bindingF2755 = T10;
    T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF2754,YPint((P)4));
    T14 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2755,VARREF(YevalSastYfunction_debug_name),T13,VARREF(YevalSastYfunction_signature),T14,VARREF(YevalSastYfunction_body),T15);
    defnF2756 = T12;
    T18 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF2755,VARREF(YevalSastYapplication_arguments),T18,VARREF(YevalSastYapplication_tailQ),YPfalse);
    callF2757 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF2757,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF2756,defns_);
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
  P loopF2760;
  P base_indexF2759;
  P formsF2758;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T2,max_count_);
  formsF2758 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF2759 = T4;
  T7 = FUNSHELL(1,fun_loop_83,3);
  loopF2760 = T7;
  FUNINIT(loopF2760, 3,o_,r_,loopF2760);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T8 = CALL4(0,loopF2760,Ynil,T9,YPint((P)0),formsF2758);
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
  P bF2762;
  P bindingF2761;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF2761 = T1;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF2761,r_);
  bF2762 = T3;
  if (bF2762 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF2762);
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
  P loopF2763;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_95,1);
  loopF2763 = T1;
  FUNINIT(loopF2763, 1,loopF2763);
  T2 = CALL3(0,loopF2763,r_,x_,y_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_97) {
  P o_,flat_fun_,r_;
  P new_rF2765;
  P new_bindingsF2764;
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
  new_bindingsF2764 = T3;
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T7,new_bindingsF2764,r_);
  new_rF2765 = T6;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2764);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF2764,o_);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T8 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T9,flat_fun_,new_rF2765);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T8,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_98) {
  P o_,flat_fun_,r_;
  P new_rF2767;
  P new_bindingsF2766;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF2766 = T1;
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF2766,r_);
  new_rF2767 = T4;
  T7 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF2767);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,T8);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T6,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2766);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF2766,o_);
  T10 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T9 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF2767);
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
  P adjoinF2768;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_99,2);
  adjoinF2768 = T1;
  FUNINIT(adjoinF2768, 2,flat_fun_,adjoinF2768);
  T3 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF2768,T3,new_bindings_);
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
  P x_1470F2769;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1470F2769 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_105,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_106,1,x_1470F2769);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,flat_fun_,valQ_;
  P tmpF2771;
  P tmpF2770;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF2770 = valQ_;
  if (tmpF2770 != YPfalse) {
    tmpF2771 = flat_fun_;
    if (tmpF2771 != YPfalse) {
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
  P tmpF2773;
  P next_xF2772;
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
    next_xF2772 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF2773 = FREEREF(2);
    if (tmpF2773 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF2772);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF2772;
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
  P loopF2774;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_110,4);
  loopF2774 = T1;
  FUNINIT(loopF2774, 4,o_,flat_fun_,valQ_,loopF2774);
  T2 = CALL1(0,loopF2774,o_);
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
  P walkF2775;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_118,2);
  walkF2775 = T0;
  FUNINIT(walkF2775, 2,return_,walkF2775);
  T1 = CALL2(1,VARREF(YevalSastYast_walk),walkF2775,FREEREF(0));
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
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<box-read>");
  T1 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YevalSast_linearizeYLbox_readG,T0);
  lit_1 = YPPsym((P)"box-reference");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T14 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  T19 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  lit_6 = YPPsym((P)"box-form");
  T24 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_4 = YPmet(FUNCODEREF(fun_box_form_4),LITREF(lit_6),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSast_linearizeYbox_form);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSast_linearizeYbox_form);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_box_form_4;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSast_linearizeYbox_form,T25);
  lit_7 = YPPsym((P)"box-form-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_5 = YPmet(FUNCODEREF(fun_box_form_setter_5),LITREF(lit_7),T29,ENVNUL,PNUL,YPfalse);
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
  lit_8 = YPPsym((P)"<box-creation>");
  T35 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T34 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_8),T35);
  VARSET(YevalSast_linearizeYLbox_creationG,T34);
  T36 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  T41 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  lit_9 = YPPsym((P)"insert-box!");
  lit_10 = YPPsym((P)"o");
  T46 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_8 = YPmet(FUNCODEREF(fun_insert_boxX_8),LITREF(lit_9),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_insert_boxX_8;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSast_linearizeYinsert_boxX,T47);
  T51 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_9 = YPmet(FUNCODEREF(fun_insert_boxX_9),LITREF(lit_9),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_insert_boxX_9;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSast_linearizeYinsert_boxX,T52);
  T56 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_10 = YPmet(FUNCODEREF(fun_insert_boxX_10),LITREF(lit_9),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_insert_boxX_10;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSast_linearizeYinsert_boxX,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_11 = YPmet(FUNCODEREF(fun_insert_boxX_11),LITREF(lit_9),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_insert_boxX_11;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSast_linearizeYinsert_boxX,T62);
  T66 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_12 = YPmet(FUNCODEREF(fun_insert_boxX_12),LITREF(lit_9),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_insert_boxX_12;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSast_linearizeYinsert_boxX,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_13 = YPmet(FUNCODEREF(fun_insert_boxX_13),LITREF(lit_9),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T74 != YPfalse) {
    T73 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_insert_boxX_13;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YevalSast_linearizeYinsert_boxX,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),LITREF(lit_9),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSast_linearizeYinsert_boxX);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSast_linearizeYinsert_boxX);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_insert_boxX_14;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSast_linearizeYinsert_boxX,T77);
  lit_11 = YPPsym((P)"boxify-mutable-bindings");
  lit_12 = YPPsym((P)"form");
  lit_13 = YPPsym((P)"bindings");
  lit_14 = YPPsym((P)"loop");
  lit_15 = YPPsym((P)"res");
  T82 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_15 = YPmet(FUNCODEREF(fun_loop_15),LITREF(lit_14),T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_16 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_16),LITREF(lit_11),T81,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSast_linearizeYboxify_mutable_bindings);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSast_linearizeYboxify_mutable_bindings);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_boxify_mutable_bindings_16;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSast_linearizeYboxify_mutable_bindings,T83);
  lit_16 = YPPsym((P)"unconstrained-type?");
  lit_17 = YPPsym((P)"b");
  T87 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_17 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_17),LITREF(lit_16),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_unconstrained_typeQ_17;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T88);
  lit_18 = YPPsym((P)"goo/boot");
  lit_19 = YPPsym((P)"<any>");
  T92 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_18 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_18),LITREF(lit_16),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_unconstrained_typeQ_18;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_19 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_19),LITREF(lit_16),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalSast_linearizeYunconstrained_typeQ);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSast_linearizeYunconstrained_typeQ);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_unconstrained_typeQ_19;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T98);
  lit_20 = YPPsym((P)"do-do-analysis!");
  T102 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_analysisX_20 = YPmet(FUNCODEREF(fun_do_do_analysisX_20),LITREF(lit_20),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSast_linearizeYdo_do_analysisX);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSast_linearizeYdo_do_analysisX);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_do_do_analysisX_20;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSast_linearizeYdo_do_analysisX,T103);
  lit_21 = YPPsym((P)"do-analysis!");
  T107 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_21 = YPmet(FUNCODEREF(fun_do_analysisX_21),LITREF(lit_21),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_do_analysisX_21;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSast_linearizeYdo_analysisX,T108);
  T112 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_22 = YPmet(FUNCODEREF(fun_do_analysisX_22),LITREF(lit_21),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_do_analysisX_22;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSast_linearizeYdo_analysisX,T113);
  lit_22 = YPPsym((P)"x");
  T118 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_24 = YPmet(FUNCODEREF(fun_do_analysisX_24),LITREF(lit_21),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSast_linearizeYdo_analysisX);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSast_linearizeYdo_analysisX);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_do_analysisX_24;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSast_linearizeYdo_analysisX,T119);
  lit_23 = YPPsym((P)"analyze-ast");
  T123 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_ast_25 = YPmet(FUNCODEREF(fun_analyze_ast_25),LITREF(lit_23),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YevalSast_linearizeYanalyze_ast);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSast_linearizeYanalyze_ast);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_analyze_ast_25;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSast_linearizeYanalyze_ast,T124);
  lit_24 = YPPsym((P)"<free-reference>");
  T129 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_24),T129);
  VARSET(YevalSast_linearizeYLfree_referenceG,T128);
  lit_25 = YPPsym((P)"reference-offset");
  T130 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_26 = YPmet(FUNCODEREF(fun_reference_offset_26),LITREF(lit_25),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSast_linearizeYreference_offset);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSast_linearizeYreference_offset);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_reference_offset_26;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSast_linearizeYreference_offset,T131);
  lit_26 = YPPsym((P)"reference-offset-setter");
  T136 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T135 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T136,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_27 = YPmet(FUNCODEREF(fun_reference_offset_setter_27),LITREF(lit_26),T135,ENVNUL,PNUL,YPfalse);
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
  lit_27 = YPPsym((P)"reference-self?");
  T142 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_28 = YPmet(FUNCODEREF(fun_reference_selfQ_28),LITREF(lit_27),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YevalSast_linearizeYreference_selfQ);
  if (T145 != YPfalse) {
    T144 = VARREF(YevalSast_linearizeYreference_selfQ);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_reference_selfQ_28;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YevalSast_linearizeYreference_selfQ,T143);
  lit_28 = YPPsym((P)"reference-self?-setter");
  T147 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLlogG),VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_29 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_29),LITREF(lit_28),T147,ENVNUL,PNUL,YPfalse);
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
  lit_29 = YPPsym((P)"lift!");
  T152 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_30 = YPmet(FUNCODEREF(fun_liftX_30),LITREF(lit_29),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSast_linearizeYliftX);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSast_linearizeYliftX);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_liftX_30;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSast_linearizeYliftX,T153);
  lit_30 = YPPsym((P)"lift-procedures!");
  lit_31 = YPPsym((P)"flat-fun");
  T157 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_13)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_31 = YPmet(FUNCODEREF(fun_lift_proceduresX_31),LITREF(lit_30),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_lift_proceduresX_31;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSast_linearizeYlift_proceduresX,T158);
  T162 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_13)),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_32 = YPmet(FUNCODEREF(fun_lift_proceduresX_32),LITREF(lit_30),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_lift_proceduresX_32;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSast_linearizeYlift_proceduresX,T163);
  lit_32 = YPPsym((P)"adjoin-free-binding!");
  lit_33 = YPPsym((P)"ref");
  lit_34 = YPPsym((P)"check");
  lit_35 = YPPsym((P)"i");
  lit_36 = YPPsym((P)"free*");
  lit_37 = YPPsym((P)"add");
  T169 = YPsig(YPPlist(1,LITREF(lit_36)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_33 = YPmet(FUNCODEREF(fun_add_33),LITREF(lit_37),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_36)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_34 = YPmet(FUNCODEREF(fun_check_34),LITREF(lit_34),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_33)),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_35 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_35),LITREF(lit_32),T167,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSast_linearizeYadjoin_free_bindingX);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSast_linearizeYadjoin_free_bindingX);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_adjoin_free_bindingX_35;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSast_linearizeYadjoin_free_bindingX,T170);
  T174 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_13)),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_36 = YPmet(FUNCODEREF(fun_lift_proceduresX_36),LITREF(lit_30),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_lift_proceduresX_36;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSast_linearizeYlift_proceduresX,T175);
  T179 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_13)),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_37 = YPmet(FUNCODEREF(fun_lift_proceduresX_37),LITREF(lit_30),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_lift_proceduresX_37;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSast_linearizeYlift_proceduresX,T180);
  T184 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_13)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_38 = YPmet(FUNCODEREF(fun_lift_proceduresX_38),LITREF(lit_30),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T187 != YPfalse) {
    T186 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_lift_proceduresX_38;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YevalSast_linearizeYlift_proceduresX,T185);
  T189 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_13)),YPPlist(3,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_39 = YPmet(FUNCODEREF(fun_lift_proceduresX_39),LITREF(lit_30),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T192 != YPfalse) {
    T191 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_lift_proceduresX_39;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YevalSast_linearizeYlift_proceduresX,T190);
  T194 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_13)),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_40 = YPmet(FUNCODEREF(fun_lift_proceduresX_40),LITREF(lit_30),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YevalSast_linearizeYlift_proceduresX);
  if (T197 != YPfalse) {
    T196 = VARREF(YevalSast_linearizeYlift_proceduresX);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_lift_proceduresX_40;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YevalSast_linearizeYlift_proceduresX,T195);
  lit_38 = YPPsym((P)"<flattened-program>");
  T200 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T199 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_38),T200);
  VARSET(YevalSast_linearizeYLflattened_programG,T199);
  lit_39 = YPPsym((P)"program-form");
  T201 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_41 = YPmet(FUNCODEREF(fun_program_form_41),LITREF(lit_39),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSast_linearizeYprogram_form);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSast_linearizeYprogram_form);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_program_form_41;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSast_linearizeYprogram_form,T202);
  lit_40 = YPPsym((P)"program-form-setter");
  T207 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  T206 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T207,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_42 = YPmet(FUNCODEREF(fun_program_form_setter_42),LITREF(lit_40),T206,ENVNUL,PNUL,YPfalse);
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
  lit_41 = YPPsym((P)"program-quotations");
  T213 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_43 = YPmet(FUNCODEREF(fun_program_quotations_43),LITREF(lit_41),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSast_linearizeYprogram_quotations);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSast_linearizeYprogram_quotations);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_program_quotations_43;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSast_linearizeYprogram_quotations,T214);
  lit_42 = YPPsym((P)"program-quotations-setter");
  T218 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_44 = YPmet(FUNCODEREF(fun_program_quotations_setter_44),LITREF(lit_42),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSast_linearizeYprogram_quotations_setter);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSast_linearizeYprogram_quotations_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_program_quotations_setter_44;
  T219 = XCALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YevalSast_linearizeYprogram_quotations_setter,T219);
  T223 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T223,ENVNUL,PNUL,YPfalse);
  T224 = fun_45;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_quotations),VARREF(YevalSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T224);
  lit_43 = YPPsym((P)"program-bindings");
  T225 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_bindings_46 = YPmet(FUNCODEREF(fun_program_bindings_46),LITREF(lit_43),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YevalSast_linearizeYprogram_bindings);
  if (T228 != YPfalse) {
    T227 = VARREF(YevalSast_linearizeYprogram_bindings);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_program_bindings_46;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YevalSast_linearizeYprogram_bindings,T226);
  lit_44 = YPPsym((P)"program-bindings-setter");
  T232 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T231 = fun_program_bindings_setter_47 = YPmet(FUNCODEREF(fun_program_bindings_setter_47),LITREF(lit_44),T232,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YevalSast_linearizeYprogram_bindings_setter);
  if (T236 != YPfalse) {
    T235 = VARREF(YevalSast_linearizeYprogram_bindings_setter);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_program_bindings_setter_47;
  T234 = XCALL2(1,VARREF(YPdefine_method),T235,T237);
  T233 = VARSET(YevalSast_linearizeYprogram_bindings_setter,T234);
  T230 = T233;
  return T230;
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
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265;
DEFCREGS();
loop:
  T0 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T1 = fun_48;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_bindings),VARREF(YevalSast_linearizeYprogram_bindings_setter),VARREF(YLanyG),T1);
  lit_45 = YPPsym((P)"program-definitions");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_49 = YPmet(FUNCODEREF(fun_program_definitions_49),LITREF(lit_45),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSast_linearizeYprogram_definitions);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSast_linearizeYprogram_definitions);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_program_definitions_49;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSast_linearizeYprogram_definitions,T3);
  lit_46 = YPPsym((P)"program-definitions-setter");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_50 = YPmet(FUNCODEREF(fun_program_definitions_setter_50),LITREF(lit_46),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSast_linearizeYprogram_definitions_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSast_linearizeYprogram_definitions_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_program_definitions_setter_50;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSast_linearizeYprogram_definitions_setter,T8);
  T12 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T13 = fun_51;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_definitions),VARREF(YevalSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T13);
  lit_47 = YPPsym((P)"<top-level-form>");
  T15 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T14 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_47),T15);
  VARSET(YevalSast_linearizeYLtop_level_formG,T14);
  lit_48 = YPPsym((P)"form-program");
  T16 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_52 = YPmet(FUNCODEREF(fun_form_program_52),LITREF(lit_48),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSast_linearizeYform_program);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSast_linearizeYform_program);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_form_program_52;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSast_linearizeYform_program,T17);
  lit_49 = YPPsym((P)"form-program-setter");
  T21 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_53 = YPmet(FUNCODEREF(fun_form_program_setter_53),LITREF(lit_49),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YevalSast_linearizeYform_program_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YevalSast_linearizeYform_program_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_form_program_setter_53;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YevalSast_linearizeYform_program_setter,T22);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),VARREF(YevalSast_linearizeYform_program_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_50 = YPPsym((P)"form-quotations");
  T26 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_54 = YPmet(FUNCODEREF(fun_form_quotations_54),LITREF(lit_50),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YevalSast_linearizeYform_quotations);
  if (T29 != YPfalse) {
    T28 = VARREF(YevalSast_linearizeYform_quotations);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_form_quotations_54;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YevalSast_linearizeYform_quotations,T27);
  lit_51 = YPPsym((P)"form-quotations-setter");
  T31 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_55 = YPmet(FUNCODEREF(fun_form_quotations_setter_55),LITREF(lit_51),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YevalSast_linearizeYform_quotations_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YevalSast_linearizeYform_quotations_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_form_quotations_setter_55;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YevalSast_linearizeYform_quotations_setter,T32);
  T36 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T37 = fun_56;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_quotations),VARREF(YevalSast_linearizeYform_quotations_setter),VARREF(YLanyG),T37);
  lit_52 = YPPsym((P)"form-definitions");
  T38 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_57 = YPmet(FUNCODEREF(fun_form_definitions_57),LITREF(lit_52),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YevalSast_linearizeYform_definitions);
  if (T41 != YPfalse) {
    T40 = VARREF(YevalSast_linearizeYform_definitions);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_form_definitions_57;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YevalSast_linearizeYform_definitions,T39);
  lit_53 = YPPsym((P)"form-definitions-setter");
  T43 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_58 = YPmet(FUNCODEREF(fun_form_definitions_setter_58),LITREF(lit_53),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YevalSast_linearizeYform_definitions_setter);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSast_linearizeYform_definitions_setter);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_form_definitions_setter_58;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSast_linearizeYform_definitions_setter,T44);
  T48 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T49 = fun_59;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_definitions),VARREF(YevalSast_linearizeYform_definitions_setter),VARREF(YLanyG),T49);
  lit_54 = YPPsym((P)"<closure-creation>");
  T51 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T50 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_54),T51);
  VARSET(YevalSast_linearizeYLclosure_creationG,T50);
  lit_55 = YPPsym((P)"closure-creation-index");
  T52 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_60 = YPmet(FUNCODEREF(fun_closure_creation_index_60),LITREF(lit_55),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YevalSast_linearizeYclosure_creation_index);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSast_linearizeYclosure_creation_index);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_closure_creation_index_60;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSast_linearizeYclosure_creation_index,T53);
  lit_56 = YPPsym((P)"closure-creation-index-setter");
  T57 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_61 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_61),LITREF(lit_56),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSast_linearizeYclosure_creation_index_setter);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSast_linearizeYclosure_creation_index_setter);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_closure_creation_index_setter_61;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSast_linearizeYclosure_creation_index_setter,T58);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),VARREF(YevalSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_57 = YPPsym((P)"closure-creation-free");
  T62 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_62 = YPmet(FUNCODEREF(fun_closure_creation_free_62),LITREF(lit_57),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YevalSast_linearizeYclosure_creation_free);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalSast_linearizeYclosure_creation_free);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_closure_creation_free_62;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalSast_linearizeYclosure_creation_free,T63);
  lit_58 = YPPsym((P)"closure-creation-free-setter");
  T67 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_63 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_63),LITREF(lit_58),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YevalSast_linearizeYclosure_creation_free_setter);
  if (T70 != YPfalse) {
    T69 = VARREF(YevalSast_linearizeYclosure_creation_free_setter);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_closure_creation_free_setter_63;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YevalSast_linearizeYclosure_creation_free_setter,T68);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_free),VARREF(YevalSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_59 = YPPsym((P)"flatten-seqs");
  T72 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_64 = YPmet(FUNCODEREF(fun_flatten_seqs_64),LITREF(lit_59),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YevalSast_linearizeYflatten_seqs);
  if (T75 != YPfalse) {
    T74 = VARREF(YevalSast_linearizeYflatten_seqs);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_flatten_seqs_64;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YevalSast_linearizeYflatten_seqs,T73);
  lit_60 = YPPsym((P)"s");
  lit_61 = YPPsym((P)"r");
  lit_62 = YPPsym((P)"inner");
  lit_63 = YPPsym((P)"ss");
  T79 = YPsig(YPPlist(2,LITREF(lit_63),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_65 = YPmet(FUNCODEREF(fun_inner_65),LITREF(lit_62),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(2,LITREF(lit_60),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_66 = YPmet(FUNCODEREF(fun_loop_66),LITREF(lit_14),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_67 = YPmet(FUNCODEREF(fun_flatten_seqs_67),LITREF(lit_59),T77,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSast_linearizeYflatten_seqs);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSast_linearizeYflatten_seqs);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_flatten_seqs_67;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSast_linearizeYflatten_seqs,T80);
  lit_64 = YPPsym((P)"as-top-level-forms");
  lit_65 = YPPsym((P)"programs");
  T85 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_69 = YPmet(FUNCODEREF(fun_as_top_level_forms_69),LITREF(lit_64),T84,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSast_linearizeYas_top_level_forms);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSast_linearizeYas_top_level_forms);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_as_top_level_forms_69;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSast_linearizeYas_top_level_forms,T86);
  lit_66 = YPPsym((P)"extract-things!");
  T91 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_71 = YPmet(FUNCODEREF(fun_extract_thingsX_71),LITREF(lit_66),T90,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YevalSast_linearizeYextract_thingsX);
  if (T94 != YPfalse) {
    T93 = VARREF(YevalSast_linearizeYextract_thingsX);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_extract_thingsX_71;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YevalSast_linearizeYextract_thingsX,T92);
  lit_67 = YPPsym((P)"extract!");
  lit_68 = YPPsym((P)"result");
  T96 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_12),LITREF(lit_68)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_72 = YPmet(FUNCODEREF(fun_extractX_72),LITREF(lit_67),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSast_linearizeYextractX);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_extractX_72;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSast_linearizeYextractX,T97);
  lit_69 = YPPsym((P)"quotation");
  T101 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_12),LITREF(lit_68)),YPPlist(3,VARREF(YevalSastYLconstantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_73 = YPmet(FUNCODEREF(fun_extractX_73),LITREF(lit_67),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSast_linearizeYextractX);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_extractX_73;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSast_linearizeYextractX,T102);
  T106 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_12),LITREF(lit_68)),YPPlist(3,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_74 = YPmet(FUNCODEREF(fun_extractX_74),LITREF(lit_67),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSast_linearizeYextractX);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_extractX_74;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSast_linearizeYextractX,T107);
  lit_70 = YPPsym((P)"binding");
  T112 = YPsig(YPPlist(1,LITREF(lit_70)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_12),LITREF(lit_68)),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_76 = YPmet(FUNCODEREF(fun_extractX_76),LITREF(lit_67),T111,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSast_linearizeYextractX);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_extractX_76;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSast_linearizeYextractX,T113);
  T117 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_12),LITREF(lit_68)),YPPlist(3,VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_77 = YPmet(FUNCODEREF(fun_extractX_77),LITREF(lit_67),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSast_linearizeYextractX);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSast_linearizeYextractX);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_extractX_77;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSast_linearizeYextractX,T118);
  lit_71 = YPPsym((P)"adjoin-definition!");
  T122 = YPsig(YPPlist(3,LITREF(lit_12),LITREF(lit_68),LITREF(lit_22)),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_78 = YPmet(FUNCODEREF(fun_adjoin_definitionX_78),LITREF(lit_71),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSast_linearizeYadjoin_definitionX);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSast_linearizeYadjoin_definitionX);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_adjoin_definitionX_78;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSast_linearizeYadjoin_definitionX,T123);
  lit_72 = YPPsym((P)"split-program");
  lit_73 = YPPsym((P)"max-count");
  T127 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_73)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_79 = YPmet(FUNCODEREF(fun_split_program_79),LITREF(lit_72),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSast_linearizeYsplit_program);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSast_linearizeYsplit_program);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_split_program_79;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSast_linearizeYsplit_program,T128);
  lit_74 = YPPsym((P)"forms");
  lit_75 = YPPsym((P)"es");
  lit_76 = YPPsym((P)"count");
  T134 = YPsig(YPPlist(3,LITREF(lit_15),LITREF(lit_75),LITREF(lit_76)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_80 = YPmet(FUNCODEREF(fun_inner_80),LITREF(lit_62),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(2,LITREF(lit_74),LITREF(lit_60)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_81 = YPmet(FUNCODEREF(fun_loop_81),LITREF(lit_14),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_73)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_82 = YPmet(FUNCODEREF(fun_split_program_82),LITREF(lit_72),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSast_linearizeYsplit_program);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSast_linearizeYsplit_program);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_split_program_82;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSast_linearizeYsplit_program,T135);
  lit_77 = YPPsym((P)"closurize-main!");
  lit_78 = YPPsym((P)"calls");
  lit_79 = YPPsym((P)"defns");
  lit_80 = YPsb((P)"---main-");
  lit_81 = YPsb((P)"---");
  lit_82 = YPPsym((P)"predefined");
  T140 = YPsig(YPPlist(4,LITREF(lit_78),LITREF(lit_79),LITREF(lit_35),LITREF(lit_74)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_14),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_61),LITREF(lit_73)),YPPlist(3,VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_84 = YPmet(FUNCODEREF(fun_closurize_mainX_84),LITREF(lit_77),T139,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSast_linearizeYclosurize_mainX);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSast_linearizeYclosurize_mainX);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_closurize_mainX_84;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSast_linearizeYclosurize_mainX,T141);
  lit_83 = YPPsym((P)"<assoc>");
  T146 = (P)YPpair(VARREF(YLanyG),Ynil);
  T145 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_83),T146);
  VARSET(YevalSast_linearizeYLassocG,T145);
  lit_84 = YPPsym((P)"assoc-key");
  T147 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_85 = YPmet(FUNCODEREF(fun_assoc_key_85),LITREF(lit_84),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YevalSast_linearizeYassoc_key);
  if (T150 != YPfalse) {
    T149 = VARREF(YevalSast_linearizeYassoc_key);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_assoc_key_85;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YevalSast_linearizeYassoc_key,T148);
  lit_85 = YPPsym((P)"assoc-key-setter");
  T152 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_86 = YPmet(FUNCODEREF(fun_assoc_key_setter_86),LITREF(lit_85),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSast_linearizeYassoc_key_setter);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSast_linearizeYassoc_key_setter);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_assoc_key_setter_86;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSast_linearizeYassoc_key_setter,T153);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),VARREF(YevalSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_86 = YPPsym((P)"assoc-value");
  T157 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_87 = YPmet(FUNCODEREF(fun_assoc_value_87),LITREF(lit_86),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSast_linearizeYassoc_value);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSast_linearizeYassoc_value);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_assoc_value_87;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSast_linearizeYassoc_value,T158);
  lit_87 = YPPsym((P)"assoc-value-setter");
  T162 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_88 = YPmet(FUNCODEREF(fun_assoc_value_setter_88),LITREF(lit_87),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSast_linearizeYassoc_value_setter);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSast_linearizeYassoc_value_setter);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_assoc_value_setter_88;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSast_linearizeYassoc_value_setter,T163);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_value),VARREF(YevalSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_88 = YPPsym((P)"assoc");
  lit_89 = YPPsym((P)"y");
  T167 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_89)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSast_linearizeYLassocG),Ynil);
  YevalSast_linearizeYassoc = YPmet(FUNCODEREF(YevalSast_linearizeYassoc),LITREF(lit_88),T167,ENVNUL,PNUL,YPfalse);
  T168 = YevalSast_linearizeYassoc;
  VARSET(YevalSast_linearizeYassoc,T168);
  lit_90 = YPPsym((P)"assocq");
  lit_91 = YPPsym((P)"l");
  T169 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_91)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_90 = YPmet(FUNCODEREF(fun_assocq_90),LITREF(lit_90),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSast_linearizeYassocq);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSast_linearizeYassocq);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_assocq_90;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSast_linearizeYassocq,T170);
  lit_92 = YPPsym((P)"gather-temporaries!");
  lit_93 = YPPsym((P)"def");
  T175 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_92 = YPmet(FUNCODEREF(fun_gather_temporariesX_92),LITREF(lit_92),T174,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSast_linearizeYgather_temporariesX);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSast_linearizeYgather_temporariesX);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_gather_temporariesX_92;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSast_linearizeYgather_temporariesX,T176);
  lit_94 = YPPsym((P)"collect-temporaries!");
  T180 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_93 = YPmet(FUNCODEREF(fun_collect_temporariesX_93),LITREF(lit_94),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_collect_temporariesX_93;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T181);
  T185 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_94 = YPmet(FUNCODEREF(fun_collect_temporariesX_94),LITREF(lit_94),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_collect_temporariesX_94;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T186);
  lit_95 = YPPsym((P)"prepend-renamings");
  lit_96 = YPPsym((P)"z");
  T191 = YPsig(YPPlist(3,LITREF(lit_96),LITREF(lit_22),LITREF(lit_89)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_95 = YPmet(FUNCODEREF(fun_loop_95),LITREF(lit_14),T191,ENVNUL,PNUL,YPfalse);
  T190 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_89),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYprepend_renamings = YPmet(FUNCODEREF(YevalSast_linearizeYprepend_renamings),LITREF(lit_95),T190,ENVNUL,PNUL,YPfalse);
  T192 = YevalSast_linearizeYprepend_renamings;
  VARSET(YevalSast_linearizeYprepend_renamings,T192);
  T193 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_97 = YPmet(FUNCODEREF(fun_collect_temporariesX_97),LITREF(lit_94),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_collect_temporariesX_97;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T194);
  T198 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_98 = YPmet(FUNCODEREF(fun_collect_temporariesX_98),LITREF(lit_94),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSast_linearizeYcollect_temporariesX);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSast_linearizeYcollect_temporariesX);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_collect_temporariesX_98;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T199);
  lit_97 = YPPsym((P)"adjoin-temporary-variables!");
  lit_98 = YPPsym((P)"new-bindings");
  lit_99 = YPPsym((P)"adjoin");
  lit_100 = YPPsym((P)"temps");
  T204 = YPsig(YPPlist(2,LITREF(lit_100),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_99 = YPmet(FUNCODEREF(fun_adjoin_99),LITREF(lit_99),T204,ENVNUL,PNUL,YPfalse);
  T203 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_98)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_100 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_100),LITREF(lit_97),T203,ENVNUL,PNUL,YPfalse);
  T207 = BOUNDP(YevalSast_linearizeYadjoin_temporary_variablesX);
  if (T207 != YPfalse) {
    T206 = VARREF(YevalSast_linearizeYadjoin_temporary_variablesX);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_adjoin_temporary_variablesX_100;
  T205 = XCALL2(1,VARREF(YPdefine_method),T206,T208);
  VARSET(YevalSast_linearizeYadjoin_temporary_variablesX,T205);
  lit_101 = YPPsym((P)"<renamed-local-binding>");
  T210 = (P)YPpair(VARREF(YevalSastYLlocal_bindingG),Ynil);
  T209 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_101),T210);
  VARSET(YevalSast_linearizeYLrenamed_local_bindingG,T209);
  lit_102 = YPPsym((P)"binding-index");
  T211 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_101 = YPmet(FUNCODEREF(fun_binding_index_101),LITREF(lit_102),T211,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(YevalSastYbinding_index);
  if (T214 != YPfalse) {
    T213 = VARREF(YevalSastYbinding_index);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_binding_index_101;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YevalSastYbinding_index,T212);
  lit_103 = YPPsym((P)"binding-index-setter");
  T216 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_102 = YPmet(FUNCODEREF(fun_binding_index_setter_102),LITREF(lit_103),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YevalSastYbinding_index_setter);
  if (T219 != YPfalse) {
    T218 = VARREF(YevalSastYbinding_index_setter);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_binding_index_setter_102;
  T217 = XCALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YevalSastYbinding_index_setter,T217);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  DYNDEFSET(YevalSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_104 = YPPsym((P)"new-renamed-binding");
  T221 = YPsig(YPPlist(1,LITREF(lit_70)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_103 = YPmet(FUNCODEREF(fun_new_renamed_binding_103),LITREF(lit_104),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YevalSast_linearizeYnew_renamed_binding);
  if (T224 != YPfalse) {
    T223 = VARREF(YevalSast_linearizeYnew_renamed_binding);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_new_renamed_binding_103;
  T222 = XCALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YevalSast_linearizeYnew_renamed_binding,T222);
  VARSET(YevalSast_linearizeYTregister_passiveQT,YPfalse);
  lit_105 = YPPsym((P)"register-allocate!");
  lit_106 = YPPsym((P)"register-passive?");
  T229 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T229,ENVNUL,PNUL,YPfalse);
  T228 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T228,ENVNUL,PNUL,YPfalse);
  T227 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T227,ENVNUL,PNUL,YPfalse);
  T226 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_106)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_107 = YPmet(FUNCODEREF(fun_register_allocateX_107),LITREF(lit_105),T226,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YevalSast_linearizeYregister_allocateX);
  if (T232 != YPfalse) {
    T231 = VARREF(YevalSast_linearizeYregister_allocateX);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_register_allocateX_107;
  T230 = XCALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YevalSast_linearizeYregister_allocateX,T230);
  lit_107 = YPPsym((P)"allocate-register");
  lit_108 = YPPsym((P)"val?");
  T234 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_108)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYallocate_register = YPmet(FUNCODEREF(YevalSast_linearizeYallocate_register),LITREF(lit_107),T234,ENVNUL,PNUL,YPfalse);
  T235 = YevalSast_linearizeYallocate_register;
  VARSET(YevalSast_linearizeYallocate_register,T235);
  lit_109 = YPPsym((P)"collect-registers!");
  T236 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_108)),YPPlist(3,VARREF(YevalSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_109 = YPmet(FUNCODEREF(fun_collect_registersX_109),LITREF(lit_109),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_collect_registersX_109;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSast_linearizeYcollect_registersX,T237);
  T242 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_110 = YPmet(FUNCODEREF(fun_loop_110),LITREF(lit_14),T242,ENVNUL,PNUL,YPfalse);
  T241 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_108)),YPPlist(3,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_111 = YPmet(FUNCODEREF(fun_collect_registersX_111),LITREF(lit_109),T241,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T245 != YPfalse) {
    T244 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_collect_registersX_111;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YevalSast_linearizeYcollect_registersX,T243);
  T247 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_108)),YPPlist(3,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_112 = YPmet(FUNCODEREF(fun_collect_registersX_112),LITREF(lit_109),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T250 != YPfalse) {
    T249 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_collect_registersX_112;
  T248 = XCALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YevalSast_linearizeYcollect_registersX,T248);
  T253 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T253,ENVNUL,PNUL,YPfalse);
  T252 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_108)),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_114 = YPmet(FUNCODEREF(fun_collect_registersX_114),LITREF(lit_109),T252,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T256 != YPfalse) {
    T255 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_collect_registersX_114;
  T254 = XCALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YevalSast_linearizeYcollect_registersX,T254);
  T260 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_108)),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T259 = fun_collect_registersX_115 = YPmet(FUNCODEREF(fun_collect_registersX_115),LITREF(lit_109),T260,ENVNUL,PNUL,YPfalse);
  T264 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T264 != YPfalse) {
    T263 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_collect_registersX_115;
  T262 = XCALL2(1,VARREF(YPdefine_method),T263,T265);
  T261 = VARSET(YevalSast_linearizeYcollect_registersX,T262);
  T258 = T261;
  return T258;
}

P YevalSast_linearizeY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
DEFCREGS();
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_31),LITREF(lit_108)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_109),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_linearizeYcollect_registersX);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_linearizeYcollect_registersX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_collect_registersX_116;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_linearizeYcollect_registersX,T1);
  lit_110 = YPPsym((P)"ast-contains-fun?");
  T5 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_117 = YPmet(FUNCODEREF(fun_ast_contains_funQ_117),LITREF(lit_110),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSast_linearizeYast_contains_funQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSast_linearizeYast_contains_funQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_ast_contains_funQ_117;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSast_linearizeYast_contains_funQ,T6);
  lit_111 = YPPsym((P)"return");
  lit_112 = YPPsym((P)"walk");
  T12 = YPsig(YPPlist(1,LITREF(lit_89)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_118 = YPmet(FUNCODEREF(fun_walk_118),LITREF(lit_112),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(YPPlist(1,LITREF(lit_111)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_120 = YPmet(FUNCODEREF(fun_ast_contains_funQ_120),LITREF(lit_110),T10,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSast_linearizeYast_contains_funQ);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSast_linearizeYast_contains_funQ);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_ast_contains_funQ_120;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSast_linearizeYast_contains_funQ,T13);
  T17 = YPfalse;
  return T17;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSpacker},
  {&module_info_gooSruntime},
  {&module_info_evalSast},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%str", &module_info_gooSboot, "%str"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"@len", &module_info_gooSboot, "@len"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {">=", &module_info_gooSmag, ">="},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"sin", &module_info_gooSmath, "sin"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"~==", &module_info_gooSmath, "~=="},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"stack-overflow-error", &module_info_gooSruntime, "stack-overflow-error"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"add", &module_info_gooScolsScol, "add"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"tail", &module_info_gooSboot, "tail"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"not", &module_info_gooSboot, "not"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"dg", &module_info_gooSboot, "dg"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"pow", &module_info_gooSmath, "pow"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"dl", &module_info_gooSboot, "dl"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"<<", &module_info_gooSmath, "<<"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"as", &module_info_gooStypes, "as"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"head", &module_info_gooSboot, "head"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"round", &module_info_gooSmath, "round"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"~", &module_info_gooSmath, "~"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"op", &module_info_gooSmacros, "op"},
  {"div", &module_info_gooSmath, "div"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"always", &module_info_gooSruntime, "always"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"items", &module_info_gooScolsScol, "items"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"%get", &module_info_gooSboot, "%get"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"last", &module_info_gooSmacros, "last"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"==", &module_info_gooSmacros, "=="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"&", &module_info_gooSmath, "&"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"case", &module_info_gooSmacros, "case"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"map", &module_info_gooSmacros, "map"},
  {"-", &module_info_gooSmath, "-"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"match", &module_info_gooSmacros, "match"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%time", &module_info_gooSboot, "%time"},
  {">>", &module_info_gooSmath, ">>"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"module-uses-c-libraries", &module_info_evalSast, "module-uses-c-libraries"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"abs", &module_info_gooSmath, "abs"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"when", &module_info_gooSmacros, "when"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1-", &module_info_gooSmath, "1-"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"len", &module_info_gooStypes, "len"},
  {"~=", &module_info_gooSmath, "~="},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"unconstrained-type?", CVAR, &YevalSast_linearizeYunconstrained_typeQ},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"---main-1---", PVAR, NULL},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"program-bindings-setter", CVAR, &YevalSast_linearizeYprogram_bindings_setter},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"do-analysis!", CVAR, &YevalSast_linearizeYdo_analysisX},
  {"analyze-ast", CVAR, &YevalSast_linearizeYanalyze_ast},
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"---main-2---", PVAR, NULL},
  {"program-bindings", CVAR, &YevalSast_linearizeYprogram_bindings},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"ast-contains-fun?", CVAR, &YevalSast_linearizeYast_contains_funQ},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"do-do-analysis!", CVAR, &YevalSast_linearizeYdo_do_analysisX},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"---main-0---", PVAR, NULL},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<box-creation>", "<box-creation>"},
  {"reference-self?", "reference-self?"},
  {"<box-read>", "<box-read>"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"extract-things!", "extract-things!"},
  {"box-reference", "box-reference"},
  {"program-quotations", "program-quotations"},
  {"<top-level-form>", "<top-level-form>"},
  {"closurize-main!", "closurize-main!"},
  {"insert-box!", "insert-box!"},
  {"program-definitions", "program-definitions"},
  {"program-bindings", "program-bindings"},
  {"<box-write>", "<box-write>"},
  {"form-program", "form-program"},
  {"reference-offset", "reference-offset"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"program-form", "program-form"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"form-quotations", "form-quotations"},
  {"<closure-creation>", "<closure-creation>"},
  {"form-definitions", "form-definitions"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"closure-creation-index", "closure-creation-index"},
  {"<free-reference>", "<free-reference>"},
  {"register-allocate!", "register-allocate!"},
  {"closure-creation-free", "closure-creation-free"},
  {"*register-passive?*", "*register-passive?*"},
  {"lift!", "lift!"},
  {"box-form", "box-form"},
  {"analyze-ast", "analyze-ast"},
  {"flatten-seqs", "flatten-seqs"},
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

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooSruntime (void);
extern void load_module_evalSast (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_evalSast_linearize (void);

void load_module_evalSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSpacker();
  load_module_gooSruntime();
  load_module_evalSast();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();

  (P)YevalSast_linearizeY___main_0___();
  (P)YevalSast_linearizeY___main_1___();
  (P)YevalSast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
