/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/syntax");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/syntax */

EXT(Yclone,"goo/boot","clone");
DEF(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YevalSsyntaxYsexpr_quotedQ,"eval/syntax","sexpr-quoted?");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YevalSsyntaxYsexpr_methodQ,"eval/syntax","sexpr-method?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalSsyntaxYsexpr_ifQ,"eval/syntax","sexpr-if?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
DEF(YevalSsyntaxYmap_tree,"eval/syntax","map-tree");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
DEF(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
DEF(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSsyntaxYsexpr_syntax_definitionQ,"eval/syntax","sexpr-syntax-definition?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSsyntaxYsexpr_loc_body,"eval/syntax","sexpr-loc-body");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YevalSsyntaxYas_signature,"eval/syntax","as-signature");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSsyntaxYsexpr_backquoteQ,"eval/syntax","sexpr-backquote?");
DEF(YevalSsyntaxYLnameG,"eval/syntax","<name>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YevalSsyntaxYsexpr_generic_definitionQ,"eval/syntax","sexpr-generic-definition?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSsyntaxYsexpr_method_definitionQ,"eval/syntax","sexpr-method-definition?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YevalSsyntaxYsexpr_beginQ,"eval/syntax","sexpr-begin?");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
DEF(YevalSsyntaxYsexpr_rest_exps,"eval/syntax","sexpr-rest-exps");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
DEF(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YevalSsyntaxYsexpr_method_value,"eval/syntax","sexpr-method-value");
DEF(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSsyntaxYsexpr_pattern_variableQ,"eval/syntax","sexpr-pattern-variable?");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
DEF(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YevalSsyntaxYsexpr_rest_operands,"eval/syntax","sexpr-rest-operands");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DEF(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YevalSsyntaxYsexpr_iterate_signature,"eval/syntax","sexpr-iterate-signature");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSsyntaxYDsexpr_macro_tag,"eval/syntax","$sexpr-macro-tag");
DEF(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
DEF(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
DEF(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YevalSsyntaxYsexpr_function_definitionQ,"eval/syntax","sexpr-function-definition?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
DEF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSsyntaxYTbq_listT,"eval/syntax","*bq-list*");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YevalSsyntaxYsexpr_let_bound_variables,"eval/syntax","sexpr-let-bound-variables");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSsyntaxYsexpr_tagged_listQ,"eval/syntax","sexpr-tagged-list?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
DEF(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSsyntaxYsexpr_assignmentQ,"eval/syntax","sexpr-assignment?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalSsyntaxYTbq_quoteT,"eval/syntax","*bq-quote*");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YevalSsyntaxYfind_option,"eval/syntax","find-option");
DEF(YevalSsyntaxYsexpr_locQ,"eval/syntax","sexpr-loc?");
DEF(YevalSsyntaxYsexpr_let_namesAvalues,"eval/syntax","sexpr-let-names+values");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSsyntaxYsexpr_first_exp,"eval/syntax","sexpr-first-exp");
DEF(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
DEF(YevalSsyntaxYTcomma_atsignT,"eval/syntax","*comma-atsign*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalSsyntaxYsexpr_first_operand,"eval/syntax","sexpr-first-operand");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YevalSsyntaxYsexpr_applicationQ,"eval/syntax","sexpr-application?");
DEF(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YevalSsyntaxYbq_process,"eval/syntax","bq-process");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSsyntaxYsexpr_blockQ,"eval/syntax","sexpr-block?");
DEF(YevalSsyntaxYsexpr_method_parameters,"eval/syntax","sexpr-method-parameters");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YevalSsyntaxYsexpr_make_syntax_if,"eval/syntax","sexpr-make-syntax-if");
DEF(YevalSsyntaxYsexpr_unique_name,"eval/syntax","sexpr-unique-name");
DEF(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DEF(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSsyntaxYsexpr_monitor_info,"eval/syntax","sexpr-monitor-info");
DEF(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSsyntaxYsexpr_letQ,"eval/syntax","sexpr-let?");
DEF(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSsyntaxYsexpr_function_value,"eval/syntax","sexpr-function-value");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YevalSsyntaxYTunique_name_counterT,"eval/syntax","*unique-name-counter*");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSsyntaxYTbq_nconcT,"eval/syntax","*bq-nconc*");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
DEF(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSsyntaxYbracket,"eval/syntax","bracket");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalSsyntaxYsexpr_iterate_name,"eval/syntax","sexpr-iterate-name");
DEF(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
DEF(YevalSsyntaxYsexpr_new_unique_name_counterX,"eval/syntax","sexpr-new-unique-name-counter!");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSsyntaxYsexpr_last_expQ,"eval/syntax","sexpr-last-exp?");
DEF(YevalSsyntaxYsexpr_iterate_body,"eval/syntax","sexpr-iterate-body");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YevalSsyntaxYsexpr_monitor_test,"eval/syntax","sexpr-monitor-test");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YevalSsyntaxYsexpr_value_type,"eval/syntax","sexpr-value-type");
DEF(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSsyntaxYsexpr_macro_expandQ,"eval/syntax","sexpr-macro-expand?");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YevalSsyntaxYDsexpr_values_tag,"eval/syntax","$sexpr-values-tag");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YevalSsyntaxYbq_remove_tokens,"eval/syntax","bq-remove-tokens");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
DEF(YevalSsyntaxYnreconc,"eval/syntax","nreconc");
DEF(YevalSsyntaxYsexpr_build_backquote_expander,"eval/syntax","sexpr-build-backquote-expander");
DEF(YevalSsyntaxYTbq_clobberableT,"eval/syntax","*bq-clobberable*");
DEF(YevalSsyntaxYsexpr_function_parameters,"eval/syntax","sexpr-function-parameters");
DEF(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
DEF(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
DEF(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSsyntaxYsexpr_unwind_protectQ,"eval/syntax","sexpr-unwind-protect?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YevalSsyntaxYTbq_listTT,"eval/syntax","*bq-list**");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DEF(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YevalSsyntaxYsexpr_iterateQ,"eval/syntax","sexpr-iterate?");
DEF(YevalSsyntaxYsexpr_make_quote,"eval/syntax","sexpr-make-quote");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
DEF(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YevalSsyntaxYsexpr_self_evaluatingQ,"eval/syntax","sexpr-self-evaluating?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YevalSsyntaxYTbq_appendT,"eval/syntax","*bq-append*");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YevalSsyntaxYsexpr_definitionQ,"eval/syntax","sexpr-definition?");
DEF(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
DEF(YevalSsyntaxYsexpr_syntax_ifQ,"eval/syntax","sexpr-syntax-if?");
DEF(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
DEF(YevalSsyntaxYsexpr_pattern_variable_name,"eval/syntax","sexpr-pattern-variable-name");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
DEF(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSsyntaxYsexpr_let_values,"eval/syntax","sexpr-let-values");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalSsyntaxYsexpr_isaQ,"eval/syntax","sexpr-isa?");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YevalSsyntaxYsexpr_atomQ,"eval/syntax","sexpr-atom?");
DEF(YevalSsyntaxYsexpr_propQ,"eval/syntax","sexpr-prop?");
DEF(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
DEF(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
DEF(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(Yfun_mets,"goo/boot","fun-mets");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
DEF(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
DEF(YevalSsyntaxYsexpr_iterate_inits,"eval/syntax","sexpr-iterate-inits");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
DEF(YevalSsyntaxYsexpr_make_if,"eval/syntax","sexpr-make-if");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YevalSsyntaxYsexpr_no_operandsQ,"eval/syntax","sexpr-no-operands?");
DEF(YevalSsyntaxYsexpr_begin_actions,"eval/syntax","sexpr-begin-actions");
DEF(YevalSsyntaxYsexpr_monitorQ,"eval/syntax","sexpr-monitor?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YevalSsyntaxYsexpr_let_body,"eval/syntax","sexpr-let-body");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSsyntaxYsexpr_monitor_type,"eval/syntax","sexpr-monitor-type");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSsyntaxYsexpr_monitor_body,"eval/syntax","sexpr-monitor-body");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YevalSsyntaxYsexpr_macroQ,"eval/syntax","sexpr-macro?");
DEF(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_310);
DEFLIT(lit_331);
DEFLIT(lit_251);
DEFLIT(lit_228);
DEFLIT(lit_145);
DEFLIT(lit_155);
DEFLIT(lit_5);
DEFLIT(lit_124);
DEFLIT(lit_284);
DEFLIT(lit_119);
DEFLIT(lit_55);
DEFLIT(lit_308);
DEFLIT(lit_247);
DEFLIT(lit_137);
DEFLIT(lit_92);
DEFLIT(lit_322);
DEFLIT(lit_33);
DEFLIT(lit_268);
DEFLIT(lit_298);
DEFLIT(lit_185);
DEFLIT(lit_16);
DEFLIT(lit_295);
DEFLIT(lit_301);
DEFLIT(lit_158);
DEFLIT(lit_102);
DEFLIT(lit_270);
DEFLIT(lit_182);
DEFLIT(lit_344);
DEFLIT(lit_180);
DEFLIT(lit_195);
DEFLIT(lit_181);
DEFLIT(lit_26);
DEFLIT(lit_367);
DEFLIT(lit_358);
DEFLIT(lit_171);
DEFLIT(lit_202);
DEFLIT(lit_333);
DEFLIT(lit_224);
DEFLIT(lit_238);
DEFLIT(lit_275);
DEFLIT(lit_78);
DEFLIT(lit_162);
DEFLIT(lit_200);
DEFLIT(lit_245);
DEFLIT(lit_330);
DEFLIT(lit_324);
DEFLIT(lit_313);
DEFLIT(lit_279);
DEFLIT(lit_243);
DEFLIT(lit_132);
DEFLIT(lit_325);
DEFLIT(lit_22);
DEFLIT(lit_204);
DEFLIT(lit_88);
DEFLIT(lit_233);
DEFLIT(lit_75);
DEFLIT(lit_70);
DEFLIT(lit_327);
DEFLIT(lit_167);
DEFLIT(lit_114);
DEFLIT(lit_339);
DEFLIT(lit_141);
DEFLIT(lit_134);
DEFLIT(lit_353);
DEFLIT(lit_100);
DEFLIT(lit_209);
DEFLIT(lit_41);
DEFLIT(lit_87);
DEFLIT(lit_297);
DEFLIT(lit_37);
DEFLIT(lit_18);
DEFLIT(lit_306);
DEFLIT(lit_329);
DEFLIT(lit_309);
DEFLIT(lit_291);
DEFLIT(lit_115);
DEFLIT(lit_314);
DEFLIT(lit_299);
DEFLIT(lit_269);
DEFLIT(lit_17);
DEFLIT(lit_318);
DEFLIT(lit_337);
DEFLIT(lit_211);
DEFLIT(lit_208);
DEFLIT(lit_300);
DEFLIT(lit_258);
DEFLIT(lit_25);
DEFLIT(lit_323);
DEFLIT(lit_83);
DEFLIT(lit_328);
DEFLIT(lit_222);
DEFLIT(lit_0);
DEFLIT(lit_307);
DEFLIT(lit_282);
DEFLIT(lit_28);
DEFLIT(lit_6);
DEFLIT(lit_168);
DEFLIT(lit_184);
DEFLIT(lit_151);
DEFLIT(lit_12);
DEFLIT(lit_262);
DEFLIT(lit_19);
DEFLIT(lit_261);
DEFLIT(lit_226);
DEFLIT(lit_296);
DEFLIT(lit_219);
DEFLIT(lit_365);
DEFLIT(lit_264);
DEFLIT(lit_81);
DEFLIT(lit_96);
DEFLIT(lit_160);
DEFLIT(lit_230);
DEFLIT(lit_110);
DEFLIT(lit_257);
DEFLIT(lit_234);
DEFLIT(lit_98);
DEFLIT(lit_355);
DEFLIT(lit_221);
DEFLIT(lit_15);
DEFLIT(lit_248);
DEFLIT(lit_69);
DEFLIT(lit_254);
DEFLIT(lit_60);
DEFLIT(lit_250);
DEFLIT(lit_32);
DEFLIT(lit_205);
DEFLIT(lit_21);
DEFLIT(lit_24);
DEFLIT(lit_210);
DEFLIT(lit_47);
DEFLIT(lit_128);
DEFLIT(lit_265);
DEFLIT(lit_148);
DEFLIT(lit_290);
DEFLIT(lit_152);
DEFLIT(lit_29);
DEFLIT(lit_260);
DEFLIT(lit_103);
DEFLIT(lit_357);
DEFLIT(lit_193);
DEFLIT(lit_36);
DEFLIT(lit_340);
DEFLIT(lit_191);
DEFLIT(lit_63);
DEFLIT(lit_51);
DEFLIT(lit_58);
DEFLIT(lit_46);
DEFLIT(lit_212);
DEFLIT(lit_274);
DEFLIT(lit_7);
DEFLIT(lit_138);
DEFLIT(lit_190);
DEFLIT(lit_361);
DEFLIT(lit_241);
DEFLIT(lit_176);
DEFLIT(lit_164);
DEFLIT(lit_177);
DEFLIT(lit_194);
DEFLIT(lit_199);
DEFLIT(lit_236);
DEFLIT(lit_122);
DEFLIT(lit_161);
DEFLIT(lit_91);
DEFLIT(lit_57);
DEFLIT(lit_246);
DEFLIT(lit_66);
DEFLIT(lit_305);
DEFLIT(lit_34);
DEFLIT(lit_14);
DEFLIT(lit_140);
DEFLIT(lit_27);
DEFLIT(lit_286);
DEFLIT(lit_249);
DEFLIT(lit_363);
DEFLIT(lit_99);
DEFLIT(lit_256);
DEFLIT(lit_352);
DEFLIT(lit_84);
DEFLIT(lit_187);
DEFLIT(lit_43);
DEFLIT(lit_143);
DEFLIT(lit_120);
DEFLIT(lit_267);
DEFLIT(lit_332);
DEFLIT(lit_198);
DEFLIT(lit_166);
DEFLIT(lit_312);
DEFLIT(lit_52);
DEFLIT(lit_94);
DEFLIT(lit_252);
DEFLIT(lit_285);
DEFLIT(lit_237);
DEFLIT(lit_173);
DEFLIT(lit_48);
DEFLIT(lit_231);
DEFLIT(lit_85);
DEFLIT(lit_118);
DEFLIT(lit_292);
DEFLIT(lit_154);
DEFLIT(lit_280);
DEFLIT(lit_10);
DEFLIT(lit_142);
DEFLIT(lit_73);
DEFLIT(lit_49);
DEFLIT(lit_304);
DEFLIT(lit_321);
DEFLIT(lit_77);
DEFLIT(lit_281);
DEFLIT(lit_8);
DEFLIT(lit_11);
DEFLIT(lit_139);
DEFLIT(lit_2);
DEFLIT(lit_207);
DEFLIT(lit_90);
DEFLIT(lit_126);
DEFLIT(lit_183);
DEFLIT(lit_61);
DEFLIT(lit_217);
DEFLIT(lit_101);
DEFLIT(lit_109);
DEFLIT(lit_147);
DEFLIT(lit_362);
DEFLIT(lit_273);
DEFLIT(lit_215);
DEFLIT(lit_42);
DEFLIT(lit_35);
DEFLIT(lit_72);
DEFLIT(lit_86);
DEFLIT(lit_206);
DEFLIT(lit_229);
DEFLIT(lit_311);
DEFLIT(lit_302);
DEFLIT(lit_192);
DEFLIT(lit_45);
DEFLIT(lit_320);
DEFLIT(lit_272);
DEFLIT(lit_368);
DEFLIT(lit_3);
DEFLIT(lit_80);
DEFLIT(lit_113);
DEFLIT(lit_153);
DEFLIT(lit_218);
DEFLIT(lit_360);
DEFLIT(lit_303);
DEFLIT(lit_133);
DEFLIT(lit_165);
DEFLIT(lit_121);
DEFLIT(lit_203);
DEFLIT(lit_116);
DEFLIT(lit_319);
DEFLIT(lit_259);
DEFLIT(lit_1);
DEFLIT(lit_67);
DEFLIT(lit_156);
DEFLIT(lit_125);
DEFLIT(lit_106);
DEFLIT(lit_30);
DEFLIT(lit_127);
DEFLIT(lit_364);
DEFLIT(lit_76);
DEFLIT(lit_334);
DEFLIT(lit_108);
DEFLIT(lit_20);
DEFLIT(lit_68);
DEFLIT(lit_39);
DEFLIT(lit_131);
DEFLIT(lit_346);
DEFLIT(lit_13);
DEFLIT(lit_65);
DEFLIT(lit_316);
DEFLIT(lit_169);
DEFLIT(lit_271);
DEFLIT(lit_146);
DEFLIT(lit_351);
DEFLIT(lit_112);
DEFLIT(lit_186);
DEFLIT(lit_74);
DEFLIT(lit_44);
DEFLIT(lit_53);
DEFLIT(lit_197);
DEFLIT(lit_244);
DEFLIT(lit_345);
DEFLIT(lit_266);
DEFLIT(lit_278);
DEFLIT(lit_174);
DEFLIT(lit_348);
DEFLIT(lit_117);
DEFLIT(lit_315);
DEFLIT(lit_79);
DEFLIT(lit_136);
DEFLIT(lit_178);
DEFLIT(lit_263);
DEFLIT(lit_172);
DEFLIT(lit_93);
DEFLIT(lit_276);
DEFLIT(lit_294);
DEFLIT(lit_366);
DEFLIT(lit_4);
DEFLIT(lit_104);
DEFLIT(lit_105);
DEFLIT(lit_289);
DEFLIT(lit_336);
DEFLIT(lit_31);
DEFLIT(lit_216);
DEFLIT(lit_338);
DEFLIT(lit_201);
DEFLIT(lit_59);
DEFLIT(lit_223);
DEFLIT(lit_213);
DEFLIT(lit_350);
DEFLIT(lit_129);
DEFLIT(lit_354);
DEFLIT(lit_349);
DEFLIT(lit_287);
DEFLIT(lit_277);
DEFLIT(lit_227);
DEFLIT(lit_341);
DEFLIT(lit_214);
DEFLIT(lit_179);
DEFLIT(lit_64);
DEFLIT(lit_111);
DEFLIT(lit_255);
DEFLIT(lit_356);
DEFLIT(lit_40);
DEFLIT(lit_144);
DEFLIT(lit_317);
DEFLIT(lit_196);
DEFLIT(lit_335);
DEFLIT(lit_220);
DEFLIT(lit_97);
DEFLIT(lit_343);
DEFLIT(lit_235);
DEFLIT(lit_82);
DEFLIT(lit_170);
DEFLIT(lit_62);
DEFLIT(lit_253);
DEFLIT(lit_188);
DEFLIT(lit_288);
DEFLIT(lit_342);
DEFLIT(lit_150);
DEFLIT(lit_163);
DEFLIT(lit_89);
DEFLIT(lit_50);
DEFLIT(lit_135);
DEFLIT(lit_95);
DEFLIT(lit_283);
DEFLIT(lit_189);
DEFLIT(lit_240);
DEFLIT(lit_149);
DEFLIT(lit_56);
DEFLIT(lit_347);
DEFLIT(lit_159);
DEFLIT(lit_232);
DEFLIT(lit_293);
DEFLIT(lit_107);
DEFLIT(lit_54);
DEFLIT(lit_38);
DEFLIT(lit_157);
DEFLIT(lit_239);
DEFLIT(lit_23);
DEFLIT(lit_71);
DEFLIT(lit_175);
DEFLIT(lit_242);
DEFLIT(lit_130);
DEFLIT(lit_123);
DEFLIT(lit_225);
DEFLIT(lit_326);
DEFLIT(lit_359);

/* FUNCTIONS: */

LOCFOR(fun_sexpr_self_evaluatingQ_0);
LOCFOR(fun_sexpr_variableQ_1);
LOCFOR(fun_sexpr_tagged_listQ_2);
LOCFOR(fun_sexpr_quotedQ_3);
LOCFOR(fun_sexpr_make_quote_4);
LOCFOR(fun_sexpr_text_of_quotation_5);
LOCFOR(fun_sexpr_assignmentQ_6);
LOCFOR(fun_sexpr_assignment_variable_7);
LOCFOR(fun_sexpr_assignment_value_8);
LOCFOR(fun_sexpr_variable_name_9);
LOCFOR(fun_sexpr_variable_name_10);
LOCFOR(fun_sexpr_variable_type_11);
LOCFOR(fun_sexpr_variable_type_12);
LOCFOR(fun_sexpr_definitionQ_13);
LOCFOR(fun_sexpr_definition_variable_14);
LOCFOR(fun_sexpr_definition_value_15);
LOCFOR(fun_sexpr_syntax_definitionQ_16);
LOCFOR(fun_sexpr_syntax_definition_variable_17);
LOCFOR(fun_sexpr_syntax_definition_value_18);
LOCFOR(fun_sexpr_function_definitionQ_19);
LOCFOR(fun_sexpr_method_definitionQ_20);
LOCFOR(fun_sexpr_generic_definitionQ_21);
LOCFOR(fun_sexpr_function_definition_variable_22);
LOCFOR(fun_sexpr_function_definition_adjectives_23);
LOCFOR(fun_sexpr_forward_primitiveQ_24);
LOCFOR(fun_sexpr_signature_parameters_25);
LOCFOR(fun_sexpr_value_type_26);
LOCFOR(fun_sexpr_value_type_27);
LOCFOR(fun_sexpr_signature_value_28);
FUNFOR(YevalSsyntaxYas_signature);
LOCFOR(fun_sexpr_function_signature_30);
LOCFOR(fun_sexpr_function_parameters_31);
LOCFOR(fun_sexpr_function_value_32);
LOCFOR(fun_sexpr_function_body_33);
LOCFOR(fun_sexpr_function_definition_value_34);
LOCFOR(fun_sexpr_methodQ_35);
LOCFOR(fun_sexpr_method_signature_36);
LOCFOR(fun_sexpr_method_parameters_37);
LOCFOR(fun_sexpr_method_value_38);
LOCFOR(fun_sexpr_method_body_39);
LOCFOR(fun_sexpr_make_anonymous_method_40);
LOCFOR(fun_sexpr_make_method_41);
LOCFOR(fun_sexpr_ifQ_42);
LOCFOR(fun_sexpr_if_test_43);
LOCFOR(fun_sexpr_if_then_44);
LOCFOR(fun_sexpr_if_else_45);
LOCFOR(fun_sexpr_make_if_46);
LOCFOR(fun_sexpr_blockQ_47);
LOCFOR(fun_sexpr_block_name_48);
LOCFOR(fun_sexpr_block_body_49);
LOCFOR(fun_sexpr_unwind_protectQ_50);
LOCFOR(fun_sexpr_unwind_protect_protected_form_51);
LOCFOR(fun_sexpr_unwind_protect_cleanup_forms_52);
LOCFOR(fun_sexpr_monitorQ_53);
LOCFOR(fun_x_1425_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_expand_56);
FUNFOR(YevalSsyntaxYfind_option);
LOCFOR(fun_x_1427_58);
LOCFOR(fun_59);
LOCFOR(fun_sexpr_monitor_type_60);
LOCFOR(fun_x_1429_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1431_63);
LOCFOR(fun_64);
LOCFOR(fun_sexpr_monitor_info_65);
LOCFOR(fun_sexpr_monitor_test_66);
LOCFOR(fun_sexpr_monitor_body_67);
LOCFOR(fun_sexpr_beginQ_68);
LOCFOR(fun_sexpr_begin_actions_69);
LOCFOR(fun_sexpr_last_expQ_70);
LOCFOR(fun_sexpr_first_exp_71);
LOCFOR(fun_sexpr_rest_exps_72);
LOCFOR(fun_sexpr_sequence_Gbegin_73);
LOCFOR(fun_sexpr_make_begin_74);
LOCFOR(fun_sexpr_applicationQ_75);
LOCFOR(fun_sexpr_operator_76);
LOCFOR(fun_sexpr_operands_77);
LOCFOR(fun_sexpr_no_operandsQ_78);
LOCFOR(fun_sexpr_first_operand_79);
LOCFOR(fun_sexpr_rest_operands_80);
LOCFOR(fun_sexpr_make_application_81);
LOCFOR(fun_sexpr_new_unique_name_counterX_82);
LOCFOR(fun_sexpr_unique_name_83);
LOCFOR(fun_sexpr_defQ_84);
LOCFOR(fun_sexpr_def_variable_85);
LOCFOR(fun_sexpr_def_value_86);
LOCFOR(fun_sexpr_letQ_87);
LOCFOR(fun_88);
LOCFOR(fun_sexpr_let_bound_variables_89);
LOCFOR(fun_90);
LOCFOR(fun_sexpr_let_values_91);
LOCFOR(fun_sexpr_let_body_92);
LOCFOR(fun_sexpr_let_namesAvalues_93);
LOCFOR(fun_col_94);
LOCFOR(fun_sexpr_let_Gcombination_95);
LOCFOR(fun_sexpr_locQ_96);
LOCFOR(fun_sexpr_loc_bound_names_97);
LOCFOR(fun_98);
LOCFOR(fun_sexpr_loc_bound_signatures_99);
LOCFOR(fun_sexpr_loc_bound_bodies_100);
LOCFOR(fun_sexpr_loc_raw_body_101);
LOCFOR(fun_sexpr_loc_body_102);
LOCFOR(fun_sexpr_iterateQ_103);
LOCFOR(fun_sexpr_iterate_name_104);
LOCFOR(fun_105);
LOCFOR(fun_sexpr_iterate_signature_106);
LOCFOR(fun_107);
LOCFOR(fun_sexpr_iterate_inits_108);
LOCFOR(fun_sexpr_iterate_body_109);
LOCFOR(fun_sexpr_iterate_Gloc_110);
LOCFOR(fun_sexpr_isaQ_111);
LOCFOR(fun_sexpr_isa_parent_112);
LOCFOR(fun_sexpr_isa_prop_inits_113);
LOCFOR(fun_sexpr_isa_init_props_114);
LOCFOR(fun_sexpr_isa_init_values_115);
LOCFOR(fun_sexpr_define_classQ_116);
LOCFOR(fun_sexpr_define_class_parents_117);
LOCFOR(fun_sexpr_propQ_118);
LOCFOR(fun_sexpr_prop_name_119);
LOCFOR(fun_sexpr_prop_owner_120);
LOCFOR(fun_sexpr_prop_init_var_121);
LOCFOR(fun_sexpr_prop_type_122);
LOCFOR(fun_sexpr_prop_initQ_123);
LOCFOR(fun_sexpr_prop_init_124);
LOCFOR(fun_sexpr_fab_getter_125);
LOCFOR(fun_sexpr_fab_setter_126);
LOCFOR(fun_sexpr_fab_setter_name_127);
LOCFOR(fun_sexpr_macroQ_128);
LOCFOR(fun_sexpr_macro_expandQ_129);
LOCFOR(fun_sexpr_make_syntax_if_130);
FUNFOR(YevalSsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_132);
LOCFOR(fun_sexpr_unquoteQ_133);
LOCFOR(fun_sexpr_unquote_splicingQ_134);
LOCFOR(fun_sexpr_backquoteQ_135);
LOCFOR(fun_sexpr_atomQ_136);
LOCFOR(fun_nreconc_137);
LOCFOR(fun_138);
LOCFOR(fun_bq_process_139);
LOCFOR(fun_bracket_140);
LOCFOR(fun_map_tree_141);
LOCFOR(fun_bq_remove_tokens_142);
LOCFOR(fun_sexpr_syntax_ifQ_143);
LOCFOR(fun_sexpr_syntax_if_value_144);
LOCFOR(fun_sexpr_syntax_if_pattern_145);
LOCFOR(fun_sexpr_syntax_if_then_146);
LOCFOR(fun_sexpr_syntax_if_else_147);
LOCFOR(fun_sexpr_pattern_variableQ_148);
LOCFOR(fun_sexpr_pattern_variable_name_149);
LOCFOR(fun_col_150);
LOCFOR(fun_sexpr_bind_pattern_variables_151);
LOCFOR(fun_sexpr_make_macro_function_152);
extern P YevalSsyntaxY___main_0___ ();
extern P YevalSsyntaxY___main_1___ ();
extern P YevalSsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF2651;
  P tmpF2650;
  P tmpF2649;
  P tmpF2648;
  P tmpF2647;
  P tmpF2646;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF2646 = T1;
  if (tmpF2646 != YPfalse) {
    T2 = tmpF2646;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF2647 = T4;
    if (tmpF2647 != YPfalse) {
      T5 = tmpF2647;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPtrue);
      tmpF2648 = T7;
      if (tmpF2648 != YPfalse) {
        T8 = tmpF2648;
      } else {
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPfalse);
        tmpF2649 = T10;
        if (tmpF2649 != YPfalse) {
          T11 = tmpF2649;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF2650 = T13;
          if (tmpF2650 != YPfalse) {
            T14 = tmpF2650;
          } else {
            T16 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YgooScolsSvecYLvecG));
            tmpF2651 = T16;
            if (tmpF2651 != YPfalse) {
              T17 = tmpF2651;
            } else {
              T18 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLtupG));
              T17 = T18;
            }
            T15 = T17;
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
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_variableQ_1) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLsymG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_tagged_listQ_2) {
  P exp_,tag_;
  P tmpF2652;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF2652 = T1;
  if (tmpF2652 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),exp_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,tag_);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_quotedQ_3) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_quote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_quote_4) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_quote_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_text_of_quotation_5) {
  P quot_;
  P T0;
LINK_STACK();
  ARG(quot_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),quot_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignmentQ_6) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_set_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_variable_7) {
  P assn_;
  P T0;
LINK_STACK();
  ARG(assn_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),assn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_value_8) {
  P assn_;
  P T0;
LINK_STACK();
  ARG(assn_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),assn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_9) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_10) {
  P exp_;
LINK_STACK();
  ARG(exp_, 0);
UNLINK_STACK();
  QRET(exp_);
}

