/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/typist");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/typist */

DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
DEF(YevalStypistYtype_infer_binding,"eval/typist","type-infer-binding");
DEF(YevalStypistYact_sorted,"eval/typist","act-sorted");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
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
DEF(YevalStypistYtype_state_env,"eval/typist","type-state-env");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
DEF(YevalStypistYmet_prop,"eval/typist","met-prop");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YevalStypistYact_test,"eval/typist","act-test");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
DEF(YevalStypistYact_off,"eval/typist","act-off");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalStypistYoptimize_method,"eval/typist","optimize-method");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
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
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
DEF(YevalStypistYtype_infer_all,"eval/typist","type-infer-all");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
DEF(YevalStypistYtype_known_met_call,"eval/typist","type-known-met-call");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalStypistYdync,"eval/typist","dync");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalStypistYsurgeryX,"eval/typist","surgery!");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
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
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YevalStypistYdo_type_infer,"eval/typist","do-type-infer");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YOallQ,"goo/boot","@all?");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalStypistYtype_union,"eval/typist","type-union");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YOpick,"goo/boot","@pick");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalStypistYtype_value,"eval/typist","type-value");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalStypistYtype_prop_access,"eval/typist","type-prop-access");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
DEF(YevalStypistYLinline_callG,"eval/typist","<inline-call>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalStypistYdynamic_compute_program,"eval/typist","dynamic-compute-program");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
DEF(YevalStypistYLknow_callG,"eval/typist","<know-call>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalStypistYact_val,"eval/typist","act-val");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
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
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalStypistYall_prop_offsets,"eval/typist","all-prop-offsets");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YOmap,"goo/boot","@map");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
DEF(YevalStypistYarity_checkQ,"eval/typist","arity-check?");
EXT(YOlit,"goo/boot","@lit");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalStypistYtype_intersection,"eval/typist","type-intersection");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YevalStypistYtype_infer_check,"eval/typist","type-infer-check");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YOcat2,"goo/boot","@cat2");
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
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
DEF(YevalStypistYLtype_stateG,"eval/typist","<type-state>");
DEF(YevalStypistYtype_state_acts,"eval/typist","type-state-acts");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
DEF(YevalStypistYLactG,"eval/typist","<act>");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YevalStypistYtypeAopt_exp,"eval/typist","type+opt-exp");
EXT(Ynew,"goo/boot","new");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YevalStypistYLfold_callG,"eval/typist","<fold-call>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YOrev,"goo/boot","@rev");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
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
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YOOEE,"goo/boot","@@==");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YevalStypistYprop_offset_in,"eval/typist","prop-offset-in");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
DEF(YevalStypistYdo_surgeryX,"eval/typist","do-surgery!");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
DEF(YevalStypistYLdispatchG,"eval/typist","<dispatch>");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YOtall2Q,"goo/boot","@tall2?");
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
DEF(YevalStypistYknown_callQ,"eval/typist","known-call?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ylst,"goo/boot","lst");
DEF(YevalStypistYLfoldG,"eval/typist","<fold>");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YevalStypistYcp,"eval/typist","cp");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
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
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSast_evalYbinding_value_or,"eval/ast-eval","binding-value-or");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalStypistYtype_exp,"eval/typist","type-exp");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
DEF(YevalStypistYLfold_ifG,"eval/typist","<fold-if>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YPtrue,"goo/boot","%true");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalStypistYLprop_accessG,"eval/typist","<prop-access>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalStypistYmem_act,"eval/typist","mem-act");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
DEF(YevalStypistYtype_infer,"eval/typist","type-infer");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
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
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_109);
DEFLIT(lit_91);
DEFLIT(lit_3);
DEFLIT(lit_81);
DEFLIT(lit_56);
DEFLIT(lit_30);
DEFLIT(lit_36);
DEFLIT(lit_45);
DEFLIT(lit_108);
DEFLIT(lit_115);
DEFLIT(lit_64);
DEFLIT(lit_0);
DEFLIT(lit_123);
DEFLIT(lit_41);
DEFLIT(lit_130);
DEFLIT(lit_50);
DEFLIT(lit_93);
DEFLIT(lit_61);
DEFLIT(lit_85);
DEFLIT(lit_76);
DEFLIT(lit_1);
DEFLIT(lit_32);
DEFLIT(lit_51);
DEFLIT(lit_6);
DEFLIT(lit_75);
DEFLIT(lit_124);
DEFLIT(lit_39);
DEFLIT(lit_17);
DEFLIT(lit_40);
DEFLIT(lit_34);
DEFLIT(lit_24);
DEFLIT(lit_73);
DEFLIT(lit_15);
DEFLIT(lit_129);
DEFLIT(lit_116);
DEFLIT(lit_48);
DEFLIT(lit_89);
DEFLIT(lit_11);
DEFLIT(lit_79);
DEFLIT(lit_120);
DEFLIT(lit_52);
DEFLIT(lit_102);
DEFLIT(lit_21);
DEFLIT(lit_97);
DEFLIT(lit_98);
DEFLIT(lit_99);
DEFLIT(lit_119);
DEFLIT(lit_126);
DEFLIT(lit_121);
DEFLIT(lit_86);
DEFLIT(lit_19);
DEFLIT(lit_65);
DEFLIT(lit_118);
DEFLIT(lit_66);
DEFLIT(lit_111);
DEFLIT(lit_88);
DEFLIT(lit_60);
DEFLIT(lit_16);
DEFLIT(lit_54);
DEFLIT(lit_35);
DEFLIT(lit_107);
DEFLIT(lit_44);
DEFLIT(lit_12);
DEFLIT(lit_96);
DEFLIT(lit_43);
DEFLIT(lit_2);
DEFLIT(lit_112);
DEFLIT(lit_114);
DEFLIT(lit_38);
DEFLIT(lit_63);
DEFLIT(lit_58);
DEFLIT(lit_53);
DEFLIT(lit_29);
DEFLIT(lit_72);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_106);
DEFLIT(lit_87);
DEFLIT(lit_92);
DEFLIT(lit_22);
DEFLIT(lit_104);
DEFLIT(lit_82);
DEFLIT(lit_103);
DEFLIT(lit_74);
DEFLIT(lit_110);
DEFLIT(lit_18);
DEFLIT(lit_47);
DEFLIT(lit_117);
DEFLIT(lit_31);
DEFLIT(lit_90);
DEFLIT(lit_4);
DEFLIT(lit_71);
DEFLIT(lit_80);
DEFLIT(lit_62);
DEFLIT(lit_83);
DEFLIT(lit_10);
DEFLIT(lit_78);
DEFLIT(lit_113);
DEFLIT(lit_95);
DEFLIT(lit_105);
DEFLIT(lit_67);
DEFLIT(lit_20);
DEFLIT(lit_55);
DEFLIT(lit_25);
DEFLIT(lit_23);
DEFLIT(lit_69);
DEFLIT(lit_59);
DEFLIT(lit_27);
DEFLIT(lit_70);
DEFLIT(lit_100);
DEFLIT(lit_125);
DEFLIT(lit_101);
DEFLIT(lit_8);
DEFLIT(lit_127);
DEFLIT(lit_128);
DEFLIT(lit_122);
DEFLIT(lit_28);
DEFLIT(lit_94);
DEFLIT(lit_77);
DEFLIT(lit_26);
DEFLIT(lit_46);
DEFLIT(lit_14);
DEFLIT(lit_84);
DEFLIT(lit_33);
DEFLIT(lit_42);
DEFLIT(lit_57);
DEFLIT(lit_68);
DEFLIT(lit_49);
DEFLIT(lit_13);
DEFLIT(lit_37);
DEFLIT(lit_7);

/* FUNCTIONS: */

