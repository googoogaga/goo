/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-eval");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-eval */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
DEF(YevalSast_evalYenv_dynamic_value_setter,"eval/ast-eval","env-dynamic-value-setter");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSast_evalYenv_values_setter,"eval/ast-eval","env-values-setter");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YevalSast_evalYenv_function_setter,"eval/ast-eval","env-function-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSast_evalYenv_dynamic_value,"eval/ast-eval","env-dynamic-value");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalSast_evalYenv_parent_setter,"eval/ast-eval","env-parent-setter");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yhead,"goo/boot","head");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYN,"goo/math","~");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSast_evalYenv_names_setter,"eval/ast-eval","env-names-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(Yclone,"goo/boot","clone");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSast_evalYenv_global_binding_value_or,"eval/ast-eval","env-global-binding-value-or");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_50);
DEFLIT(lit_125);
DEFLIT(lit_59);
DEFLIT(lit_72);
DEFLIT(lit_103);
DEFLIT(lit_73);
DEFLIT(lit_26);
DEFLIT(lit_133);
DEFLIT(lit_61);
DEFLIT(lit_84);
DEFLIT(lit_127);
DEFLIT(lit_97);
DEFLIT(lit_78);
DEFLIT(lit_21);
DEFLIT(lit_74);
DEFLIT(lit_130);
DEFLIT(lit_71);
DEFLIT(lit_46);
DEFLIT(lit_77);
DEFLIT(lit_118);
DEFLIT(lit_117);
DEFLIT(lit_27);
DEFLIT(lit_1);
DEFLIT(lit_68);
DEFLIT(lit_24);
DEFLIT(lit_115);
DEFLIT(lit_111);
DEFLIT(lit_58);
DEFLIT(lit_52);
DEFLIT(lit_7);
DEFLIT(lit_33);
DEFLIT(lit_2);
DEFLIT(lit_114);
DEFLIT(lit_134);
DEFLIT(lit_76);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_45);
DEFLIT(lit_65);
DEFLIT(lit_90);
DEFLIT(lit_136);
DEFLIT(lit_28);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_119);
DEFLIT(lit_39);
DEFLIT(lit_126);
DEFLIT(lit_120);
DEFLIT(lit_3);
DEFLIT(lit_124);
DEFLIT(lit_122);
DEFLIT(lit_80);
DEFLIT(lit_95);
DEFLIT(lit_47);
DEFLIT(lit_141);
DEFLIT(lit_14);
DEFLIT(lit_60);
DEFLIT(lit_55);
DEFLIT(lit_17);
DEFLIT(lit_64);
DEFLIT(lit_121);
DEFLIT(lit_85);
DEFLIT(lit_89);
DEFLIT(lit_82);
DEFLIT(lit_63);
DEFLIT(lit_67);
DEFLIT(lit_91);
DEFLIT(lit_87);
DEFLIT(lit_25);
DEFLIT(lit_42);
DEFLIT(lit_139);
DEFLIT(lit_100);
DEFLIT(lit_98);
DEFLIT(lit_104);
DEFLIT(lit_41);
DEFLIT(lit_62);
DEFLIT(lit_51);
DEFLIT(lit_43);
DEFLIT(lit_107);
DEFLIT(lit_140);
DEFLIT(lit_143);
DEFLIT(lit_123);
DEFLIT(lit_4);
DEFLIT(lit_57);
DEFLIT(lit_11);
DEFLIT(lit_70);
DEFLIT(lit_35);
DEFLIT(lit_132);
DEFLIT(lit_8);
DEFLIT(lit_38);
DEFLIT(lit_93);
DEFLIT(lit_112);
DEFLIT(lit_23);
DEFLIT(lit_113);
DEFLIT(lit_69);
DEFLIT(lit_138);
DEFLIT(lit_83);
DEFLIT(lit_18);
DEFLIT(lit_15);
DEFLIT(lit_131);
DEFLIT(lit_30);
DEFLIT(lit_129);
DEFLIT(lit_36);
DEFLIT(lit_116);
DEFLIT(lit_19);
DEFLIT(lit_44);
DEFLIT(lit_92);
DEFLIT(lit_66);
DEFLIT(lit_110);
DEFLIT(lit_0);
DEFLIT(lit_5);
DEFLIT(lit_31);
DEFLIT(lit_53);
DEFLIT(lit_142);
DEFLIT(lit_12);
DEFLIT(lit_56);
DEFLIT(lit_22);
DEFLIT(lit_106);
DEFLIT(lit_101);
DEFLIT(lit_109);
DEFLIT(lit_79);
DEFLIT(lit_54);
DEFLIT(lit_94);
DEFLIT(lit_81);
DEFLIT(lit_105);
DEFLIT(lit_88);
DEFLIT(lit_16);
DEFLIT(lit_13);
DEFLIT(lit_96);
DEFLIT(lit_86);
DEFLIT(lit_29);
DEFLIT(lit_99);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_108);
DEFLIT(lit_135);
DEFLIT(lit_137);
DEFLIT(lit_37);
DEFLIT(lit_75);
DEFLIT(lit_32);
DEFLIT(lit_102);
DEFLIT(lit_48);
DEFLIT(lit_49);
DEFLIT(lit_128);

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
LOCFOR(fun_x_1470_32);
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
LOCFOR(fun_env_global_binding_value_or_54);
LOCFOR(fun_ast_eval_boundQ_55);
LOCFOR(fun_ast_eval_boundQ_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_ast_eval_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_env_define_bindingX_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_eval_65);
LOCFOR(fun_ast_eval_66);
LOCFOR(fun_eval_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_ast_eval_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_ast_eval_71);
LOCFOR(fun_72);
LOCFOR(fun_ast_eval_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
LOCFOR(fun_ast_eval_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_ast_eval_79);
LOCFOR(fun_ast_eval_80);
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
extern P YevalSast_evalYPbinding_value_or_of (P,P);
extern P YevalSast_evalYPbinding_value_or (P,P);
extern P YevalSast_evalY___main_0___ ();
extern P YevalSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF2974;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2974 = T1;
  if (boxF2974 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYglobal_box_value),boxF2974);
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
  P boxF2975;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2975 = T1;
  boxF2975 = BOXFAB(boxF2975);
  T4 = BOXVAL(boxF2975);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(YevalSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF2975) = T6;
  } else {
  }
  T9 = BOXVAL(boxF2975);
  T8 = CALL2(1,VARREF(YevalSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF2976;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2976 = T1;
  if (boxF2976 != YPfalse) {
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
  P valuesF2977;
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
  valuesF2977 = T1;
  T4 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF2977,VARREF(YevalSast_evalYenv_names),names_);
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
  P loopF2978;
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
    loopF2978 = T3;
    FUNINIT(loopF2978, 3,env_,name_,loopF2978);
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    T4 = CALL2(0,loopF2978,T5,YPint((P)0));
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
  P loopF2979;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_23,4);
  loopF2979 = T1;
  FUNINIT(loopF2979, 4,v_,env_,name_,loopF2979);
  T3 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  T2 = CALL2(0,loopF2979,T3,YPint((P)0));
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
  P typeF2981;
  P specF2980;
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
    specF2980 = T4;
    if (specF2980 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF2980,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF2981 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF2981,res_);
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
  P loopF2983;
  P nreqF2982;
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
  nreqF2982 = T1;
  T6 = FUNSHELL(1,fun_loop_29,3);
  loopF2983 = T6;
  FUNINIT(loopF2983, 3,nreqF2982,env_,loopF2983);
  T7 = CALL3(0,loopF2983,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF2984;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF2984 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYL),countF2984,arity_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Ynarity_error),f_,args_);
      T3 = T5;
    } else {
      T7 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T9 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF2984);
      T8 = CALL1(1,VARREF(Ylst),T9);
      T6 = CALL2(1,VARREF(YgooScolsSseqYcat2),T7,T8);
      T3 = T6;
    }
    T2 = T3;
  } else {
    T11 = CALL2(1,VARREF(YgooSmathYNEE),countF2984,arity_);
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

FUNCODEDEF(fun_x_1470_32) {
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
  P x_1469F3001;
  P x_1469F3000;
  P x_1469F2999;
  P x_1469F2998;
  P x_1469F2997;
  P x_1469F2996;
  P x_1469F2995;
  P x_1469F2994;
  P x_1469F2993;
  P bodyF2992;
  P namesF2991;
  P arityF2990;
  P naryQF2989;
  P fF2988;
  P envF2987;
  P x_1469F2986;
  P x_1470F2985;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1470_32,2);
  x_1470F2985 = T1;
  FUNINIT(x_1470F2985, 2,FREEREF(0),return_);
  x_1469F2986 = FREEREF(0);
  envF2987 = YPfalse;
  envF2987 = BOXFAB(envF2987);
  fF2988 = YPfalse;
  fF2988 = BOXFAB(fF2988);
  naryQF2989 = YPfalse;
  naryQF2989 = BOXFAB(naryQF2989);
  arityF2990 = YPfalse;
  arityF2990 = BOXFAB(arityF2990);
  namesF2991 = YPfalse;
  namesF2991 = BOXFAB(namesF2991);
  bodyF2992 = YPfalse;
  bodyF2992 = BOXFAB(bodyF2992);
  T15 = CALL2(1,VARREF(YisaQ),x_1469F2986,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1469F2986,LITREF(lit_63),x_1470F2985);
    x_1469F2993 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1469F2993,x_1470F2985);
    BOXVAL(envF2987) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1469F2993);
    x_1469F2994 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1469F2994,x_1470F2985);
    BOXVAL(fF2988) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1469F2994);
    x_1469F2995 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1469F2995,x_1470F2985);
    BOXVAL(naryQF2989) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1469F2995);
    x_1469F2996 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1469F2996,x_1470F2985);
    BOXVAL(arityF2990) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1469F2996);
    x_1469F2997 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1469F2997,x_1470F2985);
    BOXVAL(namesF2991) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1469F2997);
    x_1469F2998 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1469F2998,x_1470F2985);
    BOXVAL(bodyF2992) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1469F2998);
    x_1469F2999 = T35;
    T37 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1469F2999,x_1470F2985);
    x_1469F3000 = T37;
    T38 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1469F3000,x_1470F2985);
    T39 = CALL1(1,VARREF(Ytail),x_1469F2999);
    x_1469F3001 = T39;
    T40 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1469F3001,x_1470F2985);
    T36 = T40;
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T41 = CALL2(1,x_1470F2985,LITREF(lit_64),x_1469F2986);
  }
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,LITREF(lit_68));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,LITREF(lit_68));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T61 = CALL4(1,VARREF(YgooSmacrosYcat),T62,T63,T64,LITREF(lit_68));
  T60 = CALL1(1,VARREF(Ylst),T61);
  T55 = CALLN(1,VARREF(YgooSmacrosYcat),6,T56,T57,T58,T59,T60,LITREF(lit_68));
  T54 = CALL1(1,VARREF(Ylst),T55);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T54,LITREF(lit_68));
  T50 = CALL1(1,VARREF(Ylst),T51);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T70 = CALL2(1,VARREF(YgooSmacrosYcat),T71,LITREF(lit_68));
  T69 = CALL1(1,VARREF(Ylst),T70);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T68,T69,LITREF(lit_68));
  T65 = CALL1(1,VARREF(Ylst),T66);
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T78 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T80 = BOXVAL(envF2987);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T82 = BOXVAL(fF2988);
  T81 = CALL1(1,VARREF(Ylst),T82);
  T85 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T87 = BOXVAL(namesF2991);
  T86 = CALL1(1,VARREF(Ylst),T87);
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T92 = CALL3(1,VARREF(YgooSmacrosYcat),T93,T94,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T89 = CALL3(1,VARREF(YgooSmacrosYcat),T90,T91,LITREF(lit_68));
  T88 = CALL1(1,VARREF(Ylst),T89);
  T84 = CALL4(1,VARREF(YgooSmacrosYcat),T85,T86,T88,LITREF(lit_68));
  T83 = CALL1(1,VARREF(Ylst),T84);
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T101 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T102 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T100 = CALL3(1,VARREF(YgooSmacrosYcat),T101,T102,LITREF(lit_68));
  T99 = CALL1(1,VARREF(Ylst),T100);
  T96 = CALL4(1,VARREF(YgooSmacrosYcat),T97,T98,T99,LITREF(lit_68));
  T95 = CALL1(1,VARREF(Ylst),T96);
  T77 = CALLN(1,VARREF(YgooSmacrosYcat),6,T78,T79,T81,T83,T95,LITREF(lit_68));
  T76 = CALL1(1,VARREF(Ylst),T77);
  T73 = CALL4(1,VARREF(YgooSmacrosYcat),T74,T75,T76,LITREF(lit_68));
  T72 = CALL1(1,VARREF(Ylst),T73);
  T106 = BOXVAL(bodyF2992);
  T105 = CALL1(1,VARREF(Ylst),T106);
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T104 = CALL3(1,VARREF(YgooSmacrosYcat),T105,T107,LITREF(lit_68));
  T103 = CALL1(1,VARREF(Ylst),T104);
  T42 = CALLN(1,VARREF(YgooSmacrosYcat),7,T43,T44,T50,T65,T72,T103,LITREF(lit_68));
  T13 = T42;
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
  P frameF3004;
  P nmsF3003;
  P argsF3002;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF3002 = T1;
  T4 = (P)YPnext_methods();
  nmsF3003 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF3003);
  T9 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF3002,T10);
  T6 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T7,T9);
  frameF3004 = T6;
  T11 = CALL1(1,FREEREF(5),frameF3004);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_42) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF3006;
  P arityF3005;
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
  arityF3005 = T1;
  T6 = FUNFAB(fun_41,6,f_,naryQ_,arityF3005,env_,names_,body_);
  efunF3006 = T6;
  T7 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF3006);
  T9 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF3005,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF3006);
  T5 = efunF3006;
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
  P evalF3008;
  P paramsF3007;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF3007 = T1;
  T3 = FUNFAB(fun_43,1,e_);
  evalF3008 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF3007);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF3007);
  T7 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF3008,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_45) {
  P e_,env_;
  P specsF3012;
  P namesF3011;
  P naryQF3010;
  P paramsF3009;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF3009 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF3010 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF3009);
  namesF3011 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF3009);
  T7 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T8,naryQF3010,env_);
  specsF3012 = T7;
  T10 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),6,T10,namesF3011,specsF3012,naryQF3010,VARREF(YLanyG),Ynil);
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