FUNCODEDEF(fun_sexpr_variable_type_11) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_type_12) {
  P exp_;
LINK_STACK();
  ARG(exp_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_26));
}

FUNCODEDEF(fun_sexpr_definitionQ_13) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_definition_variable_14) {
  P defn_;
  P T0;
LINK_STACK();
  ARG(defn_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_definition_value_15) {
  P defn_;
  P T0;
LINK_STACK();
  ARG(defn_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definitionQ_16) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_syntax_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_variable_17) {
  P defn_;
  P T0,T1,T2;
LINK_STACK();
  ARG(defn_, 0);
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_value_18) {
  P defn_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(defn_, 0);
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  T4 = CALL1(1,VARREF(Ytail),defn_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYDsexpr_macro_tag),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definitionQ_19) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_function_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_definitionQ_20) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_generic_definitionQ_21) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_generic_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_variable_22) {
  P defn_;
  P varF2653;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF2653 = T1;
  T3 = CALL2(1,VARREF(YisaQ),varF2653,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),varF2653);
    T2 = T4;
  } else {
    T2 = varF2653;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_adjectives_23) {
  P defn_;
  P varF2654;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF2654 = T1;
  T3 = CALL2(1,VARREF(YisaQ),varF2654,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ytail),varF2654);
    T2 = T4;
  } else {
    T2 = Ynil;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_forward_primitiveQ_24) {
  P defn_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),defn_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_25) {
  P signature_;
  P values_spec_indexF2655;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(signature_, 0);
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_60));
  values_spec_indexF2655 = T1;
  if (values_spec_indexF2655 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),signature_,YPint((P)0),values_spec_indexF2655);
    T2 = T3;
  } else {
    T2 = signature_;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_value_type_26) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_value_type_27) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_sexpr_signature_value_28) {
  P signature_;
  P valueF2658;
  P tmpF2657;
  P values_spec_indexF2656;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(signature_, 0);
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_60));
  values_spec_indexF2656 = T1;
  tmpF2657 = values_spec_indexF2656;
  if (tmpF2657 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),values_spec_indexF2656,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),signature_,T6);
    valueF2658 = T5;
    T8 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),valueF2658,LITREF(lit_66));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
      T12 = CALL1(1,VARREF(Ytail),valueF2658);
      T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSsyntaxYsexpr_value_type),T12);
      T9 = CALL3(1,VARREF(YgooSmacrosYcat),T10,T11,LITREF(lit_68));
      T7 = T9;
    } else {
      T7 = valueF2658;
    }
    T4 = T7;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSsyntaxYas_signature) {
  P sig_;
LINK_STACK();
  ARG(sig_, 0);
UNLINK_STACK();
  RET(sig_);
}