LOCFOR(fun_type_union_0);
LOCFOR(fun_type_intersection_1);
LOCFOR(fun_type_state_acts_2);
LOCFOR(fun_3);
LOCFOR(fun_type_state_env_4);
LOCFOR(fun_act_sorted_5);
LOCFOR(fun_act_test_6);
LOCFOR(fun_act_val_7);
LOCFOR(fun_act_off_8);
LOCFOR(fun_act_val_9);
LOCFOR(fun_mem_act_10);
LOCFOR(fun_type_infer_check_11);
LOCFOR(fun_type_infer_all_12);
LOCFOR(fun_type_infer_13);
LOCFOR(fun_do_type_infer_14);
LOCFOR(fun_15);
LOCFOR(fun_do_type_infer_16);
LOCFOR(fun_do_type_infer_17);
LOCFOR(fun_do_type_infer_18);
LOCFOR(fun_type_infer_binding_19);
LOCFOR(fun_type_infer_binding_20);
LOCFOR(fun_type_value_21);
LOCFOR(fun_type_value_22);
LOCFOR(fun_type_infer_binding_23);
LOCFOR(fun_do_type_infer_24);
LOCFOR(fun_do_type_infer_25);
LOCFOR(fun_do_type_infer_26);
LOCFOR(fun_do_type_infer_27);
LOCFOR(fun_do_type_infer_28);
LOCFOR(fun_do_type_infer_29);
LOCFOR(fun_30);
LOCFOR(fun_do_type_infer_31);
LOCFOR(fun_do_type_infer_32);
LOCFOR(fun_subtypeQ_33);
LOCFOR(fun_34);
LOCFOR(fun_do_type_infer_35);
LOCFOR(fun_36);
LOCFOR(fun_recurse_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_do_type_infer_40);
LOCFOR(fun_41);
LOCFOR(fun_do_type_infer_42);
LOCFOR(fun_43);
LOCFOR(fun_do_type_infer_44);
LOCFOR(fun_arity_checkQ_45);
LOCFOR(fun_known_callQ_46);
LOCFOR(fun_type_known_met_call_47);
LOCFOR(fun_met_prop_48);
FUNFOR(YevalStypistYprop_offset_in);
LOCFOR(fun_50);
LOCFOR(fun_all_prop_offsets_51);
LOCFOR(fun_type_prop_access_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_do_type_infer_55);
LOCFOR(fun_do_type_infer_56);
LOCFOR(fun_do_type_infer_57);
LOCFOR(fun_do_type_infer_58);
LOCFOR(fun_surgeryX_59);
LOCFOR(fun_do_surgeryX_60);
LOCFOR(fun_do_surgeryX_61);
LOCFOR(fun_do_surgeryX_62);
LOCFOR(fun_do_surgeryX_63);
LOCFOR(fun_do_surgeryX_64);
LOCFOR(fun_do_surgeryX_65);
LOCFOR(fun_do_surgeryX_66);
LOCFOR(fun_surgeryX_67);
LOCFOR(fun_surgeryX_68);
FUNFOR(YevalStypistYtype_exp);
FUNFOR(YevalStypistYtypeAopt_exp);
LOCFOR(fun_dynamic_compute_program_71);
LOCFOR(fun_optimize_method_72);
extern P YevalStypistY___main_0___ ();
extern P YevalStypistY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_type_union_0) {
  P x_,y_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YsubtypeQ),x_,y_);
  if (T1 != YPfalse) {
    T0 = y_;
  } else {
    T3 = CALL2(1,VARREF(YsubtypeQ),y_,x_);
    if (T3 != YPfalse) {
      T2 = x_;
    } else {
      T5 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLunionG));
      if (T5 != YPfalse) {
        T8 = CALL2(1,VARREF(YisaQ),y_,VARREF(YLunionG));
        if (T8 != YPfalse) {
          T9 = CALL2(1,VARREF(YgooSmacrosYcat),x_,y_);
          T7 = T9;
        } else {
          T10 = CALL2(1,VARREF(YgooSmacrosYpair),y_,x_);
          T7 = T10;
        }
        T6 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T7);
        T4 = T6;
      } else {
        if (YPtrue != YPfalse) {
          T14 = CALL2(1,VARREF(YisaQ),y_,VARREF(YLunionG));
          if (T14 != YPfalse) {
            T15 = CALL2(1,VARREF(YgooSmacrosYpair),x_,y_);
            T13 = T15;
          } else {
            T16 = CALL2(1,VARREF(Ylst),x_,y_);
            T13 = T16;
          }
          T12 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T13);
          T11 = T12;
        } else {
          T11 = YPfalse;
        }
        T4 = T11;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_intersection_1) {
  P x_,y_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YsubtypeQ),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T3 = CALL2(1,VARREF(YsubtypeQ),y_,x_);
    if (T3 != YPfalse) {
      T2 = y_;
    } else {
      if (YPtrue != YPfalse) {
        T4 = VARREF(YLanyG);
      } else {
        T4 = YPfalse;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_state_acts_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYtype_state_acts));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_state_env_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYtype_state_env));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_act_sorted_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYact_sorted));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_act_test_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYact_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_act_val_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYact_val));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_act_off_8) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYact_off));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_act_val_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalStypistYact_val));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mem_act_10) {
  P s_,x_,act_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
  ARG(act_, 2);
  T1 = CALL1(1,VARREF(YevalStypistYtype_state_acts),s_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),act_,T1,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_check_11) {
  P a_,t_,s_;
  P typeF4770;
  P inferred_typeF4769;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(a_, 0);
  ARG(t_, 1);
  ARG(s_, 2);
  T4 = CALL2(1,VARREF(YevalStypistYtype_infer),a_,s_);
  inferred_typeF4769 = T4;
  T3 = CALL2(1,VARREF(YevalStypistYtype_infer),t_,s_);
  T2 = CALL1(1,VARREF(YevalStypistYtype_value),T3);
  typeF4770 = T2;
  CALL3(1,VARREF(YgooSioSwriteYpost),LITREF(lit_31),inferred_typeF4769,typeF4770);
  T1 = CALL2(1,VARREF(YsubtypeQ),inferred_typeF4769,typeF4770);
  if (T1 != YPfalse) {
    T0 = inferred_typeF4769;
  } else {
    T0 = typeF4770;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_all_12) {
  P x_,r_;
  P sF4771;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(r_, 1);
  T1 = CALL3(1,VARREF(Ynew),VARREF(YevalStypistYLtype_stateG),VARREF(YevalStypistYtype_state_env),r_);
  sF4771 = T1;
  CALL2(1,VARREF(YevalStypistYtype_infer),x_,sF4771);
  T0 = CALL1(1,VARREF(YevalStypistYtype_state_acts),sF4771);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_13) {
  P x_,s_;
  P resF4773;
  P UF4772;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_36),x_);
  T3 = CALL1(1,VARREF(YevalSastYprogram_type),x_);
  UF4772 = T3;
  T2 = CALL2(1,VARREF(YevalStypistYdo_type_infer),x_,s_);
  T1 = CALL2(1,VARREF(YevalStypistYtype_union),UF4772,T2);
  T0 = CALL2(1,VARREF(YevalSastYprogram_type_setter),T1,x_);
  resF4773 = T0;
  CALL3(1,VARREF(YgooSioSwriteYpost),LITREF(lit_37),x_,resF4773);
UNLINK_STACK();
  QRET(resF4773);
}

LOCCODEDEF(fun_do_type_infer_14) {
  P x_,s_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL3(1,VARREF(Yerror),LITREF(lit_40),T1,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_16) {
  P x_,s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T0 = FUNFAB(fun_15,1,s_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,x_);
  T2 = CALL1(1,VARREF(YgooSmacrosYlast),x_);
  T1 = CALL1(1,VARREF(YevalSastYprogram_type),T2);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_do_type_infer_17) {
  P x_,s_;
  P x_1610F4775;
  P x_1609F4774;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T6 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
  x_1609F4774 = T6;
  x_1610F4775 = VARREF(YisaQ);
  T1 = CALL2(1,x_1610F4775,x_1609F4774,VARREF(YLlogG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
    T2 = CALL1(1,VARREF(YgooStypesYtE),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
    T4 = CALL1(1,VARREF(YgooSclassYclass_of),T5);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_18) {
  P x_,s_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T1 = CALL1(1,VARREF(YevalSastYassignment_form),x_);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),T1,s_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_binding_19) {
  P x_,s_;
  P tmpF4779;
  P x_1612F4778;
  P x_1611F4777;
  P valF4776;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T5 = CALL2(1,VARREF(YevalSast_evalYbinding_value_or),x_,YPfalse);
  valF4776 = T5;
  x_1611F4777 = valF4776;
  x_1612F4778 = VARREF(YisaQ);
  T3 = CALL2(1,x_1612F4778,x_1611F4777,VARREF(YLfunG));
  tmpF4779 = T3;
  if (tmpF4779 != YPfalse) {
    T1 = tmpF4779;
  } else {
    T2 = CALL2(1,x_1612F4778,x_1611F4777,VARREF(YLtypeG));
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooStypesYtE),valF4776);
    T0 = T4;
  } else {
    T0 = VARREF(YLanyG);
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_infer_binding_20) {
  P x_,s_;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_type_value_21) {
  P t_;
LINK_STACK();
  ARG(t_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

LOCCODEDEF(fun_type_value_22) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL1(1,VARREF(Ytype_object),t_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_infer_binding_23) {
  P x_,s_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T1 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),x_);
  if (T1 != YPfalse) {
    T0 = VARREF(YLanyG);
  } else {
    T3 = CALL1(1,VARREF(YevalSastYbinding_value),x_);
    if (T3 != YPfalse) {
      T5 = CALL1(1,VARREF(YevalSastYbinding_value),x_);
      T4 = CALL1(1,VARREF(YgooStypesYtE),T5);
      T2 = T4;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL1(1,VARREF(YevalSmoduleYbinding_inferred_type),x_);
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_24) {
  P x_,s_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),x_);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer_binding),T1,s_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_25) {
  P x_,s_;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
UNLINK_STACK();
  QRET(VARREF(YLlogG));
}

LOCCODEDEF(fun_do_type_infer_26) {
  P x_,s_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T0 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_27) {
  P x_,s_;
  P bF4781;
  P x_1613F4780;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T10 = CALL1(1,VARREF(YevalSastYfunction_bindings),x_);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
  x_1613F4780 = T9;
  LOOP_210: {
    P a210_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1613F4780);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1613F4780);
      bF4781 = T8;
      T5 = CALL1(1,VARREF(YevalSmoduleYbinding_type),bF4781);
      T4 = CALL2(1,VARREF(YevalStypistYtype_infer),T5,s_);
      T3 = CALL1(1,VARREF(YevalStypistYtype_value),T4);
      CALL2(1,VARREF(YevalSmoduleYbinding_inferred_type_setter),T3,bF4781);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1613F4780);
      a210_0 = T7;
      x_1613F4780 = a210_0;
      goto LOOP_210;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
  T11 = CALL1(1,VARREF(YevalSastYfunction_body),x_);
  CALL2(1,VARREF(YevalStypistYtype_infer),T11,s_);
UNLINK_STACK();
  QRET(VARREF(YLmetG));
}

LOCCODEDEF(fun_do_type_infer_28) {
  P x_,s_;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
UNLINK_STACK();
  QRET(VARREF(YLgenG));
}