FUNCODEDEF(fun_env_global_binding_value_or_54) {
  P b_,default_,env_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(b_, 0);
  ARG(default_, 1);
  ARG(env_, 2);
loop:
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

FUNCODEDEF(fun_ast_eval_boundQ_55) {
  P e_,binding_,env_;
  P x_1472F3014;
  P x_1471F3013;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1471F3013 = T1;
  x_1472F3014 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1472F3014,x_1471F3013,LITREF(lit_109));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    T5 = CALL3(1,VARREF(YevalSast_evalYenv_global_binding_value_or),binding_,T6,env_);
    T3 = T5;
  } else {
    T8 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,env_);
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_56) {
  P e_,binding_,env_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P valueF3015;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF3015 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF3015,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_59) {
  P e_,env_;
  P valueF3016;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF3016 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF3016,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P valueF3017;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF3017 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),valueF3017,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_61) {
  P e_,env_;
  P valueF3018;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF3018 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF3018,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_62) {
  P b_,v_;
  P xF3021;
  P x_1474F3020;
  P x_1473F3019;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1473F3019 = T1;
  x_1474F3020 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1474F3020,x_1473F3019,LITREF(lit_118));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1474F3020,x_1473F3019,LITREF(lit_109));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL2(1,x_1474F3020,x_1473F3019,LITREF(lit_119));
      if (T11 != YPfalse) {
        T13 = (P)YPfab_dyn_var();
        xF3021 = T13;
        T14 = (P)YPtag_into(xF3021,(P)3);
        T12 = T14;
        CALL2(1,VARREF(YevalSastYbinding_locative_setter),T12,b_);
        T16 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
        T15 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),v_,T16);
        T10 = T15;
      } else {
        T18 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
        T17 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_120),T18);
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

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P valueF3022;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF3022 = T1;
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T3,valueF3022);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
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