FUNCODEDEF(fun_sexpr_function_signature_30) {
  P defn_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_parameters_31) {
  P defn_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_value_32) {
  P defn_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_body_33) {
  P defn_;
  P T0,T1,T2;
LINK_STACK();
  ARG(defn_, 0);
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_value_34) {
  P defn_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(defn_, 0);
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T5 = CALL1(1,VARREF(Ytail),defn_);
  T4 = CALL1(1,VARREF(Ytail),T5);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T6 = CALL1(1,VARREF(YgooScolsSlstYline_of),defn_);
  T0 = CALL3(1,VARREF(YgooScolsSlstYline_pair),VARREF(YevalSsyntaxYDsexpr_method_tag),T1,T6);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_methodQ_35) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_signature_36) {
  P method_exp_;
  P T0,T1;
LINK_STACK();
  ARG(method_exp_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_parameters_37) {
  P method_exp_;
  P T0,T1;
LINK_STACK();
  ARG(method_exp_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_value_38) {
  P method_exp_;
  P T0,T1;
LINK_STACK();
  ARG(method_exp_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_method_body_39) {
  P method_exp_;
  P T0,T1;
LINK_STACK();
  ARG(method_exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),method_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_anonymous_method_40) {
  P parameters_,body_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(parameters_, 0);
  ARG(body_, 1);
  T2 = CALL2(1,VARREF(YisaQ),parameters_,VARREF(YgooScolsSlstYLline_listG));
  if (T2 != YPfalse) {
    T1 = parameters_;
  } else {
    T1 = body_;
  }
  T4 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_method_tag));
  T5 = CALL1(1,VARREF(Ylst),parameters_);
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,body_);
  T0 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_method_41) {
  P name_,parameters_,body_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(parameters_, 1);
  ARG(body_, 2);
  T2 = CALL2(1,VARREF(YisaQ),parameters_,VARREF(YgooScolsSlstYLline_listG));
  if (T2 != YPfalse) {
    T1 = parameters_;
  } else {
    T1 = body_;
  }
  T4 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,body_);
  T0 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_ifQ_42) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_if_test_43) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_then_44) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_else_45) {
  P exp_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(exp_, 0);
  T4 = CALL1(1,VARREF(Ytail),exp_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T2 = CALL1(1,VARREF(Ytail),T3);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL1(1,VARREF(Ytail),exp_);
    T7 = CALL1(1,VARREF(Ytail),T8);
    T6 = CALL1(1,VARREF(Ytail),T7);
    T5 = CALL1(1,VARREF(Yhead),T6);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_if_46) {
  P test_,then_,else_;
  P T0;
LINK_STACK();
  ARG(test_, 0);
  ARG(then_, 1);
  ARG(else_, 2);
  T0 = CALL4(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_if_tag),test_,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_blockQ_47) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_bind_exit_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_block_name_48) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_block_body_49) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protectQ_50) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_51) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_52) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitorQ_53) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_monitor_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1425_54) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_129),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P optionsF2670;
  P x_1424F2669;
  P x_1424F2668;
  P x_1424F2667;
  P x_1424F2666;
  P x_1424F2665;
  P x_1424F2664;
  P bodyF2663;
  P handlerF2662;
  P optionsF2661;
  P x_1424F2660;
  P x_1425F2659;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1425_54,2);
  x_1425F2659 = T1;
  FUNINIT(x_1425F2659, 2,FREEREF(0),return_);
  x_1424F2660 = FREEREF(0);
  optionsF2661 = YPfalse;
  optionsF2661 = BOXFAB(optionsF2661);
  handlerF2662 = YPfalse;
  handlerF2662 = BOXFAB(handlerF2662);
  bodyF2663 = YPfalse;
  bodyF2663 = BOXFAB(bodyF2663);
  T9 = CALL2(1,VARREF(YisaQ),x_1424F2660,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1424F2660,LITREF(lit_121),x_1425F2659);
    x_1424F2664 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1424F2664,x_1425F2659);
    BOXVAL(optionsF2661) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1424F2664);
    x_1424F2665 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1424F2665,x_1425F2659);
    BOXVAL(handlerF2662) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1424F2665);
    x_1424F2666 = T17;
    BOXVAL(bodyF2663) = x_1424F2666;
    x_1424F2667 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1424F2667,x_1425F2659);
    x_1424F2668 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1424F2668,x_1425F2659);
    T22 = CALL1(1,VARREF(Ytail),x_1424F2667);
    x_1424F2669 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1424F2669,x_1425F2659);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1425F2659,LITREF(lit_130),x_1424F2660);
  }
  T28 = BOXVAL(optionsF2661);
  T27 = CALL2(1,VARREF(YisaQ),T28,VARREF(YLsymG));
  if (T27 != YPfalse) {
    T32 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
    T34 = BOXVAL(optionsF2661);
    T33 = CALL1(1,VARREF(Ylst),T34);
    T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_68));
    T30 = CALL1(1,VARREF(Ylst),T31);
    T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_68));
    T26 = T29;
  } else {
    T35 = BOXVAL(optionsF2661);
    T26 = T35;
  }
  optionsF2670 = T26;
  T37 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_type),optionsF2670);
  T38 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_info),optionsF2670);
  T39 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_test),optionsF2670);
  T40 = BOXVAL(handlerF2662);
  T42 = BOXVAL(bodyF2663);
  T41 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_body),T42);
  T36 = CALL5(1,VARREF(Ytup),T37,T38,T39,T40,T41);
  T25 = T36;
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_expand_56) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_55,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSsyntaxYfind_option) {
  P options_,option_,default_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(options_, 0);
  ARG(option_, 1);
  ARG(default_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),options_);
  if (T1 != YPfalse) {
    T0 = default_;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),options_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosY1st),options_);
      T6 = CALL1(1,VARREF(Ytail),T7);
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,VARREF(Ytail),options_);
        T9 = CALL3(1,VARREF(YevalSsyntaxYfind_option),T10,option_,default_);
        T8 = T9;
      } else {
        T8 = YPfalse;
      }
      T2 = T8;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1427_58) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_140),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1426F2676;
  P x_1426F2675;
  P x_1426F2674;
  P typeF2673;
  P x_1426F2672;
  P x_1427F2671;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1427_58,2);
  x_1427F2671 = T1;
  FUNINIT(x_1427F2671, 2,FREEREF(0),return_);
  x_1426F2672 = FREEREF(0);
  typeF2673 = YPfalse;
  typeF2673 = BOXFAB(typeF2673);
  T5 = CALL2(1,VARREF(YisaQ),x_1426F2672,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1426F2672,x_1427F2671);
    BOXVAL(typeF2673) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1426F2672);
    x_1426F2674 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1426F2674,x_1427F2671);
    x_1426F2675 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1426F2675,x_1427F2671);
    T12 = CALL1(1,VARREF(Ytail),x_1426F2674);
    x_1426F2676 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1426F2676,x_1427F2671);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1427F2671,LITREF(lit_130),x_1426F2672);
  }
  T15 = BOXVAL(typeF2673);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_60) {
  P options_;
  P type_listF2677;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(options_, 0);
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_131),LITREF(lit_136));
  type_listF2677 = T1;
  T3 = FUNFAB(fun_59,1,type_listF2677);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1429_61) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_149),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1428F2683;
  P x_1428F2682;
  P x_1428F2681;
  P info_exprF2680;
  P x_1428F2679;
  P x_1429F2678;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1429_61,2);
  x_1429F2678 = T1;
  FUNINIT(x_1429F2678, 2,FREEREF(0),return_);
  x_1428F2679 = FREEREF(0);
  info_exprF2680 = YPfalse;
  info_exprF2680 = BOXFAB(info_exprF2680);
  T5 = CALL2(1,VARREF(YisaQ),x_1428F2679,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1428F2679,x_1429F2678);
    BOXVAL(info_exprF2680) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1428F2679);
    x_1428F2681 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1428F2681,x_1429F2678);
    x_1428F2682 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1428F2682,x_1429F2678);
    T12 = CALL1(1,VARREF(Ytail),x_1428F2681);
    x_1428F2683 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1428F2683,x_1429F2678);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1429F2678,LITREF(lit_130),x_1428F2679);
  }
  T15 = BOXVAL(info_exprF2680);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1431_63) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_153),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1430F2691;
  P x_1430F2690;
  P x_1430F2689;
  P x_1430F2688;
  P argumentsF2687;
  P messageF2686;
  P x_1430F2685;
  P x_1431F2684;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1431_63,2);
  x_1431F2684 = T1;
  FUNINIT(x_1431F2684, 2,FREEREF(0),return_);
  x_1430F2685 = FREEREF(0);
  messageF2686 = YPfalse;
  messageF2686 = BOXFAB(messageF2686);
  argumentsF2687 = YPfalse;
  argumentsF2687 = BOXFAB(argumentsF2687);
  T7 = CALL2(1,VARREF(YisaQ),x_1430F2685,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1430F2685,x_1431F2684);
    BOXVAL(messageF2686) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1430F2685);
    x_1430F2688 = T10;
    BOXVAL(argumentsF2687) = x_1430F2688;
    x_1430F2689 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1430F2689,x_1431F2684);
    x_1430F2690 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1430F2690,x_1431F2684);
    T15 = CALL1(1,VARREF(Ytail),x_1430F2689);
    x_1430F2691 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1430F2691,x_1431F2684);
    T12 = T16;
    T11 = T12;
    T8 = T11;
  } else {
    T17 = CALL2(1,x_1431F2684,LITREF(lit_130),x_1430F2685);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T23 = BOXVAL(messageF2686);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T28 = BOXVAL(argumentsF2687);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_68));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T18 = CALLN(1,VARREF(YgooSmacrosYcat),7,T19,T20,T21,T22,T24,T25,LITREF(lit_68));
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_65) {
  P options_;
  P tmpF2694;
  P descriptionF2693;
  P infoF2692;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(options_, 0);
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_143),YPfalse);
  infoF2692 = T1;
  T3 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_144),YPfalse);
  descriptionF2693 = T3;
  tmpF2694 = infoF2692;
  if (tmpF2694 != YPfalse) {
    T6 = descriptionF2693;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_145),options_);
    T4 = T7;
  } else {
    if (infoF2692 != YPfalse) {
      T10 = FUNFAB(fun_62,1,infoF2692);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF2693 != YPfalse) {
        T13 = FUNFAB(fun_64,1,descriptionF2693);
        T12 = with_exit(T13);
        T11 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T14 = LITREF(lit_159);
        } else {
          T14 = YPfalse;
        }
        T11 = T14;
      }
      T8 = T11;
    }
    T4 = T8;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_test_66) {
  P options_;
  P test_bodyF2695;
  P T0,T1,T2;
LINK_STACK();
  ARG(options_, 0);
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_162),LITREF(lit_163));
  test_bodyF2695 = T1;
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF2695);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_67) {
  P body_;
  P T0;
LINK_STACK();
  ARG(body_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_beginQ_68) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_begin_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_begin_actions_69) {
  P begin_exp_;
  P T0;
LINK_STACK();
  ARG(begin_exp_, 0);
  T0 = CALL1(1,VARREF(Ytail),begin_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_last_expQ_70) {
  P seq_;
  P T0,T1;
LINK_STACK();
  ARG(seq_, 0);
  T1 = CALL1(1,VARREF(Ytail),seq_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_exp_71) {
  P seq_;
  P T0;
LINK_STACK();
  ARG(seq_, 0);
  T0 = CALL1(1,VARREF(Yhead),seq_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_exps_72) {
  P seq_;
  P T0;
LINK_STACK();
  ARG(seq_, 0);
  T0 = CALL1(1,VARREF(Ytail),seq_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_sequence_Gbegin_73) {
  P seq_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(seq_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),seq_);
  if (T1 != YPfalse) {
    T0 = seq_;
  } else {
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_last_expQ),seq_);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_first_exp),seq_);
      T2 = T4;
    } else {
      T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),seq_);
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_begin_74) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYDsexpr_begin_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_75) {
  P exp_;
  P tmpF2696;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF2696 = T1;
  if (tmpF2696 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),exp_);
    T3 = CALL1(1,VARREF(Ynot),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_operator_76) {
  P app_;
  P T0;
LINK_STACK();
  ARG(app_, 0);
  T0 = CALL1(1,VARREF(Yhead),app_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_operands_77) {
  P app_;
  P T0;
LINK_STACK();
  ARG(app_, 0);
  T0 = CALL1(1,VARREF(Ytail),app_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_no_operandsQ_78) {
  P args_;
  P T0;
LINK_STACK();
  ARG(args_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_operand_79) {
  P args_;
  P T0;
LINK_STACK();
  ARG(args_, 0);
  T0 = CALL1(1,VARREF(Yhead),args_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_operands_80) {
  P args_;
  P T0;
LINK_STACK();
  ARG(args_, 0);
  T0 = CALL1(1,VARREF(Ytail),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_application_81) {
  P f_,operands_;
  P T0,T1;
LINK_STACK();
  ARG(f_, 0);
  ARG(operands_, 1);
  T1 = CALL1(1,VARREF(Ylst),f_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,operands_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_82) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(YevalSsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(YevalSsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_83) {
  P prefix_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(prefix_, 0);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),prefix_);
  T4 = CALL0(1,VARREF(YevalSsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,T3);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_defQ_84) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_def_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_def_variable_85) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_def_value_86) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_letQ_87) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_let_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_88) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_bound_variables_89) {
  P let_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(let_exp_, 0);
  T1 = fun_88;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_90) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_91) {
  P let_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(let_exp_, 0);
  T1 = fun_90;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_92) {
  P let_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(let_exp_, 0);
  T2 = CALL1(1,VARREF(Ytail),let_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_namesAvalues_93) {
  P names_,vals_;
  P rtvaluesF2713;
  P rtnamesF2712;
  P tup29F2711;
  P tmpF2710;
  P nameF2709;
  P tnamesF2708;
  P indexF2707;
  P rtvaluesF2706;
  P rtnamesF2705;
  P tupnameF2704;
  P tmpF2703;
  P valueF2702;
  P nameF2701;
  P valsF2700;
  P namesF2699;
  P rvaluesF2698;
  P rnamesF2697;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
  rnamesF2697 = Ynil;
  rvaluesF2698 = Ynil;
  namesF2699 = names_;
  valsF2700 = vals_;
  for (;;) {
    P a164_0,a164_1,a164_2,a164_3;
  loop164:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),namesF2699);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),rnamesF2697);
      T7 = CALL1(1,VARREF(YgooSmacrosYrevX),rvaluesF2698);
      T5 = CALL2(1,VARREF(Ytup),T6,T7);
      T3 = T5;
    } else {
      T9 = CALL1(1,VARREF(Yhead),namesF2699);
      nameF2701 = T9;
      T11 = CALL1(1,VARREF(Yhead),valsF2700);
      valueF2702 = T11;
      T14 = CALL2(1,VARREF(YisaQ),nameF2701,VARREF(YLlstG));
      tmpF2703 = T14;
      if (tmpF2703 != YPfalse) {
        T17 = CALL1(1,VARREF(Yhead),nameF2701);
        T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,LITREF(lit_66));
        T15 = T16;
      } else {
        T15 = YPfalse;
      }
      T13 = T15;
      if (T13 != YPfalse) {
        T19 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unique_name),LITREF(lit_219));
        tupnameF2704 = T19;
        T22 = CALL1(1,VARREF(Ylst),tupnameF2704);
        rtnamesF2705 = T22;
        T23 = CALL1(1,VARREF(Ylst),valueF2702);
        rtvaluesF2706 = T23;
        indexF2707 = YPint((P)0);
        T24 = CALL1(1,VARREF(Ytail),nameF2701);
        tnamesF2708 = T24;
        for (;;) {
          P a165_0,a165_1,a165_2,a165_3;
        loop165:
          T27 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tnamesF2708);
          if (T27 != YPfalse) {
            T28 = CALL2(1,VARREF(Ytup),rtnamesF2705,rtvaluesF2706);
            T26 = T28;
          } else {
            T30 = CALL1(1,VARREF(Yhead),tnamesF2708);
            nameF2709 = T30;
            T33 = CALL2(1,VARREF(YisaQ),nameF2709,VARREF(YLlstG));
            tmpF2710 = T33;
            if (tmpF2710 != YPfalse) {
              T37 = CALL1(1,VARREF(Ytail),nameF2709);
              T36 = CALL1(1,VARREF(Yhead),T37);
              T35 = CALL2(1,VARREF(YgooSmacrosYEE),T36,LITREF(lit_220));
              T34 = T35;
            } else {
              T34 = YPfalse;
            }
            T32 = T34;
            if (T32 != YPfalse) {
              T41 = CALL1(1,VARREF(Yhead),nameF2709);
              T40 = CALL2(1,VARREF(Ylst),T41,LITREF(lit_221));
              T39 = CALL2(1,VARREF(YgooSmacrosYpair),T40,rtnamesF2705);
              T44 = CALL2(1,VARREF(Ylst),LITREF(lit_223),tupnameF2704);
              T43 = CALL4(1,VARREF(Ylst),LITREF(lit_222),tupnameF2704,indexF2707,T44);
              T42 = CALL2(1,VARREF(YgooSmacrosYpair),T43,rtvaluesF2706);
              T45 = CALL2(1,VARREF(YgooSmathYA),indexF2707,YPint((P)1));
              T46 = CALL1(1,VARREF(Ytail),tnamesF2708);
              a165_0 = T39;
              a165_1 = T42;
              a165_2 = T45;
              a165_3 = T46;
              rtnamesF2705 = a165_0;
              rtvaluesF2706 = a165_1;
              indexF2707 = a165_2;
              tnamesF2708 = a165_3;
              goto loop165;
              T31 = T38;
            } else {
              T48 = CALL2(1,VARREF(YgooSmacrosYpair),nameF2709,rtnamesF2705);
              T50 = CALL3(1,VARREF(Ylst),LITREF(lit_224),tupnameF2704,indexF2707);
              T49 = CALL2(1,VARREF(YgooSmacrosYpair),T50,rtvaluesF2706);
              T51 = CALL2(1,VARREF(YgooSmathYA),indexF2707,YPint((P)1));
              T52 = CALL1(1,VARREF(Ytail),tnamesF2708);
              a165_0 = T48;
              a165_1 = T49;
              a165_2 = T51;
              a165_3 = T52;
              rtnamesF2705 = a165_0;
              rtvaluesF2706 = a165_1;
              indexF2707 = a165_2;
              tnamesF2708 = a165_3;
              goto loop165;
              T31 = T47;
            }
            T29 = T31;
            T26 = T29;
          }
          break;
        }
        T25 = T26;
        T21 = T25;
        tup29F2711 = T21;
        T54 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2711,YPint((P)0));
        rtnamesF2712 = T54;
        T56 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F2711,YPint((P)1));
        rtvaluesF2713 = T56;
        T58 = CALL2(1,VARREF(YgooSmacrosYcat),rtnamesF2712,rnamesF2697);
        T59 = CALL2(1,VARREF(YgooSmacrosYcat),rtvaluesF2713,rvaluesF2698);
        T60 = CALL1(1,VARREF(Ytail),namesF2699);
        T61 = CALL1(1,VARREF(Ytail),valsF2700);
        a164_0 = T58;
        a164_1 = T59;
        a164_2 = T60;
        a164_3 = T61;
        rnamesF2697 = a164_0;
        rvaluesF2698 = a164_1;
        namesF2699 = a164_2;
        valsF2700 = a164_3;
        goto loop164;
        T55 = T57;
        T53 = T55;
        T20 = T53;
        T18 = T20;
        T12 = T18;
      } else {
        T63 = CALL2(1,VARREF(YgooSmacrosYpair),nameF2701,rnamesF2697);
        T64 = CALL2(1,VARREF(YgooSmacrosYpair),valueF2702,rvaluesF2698);
        T65 = CALL1(1,VARREF(Ytail),namesF2699);
        T66 = CALL1(1,VARREF(Ytail),valsF2700);
        a164_0 = T63;
        a164_1 = T64;
        a164_2 = T65;
        a164_3 = T66;
        rnamesF2697 = a164_0;
        rvaluesF2698 = a164_1;
        namesF2699 = a164_2;
        valsF2700 = a164_3;
        goto loop164;
        T12 = T62;
      }
      T10 = T12;
      T8 = T10;
      T3 = T8;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_94) {
  P names_,values_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(names_, 0);
  ARG(values_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(Yhead),names_);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(Ytail),names_);
    T8 = CALL1(1,VARREF(Ytail),values_);
    T6 = CALL2(0,FREEREF(1),T7,T8);
    T3 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_method_tag),T4,T6);
    T10 = CALL1(1,VARREF(Yhead),values_);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),T3,T9);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_Gcombination_95) {
  P let_exp_;
  P colF2720;
  P valuesF2719;
  P namesF2718;
  P tup30F2717;
  P bodyF2716;
  P ovaluesF2715;
  P onamesF2714;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(let_exp_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF2714 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_values),let_exp_);
  ovaluesF2715 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_body),let_exp_);
  bodyF2716 = T5;
  T7 = CALL2(1,VARREF(YevalSsyntaxYsexpr_let_namesAvalues),onamesF2714,ovaluesF2715);
  tup30F2717 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2717,YPint((P)0));
  namesF2718 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F2717,YPint((P)1));
  valuesF2719 = T11;
  T13 = FUNSHELL(1,fun_col_94,2);
  colF2720 = T13;
  FUNINIT(colF2720, 2,bodyF2716,colF2720);
  T14 = CALL2(1,colF2720,namesF2718,valuesF2719);
  T12 = T14;
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_locQ_96) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_locals_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_names_97) {
  P loc_exp_;
  P T0,T1;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_98) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_99) {
  P loc_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = fun_98;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_100) {
  P loc_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = CALL2(1,VARREF(YgooSruntimeYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_101) {
  P loc_exp_;
  P T0,T1;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),loc_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_body_102) {
  P loc_exp_;
  P T0,T1;
LINK_STACK();
  ARG(loc_exp_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterateQ_103) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_iterate_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_name_104) {
  P rep_exp_;
  P T0;
LINK_STACK();
  ARG(rep_exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_105) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_106) {
  P rep_exp_;
  P sigF2721;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(rep_exp_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  sigF2721 = T1;
  T4 = fun_105;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sigF2721);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF2721);
  if (T7 != YPfalse) {
    T6 = Ynil;
  } else {
    T8 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_values_tag));
    T6 = T8;
  }
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF2721);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T2 = CALL3(1,VARREF(YgooSmacrosYcat),T3,T6,T9);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_107) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_108) {
  P rep_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(rep_exp_, 0);
  T1 = fun_107;
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_109) {
  P rep_exp_;
  P T0,T1,T2;
LINK_STACK();
  ARG(rep_exp_, 0);
  T2 = CALL1(1,VARREF(Ytail),rep_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_Gloc_110) {
  P rep_exp_;
  P initsF2725;
  P bodyF2724;
  P sigF2723;
  P nameF2722;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(rep_exp_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_name),rep_exp_);
  nameF2722 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF2723 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF2724 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF2725 = T7;
  T12 = CALL2(1,VARREF(Ylst),nameF2722,sigF2723);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,bodyF2724);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T14 = CALL1(1,VARREF(Ylst),nameF2722);
  T13 = CALL2(1,VARREF(YgooSmacrosYcat),T14,initsF2725);
  T9 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_locals_tag),T10,T13);
  T8 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),rep_exp_,T9);
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_111) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_isa_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_parent_112) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_isa_prop_inits_113) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_props_114) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_115) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_classQ_116) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_class_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_class_parents_117) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_propQ_118) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_prop_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_name_119) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_owner_120) {
  P exp_;
  P paramF2726;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(exp_, 0);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooSmacrosY1st),T2);
  paramF2726 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF2726,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosY2nd),paramF2726);
    T3 = T5;
  } else {
    T3 = paramF2726;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_var_121) {
  P exp_;
  P paramF2727;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(exp_, 0);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooSmacrosY1st),T2);
  paramF2727 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF2727,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),paramF2727);
    T3 = T5;
  } else {
    T3 = LITREF(lit_283);
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_type_122) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_value),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_initQ_123) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),exp_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)4));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_124) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),exp_,YPint((P)3));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_fab_getter_125) {
  P name_,type_,line_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(line_, 2);
  T2 = CALL2(1,VARREF(Ylst),LITREF(lit_283),type_);
  T1 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,T2);
  T4 = CALL3(1,VARREF(Ylst),LITREF(lit_292),LITREF(lit_283),name_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),name_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_126) {
  P name_,type_,prop_type_,line_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(prop_type_, 2);
  ARG(line_, 3);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_295),prop_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_283),type_);
  T2 = CALL3(1,VARREF(YgooScolsSlstYline_list),line_,T3,T4);
  T6 = CALL4(1,VARREF(Ylst),LITREF(lit_296),LITREF(lit_295),LITREF(lit_283),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_name_127) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_299));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_128) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_macro_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macro_expandQ_129) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_macro_expand_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_syntax_if_130) {
  P pat_,exp_,then_,else_;
  P T0,T1;
LINK_STACK();
  ARG(pat_, 0);
  ARG(exp_, 1);
  ARG(then_, 2);
  ARG(else_, 3);
  T1 = CALL2(1,VARREF(Ylst),pat_,exp_);
  T0 = CALL4(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSsyntaxYsexpr_expand_backquote) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(1,VARREF(YevalSsyntaxYeval),T1,LITREF(lit_317));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_132) {
  P x_;
  P resF2729;
  P raw_resultF2728;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
  raw_resultF2728 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),raw_resultF2728);
  resF2729 = T3;
  T2 = resF2729;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_133) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_322));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_134) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_325));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_135) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,VARREF(YevalSsyntaxYDsexpr_quasiquote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_136) {
  P x_;
  P tmpF2730;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF2730 = T1;
  if (tmpF2730 != YPfalse) {
    T3 = tmpF2730;
  } else {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nreconc_137) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T1,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P qF2732;
  P pF2731;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(return_, 0);
  pF2731 = FREEREF(0);
  qF2732 = Ynil;
  for (;;) {
    P a166_0,a166_1;
  loop166:
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),pF2731);
    if (T4 != YPfalse) {
      T9 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_quoteT),pF2731);
      T8 = CALL1(1,VARREF(Ylst),T9);
      T7 = CALL2(1,VARREF(YevalSsyntaxYnreconc),qF2732,T8);
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYTbq_appendT),T7);
      T5 = CALL1(0,return_,T6);
      T3 = T5;
    } else {
      T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pF2731);
      if (T10 != YPfalse) {
        T14 = CALL1(1,VARREF(Ytail),pF2731);
        T13 = CALL1(1,VARREF(Ytail),T14);
        T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
        T11 = CALL1(1,VARREF(Ynot),T12);
        if (T11 != YPfalse) {
          T15 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_336),pF2731);
        } else {
        }
        T21 = CALL1(1,VARREF(Ytail),pF2731);
        T20 = CALL1(1,VARREF(Yhead),T21);
        T19 = CALL1(1,VARREF(Ylst),T20);
        T18 = CALL2(1,VARREF(YevalSsyntaxYnreconc),qF2732,T19);
        T17 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYTbq_appendT),T18);
        T16 = CALL1(0,return_,T17);
      } else {
      }
      T23 = CALL1(1,VARREF(Ytail),pF2731);
      T22 = CALL2(1,VARREF(YgooSmacrosYEE),T23,VARREF(YevalSsyntaxYTcomma_atsignT));
      if (T22 != YPfalse) {
        T24 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_337),pF2731);
      } else {
      }
      T26 = CALL1(1,VARREF(Ytail),pF2731);
      T29 = CALL1(1,VARREF(Yhead),pF2731);
      T28 = CALL1(1,VARREF(YevalSsyntaxYbracket),T29);
      T27 = CALL2(1,VARREF(YgooSmacrosYpair),T28,qF2732);
      a166_0 = T26;
      a166_1 = T27;
      pF2731 = a166_0;
      qF2732 = a166_1;
      goto loop166;
      T3 = T25;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_139) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_quoteT),x_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_backquoteQ),x_);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_build_backquote_expander),T7);
      T5 = CALL1(1,VARREF(YevalSsyntaxYbq_process),T6);
      T3 = T5;
    } else {
      T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),x_);
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(Ytail),x_);
        T11 = CALL1(1,VARREF(Yhead),T12);
        T9 = T11;
      } else {
        T14 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),x_);
        if (T14 != YPfalse) {
          T18 = CALL0(1,x_);
          T17 = CALL1(1,VARREF(Ytail),T18);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_334),T16);
          T13 = T15;
        } else {
          if (YPtrue != YPfalse) {
            T21 = FUNFAB(fun_138,1,x_);
            T20 = with_exit(T21);
            T19 = T20;
          } else {
            T19 = YPfalse;
          }
          T13 = T19;
        }
        T9 = T13;
      }
      T3 = T9;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bracket_140) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
    T2 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),x_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T7);
      T4 = T6;
    } else {
      T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),x_);
      if (T10 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Yhead),T13);
        T11 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_clobberableT),T12);
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
          T15 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T16);
          T14 = T15;
        } else {
          T14 = YPfalse;
        }
        T9 = T14;
      }
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_tree_141) {
  P fn_,x_;
  P tmpF2735;
  P dF2734;
  P aF2733;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(fn_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fn_,x_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL1(1,fn_,T5);
    aF2733 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),fn_,T8);
    dF2734 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YgooSmathYE),aF2733,T12);
    tmpF2735 = T11;
    if (tmpF2735 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YgooSmathYE),dF2734,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),aF2733,dF2734);
      T9 = T16;
    }
    T6 = T9;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_142) {
  P x_;
  P tmpF2737;
  P tmpF2736;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_158);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_344);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_345);
      } else {
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_346);
        } else {
          T9 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_quoteT));
          if (T9 != YPfalse) {
            T8 = LITREF(lit_6);
          } else {
            T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
            if (T11 != YPfalse) {
              T10 = x_;
            } else {
              T14 = CALL1(1,VARREF(Yhead),x_);
              T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,VARREF(YevalSsyntaxYTbq_clobberableT));
              if (T13 != YPfalse) {
                T17 = CALL1(1,VARREF(Ytail),x_);
                T16 = CALL1(1,VARREF(Yhead),T17);
                T15 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),T16);
                T12 = T15;
              } else {
                T21 = CALL1(1,VARREF(Yhead),x_);
                T20 = CALL2(1,VARREF(YgooSmacrosYEE),T21,VARREF(YevalSsyntaxYTbq_listTT));
                tmpF2736 = T20;
                if (tmpF2736 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF2737 = T24;
                  if (tmpF2737 != YPfalse) {
                    T32 = CALL1(1,VARREF(Ytail),x_);
                    T31 = CALL1(1,VARREF(Ytail),T32);
                    T30 = CALL1(1,VARREF(Ytail),T31);
                    T29 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T30);
                    T28 = T29;
                  } else {
                    T28 = YPfalse;
                  }
                  T23 = T28;
                  T22 = T23;
                } else {
                  T22 = YPfalse;
                }
                T19 = T22;
                if (T19 != YPfalse) {
                  T35 = CALL1(1,VARREF(Ytail),x_);
                  T34 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),VARREF(YevalSsyntaxYbq_remove_tokens),T35);
                  T33 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_347),T34);
                  T18 = T33;
                } else {
                  if (YPtrue != YPfalse) {
                    T37 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),VARREF(YevalSsyntaxYbq_remove_tokens),x_);
                    T36 = T37;
                  } else {
                    T36 = YPfalse;
                  }
                  T18 = T36;
                }
                T12 = T18;
              }
              T10 = T12;
            }
            T8 = T10;
          }
          T6 = T8;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_ifQ_143) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_syntax_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_value_144) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_145) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_146) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_147) {
  P exp_;
  P T0;
LINK_STACK();
  ARG(exp_, 0);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),exp_,YPint((P)3),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_148) {
  P pat_;
  P tmpF2738;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  tmpF2738 = T1;
  if (tmpF2738 != YPfalse) {
    T2 = tmpF2738;
  } else {
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_149) {
  P pat_;
  P T0;
LINK_STACK();
  ARG(pat_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_150) {
  P pat_;
  P xF2740;
  P tmpF2739;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(pat_, 0);
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF2739 = T2;
  if (tmpF2739 != YPfalse) {
    T4 = tmpF2739;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF2740 = T7;
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variableQ),xF2740);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variable_name),xF2740);
      T13 = CALL1(1,VARREF(Ytail),pat_);
      T12 = CALL1(0,FREEREF(0),T13);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,T12);
      T8 = T10;
    } else {
      T16 = CALL1(1,VARREF(Yhead),pat_);
      T15 = CALL1(0,FREEREF(0),T16);
      T18 = CALL1(1,VARREF(Ytail),pat_);
      T17 = CALL1(0,FREEREF(0),T18);
      T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,T17);
      T8 = T14;
    }
    T6 = T8;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_bind_pattern_variables_151) {
  P pat_;
  P colF2741;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(pat_, 0);
  T2 = FUNSHELL(1,fun_col_150,1);
  colF2741 = T2;
  FUNINIT(colF2741, 1,colF2741);
  T3 = CALL1(1,colF2741,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_152) {
  P name_,exp_;
  P funcF2743;
  P mifF2742;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(name_, 0);
  ARG(exp_, 1);
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_368));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T10 = CALL1(1,VARREF(Ylst),name_);
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,T10,Ynil);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_367));
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T11,LITREF(lit_68));
  T1 = CALL4(1,VARREF(YevalSsyntaxYsexpr_make_syntax_if),T2,LITREF(lit_367),T3,T5);
  mifF2742 = T1;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_367));
  T15 = CALL1(1,VARREF(Ylst),mifF2742);
  T13 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T14,T15);
  funcF2743 = T13;
  T12 = funcF2743;
  T0 = T12;