LOCCODEDEF(fun_do_type_infer_29) {
  P x_,s_;
  P test_typeF4782;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T20 = CALL1(1,VARREF(YevalSastYalternative_condition),x_);
  T19 = CALL2(1,VARREF(YevalStypistYtype_infer),T20,s_);
  test_typeF4782 = T19;
  T2 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T1 = CALL2(1,VARREF(YevalSoptimizeYtype_equivQ),test_typeF4782,T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(YevalStypistYLfold_ifG),VARREF(YevalStypistYact_test),YPfalse);
    CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T3);
    T5 = CALL1(1,VARREF(YevalSastYalternative_alternant),x_);
    T4 = CALL2(1,VARREF(YevalStypistYtype_infer),T5,s_);
    T0 = T4;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
    T8 = CALL2(1,VARREF(YevalSoptimizeYpotentially_jointQ),test_typeF4782,T9);
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(YevalStypistYLfold_ifG),VARREF(YevalStypistYact_test),YPtrue);
      CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T10);
      T12 = CALL1(1,VARREF(YevalSastYalternative_consequent),x_);
      T11 = CALL2(1,VARREF(YevalStypistYtype_infer),T12,s_);
      T6 = T11;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL1(1,VARREF(YevalSastYalternative_consequent),x_);
        T15 = CALL2(1,VARREF(YevalStypistYtype_infer),T16,s_);
        T18 = CALL1(1,VARREF(YevalSastYalternative_alternant),x_);
        T17 = CALL2(1,VARREF(YevalStypistYtype_infer),T18,s_);
        T14 = CALL2(1,VARREF(YevalStypistYtype_union),T15,T17);
        T13 = T14;
      } else {
        T13 = YPfalse;
      }
      T6 = T13;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_30) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_31) {
  P x_,s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T0 = FUNFAB(fun_30,1,s_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,x_);
  T2 = CALL1(1,VARREF(YgooSmacrosYlast),x_);
  T1 = CALL2(1,VARREF(YevalStypistYtype_infer),T2,s_);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_do_type_infer_32) {
  P x_,s_;
  P bindingF4790;
  P typeF4789;
  P argF4788;
  P tmpF4787;
  P tmpF4786;
  P x_1615F4785;
  P x_1616F4784;
  P x_1617F4783;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T20 = CALL1(1,VARREF(YevalSastYfix_let_arguments),x_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_1617F4783 = T19;
  T22 = CALL1(1,VARREF(YevalSastYfix_let_types),x_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1616F4784 = T21;
  T24 = CALL1(1,VARREF(YevalSastYfix_let_bindings),x_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1615F4785 = T23;
  LOOP_211: {
    P a211_0,a211_1,a211_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1617F4783);
    tmpF4786 = T6;
    if (tmpF4786 != YPfalse) {
      T2 = tmpF4786;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1616F4784);
      tmpF4787 = T5;
      if (tmpF4787 != YPfalse) {
        T3 = tmpF4787;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1615F4785);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1617F4783);
      argF4788 = T18;
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1616F4784);
      typeF4789 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1615F4785);
      bindingF4790 = T16;
      T8 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF4790);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(YevalSmoduleYbinding_type),bindingF4790);
        T10 = CALL3(1,VARREF(YevalStypistYtype_infer_check),argF4788,T11,s_);
        T9 = CALL2(1,VARREF(YevalSmoduleYbinding_inferred_type_setter),T10,bindingF4790);
      } else {
      }
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1617F4783);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1616F4784);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1615F4785);
      a211_0 = T13;
      a211_1 = T14;
      a211_2 = T15;
      x_1617F4783 = a211_0;
      x_1616F4784 = a211_1;
      x_1615F4785 = a211_2;
      goto LOOP_211;
      T0 = T12;
    } else {
      T0 = YPfalse;
    }
  }
  T26 = CALL1(1,VARREF(YevalSastYfix_let_body),x_);
  T25 = CALL2(1,VARREF(YevalStypistYtype_infer),T26,s_);
UNLINK_STACK();
  QRET(T25);
}

LOCCODEDEF(fun_subtypeQ_33) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_34) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_35) {
  P x_,s_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T0 = FUNFAB(fun_34,1,s_);
  T1 = CALL1(1,VARREF(YevalSastYlocals_functions),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T3 = CALL1(1,VARREF(YevalSastYlocals_body),x_);
  T2 = CALL2(1,VARREF(YevalStypistYtype_infer),T3,s_);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_36) {
  P b_,a_;
  P UF4791;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  ARG(a_, 1);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_inferred_type),b_);
  UF4791 = T2;
  T1 = CALL2(1,VARREF(YevalStypistYtype_union),UF4791,a_);
  T0 = CALL2(1,VARREF(YevalSmoduleYbinding_inferred_type_setter),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurse_37) {
  P arg_types_;
  P new_param_typesF4793;
  P param_typesF4792;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(arg_types_, 0);
  T9 = CALL1(1,VARREF(YevalSastYloop_bindings),FREEREF(0));
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYbinding_inferred_type),T9);
  param_typesF4792 = T8;
  T6 = fun_36;
  T7 = CALL1(1,VARREF(YevalSastYloop_bindings),FREEREF(0));
  T5 = CALL3(1,VARREF(YgooSmacrosYmap2),T6,T7,arg_types_);
  new_param_typesF4793 = T5;
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_70),param_typesF4792);
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_71),arg_types_);
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_72),new_param_typesF4793);
  T1 = CALL3(1,VARREF(YgooStypesYall2Q),VARREF(YevalSoptimizeYtype_equivQ),param_typesF4792,new_param_typesF4793);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYprogram_type),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYloop_body),FREEREF(0));
    T3 = CALL2(1,VARREF(YevalStypistYtype_infer),T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_38) {
  P T0,T1,T2;
LINK_STACK();
  T0 = FUNFAB(fun_recurse_37,2,FREEREF(0),FREEREF(1));
  CALL2(1,VARREF(YevalSastYloop_continue_setter),T0,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYloop_body),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalStypistYtype_infer),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_39) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSastYloop_continue_setter),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_40) {
  P x_,s_;
  P x_1619F4794;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T3 = CALL1(1,VARREF(YevalSastYloop_continue),x_);
  x_1619F4794 = T3;
  T1 = FUNFAB(fun_38,2,x_,s_);
  T2 = FUNFAB(fun_39,2,x_1619F4794,x_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_41) {
  P a_,b_;
  P T0,T1;
LINK_STACK();
  ARG(a_, 0);
  ARG(b_, 1);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_type),b_);
  T0 = CALL3(1,VARREF(YevalStypistYtype_infer_check),a_,T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_42) {
  P x_,s_;
  P loopF4795;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T6 = CALL1(1,VARREF(YevalSastYapplication_loop),x_);
  loopF4795 = T6;
  T5 = CALL1(1,VARREF(YevalSastYloop_continue),loopF4795);
  T2 = FUNFAB(fun_41,1,s_);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  T4 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF4795);
  T1 = CALL3(1,VARREF(YgooSmacrosYmap2),T2,T3,T4);
  T0 = CALL1(1,T5,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_43) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_44) {
  P x_,s_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T0 = FUNFAB(fun_43,1,s_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_arity_checkQ_45) {
  P naryQ_,arity_,x_,s_;
  P lenF4796;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(naryQ_, 0);
  ARG(arity_, 1);
  ARG(x_, 2);
  ARG(s_, 3);
  T4 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  lenF4796 = T3;
  if (naryQ_ != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmagYGE),lenF4796,arity_);
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSlogYE),lenF4796,arity_);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_known_callQ_46) {
  P naryQ_,arity_,arg_types_,fun_types_,x_,s_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(naryQ_, 0);
  ARG(arity_, 1);
  ARG(arg_types_, 2);
  ARG(fun_types_, 3);
  ARG(x_, 4);
  ARG(s_, 5);
  T2 = CALL4(1,VARREF(YevalStypistYarity_checkQ),naryQ_,arity_,x_,s_);
  if (T2 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooStypesYall2Q),VARREF(YsubtypeQ),arg_types_,fun_types_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Ynew),VARREF(YevalStypistYLknow_callG));
    CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T4);
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_known_met_call_47) {
  P x_,f_,nms_,s_;
  P cF4799;
  P fiF4798;
  P rF4797;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
  ARG(nms_, 2);
  ARG(s_, 3);
  T1 = CALL1(1,VARREF(YgooSfunYfun_inlineableQ),f_);
  if (T1 != YPfalse) {
    T13 = CALL1(1,VARREF(YevalStypistYtype_state_env),s_);
    rF4797 = T13;
    T11 = CALL1(1,VARREF(YgooSfunYfun_src),f_);
    T10 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T11);
    T12 = CALL1(1,VARREF(YevalStypistYtype_state_env),s_);
    T9 = CALL2(1,VARREF(YevalStypistYdynamic_compute_program),T10,T12);
    fiF4798 = T9;
    T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
    T8 = CALL1(1,VARREF(YevalSastYapplication_tailQ),x_);
    T6 = CALL4(1,VARREF(YevalSastYprocess_closed_application),fiF4798,T7,rF4797,T8);
    cF4799 = T6;
    T2 = CALL3(1,VARREF(Ynew),VARREF(YevalStypistYLinline_callG),VARREF(YevalStypistYact_val),cF4799);
    CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T2);
    T4 = CALL2(1,VARREF(YevalStypistYtype_infer),cF4799,s_);
    T5 = CALL1(1,VARREF(YgooSfunYfun_val),f_);
    T3 = CALL2(1,VARREF(YevalStypistYtype_intersection),T4,T5);
    T0 = T3;
  } else {
    T14 = CALL1(1,VARREF(Ynew),VARREF(YevalStypistYLknow_callG));
    CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T14);
    T15 = CALL1(1,VARREF(YgooSfunYfun_val),f_);
    T0 = T15;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_met_prop_48) {
  P m_;
  P xF4800;
  P T0;
LINK_STACK();
  ARG(m_, 0);
  xF4800 = m_;
  T0 = (P)YPprop_elt(xF4800,(P)3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalStypistYprop_offset_in) {
  P t_,p_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  ARG(p_, 1);
  T1 = CALL1(1,VARREF(Yclass_props),t_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYpos),T1,p_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_50) {
  P U1_;
  P T0,T1;
LINK_STACK();
  ARG(U1_, 0);
  T1 = CALL2(1,VARREF(YevalStypistYprop_offset_in),U1_,FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_all_prop_offsets_51) {
  P t_,p_;
  P offF4801;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(t_, 0);
  ARG(p_, 1);
  T4 = CALL2(1,VARREF(YevalStypistYprop_offset_in),t_,p_);
  offF4801 = T4;
  T2 = FUNFAB(fun_50,2,p_,offF4801);
  T3 = CALL1(1,VARREF(Yclass_children),t_);
  T1 = CALL2(1,VARREF(YgooScolsScolYallQ),T2,T3);
  if (T1 != YPfalse) {
    T0 = offF4801;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_prop_access_52) {
  P x_,g_,m_,s_;
  P offF4805;
  P typeF4804;
  P propF4803;
  P argsF4802;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(x_, 0);
  ARG(g_, 1);
  ARG(m_, 2);
  ARG(s_, 3);
  CALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_92));
  T13 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  argsF4802 = T13;
  T12 = CALL1(1,VARREF(YevalStypistYmet_prop),m_);
  propF4803 = T12;
  T9 = CALL1(1,VARREF(YgooStypesYlen),argsF4802);
  T8 = CALL2(1,VARREF(YgooSlogYE),T9,YPint((P)1));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),argsF4802,YPint((P)0));
    T7 = T10;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),argsF4802,YPint((P)1));
    T7 = T11;
  }
  T6 = CALL2(1,VARREF(YevalStypistYtype_infer),T7,s_);
  typeF4804 = T6;
  T5 = CALL2(1,VARREF(YevalStypistYall_prop_offsets),typeF4804,propF4803);
  offF4805 = T5;
  if (offF4805 != YPfalse) {
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_93),offF4805);
    T1 = CALL3(1,VARREF(Ynew),VARREF(YevalStypistYLprop_accessG),VARREF(YevalStypistYact_off),offF4805);
    T0 = CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T1);
  } else {
    T3 = CALL1(1,VARREF(Ynew),VARREF(YevalStypistYLknow_callG));
    T2 = CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T3);
  }
  T4 = CALL1(1,VARREF(Yprop_type),propF4803);