FUNCODEDEF(fun_eval_65) {
  P e_;
  P valF3024;
  P nxtF3023;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF3023 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,FREEREF(0));
  valF3024 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF3023);
  if (T6 != YPfalse) {
    T5 = valF3024;
  } else {
    a1 = nxtF3023;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_66) {
  P e_,env_;
  P evalF3025;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_65,2);
  evalF3025 = T1;
  FUNINIT(evalF3025, 2,env_,evalF3025);
  T2 = CALL1(0,evalF3025,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_67) {
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

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P evalF3026;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_67,2);
  evalF3026 = T1;
  FUNINIT(evalF3026, 2,env_,evalF3026);
  T2 = CALL2(0,evalF3026,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_69) {
  P e_,env_;
  P argsF3028;
  P fF3027;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  fF3027 = T1;
  T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
  argsF3028 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF3027,YPfalse,argsF3028);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  P e_,env_;
  P argsF3032;
  P fF3031;
  P nmsF3030;
  P bF3029;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF3029 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),bF3029);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_77));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_77));
    nmsF3030 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF3030,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF3030;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YevalSastYbinding_info),bF3029);
    fF3031 = T10;
    T13 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,env_);
    argsF3032 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF3031,YPfalse,argsF3032);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_71) {
  P e_,env_;
  P nenvF3034;
  P argsF3033;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF3033 = T1;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),T6);
  T4 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T5,argsF3033);
  nenvF3034 = T4;
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,nenvF3034);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
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

FUNCODEDEF(fun_ast_eval_73) {
  P e_,env_;
  P new_envF3036;
  P bindingsF3035;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF3035 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF3035);
  T6 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF3035);
  T3 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T4,T5);
  new_envF3036 = T3;
  T7 = FUNFAB(fun_72,1,new_envF3036);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF3035);
  T10 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_evalYast_eval),new_envF3036);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,new_envF3036);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P env_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_136));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P exitF3038;
  P rprocF3037;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_74,1,return_);
  rprocF3037 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF3037,T4,T5,YPfalse,YPfalse,rprocF3037,FREEREF(0));
  exitF3038 = T3;
  T8 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF3038);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_76) {
  P e_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_75,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_79) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_77,2,e_,env_);
  T2 = FUNFAB(fun_78,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_80) {
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
  P bF3039;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_77),YPfalse,LITREF(lit_142));
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_143),YPfalse,LITREF(lit_109));
  bF3039 = T1;
  T2 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF3039);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF3040;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF3040 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = XCALL4(1,VARREF(YevalSastYast_define_binding),eF3040,T4,YPfalse,LITREF(lit_109));
  T0 = T3;
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF3041;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF3041 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = XCALL2(1,VARREF(YevalSastYfind_binding),T4,eF3041);
  T0 = T3;
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF3042;
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF3042 = T1;
  if (tmpF3042 != YPfalse) {
    T2 = tmpF3042;
  } else {
    T3 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P yF3047;
  P xF3046;
  P xF3045;
  P xF3044;
  P bF3043;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF3043 = T1;
  xF3046 = bF3043;
  xF3044 = YPint((P)0);
  xF3045 = xF3044;
  T6 = (P)YPiGG(xF3045,(P)2);
  T5 = T6;
  T4 = T5;
  yF3047 = T4;
  T8 = (P)YPeqQ(xF3046,yF3047);
  T7 = (P)YPbb(T8);
  T3 = T7;
  if (T3 != YPfalse) {
    T11 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T12 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T10 = (P)YevalSast_evalYPensure_binding(T11,T12);
    T9 = (P)YevalSast_evalYPdlvar_setter(T10,dlvar_);
    T2 = T9;
  } else {
    T2 = bF3043;
  }
  T0 = T2;
  return T0;
}

