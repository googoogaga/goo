/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/optimize");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/optimize */

DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
DEF(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
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
DEF(YevalSoptimizeYLmet_seqG,"eval/optimize","<met-seq>");
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
DEF(YevalSoptimizeYmethod_relationship,"eval/optimize","method-relationship");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSlogYNEE,"goo/log","~==");
DEF(YevalSoptimizeYarguments_potentially_jointQ,"eval/optimize","arguments-potentially-joint?");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
DEF(YevalSoptimizeYdo_call_analysisX,"eval/optimize","do-call-analysis!");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
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
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YevalSoptimizeYDmethods_unordered,"eval/optimize","$methods-unordered");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");
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
EXT(YgooSmathYlogn,"goo/math","logn");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
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
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
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
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
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
DEF(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
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
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
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
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YevalSoptimizeYreopt_topX,"eval/optimize","reopt-top!");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
DEF(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
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
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
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
DEF(YevalSoptimizeYmethod_precedesQ,"eval/optimize","method-precedes?");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ynew,"goo/boot","new");
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
DEF(YevalSoptimizeYensure_loop,"eval/optimize","ensure-loop");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYtanh,"goo/math","tanh");
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
DEF(YevalSoptimizeYDmethod2_precedes,"eval/optimize","$method2-precedes");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
DEF(YevalSoptimizeYpreceding_specializerQ,"eval/optimize","preceding-specializer?");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
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
DEF(YevalSoptimizeYdo_do_call_analysisX,"eval/optimize","do-do-call-analysis!");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSoptimizeYDmethod1_precedes,"eval/optimize","$method1-precedes");
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
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
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
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
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
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
DEF(YevalSoptimizeYLarg_seqG,"eval/optimize","<arg-seq>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
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
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
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

DEFLIT(lit_36);
DEFLIT(lit_20);
DEFLIT(lit_23);
DEFLIT(lit_5);
DEFLIT(lit_37);
DEFLIT(lit_21);
DEFLIT(lit_18);
DEFLIT(lit_3);
DEFLIT(lit_19);
DEFLIT(lit_28);
DEFLIT(lit_22);
DEFLIT(lit_26);
DEFLIT(lit_0);
DEFLIT(lit_38);
DEFLIT(lit_15);
DEFLIT(lit_7);
DEFLIT(lit_9);
DEFLIT(lit_42);
DEFLIT(lit_2);
DEFLIT(lit_11);
DEFLIT(lit_25);
DEFLIT(lit_33);
DEFLIT(lit_17);
DEFLIT(lit_43);
DEFLIT(lit_8);
DEFLIT(lit_32);
DEFLIT(lit_16);
DEFLIT(lit_24);
DEFLIT(lit_35);
DEFLIT(lit_31);
DEFLIT(lit_14);
DEFLIT(lit_1);
DEFLIT(lit_10);
DEFLIT(lit_13);
DEFLIT(lit_30);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_12);
DEFLIT(lit_44);
DEFLIT(lit_34);
DEFLIT(lit_41);
DEFLIT(lit_29);
DEFLIT(lit_4);
DEFLIT(lit_39);
DEFLIT(lit_27);

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
  P x_1600F4734;
  P x_1599F4733;
  P leadF4732;
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
    leadF4732 = T23;
    T22 = CALL3(1,VARREF(YevalSoptimizeYmethod_relationship),m_,leadF4732,FREEREF(0));
    x_1599F4733 = T22;
    x_1600F4734 = VARREF(YgooSmacrosYEE);
    T10 = CALL2(0,x_1600F4734,x_1599F4733,VARREF(YevalSoptimizeYDmethod1_precedes));
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSmacrosYpair),m_,sorted_);
      T9 = T11;
    } else {
      T13 = CALL2(0,x_1600F4734,x_1599F4733,VARREF(YevalSoptimizeYDmethod2_precedes));
      if (T13 != YPfalse) {
        T16 = CALL1(1,VARREF(Ytail),sorted_);
        T15 = CALL2(0,FREEREF(2),m_,T16);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),leadF4732,T15);
        T12 = T14;
      } else {
        T18 = CALL2(0,x_1600F4734,x_1599F4733,VARREF(YevalSoptimizeYDmethods_unordered));
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
  P UF4740;
  P mF4739;
  P x_1601F4738;
  P merge_methodF4737;
  P othersF4736;
  P leading_sortedF4735;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(methods_, 0);
  ARG(arg_types_, 1);
  leading_sortedF4735 = Ynil;
  othersF4736 = Ynil;
  othersF4736 = BOXFAB(othersF4736);
  T15 = FUNSHELL(1,fun_merge_method_4,3);
  merge_methodF4737 = T15;
  FUNINIT(merge_methodF4737, 3,arg_types_,othersF4736,merge_methodF4737);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),methods_);
  x_1601F4738 = T14;
  LOOP_208: {
    P a208_0;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1601F4738);
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1601F4738);
      mF4739 = T13;
      T6 = CALL1(1,VARREF(YgooSfunYfun_specs),mF4739);
      T7 = CALL1(1,VARREF(YgooSfunYfun_arity),mF4739);
      T5 = CALL3(1,VARREF(YevalSoptimizeYarguments_potentially_jointQ),arg_types_,T6,T7);
      if (T5 != YPfalse) {
        T10 = leading_sortedF4735;
        UF4740 = T10;
        T9 = CALL2(1,merge_methodF4737,mF4739,UF4740);
        T8 = leading_sortedF4735 = T9;
      } else {
      }
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1601F4738);
      a208_0 = T12;
      x_1601F4738 = a208_0;
      goto LOOP_208;
      T2 = T11;
    } else {
      T2 = YPfalse;
    }
  }
  T17 = leading_sortedF4735;
  T18 = BOXGET(othersF4736);
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
  P arg_typeF4752;
  P spec1F4751;
  P spec2F4750;
  P tmpF4749;
  P tmpF4748;
  P x_1603F4747;
  P x_1604F4746;
  P x_1605F4745;
  P follows_somewhereQF4744;
  P precedes_somewhereQF4743;
  P specs2F4742;
  P specs1F4741;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(arg_types_, 2);
  T37 = CALL1(1,VARREF(YgooSfunYfun_specs),m1_);
  specs1F4741 = T37;
  T36 = CALL1(1,VARREF(YgooSfunYfun_specs),m2_);
  specs2F4742 = T36;
  precedes_somewhereQF4743 = YPfalse;
  follows_somewhereQF4744 = YPfalse;
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),specs2F4742);
  x_1605F4745 = T27;
  T28 = CALL1(1,VARREF(YgooScolsScolYenum),specs1F4741);
  x_1604F4746 = T28;
  T29 = CALL1(1,VARREF(YgooScolsScolYenum),arg_types_);
  x_1603F4747 = T29;
  LOOP_209: {
    P a209_0,a209_1,a209_2;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1605F4745);
    tmpF4748 = T8;
    if (tmpF4748 != YPfalse) {
      T4 = tmpF4748;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1604F4746);
      tmpF4749 = T7;
      if (tmpF4749 != YPfalse) {
        T5 = tmpF4749;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1603F4747);
        T5 = T6;
      }
      T4 = T5;
    }
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_1605F4745);
      spec2F4750 = T26;
      T25 = CALL1(1,VARREF(YgooScolsScolYnow),x_1604F4746);
      spec1F4751 = T25;
      T24 = CALL1(1,VARREF(YgooScolsScolYnow),x_1603F4747);
      arg_typeF4752 = T24;
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),spec1F4751,spec2F4750);
      if (T9 != YPfalse) {
      } else {
        T11 = CALL3(1,VARREF(YevalSoptimizeYpreceding_specializerQ),spec1F4751,spec2F4750,arg_typeF4752);
        if (T11 != YPfalse) {
          T14 = CALL2(1,VARREF(YsubtypeQ),spec2F4750,spec1F4751);
          T13 = CALL1(1,VARREF(Ynot),T14);
          if (T13 != YPfalse) {
            T15 = precedes_somewhereQF4743 = YPtrue;
            T12 = T15;
          } else {
            T12 = YPfalse;
          }
          T10 = T12;
        } else {
          T17 = CALL3(1,VARREF(YevalSoptimizeYpreceding_specializerQ),spec2F4750,spec1F4751,arg_typeF4752);
          if (T17 != YPfalse) {
            T18 = follows_somewhereQF4744 = YPtrue;
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
      T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1605F4745);
      T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1604F4746);
      T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1603F4747);
      a209_0 = T21;
      a209_1 = T22;
      a209_2 = T23;
      x_1605F4745 = a209_0;
      x_1604F4746 = a209_1;
      x_1603F4747 = a209_2;
      goto LOOP_209;
      T2 = T20;
    } else {
      T2 = YPfalse;
    }
  }
  T31 = precedes_somewhereQF4743;
  if (T31 != YPfalse) {
    T33 = follows_somewhereQF4744;
    if (T33 != YPfalse) {
      T32 = VARREF(YevalSoptimizeYDmethods_unordered);
    } else {
      T32 = VARREF(YevalSoptimizeYDmethod1_precedes);
    }
    T30 = T32;
  } else {
    T35 = follows_somewhereQF4744;
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
  P tmpF4753;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T2 = CALL2(1,VARREF(YsubtypeQ),t1_,t2_);
  tmpF4753 = T2;
  if (tmpF4753 != YPfalse) {
    T0 = tmpF4753;
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
  P tmpF4754;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(s_, 0);
  ARG(t_, 1);
  T4 = CALL1(1,VARREF(Ynot),t_);
  tmpF4754 = T4;
  if (tmpF4754 != YPfalse) {
    T2 = tmpF4754;
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
  P funQF4755;
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
  funQF4755 = T12;
  if (funQF4755 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),funs_,funQF4755);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  if (T5 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYfunction_ref_count),funQF4755);
    T8 = CALL2(1,VARREF(YgooSlogYE),T9,YPint((P)1));
    if (T8 != YPfalse) {
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T11 = CALL1(1,VARREF(YevalSastYfunction_ref_count),funQF4755);
      T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
      CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T10,funQF4755);
      T7 = funQF4755;
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
  P bodyF4756;
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
  bodyF4756 = T8;
  T2 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
  if (T2 != YPfalse) {
    T4 = CALL2(1,VARREF(YisaQ),bodyF4756,VARREF(YevalSastYLloopG));
    T3 = CALL1(1,VARREF(Ynot),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
    CALL2(1,VARREF(YevalSastYloop_body_setter),bodyF4756,T5);
    T7 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
    T6 = CALL2(1,VARREF(YevalSastYfunction_body_setter),T7,o_);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ensure_loop_17) {
  P f_;
  P tmpF4758;
  P UF4757;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  T5 = CALL1(1,VARREF(YevalSastYfunction_loop),f_);
  UF4757 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfunction_loop),f_);
  tmpF4758 = T4;
  if (tmpF4758 != YPfalse) {
    T0 = tmpF4758;
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
  P loopF4763;
  P calleeF4762;
  P x_1608F4761;
  P x_1607F4760;
  P refF4759;
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
  refF4759 = T39;
  x_1607F4760 = refF4759;
  x_1608F4761 = VARREF(YisaQ);
  T1 = CALL2(1,x_1608F4761,x_1607F4760,VARREF(YevalSastYLlocal_referenceG));
  if (T1 != YPfalse) {
    T33 = CALL1(1,VARREF(YevalSastYreference_binding),refF4759);
    T32 = CALL1(1,VARREF(YevalSastYbinding_value),T33);
    calleeF4762 = T32;
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),calleeF4762,f_);
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
      loopF4763 = T13;
      T10 = CALL1(1,VARREF(YevalSastYfunction_ref_count),f_);
      T9 = CALL2(1,VARREF(YgooSmathY_),T10,YPint((P)1));
      CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T9,f_);
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T12 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
      T11 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),loopF4763,VARREF(YevalSastYapplication_arguments),T12);
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
    T35 = CALL2(1,x_1608F4761,x_1607F4760,VARREF(YevalSastYLast_embodied_functionG));
    if (T35 != YPfalse) {
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T37 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
      T38 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
      T36 = CALL4(1,VARREF(YevalSastYprocess_closed_application),refF4759,T37,r_,T38);
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
  P resF4766;
  P new_funsF4765;
  P singleQF4764;
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
  singleQF4764 = T12;
  if (singleQF4764 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
    T10 = CALL1(1,VARREF(YgooSmacrosY1st),T11);
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,funs_);
    T8 = T9;
  } else {
    T8 = funs_;
  }
  new_funsF4765 = T8;
  T7 = CALLN(1,VARREF(YevalSoptimizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,new_funsF4765);
  resF4766 = T7;
  if (singleQF4764 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),new_funsF4765);
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
      T1 = resF4766;
    }
    T0 = T1;
  } else {
    T0 = resF4766;
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
  P resF4768;
  P sF4767;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  sF4767 = T8;
  T4 = CALL2(1,VARREF(YisaQ),o_,VARREF(YevalSastYLsequentialG));
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_21,2,r_,sF4767);
    T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,o_);
    T3 = T5;
  } else {
    T7 = CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,o_,r_,o_,YPfalse,sF4767,Ynil);
    T3 = T7;
  }
  resF4768 = T3;
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),sF4767);
  if (T1 != YPfalse) {
    T0 = resF4768;
  } else {
    T2 = FUNFAB(fun_22,1,r_);
    CALL2(1,VARREF(YgooSmacrosYdo),T2,sF4767);
    T0 = resF4768;
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

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSloc},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
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
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
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
  {"num-to-str", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
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
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"t?", &module_info_gooStypes, NULL},
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
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
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
  {"logn", &module_info_gooSmath, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
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
  {"free-environment", &module_info_evalSast, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
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
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
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
  {"elts", &module_info_gooScolsScol, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
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
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
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
  {"prop-value", &module_info_gooSclass, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
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
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"function-body", &module_info_evalSast, NULL},
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
  {"import-global!", &module_info_evalSmodule, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
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
  {"<locals>", &module_info_evalSast, NULL},
  {"new", &module_info_gooSboot, NULL},
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
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
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
  {"function-index-setter", &module_info_evalSast, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
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
  {"ast-walk", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"cond", &module_info_gooSmacros, NULL},
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
  {"subtype?", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
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
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
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
  {"unconstrained-type?", CVAR, &YevalSoptimizeYunconstrained_typeQ},
  {"<met-seq>", CVAR, &YevalSoptimizeYLmet_seqG},
  {"method-relationship", CVAR, &YevalSoptimizeYmethod_relationship},
  {"arguments-potentially-joint?", CVAR, &YevalSoptimizeYarguments_potentially_jointQ},
  {"do-call-analysis!", CVAR, &YevalSoptimizeYdo_call_analysisX},
  {"$methods-unordered", CVAR, &YevalSoptimizeYDmethods_unordered},
  {"type-equiv?", CVAR, &YevalSoptimizeYtype_equivQ},
  {"sorted-applicable-methods-using-types", CVAR, &YevalSoptimizeYsorted_applicable_methods_using_types},
  {"---main-0---", PVAR, NULL},
  {"analyze-calls", CVAR, &YevalSoptimizeYanalyze_calls},
  {"reopt-top!", CVAR, &YevalSoptimizeYreopt_topX},
  {"potentially-joint?", CVAR, &YevalSoptimizeYpotentially_jointQ},
  {"method-precedes?", CVAR, &YevalSoptimizeYmethod_precedesQ},
  {"ensure-loop", CVAR, &YevalSoptimizeYensure_loop},
  {"$method2-precedes", CVAR, &YevalSoptimizeYDmethod2_precedes},
  {"preceding-specializer?", CVAR, &YevalSoptimizeYpreceding_specializerQ},
  {"do-do-call-analysis!", CVAR, &YevalSoptimizeYdo_do_call_analysisX},
  {"$method1-precedes", CVAR, &YevalSoptimizeYDmethod1_precedes},
  {"<arg-seq>", CVAR, &YevalSoptimizeYLarg_seqG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"unconstrained-type?", NULL},
  {"type-equiv?", NULL},
  {"sorted-applicable-methods-using-types", NULL},
  {"analyze-calls", NULL},
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