UNLINK_STACK();
  RET(T4);
}

LOCCODEDEF(fun_53) {
  P U1_;
  P T0;
LINK_STACK();
  ARG(U1_, 0);
  T0 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_54) {
  P U1_;
  P T0,T1;
LINK_STACK();
  ARG(U1_, 0);
  T1 = CALL2(1,VARREF(YevalStypistYtype_infer),U1_,FREEREF(0));
  T0 = CALL1(1,VARREF(YevalStypistYtype_value),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_55) {
  P x_,s_;
  P fun_typesF4816;
  P tmpF4815;
  P othersF4814;
  P sortedF4813;
  P tup36F4812;
  P x_1621F4811;
  P x_1620F4810;
  P fF4809;
  P fun_typeF4808;
  P fnF4807;
  P arg_typesF4806;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  T56 = FUNFAB(fun_53,1,s_);
  T57 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
  T55 = CALL2(1,VARREF(YgooSmacrosYmap),T56,T57);
  arg_typesF4806 = T55;
  T54 = CALL1(1,VARREF(YevalSastYapplication_function),x_);
  fnF4807 = T54;
  T53 = CALL2(1,VARREF(YevalStypistYtype_infer),fnF4807,s_);
  fun_typeF4808 = T53;
  T1 = CALL2(1,VARREF(YisaQ),fun_typeF4808,VARREF(YLsingletonG));
  if (T1 != YPfalse) {
    T52 = CALL1(1,VARREF(Ytype_object),fun_typeF4808);
    fF4809 = T52;
    x_1620F4810 = fF4809;
    x_1621F4811 = VARREF(YisaQ);
    T3 = CALL2(1,x_1621F4811,x_1620F4810,VARREF(YLgenG));
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSfunYfun_naryQ),fF4809);
      T7 = CALL1(1,VARREF(YgooSfunYfun_arity),fF4809);
      T5 = CALL4(1,VARREF(YevalStypistYarity_checkQ),T6,T7,x_,s_);
      if (T5 != YPfalse) {
        T29 = CALL1(1,VARREF(Yfun_mets),fF4809);
        T28 = CALL2(1,VARREF(YevalSoptimizeYsorted_applicable_methods_using_types),T29,arg_typesF4806);
        tup36F4812 = T28;
        T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F4812,YPint((P)0));
        sortedF4813 = T27;
        T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F4812,YPint((P)1));
        othersF4814 = T26;
        CALL5(1,VARREF(YgooSioSwriteYpost),LITREF(lit_96),fF4809,arg_typesF4806,sortedF4813,othersF4814);
        T12 = CALL1(1,VARREF(YgooSmacrosYnulQ),sortedF4813);
        tmpF4815 = T12;
        if (tmpF4815 != YPfalse) {
          T9 = tmpF4815;
        } else {
          T11 = CALL1(1,VARREF(YgooSmacrosYnulQ),othersF4814);
          T10 = CALL1(1,VARREF(Ynot),T11);
          T9 = T10;
        }
        if (T9 != YPfalse) {
          T13 = CALL1(1,VARREF(Ynew),VARREF(YevalStypistYLknow_callG));
          CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T13);
          T14 = CALL1(1,VARREF(YgooSfunYfun_val),fF4809);
          T8 = T14;
        } else {
          T18 = CALL1(1,VARREF(Yhead),sortedF4813);
          T17 = CALL1(1,VARREF(YevalStypistYmet_prop),T18);
          if (T17 != YPfalse) {
            T20 = CALL1(1,VARREF(Ytail),sortedF4813);
            T19 = CALL1(1,VARREF(YgooSmacrosYnulQ),T20);
            T16 = T19;
          } else {
            T16 = YPfalse;
          }
          if (T16 != YPfalse) {
            T22 = CALL1(1,VARREF(Yhead),sortedF4813);
            T21 = CALL4(1,VARREF(YevalStypistYtype_prop_access),x_,fF4809,T22,s_);
            T15 = T21;
          } else {
            CALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_97));
            T24 = CALL1(1,VARREF(Yhead),sortedF4813);
            T25 = CALL1(1,VARREF(Ytail),sortedF4813);
            T23 = CALL4(1,VARREF(YevalStypistYtype_known_met_call),x_,T24,T25,s_);
            T15 = T23;
          }
          T8 = T15;
        }
        T4 = T8;
      } else {
        T30 = CALL1(1,VARREF(YgooSfunYfun_val),fF4809);
        T4 = T30;
      }
      T2 = T4;
    } else {
      T32 = CALL2(1,x_1621F4811,x_1620F4810,VARREF(YevalSastYLast_methodG));
      if (T32 != YPfalse) {
        T42 = FUNFAB(fun_54,1,s_);
        T43 = CALL1(1,VARREF(YevalSastYfunction_specs),fF4809);
        T41 = CALL2(1,VARREF(YgooSmacrosYmap),T42,T43);
        fun_typesF4816 = T41;
        T35 = CALL1(1,VARREF(YevalSastYfunction_naryQ),fF4809);
        T36 = CALL1(1,VARREF(YevalSastYfunction_arity),fF4809);
        T34 = CALLN(1,VARREF(YevalStypistYknown_callQ),6,T35,T36,arg_typesF4806,fun_typesF4816,x_,s_);
        if (T34 != YPfalse) {
          T37 = CALL1(1,VARREF(Ynew),VARREF(YevalStypistYLknow_callG));
          CALL3(1,VARREF(YevalStypistYmem_act),s_,x_,T37);
          T40 = CALL1(1,VARREF(YevalSastYfunction_value),fF4809);
          T39 = CALL2(1,VARREF(YevalStypistYtype_infer),T40,s_);
          T38 = CALL1(1,VARREF(YevalStypistYtype_value),T39);
          T33 = T38;
        } else {
          T33 = VARREF(YLanyG);
        }
        T31 = T33;
      } else {
        T45 = CALL2(1,x_1621F4811,x_1620F4810,VARREF(YLfunG));
        if (T45 != YPfalse) {
          T48 = CALL1(1,VARREF(YgooSfunYfun_naryQ),fF4809);
          T49 = CALL1(1,VARREF(YgooSfunYfun_arity),fF4809);
          T50 = CALL1(1,VARREF(YgooSfunYfun_specs),fF4809);
          T47 = CALLN(1,VARREF(YevalStypistYknown_callQ),6,T48,T49,arg_typesF4806,T50,x_,s_);
          if (T47 != YPfalse) {
            T51 = CALL4(1,VARREF(YevalStypistYtype_known_met_call),x_,fF4809,Ynil,s_);
            T46 = T51;
          } else {
            T46 = VARREF(YLanyG);
          }
          T44 = T46;
        } else {
          T44 = VARREF(YLanyG);
        }
        T31 = T44;
      }
      T2 = T31;
    }
    T0 = T2;
  } else {
    T0 = VARREF(YLanyG);
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_type_infer_56) {
  P x_,s_;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_do_type_infer_57) {
  P x_,s_;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_do_type_infer_58) {
  P x_,s_;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_surgeryX_59) {
  P o_,acts_,r_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(acts_, 1);
  ARG(r_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalStypistYsurgeryX),o_,acts_,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_surgeryX_60) {
  P o_,act_,r_;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_do_surgeryX_61) {
  P o_,act_,r_;
  P metsF4817;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  T7 = CALL1(1,VARREF(YevalStypistYact_sorted),act_);
  metsF4817 = T7;
  T1 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
  T3 = CALL1(1,VARREF(Yhead),metsF4817);
  T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),T3);
  T5 = CALL1(1,VARREF(Ytail),metsF4817);
  T4 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),T5);
  T6 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLmethod_applicationG),VARREF(YevalSastYapplication_arguments),T1,VARREF(YevalSastYapplication_function),T2,VARREF(YevalSastYapplication_next_methods),T4,VARREF(YevalSastYapplication_tailQ),T6);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_surgeryX_62) {
  P o_,act_,r_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalStypistYact_val),act_);
  T2 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
  T0 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),T1,r_,YPtrue,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_surgeryX_63) {
  P o_,act_,r_;
  P argsF4818;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
  argsF4818 = T8;
  T3 = CALL1(1,VARREF(YgooStypesYlen),argsF4818);
  T2 = CALL2(1,VARREF(YgooSlogYE),T3,YPint((P)2));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
    T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,argsF4818,LITREF(lit_110));
    T1 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
    T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,argsF4818,LITREF(lit_110));
    T1 = T6;
  }
  T0 = CALL2(1,VARREF(YevalStypistYdynamic_compute_program),T1,r_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_surgeryX_64) {
  P o_,act_,r_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  T0 = CALL1(1,VARREF(YevalStypistYact_val),act_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_surgeryX_65) {
  P o_,act_,r_;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  CALL2(1,VARREF(YevalSastYapplication_knownQ_setter),YPtrue,o_);
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_do_surgeryX_66) {
  P o_,act_,r_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  ARG(act_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalStypistYact_test),act_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSastYalternative_consequent),o_);
    T0 = T2;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYalternative_alternant),o_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_surgeryX_67) {
  P o_,acts_,r_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(acts_, 1);
  ARG(r_, 2);
  CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_116),acts_);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),acts_,o_,YPfalse);
  CALL3(1,VARREF(YgooSioSwriteYpost),LITREF(lit_117),o_,T0);
  CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalStypistYsurgeryX),o_,acts_,r_);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),acts_,o_,YPfalse);
  T1 = CALL3(1,VARREF(YevalStypistYdo_surgeryX),o_,T2,r_);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_surgeryX_68) {
  P o_,acts_,r_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(acts_, 1);
  ARG(r_, 2);
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),acts_,o_,YPfalse);
  T0 = CALL3(1,VARREF(YevalStypistYdo_surgeryX),o_,T1,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStypistYtype_exp) {
  P x_;
  P astF4820;
  P rF4819;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),LITREF(lit_121));
  rF4819 = T1;
  T0 = CALL2(1,VARREF(YevalStypistYcp),x_,rF4819);
  astF4820 = T0;
  CALL2(1,VARREF(YevalStypistYtype_infer_all),astF4820,rF4819);
