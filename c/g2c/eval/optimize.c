/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/optimize");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/optimize */

EXT(Yclass_children,"goo/boot","class-children");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
DEF(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSoptimizeYLarg_seqG,"eval/optimize","<arg-seq>");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
DEF(YevalSoptimizeYreopt_topX,"eval/optimize","reopt-top!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YevalSoptimizeYensure_loop,"eval/optimize","ensure-loop");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
DEF(YevalSoptimizeYmethod_relationship,"eval/optimize","method-relationship");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSoptimizeYdo_do_call_analysisX,"eval/optimize","do-do-call-analysis!");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
DEF(YevalSoptimizeYarguments_potentially_jointQ,"eval/optimize","arguments-potentially-joint?");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
DEF(YevalSoptimizeYDmethod2_precedes,"eval/optimize","$method2-precedes");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSoptimizeYDmethods_unordered,"eval/optimize","$methods-unordered");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSoptimizeYmethod_precedesQ,"eval/optimize","method-precedes?");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
DEF(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
DEF(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
DEF(YevalSoptimizeYdo_call_analysisX,"eval/optimize","do-call-analysis!");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
DEF(YevalSoptimizeYpreceding_specializerQ,"eval/optimize","preceding-specializer?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YtT,"goo/boot","t*");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YevalSoptimizeYDmethod1_precedes,"eval/optimize","$method1-precedes");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
DEF(YevalSoptimizeYLmet_seqG,"eval/optimize","<met-seq>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_26);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_25);
DEFLIT(lit_32);
DEFLIT(lit_33);
DEFLIT(lit_2);
DEFLIT(lit_3);
DEFLIT(lit_40);
DEFLIT(lit_8);
DEFLIT(lit_5);
DEFLIT(lit_11);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_18);
DEFLIT(lit_14);
DEFLIT(lit_36);
DEFLIT(lit_20);
DEFLIT(lit_44);
DEFLIT(lit_13);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_29);
DEFLIT(lit_27);
DEFLIT(lit_35);
DEFLIT(lit_41);
DEFLIT(lit_10);
DEFLIT(lit_38);
DEFLIT(lit_9);
DEFLIT(lit_6);
DEFLIT(lit_39);
DEFLIT(lit_28);
DEFLIT(lit_34);
DEFLIT(lit_42);
DEFLIT(lit_7);
DEFLIT(lit_43);
DEFLIT(lit_30);
DEFLIT(lit_4);
DEFLIT(lit_23);
DEFLIT(lit_24);
DEFLIT(lit_31);
DEFLIT(lit_12);
DEFLIT(lit_37);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_unconstrained_typeQ_0);
LOCFOR(fun_unconstrained_typeQ_1);
LOCFOR(fun_unconstrained_typeQ_2);
LOCFOR(fun_after_mQ_3);
LOCFOR(fun_merge_method_4);
LOCFOR(fun_sorted_applicable_methods_using_types_5);
LOCFOR(fun_method_precedesQ_6);
LOCFOR(fun_method_relationship_7);
LOCFOR(fun_preceding_specializerQ_8);
LOCFOR(fun_arguments_potentially_jointQ_9);
FUNFOR(YevalSoptimizeYpotentially_jointQ);
LOCFOR(fun_type_equivQ_11);
LOCFOR(fun_do_do_call_analysisX_12);
LOCFOR(fun_do_call_analysisX_13);
FUNFOR(YevalSoptimizeYreopt_topX);
LOCFOR(fun_do_call_analysisX_15);
LOCFOR(fun_do_call_analysisX_16);
LOCFOR(fun_ensure_loop_17);
LOCFOR(fun_18);
LOCFOR(fun_do_call_analysisX_19);
LOCFOR(fun_do_call_analysisX_20);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_analyze_calls_23);
extern P YevalSoptimizeY___main_0___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_unconstrained_typeQ_0) {
  P b_;
LINK_STACK();
  ARG(b_, 0);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_unconstrained_typeQ_1) {
  P b_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_3));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_4));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_unconstrained_typeQ_2) {
  P o_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T0 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_after_mQ_3) {
  P other_m_;
  P T0;
LINK_STACK();
  ARG(other_m_, 0);
  T0 = CALL3(1,VARREF(YevalSoptimizeYmethod_precedesQ),FREEREF(0),other_m_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_merge_method_4) {
  P m_,sorted_;
  P x_1600F4613;
  P x_1599F4612;
  P leadF4611;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(m_, 0);
  ARG(sorted_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),sorted_);
  if (T1 != YPfalse) {
    T4 = FUNFAB(fun_after_mQ_3,2,m_,FREEREF(0));
    T5 = BOXGET(FREEREF(1));
    T3 = CALL2(1,VARREF(YgooScolsScolYallQ),T4,T5);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Ylst),m_);
      T2 = T6;
    } else {
      T8 = BOXGET(FREEREF(1));
      T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,m_);
      BOXPUT(T7,FREEREF(1));
      T2 = Ynil;
    }
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),sorted_);
    leadF4611 = T23;
    T22 = CALL3(1,VARREF(YevalSoptimizeYmethod_relationship),m_,leadF4611,FREEREF(0));
    x_1599F4612 = T22;
    x_1600F4613 = VARREF(YgooSmacrosYEE);
    T10 = CALL2(0,x_1600F4613,x_1599F4612,VARREF(YevalSoptimizeYDmethod1_precedes));
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSmacrosYpair),m_,sorted_);
      T9 = T11;
    } else {
      T13 = CALL2(0,x_1600F4613,x_1599F4612,VARREF(YevalSoptimizeYDmethod2_precedes));
      if (T13 != YPfalse) {
        T16 = CALL1(1,VARREF(Ytail),sorted_);
        T15 = CALL2(0,FREEREF(2),m_,T16);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),leadF4611,T15);
        T12 = T14;
      } else {
        T18 = CALL2(0,x_1600F4613,x_1599F4612,VARREF(YevalSoptimizeYDmethods_unordered));
        if (T18 != YPfalse) {
          T21 = BOXGET(FREEREF(1));
          T20 = CALL2(1,VARREF(YgooSmacrosYcat),sorted_,T21);
          T19 = CALL2(1,VARREF(YgooSmacrosYpair),m_,T20);
          BOXPUT(T19,FREEREF(1));
          T17 = Ynil;
        } else {
          T17 = YPfalse;
        }
        T12 = T17;
      }
      T9 = T12;
    }
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sorted_applicable_methods_using_types_5) {
  P methods_,arg_types_;
  P UF4619;
  P mF4618;
  P x_1601F4617;
  P merge_methodF4616;
  P othersF4615;
  P leading_sortedF4614;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(methods_, 0);
  ARG(arg_types_, 1);
  leading_sortedF4614 = Ynil;
  othersF4615 = Ynil;
  othersF4615 = BOXFAB(othersF4615);
  T15 = FUNSHELL(1,fun_merge_method_4,3);
  merge_methodF4616 = T15;
  FUNINIT(merge_methodF4616, 3,arg_types_,othersF4615,merge_methodF4616);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),methods_);
  x_1601F4617 = T14;
  LOOP_209: {
    P a209_0;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1601F4617);
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1601F4617);
      mF4618 = T13;
      T6 = CALL1(1,VARREF(YgooSfunYfun_specs),mF4618);
      T7 = CALL1(1,VARREF(YgooSfunYfun_arity),mF4618);
      T5 = CALL3(1,VARREF(YevalSoptimizeYarguments_potentially_jointQ),arg_types_,T6,T7);
      if (T5 != YPfalse) {
        T10 = leading_sortedF4614;
        UF4619 = T10;
        T9 = CALL2(1,merge_methodF4616,mF4618,UF4619);
        T8 = leading_sortedF4614 = T9;
      } else {
      }
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1601F4617);
      a209_0 = T12;
      x_1601F4617 = a209_0;
      goto LOOP_209;
      T2 = T11;
    } else {
      T2 = YPfalse;
    }
  }
  T17 = leading_sortedF4614;
  T18 = BOXGET(othersF4615);
  T16 = CALL2(1,VARREF(Ytup),T17,T18);