INLINE P YevalSast_evalYPbinding_bound_ofQ(P b_) {
  P tmpF3048;
  P T0,T1,T2;
  P a1;
DEFCREGS();
loop:
  tmpF3048 = b_;
  if (tmpF3048 != YPfalse) {
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
  P x_1476F3050;
  P x_1475F3049;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
DEFCREGS();
loop:
  T1 = XCALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1475F3049 = T1;
  x_1476F3050 = VARREF(YgooSmacrosYEE);
  T4 = XCALL2(1,x_1476F3050,x_1475F3049,LITREF(lit_118));
  if (T4 != YPfalse) {
    T6 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
    T5 = XCALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T6);
    T3 = T5;
  } else {
    T8 = XCALL2(1,x_1476F3050,x_1475F3049,LITREF(lit_119));
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
  P x_1478F3052;
  P x_1477F3051;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
DEFCREGS();
loop:
  T1 = XCALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1477F3051 = T1;
  x_1478F3052 = VARREF(YgooSmacrosYEE);
  T4 = XCALL2(1,x_1478F3052,x_1477F3051,LITREF(lit_118));
  if (T4 != YPfalse) {
    T6 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
    T5 = XCALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T6);
    T3 = T5;
  } else {
    T8 = XCALL2(1,x_1478F3052,x_1477F3051,LITREF(lit_119));
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

INLINE P YevalSast_evalYPbinding_value_or_of(P b_,P default_) {
  P tmpF3053;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  tmpF3053 = b_;
  if (tmpF3053 != YPfalse) {
    T3 = XCALL1(1,VARREF(YevalSastYbinding_info),b_);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  if (T1 != YPfalse) {
    T4 = (P)YevalSast_evalYPbinding_value_of(b_);
    T0 = T4;
  } else {
    T0 = default_;
  }
  return T0;
}

P YevalSast_evalYPbinding_value_or(P dlvar_,P default_) {
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPlist(1,YPPsym((P)"b"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(17));
  T2 = VARREF_OR(YevalSast_evalYenv_global_binding_value,YPfalse);
  T3 = fun_env_global_binding_value_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSast_evalYenv_global_binding_value,T1);
  lit_2 = YPPsym((P)"env-global-binding-value-setter");
  lit_3 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"b"));
  T4 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(24));
  T6 = VARREF_OR(YevalSast_evalYenv_global_binding_value_setter,YPfalse);
  T7 = fun_env_global_binding_value_setter_1;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSast_evalYenv_global_binding_value_setter,T5);
  lit_4 = YPPsym((P)"env-global-binding-bound?");
  lit_5 = YPPlist(1,YPPsym((P)"b"));
  T8 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_4),T8,ENVNUL,PNUL,sloc(32));
  T10 = VARREF_OR(YevalSast_evalYenv_global_binding_boundQ,YPfalse);
  T11 = fun_env_global_binding_boundQ_2;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSast_evalYenv_global_binding_boundQ,T9);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T12,ENVNUL,PNUL,sloc(38));
  T14 = VARREF_OR(YevalSast_evalYenv_runtime_value,YPfalse);
  T15 = fun_env_runtime_value_3;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSast_evalYenv_runtime_value,T13);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T16,ENVNUL,PNUL,sloc(41));
  T18 = VARREF_OR(YevalSast_evalYenv_runtime_value_setter,YPfalse);
  T19 = fun_env_runtime_value_setter_4;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSast_evalYenv_runtime_value_setter,T17);
  lit_10 = YPPsym((P)"env-dynamic-value");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_5 = YPmet(FUNCODEREF(fun_env_dynamic_value_5),LITREF(lit_10),T20,ENVNUL,PNUL,sloc(46));
  T22 = VARREF_OR(YevalSast_evalYenv_dynamic_value,YPfalse);
  T23 = fun_env_dynamic_value_5;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSast_evalYenv_dynamic_value,T21);
  lit_12 = YPPsym((P)"env-dynamic-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_setter_6 = YPmet(FUNCODEREF(fun_env_dynamic_value_setter_6),LITREF(lit_12),T24,ENVNUL,PNUL,sloc(49));
  T26 = VARREF_OR(YevalSast_evalYenv_dynamic_value_setter,YPfalse);
  T27 = fun_env_dynamic_value_setter_6;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSast_evalYenv_dynamic_value_setter,T25);
  lit_14 = YPPsym((P)"<loc-env>");
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  T28 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_14),T29);
  VARSET(YevalSast_evalYLloc_envG,T28);
  lit_15 = YPPsym((P)"env-parent");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_7 = YPmet(FUNCODEREF(fun_env_parent_7),LITREF(lit_15),T30,ENVNUL,PNUL,sloc(53));
  T32 = VARREF_OR(YevalSast_evalYenv_parent,YPfalse);
  T33 = fun_env_parent_7;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSast_evalYenv_parent,T31);
  lit_17 = YPPsym((P)"env-parent-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_8 = YPmet(FUNCODEREF(fun_env_parent_setter_8),LITREF(lit_17),T34,ENVNUL,PNUL,sloc(53));
  T36 = VARREF_OR(YevalSast_evalYenv_parent_setter,YPfalse);
  T37 = fun_env_parent_setter_8;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSast_evalYenv_parent_setter,T35);
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T38,ENVNUL,PNUL,sloc(53));
  T39 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),VARREF(YevalSast_evalYenv_parent_setter),VARREF(YLanyG),T39);
  lit_20 = YPPsym((P)"env-function");
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_10 = YPmet(FUNCODEREF(fun_env_function_10),LITREF(lit_20),T40,ENVNUL,PNUL,sloc(54));
  T42 = VARREF_OR(YevalSast_evalYenv_function,YPfalse);
  T43 = fun_env_function_10;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSast_evalYenv_function,T41);
  lit_22 = YPPsym((P)"env-function-setter");
  lit_23 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T44 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_11 = YPmet(FUNCODEREF(fun_env_function_setter_11),LITREF(lit_22),T44,ENVNUL,PNUL,sloc(54));
  T46 = VARREF_OR(YevalSast_evalYenv_function_setter,YPfalse);
  T47 = fun_env_function_setter_11;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSast_evalYenv_function_setter,T45);
  lit_24 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T48,ENVNUL,PNUL,sloc(54));
  T49 = fun_12;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_function),VARREF(YevalSast_evalYenv_function_setter),VARREF(YLanyG),T49);
  lit_25 = YPPsym((P)"env-names");
  lit_26 = YPPlist(1,YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_13 = YPmet(FUNCODEREF(fun_env_names_13),LITREF(lit_25),T50,ENVNUL,PNUL,sloc(55));
  T52 = VARREF_OR(YevalSast_evalYenv_names,YPfalse);
  T53 = fun_env_names_13;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSast_evalYenv_names,T51);
  lit_27 = YPPsym((P)"env-names-setter");
  lit_28 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLlstG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_14 = YPmet(FUNCODEREF(fun_env_names_setter_14),LITREF(lit_27),T54,ENVNUL,PNUL,sloc(55));
  T56 = VARREF_OR(YevalSast_evalYenv_names_setter,YPfalse);
  T57 = fun_env_names_setter_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSast_evalYenv_names_setter,T55);
  lit_29 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T58,ENVNUL,PNUL,sloc(55));
  T59 = fun_15;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_names),VARREF(YevalSast_evalYenv_names_setter),VARREF(YLlstG),T59);
  lit_30 = YPPsym((P)"env-values");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_16 = YPmet(FUNCODEREF(fun_env_values_16),LITREF(lit_30),T60,ENVNUL,PNUL,sloc(56));
  T62 = VARREF_OR(YevalSast_evalYenv_values,YPfalse);
  T63 = fun_env_values_16;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSast_evalYenv_values,T61);
  lit_32 = YPPsym((P)"env-values-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLrepG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_17 = YPmet(FUNCODEREF(fun_env_values_setter_17),LITREF(lit_32),T64,ENVNUL,PNUL,sloc(56));
  T66 = VARREF_OR(YevalSast_evalYenv_values_setter,YPfalse);
  T67 = fun_env_values_setter_17;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSast_evalYenv_values_setter,T65);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_values),VARREF(YevalSast_evalYenv_values_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  T68 = XCALL1(1,VARREF(Ynew),VARREF(YevalSast_evalYLloc_envG));
  VARSET(YevalSast_evalYDnul_loc_env,T68);
  lit_34 = YPPsym((P)"env-frame!");
  lit_35 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"function"),YPPsym((P)"names"),YPPsym((P)"args"));
  T69 = YPsig(LITREF(lit_35),YPPlist(4,VARREF(YevalSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YevalSast_evalYLloc_envG),Ynil);
  fun_env_frameX_18 = YPmet(FUNCODEREF(fun_env_frameX_18),LITREF(lit_34),T69,ENVNUL,PNUL,sloc(60));
  T71 = VARREF_OR(YevalSast_evalYenv_frameX,YPfalse);
  T72 = fun_env_frameX_18;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YevalSast_evalYenv_frameX,T70);
  lit_36 = YPPsym((P)"env-local-value");
  lit_37 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T73 = YPsig(LITREF(lit_37),YPPlist(3,VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_19 = YPmet(FUNCODEREF(fun_env_local_value_19),LITREF(lit_36),T73,ENVNUL,PNUL,sloc(68));
  T75 = VARREF_OR(YevalSast_evalYenv_local_value,YPfalse);
  T76 = fun_env_local_value_19;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T76);
  VARSET(YevalSast_evalYenv_local_value,T74);
  lit_38 = YPPsym((P)"env-local-value-setter");
  lit_39 = YPPlist(4,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T77 = YPsig(LITREF(lit_39),YPPlist(4,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_20 = YPmet(FUNCODEREF(fun_env_local_value_setter_20),LITREF(lit_38),T77,ENVNUL,PNUL,sloc(73));
  T79 = VARREF_OR(YevalSast_evalYenv_local_value_setter,YPfalse);
  T80 = fun_env_local_value_setter_20;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T80);
  VARSET(YevalSast_evalYenv_local_value_setter,T78);
  lit_40 = YPPsym((P)"env-binding-value");
  lit_41 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"name"));
  lit_42 = YPPsym((P)"loop");
  lit_43 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"i"));
  T82 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_42),T82,ENVNUL,PNUL,sloc(82));
  T81 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_22 = YPmet(FUNCODEREF(fun_env_binding_value_22),LITREF(lit_40),T81,ENVNUL,PNUL,sloc(79));
  T84 = VARREF_OR(YevalSast_evalYenv_binding_value,YPfalse);
  T85 = fun_env_binding_value_22;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSast_evalYenv_binding_value,T83);
  lit_44 = YPPsym((P)"env-binding-value-setter");
  lit_45 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"name"));
  lit_46 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"i"));
  T87 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_23 = YPmet(FUNCODEREF(fun_loop_23),LITREF(lit_42),T87,ENVNUL,PNUL,sloc(90));
  T86 = YPsig(LITREF(lit_45),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_24 = YPmet(FUNCODEREF(fun_env_binding_value_setter_24),LITREF(lit_44),T86,ENVNUL,PNUL,sloc(89));
  T89 = VARREF_OR(YevalSast_evalYenv_binding_value_setter,YPfalse);
  T90 = fun_env_binding_value_setter_24;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YevalSast_evalYenv_binding_value_setter,T88);
  lit_47 = YPPsym((P)"ast-evaluate");
  lit_48 = YPPlist(1,YPPsym((P)"e"));
  T91 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_25 = YPmet(FUNCODEREF(fun_ast_evaluate_25),LITREF(lit_47),T91,ENVNUL,PNUL,sloc(101));
  T93 = VARREF_OR(YevalSastYast_evaluate,YPfalse);
  T94 = fun_ast_evaluate_25;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YevalSastYast_evaluate,T92);
  lit_49 = YPPsym((P)"ast-eval");
  lit_50 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T96 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T95 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_49),T96,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSast_evalYast_eval,T95);
  lit_51 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T97 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_49),T97,ENVNUL,PNUL,sloc(106));
  T99 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T100 = fun_ast_eval_26;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YevalSast_evalYast_eval,T98);
  lit_52 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T101 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),LITREF(lit_49),T101,ENVNUL,PNUL,sloc(109));
  T103 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T104 = fun_ast_eval_27;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T104);
  VARSET(YevalSast_evalYast_eval,T102);
  lit_53 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"ee"));
  T105 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YevalSastYLcompile_timeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_28 = YPmet(FUNCODEREF(fun_ast_eval_28),LITREF(lit_49),T105,ENVNUL,PNUL,sloc(112));
  T107 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T108 = fun_ast_eval_28;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T108);
  VARSET(YevalSast_evalYast_eval,T106);
  lit_54 = YPPsym((P)"ast-eval-specs");
  lit_55 = YPPlist(3,YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"env"));
  lit_56 = YPPlist(3,YPPsym((P)"res"),YPPsym((P)"specs"),YPPsym((P)"i"));
  T110 = YPsig(LITREF(lit_56),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_42),T110,ENVNUL,PNUL,sloc(117));
  T109 = YPsig(LITREF(lit_55),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_30 = YPmet(FUNCODEREF(fun_ast_eval_specs_30),LITREF(lit_54),T109,ENVNUL,PNUL,sloc(115));
  T112 = VARREF_OR(YevalSast_evalYast_eval_specs,YPfalse);
  T113 = fun_ast_eval_specs_30;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YevalSast_evalYast_eval_specs,T111);
  lit_57 = YPPsym((P)"arrange-arguments");
  lit_58 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"args"));
  T114 = YPsig(LITREF(lit_58),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YevalSast_evalYarrange_arguments = YPmet(FUNCODEREF(YevalSast_evalYarrange_arguments),LITREF(lit_57),T114,ENVNUL,PNUL,sloc(130));
  T115 = YevalSast_evalYarrange_arguments;
  VARSET(YevalSast_evalYarrange_arguments,T115);
  lit_59 = YPPlist(1,YPPsym((P)"exp"));
  lit_60 = YPPlist(1,YPPsym((P)"return"));
  lit_61 = YPPsym((P)"x-1470");
  lit_62 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_63 = YPPsym((P)"ifun");
  lit_64 = YPsb((P)"Match Pattern Failure");
  lit_65 = YPPsym((P)"fun");
  lit_66 = YPPsym((P)"arg-vector");
  lit_67 = YPPsym((P)"...");
  lit_68 = Ynil;
  lit_69 = YPPsym((P)"def");
  lit_70 = YPPsym((P)"args");
  lit_71 = YPPsym((P)"f");
  lit_72 = YPPsym((P)"nary?");
  lit_73 = YPPsym((P)"arity");
  lit_74 = YPPsym((P)"as");
  lit_75 = YPPsym((P)"<lst>");
  lit_76 = YPPsym((P)"nms");
  lit_77 = YPPsym((P)"%next-methods");
  lit_78 = YPPsym((P)"frame");
  lit_79 = YPPsym((P)"cat2");
  lit_80 = YPPsym((P)"lst");
  lit_81 = YPPsym((P)"quote");
  T118 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1470_32 = YPmet(FUNCODEREF(fun_x_1470_32),LITREF(lit_61),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T119 = fun_34;
  YPmacro(YPPsym((P)"eval/ast-eval"),YPPsym((P)"ifun"),T119);
  lit_82 = YPPsym((P)"as-fun-name");
  lit_83 = YPPlist(1,YPPsym((P)"x"));
  T120 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_82),T120,ENVNUL,PNUL,sloc(150));
  T122 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T123 = fun_as_fun_name_35;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T123);
  VARSET(YevalSast_evalYas_fun_name,T121);
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  T124 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_82),T124,ENVNUL,PNUL,sloc(152));
  T126 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T127 = fun_as_fun_name_36;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  VARSET(YevalSast_evalYas_fun_name,T125);
  lit_85 = YPPlist(1,YPPsym((P)"x"));
  T128 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_82),T128,ENVNUL,PNUL,sloc(154));
  T130 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T131 = fun_as_fun_name_37;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YevalSast_evalYas_fun_name,T129);
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  T132 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_82),T132,ENVNUL,PNUL,sloc(156));
  T134 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T135 = fun_as_fun_name_38;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YevalSast_evalYas_fun_name,T133);
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T136 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_39 = YPmet(FUNCODEREF(fun_as_fun_name_39),LITREF(lit_82),T136,ENVNUL,PNUL,sloc(158));
  T138 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T139 = fun_as_fun_name_39;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSast_evalYas_fun_name,T137);
  lit_88 = YPPlist(1,YPPsym((P)"x"));
  T140 = YPsig(LITREF(lit_88),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_40 = YPmet(FUNCODEREF(fun_as_fun_name_40),LITREF(lit_82),T140,ENVNUL,PNUL,sloc(160));
  T142 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T143 = fun_as_fun_name_40;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSast_evalYas_fun_name,T141);
  lit_89 = YPPsym((P)"export-goo-method");
  lit_90 = YPPlist(7,YPPsym((P)"f"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"value"),YPPsym((P)"body"),YPPsym((P)"env"));
  lit_91 = YPPlist(1,YPPsym((P)"arg-vector"));
  T145 = YPsig(LITREF(lit_91),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T145,ENVNUL,PNUL,sloc(165));
  T144 = YPsig(LITREF(lit_90),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_42 = YPmet(FUNCODEREF(fun_export_goo_method_42),LITREF(lit_89),T144,ENVNUL,PNUL,sloc(163));
  T147 = VARREF_OR(YevalSast_evalYexport_goo_method,YPfalse);
  T148 = fun_export_goo_method_42;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T148);
  VARSET(YevalSast_evalYexport_goo_method,T146);
  lit_92 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_93 = YPPlist(1,YPPsym((P)"env"));
  T150 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T150,ENVNUL,PNUL,sloc(179));
  T149 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_44 = YPmet(FUNCODEREF(fun_ast_eval_44),LITREF(lit_49),T149,ENVNUL,PNUL,sloc(177));
  T152 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T153 = fun_ast_eval_44;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YevalSast_evalYast_eval,T151);
  lit_94 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T154 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_45 = YPmet(FUNCODEREF(fun_ast_eval_45),LITREF(lit_49),T154,ENVNUL,PNUL,sloc(189));
  T156 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T157 = fun_ast_eval_45;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YevalSast_evalYast_eval,T155);
  lit_95 = YPPsym((P)"env-local-reference-value");
  lit_96 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"ref"));
  T158 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_46 = YPmet(FUNCODEREF(fun_env_local_reference_value_46),LITREF(lit_95),T158,ENVNUL,PNUL,sloc(196));
  T160 = VARREF_OR(YevalSast_evalYenv_local_reference_value,YPfalse);
  T161 = fun_env_local_reference_value_46;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YevalSast_evalYenv_local_reference_value,T159);
  lit_97 = YPPsym((P)"env-local-reference-value-setter");
  lit_98 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"env"),YPPsym((P)"ref"));
  T162 = YPsig(LITREF(lit_98),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_47 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_47),LITREF(lit_97),T162,ENVNUL,PNUL,sloc(200));
  T164 = VARREF_OR(YevalSast_evalYenv_local_reference_value_setter,YPfalse);
  T165 = fun_env_local_reference_value_setter_47;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YevalSast_evalYenv_local_reference_value_setter,T163);
  lit_99 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T166 = YPsig(LITREF(lit_99),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_49),T166,ENVNUL,PNUL,sloc(205));
  T168 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T169 = fun_ast_eval_48;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T169);
  VARSET(YevalSast_evalYast_eval,T167);
  lit_100 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T170 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_49),T170,ENVNUL,PNUL,sloc(207));
  T172 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T173 = fun_ast_eval_49;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YevalSast_evalYast_eval,T171);
  lit_101 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T174 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),LITREF(lit_49),T174,ENVNUL,PNUL,sloc(210));
  T176 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T177 = fun_ast_eval_50;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T177);
  VARSET(YevalSast_evalYast_eval,T175);
  lit_102 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T178 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_51 = YPmet(FUNCODEREF(fun_ast_eval_51),LITREF(lit_49),T178,ENVNUL,PNUL,sloc(213));
  T180 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T181 = fun_ast_eval_51;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T181);
  VARSET(YevalSast_evalYast_eval,T179);
  lit_103 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T182 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),LITREF(lit_49),T182,ENVNUL,PNUL,sloc(216));
  T184 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T185 = fun_ast_eval_52;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T185);
  VARSET(YevalSast_evalYast_eval,T183);
  lit_104 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T186 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_49),T186,ENVNUL,PNUL,sloc(219));
  T188 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T189 = fun_ast_eval_53;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T189);
  VARSET(YevalSast_evalYast_eval,T187);
  lit_105 = YPPsym((P)"env-global-binding-value-or");
  lit_106 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"default"),YPPsym((P)"env"));
  T190 = YPsig(LITREF(lit_106),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_or_54 = YPmet(FUNCODEREF(fun_env_global_binding_value_or_54),LITREF(lit_105),T190,ENVNUL,PNUL,sloc(222));
  T192 = VARREF_OR(YevalSast_evalYenv_global_binding_value_or,YPfalse);
  T193 = fun_env_global_binding_value_or_54;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T193);
  VARSET(YevalSast_evalYenv_global_binding_value_or,T191);
  lit_107 = YPPsym((P)"ast-eval-bound?");
  lit_108 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  lit_109 = YPPsym((P)"global");
  T194 = YPsig(LITREF(lit_108),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_55 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_55),LITREF(lit_107),T194,ENVNUL,PNUL,sloc(227));
  T196 = VARREF_OR(YevalSast_evalYast_eval_boundQ,YPfalse);
  T197 = fun_ast_eval_boundQ_55;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T197);
  VARSET(YevalSast_evalYast_eval_boundQ,T195);
  lit_110 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  T198 = YPsig(LITREF(lit_110),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_56 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_56),LITREF(lit_107),T198,ENVNUL,PNUL,sloc(232));
  T200 = VARREF_OR(YevalSast_evalYast_eval_boundQ,YPfalse);
  T201 = fun_ast_eval_boundQ_56;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T201);
  VARSET(YevalSast_evalYast_eval_boundQ,T199);
  lit_111 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T202 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),LITREF(lit_49),T202,ENVNUL,PNUL,sloc(235));
  T204 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T205 = fun_ast_eval_57;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T205);
  VARSET(YevalSast_evalYast_eval,T203);
  lit_112 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T206 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_49),T206,ENVNUL,PNUL,sloc(239));
  T208 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T209 = fun_ast_eval_58;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T209);
  VARSET(YevalSast_evalYast_eval,T207);
  lit_113 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T210 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_59 = YPmet(FUNCODEREF(fun_ast_eval_59),LITREF(lit_49),T210,ENVNUL,PNUL,sloc(242));
  T212 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T213 = fun_ast_eval_59;
  T211 = XCALL2(1,VARREF(YPdefine_method),T212,T213);
  VARSET(YevalSast_evalYast_eval,T211);
  lit_114 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T216 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T215 = fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),LITREF(lit_49),T216,ENVNUL,PNUL,sloc(246));
  T219 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T220 = fun_ast_eval_60;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T220);
  T217 = VARSET(YevalSast_evalYast_eval,T218);
  T214 = T217;
  return T214;
}