UNLINK_STACK();
  QRET(astF4820);
}

FUNCODEDEF(YevalStypistYtypeAopt_exp) {
  P x_;
  P actsF4823;
  P astF4822;
  P rF4821;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),LITREF(lit_121));
  rF4821 = T3;
  T2 = CALL2(1,VARREF(YevalStypistYcp),x_,rF4821);
  astF4822 = T2;
  T1 = CALL2(1,VARREF(YevalStypistYtype_infer_all),astF4822,rF4821);
  actsF4823 = T1;
  T0 = CALL3(1,VARREF(YevalStypistYsurgeryX),astF4822,actsF4823,rF4821);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_dynamic_compute_program_71) {
  P exp_,env_;
  P lftF4827;
  P boxF4826;
  P anaF4825;
  P astF4824;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T3 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,YPtrue,YPfalse);
  astF4824 = T3;
  T2 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),astF4824,env_);
  anaF4825 = T2;
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF4825);
  boxF4826 = T1;
  T0 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF4826);
  lftF4827 = T0;
UNLINK_STACK();
  QRET(lftF4827);
}

LOCCODEDEF(fun_optimize_method_72) {
  P m_;
  P oastF4835;
  P actsF4834;
  P astF4833;
  P patchF4832;
  P rF4831;
  P modF4830;
  P srclF4829;
  P srcF4828;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(m_, 0);
  T18 = CALL1(1,VARREF(YgooSfunYfun_src),m_);
  T17 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T18);
  srcF4828 = T17;
  T16 = CALL1(1,VARREF(YgooSfunYfun_src_loc),m_);
  srclF4829 = T16;
  T15 = CALL1(1,VARREF(Ysrc_loc_file),srclF4829);
  T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T15);
  modF4830 = T14;
  T13 = CALL1(1,VARREF(YevalSmoduleYruntime_environment),modF4830);
  rF4831 = T13;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_128));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_129));
  T8 = CALL1(1,VARREF(Ylst),m_);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_110));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_130));
  T12 = CALL1(1,VARREF(Ylst),srcF4828);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_110));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T3 = CALL4(1,VARREF(YgooSmacrosYcat),T4,T5,T9,LITREF(lit_110));
  patchF4832 = T3;
  T2 = CALL2(1,VARREF(YevalStypistYdynamic_compute_program),patchF4832,rF4831);
  astF4833 = T2;
  T1 = CALL1(1,VARREF(YevalStypistYtype_infer_all),astF4833);
  actsF4834 = T1;
  T0 = CALL3(1,VARREF(YevalStypistYsurgeryX),astF4833,actsF4834,rF4831);
  oastF4835 = T0;
  CALL2(1,VARREF(YevalStypistYdync),oastF4835,rF4831);
UNLINK_STACK();
  QRET(oastF4835);
}

P YevalStypistY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
DEFCREGS();
  lit_0 = YPPsym((P)"type-union");
  lit_1 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_type_union_0 = YPfab_met(FUNCODEREF(fun_type_union_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(13),YPfalse);
  T2 = VARREF_OR(YevalStypistYtype_union,YPfalse);
  T3 = fun_type_union_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalStypistYtype_union,T1);
  lit_2 = YPPsym((P)"type-intersection");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLtypeG),Ynil);
  fun_type_intersection_1 = YPfab_met(FUNCODEREF(fun_type_intersection_1),T4,LITREF(lit_2),LITREF(lit_3),sloc(23),YPfalse);
  T6 = VARREF_OR(YevalStypistYtype_intersection,YPfalse);
  T7 = fun_type_intersection_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalStypistYtype_intersection,T5);
  lit_4 = YPPsym((P)"<type-state>");
  T9 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T8 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_4),T9);
  VARSET(YevalStypistYLtype_stateG,T8);
  lit_5 = YPPsym((P)"type-state-acts");
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_state_acts_2 = YPfab_met(FUNCODEREF(fun_type_state_acts_2),T10,LITREF(lit_5),LITREF(lit_6),sloc(30),YPfalse);
  T12 = VARREF_OR(YevalStypistYtype_state_acts,YPfalse);
  T13 = fun_type_state_acts_2;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalStypistYtype_state_acts,T11);
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T14,YPfalse,LITREF(lit_7),sloc(30),YPfalse);
  T15 = fun_3;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLtype_stateG),VARREF(YevalStypistYtype_state_acts),YPfalse,VARREF(YgooScolsScolYLtabG),T15);
  lit_8 = YPPsym((P)"type-state-env");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_state_env_4 = YPfab_met(FUNCODEREF(fun_type_state_env_4),T16,LITREF(lit_8),LITREF(lit_9),sloc(31),YPfalse);
  T18 = VARREF_OR(YevalStypistYtype_state_env,YPfalse);
  T19 = fun_type_state_env_4;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalStypistYtype_state_env,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLtype_stateG),VARREF(YevalStypistYtype_state_env),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"<act>");
  T21 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T20 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_10),T21);
  VARSET(YevalStypistYLactG,T20);
  lit_11 = YPPsym((P)"<dispatch>");
  T23 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLactG),Ynil);
  T22 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_11),T23);
  VARSET(YevalStypistYLdispatchG,T22);
  lit_12 = YPPsym((P)"act-sorted");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLdispatchG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_act_sorted_5 = YPfab_met(FUNCODEREF(fun_act_sorted_5),T24,LITREF(lit_12),LITREF(lit_13),sloc(36),YPfalse);
  T26 = VARREF_OR(YevalStypistYact_sorted,YPfalse);
  T27 = fun_act_sorted_5;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalStypistYact_sorted,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLdispatchG),VARREF(YevalStypistYact_sorted),YPfalse,VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"<know-call>");
  T29 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLactG),Ynil);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T29);
  VARSET(YevalStypistYLknow_callG,T28);
  lit_15 = YPPsym((P)"<fold>");
  T31 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLactG),Ynil);
  T30 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_15),T31);
  VARSET(YevalStypistYLfoldG,T30);
  lit_16 = YPPsym((P)"<fold-if>");
  T33 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLfoldG),Ynil);
  T32 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_16),T33);
  VARSET(YevalStypistYLfold_ifG,T32);
  lit_17 = YPPsym((P)"act-test");
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLfold_ifG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_act_test_6 = YPfab_met(FUNCODEREF(fun_act_test_6),T34,LITREF(lit_17),LITREF(lit_18),sloc(43),YPfalse);
  T36 = VARREF_OR(YevalStypistYact_test,YPfalse);
  T37 = fun_act_test_6;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalStypistYact_test,T35);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLfold_ifG),VARREF(YevalStypistYact_test),YPfalse,VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_19 = YPPsym((P)"<fold-call>");
  T39 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLfoldG),Ynil);
  T38 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_19),T39);
  VARSET(YevalStypistYLfold_callG,T38);
  lit_20 = YPPsym((P)"act-val");
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLfold_callG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_act_val_7 = YPfab_met(FUNCODEREF(fun_act_val_7),T40,LITREF(lit_20),LITREF(lit_21),sloc(46),YPfalse);
  T42 = VARREF_OR(YevalStypistYact_val,YPfalse);
  T43 = fun_act_val_7;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalStypistYact_val,T41);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLfold_callG),VARREF(YevalStypistYact_val),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_22 = YPPsym((P)"<prop-access>");
  T45 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLfoldG),Ynil);
  T44 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_22),T45);
  VARSET(YevalStypistYLprop_accessG,T44);
  lit_23 = YPPsym((P)"act-off");
  lit_24 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLprop_accessG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_act_off_8 = YPfab_met(FUNCODEREF(fun_act_off_8),T46,LITREF(lit_23),LITREF(lit_24),sloc(49),YPfalse);
  T48 = VARREF_OR(YevalStypistYact_off,YPfalse);
  T49 = fun_act_off_8;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalStypistYact_off,T47);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLprop_accessG),VARREF(YevalStypistYact_off),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_25 = YPPsym((P)"<inline-call>");
  T51 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalStypistYLfoldG),Ynil);
  T50 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_25),T51);
  VARSET(YevalStypistYLinline_callG,T50);
  lit_26 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YevalStypistYLinline_callG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_act_val_9 = YPfab_met(FUNCODEREF(fun_act_val_9),T52,LITREF(lit_20),LITREF(lit_26),sloc(52),YPfalse);
  T54 = VARREF_OR(YevalStypistYact_val,YPfalse);
  T55 = fun_act_val_9;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalStypistYact_val,T53);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalStypistYLinline_callG),VARREF(YevalStypistYact_val),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"mem-act");
  lit_28 = YPPlist(3,YPPsym((P)"s"),YPPsym((P)"x"),YPPsym((P)"act"));
  T56 = YPfab_sig(YPPlist(3,VARREF(YevalStypistYLtype_stateG),VARREF(YLanyG),VARREF(YevalStypistYLactG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_mem_act_10 = YPfab_met(FUNCODEREF(fun_mem_act_10),T56,LITREF(lit_27),LITREF(lit_28),sloc(54),YPfalse);
  T58 = VARREF_OR(YevalStypistYmem_act,YPfalse);
  T59 = fun_mem_act_10;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalStypistYmem_act,T57);
  lit_29 = YPPsym((P)"type-infer-check");
  lit_30 = YPPlist(3,YPPsym((P)"a"),YPPsym((P)"t"),YPPsym((P)"s"));
  lit_31 = YPsb((P)"IT %= T %=\n");
  T60 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_type_infer_check_11 = YPfab_met(FUNCODEREF(fun_type_infer_check_11),T60,LITREF(lit_29),LITREF(lit_30),sloc(57),YPfalse);
  T62 = VARREF_OR(YevalStypistYtype_infer_check,YPfalse);
  T63 = fun_type_infer_check_11;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalStypistYtype_infer_check,T61);
  lit_32 = YPPsym((P)"type-infer-all");
  lit_33 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"r"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_infer_all_12 = YPfab_met(FUNCODEREF(fun_type_infer_all_12),T64,LITREF(lit_32),LITREF(lit_33),sloc(65),YPfalse);
  T66 = VARREF_OR(YevalStypistYtype_infer_all,YPfalse);
  T67 = fun_type_infer_all_12;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalStypistYtype_infer_all,T65);
  lit_34 = YPPsym((P)"type-infer");
  lit_35 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_36 = YPsb((P)"TYPING %= \n");
  lit_37 = YPsb((P)"TYPING %= => %t\n");
  T68 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_infer_13 = YPfab_met(FUNCODEREF(fun_type_infer_13),T68,LITREF(lit_34),LITREF(lit_35),sloc(70),YPfalse);
  T70 = VARREF_OR(YevalStypistYtype_infer,YPfalse);
  T71 = fun_type_infer_13;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalStypistYtype_infer,T69);
  lit_38 = YPPsym((P)"do-type-infer");
  lit_39 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_40 = YPsb((P)"NYI %t: %=");
  T72 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_14 = YPfab_met(FUNCODEREF(fun_do_type_infer_14),T72,LITREF(lit_38),LITREF(lit_39),sloc(76),YPfalse);
  T74 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T75 = fun_do_type_infer_14;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalStypistYdo_type_infer,T73);
  lit_41 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_42 = YPPlist(1,YPPsym((P)"_1"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T77,YPfalse,LITREF(lit_42),sloc(80),YPfalse);
  T76 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_16 = YPfab_met(FUNCODEREF(fun_do_type_infer_16),T76,LITREF(lit_38),LITREF(lit_41),sloc(79),YPfalse);
  T79 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T80 = fun_do_type_infer_16;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalStypistYdo_type_infer,T78);
  lit_43 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T81 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_17 = YPfab_met(FUNCODEREF(fun_do_type_infer_17),T81,LITREF(lit_38),LITREF(lit_43),sloc(83),YPfalse);
  T83 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T84 = fun_do_type_infer_17;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YevalStypistYdo_type_infer,T82);
  lit_44 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLassignmentG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_18 = YPfab_met(FUNCODEREF(fun_do_type_infer_18),T85,LITREF(lit_38),LITREF(lit_44),sloc(88),YPfalse);
  T87 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T88 = fun_do_type_infer_18;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YevalStypistYdo_type_infer,T86);
  lit_45 = YPPsym((P)"type-infer-binding");
  lit_46 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T91 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T90 = fun_type_infer_binding_19 = YPfab_met(FUNCODEREF(fun_type_infer_binding_19),T91,LITREF(lit_45),LITREF(lit_46),sloc(91),YPfalse);
  T94 = VARREF_OR(YevalStypistYtype_infer_binding,YPfalse);
  T95 = fun_type_infer_binding_19;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  T92 = VARSET(YevalStypistYtype_infer_binding,T93);
  T89 = T92;
  return T89;
}