UNLINK_STACK();
  RET(T16);
}

LOCCODEDEF(fun_method_precedesQ_6) {
  P m1_,m2_,arg_types_;
  P T0,T1;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(arg_types_, 2);
  T1 = CALL3(1,VARREF(YevalSoptimizeYmethod_relationship),m1_,m2_,arg_types_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,VARREF(YevalSoptimizeYDmethod1_precedes));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_method_relationship_7) {
  P m1_,m2_,arg_types_;
  P arg_typeF4631;
  P spec1F4630;
  P spec2F4629;
  P tmpF4628;
  P tmpF4627;
  P x_1603F4626;
  P x_1604F4625;
  P x_1605F4624;
  P follows_somewhereQF4623;
  P precedes_somewhereQF4622;
  P specs2F4621;
  P specs1F4620;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(arg_types_, 2);
  T37 = CALL1(1,VARREF(YgooSfunYfun_specs),m1_);
  specs1F4620 = T37;
  T36 = CALL1(1,VARREF(YgooSfunYfun_specs),m2_);
  specs2F4621 = T36;
  precedes_somewhereQF4622 = YPfalse;
  follows_somewhereQF4623 = YPfalse;
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),specs2F4621);
  x_1605F4624 = T27;
  T28 = CALL1(1,VARREF(YgooScolsScolYenum),specs1F4620);
  x_1604F4625 = T28;
  T29 = CALL1(1,VARREF(YgooScolsScolYenum),arg_types_);
  x_1603F4626 = T29;
  LOOP_210: {
    P a210_0,a210_1,a210_2;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1605F4624);
    tmpF4627 = T8;
    if (tmpF4627 != YPfalse) {
      T4 = tmpF4627;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1604F4625);
      tmpF4628 = T7;
      if (tmpF4628 != YPfalse) {
        T5 = tmpF4628;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1603F4626);
        T5 = T6;
      }
      T4 = T5;
    }
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_1605F4624);
      spec2F4629 = T26;
      T25 = CALL1(1,VARREF(YgooScolsScolYnow),x_1604F4625);
      spec1F4630 = T25;
      T24 = CALL1(1,VARREF(YgooScolsScolYnow),x_1603F4626);
      arg_typeF4631 = T24;
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),spec1F4630,spec2F4629);
      if (T9 != YPfalse) {
      } else {
        T11 = CALL3(1,VARREF(YevalSoptimizeYpreceding_specializerQ),spec1F4630,spec2F4629,arg_typeF4631);
        if (T11 != YPfalse) {
          T14 = CALL2(1,VARREF(YsubtypeQ),spec2F4629,spec1F4630);
          T13 = CALL1(1,VARREF(Ynot),T14);
          if (T13 != YPfalse) {
            T15 = precedes_somewhereQF4622 = YPtrue;
            T12 = T15;
          } else {
            T12 = YPfalse;
          }
          T10 = T12;
        } else {
          T17 = CALL3(1,VARREF(YevalSoptimizeYpreceding_specializerQ),spec2F4629,spec1F4630,arg_typeF4631);
          if (T17 != YPfalse) {
            T18 = follows_somewhereQF4623 = YPtrue;
            T16 = T18;
          } else {
            if (YPtrue != YPfalse) {
              T19 = YPfalse;
            } else {
              T19 = YPfalse;
            }
            T16 = T19;
          }
          T10 = T16;
        }
      }
      T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1605F4624);
      T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1604F4625);
      T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1603F4626);
      a210_0 = T21;
      a210_1 = T22;
      a210_2 = T23;
      x_1605F4624 = a210_0;
      x_1604F4625 = a210_1;
      x_1603F4626 = a210_2;
      goto LOOP_210;
      T2 = T20;
    } else {
      T2 = YPfalse;
    }
  }
  T31 = precedes_somewhereQF4622;
  if (T31 != YPfalse) {
    T33 = follows_somewhereQF4623;
    if (T33 != YPfalse) {
      T32 = VARREF(YevalSoptimizeYDmethods_unordered);
    } else {
      T32 = VARREF(YevalSoptimizeYDmethod1_precedes);
    }
    T30 = T32;
  } else {
    T35 = follows_somewhereQF4623;
    if (T35 != YPfalse) {
      T34 = VARREF(YevalSoptimizeYDmethod2_precedes);
    } else {
      T34 = VARREF(YevalSoptimizeYDmethods_unordered);
    }
    T30 = T34;
  }
