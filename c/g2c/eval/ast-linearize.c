/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-linearize");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-linearize */

EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ynew,"goo/boot","new");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YevalSast_linearizeYdo_do_analysisX,"eval/ast-linearize","do-do-analysis!");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSpackerYpacker,"goo/packer","packer");
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YevalSast_linearizeYprogram_bindings_setter,"eval/ast-linearize","program-bindings-setter");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
DEF(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yfun_name,"goo/boot","fun-name");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(Yas_error,"goo/boot","as-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ynul,"goo/boot","nul");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
DEF(YevalSast_linearizeYdo_analysisX,"eval/ast-linearize","do-analysis!");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_144);
DEFLIT(lit_174);
DEFLIT(lit_98);
DEFLIT(lit_8);
DEFLIT(lit_10);
DEFLIT(lit_35);
DEFLIT(lit_80);
DEFLIT(lit_101);
DEFLIT(lit_4);
DEFLIT(lit_89);
DEFLIT(lit_61);
DEFLIT(lit_164);
DEFLIT(lit_106);
DEFLIT(lit_43);
DEFLIT(lit_0);
DEFLIT(lit_148);
DEFLIT(lit_131);
DEFLIT(lit_142);
DEFLIT(lit_54);
DEFLIT(lit_107);
DEFLIT(lit_134);
DEFLIT(lit_77);
DEFLIT(lit_143);
DEFLIT(lit_103);
DEFLIT(lit_199);
DEFLIT(lit_55);
DEFLIT(lit_170);
DEFLIT(lit_187);
DEFLIT(lit_7);
DEFLIT(lit_140);
DEFLIT(lit_147);
DEFLIT(lit_85);
DEFLIT(lit_146);
DEFLIT(lit_185);
DEFLIT(lit_139);
DEFLIT(lit_20);
DEFLIT(lit_3);
DEFLIT(lit_124);
DEFLIT(lit_141);
DEFLIT(lit_125);
DEFLIT(lit_68);
DEFLIT(lit_162);
DEFLIT(lit_130);
DEFLIT(lit_23);
DEFLIT(lit_180);
DEFLIT(lit_84);
DEFLIT(lit_114);
DEFLIT(lit_58);
DEFLIT(lit_49);
DEFLIT(lit_42);
DEFLIT(lit_90);
DEFLIT(lit_100);
DEFLIT(lit_26);
DEFLIT(lit_30);
DEFLIT(lit_51);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_97);
DEFLIT(lit_152);
DEFLIT(lit_150);
DEFLIT(lit_194);
DEFLIT(lit_133);
DEFLIT(lit_65);
DEFLIT(lit_182);
DEFLIT(lit_149);
DEFLIT(lit_161);
DEFLIT(lit_24);
DEFLIT(lit_172);
DEFLIT(lit_2);
DEFLIT(lit_160);
DEFLIT(lit_195);
DEFLIT(lit_6);
DEFLIT(lit_169);
DEFLIT(lit_19);
DEFLIT(lit_183);
DEFLIT(lit_21);
DEFLIT(lit_60);
DEFLIT(lit_72);
DEFLIT(lit_175);
DEFLIT(lit_66);
DEFLIT(lit_177);
DEFLIT(lit_38);
DEFLIT(lit_155);
DEFLIT(lit_64);
DEFLIT(lit_118);
DEFLIT(lit_119);
DEFLIT(lit_197);
DEFLIT(lit_136);
DEFLIT(lit_18);
DEFLIT(lit_91);
DEFLIT(lit_121);
DEFLIT(lit_156);
DEFLIT(lit_37);
DEFLIT(lit_36);
DEFLIT(lit_163);
DEFLIT(lit_41);
DEFLIT(lit_129);
DEFLIT(lit_186);
DEFLIT(lit_189);
DEFLIT(lit_191);
DEFLIT(lit_50);
DEFLIT(lit_48);
DEFLIT(lit_57);
DEFLIT(lit_190);
DEFLIT(lit_44);
DEFLIT(lit_128);
DEFLIT(lit_29);
DEFLIT(lit_192);
DEFLIT(lit_31);
DEFLIT(lit_92);
DEFLIT(lit_17);
DEFLIT(lit_198);
DEFLIT(lit_154);
DEFLIT(lit_123);
DEFLIT(lit_56);
DEFLIT(lit_63);
DEFLIT(lit_45);
DEFLIT(lit_110);
DEFLIT(lit_33);
DEFLIT(lit_138);
DEFLIT(lit_109);
DEFLIT(lit_126);
DEFLIT(lit_165);
DEFLIT(lit_111);
DEFLIT(lit_173);
DEFLIT(lit_27);
DEFLIT(lit_79);
DEFLIT(lit_104);
DEFLIT(lit_105);
DEFLIT(lit_40);
DEFLIT(lit_181);
DEFLIT(lit_13);
DEFLIT(lit_127);
DEFLIT(lit_52);
DEFLIT(lit_167);
DEFLIT(lit_184);
DEFLIT(lit_78);
DEFLIT(lit_46);
DEFLIT(lit_5);
DEFLIT(lit_113);
DEFLIT(lit_176);
DEFLIT(lit_117);
DEFLIT(lit_145);
DEFLIT(lit_70);
DEFLIT(lit_135);
DEFLIT(lit_93);
DEFLIT(lit_71);
DEFLIT(lit_168);
DEFLIT(lit_15);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_59);
DEFLIT(lit_115);
DEFLIT(lit_28);
DEFLIT(lit_158);
DEFLIT(lit_122);
DEFLIT(lit_82);
DEFLIT(lit_178);
DEFLIT(lit_47);
DEFLIT(lit_73);
DEFLIT(lit_99);
DEFLIT(lit_159);
DEFLIT(lit_88);
DEFLIT(lit_193);
DEFLIT(lit_76);
DEFLIT(lit_153);
DEFLIT(lit_151);
DEFLIT(lit_83);
DEFLIT(lit_108);
DEFLIT(lit_171);
DEFLIT(lit_69);
DEFLIT(lit_34);
DEFLIT(lit_67);
DEFLIT(lit_196);
DEFLIT(lit_102);
DEFLIT(lit_81);
DEFLIT(lit_74);
DEFLIT(lit_96);
DEFLIT(lit_179);
DEFLIT(lit_32);
DEFLIT(lit_16);
DEFLIT(lit_188);
DEFLIT(lit_53);
DEFLIT(lit_87);
DEFLIT(lit_157);
DEFLIT(lit_39);
DEFLIT(lit_12);
DEFLIT(lit_62);
DEFLIT(lit_137);
DEFLIT(lit_112);
DEFLIT(lit_86);
DEFLIT(lit_116);
DEFLIT(lit_22);
DEFLIT(lit_25);
DEFLIT(lit_75);
DEFLIT(lit_120);
DEFLIT(lit_95);
DEFLIT(lit_94);
DEFLIT(lit_166);
DEFLIT(lit_132);

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
  P creatorF2933;
  P bindingF2932;
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
    bindingF2932 = T5;
    T7 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF2932);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF2932);
      T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T10);
      creatorF2933 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF2933,res_);
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
  P loopF2934;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_15,2);
  loopF2934 = T2;
  FUNINIT(loopF2934, 2,form_,loopF2934);
  T3 = CALL2(0,loopF2934,Ynil,bindings_);
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
  P tmpF2935;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_30));
  tmpF2935 = T1;
  if (tmpF2935 != YPfalse) {
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
  P tmpF2940;
  P tmpF2939;
  P tmpF2938;
  P tmpF2937;
  P metF2936;
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
    metF2936 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF2936,VARREF(YevalSastYLast_functionG));
    tmpF2937 = T8;
    if (tmpF2937 != YPfalse) {
      T12 = fun_23;
      T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF2936);
      T11 = CALL2(1,VARREF(YgooScolsScolYallQ),T12,T13);
      tmpF2938 = T11;
      if (tmpF2938 != YPfalse) {
        T17 = CALL1(1,VARREF(YevalSastYfunction_value),metF2936);
        T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T17);
        tmpF2939 = T16;
        if (tmpF2939 != YPfalse) {
          T21 = CALL1(1,VARREF(YevalSastYfunction_naryQ),metF2936);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF2940 = T20;
          if (tmpF2940 != YPfalse) {
            T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF2936);
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
  P offsetF2942;
  P bF2941;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF2941 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF2941);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF2942 = T5;
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF2941,VARREF(YevalSast_linearizeYreference_offset),offsetF2942,VARREF(YevalSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_33) {
  P freeT_;
  P tailF2943;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF2943 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF2943);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF2943;
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
  P addF2945;
  P new_envF2944;
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
    new_envF2944 = T3;
    T6 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF2944,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_33,2);
      addF2945 = T9;
      FUNINIT(addF2945, 2,new_envF2944,addF2945);
      T11 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF2945,T11);
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
  P checkF2946;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_34,3);
  checkF2946 = T1;
  FUNINIT(checkF2946, 3,ref_,flat_fun_,checkF2946);
  T3 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF2946,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_36) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF2947;
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
  new_bindingsF2947 = T3;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF2947);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_37) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF2948;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF2948 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF2948);
  T5 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF2948);
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
  P innerF2949;
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
    innerF2949 = T4;
    FUNINIT(innerF2949, 3,s_,FREEREF(0),innerF2949);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF2949,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_67) {
  P o_;
  P loopF2950;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_66,1);
  loopF2950 = T1;
  FUNINIT(loopF2950, 1,loopF2950);
  T2 = CALL2(0,loopF2950,o_,Ynil);
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
  P resultF2952;
  P formsF2951;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T2);
  formsF2951 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF2952 = T4;
  T7 = FUNFAB(fun_70,1,resultF2952);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF2951);
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),T6);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T5,resultF2952);
  T3 = resultF2952;
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
  P x_1464F2962;
  P qbF2961;
  P probeF2960;
  P indexF2959;
  P qbTF2958;
  P tmpF2957;
  P tmpF2956;
  P tmpF2955;
  P tmpF2954;
  P valueF2953;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF2953 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2953,YPfalse);
  tmpF2954 = T4;
  if (tmpF2954 != YPfalse) {
    T5 = tmpF2954;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2953,YPtrue);
    tmpF2955 = T7;
    if (tmpF2955 != YPfalse) {
      T8 = tmpF2955;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2953,Ynil);
      tmpF2956 = T10;
      if (tmpF2956 != YPfalse) {
        T11 = tmpF2956;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF2953,VARREF(YLintG));
        tmpF2957 = T13;
        if (tmpF2957 != YPfalse) {
          T14 = tmpF2957;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF2953,VARREF(YLchrG));
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
    qbTF2958 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF2958);
    indexF2959 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF2958,valueF2953,YPfalse);
    probeF2960 = T21;
    if (probeF2960 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF2960);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_126),VARREF(YevalSastYbinding_name),indexF2959,VARREF(YevalSastYbinding_info),valueF2953);
      qbF2961 = T25;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF2961,qbTF2958,valueF2953);
      x_1464F2962 = form_;
      T28 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),x_1464F2962);
      T27 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T28,qbF2961);
      T26 = CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T27,x_1464F2962);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF2961);
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
  P indexF2965;
  P free_bindingsF2964;
  P freeF2963;
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
  freeF2963 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF2963);
  free_bindingsF2964 = T11;
  T13 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF2965 = T13;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF2965,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF2964,o_);
  T14 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF2965,VARREF(YevalSast_linearizeYclosure_creation_free),freeF2963);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_77) {
  P o_,form_,result_;
  P x_1465F2967;
  P primF2966;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF2966 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),primF2966);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T2,primF2966);
  x_1465F2967 = result_;
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1465F2967);
  T5 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,primF2966);
  T4 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T5,x_1465F2967);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_78) {
  P form_,result_,x_;
  P x_1467F2970;
  P x_1466F2969;
  P new_indexF2968;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF2968 = T1;
  x_1466F2969 = result_;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1466F2969);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T4,x_1466F2969);
  x_1467F2970 = form_;
  T8 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),x_1467F2970);
  T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,x_);
  T6 = CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T7,x_1467F2970);
  T0 = new_indexF2968;
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
  P innerF2971;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_80,4);
  innerF2971 = T1;
  FUNINIT(innerF2971, 4,forms_,FREEREF(0),FREEREF(1),innerF2971);
  T2 = CALL3(0,innerF2971,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_82) {
  P o_,max_count_;
  P loopF2972;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_81,2);
  loopF2972 = T1;
  FUNINIT(loopF2972, 2,max_count_,loopF2972);
  T2 = CALL2(0,loopF2972,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P calls_,defns_,i_,forms_;
  P callF2976;
  P defnF2975;
  P bindingF2974;
  P nameF2973;
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
    nameF2973 = T8;
    T10 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(1),nameF2973,YPfalse,LITREF(lit_143));
    bindingF2974 = T10;
    T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF2973,YPint((P)4));
    T14 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2974,VARREF(YevalSastYfunction_debug_name),T13,VARREF(YevalSastYfunction_signature),T14,VARREF(YevalSastYfunction_body),T15);
    defnF2975 = T12;
    T18 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF2974,VARREF(YevalSastYapplication_arguments),T18,VARREF(YevalSastYapplication_tailQ),YPfalse);
    callF2976 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF2976,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF2975,defns_);
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
  P loopF2979;
  P base_indexF2978;
  P formsF2977;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T2,max_count_);
  formsF2977 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF2978 = T4;
  T7 = FUNSHELL(1,fun_loop_83,3);
  loopF2979 = T7;
  FUNINIT(loopF2979, 3,o_,r_,loopF2979);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T8 = CALL4(0,loopF2979,Ynil,T9,YPint((P)0),formsF2977);
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
  P bF2981;
  P bindingF2980;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF2980 = T1;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF2980,r_);
  bF2981 = T3;
  if (bF2981 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF2981);
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
  P loopF2982;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_95,1);
  loopF2982 = T1;
  FUNINIT(loopF2982, 1,loopF2982);
  T2 = CALL3(0,loopF2982,r_,x_,y_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_97) {
  P o_,flat_fun_,r_;
  P new_rF2984;
  P new_bindingsF2983;
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
  new_bindingsF2983 = T3;
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T7,new_bindingsF2983,r_);
  new_rF2984 = T6;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2983);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF2983,o_);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T8 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T9,flat_fun_,new_rF2984);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T8,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_98) {
  P o_,flat_fun_,r_;
  P new_rF2986;
  P new_bindingsF2985;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF2985 = T1;
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF2985,r_);
  new_rF2986 = T4;
  T7 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF2986);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,T8);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T6,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2985);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF2985,o_);
  T10 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T9 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF2986);
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
  P adjoinF2987;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_99,2);
  adjoinF2987 = T1;
  FUNINIT(adjoinF2987, 2,flat_fun_,adjoinF2987);
  T3 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF2987,T3,new_bindings_);
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
  P x_1468F2988;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1468F2988 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_105,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_106,1,x_1468F2988);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,flat_fun_,valQ_;
  P tmpF2990;
  P tmpF2989;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF2989 = valQ_;
  if (tmpF2989 != YPfalse) {
    tmpF2990 = flat_fun_;
    if (tmpF2990 != YPfalse) {
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
  P tmpF2992;
  P next_xF2991;
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
    next_xF2991 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF2992 = FREEREF(2);
    if (tmpF2992 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF2991);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF2991;
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
  P loopF2993;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_110,4);
  loopF2993 = T1;
  FUNINIT(loopF2993, 4,o_,flat_fun_,valQ_,loopF2993);
  T2 = CALL1(0,loopF2993,o_);
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
  P walkF2994;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_118,2);
  walkF2994 = T0;
  FUNINIT(walkF2994, 2,return_,walkF2994);
  T1 = CALL2(1,VARREF(YevalSastYast_walk),walkF2994,FREEREF(0));
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
  fun_box_reference_0 = YPmet(FUNCODEREF(fun_box_reference_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(11));
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
  fun_box_reference_setter_1 = YPmet(FUNCODEREF(fun_box_reference_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(11));
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
  fun_box_reference_2 = YPmet(FUNCODEREF(fun_box_reference_2),LITREF(lit_1),T14,ENVNUL,PNUL,sloc(14));
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
  fun_box_reference_setter_3 = YPmet(FUNCODEREF(fun_box_reference_setter_3),LITREF(lit_3),T19,ENVNUL,PNUL,sloc(14));
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
  fun_box_form_4 = YPmet(FUNCODEREF(fun_box_form_4),LITREF(lit_8),T24,ENVNUL,PNUL,sloc(15));
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
  fun_box_form_setter_5 = YPmet(FUNCODEREF(fun_box_form_setter_5),LITREF(lit_10),T29,ENVNUL,PNUL,sloc(15));
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
  fun_box_reference_6 = YPmet(FUNCODEREF(fun_box_reference_6),LITREF(lit_1),T36,ENVNUL,PNUL,sloc(18));
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
  fun_box_reference_setter_7 = YPmet(FUNCODEREF(fun_box_reference_setter_7),LITREF(lit_3),T41,ENVNUL,PNUL,sloc(18));
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
  fun_insert_boxX_8 = YPmet(FUNCODEREF(fun_insert_boxX_8),LITREF(lit_15),T46,ENVNUL,PNUL,sloc(20));
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
  fun_insert_boxX_9 = YPmet(FUNCODEREF(fun_insert_boxX_9),LITREF(lit_15),T51,ENVNUL,PNUL,sloc(23));
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
  fun_insert_boxX_10 = YPmet(FUNCODEREF(fun_insert_boxX_10),LITREF(lit_15),T56,ENVNUL,PNUL,sloc(29));
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
  fun_insert_boxX_11 = YPmet(FUNCODEREF(fun_insert_boxX_11),LITREF(lit_15),T61,ENVNUL,PNUL,sloc(35));
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
  fun_insert_boxX_12 = YPmet(FUNCODEREF(fun_insert_boxX_12),LITREF(lit_15),T66,ENVNUL,PNUL,sloc(40));
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
  fun_insert_boxX_13 = YPmet(FUNCODEREF(fun_insert_boxX_13),LITREF(lit_15),T71,ENVNUL,PNUL,sloc(46));
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
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),LITREF(lit_15),T76,ENVNUL,PNUL,sloc(54));
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
  fun_loop_15 = YPmet(FUNCODEREF(fun_loop_15),LITREF(lit_25),T82,ENVNUL,PNUL,sloc(64));
  T81 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_16 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_16),LITREF(lit_23),T81,ENVNUL,PNUL,sloc(62));
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
  fun_unconstrained_typeQ_17 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_17),LITREF(lit_27),T87,ENVNUL,PNUL,sloc(79));
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
  fun_unconstrained_typeQ_18 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_18),LITREF(lit_27),T92,ENVNUL,PNUL,sloc(82));
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
  fun_unconstrained_typeQ_19 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_19),LITREF(lit_27),T97,ENVNUL,PNUL,sloc(85));
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
  fun_do_do_analysisX_20 = YPmet(FUNCODEREF(fun_do_do_analysisX_20),LITREF(lit_33),T102,ENVNUL,PNUL,sloc(88));
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
  fun_do_analysisX_21 = YPmet(FUNCODEREF(fun_do_analysisX_21),LITREF(lit_35),T107,ENVNUL,PNUL,sloc(91));
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
  fun_do_analysisX_22 = YPmet(FUNCODEREF(fun_do_analysisX_22),LITREF(lit_35),T112,ENVNUL,PNUL,sloc(94));
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
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T118,ENVNUL,PNUL,sloc(105));
  T117 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_24 = YPmet(FUNCODEREF(fun_do_analysisX_24),LITREF(lit_35),T117,ENVNUL,PNUL,sloc(100));
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
  fun_analyze_ast_25 = YPmet(FUNCODEREF(fun_analyze_ast_25),LITREF(lit_40),T123,ENVNUL,PNUL,sloc(114));
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
  fun_reference_offset_26 = YPmet(FUNCODEREF(fun_reference_offset_26),LITREF(lit_43),T130,ENVNUL,PNUL,sloc(121));
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
  fun_reference_offset_setter_27 = YPmet(FUNCODEREF(fun_reference_offset_setter_27),LITREF(lit_45),T135,ENVNUL,PNUL,sloc(121));
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
  fun_reference_selfQ_28 = YPmet(FUNCODEREF(fun_reference_selfQ_28),LITREF(lit_47),T142,ENVNUL,PNUL,sloc(122));
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
  fun_reference_selfQ_setter_29 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_29),LITREF(lit_49),T147,ENVNUL,PNUL,sloc(122));
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
  fun_liftX_30 = YPmet(FUNCODEREF(fun_liftX_30),LITREF(lit_51),T152,ENVNUL,PNUL,sloc(124));
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
  fun_lift_proceduresX_31 = YPmet(FUNCODEREF(fun_lift_proceduresX_31),LITREF(lit_53),T157,ENVNUL,PNUL,sloc(127));
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
  fun_lift_proceduresX_32 = YPmet(FUNCODEREF(fun_lift_proceduresX_32),LITREF(lit_53),T162,ENVNUL,PNUL,sloc(130));
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
  fun_add_33 = YPmet(FUNCODEREF(fun_add_33),LITREF(lit_60),T169,ENVNUL,PNUL,sloc(147));
  T168 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_34 = YPmet(FUNCODEREF(fun_check_34),LITREF(lit_58),T168,ENVNUL,PNUL,sloc(142));
  T167 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_35 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_35),LITREF(lit_56),T167,ENVNUL,PNUL,sloc(141));
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
  fun_lift_proceduresX_36 = YPmet(FUNCODEREF(fun_lift_proceduresX_36),LITREF(lit_53),T174,ENVNUL,PNUL,sloc(158));
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
  fun_lift_proceduresX_37 = YPmet(FUNCODEREF(fun_lift_proceduresX_37),LITREF(lit_53),T179,ENVNUL,PNUL,sloc(166));
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
  fun_lift_proceduresX_38 = YPmet(FUNCODEREF(fun_lift_proceduresX_38),LITREF(lit_53),T184,ENVNUL,PNUL,sloc(175));
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
  fun_lift_proceduresX_39 = YPmet(FUNCODEREF(fun_lift_proceduresX_39),LITREF(lit_53),T189,ENVNUL,PNUL,sloc(180));
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
  fun_lift_proceduresX_40 = YPmet(FUNCODEREF(fun_lift_proceduresX_40),LITREF(lit_53),T194,ENVNUL,PNUL,sloc(183));
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
  fun_program_form_41 = YPmet(FUNCODEREF(fun_program_form_41),LITREF(lit_68),T201,ENVNUL,PNUL,sloc(193));
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
  fun_program_form_setter_42 = YPmet(FUNCODEREF(fun_program_form_setter_42),LITREF(lit_70),T206,ENVNUL,PNUL,sloc(193));
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
  fun_program_quotations_43 = YPmet(FUNCODEREF(fun_program_quotations_43),LITREF(lit_72),T213,ENVNUL,PNUL,sloc(194));
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
  fun_program_quotations_setter_44 = YPmet(FUNCODEREF(fun_program_quotations_setter_44),LITREF(lit_74),T218,ENVNUL,PNUL,sloc(194));
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
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T223,ENVNUL,PNUL,sloc(194));
  T224 = fun_45;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_quotations),VARREF(YevalSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T224);
  lit_77 = YPPsym((P)"program-bindings");
  lit_78 = YPPlist(1,YPPsym((P)"_x"));
  T225 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_bindings_46 = YPmet(FUNCODEREF(fun_program_bindings_46),LITREF(lit_77),T225,ENVNUL,PNUL,sloc(195));
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
  fun_program_bindings_setter_47 = YPmet(FUNCODEREF(fun_program_bindings_setter_47),LITREF(lit_79),T230,ENVNUL,PNUL,sloc(195));
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
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T235,ENVNUL,PNUL,sloc(195));
  T236 = fun_48;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_bindings),VARREF(YevalSast_linearizeYprogram_bindings_setter),VARREF(YLanyG),T236);
  lit_82 = YPPsym((P)"program-definitions");
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T237 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_49 = YPmet(FUNCODEREF(fun_program_definitions_49),LITREF(lit_82),T237,ENVNUL,PNUL,sloc(196));
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
  fun_program_definitions_setter_50 = YPmet(FUNCODEREF(fun_program_definitions_setter_50),LITREF(lit_84),T242,ENVNUL,PNUL,sloc(196));
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
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T247,ENVNUL,PNUL,sloc(196));
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
  fun_form_program_52 = YPmet(FUNCODEREF(fun_form_program_52),LITREF(lit_88),T0,ENVNUL,PNUL,sloc(199));
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
  fun_form_program_setter_53 = YPmet(FUNCODEREF(fun_form_program_setter_53),LITREF(lit_90),T5,ENVNUL,PNUL,sloc(199));
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
  fun_form_quotations_54 = YPmet(FUNCODEREF(fun_form_quotations_54),LITREF(lit_92),T10,ENVNUL,PNUL,sloc(200));
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
  fun_form_quotations_setter_55 = YPmet(FUNCODEREF(fun_form_quotations_setter_55),LITREF(lit_94),T15,ENVNUL,PNUL,sloc(200));
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
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T20,ENVNUL,PNUL,sloc(200));
  T21 = fun_56;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_quotations),VARREF(YevalSast_linearizeYform_quotations_setter),VARREF(YLanyG),T21);
  lit_97 = YPPsym((P)"form-definitions");
  lit_98 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_57 = YPmet(FUNCODEREF(fun_form_definitions_57),LITREF(lit_97),T22,ENVNUL,PNUL,sloc(201));
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
  fun_form_definitions_setter_58 = YPmet(FUNCODEREF(fun_form_definitions_setter_58),LITREF(lit_99),T27,ENVNUL,PNUL,sloc(201));
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
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T32,ENVNUL,PNUL,sloc(201));
  T33 = fun_59;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_definitions),VARREF(YevalSast_linearizeYform_definitions_setter),VARREF(YLanyG),T33);
  lit_102 = YPPsym((P)"<closure-creation>");
  T35 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T34 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_102),T35);
  VARSET(YevalSast_linearizeYLclosure_creationG,T34);
  lit_103 = YPPsym((P)"closure-creation-index");
  lit_104 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_60 = YPmet(FUNCODEREF(fun_closure_creation_index_60),LITREF(lit_103),T36,ENVNUL,PNUL,sloc(204));
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
  fun_closure_creation_index_setter_61 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_61),LITREF(lit_105),T41,ENVNUL,PNUL,sloc(204));
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
  fun_closure_creation_free_62 = YPmet(FUNCODEREF(fun_closure_creation_free_62),LITREF(lit_107),T46,ENVNUL,PNUL,sloc(205));
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
  fun_closure_creation_free_setter_63 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_63),LITREF(lit_109),T51,ENVNUL,PNUL,sloc(205));
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
  fun_flatten_seqs_64 = YPmet(FUNCODEREF(fun_flatten_seqs_64),LITREF(lit_111),T56,ENVNUL,PNUL,sloc(207));
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
  fun_inner_65 = YPmet(FUNCODEREF(fun_inner_65),LITREF(lit_115),T63,ENVNUL,PNUL,sloc(214));
  T62 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_66 = YPmet(FUNCODEREF(fun_loop_66),LITREF(lit_25),T62,ENVNUL,PNUL,sloc(211));
  T61 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YevalSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_67 = YPmet(FUNCODEREF(fun_flatten_seqs_67),LITREF(lit_111),T61,ENVNUL,PNUL,sloc(210));
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
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T69,ENVNUL,PNUL,sloc(220));
  T68 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_69 = YPmet(FUNCODEREF(fun_as_top_level_forms_69),LITREF(lit_117),T68,ENVNUL,PNUL,sloc(219));
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
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T75,ENVNUL,PNUL,sloc(226));
  T74 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_71 = YPmet(FUNCODEREF(fun_extract_thingsX_71),LITREF(lit_120),T74,ENVNUL,PNUL,sloc(222));
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
  fun_extractX_72 = YPmet(FUNCODEREF(fun_extractX_72),LITREF(lit_123),T80,ENVNUL,PNUL,sloc(229));
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
  fun_extractX_73 = YPmet(FUNCODEREF(fun_extractX_73),LITREF(lit_123),T85,ENVNUL,PNUL,sloc(232));
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
  fun_extractX_74 = YPmet(FUNCODEREF(fun_extractX_74),LITREF(lit_123),T90,ENVNUL,PNUL,sloc(250));
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
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T96,ENVNUL,PNUL,sloc(259));
  T95 = YPsig(LITREF(lit_128),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_76 = YPmet(FUNCODEREF(fun_extractX_76),LITREF(lit_123),T95,ENVNUL,PNUL,sloc(253));
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
  fun_extractX_77 = YPmet(FUNCODEREF(fun_extractX_77),LITREF(lit_123),T101,ENVNUL,PNUL,sloc(271));
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
  fun_adjoin_definitionX_78 = YPmet(FUNCODEREF(fun_adjoin_definitionX_78),LITREF(lit_131),T106,ENVNUL,PNUL,sloc(279));
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
  fun_split_program_79 = YPmet(FUNCODEREF(fun_split_program_79),LITREF(lit_133),T111,ENVNUL,PNUL,sloc(287));
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
  fun_inner_80 = YPmet(FUNCODEREF(fun_inner_80),LITREF(lit_115),T118,ENVNUL,PNUL,sloc(292));
  T117 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_81 = YPmet(FUNCODEREF(fun_loop_81),LITREF(lit_25),T117,ENVNUL,PNUL,sloc(291));
  T116 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_82 = YPmet(FUNCODEREF(fun_split_program_82),LITREF(lit_133),T116,ENVNUL,PNUL,sloc(290));
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
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_25),T124,ENVNUL,PNUL,sloc(303));
  T123 = YPsig(LITREF(lit_139),YPPlist(3,VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_84 = YPmet(FUNCODEREF(fun_closurize_mainX_84),LITREF(lit_138),T123,ENVNUL,PNUL,sloc(300));
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
  fun_assoc_key_85 = YPmet(FUNCODEREF(fun_assoc_key_85),LITREF(lit_145),T131,ENVNUL,PNUL,sloc(334));
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
  fun_assoc_key_setter_86 = YPmet(FUNCODEREF(fun_assoc_key_setter_86),LITREF(lit_147),T136,ENVNUL,PNUL,sloc(334));
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
  fun_assoc_value_87 = YPmet(FUNCODEREF(fun_assoc_value_87),LITREF(lit_149),T141,ENVNUL,PNUL,sloc(335));
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
  fun_assoc_value_setter_88 = YPmet(FUNCODEREF(fun_assoc_value_setter_88),LITREF(lit_151),T146,ENVNUL,PNUL,sloc(335));
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
  YevalSast_linearizeYassoc = YPmet(FUNCODEREF(YevalSast_linearizeYassoc),LITREF(lit_153),T151,ENVNUL,PNUL,sloc(336));
  T152 = YevalSast_linearizeYassoc;
  VARSET(YevalSast_linearizeYassoc,T152);
  lit_155 = YPPsym((P)"assocq");
  lit_156 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T153 = YPsig(LITREF(lit_156),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_90 = YPmet(FUNCODEREF(fun_assocq_90),LITREF(lit_155),T153,ENVNUL,PNUL,sloc(339));
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
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T159,ENVNUL,PNUL,sloc(348));
  T158 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_92 = YPmet(FUNCODEREF(fun_gather_temporariesX_92),LITREF(lit_157),T158,ENVNUL,PNUL,sloc(346));
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
  fun_collect_temporariesX_93 = YPmet(FUNCODEREF(fun_collect_temporariesX_93),LITREF(lit_160),T164,ENVNUL,PNUL,sloc(352));
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
  fun_collect_temporariesX_94 = YPmet(FUNCODEREF(fun_collect_temporariesX_94),LITREF(lit_160),T169,ENVNUL,PNUL,sloc(355));
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
  fun_loop_95 = YPmet(FUNCODEREF(fun_loop_95),LITREF(lit_25),T175,ENVNUL,PNUL,sloc(364));
  T174 = YPsig(LITREF(lit_164),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYprepend_renamings = YPmet(FUNCODEREF(YevalSast_linearizeYprepend_renamings),LITREF(lit_163),T174,ENVNUL,PNUL,sloc(362));
  T176 = YevalSast_linearizeYprepend_renamings;
  VARSET(YevalSast_linearizeYprepend_renamings,T176);
  lit_166 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T177 = YPsig(LITREF(lit_166),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_97 = YPmet(FUNCODEREF(fun_collect_temporariesX_97),LITREF(lit_160),T177,ENVNUL,PNUL,sloc(369));
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
  fun_collect_temporariesX_98 = YPmet(FUNCODEREF(fun_collect_temporariesX_98),LITREF(lit_160),T182,ENVNUL,PNUL,sloc(379));
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
  fun_adjoin_99 = YPmet(FUNCODEREF(fun_adjoin_99),LITREF(lit_170),T188,ENVNUL,PNUL,sloc(392));
  T187 = YPsig(LITREF(lit_169),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_100 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_100),LITREF(lit_168),T187,ENVNUL,PNUL,sloc(391));
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
  fun_binding_index_101 = YPmet(FUNCODEREF(fun_binding_index_101),LITREF(lit_173),T195,ENVNUL,PNUL,sloc(401));
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
  fun_binding_index_setter_102 = YPmet(FUNCODEREF(fun_binding_index_setter_102),LITREF(lit_175),T200,ENVNUL,PNUL,sloc(401));
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
  fun_new_renamed_binding_103 = YPmet(FUNCODEREF(fun_new_renamed_binding_103),LITREF(lit_177),T205,ENVNUL,PNUL,sloc(405));
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
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T213,ENVNUL,PNUL,sloc(419));
  T212 = YPsig(LITREF(lit_181),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T212,ENVNUL,PNUL,sloc(418));
  T211 = YPsig(LITREF(lit_181),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T211,ENVNUL,PNUL,sloc(418));
  T210 = YPsig(LITREF(lit_180),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_107 = YPmet(FUNCODEREF(fun_register_allocateX_107),LITREF(lit_179),T210,ENVNUL,PNUL,sloc(417));
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
  YevalSast_linearizeYallocate_register = YPmet(FUNCODEREF(YevalSast_linearizeYallocate_register),LITREF(lit_183),T218,ENVNUL,PNUL,sloc(422));
  T219 = YevalSast_linearizeYallocate_register;
  VARSET(YevalSast_linearizeYallocate_register,T219);
  lit_185 = YPPsym((P)"collect-registers!");
  lit_186 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T220 = YPsig(LITREF(lit_186),YPPlist(3,VARREF(YevalSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_109 = YPmet(FUNCODEREF(fun_collect_registersX_109),LITREF(lit_185),T220,ENVNUL,PNUL,sloc(428));
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
  fun_loop_110 = YPmet(FUNCODEREF(fun_loop_110),LITREF(lit_25),T226,ENVNUL,PNUL,sloc(433));
  T225 = YPsig(LITREF(lit_187),YPPlist(3,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_111 = YPmet(FUNCODEREF(fun_collect_registersX_111),LITREF(lit_185),T225,ENVNUL,PNUL,sloc(432));
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
  fun_collect_registersX_112 = YPmet(FUNCODEREF(fun_collect_registersX_112),LITREF(lit_185),T231,ENVNUL,PNUL,sloc(440));
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
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T237,ENVNUL,PNUL,sloc(447));
  T236 = YPsig(LITREF(lit_190),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_114 = YPmet(FUNCODEREF(fun_collect_registersX_114),LITREF(lit_185),T236,ENVNUL,PNUL,sloc(445));
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
  fun_collect_registersX_115 = YPmet(FUNCODEREF(fun_collect_registersX_115),LITREF(lit_185),T242,ENVNUL,PNUL,sloc(451));
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
  fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_185),T247,ENVNUL,PNUL,sloc(459));
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
  fun_ast_contains_funQ_117 = YPmet(FUNCODEREF(fun_ast_contains_funQ_117),LITREF(lit_194),T252,ENVNUL,PNUL,sloc(465));
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
  fun_walk_118 = YPmet(FUNCODEREF(fun_walk_118),LITREF(lit_198),T259,ENVNUL,PNUL,sloc(470));
  T258 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T258,ENVNUL,PNUL,sloc(469));
  T257 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_120 = YPmet(FUNCODEREF(fun_ast_contains_funQ_120),LITREF(lit_194),T257,ENVNUL,PNUL,sloc(468));
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
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"function-self-recursive?", &module_info_evalSast, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"function-self-recursive?-setter", &module_info_evalSast, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"do-do-analysis!", CVAR, &YevalSast_linearizeYdo_do_analysisX},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"---main-0---", PVAR, NULL},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"program-bindings-setter", CVAR, &YevalSast_linearizeYprogram_bindings_setter},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"program-bindings", CVAR, &YevalSast_linearizeYprogram_bindings},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"---main-1---", PVAR, NULL},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {"analyze-ast", CVAR, &YevalSast_linearizeYanalyze_ast},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"unconstrained-type?", CVAR, &YevalSast_linearizeYunconstrained_typeQ},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"do-analysis!", CVAR, &YevalSast_linearizeYdo_analysisX},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"ast-contains-fun?", CVAR, &YevalSast_linearizeYast_contains_funQ},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"closure-creation-index", NULL},
  {"register-allocate!", NULL},
  {"form-definitions", NULL},
  {"<top-level-form>", NULL},
  {"form-quotations", NULL},
  {"form-program", NULL},
  {"<box-read>", NULL},
  {"closure-creation-free", NULL},
  {"flatten-seqs", NULL},
  {"box-reference", NULL},
  {"<free-reference>", NULL},
  {"program-definitions", NULL},
  {"<box-write>", NULL},
  {"reference-self?", NULL},
  {"program-bindings", NULL},
  {"program-quotations", NULL},
  {"reference-offset", NULL},
  {"analyze-ast", NULL},
  {"extract-things!", NULL},
  {"closurize-main!", NULL},
  {"unconstrained-type?", NULL},
  {"program-form", NULL},
  {"box-form", NULL},
  {"*register-passive?*", NULL},
  {"<box-creation>", NULL},
  {"<renamed-local-binding>", NULL},
  {"gather-temporaries!", NULL},
  {"ast-contains-fun?", NULL},
  {"insert-box!", NULL},
  {"lift!", NULL},
  {"<closure-creation>", NULL},
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