P YevalStypistY___main_1___() {
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
  P T176,T177,T178;
DEFCREGS();
  lit_47 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_infer_binding_20 = YPfab_met(FUNCODEREF(fun_type_infer_binding_20),T0,LITREF(lit_45),LITREF(lit_47),sloc(97),YPfalse);
  T2 = VARREF_OR(YevalStypistYtype_infer_binding,YPfalse);
  T3 = fun_type_infer_binding_20;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalStypistYtype_infer_binding,T1);
  lit_48 = YPPsym((P)"type-value");
  lit_49 = YPPlist(1,YPPsym((P)"t"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_type_value_21 = YPfab_met(FUNCODEREF(fun_type_value_21),T4,LITREF(lit_48),LITREF(lit_49),sloc(101),YPfalse);
  T6 = VARREF_OR(YevalStypistYtype_value,YPfalse);
  T7 = fun_type_value_21;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalStypistYtype_value,T5);
  lit_50 = YPPlist(1,YPPsym((P)"t"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_type_value_22 = YPfab_met(FUNCODEREF(fun_type_value_22),T8,LITREF(lit_48),LITREF(lit_50),sloc(104),YPfalse);
  T10 = VARREF_OR(YevalStypistYtype_value,YPfalse);
  T11 = fun_type_value_22;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalStypistYtype_value,T9);
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocal_bindingG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_infer_binding_23 = YPfab_met(FUNCODEREF(fun_type_infer_binding_23),T12,LITREF(lit_45),LITREF(lit_51),sloc(107),YPfalse);
  T14 = VARREF_OR(YevalStypistYtype_infer_binding,YPfalse);
  T15 = fun_type_infer_binding_23;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalStypistYtype_infer_binding,T13);
  lit_52 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLreal_referenceG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_24 = YPfab_met(FUNCODEREF(fun_do_type_infer_24),T16,LITREF(lit_38),LITREF(lit_52),sloc(116),YPfalse);
  T18 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T19 = fun_do_type_infer_24;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalStypistYdo_type_infer,T17);
  lit_53 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_25 = YPfab_met(FUNCODEREF(fun_do_type_infer_25),T20,LITREF(lit_38),LITREF(lit_53),sloc(119),YPfalse);
  T22 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T23 = fun_do_type_infer_25;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalStypistYdo_type_infer,T21);
  lit_54 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_26 = YPfab_met(FUNCODEREF(fun_do_type_infer_26),T24,LITREF(lit_38),LITREF(lit_54),sloc(122),YPfalse);
  T26 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T27 = fun_do_type_infer_26;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalStypistYdo_type_infer,T25);
  lit_55 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_27 = YPfab_met(FUNCODEREF(fun_do_type_infer_27),T28,LITREF(lit_38),LITREF(lit_55),sloc(125),YPfalse);
  T30 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T31 = fun_do_type_infer_27;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalStypistYdo_type_infer,T29);
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_28 = YPfab_met(FUNCODEREF(fun_do_type_infer_28),T32,LITREF(lit_38),LITREF(lit_56),sloc(133),YPfalse);
  T34 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T35 = fun_do_type_infer_28;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalStypistYdo_type_infer,T33);
  lit_57 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_29 = YPfab_met(FUNCODEREF(fun_do_type_infer_29),T36,LITREF(lit_38),LITREF(lit_57),sloc(136),YPfalse);
  T38 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T39 = fun_do_type_infer_29;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalStypistYdo_type_infer,T37);
  lit_58 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_59 = YPPlist(1,YPPsym((P)"_1"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T41,YPfalse,LITREF(lit_59),sloc(149),YPfalse);
  T40 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_31 = YPfab_met(FUNCODEREF(fun_do_type_infer_31),T40,LITREF(lit_38),LITREF(lit_58),sloc(148),YPfalse);
  T43 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T44 = fun_do_type_infer_31;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalStypistYdo_type_infer,T42);
  lit_60 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T45 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_32 = YPfab_met(FUNCODEREF(fun_do_type_infer_32),T45,LITREF(lit_38),LITREF(lit_60),sloc(152),YPfalse);
  T47 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T48 = fun_do_type_infer_32;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YevalStypistYdo_type_infer,T46);
  lit_61 = YPPsym((P)"subtype?");
  lit_62 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T49 = YPfab_sig(YPPlist(2,VARREF(YgooStypesYLbotG),VARREF(YgooStypesYLbotG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_33 = YPfab_met(FUNCODEREF(fun_subtypeQ_33),T49,LITREF(lit_61),LITREF(lit_62),sloc(164),YPfalse);
  T51 = VARREF_OR(YsubtypeQ,YPfalse);
  T52 = fun_subtypeQ_33;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YsubtypeQ,T50);
  lit_63 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_64 = YPPlist(1,YPPsym((P)"_1"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T54,YPfalse,LITREF(lit_64),sloc(167),YPfalse);
  T53 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_35 = YPfab_met(FUNCODEREF(fun_do_type_infer_35),T53,LITREF(lit_38),LITREF(lit_63),sloc(166),YPfalse);
  T56 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T57 = fun_do_type_infer_35;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalStypistYdo_type_infer,T55);
  lit_65 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_66 = Ynil;
  lit_67 = YPPsym((P)"recurse");
  lit_68 = YPPlist(1,YPPsym((P)"arg-types"));
  lit_69 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"a"));
  lit_70 = YPsb((P)"PARAM TYPES %=\n");
  lit_71 = YPsb((P)"ARGUM TYPES %=\n");
  lit_72 = YPsb((P)"NEW-PARAM TYPES %=\n");
  T62 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T62,YPfalse,LITREF(lit_69),YPfalse,YPfalse);
  T61 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recurse_37 = YPfab_met(FUNCODEREF(fun_recurse_37),T61,LITREF(lit_67),LITREF(lit_68),sloc(171),YPfalse);
  T60 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T60,YPfalse,LITREF(lit_66),sloc(183),YPfalse);
  T59 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T59,YPfalse,LITREF(lit_66),sloc(183),YPfalse);
  T58 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_40 = YPfab_met(FUNCODEREF(fun_do_type_infer_40),T58,LITREF(lit_38),LITREF(lit_65),sloc(170),YPfalse);
  T64 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T65 = fun_do_type_infer_40;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalStypistYdo_type_infer,T63);
  lit_73 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_74 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"b"));
  T67 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPfab_met(FUNCODEREF(fun_41),T67,YPfalse,LITREF(lit_74),sloc(189),YPfalse);
  T66 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloop_applicationG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_42 = YPfab_met(FUNCODEREF(fun_do_type_infer_42),T66,LITREF(lit_38),LITREF(lit_73),sloc(186),YPfalse);
  T69 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T70 = fun_do_type_infer_42;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalStypistYdo_type_infer,T68);
  lit_75 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_76 = YPPlist(1,YPPsym((P)"_1"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T72,YPfalse,LITREF(lit_76),sloc(194),YPfalse);
  T71 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_44 = YPfab_met(FUNCODEREF(fun_do_type_infer_44),T71,LITREF(lit_38),LITREF(lit_75),sloc(193),YPfalse);
  T74 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T75 = fun_do_type_infer_44;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalStypistYdo_type_infer,T73);
  lit_77 = YPPsym((P)"arity-check?");
  lit_78 = YPPlist(4,YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"x"),YPPsym((P)"s"));
  T76 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)4),VARREF(YLlogG),Ynil);
  fun_arity_checkQ_45 = YPfab_met(FUNCODEREF(fun_arity_checkQ_45),T76,LITREF(lit_77),LITREF(lit_78),sloc(197),YPfalse);
  T78 = VARREF_OR(YevalStypistYarity_checkQ,YPfalse);
  T79 = fun_arity_checkQ_45;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalStypistYarity_checkQ,T77);
  lit_79 = YPPsym((P)"known-call?");
  lit_80 = YPPlist(6,YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"arg-types"),YPPsym((P)"fun-types"),YPPsym((P)"x"),YPPsym((P)"s"));
  T80 = YPfab_sig(YPPlist(6,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)6),VARREF(YLlogG),Ynil);
  fun_known_callQ_46 = YPfab_met(FUNCODEREF(fun_known_callQ_46),T80,LITREF(lit_79),LITREF(lit_80),sloc(201),YPfalse);
  T82 = VARREF_OR(YevalStypistYknown_callQ,YPfalse);
  T83 = fun_known_callQ_46;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalStypistYknown_callQ,T81);
  lit_81 = YPPsym((P)"type-known-met-call");
  lit_82 = YPPlist(4,YPPsym((P)"x"),YPPsym((P)"f"),YPPsym((P)"nms"),YPPsym((P)"s"));
  T84 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLmetG),VARREF(YLlstG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)4),VARREF(YLtypeG),Ynil);
  fun_type_known_met_call_47 = YPfab_met(FUNCODEREF(fun_type_known_met_call_47),T84,LITREF(lit_81),LITREF(lit_82),sloc(209),YPfalse);
  T86 = VARREF_OR(YevalStypistYtype_known_met_call,YPfalse);
  T87 = fun_type_known_met_call_47;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalStypistYtype_known_met_call,T85);
  lit_83 = YPPsym((P)"met-prop");
  lit_84 = YPPlist(1,YPPsym((P)"m"));
  T89 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLpropG));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),T89,Ynil);
  fun_met_prop_48 = YPfab_met(FUNCODEREF(fun_met_prop_48),T88,LITREF(lit_83),LITREF(lit_84),sloc(221),YPfalse);
  T91 = VARREF_OR(YevalStypistYmet_prop,YPfalse);
  T92 = fun_met_prop_48;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YevalStypistYmet_prop,T90);
  lit_85 = YPPsym((P)"prop-offset-in");
  lit_86 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"p"));
  T94 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T93 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLpropG)),YPfalse,YPint((P)2),T94,Ynil);
  YevalStypistYprop_offset_in = YPfab_met(FUNCODEREF(YevalStypistYprop_offset_in),T93,LITREF(lit_85),LITREF(lit_86),sloc(224),YPfalse);
  T95 = YevalStypistYprop_offset_in;
  VARSET(YevalStypistYprop_offset_in,T95);
  lit_87 = YPPsym((P)"all-prop-offsets");
  lit_88 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"p"));
  lit_89 = YPPlist(1,YPPsym((P)"_1"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T98,YPfalse,LITREF(lit_89),sloc(229),YPfalse);
  T97 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLpropG)),YPfalse,YPint((P)2),T97,Ynil);
  fun_all_prop_offsets_51 = YPfab_met(FUNCODEREF(fun_all_prop_offsets_51),T96,LITREF(lit_87),LITREF(lit_88),sloc(227),YPfalse);
  T100 = VARREF_OR(YevalStypistYall_prop_offsets,YPfalse);
  T101 = fun_all_prop_offsets_51;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalStypistYall_prop_offsets,T99);
  lit_90 = YPPsym((P)"type-prop-access");
  lit_91 = YPPlist(4,YPPsym((P)"x"),YPPsym((P)"g"),YPPsym((P)"m"),YPPsym((P)"s"));
  lit_92 = YPsb((P)"TYPING PROP-ACCESS\n");
  lit_93 = YPsb((P)"CONST-PROP-ACCESS %d\n");
  T102 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLgenG),VARREF(YLmetG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)4),VARREF(YLtypeG),Ynil);
  fun_type_prop_access_52 = YPfab_met(FUNCODEREF(fun_type_prop_access_52),T102,LITREF(lit_90),LITREF(lit_91),sloc(231),YPfalse);
  T104 = VARREF_OR(YevalStypistYtype_prop_access,YPfalse);
  T105 = fun_type_prop_access_52;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalStypistYtype_prop_access,T103);
  lit_94 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_95 = YPPlist(1,YPPsym((P)"_1"));
  lit_96 = YPsb((P)"APP-METS %= %= %= %=\n");
  lit_97 = YPsb((P)"KNOWN MET CALL\n");
  lit_98 = YPPlist(1,YPPsym((P)"_1"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPfab_met(FUNCODEREF(fun_53),T108,YPfalse,LITREF(lit_95),sloc(245),YPfalse);
  T107 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T107,YPfalse,LITREF(lit_98),sloc(267),YPfalse);
  T106 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_55 = YPfab_met(FUNCODEREF(fun_do_type_infer_55),T106,LITREF(lit_38),LITREF(lit_94),sloc(244),YPfalse);
  T110 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T111 = fun_do_type_infer_55;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YevalStypistYdo_type_infer,T109);
  lit_99 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T112 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_56 = YPfab_met(FUNCODEREF(fun_do_type_infer_56),T112,LITREF(lit_38),LITREF(lit_99),sloc(283),YPfalse);
  T114 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T115 = fun_do_type_infer_56;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalStypistYdo_type_infer,T113);
  lit_100 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T116 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_57 = YPfab_met(FUNCODEREF(fun_do_type_infer_57),T116,LITREF(lit_38),LITREF(lit_100),sloc(286),YPfalse);
  T118 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T119 = fun_do_type_infer_57;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalStypistYdo_type_infer,T117);
  lit_101 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T120 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalStypistYLtype_stateG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_type_infer_58 = YPfab_met(FUNCODEREF(fun_do_type_infer_58),T120,LITREF(lit_38),LITREF(lit_101),sloc(289),YPfalse);
  T122 = VARREF_OR(YevalStypistYdo_type_infer,YPfalse);
  T123 = fun_do_type_infer_58;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YevalStypistYdo_type_infer,T121);
  lit_102 = YPPsym((P)"surgery!");
  lit_103 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"acts"),YPPsym((P)"r"));
  T124 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_surgeryX_59 = YPfab_met(FUNCODEREF(fun_surgeryX_59),T124,LITREF(lit_102),LITREF(lit_103),sloc(296),YPfalse);
  T126 = VARREF_OR(YevalStypistYsurgeryX,YPfalse);
  T127 = fun_surgeryX_59;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YevalStypistYsurgeryX,T125);
  lit_104 = YPPsym((P)"do-surgery!");
  lit_105 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T128 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_60 = YPfab_met(FUNCODEREF(fun_do_surgeryX_60),T128,LITREF(lit_104),LITREF(lit_105),sloc(299),YPfalse);
  T130 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T131 = fun_do_surgeryX_60;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalStypistYdo_surgeryX,T129);
  lit_106 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T132 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLdispatchG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_61 = YPfab_met(FUNCODEREF(fun_do_surgeryX_61),T132,LITREF(lit_104),LITREF(lit_106),sloc(301),YPfalse);
  T134 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T135 = fun_do_surgeryX_61;
  T133 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T134,T135);
  VARSET(YevalStypistYdo_surgeryX,T133);
  lit_107 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T136 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLfold_callG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_62 = YPfab_met(FUNCODEREF(fun_do_surgeryX_62),T136,LITREF(lit_104),LITREF(lit_107),sloc(309),YPfalse);
  T138 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T139 = fun_do_surgeryX_62;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YevalStypistYdo_surgeryX,T137);
  lit_108 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  lit_109 = YPPsym((P)"prop-value-at-setter");
  lit_110 = Ynil;
  lit_111 = YPPsym((P)"prop-value-at");
  T140 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLprop_accessG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_63 = YPfab_met(FUNCODEREF(fun_do_surgeryX_63),T140,LITREF(lit_104),LITREF(lit_108),sloc(312),YPfalse);
  T142 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T143 = fun_do_surgeryX_63;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalStypistYdo_surgeryX,T141);
  lit_112 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T144 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLinline_callG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_64 = YPfab_met(FUNCODEREF(fun_do_surgeryX_64),T144,LITREF(lit_104),LITREF(lit_112),sloc(320),YPfalse);
  T146 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T147 = fun_do_surgeryX_64;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalStypistYdo_surgeryX,T145);
  lit_113 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T148 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YevalStypistYLknow_callG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_65 = YPfab_met(FUNCODEREF(fun_do_surgeryX_65),T148,LITREF(lit_104),LITREF(lit_113),sloc(323),YPfalse);
  T150 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T151 = fun_do_surgeryX_65;
  T149 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T150,T151);
  VARSET(YevalStypistYdo_surgeryX,T149);
  lit_114 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"act"),YPPsym((P)"r"));
  T152 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLalternativeG),VARREF(YevalStypistYLfold_ifG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do_surgeryX_66 = YPfab_met(FUNCODEREF(fun_do_surgeryX_66),T152,LITREF(lit_104),LITREF(lit_114),sloc(327),YPfalse);
  T154 = VARREF_OR(YevalStypistYdo_surgeryX,YPfalse);
  T155 = fun_do_surgeryX_66;
  T153 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T154,T155);
  VARSET(YevalStypistYdo_surgeryX,T153);
  lit_115 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"acts"),YPPsym((P)"r"));
  lit_116 = YPsb((P)"ACTS %=\n");
  lit_117 = YPsb((P)"VISITING APP %= ACT %=\n");
  T156 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLregular_applicationG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_surgeryX_67 = YPfab_met(FUNCODEREF(fun_surgeryX_67),T156,LITREF(lit_102),LITREF(lit_115),sloc(332),YPfalse);
  T158 = VARREF_OR(YevalStypistYsurgeryX,YPfalse);
  T159 = fun_surgeryX_67;
  T157 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T158,T159);
  VARSET(YevalStypistYsurgeryX,T157);
  lit_118 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"acts"),YPPsym((P)"r"));
  T160 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLalternativeG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_surgeryX_68 = YPfab_met(FUNCODEREF(fun_surgeryX_68),T160,LITREF(lit_102),LITREF(lit_118),sloc(338),YPfalse);
  T162 = VARREF_OR(YevalStypistYsurgeryX,YPfalse);
  T163 = fun_surgeryX_68;
  T161 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T162,T163);
  VARSET(YevalStypistYsurgeryX,T161);
  VARSET(YevalStypistYcp,YPfalse);
  lit_119 = YPPsym((P)"type-exp");
  lit_120 = YPPlist(1,YPPsym((P)"x"));
  lit_121 = YPPsym((P)"eval/typist");
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStypistYtype_exp = YPfab_met(FUNCODEREF(YevalStypistYtype_exp),T164,LITREF(lit_119),LITREF(lit_120),sloc(345),YPfalse);
  T165 = YevalStypistYtype_exp;
  VARSET(YevalStypistYtype_exp,T165);
  lit_122 = YPPsym((P)"type+opt-exp");
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStypistYtypeAopt_exp = YPfab_met(FUNCODEREF(YevalStypistYtypeAopt_exp),T166,LITREF(lit_122),LITREF(lit_123),sloc(351),YPfalse);
  T167 = YevalStypistYtypeAopt_exp;
  VARSET(YevalStypistYtypeAopt_exp,T167);
  lit_124 = YPPsym((P)"dynamic-compute-program");
  lit_125 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T168 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_dynamic_compute_program_71 = YPfab_met(FUNCODEREF(fun_dynamic_compute_program_71),T168,LITREF(lit_124),LITREF(lit_125),sloc(361),YPfalse);
  T170 = VARREF_OR(YevalStypistYdynamic_compute_program,YPfalse);
  T171 = fun_dynamic_compute_program_71;
  T169 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T170,T171);
  VARSET(YevalStypistYdynamic_compute_program,T169);
  VARSET(YevalStypistYdync,YPfalse);
  lit_126 = YPPsym((P)"optimize-method");
  lit_127 = YPPlist(1,YPPsym((P)"m"));
  lit_128 = YPPsym((P)"set");
  lit_129 = YPPsym((P)"%gen-code");
  lit_130 = YPPsym((P)"%met-code");
  T174 = YPfab_sig(YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T173 = fun_optimize_method_72 = YPfab_met(FUNCODEREF(fun_optimize_method_72),T174,LITREF(lit_126),LITREF(lit_127),sloc(372),YPfalse);
  T177 = VARREF_OR(YevalStypistYoptimize_method,YPfalse);
  T178 = fun_optimize_method_72;
  T176 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T177,T178);
  T175 = VARSET(YevalStypistYoptimize_method,T176);
  T172 = T175;
  return T172;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_evalSast_eval;