UNLINK_STACK();
  RET(T30);
}

LOCCODEDEF(fun_preceding_specializerQ_8) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL2(1,VARREF(YsubtypeQ),t1_,t2_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_arguments_potentially_jointQ_9) {
  P arg_types_,domain_types_,max_;
  P T0;
LINK_STACK();
  ARG(arg_types_, 0);
  ARG(domain_types_, 1);
  ARG(max_, 2);
  T0 = CALL3(1,VARREF(YgooStypesYall2Q),VARREF(YevalSoptimizeYpotentially_jointQ),arg_types_,domain_types_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSoptimizeYpotentially_jointQ) {
  P t1_,t2_;
  P tmpF4632;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T2 = CALL2(1,VARREF(YsubtypeQ),t1_,t2_);
  tmpF4632 = T2;
  if (tmpF4632 != YPfalse) {
    T0 = tmpF4632;
  } else {
    T1 = CALL2(1,VARREF(YsubtypeQ),t2_,t1_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_equivQ_11) {
  P x_,y_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YsubtypeQ),x_,y_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YsubtypeQ),y_,x_);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do_do_call_analysisX_12) {
  P o_,r_,t_,f_,s_,funs_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALLN(1,VARREF(YevalSastYast_walkX),7,VARREF(YevalSoptimizeYdo_call_analysisX),o_,r_,t_,f_,s_,funs_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_call_analysisX_13) {
  P o_,r_,t_,f_,s_,funs_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALLN(1,VARREF(YevalSoptimizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,funs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSoptimizeYreopt_topX) {
  P s_,t_;
  P tmpF4633;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(s_, 0);
  ARG(t_, 1);
  T4 = CALL1(1,VARREF(Ynot),t_);
  tmpF4633 = T4;
  if (tmpF4633 != YPfalse) {
    T2 = tmpF4633;
  } else {
    T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),s_,t_);
    T2 = T3;
  }
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScolsScolxYaddX),s_,t_);
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_call_analysisX_15) {
  P o_,r_,t_,f_,s_,funs_;
  P funQF4634;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T1 = CALL1(1,VARREF(YevalSastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T2 = CALL2(1,VARREF(YevalSastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
  T13 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T12 = CALL1(1,VARREF(YevalSastYbinding_value),T13);
  funQF4634 = T12;
  if (funQF4634 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),funs_,funQF4634);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  if (T5 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYfunction_ref_count),funQF4634);
    T8 = CALL2(1,VARREF(YgooSlogYE),T9,YPint((P)1));
    if (T8 != YPfalse) {
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T11 = CALL1(1,VARREF(YevalSastYfunction_ref_count),funQF4634);
      T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
      CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T10,funQF4634);
      T7 = funQF4634;
    } else {
      T7 = o_;
    }
    T4 = T7;
  } else {
    T4 = o_;
  }
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_do_call_analysisX_16) {
  P o_,r_,t_,f_,s_,funs_;
  P bodyF4635;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,T0,r_,t_,f_,s_,funs_);
  T9 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T8 = CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,T9,r_,t_,o_,s_,funs_);
  bodyF4635 = T8;
  T2 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
  if (T2 != YPfalse) {
    T4 = CALL2(1,VARREF(YisaQ),bodyF4635,VARREF(YevalSastYLloopG));
    T3 = CALL1(1,VARREF(Ynot),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
    CALL2(1,VARREF(YevalSastYloop_body_setter),bodyF4635,T5);
    T7 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
    T6 = CALL2(1,VARREF(YevalSastYfunction_body_setter),T7,o_);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ensure_loop_17) {
  P f_;
  P tmpF4637;
  P UF4636;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  T5 = CALL1(1,VARREF(YevalSastYfunction_loop),f_);
  UF4636 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfunction_loop),f_);
  tmpF4637 = T4;
  if (tmpF4637 != YPfalse) {
    T0 = tmpF4637;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
    T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_bindings),T3);
    T1 = CALL2(1,VARREF(YevalSastYfunction_loop_setter),T2,f_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_18) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_type),x_);
  T0 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_call_analysisX_19) {
  P o_,r_,t_,f_,s_,funs_;
  P loopF4642;
  P calleeF4641;
  P x_1608F4640;
  P x_1607F4639;
  P refF4638;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  CALLN(1,VARREF(YevalSoptimizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,funs_);
  T39 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  refF4638 = T39;
  x_1607F4639 = refF4638;
  x_1608F4640 = VARREF(YisaQ);
  T1 = CALL2(1,x_1608F4640,x_1607F4639,VARREF(YevalSastYLlocal_referenceG));
  if (T1 != YPfalse) {
    T33 = CALL1(1,VARREF(YevalSastYreference_binding),refF4638);
    T32 = CALL1(1,VARREF(YevalSastYbinding_value),T33);
    calleeF4641 = T32;
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),calleeF4641,f_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
      if (T6 != YPfalse) {
        T8 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
        T7 = CALL1(1,VARREF(Ynot),T8);
        T5 = T7;
      } else {
        T5 = YPfalse;
      }
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
    if (T3 != YPfalse) {
      T13 = CALL1(1,VARREF(YevalSoptimizeYensure_loop),f_);
      loopF4642 = T13;
      T10 = CALL1(1,VARREF(YevalSastYfunction_ref_count),f_);
      T9 = CALL2(1,VARREF(YgooSmathY_),T10,YPint((P)1));
      CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T9,f_);
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T12 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
      T11 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),loopF4642,VARREF(YevalSastYapplication_arguments),T12);
      T2 = T11;
    } else {
      T16 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_functionG));
      if (T16 != YPfalse) {
        T19 = fun_18;
        T20 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
        T18 = CALL2(1,VARREF(YgooScolsScolYallQ),T19,T20);
        if (T18 != YPfalse) {
          T23 = CALL1(1,VARREF(YevalSastYfunction_value),f_);
          T22 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T23);
          if (T22 != YPfalse) {
            T26 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
            T25 = CALL1(1,VARREF(Ynot),T26);
            if (T25 != YPfalse) {
              T29 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
              T28 = CALL1(1,VARREF(YgooStypesYlen),T29);
              T31 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
              T30 = CALL1(1,VARREF(YgooStypesYlen),T31);
              T27 = CALL2(1,VARREF(YgooSlogYE),T28,T30);
              T24 = T27;
            } else {
              T24 = YPfalse;
            }
            T21 = T24;
          } else {
            T21 = YPfalse;
          }
          T17 = T21;
        } else {
          T17 = YPfalse;
        }
        T15 = T17;
      } else {
        T15 = YPfalse;
      }
      if (T15 != YPfalse) {
        CALL2(1,VARREF(YevalSastYapplication_knownQ_setter),YPtrue,o_);
        T14 = o_;
      } else {
        T14 = o_;
      }
      T2 = T14;
    }
    T0 = T2;
  } else {
    T35 = CALL2(1,x_1608F4640,x_1607F4639,VARREF(YevalSastYLast_embodied_functionG));
    if (T35 != YPfalse) {
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T37 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
      T38 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
      T36 = CALL4(1,VARREF(YevalSastYprocess_closed_application),refF4638,T37,r_,T38);
      T34 = T36;
    } else {
      T34 = o_;
    }
    T0 = T34;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_call_analysisX_20) {
  P o_,r_,t_,f_,s_,funs_;
  P resF4645;
  P new_funsF4644;
  P singleQF4643;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T14 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL2(1,VARREF(YgooSlogYE),T13,YPint((P)1));
  singleQF4643 = T12;
  if (singleQF4643 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
    T10 = CALL1(1,VARREF(YgooSmacrosY1st),T11);
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,funs_);
    T8 = T9;
  } else {
    T8 = funs_;
  }
  new_funsF4644 = T8;
  T7 = CALLN(1,VARREF(YevalSoptimizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,new_funsF4644);
  resF4645 = T7;
  if (singleQF4643 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),new_funsF4644);
    T3 = CALL1(1,VARREF(YevalSastYfunction_ref_count),T4);
    T2 = CALL2(1,VARREF(YgooSlogYE),T3,YPint((P)0));
    if (T2 != YPfalse) {
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T5 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfunctionsG));
      CALL2(1,VARREF(YevalSastYlocals_functions_setter),T5,o_);
      CALL2(1,VARREF(YevalSastYlocals_bindings_setter),Ynil,o_);
      T6 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
      T1 = T6;
    } else {
      T1 = resF4645;
    }
    T0 = T1;
  } else {
    T0 = resF4645;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_21) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,x_,FREEREF(0),x_,YPfalse,FREEREF(1),Ynil);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_analyze_calls_23) {
  P o_,r_;
  P resF4647;
  P sF4646;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  sF4646 = T8;
  T4 = CALL2(1,VARREF(YisaQ),o_,VARREF(YevalSastYLsequentialG));
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_21,2,r_,sF4646);
    T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,o_);
    T3 = T5;
  } else {
    T7 = CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,o_,r_,o_,YPfalse,sF4646,Ynil);
    T3 = T7;
  }
  resF4647 = T3;
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),sF4646);
  if (T1 != YPfalse) {
    T0 = resF4647;
  } else {
    T2 = FUNFAB(fun_22,1,r_);
    CALL2(1,VARREF(YgooSmacrosYdo),T2,sF4646);
    T0 = resF4647;
  }