UNLINK_STACK();
  QRET(T0);
}

P YevalSsyntaxY___main_0___() {
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
  P T192,T193,T194,T195,T196;
DEFCREGS();
  lit_0 = YPPsym((P)"sexpr-self-evaluating?");
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(8));
  T2 = VARREF_OR(YevalSsyntaxYsexpr_self_evaluatingQ,YPfalse);
  T3 = fun_sexpr_self_evaluatingQ_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_self_evaluatingQ,T1);
  lit_2 = YPPsym((P)"sexpr-variable?");
  lit_3 = YPPlist(1,YPPsym((P)"exp"));
  T4 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(19));
  T6 = VARREF_OR(YevalSsyntaxYsexpr_variableQ,YPfalse);
  T7 = fun_sexpr_variableQ_1;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_variableQ,T5);
  lit_4 = YPPsym((P)"sexpr-tagged-list?");
  lit_5 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"tag"));
  T8 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),LITREF(lit_4),T8,ENVNUL,PNUL,sloc(24));
  T10 = VARREF_OR(YevalSsyntaxYsexpr_tagged_listQ,YPfalse);
  T11 = fun_sexpr_tagged_listQ_2;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_tagged_listQ,T9);
  lit_6 = YPPsym((P)"quote");
  VARSET(YevalSsyntaxYDsexpr_quote_tag,LITREF(lit_6));
  lit_7 = YPPsym((P)"sexpr-quoted?");
  lit_8 = YPPlist(1,YPPsym((P)"exp"));
  T12 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),LITREF(lit_7),T12,ENVNUL,PNUL,sloc(31));
  T14 = VARREF_OR(YevalSsyntaxYsexpr_quotedQ,YPfalse);
  T15 = fun_sexpr_quotedQ_3;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSsyntaxYsexpr_quotedQ,T13);
  lit_9 = YPPsym((P)"sexpr-make-quote");
  lit_10 = YPPlist(1,YPPsym((P)"exp"));
  T16 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),LITREF(lit_9),T16,ENVNUL,PNUL,sloc(34));
  T18 = VARREF_OR(YevalSsyntaxYsexpr_make_quote,YPfalse);
  T19 = fun_sexpr_make_quote_4;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSsyntaxYsexpr_make_quote,T17);
  lit_11 = YPPsym((P)"sexpr-text-of-quotation");
  lit_12 = YPPlist(1,YPPsym((P)"quot"));
  T20 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),LITREF(lit_11),T20,ENVNUL,PNUL,sloc(37));
  T22 = VARREF_OR(YevalSsyntaxYsexpr_text_of_quotation,YPfalse);
  T23 = fun_sexpr_text_of_quotation_5;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSsyntaxYsexpr_text_of_quotation,T21);
  lit_13 = YPPsym((P)"set");
  VARSET(YevalSsyntaxYDsexpr_set_tag,LITREF(lit_13));
  lit_14 = YPPsym((P)"sexpr-assignment?");
  lit_15 = YPPlist(1,YPPsym((P)"exp"));
  T24 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),LITREF(lit_14),T24,ENVNUL,PNUL,sloc(44));
  T26 = VARREF_OR(YevalSsyntaxYsexpr_assignmentQ,YPfalse);
  T27 = fun_sexpr_assignmentQ_6;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSsyntaxYsexpr_assignmentQ,T25);
  lit_16 = YPPsym((P)"sexpr-assignment-variable");
  lit_17 = YPPlist(1,YPPsym((P)"assn"));
  T28 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),LITREF(lit_16),T28,ENVNUL,PNUL,sloc(47));
  T30 = VARREF_OR(YevalSsyntaxYsexpr_assignment_variable,YPfalse);
  T31 = fun_sexpr_assignment_variable_7;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YevalSsyntaxYsexpr_assignment_variable,T29);
  lit_18 = YPPsym((P)"sexpr-assignment-value");
  lit_19 = YPPlist(1,YPPsym((P)"assn"));
  T32 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),LITREF(lit_18),T32,ENVNUL,PNUL,sloc(50));
  T34 = VARREF_OR(YevalSsyntaxYsexpr_assignment_value,YPfalse);
  T35 = fun_sexpr_assignment_value_8;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSsyntaxYsexpr_assignment_value,T33);
  lit_20 = YPPsym((P)"sexpr-variable-name");
  lit_21 = YPPlist(1,YPPsym((P)"exp"));
  T36 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),LITREF(lit_20),T36,ENVNUL,PNUL,sloc(55));
  T38 = VARREF_OR(YevalSsyntaxYsexpr_variable_name,YPfalse);
  T39 = fun_sexpr_variable_name_9;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSsyntaxYsexpr_variable_name,T37);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  T40 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),LITREF(lit_20),T40,ENVNUL,PNUL,sloc(58));
  T42 = VARREF_OR(YevalSsyntaxYsexpr_variable_name,YPfalse);
  T43 = fun_sexpr_variable_name_10;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSsyntaxYsexpr_variable_name,T41);
  lit_23 = YPPsym((P)"sexpr-variable-type");
  lit_24 = YPPlist(1,YPPsym((P)"exp"));
  T44 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),LITREF(lit_23),T44,ENVNUL,PNUL,sloc(61));
  T46 = VARREF_OR(YevalSsyntaxYsexpr_variable_type,YPfalse);
  T47 = fun_sexpr_variable_type_11;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSsyntaxYsexpr_variable_type,T45);
  lit_25 = YPPlist(1,YPPsym((P)"exp"));
  lit_26 = YPPsym((P)"<any>");
  T48 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),LITREF(lit_23),T48,ENVNUL,PNUL,sloc(64));
  T50 = VARREF_OR(YevalSsyntaxYsexpr_variable_type,YPfalse);
  T51 = fun_sexpr_variable_type_12;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSsyntaxYsexpr_variable_type,T49);
  lit_27 = YPPsym((P)"dv");
  VARSET(YevalSsyntaxYDsexpr_define_tag,LITREF(lit_27));
  lit_28 = YPPsym((P)"sexpr-definition?");
  lit_29 = YPPlist(1,YPPsym((P)"exp"));
  T52 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),LITREF(lit_28),T52,ENVNUL,PNUL,sloc(71));
  T54 = VARREF_OR(YevalSsyntaxYsexpr_definitionQ,YPfalse);
  T55 = fun_sexpr_definitionQ_13;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSsyntaxYsexpr_definitionQ,T53);
  lit_30 = YPPsym((P)"quasiquote");
  VARSET(YevalSsyntaxYDsexpr_quasiquote_tag,LITREF(lit_30));
  lit_31 = YPPsym((P)"sexpr-definition-variable");
  lit_32 = YPPlist(1,YPPsym((P)"defn"));
  T56 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),LITREF(lit_31),T56,ENVNUL,PNUL,sloc(76));
  T58 = VARREF_OR(YevalSsyntaxYsexpr_definition_variable,YPfalse);
  T59 = fun_sexpr_definition_variable_14;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSsyntaxYsexpr_definition_variable,T57);
  lit_33 = YPPsym((P)"sexpr-definition-value");
  lit_34 = YPPlist(1,YPPsym((P)"defn"));
  T60 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),LITREF(lit_33),T60,ENVNUL,PNUL,sloc(79));
  T62 = VARREF_OR(YevalSsyntaxYsexpr_definition_value,YPfalse);
  T63 = fun_sexpr_definition_value_15;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSsyntaxYsexpr_definition_value,T61);
  lit_35 = YPPsym((P)"ds");
  VARSET(YevalSsyntaxYDsexpr_define_syntax_tag,LITREF(lit_35));
  lit_36 = YPPsym((P)"sexpr-syntax-definition?");
  lit_37 = YPPlist(1,YPPsym((P)"exp"));
  T64 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),LITREF(lit_36),T64,ENVNUL,PNUL,sloc(84));
  T66 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definitionQ,YPfalse);
  T67 = fun_sexpr_syntax_definitionQ_16;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSsyntaxYsexpr_syntax_definitionQ,T65);
  lit_38 = YPPsym((P)"mac");
  VARSET(YevalSsyntaxYDsexpr_macro_tag,LITREF(lit_38));
  lit_39 = YPPsym((P)"sexpr-syntax-definition-variable");
  lit_40 = YPPlist(1,YPPsym((P)"defn"));
  T68 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),LITREF(lit_39),T68,ENVNUL,PNUL,sloc(89));
  T70 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definition_variable,YPfalse);
  T71 = fun_sexpr_syntax_definition_variable_17;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_variable,T69);
  lit_41 = YPPsym((P)"sexpr-syntax-definition-value");
  lit_42 = YPPlist(1,YPPsym((P)"defn"));
  T72 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),LITREF(lit_41),T72,ENVNUL,PNUL,sloc(92));
  T74 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definition_value,YPfalse);
  T75 = fun_sexpr_syntax_definition_value_18;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_value,T73);
  lit_43 = YPPsym((P)"df");
  VARSET(YevalSsyntaxYDsexpr_define_function_tag,LITREF(lit_43));
  lit_44 = YPPsym((P)"sexpr-function-definition?");
  lit_45 = YPPlist(1,YPPsym((P)"exp"));
  T76 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),LITREF(lit_44),T76,ENVNUL,PNUL,sloc(98));
  T78 = VARREF_OR(YevalSsyntaxYsexpr_function_definitionQ,YPfalse);
  T79 = fun_sexpr_function_definitionQ_19;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YevalSsyntaxYsexpr_function_definitionQ,T77);
  lit_46 = YPPsym((P)"dm");
  VARSET(YevalSsyntaxYDsexpr_define_method_tag,LITREF(lit_46));
  lit_47 = YPPsym((P)"sexpr-method-definition?");
  lit_48 = YPPlist(1,YPPsym((P)"exp"));
  T80 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),LITREF(lit_47),T80,ENVNUL,PNUL,sloc(103));
  T82 = VARREF_OR(YevalSsyntaxYsexpr_method_definitionQ,YPfalse);
  T83 = fun_sexpr_method_definitionQ_20;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YevalSsyntaxYsexpr_method_definitionQ,T81);
  lit_49 = YPPsym((P)"dg");
  VARSET(YevalSsyntaxYDsexpr_define_generic_tag,LITREF(lit_49));
  lit_50 = YPPsym((P)"sexpr-generic-definition?");
  lit_51 = YPPlist(1,YPPsym((P)"exp"));
  T84 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),LITREF(lit_50),T84,ENVNUL,PNUL,sloc(108));
  T86 = VARREF_OR(YevalSsyntaxYsexpr_generic_definitionQ,YPfalse);
  T87 = fun_sexpr_generic_definitionQ_21;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YevalSsyntaxYsexpr_generic_definitionQ,T85);
  lit_52 = YPPsym((P)"sexpr-function-definition-variable");
  lit_53 = YPPlist(1,YPPsym((P)"defn"));
  T88 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),LITREF(lit_52),T88,ENVNUL,PNUL,sloc(113));
  T90 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_variable,YPfalse);
  T91 = fun_sexpr_function_definition_variable_22;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YevalSsyntaxYsexpr_function_definition_variable,T89);
  lit_54 = YPPsym((P)"sexpr-function-definition-adjectives");
  lit_55 = YPPlist(1,YPPsym((P)"defn"));
  T92 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_adjectives_23 = YPmet(FUNCODEREF(fun_sexpr_function_definition_adjectives_23),LITREF(lit_54),T92,ENVNUL,PNUL,sloc(119));
  T94 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_adjectives,YPfalse);
  T95 = fun_sexpr_function_definition_adjectives_23;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSsyntaxYsexpr_function_definition_adjectives,T93);
  lit_56 = YPPsym((P)"sexpr-forward-primitive?");
  lit_57 = YPPlist(1,YPPsym((P)"defn"));
  T96 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_24 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_24),LITREF(lit_56),T96,ENVNUL,PNUL,sloc(125));
  T98 = VARREF_OR(YevalSsyntaxYsexpr_forward_primitiveQ,YPfalse);
  T99 = fun_sexpr_forward_primitiveQ_24;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSsyntaxYsexpr_forward_primitiveQ,T97);
  lit_58 = YPPsym((P)"sexpr-signature-parameters");
  lit_59 = YPPlist(1,YPPsym((P)"signature"));
  lit_60 = YPPsym((P)"=>");
  T100 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_25 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_25),LITREF(lit_58),T100,ENVNUL,PNUL,sloc(128));
  T102 = VARREF_OR(YevalSsyntaxYsexpr_signature_parameters,YPfalse);
  T103 = fun_sexpr_signature_parameters_25;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSsyntaxYsexpr_signature_parameters,T101);
  lit_61 = YPPsym((P)"sexpr-value-type");
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T104 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_26 = YPmet(FUNCODEREF(fun_sexpr_value_type_26),LITREF(lit_61),T104,ENVNUL,PNUL,sloc(134));
  T106 = VARREF_OR(YevalSsyntaxYsexpr_value_type,YPfalse);
  T107 = fun_sexpr_value_type_26;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSsyntaxYsexpr_value_type,T105);
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  T108 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_27 = YPmet(FUNCODEREF(fun_sexpr_value_type_27),LITREF(lit_61),T108,ENVNUL,PNUL,sloc(136));
  T110 = VARREF_OR(YevalSsyntaxYsexpr_value_type,YPfalse);
  T111 = fun_sexpr_value_type_27;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSsyntaxYsexpr_value_type,T109);
  lit_64 = YPPsym((P)"sexpr-signature-value");
  lit_65 = YPPlist(1,YPPsym((P)"signature"));
  lit_66 = YPPsym((P)"tup");
  lit_67 = YPPsym((P)"t*");
  lit_68 = Ynil;
  T112 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_28 = YPmet(FUNCODEREF(fun_sexpr_signature_value_28),LITREF(lit_64),T112,ENVNUL,PNUL,sloc(138));
  T114 = VARREF_OR(YevalSsyntaxYsexpr_signature_value,YPfalse);
  T115 = fun_sexpr_signature_value_28;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSsyntaxYsexpr_signature_value,T113);
  lit_69 = YPPsym((P)"as-signature");
  lit_70 = YPPlist(1,YPPsym((P)"sig"));
  T116 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYas_signature = YPmet(FUNCODEREF(YevalSsyntaxYas_signature),LITREF(lit_69),T116,ENVNUL,PNUL,sloc(146));
  T117 = YevalSsyntaxYas_signature;
  VARSET(YevalSsyntaxYas_signature,T117);
  lit_71 = YPPsym((P)"sexpr-function-signature");
  lit_72 = YPPlist(1,YPPsym((P)"defn"));
  T118 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_30 = YPmet(FUNCODEREF(fun_sexpr_function_signature_30),LITREF(lit_71),T118,ENVNUL,PNUL,sloc(149));
  T120 = VARREF_OR(YevalSsyntaxYsexpr_function_signature,YPfalse);
  T121 = fun_sexpr_function_signature_30;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YevalSsyntaxYsexpr_function_signature,T119);
  lit_73 = YPPsym((P)"sexpr-function-parameters");
  lit_74 = YPPlist(1,YPPsym((P)"defn"));
  T122 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_31 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_31),LITREF(lit_73),T122,ENVNUL,PNUL,sloc(152));
  T124 = VARREF_OR(YevalSsyntaxYsexpr_function_parameters,YPfalse);
  T125 = fun_sexpr_function_parameters_31;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YevalSsyntaxYsexpr_function_parameters,T123);
  lit_75 = YPPsym((P)"sexpr-function-value");
  lit_76 = YPPlist(1,YPPsym((P)"defn"));
  T126 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_32 = YPmet(FUNCODEREF(fun_sexpr_function_value_32),LITREF(lit_75),T126,ENVNUL,PNUL,sloc(155));
  T128 = VARREF_OR(YevalSsyntaxYsexpr_function_value,YPfalse);
  T129 = fun_sexpr_function_value_32;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T129);
  VARSET(YevalSsyntaxYsexpr_function_value,T127);
  lit_77 = YPPsym((P)"sexpr-function-body");
  lit_78 = YPPlist(1,YPPsym((P)"defn"));
  T130 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_33 = YPmet(FUNCODEREF(fun_sexpr_function_body_33),LITREF(lit_77),T130,ENVNUL,PNUL,sloc(158));
  T132 = VARREF_OR(YevalSsyntaxYsexpr_function_body,YPfalse);
  T133 = fun_sexpr_function_body_33;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YevalSsyntaxYsexpr_function_body,T131);
  lit_79 = YPPsym((P)"fun");
  VARSET(YevalSsyntaxYDsexpr_method_tag,LITREF(lit_79));
  lit_80 = YPPsym((P)"sexpr-function-definition-value");
  lit_81 = YPPlist(1,YPPsym((P)"defn"));
  T134 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_34 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_34),LITREF(lit_80),T134,ENVNUL,PNUL,sloc(164));
  T136 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_value,YPfalse);
  T137 = fun_sexpr_function_definition_value_34;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YevalSsyntaxYsexpr_function_definition_value,T135);
  lit_82 = YPPsym((P)"sexpr-method?");
  lit_83 = YPPlist(1,YPPsym((P)"exp"));
  T138 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_35 = YPmet(FUNCODEREF(fun_sexpr_methodQ_35),LITREF(lit_82),T138,ENVNUL,PNUL,sloc(171));
  T140 = VARREF_OR(YevalSsyntaxYsexpr_methodQ,YPfalse);
  T141 = fun_sexpr_methodQ_35;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YevalSsyntaxYsexpr_methodQ,T139);
  lit_84 = YPPsym((P)"sexpr-method-signature");
  lit_85 = YPPlist(1,YPPsym((P)"method-exp"));
  T142 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_36 = YPmet(FUNCODEREF(fun_sexpr_method_signature_36),LITREF(lit_84),T142,ENVNUL,PNUL,sloc(174));
  T144 = VARREF_OR(YevalSsyntaxYsexpr_method_signature,YPfalse);
  T145 = fun_sexpr_method_signature_36;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YevalSsyntaxYsexpr_method_signature,T143);
  lit_86 = YPPsym((P)"sexpr-method-parameters");
  lit_87 = YPPlist(1,YPPsym((P)"method-exp"));
  T146 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_37 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_37),LITREF(lit_86),T146,ENVNUL,PNUL,sloc(177));
  T148 = VARREF_OR(YevalSsyntaxYsexpr_method_parameters,YPfalse);
  T149 = fun_sexpr_method_parameters_37;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YevalSsyntaxYsexpr_method_parameters,T147);
  lit_88 = YPPsym((P)"sexpr-method-value");
  lit_89 = YPPlist(1,YPPsym((P)"method-exp"));
  T150 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_38 = YPmet(FUNCODEREF(fun_sexpr_method_value_38),LITREF(lit_88),T150,ENVNUL,PNUL,sloc(180));
  T152 = VARREF_OR(YevalSsyntaxYsexpr_method_value,YPfalse);
  T153 = fun_sexpr_method_value_38;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YevalSsyntaxYsexpr_method_value,T151);
  lit_90 = YPPsym((P)"sexpr-method-body");
  lit_91 = YPPlist(1,YPPsym((P)"method-exp"));
  T154 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_39 = YPmet(FUNCODEREF(fun_sexpr_method_body_39),LITREF(lit_90),T154,ENVNUL,PNUL,sloc(183));
  T156 = VARREF_OR(YevalSsyntaxYsexpr_method_body,YPfalse);
  T157 = fun_sexpr_method_body_39;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YevalSsyntaxYsexpr_method_body,T155);
  lit_92 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_93 = YPPlist(2,YPPsym((P)"parameters"),YPPsym((P)"body"));
  T158 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_40 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_40),LITREF(lit_92),T158,ENVNUL,PNUL,sloc(188));
  T160 = VARREF_OR(YevalSsyntaxYsexpr_make_anonymous_method,YPfalse);
  T161 = fun_sexpr_make_anonymous_method_40;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YevalSsyntaxYsexpr_make_anonymous_method,T159);
  lit_94 = YPPsym((P)"sexpr-make-method");
  lit_95 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"parameters"),YPPsym((P)"body"));
  T162 = YPsig(LITREF(lit_95),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_41 = YPmet(FUNCODEREF(fun_sexpr_make_method_41),LITREF(lit_94),T162,ENVNUL,PNUL,sloc(193));
  T164 = VARREF_OR(YevalSsyntaxYsexpr_make_method,YPfalse);
  T165 = fun_sexpr_make_method_41;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YevalSsyntaxYsexpr_make_method,T163);
  lit_96 = YPPsym((P)"if");
  VARSET(YevalSsyntaxYDsexpr_if_tag,LITREF(lit_96));
  lit_97 = YPPsym((P)"sexpr-if?");
  lit_98 = YPPlist(1,YPPsym((P)"exp"));
  T166 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_42 = YPmet(FUNCODEREF(fun_sexpr_ifQ_42),LITREF(lit_97),T166,ENVNUL,PNUL,sloc(201));
  T168 = VARREF_OR(YevalSsyntaxYsexpr_ifQ,YPfalse);
  T169 = fun_sexpr_ifQ_42;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T169);
  VARSET(YevalSsyntaxYsexpr_ifQ,T167);
  lit_99 = YPPsym((P)"sexpr-if-test");
  lit_100 = YPPlist(1,YPPsym((P)"exp"));
  T170 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_43 = YPmet(FUNCODEREF(fun_sexpr_if_test_43),LITREF(lit_99),T170,ENVNUL,PNUL,sloc(204));
  T172 = VARREF_OR(YevalSsyntaxYsexpr_if_test,YPfalse);
  T173 = fun_sexpr_if_test_43;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YevalSsyntaxYsexpr_if_test,T171);
  lit_101 = YPPsym((P)"sexpr-if-then");
  lit_102 = YPPlist(1,YPPsym((P)"exp"));
  T174 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_44 = YPmet(FUNCODEREF(fun_sexpr_if_then_44),LITREF(lit_101),T174,ENVNUL,PNUL,sloc(207));
  T176 = VARREF_OR(YevalSsyntaxYsexpr_if_then,YPfalse);
  T177 = fun_sexpr_if_then_44;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T177);
  VARSET(YevalSsyntaxYsexpr_if_then,T175);
  lit_103 = YPPsym((P)"sexpr-if-else");
  lit_104 = YPPlist(1,YPPsym((P)"exp"));
  T178 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_45 = YPmet(FUNCODEREF(fun_sexpr_if_else_45),LITREF(lit_103),T178,ENVNUL,PNUL,sloc(210));
  T180 = VARREF_OR(YevalSsyntaxYsexpr_if_else,YPfalse);
  T181 = fun_sexpr_if_else_45;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T181);
  VARSET(YevalSsyntaxYsexpr_if_else,T179);
  lit_105 = YPPsym((P)"sexpr-make-if");
  lit_106 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"then"),YPPsym((P)"else"));
  T182 = YPsig(LITREF(lit_106),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_46 = YPmet(FUNCODEREF(fun_sexpr_make_if_46),LITREF(lit_105),T182,ENVNUL,PNUL,sloc(215));
  T184 = VARREF_OR(YevalSsyntaxYsexpr_make_if,YPfalse);
  T185 = fun_sexpr_make_if_46;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T185);
  VARSET(YevalSsyntaxYsexpr_make_if,T183);
  lit_107 = YPPsym((P)"esc");
  VARSET(YevalSsyntaxYDsexpr_bind_exit_tag,LITREF(lit_107));
  lit_108 = YPPsym((P)"sexpr-block?");
  lit_109 = YPPlist(1,YPPsym((P)"exp"));
  T186 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_47 = YPmet(FUNCODEREF(fun_sexpr_blockQ_47),LITREF(lit_108),T186,ENVNUL,PNUL,sloc(222));
  T188 = VARREF_OR(YevalSsyntaxYsexpr_blockQ,YPfalse);
  T189 = fun_sexpr_blockQ_47;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T189);
  VARSET(YevalSsyntaxYsexpr_blockQ,T187);
  lit_110 = YPPsym((P)"sexpr-block-name");
  lit_111 = YPPlist(1,YPPsym((P)"exp"));
  T192 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T191 = fun_sexpr_block_name_48 = YPmet(FUNCODEREF(fun_sexpr_block_name_48),LITREF(lit_110),T192,ENVNUL,PNUL,sloc(227));
  T195 = VARREF_OR(YevalSsyntaxYsexpr_block_name,YPfalse);
  T196 = fun_sexpr_block_name_48;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T196);
  T193 = VARSET(YevalSsyntaxYsexpr_block_name,T194);
  T190 = T193;
  return T190;
}