extern MODULE_INFO module_info_evalSoptimize;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooScolsStab;
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
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSloc;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooStypes},
  {&module_info_evalSast},
  {&module_info_evalSast_linearize},
  {&module_info_evalSast_eval},
  {&module_info_evalSoptimize},
  {&module_info_gooSioSread},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"unconstrained-type?", &module_info_evalSoptimize, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"sorted-applicable-methods-using-types", &module_info_evalSoptimize, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%binding-value", &module_info_evalSast_eval, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"type-equiv?", &module_info_evalSoptimize, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%binding-value-setter", &module_info_evalSast_eval, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
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
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%binding-value-or", &module_info_evalSast_eval, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"%binding-value-of-setter", &module_info_evalSast_eval, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
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
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"analyze-calls", &module_info_evalSoptimize, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
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
  {"%vsp", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
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
  {"%met", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"potentially-joint?", &module_info_evalSoptimize, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
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
  {"%break", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
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
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%binding-value-or-of", &module_info_evalSast_eval, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"use", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"binding-value-or", &module_info_evalSast_eval, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%binding-value-of", &module_info_evalSast_eval, NULL},
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
  {"<bind-exit>", &module_info_evalSast, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
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
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"type-infer-binding", CVAR, &YevalStypistYtype_infer_binding},
  {"act-sorted", CVAR, &YevalStypistYact_sorted},
  {"type-state-env", CVAR, &YevalStypistYtype_state_env},
  {"met-prop", CVAR, &YevalStypistYmet_prop},
  {"act-test", CVAR, &YevalStypistYact_test},
  {"act-off", CVAR, &YevalStypistYact_off},
  {"optimize-method", CVAR, &YevalStypistYoptimize_method},
  {"type-infer-all", CVAR, &YevalStypistYtype_infer_all},
  {"type-known-met-call", CVAR, &YevalStypistYtype_known_met_call},
  {"dync", CVAR, &YevalStypistYdync},
  {"surgery!", CVAR, &YevalStypistYsurgeryX},
  {"do-type-infer", CVAR, &YevalStypistYdo_type_infer},
  {"type-union", CVAR, &YevalStypistYtype_union},
  {"type-value", CVAR, &YevalStypistYtype_value},
  {"type-prop-access", CVAR, &YevalStypistYtype_prop_access},
  {"<inline-call>", CVAR, &YevalStypistYLinline_callG},
  {"dynamic-compute-program", CVAR, &YevalStypistYdynamic_compute_program},
  {"<know-call>", CVAR, &YevalStypistYLknow_callG},
  {"act-val", CVAR, &YevalStypistYact_val},
  {"all-prop-offsets", CVAR, &YevalStypistYall_prop_offsets},
  {"arity-check?", CVAR, &YevalStypistYarity_checkQ},
  {"type-intersection", CVAR, &YevalStypistYtype_intersection},
  {"type-infer-check", CVAR, &YevalStypistYtype_infer_check},
  {"<type-state>", CVAR, &YevalStypistYLtype_stateG},
  {"type-state-acts", CVAR, &YevalStypistYtype_state_acts},
  {"<act>", CVAR, &YevalStypistYLactG},
  {"type+opt-exp", CVAR, &YevalStypistYtypeAopt_exp},
  {"<fold-call>", CVAR, &YevalStypistYLfold_callG},
  {"---main-1---", PVAR, NULL},
  {"prop-offset-in", CVAR, &YevalStypistYprop_offset_in},
  {"do-surgery!", CVAR, &YevalStypistYdo_surgeryX},
  {"<dispatch>", CVAR, &YevalStypistYLdispatchG},
  {"known-call?", CVAR, &YevalStypistYknown_callQ},
  {"<fold>", CVAR, &YevalStypistYLfoldG},
  {"cp", CVAR, &YevalStypistYcp},
  {"---main-0---", PVAR, NULL},
  {"type-exp", CVAR, &YevalStypistYtype_exp},
  {"<fold-if>", CVAR, &YevalStypistYLfold_ifG},
  {"<prop-access>", CVAR, &YevalStypistYLprop_accessG},
  {"mem-act", CVAR, &YevalStypistYmem_act},
  {"type-infer", CVAR, &YevalStypistYtype_infer},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"potentially-joint?", NULL},
  {"type-infer", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalStypist;
MODULE_INFO module_info_evalStypist = {
  "eval/typist",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);
extern void load_module_gooStypes (void);
extern void load_module_evalSast (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_evalSast_eval (void);
extern void load_module_evalSoptimize (void);
extern void load_module_gooSioSread (void);

/* EXPRESSION: */

extern void load_module_evalStypist (void);

void load_module_evalStypist (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooStypes();
  load_module_evalSast();
  load_module_evalSast_linearize();
  load_module_evalSast_eval();
  load_module_evalSoptimize();
  load_module_gooSioSread();

  (P)YevalStypistY___main_0___();
  (P)YevalStypistY___main_1___();

}

/* END OF GENERATED CODE. */