UNLINK_STACK();
  QRET(T0);
}

P YevalSoptimizeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80;
DEFCREGS();
  lit_0 = YPPsym((P)"unconstrained-type?");
  lit_1 = YPPlist(1,YPPsym((P)"b"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_0 = YPfab_met(FUNCODEREF(fun_unconstrained_typeQ_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(7),YPfalse);
  T2 = VARREF_OR(YevalSoptimizeYunconstrained_typeQ,YPfalse);
  T3 = fun_unconstrained_typeQ_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSoptimizeYunconstrained_typeQ,T1);
  lit_2 = YPPlist(1,YPPsym((P)"b"));
  lit_3 = YPPsym((P)"goo/boot");
  lit_4 = YPPsym((P)"<any>");
  T4 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_1 = YPfab_met(FUNCODEREF(fun_unconstrained_typeQ_1),T4,LITREF(lit_0),LITREF(lit_2),sloc(10),YPfalse);
  T6 = VARREF_OR(YevalSoptimizeYunconstrained_typeQ,YPfalse);
  T7 = fun_unconstrained_typeQ_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSoptimizeYunconstrained_typeQ,T5);
  lit_5 = YPPlist(1,YPPsym((P)"o"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_2 = YPfab_met(FUNCODEREF(fun_unconstrained_typeQ_2),T8,LITREF(lit_0),LITREF(lit_5),sloc(13),YPfalse);
  T10 = VARREF_OR(YevalSoptimizeYunconstrained_typeQ,YPfalse);
  T11 = fun_unconstrained_typeQ_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSoptimizeYunconstrained_typeQ,T9);
  VARSET(YevalSoptimizeYLarg_seqG,VARREF(YLlstG));
  VARSET(YevalSoptimizeYLmet_seqG,VARREF(YLlstG));
  lit_6 = YPPsym((P)"sorted-applicable-methods-using-types");
  lit_7 = YPPlist(2,YPPsym((P)"methods"),YPPsym((P)"arg-types"));
  lit_8 = YPPsym((P)"merge-method");
  lit_9 = YPPlist(2,YPPsym((P)"m"),YPPsym((P)"sorted"));
  lit_10 = YPPsym((P)"after-m?");
  lit_11 = YPPlist(1,YPPsym((P)"other-m"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_after_mQ_3 = YPfab_met(FUNCODEREF(fun_after_mQ_3),T15,LITREF(lit_10),LITREF(lit_11),sloc(28),YPfalse);
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_merge_method_4 = YPfab_met(FUNCODEREF(fun_merge_method_4),T14,LITREF(lit_8),LITREF(lit_9),sloc(26),YPfalse);
  T13 = XCALL2(1,VARREF(YtT),VARREF(YevalSoptimizeYLmet_seqG),VARREF(YevalSoptimizeYLmet_seqG));
  T12 = YPfab_sig(YPPlist(2,VARREF(YevalSoptimizeYLmet_seqG),VARREF(YevalSoptimizeYLarg_seqG)),YPfalse,YPint((P)2),T13,Ynil);
  fun_sorted_applicable_methods_using_types_5 = YPfab_met(FUNCODEREF(fun_sorted_applicable_methods_using_types_5),T12,LITREF(lit_6),LITREF(lit_7),sloc(21),YPfalse);
  T17 = VARREF_OR(YevalSoptimizeYsorted_applicable_methods_using_types,YPfalse);
  T18 = fun_sorted_applicable_methods_using_types_5;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YevalSoptimizeYsorted_applicable_methods_using_types,T16);
  lit_12 = YPPsym((P)"unordered");
  VARSET(YevalSoptimizeYDmethods_unordered,LITREF(lit_12));
  lit_13 = YPPsym((P)"method1");
  VARSET(YevalSoptimizeYDmethod1_precedes,LITREF(lit_13));
  lit_14 = YPPsym((P)"method2");
  VARSET(YevalSoptimizeYDmethod2_precedes,LITREF(lit_14));
  lit_15 = YPPsym((P)"method-precedes?");
  lit_16 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"arg-types"));
  T19 = YPfab_sig(YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YevalSoptimizeYLarg_seqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_method_precedesQ_6 = YPfab_met(FUNCODEREF(fun_method_precedesQ_6),T19,LITREF(lit_15),LITREF(lit_16),sloc(59),YPfalse);
  T21 = VARREF_OR(YevalSoptimizeYmethod_precedesQ,YPfalse);
  T22 = fun_method_precedesQ_6;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YevalSoptimizeYmethod_precedesQ,T20);
  lit_17 = YPPsym((P)"method-relationship");
  lit_18 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"arg-types"));
  T23 = YPfab_sig(YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YevalSoptimizeYLarg_seqG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  fun_method_relationship_7 = YPfab_met(FUNCODEREF(fun_method_relationship_7),T23,LITREF(lit_17),LITREF(lit_18),sloc(65),YPfalse);
  T25 = VARREF_OR(YevalSoptimizeYmethod_relationship,YPfalse);
  T26 = fun_method_relationship_7;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YevalSoptimizeYmethod_relationship,T24);
  lit_19 = YPPsym((P)"preceding-specializer?");
  lit_20 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T28 = YPfab_sig(YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T27 = YPfab_gen(T28,LITREF(lit_19),LITREF(lit_20),YPfalse);
  VARSET(YevalSoptimizeYpreceding_specializerQ,T27);
  lit_21 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T29 = YPfab_sig(YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_preceding_specializerQ_8 = YPfab_met(FUNCODEREF(fun_preceding_specializerQ_8),T29,LITREF(lit_19),LITREF(lit_21),sloc(85),YPfalse);
  T31 = VARREF_OR(YevalSoptimizeYpreceding_specializerQ,YPfalse);
  T32 = fun_preceding_specializerQ_8;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSoptimizeYpreceding_specializerQ,T30);
  lit_22 = YPPsym((P)"arguments-potentially-joint?");
  lit_23 = YPPlist(3,YPPsym((P)"arg-types"),YPPsym((P)"domain-types"),YPPsym((P)"max"));
  T33 = YPfab_sig(YPPlist(3,VARREF(YevalSoptimizeYLarg_seqG),VARREF(YevalSoptimizeYLarg_seqG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_arguments_potentially_jointQ_9 = YPfab_met(FUNCODEREF(fun_arguments_potentially_jointQ_9),T33,LITREF(lit_22),LITREF(lit_23),sloc(88),YPfalse);
  T35 = VARREF_OR(YevalSoptimizeYarguments_potentially_jointQ,YPfalse);
  T36 = fun_arguments_potentially_jointQ_9;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSoptimizeYarguments_potentially_jointQ,T34);
  lit_24 = YPPsym((P)"potentially-joint?");
  lit_25 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T37 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSoptimizeYpotentially_jointQ = YPfab_met(FUNCODEREF(YevalSoptimizeYpotentially_jointQ),T37,LITREF(lit_24),LITREF(lit_25),sloc(92),YPfalse);
  T38 = YevalSoptimizeYpotentially_jointQ;
  VARSET(YevalSoptimizeYpotentially_jointQ,T38);
  lit_26 = YPPsym((P)"type-equiv?");
  lit_27 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_type_equivQ_11 = YPfab_met(FUNCODEREF(fun_type_equivQ_11),T39,LITREF(lit_26),LITREF(lit_27),sloc(97),YPfalse);
  T41 = VARREF_OR(YevalSoptimizeYtype_equivQ,YPfalse);
  T42 = fun_type_equivQ_11;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSoptimizeYtype_equivQ,T40);
  lit_28 = YPPsym((P)"do-do-call-analysis!");
  lit_29 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T43 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_do_call_analysisX_12 = YPfab_met(FUNCODEREF(fun_do_do_call_analysisX_12),T43,LITREF(lit_28),LITREF(lit_29),sloc(102),YPfalse);
  T45 = VARREF_OR(YevalSoptimizeYdo_do_call_analysisX,YPfalse);
  T46 = fun_do_do_call_analysisX_12;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YevalSoptimizeYdo_do_call_analysisX,T44);
  lit_30 = YPPsym((P)"do-call-analysis!");
  lit_31 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T47 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_13 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_13),T47,LITREF(lit_30),LITREF(lit_31),sloc(105),YPfalse);
  T49 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T50 = fun_do_call_analysisX_13;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSoptimizeYdo_call_analysisX,T48);
  lit_32 = YPPsym((P)"reopt-top!");
  lit_33 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"t"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSoptimizeYreopt_topX = YPfab_met(FUNCODEREF(YevalSoptimizeYreopt_topX),T51,LITREF(lit_32),LITREF(lit_33),sloc(108),YPfalse);
  T52 = YevalSoptimizeYreopt_topX;
  VARSET(YevalSoptimizeYreopt_topX,T52);
  lit_34 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T53 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_15 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_15),T53,LITREF(lit_30),LITREF(lit_34),sloc(111),YPfalse);
  T55 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T56 = fun_do_call_analysisX_15;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSoptimizeYdo_call_analysisX,T54);
  lit_35 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T57 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_16 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_16),T57,LITREF(lit_30),LITREF(lit_35),sloc(123),YPfalse);
  T59 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T60 = fun_do_call_analysisX_16;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSoptimizeYdo_call_analysisX,T58);
  lit_36 = YPPsym((P)"ensure-loop");
  lit_37 = YPPlist(1,YPPsym((P)"f"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YevalSastYLloopG),Ynil);
  fun_ensure_loop_17 = YPfab_met(FUNCODEREF(fun_ensure_loop_17),T61,LITREF(lit_36),LITREF(lit_37),sloc(131),YPfalse);
  T63 = VARREF_OR(YevalSoptimizeYensure_loop,YPfalse);
  T64 = fun_ensure_loop_17;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSoptimizeYensure_loop,T62);
  lit_38 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T66,YPfalse,LITREF(lit_39),sloc(149),YPfalse);
  T65 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_19 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_19),T65,LITREF(lit_30),LITREF(lit_38),sloc(135),YPfalse);
  T68 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T69 = fun_do_call_analysisX_19;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSoptimizeYdo_call_analysisX,T67);
  lit_40 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T70 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_20 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_20),T70,LITREF(lit_30),LITREF(lit_40),sloc(163),YPfalse);
  T72 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T73 = fun_do_call_analysisX_20;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSoptimizeYdo_call_analysisX,T71);
  lit_41 = YPPsym((P)"analyze-calls");
  lit_42 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"r"));
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  lit_44 = YPPlist(1,YPPsym((P)"e"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPfab_met(FUNCODEREF(fun_21),T76,YPfalse,LITREF(lit_43),sloc(180),YPfalse);
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T75,YPfalse,LITREF(lit_44),sloc(184),YPfalse);
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_analyze_calls_23 = YPfab_met(FUNCODEREF(fun_analyze_calls_23),T74,LITREF(lit_41),LITREF(lit_42),sloc(176),YPfalse);
  T78 = VARREF_OR(YevalSoptimizeYanalyze_calls,YPfalse);
  T79 = fun_analyze_calls_23;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSoptimizeYanalyze_calls,T77);
  T80 = YPfalse;
  return T80;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_evalSdependency;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSloc},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-children", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sorted-applicable-methods-using-types", CVAR, &YevalSoptimizeYsorted_applicable_methods_using_types},
  {"<arg-seq>", CVAR, &YevalSoptimizeYLarg_seqG},
  {"reopt-top!", CVAR, &YevalSoptimizeYreopt_topX},
  {"ensure-loop", CVAR, &YevalSoptimizeYensure_loop},
  {"method-relationship", CVAR, &YevalSoptimizeYmethod_relationship},
  {"do-do-call-analysis!", CVAR, &YevalSoptimizeYdo_do_call_analysisX},
  {"arguments-potentially-joint?", CVAR, &YevalSoptimizeYarguments_potentially_jointQ},
  {"$method2-precedes", CVAR, &YevalSoptimizeYDmethod2_precedes},
  {"$methods-unordered", CVAR, &YevalSoptimizeYDmethods_unordered},
  {"---main-0---", PVAR, NULL},
  {"analyze-calls", CVAR, &YevalSoptimizeYanalyze_calls},
  {"method-precedes?", CVAR, &YevalSoptimizeYmethod_precedesQ},
  {"type-equiv?", CVAR, &YevalSoptimizeYtype_equivQ},
  {"unconstrained-type?", CVAR, &YevalSoptimizeYunconstrained_typeQ},
  {"do-call-analysis!", CVAR, &YevalSoptimizeYdo_call_analysisX},
  {"preceding-specializer?", CVAR, &YevalSoptimizeYpreceding_specializerQ},
  {"potentially-joint?", CVAR, &YevalSoptimizeYpotentially_jointQ},
  {"$method1-precedes", CVAR, &YevalSoptimizeYDmethod1_precedes},
  {"<met-seq>", CVAR, &YevalSoptimizeYLmet_seqG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sorted-applicable-methods-using-types", NULL},
  {"analyze-calls", NULL},
  {"type-equiv?", NULL},
  {"unconstrained-type?", NULL},
  {"potentially-joint?", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSoptimize;
MODULE_INFO module_info_evalSoptimize = {
  "eval/optimize",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSloc (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSoptimize (void);

void load_module_evalSoptimize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSloc();
  load_module_evalSast();

  (P)YevalSoptimizeY___main_0___();

}

/* END OF GENERATED CODE. */