P YevalSsyntaxY___main_1___() {
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
DEFCREGS();
  lit_112 = YPPsym((P)"sexpr-block-body");
  lit_113 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_49 = YPmet(FUNCODEREF(fun_sexpr_block_body_49),LITREF(lit_112),T0,ENVNUL,PNUL,sloc(230));
  T2 = VARREF_OR(YevalSsyntaxYsexpr_block_body,YPfalse);
  T3 = fun_sexpr_block_body_49;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_block_body,T1);
  lit_114 = YPPsym((P)"fin");
  VARSET(YevalSsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_114));
  lit_115 = YPPsym((P)"sexpr-unwind-protect?");
  lit_116 = YPPlist(1,YPPsym((P)"exp"));
  T4 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_50 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_50),LITREF(lit_115),T4,ENVNUL,PNUL,sloc(237));
  T6 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protectQ,YPfalse);
  T7 = fun_sexpr_unwind_protectQ_50;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_unwind_protectQ,T5);
  lit_117 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  lit_118 = YPPlist(1,YPPsym((P)"exp"));
  T8 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_51 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_51),LITREF(lit_117),T8,ENVNUL,PNUL,sloc(240));
  T10 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protect_protected_form,YPfalse);
  T11 = fun_sexpr_unwind_protect_protected_form_51;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_protected_form,T9);
  lit_119 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  lit_120 = YPPlist(1,YPPsym((P)"exp"));
  T12 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_52 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_52),LITREF(lit_119),T12,ENVNUL,PNUL,sloc(243));
  T14 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,YPfalse);
  T15 = fun_sexpr_unwind_protect_cleanup_forms_52;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,T13);
  lit_121 = YPPsym((P)"try");
  VARSET(YevalSsyntaxYDsexpr_monitor_tag,LITREF(lit_121));
  lit_122 = YPPsym((P)"sexpr-monitor?");
  lit_123 = YPPlist(1,YPPsym((P)"exp"));
  T16 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_53 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_53),LITREF(lit_122),T16,ENVNUL,PNUL,sloc(250));
  T18 = VARREF_OR(YevalSsyntaxYsexpr_monitorQ,YPfalse);
  T19 = fun_sexpr_monitorQ_53;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSsyntaxYsexpr_monitorQ,T17);
  lit_124 = YPPsym((P)"sexpr-monitor-expand");
  lit_125 = YPPlist(1,YPPsym((P)"exp"));
  lit_126 = YPPlist(1,YPPsym((P)"return"));
  lit_127 = YPPsym((P)"x-1425");
  lit_128 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_129 = YPsb((P)"Malformed TRY expression: ~=");
  lit_130 = YPsb((P)"Match Pattern Failure");
  lit_131 = YPPsym((P)"type");
  T22 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1425_54 = YPmet(FUNCODEREF(fun_x_1425_54),LITREF(lit_127),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_56),LITREF(lit_124),T20,ENVNUL,PNUL,sloc(253));
  T24 = VARREF_OR(YevalSsyntaxYsexpr_monitor_expand,YPfalse);
  T25 = fun_sexpr_monitor_expand_56;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSsyntaxYsexpr_monitor_expand,T23);
  lit_132 = YPPsym((P)"find-option");
  lit_133 = YPPlist(3,YPPsym((P)"options"),YPPsym((P)"option"),YPPsym((P)"default"));
  T26 = YPsig(LITREF(lit_133),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSsyntaxYfind_option = YPmet(FUNCODEREF(YevalSsyntaxYfind_option),LITREF(lit_132),T26,ENVNUL,PNUL,sloc(264));
  T27 = YevalSsyntaxYfind_option;
  VARSET(YevalSsyntaxYfind_option,T27);
  lit_134 = YPPsym((P)"sexpr-monitor-type");
  lit_135 = YPPlist(1,YPPsym((P)"options"));
  lit_136 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_137 = YPPlist(1,YPPsym((P)"return"));
  lit_138 = YPPsym((P)"x-1427");
  lit_139 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_140 = YPsb((P)"Malformed TRY condition type: %=");
  T30 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1427_58 = YPmet(FUNCODEREF(fun_x_1427_58),LITREF(lit_138),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_60 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_60),LITREF(lit_134),T28,ENVNUL,PNUL,sloc(270));
  T32 = VARREF_OR(YevalSsyntaxYsexpr_monitor_type,YPfalse);
  T33 = fun_sexpr_monitor_type_60;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSsyntaxYsexpr_monitor_type,T31);
  lit_141 = YPPsym((P)"sexpr-monitor-info");
  lit_142 = YPPlist(1,YPPsym((P)"options"));
  lit_143 = YPPsym((P)"info");
  lit_144 = YPPsym((P)"description");
  lit_145 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-1429");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPsb((P)"Malformed TRY info expression: %=");
  lit_150 = YPPlist(1,YPPsym((P)"return"));
  lit_151 = YPPsym((P)"x-1431");
  lit_152 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_153 = YPsb((P)"Malformed TRY description: %=");
  lit_154 = YPPsym((P)"new");
  lit_155 = YPPsym((P)"<simple-handler-info>");
  lit_156 = YPPsym((P)"handler-info-message");
  lit_157 = YPPsym((P)"handler-info-arguments");
  lit_158 = YPPsym((P)"lst");
  lit_159 = YPPsym((P)"$default-handler-info");
  T38 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1429_61 = YPmet(FUNCODEREF(fun_x_1429_61),LITREF(lit_147),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1431_63 = YPmet(FUNCODEREF(fun_x_1431_63),LITREF(lit_151),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_65 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_65),LITREF(lit_141),T34,ENVNUL,PNUL,sloc(277));
  T40 = VARREF_OR(YevalSsyntaxYsexpr_monitor_info,YPfalse);
  T41 = fun_sexpr_monitor_info_65;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalSsyntaxYsexpr_monitor_info,T39);
  lit_160 = YPPsym((P)"sexpr-monitor-test");
  lit_161 = YPPlist(1,YPPsym((P)"options"));
  lit_162 = YPPsym((P)"test");
  lit_163 = YPPlist(1,YPtrue);
  T42 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_66 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_66),LITREF(lit_160),T42,ENVNUL,PNUL,sloc(296));
  T44 = VARREF_OR(YevalSsyntaxYsexpr_monitor_test,YPfalse);
  T45 = fun_sexpr_monitor_test_66;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSsyntaxYsexpr_monitor_test,T43);
  lit_164 = YPPsym((P)"sexpr-monitor-body");
  lit_165 = YPPlist(1,YPPsym((P)"body"));
  T46 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_67 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_67),LITREF(lit_164),T46,ENVNUL,PNUL,sloc(300));
  T48 = VARREF_OR(YevalSsyntaxYsexpr_monitor_body,YPfalse);
  T49 = fun_sexpr_monitor_body_67;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSsyntaxYsexpr_monitor_body,T47);
  lit_166 = YPPsym((P)"seq");
  VARSET(YevalSsyntaxYDsexpr_begin_tag,LITREF(lit_166));
  lit_167 = YPPsym((P)"sexpr-begin?");
  lit_168 = YPPlist(1,YPPsym((P)"exp"));
  T50 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_68 = YPmet(FUNCODEREF(fun_sexpr_beginQ_68),LITREF(lit_167),T50,ENVNUL,PNUL,sloc(307));
  T52 = VARREF_OR(YevalSsyntaxYsexpr_beginQ,YPfalse);
  T53 = fun_sexpr_beginQ_68;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSsyntaxYsexpr_beginQ,T51);
  lit_169 = YPPsym((P)"sexpr-begin-actions");
  lit_170 = YPPlist(1,YPPsym((P)"begin-exp"));
  T54 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_69 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_69),LITREF(lit_169),T54,ENVNUL,PNUL,sloc(310));
  T56 = VARREF_OR(YevalSsyntaxYsexpr_begin_actions,YPfalse);
  T57 = fun_sexpr_begin_actions_69;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSsyntaxYsexpr_begin_actions,T55);
  lit_171 = YPPsym((P)"sexpr-last-exp?");
  lit_172 = YPPlist(1,YPPsym((P)"seq"));
  T58 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_70 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_70),LITREF(lit_171),T58,ENVNUL,PNUL,sloc(313));
  T60 = VARREF_OR(YevalSsyntaxYsexpr_last_expQ,YPfalse);
  T61 = fun_sexpr_last_expQ_70;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YevalSsyntaxYsexpr_last_expQ,T59);
  lit_173 = YPPsym((P)"sexpr-first-exp");
  lit_174 = YPPlist(1,YPPsym((P)"seq"));
  T62 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_71 = YPmet(FUNCODEREF(fun_sexpr_first_exp_71),LITREF(lit_173),T62,ENVNUL,PNUL,sloc(316));
  T64 = VARREF_OR(YevalSsyntaxYsexpr_first_exp,YPfalse);
  T65 = fun_sexpr_first_exp_71;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSsyntaxYsexpr_first_exp,T63);
  lit_175 = YPPsym((P)"sexpr-rest-exps");
  lit_176 = YPPlist(1,YPPsym((P)"seq"));
  T66 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_72 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_72),LITREF(lit_175),T66,ENVNUL,PNUL,sloc(319));
  T68 = VARREF_OR(YevalSsyntaxYsexpr_rest_exps,YPfalse);
  T69 = fun_sexpr_rest_exps_72;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSsyntaxYsexpr_rest_exps,T67);
  lit_177 = YPPsym((P)"sexpr-sequence->begin");
  lit_178 = YPPlist(1,YPPsym((P)"seq"));
  T70 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_73 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_73),LITREF(lit_177),T70,ENVNUL,PNUL,sloc(322));
  T72 = VARREF_OR(YevalSsyntaxYsexpr_sequence_Gbegin,YPfalse);
  T73 = fun_sexpr_sequence_Gbegin_73;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalSsyntaxYsexpr_sequence_Gbegin,T71);
  lit_179 = YPPsym((P)"sexpr-make-begin");
  lit_180 = YPPlist(1,YPPsym((P)"exp"));
  T74 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_74 = YPmet(FUNCODEREF(fun_sexpr_make_begin_74),LITREF(lit_179),T74,ENVNUL,PNUL,sloc(329));
  T76 = VARREF_OR(YevalSsyntaxYsexpr_make_begin,YPfalse);
  T77 = fun_sexpr_make_begin_74;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSsyntaxYsexpr_make_begin,T75);
  lit_181 = YPPsym((P)"sexpr-application?");
  lit_182 = YPPlist(1,YPPsym((P)"exp"));
  T78 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_75 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_75),LITREF(lit_181),T78,ENVNUL,PNUL,sloc(333));
  T80 = VARREF_OR(YevalSsyntaxYsexpr_applicationQ,YPfalse);
  T81 = fun_sexpr_applicationQ_75;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSsyntaxYsexpr_applicationQ,T79);
  lit_183 = YPPsym((P)"sexpr-operator");
  lit_184 = YPPlist(1,YPPsym((P)"app"));
  T82 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_76 = YPmet(FUNCODEREF(fun_sexpr_operator_76),LITREF(lit_183),T82,ENVNUL,PNUL,sloc(336));
  T84 = VARREF_OR(YevalSsyntaxYsexpr_operator,YPfalse);
  T85 = fun_sexpr_operator_76;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSsyntaxYsexpr_operator,T83);
  lit_185 = YPPsym((P)"sexpr-operands");
  lit_186 = YPPlist(1,YPPsym((P)"app"));
  T86 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_77 = YPmet(FUNCODEREF(fun_sexpr_operands_77),LITREF(lit_185),T86,ENVNUL,PNUL,sloc(339));
  T88 = VARREF_OR(YevalSsyntaxYsexpr_operands,YPfalse);
  T89 = fun_sexpr_operands_77;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSsyntaxYsexpr_operands,T87);
  lit_187 = YPPsym((P)"sexpr-no-operands?");
  lit_188 = YPPlist(1,YPPsym((P)"args"));
  T90 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_78 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_78),LITREF(lit_187),T90,ENVNUL,PNUL,sloc(342));
  T92 = VARREF_OR(YevalSsyntaxYsexpr_no_operandsQ,YPfalse);
  T93 = fun_sexpr_no_operandsQ_78;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YevalSsyntaxYsexpr_no_operandsQ,T91);
  lit_189 = YPPsym((P)"sexpr-first-operand");
  lit_190 = YPPlist(1,YPPsym((P)"args"));
  T94 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_79 = YPmet(FUNCODEREF(fun_sexpr_first_operand_79),LITREF(lit_189),T94,ENVNUL,PNUL,sloc(345));
  T96 = VARREF_OR(YevalSsyntaxYsexpr_first_operand,YPfalse);
  T97 = fun_sexpr_first_operand_79;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YevalSsyntaxYsexpr_first_operand,T95);
  lit_191 = YPPsym((P)"sexpr-rest-operands");
  lit_192 = YPPlist(1,YPPsym((P)"args"));
  T98 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_80 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_80),LITREF(lit_191),T98,ENVNUL,PNUL,sloc(348));
  T100 = VARREF_OR(YevalSsyntaxYsexpr_rest_operands,YPfalse);
  T101 = fun_sexpr_rest_operands_80;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YevalSsyntaxYsexpr_rest_operands,T99);
  lit_193 = YPPsym((P)"sexpr-make-application");
  lit_194 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"operands"));
  T102 = YPsig(LITREF(lit_194),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_81 = YPmet(FUNCODEREF(fun_sexpr_make_application_81),LITREF(lit_193),T102,ENVNUL,PNUL,sloc(351));
  T104 = VARREF_OR(YevalSsyntaxYsexpr_make_application,YPfalse);
  T105 = fun_sexpr_make_application_81;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YevalSsyntaxYsexpr_make_application,T103);
  VARSET(YevalSsyntaxYTunique_name_counterT,YPint((P)0));
  lit_195 = YPPsym((P)"sexpr-new-unique-name-counter!");
  lit_196 = Ynil;
  T106 = YPsig(LITREF(lit_196),Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_82 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_82),LITREF(lit_195),T106,ENVNUL,PNUL,sloc(356));
  T108 = VARREF_OR(YevalSsyntaxYsexpr_new_unique_name_counterX,YPfalse);
  T109 = fun_sexpr_new_unique_name_counterX_82;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YevalSsyntaxYsexpr_new_unique_name_counterX,T107);
  VARSET(YevalSsyntaxYLnameG,VARREF(YLanyG));
  lit_197 = YPPsym((P)"sexpr-unique-name");
  lit_198 = YPPlist(1,YPPsym((P)"prefix"));
  T110 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YevalSsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_83 = YPmet(FUNCODEREF(fun_sexpr_unique_name_83),LITREF(lit_197),T110,ENVNUL,PNUL,sloc(363));
  T112 = VARREF_OR(YevalSsyntaxYsexpr_unique_name,YPfalse);
  T113 = fun_sexpr_unique_name_83;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YevalSsyntaxYsexpr_unique_name,T111);
  lit_199 = YPPsym((P)"def");
  VARSET(YevalSsyntaxYDsexpr_def_tag,LITREF(lit_199));
  lit_200 = YPPsym((P)"sexpr-def?");
  lit_201 = YPPlist(1,YPPsym((P)"exp"));
  T114 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_defQ_84 = YPmet(FUNCODEREF(fun_sexpr_defQ_84),LITREF(lit_200),T114,ENVNUL,PNUL,sloc(374));
  T116 = VARREF_OR(YevalSsyntaxYsexpr_defQ,YPfalse);
  T117 = fun_sexpr_defQ_84;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T117);
  VARSET(YevalSsyntaxYsexpr_defQ,T115);
  lit_202 = YPPsym((P)"sexpr-def-variable");
  lit_203 = YPPlist(1,YPPsym((P)"exp"));
  T118 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_85 = YPmet(FUNCODEREF(fun_sexpr_def_variable_85),LITREF(lit_202),T118,ENVNUL,PNUL,sloc(377));
  T120 = VARREF_OR(YevalSsyntaxYsexpr_def_variable,YPfalse);
  T121 = fun_sexpr_def_variable_85;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YevalSsyntaxYsexpr_def_variable,T119);
  lit_204 = YPPsym((P)"sexpr-def-value");
  lit_205 = YPPlist(1,YPPsym((P)"exp"));
  T122 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_86 = YPmet(FUNCODEREF(fun_sexpr_def_value_86),LITREF(lit_204),T122,ENVNUL,PNUL,sloc(379));
  T124 = VARREF_OR(YevalSsyntaxYsexpr_def_value,YPfalse);
  T125 = fun_sexpr_def_value_86;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YevalSsyntaxYsexpr_def_value,T123);
  lit_206 = YPPsym((P)"let");
  VARSET(YevalSsyntaxYDsexpr_let_tag,LITREF(lit_206));
  lit_207 = YPPsym((P)"sexpr-let?");
  lit_208 = YPPlist(1,YPPsym((P)"exp"));
  T126 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_87 = YPmet(FUNCODEREF(fun_sexpr_letQ_87),LITREF(lit_207),T126,ENVNUL,PNUL,sloc(383));
  T128 = VARREF_OR(YevalSsyntaxYsexpr_letQ,YPfalse);
  T129 = fun_sexpr_letQ_87;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T129);
  VARSET(YevalSsyntaxYsexpr_letQ,T127);
  lit_209 = YPPsym((P)"sexpr-let-bound-variables");
  lit_210 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_211 = YPPlist(1,YPPsym((P)"x"));
  T131 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T131,ENVNUL,PNUL,sloc(387));
  T130 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_89 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_89),LITREF(lit_209),T130,ENVNUL,PNUL,sloc(386));
  T133 = VARREF_OR(YevalSsyntaxYsexpr_let_bound_variables,YPfalse);
  T134 = fun_sexpr_let_bound_variables_89;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YevalSsyntaxYsexpr_let_bound_variables,T132);
  lit_212 = YPPsym((P)"sexpr-let-values");
  lit_213 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T136 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T136,ENVNUL,PNUL,sloc(390));
  T135 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_91 = YPmet(FUNCODEREF(fun_sexpr_let_values_91),LITREF(lit_212),T135,ENVNUL,PNUL,sloc(389));
  T138 = VARREF_OR(YevalSsyntaxYsexpr_let_values,YPfalse);
  T139 = fun_sexpr_let_values_91;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSsyntaxYsexpr_let_values,T137);
  lit_215 = YPPsym((P)"sexpr-let-body");
  lit_216 = YPPlist(1,YPPsym((P)"let-exp"));
  T140 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_92 = YPmet(FUNCODEREF(fun_sexpr_let_body_92),LITREF(lit_215),T140,ENVNUL,PNUL,sloc(392));
  T142 = VARREF_OR(YevalSsyntaxYsexpr_let_body,YPfalse);
  T143 = fun_sexpr_let_body_92;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSsyntaxYsexpr_let_body,T141);
  lit_217 = YPPsym((P)"sexpr-let-names+values");
  lit_218 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"vals"));
  lit_219 = YPsb((P)"tup");
  lit_220 = YPPsym((P)"...");
  lit_221 = YPPsym((P)"<lst>");
  lit_222 = YPPsym((P)"sub");
  lit_223 = YPPsym((P)"len");
  lit_224 = YPPsym((P)"elt");
  T145 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T144 = YPsig(LITREF(lit_218),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),T145,Ynil);
  fun_sexpr_let_namesAvalues_93 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_93),LITREF(lit_217),T144,ENVNUL,PNUL,sloc(395));
  T147 = VARREF_OR(YevalSsyntaxYsexpr_let_namesAvalues,YPfalse);
  T148 = fun_sexpr_let_namesAvalues_93;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T148);
  VARSET(YevalSsyntaxYsexpr_let_namesAvalues,T146);
  lit_225 = YPPsym((P)"sexpr-let->combination");
  lit_226 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_227 = YPPsym((P)"col");
  lit_228 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"values"));
  T150 = YPsig(LITREF(lit_228),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_94 = YPmet(FUNCODEREF(fun_col_94),LITREF(lit_227),T150,ENVNUL,PNUL,sloc(434));
  T149 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_95 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_95),LITREF(lit_225),T149,ENVNUL,PNUL,sloc(429));
  T152 = VARREF_OR(YevalSsyntaxYsexpr_let_Gcombination,YPfalse);
  T153 = fun_sexpr_let_Gcombination_95;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YevalSsyntaxYsexpr_let_Gcombination,T151);
  lit_229 = YPPsym((P)"loc");
  VARSET(YevalSsyntaxYDsexpr_locals_tag,LITREF(lit_229));
  lit_230 = YPPsym((P)"sexpr-loc?");
  lit_231 = YPPlist(1,YPPsym((P)"exp"));
  T154 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_96 = YPmet(FUNCODEREF(fun_sexpr_locQ_96),LITREF(lit_230),T154,ENVNUL,PNUL,sloc(445));
  T156 = VARREF_OR(YevalSsyntaxYsexpr_locQ,YPfalse);
  T157 = fun_sexpr_locQ_96;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YevalSsyntaxYsexpr_locQ,T155);
  lit_232 = YPPsym((P)"sexpr-loc-bound-names");
  lit_233 = YPPlist(1,YPPsym((P)"loc-exp"));
  T158 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_97 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_97),LITREF(lit_232),T158,ENVNUL,PNUL,sloc(448));
  T160 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_names,YPfalse);
  T161 = fun_sexpr_loc_bound_names_97;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YevalSsyntaxYsexpr_loc_bound_names,T159);
  lit_234 = YPPsym((P)"sexpr-loc-bound-signatures");
  lit_235 = YPPlist(1,YPPsym((P)"loc-exp"));
  lit_236 = YPPlist(1,YPPsym((P)"x"));
  T163 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T163,ENVNUL,PNUL,sloc(452));
  T162 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_99 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_99),LITREF(lit_234),T162,ENVNUL,PNUL,sloc(451));
  T165 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_signatures,YPfalse);
  T166 = fun_sexpr_loc_bound_signatures_99;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T166);
  VARSET(YevalSsyntaxYsexpr_loc_bound_signatures,T164);
  lit_237 = YPPsym((P)"sexpr-loc-bound-bodies");
  lit_238 = YPPlist(1,YPPsym((P)"loc-exp"));
  T167 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_100 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_100),LITREF(lit_237),T167,ENVNUL,PNUL,sloc(456));
  T169 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_bodies,YPfalse);
  T170 = fun_sexpr_loc_bound_bodies_100;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(YevalSsyntaxYsexpr_loc_bound_bodies,T168);
  lit_239 = YPPsym((P)"sexpr-loc-raw-body");
  lit_240 = YPPlist(1,YPPsym((P)"loc-exp"));
  T171 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_101 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_101),LITREF(lit_239),T171,ENVNUL,PNUL,sloc(459));
  T173 = VARREF_OR(YevalSsyntaxYsexpr_loc_raw_body,YPfalse);
  T174 = fun_sexpr_loc_raw_body_101;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T174);
  VARSET(YevalSsyntaxYsexpr_loc_raw_body,T172);
  lit_241 = YPPsym((P)"sexpr-loc-body");
  lit_242 = YPPlist(1,YPPsym((P)"loc-exp"));
  T175 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_102 = YPmet(FUNCODEREF(fun_sexpr_loc_body_102),LITREF(lit_241),T175,ENVNUL,PNUL,sloc(462));
  T177 = VARREF_OR(YevalSsyntaxYsexpr_loc_body,YPfalse);
  T178 = fun_sexpr_loc_body_102;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T178);
  VARSET(YevalSsyntaxYsexpr_loc_body,T176);
  lit_243 = YPPsym((P)"rep");
  VARSET(YevalSsyntaxYDsexpr_iterate_tag,LITREF(lit_243));
  lit_244 = YPPsym((P)"sexpr-iterate?");
  lit_245 = YPPlist(1,YPPsym((P)"exp"));
  T179 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_103 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_103),LITREF(lit_244),T179,ENVNUL,PNUL,sloc(468));
  T181 = VARREF_OR(YevalSsyntaxYsexpr_iterateQ,YPfalse);
  T182 = fun_sexpr_iterateQ_103;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T182);
  VARSET(YevalSsyntaxYsexpr_iterateQ,T180);
  lit_246 = YPPsym((P)"sexpr-iterate-name");
  lit_247 = YPPlist(1,YPPsym((P)"rep-exp"));
  T183 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_104 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_104),LITREF(lit_246),T183,ENVNUL,PNUL,sloc(471));
  T185 = VARREF_OR(YevalSsyntaxYsexpr_iterate_name,YPfalse);
  T186 = fun_sexpr_iterate_name_104;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T186);
  VARSET(YevalSsyntaxYsexpr_iterate_name,T184);
  VARSET(YevalSsyntaxYDsexpr_values_tag,LITREF(lit_60));
  lit_248 = YPPsym((P)"sexpr-iterate-signature");
  lit_249 = YPPlist(1,YPPsym((P)"rep-exp"));
  lit_250 = YPPlist(1,YPPsym((P)"x"));
  T188 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T188,ENVNUL,PNUL,sloc(478));
  T187 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_106 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_106),LITREF(lit_248),T187,ENVNUL,PNUL,sloc(476));
  T190 = VARREF_OR(YevalSsyntaxYsexpr_iterate_signature,YPfalse);
  T191 = fun_sexpr_iterate_signature_106;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T191);
  VARSET(YevalSsyntaxYsexpr_iterate_signature,T189);
  lit_251 = YPPsym((P)"sexpr-iterate-inits");
  lit_252 = YPPlist(1,YPPsym((P)"rep-exp"));
  lit_253 = YPPlist(1,YPPsym((P)"x"));
  T193 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T193,ENVNUL,PNUL,sloc(486));
  T192 = YPsig(LITREF(lit_252),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_108 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_108),LITREF(lit_251),T192,ENVNUL,PNUL,sloc(485));
  T195 = VARREF_OR(YevalSsyntaxYsexpr_iterate_inits,YPfalse);
  T196 = fun_sexpr_iterate_inits_108;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T196);
  VARSET(YevalSsyntaxYsexpr_iterate_inits,T194);
  lit_254 = YPPsym((P)"sexpr-iterate-body");
  lit_255 = YPPlist(1,YPPsym((P)"rep-exp"));
  T197 = YPsig(LITREF(lit_255),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_109 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_109),LITREF(lit_254),T197,ENVNUL,PNUL,sloc(488));
  T199 = VARREF_OR(YevalSsyntaxYsexpr_iterate_body,YPfalse);
  T200 = fun_sexpr_iterate_body_109;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T200);
  VARSET(YevalSsyntaxYsexpr_iterate_body,T198);
  lit_256 = YPPsym((P)"sexpr-iterate->loc");
  lit_257 = YPPlist(1,YPPsym((P)"rep-exp"));
  T201 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_110 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_110),LITREF(lit_256),T201,ENVNUL,PNUL,sloc(491));
  T203 = VARREF_OR(YevalSsyntaxYsexpr_iterate_Gloc,YPfalse);
  T204 = fun_sexpr_iterate_Gloc_110;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T204);
  VARSET(YevalSsyntaxYsexpr_iterate_Gloc,T202);
  lit_258 = YPPsym((P)"isa");
  VARSET(YevalSsyntaxYDsexpr_isa_tag,LITREF(lit_258));
  lit_259 = YPPsym((P)"sexpr-isa?");
  lit_260 = YPPlist(1,YPPsym((P)"exp"));
  T205 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_111 = YPmet(FUNCODEREF(fun_sexpr_isaQ_111),LITREF(lit_259),T205,ENVNUL,PNUL,sloc(505));
  T207 = VARREF_OR(YevalSsyntaxYsexpr_isaQ,YPfalse);
  T208 = fun_sexpr_isaQ_111;
  T206 = XCALL2(1,VARREF(YPdefine_method),T207,T208);
  VARSET(YevalSsyntaxYsexpr_isaQ,T206);
  lit_261 = YPPsym((P)"sexpr-isa-parent");
  lit_262 = YPPlist(1,YPPsym((P)"exp"));
  T209 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_112 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_112),LITREF(lit_261),T209,ENVNUL,PNUL,sloc(508));
  T211 = VARREF_OR(YevalSsyntaxYsexpr_isa_parent,YPfalse);
  T212 = fun_sexpr_isa_parent_112;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T212);
  VARSET(YevalSsyntaxYsexpr_isa_parent,T210);
  lit_263 = YPPsym((P)"sexpr-isa-prop-inits");
  lit_264 = YPPlist(1,YPPsym((P)"exp"));
  T213 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_113 = YPmet(FUNCODEREF(fun_sexpr_isa_prop_inits_113),LITREF(lit_263),T213,ENVNUL,PNUL,sloc(511));
  T215 = VARREF_OR(YevalSsyntaxYsexpr_isa_prop_inits,YPfalse);
  T216 = fun_sexpr_isa_prop_inits_113;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T216);
  VARSET(YevalSsyntaxYsexpr_isa_prop_inits,T214);
  lit_265 = YPPsym((P)"sexpr-isa-init-props");
  lit_266 = YPPlist(1,YPPsym((P)"exp"));
  T219 = YPsig(LITREF(lit_266),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  T218 = fun_sexpr_isa_init_props_114 = YPmet(FUNCODEREF(fun_sexpr_isa_init_props_114),LITREF(lit_265),T219,ENVNUL,PNUL,sloc(514));
  T222 = VARREF_OR(YevalSsyntaxYsexpr_isa_init_props,YPfalse);
  T223 = fun_sexpr_isa_init_props_114;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T223);
  T220 = VARSET(YevalSsyntaxYsexpr_isa_init_props,T221);
  T217 = T220;
  return T217;
}

