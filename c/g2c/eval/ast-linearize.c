/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-linearize");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-linearize */

EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
DEF(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
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
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
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
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yhead,"goo/boot","head");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
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
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
DEF(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalSast_linearizeYdo_analysisX,"eval/ast-linearize","do-analysis!");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
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
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSast_linearizeYprogram_bindings_setter,"eval/ast-linearize","program-bindings-setter");
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YevalSast_linearizeYdo_do_analysisX,"eval/ast-linearize","do-do-analysis!");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
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
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yclass_props,"goo/boot","class-props");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynew,"goo/boot","new");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_of,"goo/boot","class-of");
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
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(Ytup,"goo/boot","tup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
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
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYload_in,"eval/ast","load-in");
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
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
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
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
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
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
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
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
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLnumG,"goo/boot","<num>");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_51);
DEFLIT(lit_108);
DEFLIT(lit_125);
DEFLIT(lit_195);
DEFLIT(lit_46);
DEFLIT(lit_63);
DEFLIT(lit_23);
DEFLIT(lit_196);
DEFLIT(lit_92);
DEFLIT(lit_144);
DEFLIT(lit_133);
DEFLIT(lit_131);
DEFLIT(lit_40);
DEFLIT(lit_161);
DEFLIT(lit_59);
DEFLIT(lit_58);
DEFLIT(lit_168);
DEFLIT(lit_9);
DEFLIT(lit_181);
DEFLIT(lit_122);
DEFLIT(lit_178);
DEFLIT(lit_94);
DEFLIT(lit_12);
DEFLIT(lit_143);
DEFLIT(lit_191);
DEFLIT(lit_39);
DEFLIT(lit_111);
DEFLIT(lit_186);
DEFLIT(lit_15);
DEFLIT(lit_107);
DEFLIT(lit_62);
DEFLIT(lit_95);
DEFLIT(lit_31);
DEFLIT(lit_187);
DEFLIT(lit_48);
DEFLIT(lit_112);
DEFLIT(lit_1);
DEFLIT(lit_116);
DEFLIT(lit_30);
DEFLIT(lit_99);
DEFLIT(lit_16);
DEFLIT(lit_71);
DEFLIT(lit_45);
DEFLIT(lit_96);
DEFLIT(lit_28);
DEFLIT(lit_141);
DEFLIT(lit_37);
DEFLIT(lit_19);
DEFLIT(lit_158);
DEFLIT(lit_124);
DEFLIT(lit_68);
DEFLIT(lit_29);
DEFLIT(lit_90);
DEFLIT(lit_76);
DEFLIT(lit_132);
DEFLIT(lit_137);
DEFLIT(lit_142);
DEFLIT(lit_34);
DEFLIT(lit_86);
DEFLIT(lit_118);
DEFLIT(lit_6);
DEFLIT(lit_81);
DEFLIT(lit_197);
DEFLIT(lit_60);
DEFLIT(lit_69);
DEFLIT(lit_173);
DEFLIT(lit_155);
DEFLIT(lit_70);
DEFLIT(lit_32);
DEFLIT(lit_184);
DEFLIT(lit_56);
DEFLIT(lit_193);
DEFLIT(lit_167);
DEFLIT(lit_35);
DEFLIT(lit_177);
DEFLIT(lit_163);
DEFLIT(lit_61);
DEFLIT(lit_119);
DEFLIT(lit_194);
DEFLIT(lit_176);
DEFLIT(lit_43);
DEFLIT(lit_121);
DEFLIT(lit_135);
DEFLIT(lit_93);
DEFLIT(lit_72);
DEFLIT(lit_27);
DEFLIT(lit_145);
DEFLIT(lit_179);
DEFLIT(lit_169);
DEFLIT(lit_80);
DEFLIT(lit_156);
DEFLIT(lit_154);
DEFLIT(lit_185);
DEFLIT(lit_36);
DEFLIT(lit_117);
DEFLIT(lit_109);
DEFLIT(lit_57);
DEFLIT(lit_85);
DEFLIT(lit_8);
DEFLIT(lit_83);
DEFLIT(lit_172);
DEFLIT(lit_183);
DEFLIT(lit_5);
DEFLIT(lit_20);
DEFLIT(lit_67);
DEFLIT(lit_101);
DEFLIT(lit_78);
DEFLIT(lit_162);
DEFLIT(lit_190);
DEFLIT(lit_170);
DEFLIT(lit_180);
DEFLIT(lit_151);
DEFLIT(lit_66);
DEFLIT(lit_44);
DEFLIT(lit_192);
DEFLIT(lit_126);
DEFLIT(lit_64);
DEFLIT(lit_55);
DEFLIT(lit_164);
DEFLIT(lit_114);
DEFLIT(lit_4);
DEFLIT(lit_42);
DEFLIT(lit_75);
DEFLIT(lit_199);
DEFLIT(lit_47);
DEFLIT(lit_103);
DEFLIT(lit_41);
DEFLIT(lit_140);
DEFLIT(lit_120);
DEFLIT(lit_0);
DEFLIT(lit_14);
DEFLIT(lit_160);
DEFLIT(lit_174);
DEFLIT(lit_128);
DEFLIT(lit_21);
DEFLIT(lit_159);
DEFLIT(lit_157);
DEFLIT(lit_106);
DEFLIT(lit_104);
DEFLIT(lit_65);
DEFLIT(lit_165);
DEFLIT(lit_102);
DEFLIT(lit_3);
DEFLIT(lit_82);
DEFLIT(lit_123);
DEFLIT(lit_84);
DEFLIT(lit_13);
DEFLIT(lit_18);
DEFLIT(lit_87);
DEFLIT(lit_50);
DEFLIT(lit_100);
DEFLIT(lit_22);
DEFLIT(lit_98);
DEFLIT(lit_134);
DEFLIT(lit_26);
DEFLIT(lit_52);
DEFLIT(lit_153);
DEFLIT(lit_33);
DEFLIT(lit_149);
DEFLIT(lit_147);
DEFLIT(lit_130);
DEFLIT(lit_175);
DEFLIT(lit_77);
DEFLIT(lit_182);
DEFLIT(lit_148);
DEFLIT(lit_146);
DEFLIT(lit_171);
DEFLIT(lit_79);
DEFLIT(lit_127);
DEFLIT(lit_115);
DEFLIT(lit_88);
DEFLIT(lit_113);
DEFLIT(lit_25);
DEFLIT(lit_74);
DEFLIT(lit_97);
DEFLIT(lit_38);
DEFLIT(lit_129);
DEFLIT(lit_138);
DEFLIT(lit_166);
DEFLIT(lit_2);
DEFLIT(lit_73);
DEFLIT(lit_17);
DEFLIT(lit_139);
DEFLIT(lit_136);
DEFLIT(lit_53);
DEFLIT(lit_188);
DEFLIT(lit_10);
DEFLIT(lit_91);
DEFLIT(lit_152);
DEFLIT(lit_89);
DEFLIT(lit_150);
DEFLIT(lit_189);
DEFLIT(lit_49);
DEFLIT(lit_105);
DEFLIT(lit_198);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_24);
DEFLIT(lit_54);
DEFLIT(lit_110);

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
  P creatorF2912;
  P bindingF2911;
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
    bindingF2911 = T5;
    T7 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF2911);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF2911);
      T9 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T10);
      creatorF2912 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF2912,res_);
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
  P loopF2913;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_15,2);
  loopF2913 = T2;
  FUNINIT(loopF2913, 2,form_,loopF2913);
  T3 = CALL2(0,loopF2913,Ynil,bindings_);
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
  P tmpF2914;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_30));
  tmpF2914 = T1;
  if (tmpF2914 != YPfalse) {
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
  P tmpF2919;
  P tmpF2918;
  P tmpF2917;
  P tmpF2916;
  P metF2915;
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
    metF2915 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF2915,VARREF(YevalSastYLast_functionG));
    tmpF2916 = T8;
    if (tmpF2916 != YPfalse) {
      T12 = fun_23;
      T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF2915);
      T11 = CALL2(1,VARREF(YgooScolsScolYallQ),T12,T13);
      tmpF2917 = T11;
      if (tmpF2917 != YPfalse) {
        T17 = CALL1(1,VARREF(YevalSastYfunction_value),metF2915);
        T16 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T17);
        tmpF2918 = T16;
        if (tmpF2918 != YPfalse) {
          T21 = CALL1(1,VARREF(YevalSastYfunction_naryQ),metF2915);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF2919 = T20;
          if (tmpF2919 != YPfalse) {
            T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(YevalSastYfunction_bindings),metF2915);
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
  P offsetF2921;
  P bF2920;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF2920 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF2920);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF2921 = T5;
    T8 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF2920,VARREF(YevalSast_linearizeYreference_offset),offsetF2921,VARREF(YevalSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_33) {
  P freeT_;
  P tailF2922;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF2922 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF2922);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF2922;
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
  P addF2924;
  P new_envF2923;
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
    new_envF2923 = T3;
    T6 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF2923,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_33,2);
      addF2924 = T9;
      FUNINIT(addF2924, 2,new_envF2923,addF2924);
      T11 = CALL1(1,VARREF(YevalSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF2924,T11);
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
  P checkF2925;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_34,3);
  checkF2925 = T1;
  FUNINIT(checkF2925, 3,ref_,flat_fun_,checkF2925);
  T3 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF2925,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_36) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF2926;
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
  new_bindingsF2926 = T3;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF2926);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_37) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF2927;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF2927 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF2927);
  T5 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF2927);
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
  P innerF2928;
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
    innerF2928 = T4;
    FUNINIT(innerF2928, 3,s_,FREEREF(0),innerF2928);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF2928,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_67) {
  P o_;
  P loopF2929;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_66,1);
  loopF2929 = T1;
  FUNINIT(loopF2929, 1,loopF2929);
  T2 = CALL2(0,loopF2929,o_,Ynil);
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
  P resultF2931;
  P formsF2930;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T2);
  formsF2930 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF2931 = T4;
  T7 = FUNFAB(fun_70,1,resultF2931);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF2930);
  T5 = CALL1(1,VARREF(YevalSastYsequentialize),T6);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T5,resultF2931);
  T3 = resultF2931;
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
  P x_1462F2941;
  P qbF2940;
  P probeF2939;
  P indexF2938;
  P qbTF2937;
  P tmpF2936;
  P tmpF2935;
  P tmpF2934;
  P tmpF2933;
  P valueF2932;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF2932 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2932,YPfalse);
  tmpF2933 = T4;
  if (tmpF2933 != YPfalse) {
    T5 = tmpF2933;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2932,YPtrue);
    tmpF2934 = T7;
    if (tmpF2934 != YPfalse) {
      T8 = tmpF2934;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2932,Ynil);
      tmpF2935 = T10;
      if (tmpF2935 != YPfalse) {
        T11 = tmpF2935;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF2932,VARREF(YLintG));
        tmpF2936 = T13;
        if (tmpF2936 != YPfalse) {
          T14 = tmpF2936;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF2932,VARREF(YLchrG));
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
    qbTF2937 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF2937);
    indexF2938 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF2937,valueF2932,YPfalse);
    probeF2939 = T21;
    if (probeF2939 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF2939);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_126),VARREF(YevalSastYbinding_name),indexF2938,VARREF(YevalSastYbinding_info),valueF2932);
      qbF2940 = T25;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF2940,qbTF2937,valueF2932);
      x_1462F2941 = form_;
      T28 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),x_1462F2941);
      T27 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T28,qbF2940);
      T26 = CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T27,x_1462F2941);
      T29 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF2940);
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
  P indexF2944;
  P free_bindingsF2943;
  P freeF2942;
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
  freeF2942 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF2942);
  free_bindingsF2943 = T11;
  T13 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF2944 = T13;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF2944,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF2943,o_);
  T14 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF2944,VARREF(YevalSast_linearizeYclosure_creation_free),freeF2942);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_77) {
  P o_,form_,result_;
  P x_1463F2946;
  P primF2945;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF2945 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),primF2945);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T2,primF2945);
  x_1463F2946 = result_;
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1463F2946);
  T5 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T6,primF2945);
  T4 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T5,x_1463F2946);
  T8 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_78) {
  P form_,result_,x_;
  P x_1465F2949;
  P x_1464F2948;
  P new_indexF2947;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF2947 = T1;
  x_1464F2948 = result_;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_1464F2948);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T4,x_1464F2948);
  x_1465F2949 = form_;
  T8 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),x_1465F2949);
  T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,x_);
  T6 = CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T7,x_1465F2949);
  T0 = new_indexF2947;
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
  P innerF2950;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_80,4);
  innerF2950 = T1;
  FUNINIT(innerF2950, 4,forms_,FREEREF(0),FREEREF(1),innerF2950);
  T2 = CALL3(0,innerF2950,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_82) {
  P o_,max_count_;
  P loopF2951;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_81,2);
  loopF2951 = T1;
  FUNINIT(loopF2951, 2,max_count_,loopF2951);
  T2 = CALL2(0,loopF2951,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P calls_,defns_,i_,forms_;
  P callF2955;
  P defnF2954;
  P bindingF2953;
  P nameF2952;
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
    nameF2952 = T8;
    T10 = CALL4(1,VARREF(YevalSastYast_define_binding),FREEREF(1),nameF2952,YPfalse,LITREF(lit_143));
    bindingF2953 = T10;
    T13 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF2952,YPint((P)4));
    T14 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF2953,VARREF(YevalSastYfunction_debug_name),T13,VARREF(YevalSastYfunction_signature),T14,VARREF(YevalSastYfunction_body),T15);
    defnF2954 = T12;
    T18 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF2953,VARREF(YevalSastYapplication_arguments),T18,VARREF(YevalSastYapplication_tailQ),YPfalse);
    callF2955 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF2955,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF2954,defns_);
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
  P loopF2958;
  P base_indexF2957;
  P formsF2956;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T2,max_count_);
  formsF2956 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF2957 = T4;
  T7 = FUNSHELL(1,fun_loop_83,3);
  loopF2958 = T7;
  FUNINIT(loopF2958, 3,o_,r_,loopF2958);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T8 = CALL4(0,loopF2958,Ynil,T9,YPint((P)0),formsF2956);
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
  P bF2960;
  P bindingF2959;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF2959 = T1;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF2959,r_);
  bF2960 = T3;
  if (bF2960 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF2960);
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
  P loopF2961;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_95,1);
  loopF2961 = T1;
  FUNINIT(loopF2961, 1,loopF2961);
  T2 = CALL3(0,loopF2961,r_,x_,y_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_97) {
  P o_,flat_fun_,r_;
  P new_rF2963;
  P new_bindingsF2962;
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
  new_bindingsF2962 = T3;
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T7,new_bindingsF2962,r_);
  new_rF2963 = T6;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2962);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF2962,o_);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T8 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T9,flat_fun_,new_rF2963);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T8,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_98) {
  P o_,flat_fun_,r_;
  P new_rF2965;
  P new_bindingsF2964;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF2964 = T1;
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF2964,r_);
  new_rF2965 = T4;
  T7 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF2965);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,T8);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T6,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF2964);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF2964,o_);
  T10 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T9 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF2965);
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
  P adjoinF2966;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_99,2);
  adjoinF2966 = T1;
  FUNINIT(adjoinF2966, 2,flat_fun_,adjoinF2966);
  T3 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF2966,T3,new_bindings_);
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
  P x_1466F2967;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1466F2967 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_105,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_106,1,x_1466F2967);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,flat_fun_,valQ_;
  P tmpF2969;
  P tmpF2968;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF2968 = valQ_;
  if (tmpF2968 != YPfalse) {
    tmpF2969 = flat_fun_;
    if (tmpF2969 != YPfalse) {
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
  P tmpF2971;
  P next_xF2970;
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
    next_xF2970 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF2971 = FREEREF(2);
    if (tmpF2971 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF2970);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF2970;
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
  P loopF2972;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_110,4);
  loopF2972 = T1;
  FUNINIT(loopF2972, 4,o_,flat_fun_,valQ_,loopF2972);
  T2 = CALL1(0,loopF2972,o_);
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
  P walkF2973;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_118,2);
  walkF2973 = T0;
  FUNINIT(walkF2973, 2,return_,walkF2973);
  T1 = CALL2(1,VARREF(YevalSastYast_walk),walkF2973,FREEREF(0));
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
  T4 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T5 = fun_box_reference_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YevalSast_linearizeYbox_reference,T3);
  lit_3 = YPPsym((P)"box-reference-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_1 = YPmet(FUNCODEREF(fun_box_reference_setter_1),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(11));
  T8 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T9 = fun_box_reference_setter_1;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YevalSast_linearizeYbox_reference_setter,T7);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<box-write>");
  T11 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T10 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_5),T11);
  VARSET(YevalSast_linearizeYLbox_writeG,T10);
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_2 = YPmet(FUNCODEREF(fun_box_reference_2),LITREF(lit_1),T12,ENVNUL,PNUL,sloc(14));
  T14 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T15 = fun_box_reference_2;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSast_linearizeYbox_reference,T13);
  lit_7 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_3 = YPmet(FUNCODEREF(fun_box_reference_setter_3),LITREF(lit_3),T16,ENVNUL,PNUL,sloc(14));
  T18 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T19 = fun_box_reference_setter_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSast_linearizeYbox_reference_setter,T17);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_8 = YPPsym((P)"box-form");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_4 = YPmet(FUNCODEREF(fun_box_form_4),LITREF(lit_8),T20,ENVNUL,PNUL,sloc(15));
  T22 = VARREF_OR(YevalSast_linearizeYbox_form,YPfalse);
  T23 = fun_box_form_4;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSast_linearizeYbox_form,T21);
  lit_10 = YPPsym((P)"box-form-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_5 = YPmet(FUNCODEREF(fun_box_form_setter_5),LITREF(lit_10),T24,ENVNUL,PNUL,sloc(15));
  T26 = VARREF_OR(YevalSast_linearizeYbox_form_setter,YPfalse);
  T27 = fun_box_form_setter_5;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSast_linearizeYbox_form_setter,T25);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_form),VARREF(YevalSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"<box-creation>");
  T29 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T28 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_12),T29);
  VARSET(YevalSast_linearizeYLbox_creationG,T28);
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_6 = YPmet(FUNCODEREF(fun_box_reference_6),LITREF(lit_1),T30,ENVNUL,PNUL,sloc(18));
  T32 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T33 = fun_box_reference_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSast_linearizeYbox_reference,T31);
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_7 = YPmet(FUNCODEREF(fun_box_reference_setter_7),LITREF(lit_3),T34,ENVNUL,PNUL,sloc(18));
  T36 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T37 = fun_box_reference_setter_7;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSast_linearizeYbox_reference_setter,T35);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"insert-box!");
  lit_16 = YPPlist(1,YPPsym((P)"o"));
  T38 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_8 = YPmet(FUNCODEREF(fun_insert_boxX_8),LITREF(lit_15),T38,ENVNUL,PNUL,sloc(20));
  T40 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T41 = fun_insert_boxX_8;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalSast_linearizeYinsert_boxX,T39);
  lit_17 = YPPlist(1,YPPsym((P)"o"));
  T42 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_9 = YPmet(FUNCODEREF(fun_insert_boxX_9),LITREF(lit_15),T42,ENVNUL,PNUL,sloc(23));
  T44 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T45 = fun_insert_boxX_9;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSast_linearizeYinsert_boxX,T43);
  lit_18 = YPPlist(1,YPPsym((P)"o"));
  T46 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_10 = YPmet(FUNCODEREF(fun_insert_boxX_10),LITREF(lit_15),T46,ENVNUL,PNUL,sloc(29));
  T48 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T49 = fun_insert_boxX_10;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSast_linearizeYinsert_boxX,T47);
  lit_19 = YPPlist(1,YPPsym((P)"o"));
  T50 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_11 = YPmet(FUNCODEREF(fun_insert_boxX_11),LITREF(lit_15),T50,ENVNUL,PNUL,sloc(35));
  T52 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T53 = fun_insert_boxX_11;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSast_linearizeYinsert_boxX,T51);
  lit_20 = YPPlist(1,YPPsym((P)"o"));
  T54 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_12 = YPmet(FUNCODEREF(fun_insert_boxX_12),LITREF(lit_15),T54,ENVNUL,PNUL,sloc(40));
  T56 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T57 = fun_insert_boxX_12;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSast_linearizeYinsert_boxX,T55);
  lit_21 = YPPlist(1,YPPsym((P)"o"));
  T58 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_13 = YPmet(FUNCODEREF(fun_insert_boxX_13),LITREF(lit_15),T58,ENVNUL,PNUL,sloc(46));
  T60 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T61 = fun_insert_boxX_13;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YevalSast_linearizeYinsert_boxX,T59);
  lit_22 = YPPlist(1,YPPsym((P)"o"));
  T62 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),LITREF(lit_15),T62,ENVNUL,PNUL,sloc(54));
  T64 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T65 = fun_insert_boxX_14;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSast_linearizeYinsert_boxX,T63);
  lit_23 = YPPsym((P)"boxify-mutable-bindings");
  lit_24 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"bindings"));
  lit_25 = YPPsym((P)"loop");
  lit_26 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"bindings"));
  T67 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_15 = YPmet(FUNCODEREF(fun_loop_15),LITREF(lit_25),T67,ENVNUL,PNUL,sloc(64));
  T66 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_16 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_16),LITREF(lit_23),T66,ENVNUL,PNUL,sloc(62));
  T69 = VARREF_OR(YevalSast_linearizeYboxify_mutable_bindings,YPfalse);
  T70 = fun_boxify_mutable_bindings_16;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T70);
  VARSET(YevalSast_linearizeYboxify_mutable_bindings,T68);
  lit_27 = YPPsym((P)"unconstrained-type?");
  lit_28 = YPPlist(1,YPPsym((P)"b"));
  T71 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_17 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_17),LITREF(lit_27),T71,ENVNUL,PNUL,sloc(79));
  T73 = VARREF_OR(YevalSast_linearizeYunconstrained_typeQ,YPfalse);
  T74 = fun_unconstrained_typeQ_17;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T72);
  lit_29 = YPPlist(1,YPPsym((P)"b"));
  lit_30 = YPPsym((P)"goo/boot");
  lit_31 = YPPsym((P)"<any>");
  T75 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_18 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_18),LITREF(lit_27),T75,ENVNUL,PNUL,sloc(82));
  T77 = VARREF_OR(YevalSast_linearizeYunconstrained_typeQ,YPfalse);
  T78 = fun_unconstrained_typeQ_18;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T78);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T76);
  lit_32 = YPPlist(1,YPPsym((P)"o"));
  T79 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YevalSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_19 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_19),LITREF(lit_27),T79,ENVNUL,PNUL,sloc(85));
  T81 = VARREF_OR(YevalSast_linearizeYunconstrained_typeQ,YPfalse);
  T82 = fun_unconstrained_typeQ_19;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YevalSast_linearizeYunconstrained_typeQ,T80);
  lit_33 = YPPsym((P)"do-do-analysis!");
  lit_34 = YPPlist(1,YPPsym((P)"o"));
  T83 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_analysisX_20 = YPmet(FUNCODEREF(fun_do_do_analysisX_20),LITREF(lit_33),T83,ENVNUL,PNUL,sloc(88));
  T85 = VARREF_OR(YevalSast_linearizeYdo_do_analysisX,YPfalse);
  T86 = fun_do_do_analysisX_20;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YevalSast_linearizeYdo_do_analysisX,T84);
  lit_35 = YPPsym((P)"do-analysis!");
  lit_36 = YPPlist(1,YPPsym((P)"o"));
  T87 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_21 = YPmet(FUNCODEREF(fun_do_analysisX_21),LITREF(lit_35),T87,ENVNUL,PNUL,sloc(91));
  T89 = VARREF_OR(YevalSast_linearizeYdo_analysisX,YPfalse);
  T90 = fun_do_analysisX_21;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YevalSast_linearizeYdo_analysisX,T88);
  lit_37 = YPPlist(1,YPPsym((P)"o"));
  T91 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_22 = YPmet(FUNCODEREF(fun_do_analysisX_22),LITREF(lit_35),T91,ENVNUL,PNUL,sloc(94));
  T93 = VARREF_OR(YevalSast_linearizeYdo_analysisX,YPfalse);
  T94 = fun_do_analysisX_22;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YevalSast_linearizeYdo_analysisX,T92);
  lit_38 = YPPlist(1,YPPsym((P)"o"));
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  T96 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T96,ENVNUL,PNUL,sloc(105));
  T95 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_analysisX_24 = YPmet(FUNCODEREF(fun_do_analysisX_24),LITREF(lit_35),T95,ENVNUL,PNUL,sloc(100));
  T98 = VARREF_OR(YevalSast_linearizeYdo_analysisX,YPfalse);
  T99 = fun_do_analysisX_24;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSast_linearizeYdo_analysisX,T97);
  lit_40 = YPPsym((P)"analyze-ast");
  lit_41 = YPPlist(1,YPPsym((P)"o"));
  T100 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_ast_25 = YPmet(FUNCODEREF(fun_analyze_ast_25),LITREF(lit_40),T100,ENVNUL,PNUL,sloc(114));
  T102 = VARREF_OR(YevalSast_linearizeYanalyze_ast,YPfalse);
  T103 = fun_analyze_ast_25;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSast_linearizeYanalyze_ast,T101);
  lit_42 = YPPsym((P)"<free-reference>");
  T105 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T104 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_42),T105);
  VARSET(YevalSast_linearizeYLfree_referenceG,T104);
  lit_43 = YPPsym((P)"reference-offset");
  lit_44 = YPPlist(1,YPPsym((P)"_x"));
  T106 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_26 = YPmet(FUNCODEREF(fun_reference_offset_26),LITREF(lit_43),T106,ENVNUL,PNUL,sloc(121));
  T108 = VARREF_OR(YevalSast_linearizeYreference_offset,YPfalse);
  T109 = fun_reference_offset_26;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YevalSast_linearizeYreference_offset,T107);
  lit_45 = YPPsym((P)"reference-offset-setter");
  lit_46 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T111 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T110 = YPsig(LITREF(lit_46),YPPlist(2,T111,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_27 = YPmet(FUNCODEREF(fun_reference_offset_setter_27),LITREF(lit_45),T110,ENVNUL,PNUL,sloc(121));
  T113 = VARREF_OR(YevalSast_linearizeYreference_offset_setter,YPfalse);
  T114 = fun_reference_offset_setter_27;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSast_linearizeYreference_offset_setter,T112);
  T115 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_offset),VARREF(YevalSast_linearizeYreference_offset_setter),T115,VARREF(YPprop_unbound_error));
  lit_47 = YPPsym((P)"reference-self?");
  lit_48 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_28 = YPmet(FUNCODEREF(fun_reference_selfQ_28),LITREF(lit_47),T116,ENVNUL,PNUL,sloc(122));
  T118 = VARREF_OR(YevalSast_linearizeYreference_selfQ,YPfalse);
  T119 = fun_reference_selfQ_28;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T119);
  VARSET(YevalSast_linearizeYreference_selfQ,T117);
  lit_49 = YPPsym((P)"reference-self?-setter");
  lit_50 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T120 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLlogG),VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_29 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_29),LITREF(lit_49),T120,ENVNUL,PNUL,sloc(122));
  T122 = VARREF_OR(YevalSast_linearizeYreference_selfQ_setter,YPfalse);
  T123 = fun_reference_selfQ_setter_29;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T123);
  VARSET(YevalSast_linearizeYreference_selfQ_setter,T121);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_selfQ),VARREF(YevalSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_51 = YPPsym((P)"lift!");
  lit_52 = YPPlist(1,YPPsym((P)"o"));
  T124 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_30 = YPmet(FUNCODEREF(fun_liftX_30),LITREF(lit_51),T124,ENVNUL,PNUL,sloc(124));
  T126 = VARREF_OR(YevalSast_linearizeYliftX,YPfalse);
  T127 = fun_liftX_30;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  VARSET(YevalSast_linearizeYliftX,T125);
  lit_53 = YPPsym((P)"lift-procedures!");
  lit_54 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T128 = YPsig(LITREF(lit_54),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_31 = YPmet(FUNCODEREF(fun_lift_proceduresX_31),LITREF(lit_53),T128,ENVNUL,PNUL,sloc(127));
  T130 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T131 = fun_lift_proceduresX_31;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YevalSast_linearizeYlift_proceduresX,T129);
  lit_55 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T132 = YPsig(LITREF(lit_55),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_32 = YPmet(FUNCODEREF(fun_lift_proceduresX_32),LITREF(lit_53),T132,ENVNUL,PNUL,sloc(130));
  T134 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T135 = fun_lift_proceduresX_32;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YevalSast_linearizeYlift_proceduresX,T133);
  lit_56 = YPPsym((P)"adjoin-free-binding!");
  lit_57 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"ref"));
  lit_58 = YPPsym((P)"check");
  lit_59 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"free*"));
  lit_60 = YPPsym((P)"add");
  lit_61 = YPPlist(1,YPPsym((P)"free*"));
  T138 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_33 = YPmet(FUNCODEREF(fun_add_33),LITREF(lit_60),T138,ENVNUL,PNUL,sloc(147));
  T137 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_34 = YPmet(FUNCODEREF(fun_check_34),LITREF(lit_58),T137,ENVNUL,PNUL,sloc(142));
  T136 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_35 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_35),LITREF(lit_56),T136,ENVNUL,PNUL,sloc(141));
  T140 = VARREF_OR(YevalSast_linearizeYadjoin_free_bindingX,YPfalse);
  T141 = fun_adjoin_free_bindingX_35;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YevalSast_linearizeYadjoin_free_bindingX,T139);
  lit_62 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T142 = YPsig(LITREF(lit_62),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_36 = YPmet(FUNCODEREF(fun_lift_proceduresX_36),LITREF(lit_53),T142,ENVNUL,PNUL,sloc(158));
  T144 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T145 = fun_lift_proceduresX_36;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YevalSast_linearizeYlift_proceduresX,T143);
  lit_63 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T146 = YPsig(LITREF(lit_63),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_37 = YPmet(FUNCODEREF(fun_lift_proceduresX_37),LITREF(lit_53),T146,ENVNUL,PNUL,sloc(166));
  T148 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T149 = fun_lift_proceduresX_37;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YevalSast_linearizeYlift_proceduresX,T147);
  lit_64 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T150 = YPsig(LITREF(lit_64),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_38 = YPmet(FUNCODEREF(fun_lift_proceduresX_38),LITREF(lit_53),T150,ENVNUL,PNUL,sloc(175));
  T152 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T153 = fun_lift_proceduresX_38;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YevalSast_linearizeYlift_proceduresX,T151);
  lit_65 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T154 = YPsig(LITREF(lit_65),YPPlist(3,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_39 = YPmet(FUNCODEREF(fun_lift_proceduresX_39),LITREF(lit_53),T154,ENVNUL,PNUL,sloc(180));
  T156 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T157 = fun_lift_proceduresX_39;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YevalSast_linearizeYlift_proceduresX,T155);
  lit_66 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T158 = YPsig(LITREF(lit_66),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_40 = YPmet(FUNCODEREF(fun_lift_proceduresX_40),LITREF(lit_53),T158,ENVNUL,PNUL,sloc(183));
  T160 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T161 = fun_lift_proceduresX_40;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YevalSast_linearizeYlift_proceduresX,T159);
  lit_67 = YPPsym((P)"<flattened-program>");
  T163 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T162 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_67),T163);
  VARSET(YevalSast_linearizeYLflattened_programG,T162);
  lit_68 = YPPsym((P)"program-form");
  lit_69 = YPPlist(1,YPPsym((P)"_x"));
  T164 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_41 = YPmet(FUNCODEREF(fun_program_form_41),LITREF(lit_68),T164,ENVNUL,PNUL,sloc(193));
  T166 = VARREF_OR(YevalSast_linearizeYprogram_form,YPfalse);
  T167 = fun_program_form_41;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T167);
  VARSET(YevalSast_linearizeYprogram_form,T165);
  lit_70 = YPPsym((P)"program-form-setter");
  lit_71 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T169 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  T168 = YPsig(LITREF(lit_71),YPPlist(2,T169,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_42 = YPmet(FUNCODEREF(fun_program_form_setter_42),LITREF(lit_70),T168,ENVNUL,PNUL,sloc(193));
  T171 = VARREF_OR(YevalSast_linearizeYprogram_form_setter,YPfalse);
  T172 = fun_program_form_setter_42;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T172);
  VARSET(YevalSast_linearizeYprogram_form_setter,T170);
  T173 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_form),VARREF(YevalSast_linearizeYprogram_form_setter),T173,VARREF(YPprop_unbound_error));
  lit_72 = YPPsym((P)"program-quotations");
  lit_73 = YPPlist(1,YPPsym((P)"_x"));
  T174 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_43 = YPmet(FUNCODEREF(fun_program_quotations_43),LITREF(lit_72),T174,ENVNUL,PNUL,sloc(194));
  T176 = VARREF_OR(YevalSast_linearizeYprogram_quotations,YPfalse);
  T177 = fun_program_quotations_43;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T177);
  VARSET(YevalSast_linearizeYprogram_quotations,T175);
  lit_74 = YPPsym((P)"program-quotations-setter");
  lit_75 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T178 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_44 = YPmet(FUNCODEREF(fun_program_quotations_setter_44),LITREF(lit_74),T178,ENVNUL,PNUL,sloc(194));
  T180 = VARREF_OR(YevalSast_linearizeYprogram_quotations_setter,YPfalse);
  T181 = fun_program_quotations_setter_44;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T181);
  VARSET(YevalSast_linearizeYprogram_quotations_setter,T179);
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T182 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T182,ENVNUL,PNUL,sloc(194));
  T183 = fun_45;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_quotations),VARREF(YevalSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T183);
  lit_77 = YPPsym((P)"program-bindings");
  lit_78 = YPPlist(1,YPPsym((P)"_x"));
  T184 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_bindings_46 = YPmet(FUNCODEREF(fun_program_bindings_46),LITREF(lit_77),T184,ENVNUL,PNUL,sloc(195));
  T186 = VARREF_OR(YevalSast_linearizeYprogram_bindings,YPfalse);
  T187 = fun_program_bindings_46;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T187);
  VARSET(YevalSast_linearizeYprogram_bindings,T185);
  lit_79 = YPPsym((P)"program-bindings-setter");
  lit_80 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T188 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_bindings_setter_47 = YPmet(FUNCODEREF(fun_program_bindings_setter_47),LITREF(lit_79),T188,ENVNUL,PNUL,sloc(195));
  T190 = VARREF_OR(YevalSast_linearizeYprogram_bindings_setter,YPfalse);
  T191 = fun_program_bindings_setter_47;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T191);
  VARSET(YevalSast_linearizeYprogram_bindings_setter,T189);
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T192 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T192,ENVNUL,PNUL,sloc(195));
  T193 = fun_48;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_bindings),VARREF(YevalSast_linearizeYprogram_bindings_setter),VARREF(YLanyG),T193);
  lit_82 = YPPsym((P)"program-definitions");
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T194 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_49 = YPmet(FUNCODEREF(fun_program_definitions_49),LITREF(lit_82),T194,ENVNUL,PNUL,sloc(196));
  T196 = VARREF_OR(YevalSast_linearizeYprogram_definitions,YPfalse);
  T197 = fun_program_definitions_49;
  T195 = XCALL2(1,VARREF(YPdefine_method),T196,T197);
  VARSET(YevalSast_linearizeYprogram_definitions,T195);
  lit_84 = YPPsym((P)"program-definitions-setter");
  lit_85 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T198 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_50 = YPmet(FUNCODEREF(fun_program_definitions_setter_50),LITREF(lit_84),T198,ENVNUL,PNUL,sloc(196));
  T200 = VARREF_OR(YevalSast_linearizeYprogram_definitions_setter,YPfalse);
  T201 = fun_program_definitions_setter_50;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T201);
  VARSET(YevalSast_linearizeYprogram_definitions_setter,T199);
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  T202 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T202,ENVNUL,PNUL,sloc(196));
  T203 = fun_51;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_definitions),VARREF(YevalSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T203);
  lit_87 = YPPsym((P)"<top-level-form>");
  T207 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T206 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_87),T207);
  T205 = VARSET(YevalSast_linearizeYLtop_level_formG,T206);
  T204 = T205;
  return T204;
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
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218;
DEFCREGS();
loop:
  lit_88 = YPPsym((P)"form-program");
  lit_89 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_52 = YPmet(FUNCODEREF(fun_form_program_52),LITREF(lit_88),T0,ENVNUL,PNUL,sloc(199));
  T2 = VARREF_OR(YevalSast_linearizeYform_program,YPfalse);
  T3 = fun_form_program_52;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSast_linearizeYform_program,T1);
  lit_90 = YPPsym((P)"form-program-setter");
  lit_91 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_53 = YPmet(FUNCODEREF(fun_form_program_setter_53),LITREF(lit_90),T4,ENVNUL,PNUL,sloc(199));
  T6 = VARREF_OR(YevalSast_linearizeYform_program_setter,YPfalse);
  T7 = fun_form_program_setter_53;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSast_linearizeYform_program_setter,T5);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),VARREF(YevalSast_linearizeYform_program_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_92 = YPPsym((P)"form-quotations");
  lit_93 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_54 = YPmet(FUNCODEREF(fun_form_quotations_54),LITREF(lit_92),T8,ENVNUL,PNUL,sloc(200));
  T10 = VARREF_OR(YevalSast_linearizeYform_quotations,YPfalse);
  T11 = fun_form_quotations_54;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSast_linearizeYform_quotations,T9);
  lit_94 = YPPsym((P)"form-quotations-setter");
  lit_95 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_55 = YPmet(FUNCODEREF(fun_form_quotations_setter_55),LITREF(lit_94),T12,ENVNUL,PNUL,sloc(200));
  T14 = VARREF_OR(YevalSast_linearizeYform_quotations_setter,YPfalse);
  T15 = fun_form_quotations_setter_55;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSast_linearizeYform_quotations_setter,T13);
  lit_96 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T16,ENVNUL,PNUL,sloc(200));
  T17 = fun_56;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_quotations),VARREF(YevalSast_linearizeYform_quotations_setter),VARREF(YLanyG),T17);
  lit_97 = YPPsym((P)"form-definitions");
  lit_98 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_57 = YPmet(FUNCODEREF(fun_form_definitions_57),LITREF(lit_97),T18,ENVNUL,PNUL,sloc(201));
  T20 = VARREF_OR(YevalSast_linearizeYform_definitions,YPfalse);
  T21 = fun_form_definitions_57;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YevalSast_linearizeYform_definitions,T19);
  lit_99 = YPPsym((P)"form-definitions-setter");
  lit_100 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_58 = YPmet(FUNCODEREF(fun_form_definitions_setter_58),LITREF(lit_99),T22,ENVNUL,PNUL,sloc(201));
  T24 = VARREF_OR(YevalSast_linearizeYform_definitions_setter,YPfalse);
  T25 = fun_form_definitions_setter_58;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSast_linearizeYform_definitions_setter,T23);
  lit_101 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T26,ENVNUL,PNUL,sloc(201));
  T27 = fun_59;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_definitions),VARREF(YevalSast_linearizeYform_definitions_setter),VARREF(YLanyG),T27);
  lit_102 = YPPsym((P)"<closure-creation>");
  T29 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T28 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_102),T29);
  VARSET(YevalSast_linearizeYLclosure_creationG,T28);
  lit_103 = YPPsym((P)"closure-creation-index");
  lit_104 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_60 = YPmet(FUNCODEREF(fun_closure_creation_index_60),LITREF(lit_103),T30,ENVNUL,PNUL,sloc(204));
  T32 = VARREF_OR(YevalSast_linearizeYclosure_creation_index,YPfalse);
  T33 = fun_closure_creation_index_60;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSast_linearizeYclosure_creation_index,T31);
  lit_105 = YPPsym((P)"closure-creation-index-setter");
  lit_106 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_61 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_61),LITREF(lit_105),T34,ENVNUL,PNUL,sloc(204));
  T36 = VARREF_OR(YevalSast_linearizeYclosure_creation_index_setter,YPfalse);
  T37 = fun_closure_creation_index_setter_61;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YevalSast_linearizeYclosure_creation_index_setter,T35);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),VARREF(YevalSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_107 = YPPsym((P)"closure-creation-free");
  lit_108 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_62 = YPmet(FUNCODEREF(fun_closure_creation_free_62),LITREF(lit_107),T38,ENVNUL,PNUL,sloc(205));
  T40 = VARREF_OR(YevalSast_linearizeYclosure_creation_free,YPfalse);
  T41 = fun_closure_creation_free_62;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalSast_linearizeYclosure_creation_free,T39);
  lit_109 = YPPsym((P)"closure-creation-free-setter");
  lit_110 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_63 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_63),LITREF(lit_109),T42,ENVNUL,PNUL,sloc(205));
  T44 = VARREF_OR(YevalSast_linearizeYclosure_creation_free_setter,YPfalse);
  T45 = fun_closure_creation_free_setter_63;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSast_linearizeYclosure_creation_free_setter,T43);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_free),VARREF(YevalSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_111 = YPPsym((P)"flatten-seqs");
  lit_112 = YPPlist(1,YPPsym((P)"o"));
  T46 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_64 = YPmet(FUNCODEREF(fun_flatten_seqs_64),LITREF(lit_111),T46,ENVNUL,PNUL,sloc(207));
  T48 = VARREF_OR(YevalSast_linearizeYflatten_seqs,YPfalse);
  T49 = fun_flatten_seqs_64;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSast_linearizeYflatten_seqs,T47);
  lit_113 = YPPlist(1,YPPsym((P)"o"));
  lit_114 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"r"));
  lit_115 = YPPsym((P)"inner");
  lit_116 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"r"));
  T52 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_65 = YPmet(FUNCODEREF(fun_inner_65),LITREF(lit_115),T52,ENVNUL,PNUL,sloc(214));
  T51 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_66 = YPmet(FUNCODEREF(fun_loop_66),LITREF(lit_25),T51,ENVNUL,PNUL,sloc(211));
  T50 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YevalSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_67 = YPmet(FUNCODEREF(fun_flatten_seqs_67),LITREF(lit_111),T50,ENVNUL,PNUL,sloc(210));
  T54 = VARREF_OR(YevalSast_linearizeYflatten_seqs,YPfalse);
  T55 = fun_flatten_seqs_67;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSast_linearizeYflatten_seqs,T53);
  lit_117 = YPPsym((P)"as-top-level-forms");
  lit_118 = YPPlist(1,YPPsym((P)"programs"));
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  T57 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T57,ENVNUL,PNUL,sloc(220));
  T56 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_69 = YPmet(FUNCODEREF(fun_as_top_level_forms_69),LITREF(lit_117),T56,ENVNUL,PNUL,sloc(219));
  T59 = VARREF_OR(YevalSast_linearizeYas_top_level_forms,YPfalse);
  T60 = fun_as_top_level_forms_69;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T60);
  VARSET(YevalSast_linearizeYas_top_level_forms,T58);
  lit_120 = YPPsym((P)"extract-things!");
  lit_121 = YPPlist(1,YPPsym((P)"o"));
  lit_122 = YPPlist(1,YPPsym((P)"form"));
  T62 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T62,ENVNUL,PNUL,sloc(226));
  T61 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_71 = YPmet(FUNCODEREF(fun_extract_thingsX_71),LITREF(lit_120),T61,ENVNUL,PNUL,sloc(222));
  T64 = VARREF_OR(YevalSast_linearizeYextract_thingsX,YPfalse);
  T65 = fun_extract_thingsX_71;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSast_linearizeYextract_thingsX,T63);
  lit_123 = YPPsym((P)"extract!");
  lit_124 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T66 = YPsig(LITREF(lit_124),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_72 = YPmet(FUNCODEREF(fun_extractX_72),LITREF(lit_123),T66,ENVNUL,PNUL,sloc(229));
  T68 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T69 = fun_extractX_72;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSast_linearizeYextractX,T67);
  lit_125 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_126 = YPPsym((P)"quotation");
  T70 = YPsig(LITREF(lit_125),YPPlist(3,VARREF(YevalSastYLconstantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_73 = YPmet(FUNCODEREF(fun_extractX_73),LITREF(lit_123),T70,ENVNUL,PNUL,sloc(232));
  T72 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T73 = fun_extractX_73;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalSast_linearizeYextractX,T71);
  lit_127 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T74 = YPsig(LITREF(lit_127),YPPlist(3,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_74 = YPmet(FUNCODEREF(fun_extractX_74),LITREF(lit_123),T74,ENVNUL,PNUL,sloc(250));
  T76 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T77 = fun_extractX_74;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSast_linearizeYextractX,T75);
  lit_128 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_129 = YPPlist(1,YPPsym((P)"binding"));
  T79 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T79,ENVNUL,PNUL,sloc(259));
  T78 = YPsig(LITREF(lit_128),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_76 = YPmet(FUNCODEREF(fun_extractX_76),LITREF(lit_123),T78,ENVNUL,PNUL,sloc(253));
  T81 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T82 = fun_extractX_76;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YevalSast_linearizeYextractX,T80);
  lit_130 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T83 = YPsig(LITREF(lit_130),YPPlist(3,VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_77 = YPmet(FUNCODEREF(fun_extractX_77),LITREF(lit_123),T83,ENVNUL,PNUL,sloc(271));
  T85 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T86 = fun_extractX_77;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YevalSast_linearizeYextractX,T84);
  lit_131 = YPPsym((P)"adjoin-definition!");
  lit_132 = YPPlist(3,YPPsym((P)"form"),YPPsym((P)"result"),YPPsym((P)"x"));
  T87 = YPsig(LITREF(lit_132),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_78 = YPmet(FUNCODEREF(fun_adjoin_definitionX_78),LITREF(lit_131),T87,ENVNUL,PNUL,sloc(279));
  T89 = VARREF_OR(YevalSast_linearizeYadjoin_definitionX,YPfalse);
  T90 = fun_adjoin_definitionX_78;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YevalSast_linearizeYadjoin_definitionX,T88);
  lit_133 = YPPsym((P)"split-program");
  lit_134 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  T91 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_79 = YPmet(FUNCODEREF(fun_split_program_79),LITREF(lit_133),T91,ENVNUL,PNUL,sloc(287));
  T93 = VARREF_OR(YevalSast_linearizeYsplit_program,YPfalse);
  T94 = fun_split_program_79;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YevalSast_linearizeYsplit_program,T92);
  lit_135 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  lit_136 = YPPlist(2,YPPsym((P)"forms"),YPPsym((P)"s"));
  lit_137 = YPPlist(3,YPPsym((P)"res"),YPPsym((P)"es"),YPPsym((P)"count"));
  T97 = YPsig(LITREF(lit_137),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_80 = YPmet(FUNCODEREF(fun_inner_80),LITREF(lit_115),T97,ENVNUL,PNUL,sloc(292));
  T96 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_81 = YPmet(FUNCODEREF(fun_loop_81),LITREF(lit_25),T96,ENVNUL,PNUL,sloc(291));
  T95 = YPsig(LITREF(lit_135),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_82 = YPmet(FUNCODEREF(fun_split_program_82),LITREF(lit_133),T95,ENVNUL,PNUL,sloc(290));
  T99 = VARREF_OR(YevalSast_linearizeYsplit_program,YPfalse);
  T100 = fun_split_program_82;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YevalSast_linearizeYsplit_program,T98);
  lit_138 = YPPsym((P)"closurize-main!");
  lit_139 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"max-count"));
  lit_140 = YPPlist(4,YPPsym((P)"calls"),YPPsym((P)"defns"),YPPsym((P)"i"),YPPsym((P)"forms"));
  lit_141 = YPsb((P)"---main-");
  lit_142 = YPsb((P)"---");
  lit_143 = YPPsym((P)"predefined");
  T102 = YPsig(LITREF(lit_140),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_25),T102,ENVNUL,PNUL,sloc(303));
  T101 = YPsig(LITREF(lit_139),YPPlist(3,VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_84 = YPmet(FUNCODEREF(fun_closurize_mainX_84),LITREF(lit_138),T101,ENVNUL,PNUL,sloc(300));
  T104 = VARREF_OR(YevalSast_linearizeYclosurize_mainX,YPfalse);
  T105 = fun_closurize_mainX_84;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YevalSast_linearizeYclosurize_mainX,T103);
  lit_144 = YPPsym((P)"<assoc>");
  T107 = (P)YPpair(VARREF(YLanyG),Ynil);
  T106 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_144),T107);
  VARSET(YevalSast_linearizeYLassocG,T106);
  lit_145 = YPPsym((P)"assoc-key");
  lit_146 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_85 = YPmet(FUNCODEREF(fun_assoc_key_85),LITREF(lit_145),T108,ENVNUL,PNUL,sloc(334));
  T110 = VARREF_OR(YevalSast_linearizeYassoc_key,YPfalse);
  T111 = fun_assoc_key_85;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSast_linearizeYassoc_key,T109);
  lit_147 = YPPsym((P)"assoc-key-setter");
  lit_148 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T112 = YPsig(LITREF(lit_148),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_86 = YPmet(FUNCODEREF(fun_assoc_key_setter_86),LITREF(lit_147),T112,ENVNUL,PNUL,sloc(334));
  T114 = VARREF_OR(YevalSast_linearizeYassoc_key_setter,YPfalse);
  T115 = fun_assoc_key_setter_86;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSast_linearizeYassoc_key_setter,T113);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),VARREF(YevalSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_149 = YPPsym((P)"assoc-value");
  lit_150 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_87 = YPmet(FUNCODEREF(fun_assoc_value_87),LITREF(lit_149),T116,ENVNUL,PNUL,sloc(335));
  T118 = VARREF_OR(YevalSast_linearizeYassoc_value,YPfalse);
  T119 = fun_assoc_value_87;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T119);
  VARSET(YevalSast_linearizeYassoc_value,T117);
  lit_151 = YPPsym((P)"assoc-value-setter");
  lit_152 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T120 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_88 = YPmet(FUNCODEREF(fun_assoc_value_setter_88),LITREF(lit_151),T120,ENVNUL,PNUL,sloc(335));
  T122 = VARREF_OR(YevalSast_linearizeYassoc_value_setter,YPfalse);
  T123 = fun_assoc_value_setter_88;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T123);
  VARSET(YevalSast_linearizeYassoc_value_setter,T121);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_value),VARREF(YevalSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_153 = YPPsym((P)"assoc");
  lit_154 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T124 = YPsig(LITREF(lit_154),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSast_linearizeYLassocG),Ynil);
  YevalSast_linearizeYassoc = YPmet(FUNCODEREF(YevalSast_linearizeYassoc),LITREF(lit_153),T124,ENVNUL,PNUL,sloc(336));
  T125 = YevalSast_linearizeYassoc;
  VARSET(YevalSast_linearizeYassoc,T125);
  lit_155 = YPPsym((P)"assocq");
  lit_156 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T126 = YPsig(LITREF(lit_156),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_90 = YPmet(FUNCODEREF(fun_assocq_90),LITREF(lit_155),T126,ENVNUL,PNUL,sloc(339));
  T128 = VARREF_OR(YevalSast_linearizeYassocq,YPfalse);
  T129 = fun_assocq_90;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T129);
  VARSET(YevalSast_linearizeYassocq,T127);
  lit_157 = YPPsym((P)"gather-temporaries!");
  lit_158 = YPPlist(1,YPPsym((P)"o"));
  lit_159 = YPPlist(1,YPPsym((P)"def"));
  T131 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T131,ENVNUL,PNUL,sloc(348));
  T130 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_92 = YPmet(FUNCODEREF(fun_gather_temporariesX_92),LITREF(lit_157),T130,ENVNUL,PNUL,sloc(346));
  T133 = VARREF_OR(YevalSast_linearizeYgather_temporariesX,YPfalse);
  T134 = fun_gather_temporariesX_92;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YevalSast_linearizeYgather_temporariesX,T132);
  lit_160 = YPPsym((P)"collect-temporaries!");
  lit_161 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T135 = YPsig(LITREF(lit_161),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_93 = YPmet(FUNCODEREF(fun_collect_temporariesX_93),LITREF(lit_160),T135,ENVNUL,PNUL,sloc(352));
  T137 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T138 = fun_collect_temporariesX_93;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T136);
  lit_162 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T139 = YPsig(LITREF(lit_162),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_94 = YPmet(FUNCODEREF(fun_collect_temporariesX_94),LITREF(lit_160),T139,ENVNUL,PNUL,sloc(355));
  T141 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T142 = fun_collect_temporariesX_94;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T142);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T140);
  lit_163 = YPPsym((P)"prepend-renamings");
  lit_164 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"r"));
  lit_165 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"y"));
  T144 = YPsig(LITREF(lit_165),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_95 = YPmet(FUNCODEREF(fun_loop_95),LITREF(lit_25),T144,ENVNUL,PNUL,sloc(364));
  T143 = YPsig(LITREF(lit_164),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYprepend_renamings = YPmet(FUNCODEREF(YevalSast_linearizeYprepend_renamings),LITREF(lit_163),T143,ENVNUL,PNUL,sloc(362));
  T145 = YevalSast_linearizeYprepend_renamings;
  VARSET(YevalSast_linearizeYprepend_renamings,T145);
  lit_166 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T146 = YPsig(LITREF(lit_166),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_97 = YPmet(FUNCODEREF(fun_collect_temporariesX_97),LITREF(lit_160),T146,ENVNUL,PNUL,sloc(369));
  T148 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T149 = fun_collect_temporariesX_97;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T147);
  lit_167 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T150 = YPsig(LITREF(lit_167),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_98 = YPmet(FUNCODEREF(fun_collect_temporariesX_98),LITREF(lit_160),T150,ENVNUL,PNUL,sloc(379));
  T152 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T153 = fun_collect_temporariesX_98;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T151);
  lit_168 = YPPsym((P)"adjoin-temporary-variables!");
  lit_169 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"new-bindings"));
  lit_170 = YPPsym((P)"adjoin");
  lit_171 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"bindings"));
  T155 = YPsig(LITREF(lit_171),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_99 = YPmet(FUNCODEREF(fun_adjoin_99),LITREF(lit_170),T155,ENVNUL,PNUL,sloc(392));
  T154 = YPsig(LITREF(lit_169),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_100 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_100),LITREF(lit_168),T154,ENVNUL,PNUL,sloc(391));
  T157 = VARREF_OR(YevalSast_linearizeYadjoin_temporary_variablesX,YPfalse);
  T158 = fun_adjoin_temporary_variablesX_100;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T158);
  VARSET(YevalSast_linearizeYadjoin_temporary_variablesX,T156);
  lit_172 = YPPsym((P)"<renamed-local-binding>");
  T160 = (P)YPpair(VARREF(YevalSastYLlocal_bindingG),Ynil);
  T159 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_172),T160);
  VARSET(YevalSast_linearizeYLrenamed_local_bindingG,T159);
  lit_173 = YPPsym((P)"binding-index");
  lit_174 = YPPlist(1,YPPsym((P)"_x"));
  T161 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_101 = YPmet(FUNCODEREF(fun_binding_index_101),LITREF(lit_173),T161,ENVNUL,PNUL,sloc(401));
  T163 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T164 = fun_binding_index_101;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T164);
  VARSET(YevalSastYbinding_index,T162);
  lit_175 = YPPsym((P)"binding-index-setter");
  lit_176 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T165 = YPsig(LITREF(lit_176),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_102 = YPmet(FUNCODEREF(fun_binding_index_setter_102),LITREF(lit_175),T165,ENVNUL,PNUL,sloc(401));
  T167 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T168 = fun_binding_index_setter_102;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YevalSastYbinding_index_setter,T166);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  DYNDEFSET(YevalSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_177 = YPPsym((P)"new-renamed-binding");
  lit_178 = YPPlist(1,YPPsym((P)"binding"));
  T169 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_103 = YPmet(FUNCODEREF(fun_new_renamed_binding_103),LITREF(lit_177),T169,ENVNUL,PNUL,sloc(405));
  T171 = VARREF_OR(YevalSast_linearizeYnew_renamed_binding,YPfalse);
  T172 = fun_new_renamed_binding_103;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T172);
  VARSET(YevalSast_linearizeYnew_renamed_binding,T170);
  VARSET(YevalSast_linearizeYTregister_passiveQT,YPfalse);
  lit_179 = YPPsym((P)"register-allocate!");
  lit_180 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"register-passive?"));
  lit_181 = Ynil;
  lit_182 = YPPlist(1,YPPsym((P)"def"));
  T176 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T176,ENVNUL,PNUL,sloc(419));
  T175 = YPsig(LITREF(lit_181),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T175,ENVNUL,PNUL,sloc(418));
  T174 = YPsig(LITREF(lit_181),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T174,ENVNUL,PNUL,sloc(418));
  T173 = YPsig(LITREF(lit_180),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_107 = YPmet(FUNCODEREF(fun_register_allocateX_107),LITREF(lit_179),T173,ENVNUL,PNUL,sloc(417));
  T178 = VARREF_OR(YevalSast_linearizeYregister_allocateX,YPfalse);
  T179 = fun_register_allocateX_107;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T179);
  VARSET(YevalSast_linearizeYregister_allocateX,T177);
  lit_183 = YPPsym((P)"allocate-register");
  lit_184 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T180 = YPsig(LITREF(lit_184),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYallocate_register = YPmet(FUNCODEREF(YevalSast_linearizeYallocate_register),LITREF(lit_183),T180,ENVNUL,PNUL,sloc(422));
  T181 = YevalSast_linearizeYallocate_register;
  VARSET(YevalSast_linearizeYallocate_register,T181);
  lit_185 = YPPsym((P)"collect-registers!");
  lit_186 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T182 = YPsig(LITREF(lit_186),YPPlist(3,VARREF(YevalSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_109 = YPmet(FUNCODEREF(fun_collect_registersX_109),LITREF(lit_185),T182,ENVNUL,PNUL,sloc(428));
  T184 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T185 = fun_collect_registersX_109;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T185);
  VARSET(YevalSast_linearizeYcollect_registersX,T183);
  lit_187 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  lit_188 = YPPlist(1,YPPsym((P)"x"));
  T187 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_110 = YPmet(FUNCODEREF(fun_loop_110),LITREF(lit_25),T187,ENVNUL,PNUL,sloc(433));
  T186 = YPsig(LITREF(lit_187),YPPlist(3,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_111 = YPmet(FUNCODEREF(fun_collect_registersX_111),LITREF(lit_185),T186,ENVNUL,PNUL,sloc(432));
  T189 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T190 = fun_collect_registersX_111;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T190);
  VARSET(YevalSast_linearizeYcollect_registersX,T188);
  lit_189 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T191 = YPsig(LITREF(lit_189),YPPlist(3,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_112 = YPmet(FUNCODEREF(fun_collect_registersX_112),LITREF(lit_185),T191,ENVNUL,PNUL,sloc(440));
  T193 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T194 = fun_collect_registersX_112;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T194);
  VARSET(YevalSast_linearizeYcollect_registersX,T192);
  lit_190 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  lit_191 = YPPlist(1,YPPsym((P)"def"));
  T196 = YPsig(LITREF(lit_191),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T196,ENVNUL,PNUL,sloc(447));
  T195 = YPsig(LITREF(lit_190),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_114 = YPmet(FUNCODEREF(fun_collect_registersX_114),LITREF(lit_185),T195,ENVNUL,PNUL,sloc(445));
  T198 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T199 = fun_collect_registersX_114;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T199);
  VARSET(YevalSast_linearizeYcollect_registersX,T197);
  lit_192 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T200 = YPsig(LITREF(lit_192),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_115 = YPmet(FUNCODEREF(fun_collect_registersX_115),LITREF(lit_185),T200,ENVNUL,PNUL,sloc(451));
  T202 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T203 = fun_collect_registersX_115;
  T201 = XCALL2(1,VARREF(YPdefine_method),T202,T203);
  VARSET(YevalSast_linearizeYcollect_registersX,T201);
  lit_193 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"val?"));
  T204 = YPsig(LITREF(lit_193),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_185),T204,ENVNUL,PNUL,sloc(459));
  T206 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T207 = fun_collect_registersX_116;
  T205 = XCALL2(1,VARREF(YPdefine_method),T206,T207);
  VARSET(YevalSast_linearizeYcollect_registersX,T205);
  lit_194 = YPPsym((P)"ast-contains-fun?");
  lit_195 = YPPlist(1,YPPsym((P)"x"));
  T208 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_117 = YPmet(FUNCODEREF(fun_ast_contains_funQ_117),LITREF(lit_194),T208,ENVNUL,PNUL,sloc(465));
  T210 = VARREF_OR(YevalSast_linearizeYast_contains_funQ,YPfalse);
  T211 = fun_ast_contains_funQ_117;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T211);
  VARSET(YevalSast_linearizeYast_contains_funQ,T209);
  lit_196 = YPPlist(1,YPPsym((P)"x"));
  lit_197 = YPPlist(1,YPPsym((P)"return"));
  lit_198 = YPPsym((P)"walk");
  lit_199 = YPPlist(1,YPPsym((P)"y"));
  T214 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_118 = YPmet(FUNCODEREF(fun_walk_118),LITREF(lit_198),T214,ENVNUL,PNUL,sloc(470));
  T213 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T213,ENVNUL,PNUL,sloc(469));
  T212 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_120 = YPmet(FUNCODEREF(fun_ast_contains_funQ_120),LITREF(lit_194),T212,ENVNUL,PNUL,sloc(468));
  T216 = VARREF_OR(YevalSast_linearizeYast_contains_funQ,YPfalse);
  T217 = fun_ast_contains_funQ_120;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T217);
  VARSET(YevalSast_linearizeYast_contains_funQ,T215);
  T218 = YPfalse;
  return T218;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
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
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
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
  {"1+", &module_info_gooSmath, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
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
  {"puts", &module_info_gooSioSport, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"function-self-recursive?", &module_info_evalSast, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
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
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
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
  {"~=", &module_info_gooSmath, NULL},
  {"@len", &module_info_gooSboot, NULL},
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
  {"tan", &module_info_gooSmath, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
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
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
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
  {"and", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
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
  {"incf", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
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
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
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
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
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
  {"$pi", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
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
  {"bit?", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
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
  {"@telt", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"%put", &module_info_gooSboot, NULL},
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
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
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
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
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
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"class-of", &module_info_gooSboot, NULL},
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
  {"round/", &module_info_gooSmath, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
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
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
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
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
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
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
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
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%puts", &module_info_gooSboot, NULL},
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
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"function-self-recursive?-setter", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
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
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
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
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"---main-1---", PVAR, NULL},
  {"unconstrained-type?", CVAR, &YevalSast_linearizeYunconstrained_typeQ},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"program-bindings", CVAR, &YevalSast_linearizeYprogram_bindings},
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {"do-analysis!", CVAR, &YevalSast_linearizeYdo_analysisX},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"program-bindings-setter", CVAR, &YevalSast_linearizeYprogram_bindings_setter},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"do-do-analysis!", CVAR, &YevalSast_linearizeYdo_do_analysisX},
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"analyze-ast", CVAR, &YevalSast_linearizeYanalyze_ast},
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"---main-0---", PVAR, NULL},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"ast-contains-fun?", CVAR, &YevalSast_linearizeYast_contains_funQ},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"unconstrained-type?", NULL},
  {"register-allocate!", NULL},
  {"<box-creation>", NULL},
  {"program-definitions", NULL},
  {"form-quotations", NULL},
  {"extract-things!", NULL},
  {"*register-passive?*", NULL},
  {"<free-reference>", NULL},
  {"flatten-seqs", NULL},
  {"<closure-creation>", NULL},
  {"reference-offset", NULL},
  {"reference-self?", NULL},
  {"gather-temporaries!", NULL},
  {"closurize-main!", NULL},
  {"form-program", NULL},
  {"analyze-ast", NULL},
  {"program-form", NULL},
  {"program-bindings", NULL},
  {"box-form", NULL},
  {"<top-level-form>", NULL},
  {"ast-contains-fun?", NULL},
  {"closure-creation-free", NULL},
  {"lift!", NULL},
  {"<renamed-local-binding>", NULL},
  {"closure-creation-index", NULL},
  {"form-definitions", NULL},
  {"<box-write>", NULL},
  {"<box-read>", NULL},
  {"box-reference", NULL},
  {"program-quotations", NULL},
  {"insert-box!", NULL},
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