P YevalSast_evalY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61;
DEFCREGS();
loop:
  lit_115 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T0 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_61 = YPmet(FUNCODEREF(fun_ast_eval_61),LITREF(lit_49),T0,ENVNUL,PNUL,sloc(250));
  T2 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T3 = fun_ast_eval_61;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSast_evalYast_eval,T1);
  lit_116 = YPPsym((P)"env-define-binding!");
  lit_117 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"v"));
  lit_118 = YPPsym((P)"runtime");
  lit_119 = YPPsym((P)"dynamic");
  lit_120 = YPsb((P)"Defining invalid binding kind %=");
  T4 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_62 = YPmet(FUNCODEREF(fun_env_define_bindingX_62),LITREF(lit_116),T4,ENVNUL,PNUL,sloc(254));
  T6 = VARREF_OR(YevalSast_evalYenv_define_bindingX,YPfalse);
  T7 = fun_env_define_bindingX_62;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSast_evalYenv_define_bindingX,T5);
  lit_121 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T8 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_49),T8,ENVNUL,PNUL,sloc(263));
  T10 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T11 = fun_ast_eval_63;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSast_evalYast_eval,T9);
  lit_122 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T12 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_49),T12,ENVNUL,PNUL,sloc(283));
  T14 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T15 = fun_ast_eval_64;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSast_evalYast_eval,T13);
  lit_123 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_124 = YPPsym((P)"eval");
  lit_125 = YPPlist(1,YPPsym((P)"e"));
  T17 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eval_65 = YPmet(FUNCODEREF(fun_eval_65),LITREF(lit_124),T17,ENVNUL,PNUL,sloc(289));
  T16 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),LITREF(lit_49),T16,ENVNUL,PNUL,sloc(288));
  T19 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T20 = fun_ast_eval_66;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T20);
  VARSET(YevalSast_evalYast_eval,T18);
  lit_126 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_127 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"args"));
  T22 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_67 = YPmet(FUNCODEREF(fun_eval_67),LITREF(lit_124),T22,ENVNUL,PNUL,sloc(297));
  T21 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YevalSastYLargumentsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_49),T21,ENVNUL,PNUL,sloc(296));
  T24 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T25 = fun_ast_eval_68;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSast_evalYast_eval,T23);
  lit_128 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T26 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_69 = YPmet(FUNCODEREF(fun_ast_eval_69),LITREF(lit_49),T26,ENVNUL,PNUL,sloc(302));
  T28 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T29 = fun_ast_eval_69;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YevalSast_evalYast_eval,T27);
  lit_129 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T30 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),LITREF(lit_49),T30,ENVNUL,PNUL,sloc(307));
  T32 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T33 = fun_ast_eval_70;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSast_evalYast_eval,T31);
  lit_130 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T34 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_71 = YPmet(FUNCODEREF(fun_ast_eval_71),LITREF(lit_49),T34,ENVNUL,PNUL,sloc(316));
  T36 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T37 = fun_ast_eval_71;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSast_evalYast_eval,T35);
  lit_131 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_132 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T39 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T39,ENVNUL,PNUL,sloc(326));
  T38 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_73 = YPmet(FUNCODEREF(fun_ast_eval_73),LITREF(lit_49),T38,ENVNUL,PNUL,sloc(321));
  T41 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T42 = fun_ast_eval_73;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T42);
  VARSET(YevalSast_evalYast_eval,T40);
  lit_133 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_134 = YPPlist(1,YPPsym((P)"return"));
  lit_135 = YPPlist(1,YPPsym((P)"env"));
  lit_136 = YPPsym((P)"x");
  T45 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T45,ENVNUL,PNUL,sloc(339));
  T44 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T44,ENVNUL,PNUL,sloc(338));
  T43 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_76 = YPmet(FUNCODEREF(fun_ast_eval_76),LITREF(lit_49),T43,ENVNUL,PNUL,sloc(337));
  T47 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T48 = fun_ast_eval_76;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T48);
  VARSET(YevalSast_evalYast_eval,T46);
  lit_137 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_138 = Ynil;
  T51 = YPsig(LITREF(lit_138),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T51,ENVNUL,PNUL,sloc(344));
  T50 = YPsig(LITREF(lit_138),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T50,ENVNUL,PNUL,sloc(345));
  T49 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_79 = YPmet(FUNCODEREF(fun_ast_eval_79),LITREF(lit_49),T49,ENVNUL,PNUL,sloc(343));
  T53 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T54 = fun_ast_eval_79;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T54);
  VARSET(YevalSast_evalYast_eval,T52);
  lit_139 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T55 = YPsig(LITREF(lit_139),YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_80 = YPmet(FUNCODEREF(fun_ast_eval_80),LITREF(lit_49),T55,ENVNUL,PNUL,sloc(347));
  T57 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T58 = fun_ast_eval_80;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T58);
  VARSET(YevalSast_evalYast_eval,T56);
  lit_140 = YPPsym((P)"init-environment-for-eval");
  lit_141 = YPPlist(1,YPPsym((P)"env"));
  lit_142 = YPPsym((P)"predefined");
  lit_143 = YPPsym((P)"%pair");
  T59 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_environment_for_eval = YPmet(FUNCODEREF(YevalSastYinit_environment_for_eval),LITREF(lit_140),T59,ENVNUL,PNUL,sloc(362));
  T60 = YevalSastYinit_environment_for_eval;
  VARSET(YevalSastYinit_environment_for_eval,T60);
  T61 = YPfalse;
  return T61;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSlate_macros;

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
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"function-self-recursive?", &module_info_evalSast, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"*gensym-counter*", &module_info_gooSruntime, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"function-self-recursive?-setter", &module_info_evalSast, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-1---", PVAR, NULL},
  {"%dlvar-binding", PVAR, NULL},
  {"env-dynamic-value-setter", CVAR, &YevalSast_evalYenv_dynamic_value_setter},
  {"env-global-binding-value-setter", CVAR, &YevalSast_evalYenv_global_binding_value_setter},
  {"%binding-value-or", PVAR, NULL},
  {"env-values-setter", CVAR, &YevalSast_evalYenv_values_setter},
  {"ast-eval", CVAR, &YevalSast_evalYast_eval},
  {"env-define-binding!", CVAR, &YevalSast_evalYenv_define_bindingX},
  {"export-goo-method", CVAR, &YevalSast_evalYexport_goo_method},
  {"%binding-value-or-of", PVAR, NULL},
  {"env-local-value-setter", CVAR, &YevalSast_evalYenv_local_value_setter},
  {"env-binding-value-setter", CVAR, &YevalSast_evalYenv_binding_value_setter},
  {"env-function-setter", CVAR, &YevalSast_evalYenv_function_setter},
  {"%lookup-binding", PVAR, NULL},
  {"env-dynamic-value", CVAR, &YevalSast_evalYenv_dynamic_value},
  {"env-parent-setter", CVAR, &YevalSast_evalYenv_parent_setter},
  {"env-global-binding-value", CVAR, &YevalSast_evalYenv_global_binding_value},
  {"%binding-value", PVAR, NULL},
  {"env-runtime-value", CVAR, &YevalSast_evalYenv_runtime_value},
  {"env-frame!", CVAR, &YevalSast_evalYenv_frameX},
  {"env-function", CVAR, &YevalSast_evalYenv_function},
  {"%ensure-binding", PVAR, NULL},
  {"ast-eval-bound?", CVAR, &YevalSast_evalYast_eval_boundQ},
  {"as-fun-name", CVAR, &YevalSast_evalYas_fun_name},
  {"%binding-value-of-setter", PVAR, NULL},
  {"%define-binding", PVAR, NULL},
  {"env-values", CVAR, &YevalSast_evalYenv_values},
  {"env-local-reference-value", CVAR, &YevalSast_evalYenv_local_reference_value},
  {"$nul-loc-env", CVAR, &YevalSast_evalYDnul_loc_env},
  {"%binding-value-of", PVAR, NULL},
  {"%binding-bound-of?", PVAR, NULL},
  {"%binding-value-setter", PVAR, NULL},
  {"%binding-bound?", PVAR, NULL},
  {"%dlvar-setter", PVAR, NULL},
  {"%dlvar-mod", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"env-names-setter", CVAR, &YevalSast_evalYenv_names_setter},
  {"%dlvar", PVAR, NULL},
  {"env-global-binding-bound?", CVAR, &YevalSast_evalYenv_global_binding_boundQ},
  {"<loc-env>", CVAR, &YevalSast_evalYLloc_envG},
  {"env-local-value", CVAR, &YevalSast_evalYenv_local_value},
  {"env-binding-value", CVAR, &YevalSast_evalYenv_binding_value},
  {"env-global-binding-value-or", CVAR, &YevalSast_evalYenv_global_binding_value_or},
  {"%dlvar-nam", PVAR, NULL},
  {"ast-eval-specs", CVAR, &YevalSast_evalYast_eval_specs},
  {"env-runtime-value-setter", CVAR, &YevalSast_evalYenv_runtime_value_setter},
  {"arrange-arguments", CVAR, &YevalSast_evalYarrange_arguments},
  {"env-local-reference-value-setter", CVAR, &YevalSast_evalYenv_local_reference_value_setter},
  {"env-parent", CVAR, &YevalSast_evalYenv_parent},
  {"ifun", PVAR, NULL},
  {"env-names", CVAR, &YevalSast_evalYenv_names},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value-or", NULL},
  {"%binding-value-or-of", NULL},
  {"%binding-value", NULL},
  {"%binding-bound?", NULL},
  {"%binding-value-of-setter", NULL},
  {"ast-evaluate", NULL},
  {"%binding-bound-of?", NULL},
  {"%binding-value-setter", NULL},
  {"init-environment-for-eval", NULL},
  {"%binding-value-of", NULL},
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