P YevalSsyntaxY___main_2___() {
  P tmpF2744;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145;
DEFCREGS();
  lit_267 = YPPsym((P)"sexpr-isa-init-values");
  lit_268 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_115 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_115),LITREF(lit_267),T0,ENVNUL,PNUL,sloc(517));
  T2 = VARREF_OR(YevalSsyntaxYsexpr_isa_init_values,YPfalse);
  T3 = fun_sexpr_isa_init_values_115;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_isa_init_values,T1);
  lit_269 = YPPsym((P)"dc");
  VARSET(YevalSsyntaxYDsexpr_define_class_tag,LITREF(lit_269));
  lit_270 = YPPsym((P)"sexpr-define-class?");
  lit_271 = YPPlist(1,YPPsym((P)"exp"));
  T4 = YPsig(LITREF(lit_271),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_116 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_116),LITREF(lit_270),T4,ENVNUL,PNUL,sloc(524));
  T6 = VARREF_OR(YevalSsyntaxYsexpr_define_classQ,YPfalse);
  T7 = fun_sexpr_define_classQ_116;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_define_classQ,T5);
  lit_272 = YPPsym((P)"sexpr-define-class-parents");
  lit_273 = YPPlist(1,YPPsym((P)"exp"));
  T8 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_117 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_117),LITREF(lit_272),T8,ENVNUL,PNUL,sloc(527));
  T10 = VARREF_OR(YevalSsyntaxYsexpr_define_class_parents,YPfalse);
  T11 = fun_sexpr_define_class_parents_117;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_define_class_parents,T9);
  lit_274 = YPPsym((P)"dp");
  VARSET(YevalSsyntaxYDsexpr_prop_tag,LITREF(lit_274));
  lit_275 = YPPsym((P)"sexpr-prop?");
  lit_276 = YPPlist(1,YPPsym((P)"exp"));
  T12 = YPsig(LITREF(lit_276),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_118 = YPmet(FUNCODEREF(fun_sexpr_propQ_118),LITREF(lit_275),T12,ENVNUL,PNUL,sloc(536));
  T14 = VARREF_OR(YevalSsyntaxYsexpr_propQ,YPfalse);
  T15 = fun_sexpr_propQ_118;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSsyntaxYsexpr_propQ,T13);
  lit_277 = YPPsym((P)"sexpr-prop-name");
  lit_278 = YPPlist(1,YPPsym((P)"exp"));
  T16 = YPsig(LITREF(lit_278),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_119 = YPmet(FUNCODEREF(fun_sexpr_prop_name_119),LITREF(lit_277),T16,ENVNUL,PNUL,sloc(539));
  T18 = VARREF_OR(YevalSsyntaxYsexpr_prop_name,YPfalse);
  T19 = fun_sexpr_prop_name_119;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSsyntaxYsexpr_prop_name,T17);
  lit_279 = YPPsym((P)"sexpr-prop-owner");
  lit_280 = YPPlist(1,YPPsym((P)"exp"));
  T20 = YPsig(LITREF(lit_280),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_120 = YPmet(FUNCODEREF(fun_sexpr_prop_owner_120),LITREF(lit_279),T20,ENVNUL,PNUL,sloc(542));
  T22 = VARREF_OR(YevalSsyntaxYsexpr_prop_owner,YPfalse);
  T23 = fun_sexpr_prop_owner_120;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSsyntaxYsexpr_prop_owner,T21);
  lit_281 = YPPsym((P)"sexpr-prop-init-var");
  lit_282 = YPPlist(1,YPPsym((P)"exp"));
  lit_283 = YPPsym((P)"_x");
  T24 = YPsig(LITREF(lit_282),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_121 = YPmet(FUNCODEREF(fun_sexpr_prop_init_var_121),LITREF(lit_281),T24,ENVNUL,PNUL,sloc(548));
  T26 = VARREF_OR(YevalSsyntaxYsexpr_prop_init_var,YPfalse);
  T27 = fun_sexpr_prop_init_var_121;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSsyntaxYsexpr_prop_init_var,T25);
  lit_284 = YPPsym((P)"sexpr-prop-type");
  lit_285 = YPPlist(1,YPPsym((P)"exp"));
  T28 = YPsig(LITREF(lit_285),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_122 = YPmet(FUNCODEREF(fun_sexpr_prop_type_122),LITREF(lit_284),T28,ENVNUL,PNUL,sloc(554));
  T30 = VARREF_OR(YevalSsyntaxYsexpr_prop_type,YPfalse);
  T31 = fun_sexpr_prop_type_122;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YevalSsyntaxYsexpr_prop_type,T29);
  lit_286 = YPPsym((P)"sexpr-prop-init?");
  lit_287 = YPPlist(1,YPPsym((P)"exp"));
  T32 = YPsig(LITREF(lit_287),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_123 = YPmet(FUNCODEREF(fun_sexpr_prop_initQ_123),LITREF(lit_286),T32,ENVNUL,PNUL,sloc(557));
  T34 = VARREF_OR(YevalSsyntaxYsexpr_prop_initQ,YPfalse);
  T35 = fun_sexpr_prop_initQ_123;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSsyntaxYsexpr_prop_initQ,T33);
  lit_288 = YPPsym((P)"sexpr-prop-init");
  lit_289 = YPPlist(1,YPPsym((P)"exp"));
  T36 = YPsig(LITREF(lit_289),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_124 = YPmet(FUNCODEREF(fun_sexpr_prop_init_124),LITREF(lit_288),T36,ENVNUL,PNUL,sloc(560));
  T38 = VARREF_OR(YevalSsyntaxYsexpr_prop_init,YPfalse);
  T39 = fun_sexpr_prop_init_124;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSsyntaxYsexpr_prop_init,T37);
  lit_290 = YPPsym((P)"sexpr-fab-getter");
  lit_291 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"type"),YPPsym((P)"line"));
  lit_292 = YPPsym((P)"prop-value");
  T40 = YPsig(LITREF(lit_291),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_125 = YPmet(FUNCODEREF(fun_sexpr_fab_getter_125),LITREF(lit_290),T40,ENVNUL,PNUL,sloc(563));
  T42 = VARREF_OR(YevalSsyntaxYsexpr_fab_getter,YPfalse);
  T43 = fun_sexpr_fab_getter_125;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSsyntaxYsexpr_fab_getter,T41);
  lit_293 = YPPsym((P)"sexpr-fab-setter");
  lit_294 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"type"),YPPsym((P)"prop-type"),YPPsym((P)"line"));
  lit_295 = YPPsym((P)"_z");
  lit_296 = YPPsym((P)"prop-value-setter");
  T44 = YPsig(LITREF(lit_294),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_126 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_126),LITREF(lit_293),T44,ENVNUL,PNUL,sloc(568));
  T46 = VARREF_OR(YevalSsyntaxYsexpr_fab_setter,YPfalse);
  T47 = fun_sexpr_fab_setter_126;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSsyntaxYsexpr_fab_setter,T45);
  lit_297 = YPPsym((P)"sexpr-fab-setter-name");
  lit_298 = YPPlist(1,YPPsym((P)"name"));
  lit_299 = YPsb((P)"-setter");
  T48 = YPsig(LITREF(lit_298),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_127 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_name_127),LITREF(lit_297),T48,ENVNUL,PNUL,sloc(574));
  T50 = VARREF_OR(YevalSsyntaxYsexpr_fab_setter_name,YPfalse);
  T51 = fun_sexpr_fab_setter_name_127;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSsyntaxYsexpr_fab_setter_name,T49);
  lit_300 = YPPsym((P)"sexpr-macro?");
  lit_301 = YPPlist(1,YPPsym((P)"exp"));
  T52 = YPsig(LITREF(lit_301),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_128 = YPmet(FUNCODEREF(fun_sexpr_macroQ_128),LITREF(lit_300),T52,ENVNUL,PNUL,sloc(579));
  T54 = VARREF_OR(YevalSsyntaxYsexpr_macroQ,YPfalse);
  T55 = fun_sexpr_macroQ_128;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSsyntaxYsexpr_macroQ,T53);
  lit_302 = YPPsym((P)"macro-expand");
  VARSET(YevalSsyntaxYDsexpr_macro_expand_tag,LITREF(lit_302));
  lit_303 = YPPsym((P)"sexpr-macro-expand?");
  lit_304 = YPPlist(1,YPPsym((P)"exp"));
  T56 = YPsig(LITREF(lit_304),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_129 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_129),LITREF(lit_303),T56,ENVNUL,PNUL,sloc(584));
  T58 = VARREF_OR(YevalSsyntaxYsexpr_macro_expandQ,YPfalse);
  T59 = fun_sexpr_macro_expandQ_129;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSsyntaxYsexpr_macro_expandQ,T57);
  lit_305 = YPPsym((P)"mif");
  VARSET(YevalSsyntaxYDsexpr_syntax_if_tag,LITREF(lit_305));
  lit_306 = YPPsym((P)"sexpr-make-syntax-if");
  lit_307 = YPPlist(4,YPPsym((P)"pat"),YPPsym((P)"exp"),YPPsym((P)"then"),YPPsym((P)"else"));
  T60 = YPsig(LITREF(lit_307),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_130 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_130),LITREF(lit_306),T60,ENVNUL,PNUL,sloc(589));
  T62 = VARREF_OR(YevalSsyntaxYsexpr_make_syntax_if,YPfalse);
  T63 = fun_sexpr_make_syntax_if_130;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSsyntaxYsexpr_make_syntax_if,T61);
  lit_308 = YPPsym((P)"comma-atsign");
  VARSET(YevalSsyntaxYTcomma_atsignT,LITREF(lit_308));
  lit_309 = YPPsym((P)"bq-list");
  VARSET(YevalSsyntaxYTbq_listT,LITREF(lit_309));
  lit_310 = YPPsym((P)"bq-list*");
  VARSET(YevalSsyntaxYTbq_listTT,LITREF(lit_310));
  lit_311 = YPPsym((P)"bq-append");
  VARSET(YevalSsyntaxYTbq_appendT,LITREF(lit_311));
  lit_312 = YPPsym((P)"bq-nconc");
  VARSET(YevalSsyntaxYTbq_nconcT,LITREF(lit_312));
  lit_313 = YPPsym((P)"bq-clobberable");
  VARSET(YevalSsyntaxYTbq_clobberableT,LITREF(lit_313));
  lit_314 = YPPsym((P)"bq-quote");
  VARSET(YevalSsyntaxYTbq_quoteT,LITREF(lit_314));
  lit_315 = YPPsym((P)"sexpr-expand-backquote");
  lit_316 = YPPlist(1,YPPsym((P)"x"));
  lit_317 = YPPsym((P)"goo");
  T64 = YPsig(LITREF(lit_316),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YevalSsyntaxYsexpr_expand_backquote),LITREF(lit_315),T64,ENVNUL,PNUL,sloc(602));
  T65 = YevalSsyntaxYsexpr_expand_backquote;
  VARSET(YevalSsyntaxYsexpr_expand_backquote,T65);
  lit_318 = YPPsym((P)"sexpr-build-backquote-expander");
  lit_319 = YPPlist(1,YPPsym((P)"x"));
  T66 = YPsig(LITREF(lit_319),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_132 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_132),LITREF(lit_318),T66,ENVNUL,PNUL,sloc(605));
  T68 = VARREF_OR(YevalSsyntaxYsexpr_build_backquote_expander,YPfalse);
  T69 = fun_sexpr_build_backquote_expander_132;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSsyntaxYsexpr_build_backquote_expander,T67);
  lit_320 = YPPsym((P)"sexpr-unquote?");
  lit_321 = YPPlist(1,YPPsym((P)"x"));
  lit_322 = YPPsym((P)"unquote");
  T70 = YPsig(LITREF(lit_321),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_133 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_133),LITREF(lit_320),T70,ENVNUL,PNUL,sloc(611));
  T72 = VARREF_OR(YevalSsyntaxYsexpr_unquoteQ,YPfalse);
  T73 = fun_sexpr_unquoteQ_133;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalSsyntaxYsexpr_unquoteQ,T71);
  lit_323 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_324 = YPPlist(1,YPPsym((P)"x"));
  lit_325 = YPPsym((P)"unquote-splicing");
  T74 = YPsig(LITREF(lit_324),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_134 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_134),LITREF(lit_323),T74,ENVNUL,PNUL,sloc(614));
  T76 = VARREF_OR(YevalSsyntaxYsexpr_unquote_splicingQ,YPfalse);
  T77 = fun_sexpr_unquote_splicingQ_134;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSsyntaxYsexpr_unquote_splicingQ,T75);
  lit_326 = YPPsym((P)"sexpr-backquote?");
  lit_327 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPsig(LITREF(lit_327),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_135 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_135),LITREF(lit_326),T78,ENVNUL,PNUL,sloc(617));
  T80 = VARREF_OR(YevalSsyntaxYsexpr_backquoteQ,YPfalse);
  T81 = fun_sexpr_backquoteQ_135;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSsyntaxYsexpr_backquoteQ,T79);
  lit_328 = YPPsym((P)"sexpr-atom?");
  lit_329 = YPPlist(1,YPPsym((P)"x"));
  T82 = YPsig(LITREF(lit_329),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_136 = YPmet(FUNCODEREF(fun_sexpr_atomQ_136),LITREF(lit_328),T82,ENVNUL,PNUL,sloc(620));
  T84 = VARREF_OR(YevalSsyntaxYsexpr_atomQ,YPfalse);
  T85 = fun_sexpr_atomQ_136;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSsyntaxYsexpr_atomQ,T83);
  lit_330 = YPPsym((P)"nreconc");
  lit_331 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T86 = YPsig(LITREF(lit_331),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_137 = YPmet(FUNCODEREF(fun_nreconc_137),LITREF(lit_330),T86,ENVNUL,PNUL,sloc(623));
  T88 = VARREF_OR(YevalSsyntaxYnreconc,YPfalse);
  T89 = fun_nreconc_137;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSsyntaxYnreconc,T87);
  lit_332 = YPPsym((P)"bq-process");
  lit_333 = YPPlist(1,YPPsym((P)"x"));
  lit_334 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_335 = YPPlist(1,YPPsym((P)"return"));
  lit_336 = YPsb((P)"Malformed ,%=");
  lit_337 = YPsb((P)"Dotted ,@%=");
  T91 = YPsig(LITREF(lit_335),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T91,ENVNUL,PNUL,sloc(636));
  T90 = YPsig(LITREF(lit_333),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_139 = YPmet(FUNCODEREF(fun_bq_process_139),LITREF(lit_332),T90,ENVNUL,PNUL,sloc(626));
  T93 = VARREF_OR(YevalSsyntaxYbq_process,YPfalse);
  T94 = fun_bq_process_139;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YevalSsyntaxYbq_process,T92);
  lit_338 = YPPsym((P)"bracket");
  lit_339 = YPPlist(1,YPPsym((P)"x"));
  T95 = YPsig(LITREF(lit_339),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_140 = YPmet(FUNCODEREF(fun_bracket_140),LITREF(lit_338),T95,ENVNUL,PNUL,sloc(651));
  T97 = VARREF_OR(YevalSsyntaxYbracket,YPfalse);
  T98 = fun_bracket_140;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YevalSsyntaxYbracket,T96);
  lit_340 = YPPsym((P)"map-tree");
  lit_341 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"x"));
  T99 = YPsig(LITREF(lit_341),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_141 = YPmet(FUNCODEREF(fun_map_tree_141),LITREF(lit_340),T99,ENVNUL,PNUL,sloc(661));
  T101 = VARREF_OR(YevalSsyntaxYmap_tree,YPfalse);
  T102 = fun_map_tree_141;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T102);
  VARSET(YevalSsyntaxYmap_tree,T100);
  lit_342 = YPPsym((P)"bq-remove-tokens");
  lit_343 = YPPlist(1,YPPsym((P)"x"));
  lit_344 = YPPsym((P)"cat");
  lit_345 = YPPsym((P)"cat!");
  lit_346 = YPPsym((P)"list*");
  lit_347 = YPPsym((P)"pair");
  T103 = YPsig(LITREF(lit_343),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_142 = YPmet(FUNCODEREF(fun_bq_remove_tokens_142),LITREF(lit_342),T103,ENVNUL,PNUL,sloc(670));
  T105 = VARREF_OR(YevalSsyntaxYbq_remove_tokens,YPfalse);
  T106 = fun_bq_remove_tokens_142;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YevalSsyntaxYbq_remove_tokens,T104);
  lit_348 = YPPsym((P)"sexpr-syntax-if?");
  lit_349 = YPPlist(1,YPPsym((P)"exp"));
  T107 = YPsig(LITREF(lit_349),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_143 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_143),LITREF(lit_348),T107,ENVNUL,PNUL,sloc(688));
  T109 = VARREF_OR(YevalSsyntaxYsexpr_syntax_ifQ,YPfalse);
  T110 = fun_sexpr_syntax_ifQ_143;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YevalSsyntaxYsexpr_syntax_ifQ,T108);
  lit_350 = YPPsym((P)"sexpr-syntax-if-value");
  lit_351 = YPPlist(1,YPPsym((P)"exp"));
  T111 = YPsig(LITREF(lit_351),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_144 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_144),LITREF(lit_350),T111,ENVNUL,PNUL,sloc(691));
  T113 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_value,YPfalse);
  T114 = fun_sexpr_syntax_if_value_144;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YevalSsyntaxYsexpr_syntax_if_value,T112);
  lit_352 = YPPsym((P)"sexpr-syntax-if-pattern");
  lit_353 = YPPlist(1,YPPsym((P)"exp"));
  T115 = YPsig(LITREF(lit_353),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_145 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_145),LITREF(lit_352),T115,ENVNUL,PNUL,sloc(694));
  T117 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_pattern,YPfalse);
  T118 = fun_sexpr_syntax_if_pattern_145;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T118);
  VARSET(YevalSsyntaxYsexpr_syntax_if_pattern,T116);
  lit_354 = YPPsym((P)"sexpr-syntax-if-then");
  lit_355 = YPPlist(1,YPPsym((P)"exp"));
  T119 = YPsig(LITREF(lit_355),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_146 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_146),LITREF(lit_354),T119,ENVNUL,PNUL,sloc(697));
  T121 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_then,YPfalse);
  T122 = fun_sexpr_syntax_if_then_146;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(YevalSsyntaxYsexpr_syntax_if_then,T120);
  lit_356 = YPPsym((P)"sexpr-syntax-if-else");
  lit_357 = YPPlist(1,YPPsym((P)"exp"));
  T123 = YPsig(LITREF(lit_357),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_147 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_147),LITREF(lit_356),T123,ENVNUL,PNUL,sloc(702));
  T125 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_else,YPfalse);
  T126 = fun_sexpr_syntax_if_else_147;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YevalSsyntaxYsexpr_syntax_if_else,T124);
  lit_358 = YPPsym((P)"sexpr-pattern-variable?");
  lit_359 = YPPlist(1,YPPsym((P)"pat"));
  T127 = YPsig(LITREF(lit_359),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_148 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_148),LITREF(lit_358),T127,ENVNUL,PNUL,sloc(705));
  T129 = VARREF_OR(YevalSsyntaxYsexpr_pattern_variableQ,YPfalse);
  T130 = fun_sexpr_pattern_variableQ_148;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T130);
  VARSET(YevalSsyntaxYsexpr_pattern_variableQ,T128);
  lit_360 = YPPsym((P)"sexpr-pattern-variable-name");
  lit_361 = YPPlist(1,YPPsym((P)"pat"));
  T131 = YPsig(LITREF(lit_361),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_149 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_149),LITREF(lit_360),T131,ENVNUL,PNUL,sloc(708));
  T133 = VARREF_OR(YevalSsyntaxYsexpr_pattern_variable_name,YPfalse);
  T134 = fun_sexpr_pattern_variable_name_149;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YevalSsyntaxYsexpr_pattern_variable_name,T132);
  lit_362 = YPPsym((P)"sexpr-bind-pattern-variables");
  lit_363 = YPPlist(1,YPPsym((P)"pat"));
  lit_364 = YPPlist(1,YPPsym((P)"pat"));
  T136 = YPsig(LITREF(lit_364),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_150 = YPmet(FUNCODEREF(fun_col_150),LITREF(lit_227),T136,ENVNUL,PNUL,sloc(713));
  T135 = YPsig(LITREF(lit_363),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_151 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_151),LITREF(lit_362),T135,ENVNUL,PNUL,sloc(711));
  T138 = VARREF_OR(YevalSsyntaxYsexpr_bind_pattern_variables,YPfalse);
  T139 = fun_sexpr_bind_pattern_variables_151;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSsyntaxYsexpr_bind_pattern_variables,T137);
  lit_365 = YPPsym((P)"sexpr-make-macro-function");
  lit_366 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"exp"));
  lit_367 = YPPsym((P)"exp");
  lit_368 = YPPsym((P)"macro-error");
  T140 = YPsig(LITREF(lit_366),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_152 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_152),LITREF(lit_365),T140,ENVNUL,PNUL,sloc(724));
  T142 = VARREF_OR(YevalSsyntaxYsexpr_make_macro_function,YPfalse);
  T143 = fun_sexpr_make_macro_function_152;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSsyntaxYsexpr_make_macro_function,T141);
  tmpF2744 = YPfalse;
  if (tmpF2744 != YPfalse) {
    T144 = VARREF(YevalSsyntaxYeval);
  } else {
    T144 = YPfalse;
  }
  T145 = YPfalse;
  return T145;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {">", &module_info_gooSmag, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-operands", CVAR, &YevalSsyntaxYsexpr_operands},
  {"sexpr-quoted?", CVAR, &YevalSsyntaxYsexpr_quotedQ},
  {"sexpr-method?", CVAR, &YevalSsyntaxYsexpr_methodQ},
  {"sexpr-if?", CVAR, &YevalSsyntaxYsexpr_ifQ},
  {"sexpr-prop-owner", CVAR, &YevalSsyntaxYsexpr_prop_owner},
  {"sexpr-block-body", CVAR, &YevalSsyntaxYsexpr_block_body},
  {"sexpr-function-body", CVAR, &YevalSsyntaxYsexpr_function_body},
  {"sexpr-function-definition-value", CVAR, &YevalSsyntaxYsexpr_function_definition_value},
  {"map-tree", CVAR, &YevalSsyntaxYmap_tree},
  {"$sexpr-def-tag", CVAR, &YevalSsyntaxYDsexpr_def_tag},
  {"sexpr-definition-value", CVAR, &YevalSsyntaxYsexpr_definition_value},
  {"sexpr-signature-parameters", CVAR, &YevalSsyntaxYsexpr_signature_parameters},
  {"sexpr-syntax-definition?", CVAR, &YevalSsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-loc-body", CVAR, &YevalSsyntaxYsexpr_loc_body},
  {"as-signature", CVAR, &YevalSsyntaxYas_signature},
  {"$sexpr-define-method-tag", CVAR, &YevalSsyntaxYDsexpr_define_method_tag},
  {"sexpr-backquote?", CVAR, &YevalSsyntaxYsexpr_backquoteQ},
  {"<name>", CVAR, &YevalSsyntaxYLnameG},
  {"sexpr-generic-definition?", CVAR, &YevalSsyntaxYsexpr_generic_definitionQ},
  {"sexpr-method-definition?", CVAR, &YevalSsyntaxYsexpr_method_definitionQ},
  {"sexpr-isa-init-values", CVAR, &YevalSsyntaxYsexpr_isa_init_values},
  {"sexpr-begin?", CVAR, &YevalSsyntaxYsexpr_beginQ},
  {"$sexpr-set-tag", CVAR, &YevalSsyntaxYDsexpr_set_tag},
  {"sexpr-rest-exps", CVAR, &YevalSsyntaxYsexpr_rest_exps},
  {"sexpr-assignment-variable", CVAR, &YevalSsyntaxYsexpr_assignment_variable},
  {"sexpr-make-method", CVAR, &YevalSsyntaxYsexpr_make_method},
  {"sexpr-fab-setter-name", CVAR, &YevalSsyntaxYsexpr_fab_setter_name},
  {"$sexpr-prop-tag", CVAR, &YevalSsyntaxYDsexpr_prop_tag},
  {"sexpr-method-value", CVAR, &YevalSsyntaxYsexpr_method_value},
  {"sexpr-if-else", CVAR, &YevalSsyntaxYsexpr_if_else},
  {"sexpr-def?", CVAR, &YevalSsyntaxYsexpr_defQ},
  {"sexpr-loc-bound-names", CVAR, &YevalSsyntaxYsexpr_loc_bound_names},
  {"$sexpr-monitor-tag", CVAR, &YevalSsyntaxYDsexpr_monitor_tag},
  {"sexpr-variable-type", CVAR, &YevalSsyntaxYsexpr_variable_type},
  {"sexpr-pattern-variable?", CVAR, &YevalSsyntaxYsexpr_pattern_variableQ},
  {"sexpr-syntax-if-value", CVAR, &YevalSsyntaxYsexpr_syntax_if_value},
  {"sexpr-rest-operands", CVAR, &YevalSsyntaxYsexpr_rest_operands},
  {"sexpr-operator", CVAR, &YevalSsyntaxYsexpr_operator},
  {"sexpr-prop-init?", CVAR, &YevalSsyntaxYsexpr_prop_initQ},
  {"sexpr-prop-name", CVAR, &YevalSsyntaxYsexpr_prop_name},
  {"sexpr-iterate-signature", CVAR, &YevalSsyntaxYsexpr_iterate_signature},
  {"$sexpr-macro-tag", CVAR, &YevalSsyntaxYDsexpr_macro_tag},
  {"sexpr-block-name", CVAR, &YevalSsyntaxYsexpr_block_name},
  {"$sexpr-method-tag", CVAR, &YevalSsyntaxYDsexpr_method_tag},
  {"$sexpr-define-syntax-tag", CVAR, &YevalSsyntaxYDsexpr_define_syntax_tag},
  {"$sexpr-syntax-if-tag", CVAR, &YevalSsyntaxYDsexpr_syntax_if_tag},
  {"$sexpr-unwind-protect-tag", CVAR, &YevalSsyntaxYDsexpr_unwind_protect_tag},
  {"sexpr-forward-primitive?", CVAR, &YevalSsyntaxYsexpr_forward_primitiveQ},
  {"$sexpr-define-function-tag", CVAR, &YevalSsyntaxYDsexpr_define_function_tag},
  {"sexpr-loc-raw-body", CVAR, &YevalSsyntaxYsexpr_loc_raw_body},
  {"sexpr-unquote-splicing?", CVAR, &YevalSsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-function-definition?", CVAR, &YevalSsyntaxYsexpr_function_definitionQ},
  {"$sexpr-let-tag", CVAR, &YevalSsyntaxYDsexpr_let_tag},
  {"sexpr-unwind-protect-cleanup-forms", CVAR, &YevalSsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"*bq-list*", CVAR, &YevalSsyntaxYTbq_listT},
  {"sexpr-let-bound-variables", CVAR, &YevalSsyntaxYsexpr_let_bound_variables},
  {"---main-0---", PVAR, NULL},
  {"sexpr-tagged-list?", CVAR, &YevalSsyntaxYsexpr_tagged_listQ},
  {"$sexpr-define-generic-tag", CVAR, &YevalSsyntaxYDsexpr_define_generic_tag},
  {"sexpr-signature-value", CVAR, &YevalSsyntaxYsexpr_signature_value},
  {"sexpr-assignment?", CVAR, &YevalSsyntaxYsexpr_assignmentQ},
  {"---main-1---", PVAR, NULL},
  {"*bq-quote*", CVAR, &YevalSsyntaxYTbq_quoteT},
  {"sexpr-isa-init-props", CVAR, &YevalSsyntaxYsexpr_isa_init_props},
  {"find-option", CVAR, &YevalSsyntaxYfind_option},
  {"sexpr-loc?", CVAR, &YevalSsyntaxYsexpr_locQ},
  {"sexpr-let-names+values", CVAR, &YevalSsyntaxYsexpr_let_namesAvalues},
  {"sexpr-first-exp", CVAR, &YevalSsyntaxYsexpr_first_exp},
  {"$sexpr-bind-exit-tag", CVAR, &YevalSsyntaxYDsexpr_bind_exit_tag},
  {"*comma-atsign*", CVAR, &YevalSsyntaxYTcomma_atsignT},
  {"sexpr-first-operand", CVAR, &YevalSsyntaxYsexpr_first_operand},
  {"sexpr-application?", CVAR, &YevalSsyntaxYsexpr_applicationQ},
  {"sexpr-iterate->loc", CVAR, &YevalSsyntaxYsexpr_iterate_Gloc},
  {"bq-process", CVAR, &YevalSsyntaxYbq_process},
  {"sexpr-block?", CVAR, &YevalSsyntaxYsexpr_blockQ},
  {"sexpr-method-parameters", CVAR, &YevalSsyntaxYsexpr_method_parameters},
  {"sexpr-if-then", CVAR, &YevalSsyntaxYsexpr_if_then},
  {"sexpr-syntax-if-else", CVAR, &YevalSsyntaxYsexpr_syntax_if_else},
  {"sexpr-unquote?", CVAR, &YevalSsyntaxYsexpr_unquoteQ},
  {"sexpr-make-syntax-if", CVAR, &YevalSsyntaxYsexpr_make_syntax_if},
  {"sexpr-unique-name", CVAR, &YevalSsyntaxYsexpr_unique_name},
  {"sexpr-syntax-definition-value", CVAR, &YevalSsyntaxYsexpr_syntax_definition_value},
  {"sexpr-prop-type", CVAR, &YevalSsyntaxYsexpr_prop_type},
  {"sexpr-monitor-info", CVAR, &YevalSsyntaxYsexpr_monitor_info},
  {"$sexpr-begin-tag", CVAR, &YevalSsyntaxYDsexpr_begin_tag},
  {"sexpr-let?", CVAR, &YevalSsyntaxYsexpr_letQ},
  {"$sexpr-define-class-tag", CVAR, &YevalSsyntaxYDsexpr_define_class_tag},
  {"sexpr-variable?", CVAR, &YevalSsyntaxYsexpr_variableQ},
  {"---main-2---", PVAR, NULL},
  {"sexpr-variable-name", CVAR, &YevalSsyntaxYsexpr_variable_name},
  {"sexpr-function-value", CVAR, &YevalSsyntaxYsexpr_function_value},
  {"sexpr-function-definition-adjectives", CVAR, &YevalSsyntaxYsexpr_function_definition_adjectives},
  {"*unique-name-counter*", CVAR, &YevalSsyntaxYTunique_name_counterT},
  {"*bq-nconc*", CVAR, &YevalSsyntaxYTbq_nconcT},
  {"$sexpr-define-tag", CVAR, &YevalSsyntaxYDsexpr_define_tag},
  {"bracket", CVAR, &YevalSsyntaxYbracket},
  {"sexpr-iterate-name", CVAR, &YevalSsyntaxYsexpr_iterate_name},
  {"sexpr-text-of-quotation", CVAR, &YevalSsyntaxYsexpr_text_of_quotation},
  {"$sexpr-quasiquote-tag", CVAR, &YevalSsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-isa-prop-inits", CVAR, &YevalSsyntaxYsexpr_isa_prop_inits},
  {"sexpr-new-unique-name-counter!", CVAR, &YevalSsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-make-begin", CVAR, &YevalSsyntaxYsexpr_make_begin},
  {"sexpr-last-exp?", CVAR, &YevalSsyntaxYsexpr_last_expQ},
  {"sexpr-iterate-body", CVAR, &YevalSsyntaxYsexpr_iterate_body},
  {"sexpr-monitor-test", CVAR, &YevalSsyntaxYsexpr_monitor_test},
  {"sexpr-value-type", CVAR, &YevalSsyntaxYsexpr_value_type},
  {"$sexpr-locals-tag", CVAR, &YevalSsyntaxYDsexpr_locals_tag},
  {"sexpr-macro-expand?", CVAR, &YevalSsyntaxYsexpr_macro_expandQ},
  {"sexpr-define-class-parents", CVAR, &YevalSsyntaxYsexpr_define_class_parents},
  {"sexpr-make-anonymous-method", CVAR, &YevalSsyntaxYsexpr_make_anonymous_method},
  {"sexpr-if-test", CVAR, &YevalSsyntaxYsexpr_if_test},
  {"sexpr-definition-variable", CVAR, &YevalSsyntaxYsexpr_definition_variable},
  {"$sexpr-values-tag", CVAR, &YevalSsyntaxYDsexpr_values_tag},
  {"bq-remove-tokens", CVAR, &YevalSsyntaxYbq_remove_tokens},
  {"sexpr-syntax-if-then", CVAR, &YevalSsyntaxYsexpr_syntax_if_then},
  {"nreconc", CVAR, &YevalSsyntaxYnreconc},
  {"sexpr-build-backquote-expander", CVAR, &YevalSsyntaxYsexpr_build_backquote_expander},
  {"*bq-clobberable*", CVAR, &YevalSsyntaxYTbq_clobberableT},
  {"sexpr-function-parameters", CVAR, &YevalSsyntaxYsexpr_function_parameters},
  {"sexpr-function-definition-variable", CVAR, &YevalSsyntaxYsexpr_function_definition_variable},
  {"sexpr-fab-getter", CVAR, &YevalSsyntaxYsexpr_fab_getter},
  {"sexpr-syntax-definition-variable", CVAR, &YevalSsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-unwind-protect?", CVAR, &YevalSsyntaxYsexpr_unwind_protectQ},
  {"sexpr-def-value", CVAR, &YevalSsyntaxYsexpr_def_value},
  {"sexpr-monitor-expand", CVAR, &YevalSsyntaxYsexpr_monitor_expand},
  {"*bq-list**", CVAR, &YevalSsyntaxYTbq_listTT},
  {"sexpr-bind-pattern-variables", CVAR, &YevalSsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-iterate?", CVAR, &YevalSsyntaxYsexpr_iterateQ},
  {"sexpr-make-quote", CVAR, &YevalSsyntaxYsexpr_make_quote},
  {"sexpr-assignment-value", CVAR, &YevalSsyntaxYsexpr_assignment_value},
  {"sexpr-method-signature", CVAR, &YevalSsyntaxYsexpr_method_signature},
  {"eval", CVAR, &YevalSsyntaxYeval},
  {"sexpr-self-evaluating?", CVAR, &YevalSsyntaxYsexpr_self_evaluatingQ},
  {"$sexpr-isa-tag", CVAR, &YevalSsyntaxYDsexpr_isa_tag},
  {"sexpr-loc-bound-signatures", CVAR, &YevalSsyntaxYsexpr_loc_bound_signatures},
  {"*bq-append*", CVAR, &YevalSsyntaxYTbq_appendT},
  {"$sexpr-macro-expand-tag", CVAR, &YevalSsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-unwind-protect-protected-form", CVAR, &YevalSsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-define-class?", CVAR, &YevalSsyntaxYsexpr_define_classQ},
  {"sexpr-isa-parent", CVAR, &YevalSsyntaxYsexpr_isa_parent},
  {"$sexpr-quote-tag", CVAR, &YevalSsyntaxYDsexpr_quote_tag},
  {"sexpr-definition?", CVAR, &YevalSsyntaxYsexpr_definitionQ},
  {"sexpr-def-variable", CVAR, &YevalSsyntaxYsexpr_def_variable},
  {"sexpr-sequence->begin", CVAR, &YevalSsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-syntax-if?", CVAR, &YevalSsyntaxYsexpr_syntax_ifQ},
  {"sexpr-syntax-if-pattern", CVAR, &YevalSsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-pattern-variable-name", CVAR, &YevalSsyntaxYsexpr_pattern_variable_name},
  {"sexpr-make-macro-function", CVAR, &YevalSsyntaxYsexpr_make_macro_function},
  {"sexpr-fab-setter", CVAR, &YevalSsyntaxYsexpr_fab_setter},
  {"sexpr-expand-backquote", CVAR, &YevalSsyntaxYsexpr_expand_backquote},
  {"sexpr-let-values", CVAR, &YevalSsyntaxYsexpr_let_values},
  {"sexpr-isa?", CVAR, &YevalSsyntaxYsexpr_isaQ},
  {"sexpr-atom?", CVAR, &YevalSsyntaxYsexpr_atomQ},
  {"sexpr-prop?", CVAR, &YevalSsyntaxYsexpr_propQ},
  {"$sexpr-iterate-tag", CVAR, &YevalSsyntaxYDsexpr_iterate_tag},
  {"sexpr-prop-init-var", CVAR, &YevalSsyntaxYsexpr_prop_init_var},
  {"sexpr-prop-init", CVAR, &YevalSsyntaxYsexpr_prop_init},
  {"sexpr-function-signature", CVAR, &YevalSsyntaxYsexpr_function_signature},
  {"sexpr-loc-bound-bodies", CVAR, &YevalSsyntaxYsexpr_loc_bound_bodies},
  {"$sexpr-if-tag", CVAR, &YevalSsyntaxYDsexpr_if_tag},
  {"sexpr-iterate-inits", CVAR, &YevalSsyntaxYsexpr_iterate_inits},
  {"sexpr-method-body", CVAR, &YevalSsyntaxYsexpr_method_body},
  {"sexpr-make-if", CVAR, &YevalSsyntaxYsexpr_make_if},
  {"sexpr-let->combination", CVAR, &YevalSsyntaxYsexpr_let_Gcombination},
  {"sexpr-no-operands?", CVAR, &YevalSsyntaxYsexpr_no_operandsQ},
  {"sexpr-begin-actions", CVAR, &YevalSsyntaxYsexpr_begin_actions},
  {"sexpr-monitor?", CVAR, &YevalSsyntaxYsexpr_monitorQ},
  {"sexpr-let-body", CVAR, &YevalSsyntaxYsexpr_let_body},
  {"sexpr-monitor-type", CVAR, &YevalSsyntaxYsexpr_monitor_type},
  {"sexpr-monitor-body", CVAR, &YevalSsyntaxYsexpr_monitor_body},
  {"sexpr-macro?", CVAR, &YevalSsyntaxYsexpr_macroQ},
  {"sexpr-make-application", CVAR, &YevalSsyntaxYsexpr_make_application},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-operands", NULL},
  {"sexpr-prop-init", NULL},
  {"sexpr-prop-owner", NULL},
  {"sexpr-block-body", NULL},
  {"sexpr-expand-backquote", NULL},
  {"sexpr-def-variable", NULL},
  {"$sexpr-def-tag", NULL},
  {"sexpr-syntax-definition-value", NULL},
  {"sexpr-signature-parameters", NULL},
  {"$sexpr-syntax-if-tag", NULL},
  {"$sexpr-define-method-tag", NULL},
  {"$sexpr-let-tag", NULL},
  {"sexpr-isa-init-values", NULL},
  {"$sexpr-method-tag", NULL},
  {"$sexpr-set-tag", NULL},
  {"sexpr-assignment-variable", NULL},
  {"sexpr-make-method", NULL},
  {"sexpr-fab-setter-name", NULL},
  {"sexpr-function-definition-value", NULL},
  {"$sexpr-prop-tag", NULL},
  {"sexpr-if-else", NULL},
  {"sexpr-def?", NULL},
  {"sexpr-loc-bound-names", NULL},
  {"$sexpr-monitor-tag", NULL},
  {"sexpr-variable-type", NULL},
  {"sexpr-syntax-if-value", NULL},
  {"sexpr-operator", NULL},
  {"sexpr-prop-init?", NULL},
  {"sexpr-prop-name", NULL},
  {"sexpr-block-name", NULL},
  {"$sexpr-define-syntax-tag", NULL},
  {"$sexpr-unwind-protect-tag", NULL},
  {"sexpr-forward-primitive?", NULL},
  {"$sexpr-define-function-tag", NULL},
  {"sexpr-loc-raw-body", NULL},
  {"sexpr-unquote-splicing?", NULL},
  {"sexpr-unwind-protect-cleanup-forms", NULL},
  {"$sexpr-define-generic-tag", NULL},
  {"sexpr-signature-value", NULL},
  {"sexpr-definition-value", NULL},
  {"sexpr-function-body", NULL},
  {"sexpr-isa-init-props", NULL},
  {"$sexpr-bind-exit-tag", NULL},
  {"sexpr-iterate->loc", NULL},
  {"sexpr-if-then", NULL},
  {"sexpr-syntax-if-else", NULL},
  {"sexpr-make-macro-function", NULL},
  {"sexpr-unquote?", NULL},
  {"sexpr-function-definition-adjectives", NULL},
  {"sexpr-prop-type", NULL},
  {"sexpr-fab-setter", NULL},
  {"$sexpr-begin-tag", NULL},
  {"eval", NULL},
  {"$sexpr-define-class-tag", NULL},
  {"sexpr-variable?", NULL},
  {"sexpr-variable-name", NULL},
  {"sexpr-loc-bound-bodies", NULL},
  {"sexpr-unwind-protect-protected-form", NULL},
  {"sexpr-syntax-definition-variable", NULL},
  {"$sexpr-define-tag", NULL},
  {"sexpr-text-of-quotation", NULL},
  {"$sexpr-quasiquote-tag", NULL},
  {"sexpr-isa-prop-inits", NULL},
  {"sexpr-make-begin", NULL},
  {"$sexpr-locals-tag", NULL},
  {"sexpr-define-class-parents", NULL},
  {"sexpr-make-anonymous-method", NULL},
  {"sexpr-if-test", NULL},
  {"sexpr-definition-variable", NULL},
  {"sexpr-syntax-if-then", NULL},
  {"sexpr-function-definition-variable", NULL},
  {"sexpr-prop-init-var", NULL},
  {"sexpr-def-value", NULL},
  {"sexpr-monitor-expand", NULL},
  {"sexpr-bind-pattern-variables", NULL},
  {"sexpr-assignment-value", NULL},
  {"sexpr-method-signature", NULL},
  {"$sexpr-isa-tag", NULL},
  {"sexpr-loc-bound-signatures", NULL},
  {"$sexpr-macro-expand-tag", NULL},
  {"sexpr-define-class?", NULL},
  {"sexpr-isa-parent", NULL},
  {"$sexpr-quote-tag", NULL},
  {"sexpr-sequence->begin", NULL},
  {"$sexpr-iterate-tag", NULL},
  {"sexpr-function-signature", NULL},
  {"sexpr-fab-getter", NULL},
  {"$sexpr-if-tag", NULL},
  {"sexpr-method-body", NULL},
  {"sexpr-let->combination", NULL},
  {"sexpr-syntax-if-pattern", NULL},
  {"sexpr-make-application", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSsyntax;
MODULE_INFO module_info_evalSsyntax = {
  "eval/syntax",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooScolsSlst (void);

/* EXPRESSION: */

extern void load_module_evalSsyntax (void);

void load_module_evalSsyntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooScolsSlst();

  (P)YevalSsyntaxY___main_0___();
  (P)YevalSsyntaxY___main_1___();
  (P)YevalSsyntaxY___main_2___();

}

/* END OF GENERATED CODE. */
