/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/syntax */

DEF(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSsyntaxYnreconc,"eval/syntax","nreconc");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSsyntaxYsexpr_beginQ,"eval/syntax","sexpr-begin?");
EXT(YisaQ,"goo/boot","isa?");
DEF(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSsyntaxYsexpr_syntax_definitionQ,"eval/syntax","sexpr-syntax-definition?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSsyntaxYTunique_name_counterT,"eval/syntax","*unique-name-counter*");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSsyntaxYsexpr_macroQ,"eval/syntax","sexpr-macro?");
DEF(YevalSsyntaxYsexpr_value_type,"eval/syntax","sexpr-value-type");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
DEF(YevalSsyntaxYsexpr_rest_exps,"eval/syntax","sexpr-rest-exps");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSsyntaxYsexpr_let_values,"eval/syntax","sexpr-let-values");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
DEF(YevalSsyntaxYsexpr_blockQ,"eval/syntax","sexpr-block?");
DEF(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YevalSsyntaxYsexpr_method_definitionQ,"eval/syntax","sexpr-method-definition?");
DEF(YevalSsyntaxYfind_option,"eval/syntax","find-option");
DEF(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
DEF(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSsyntaxYTcomma_atsignT,"eval/syntax","*comma-atsign*");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YevalSsyntaxYsexpr_function_parameters,"eval/syntax","sexpr-function-parameters");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
DEF(YevalSsyntaxYDsexpr_values_tag,"eval/syntax","$sexpr-values-tag");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSsyntaxYsexpr_monitor_body,"eval/syntax","sexpr-monitor-body");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSsyntaxYsexpr_iterate_name,"eval/syntax","sexpr-iterate-name");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSsyntaxYsexpr_rest_operands,"eval/syntax","sexpr-rest-operands");
DEF(YevalSsyntaxYsexpr_propQ,"eval/syntax","sexpr-prop?");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSsyntaxYsexpr_ifQ,"eval/syntax","sexpr-if?");
DEF(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YevalSsyntaxYbracket,"eval/syntax","bracket");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalSsyntaxYsexpr_first_exp,"eval/syntax","sexpr-first-exp");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSsyntaxYsexpr_monitor_info,"eval/syntax","sexpr-monitor-info");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSsyntaxYsexpr_self_evaluatingQ,"eval/syntax","sexpr-self-evaluating?");
DEF(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
DEF(YevalSsyntaxYsexpr_function_definitionQ,"eval/syntax","sexpr-function-definition?");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
DEF(YevalSsyntaxYsexpr_macro_expandQ,"eval/syntax","sexpr-macro-expand?");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YevalSsyntaxYsexpr_build_backquote_expander,"eval/syntax","sexpr-build-backquote-expander");
DEF(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
DEF(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
DEF(YevalSsyntaxYsexpr_atomQ,"eval/syntax","sexpr-atom?");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YevalSsyntaxYmap_tree,"eval/syntax","map-tree");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSsyntaxYsexpr_backquoteQ,"eval/syntax","sexpr-backquote?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSsyntaxYsexpr_pattern_variable_name,"eval/syntax","sexpr-pattern-variable-name");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
DEF(YevalSsyntaxYsexpr_iterate_body,"eval/syntax","sexpr-iterate-body");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YevalSsyntaxYsexpr_isaQ,"eval/syntax","sexpr-isa?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
DEF(YevalSsyntaxYsexpr_let_bound_variables,"eval/syntax","sexpr-let-bound-variables");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
DEF(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalSsyntaxYsexpr_make_if,"eval/syntax","sexpr-make-if");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
DEF(YevalSsyntaxYsexpr_iterateQ,"eval/syntax","sexpr-iterate?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSsyntaxYsexpr_function_value,"eval/syntax","sexpr-function-value");
DEF(YevalSsyntaxYsexpr_methodQ,"eval/syntax","sexpr-method?");
DEF(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YevalSsyntaxYsexpr_quotedQ,"eval/syntax","sexpr-quoted?");
DEF(YevalSsyntaxYsexpr_applicationQ,"eval/syntax","sexpr-application?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSsyntaxYsexpr_assignmentQ,"eval/syntax","sexpr-assignment?");
DEF(YevalSsyntaxYsexpr_definitionQ,"eval/syntax","sexpr-definition?");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
DEF(YevalSsyntaxYsexpr_pattern_variableQ,"eval/syntax","sexpr-pattern-variable?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSsyntaxYsexpr_monitor_test,"eval/syntax","sexpr-monitor-test");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSsyntaxYas_signature,"eval/syntax","as-signature");
DEF(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DEF(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
DEF(YevalSsyntaxYsexpr_unwind_protectQ,"eval/syntax","sexpr-unwind-protect?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
DEF(YevalSsyntaxYsexpr_make_quote,"eval/syntax","sexpr-make-quote");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
DEF(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
DEF(YevalSsyntaxYsexpr_first_operand,"eval/syntax","sexpr-first-operand");
DEF(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSsyntaxYTbq_nconcT,"eval/syntax","*bq-nconc*");
DEF(YevalSsyntaxYsexpr_last_expQ,"eval/syntax","sexpr-last-exp?");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
DEF(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
DEF(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
DEF(YevalSsyntaxYsexpr_unique_name,"eval/syntax","sexpr-unique-name");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YevalSsyntaxYTbq_quoteT,"eval/syntax","*bq-quote*");
DEF(YevalSsyntaxYsexpr_syntax_ifQ,"eval/syntax","sexpr-syntax-if?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
DEF(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSsyntaxYsexpr_let_namesAvalues,"eval/syntax","sexpr-let-names+values");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
DEF(YevalSsyntaxYsexpr_iterate_inits,"eval/syntax","sexpr-iterate-inits");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YevalSsyntaxYsexpr_loc_body,"eval/syntax","sexpr-loc-body");
DEF(YevalSsyntaxYsexpr_make_syntax_if,"eval/syntax","sexpr-make-syntax-if");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
DEF(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
DEF(YevalSsyntaxYsexpr_letQ,"eval/syntax","sexpr-let?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalSsyntaxYbq_process,"eval/syntax","bq-process");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
DEF(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YevalSsyntaxYTbq_listTT,"eval/syntax","*bq-list**");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YevalSsyntaxYsexpr_new_unique_name_counterX,"eval/syntax","sexpr-new-unique-name-counter!");
DEF(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
DEF(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
DEF(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
DEF(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSsyntaxYTbq_listT,"eval/syntax","*bq-list*");
DEF(YevalSsyntaxYsexpr_method_value,"eval/syntax","sexpr-method-value");
DEF(YevalSsyntaxYTbq_appendT,"eval/syntax","*bq-append*");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalSsyntaxYsexpr_monitorQ,"eval/syntax","sexpr-monitor?");
DEF(YevalSsyntaxYsexpr_no_operandsQ,"eval/syntax","sexpr-no-operands?");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSsyntaxYsexpr_monitor_type,"eval/syntax","sexpr-monitor-type");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
DEF(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
DEF(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YevalSsyntaxYsexpr_begin_actions,"eval/syntax","sexpr-begin-actions");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_owner,"goo/boot","prop-owner");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
DEF(YevalSsyntaxYsexpr_let_body,"eval/syntax","sexpr-let-body");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(Ytup,"goo/boot","tup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSsyntaxYLnameG,"eval/syntax","<name>");
DEF(YevalSsyntaxYTbq_clobberableT,"eval/syntax","*bq-clobberable*");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSsyntaxYbq_remove_tokens,"eval/syntax","bq-remove-tokens");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
DEF(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSsyntaxYDsexpr_macro_tag,"eval/syntax","$sexpr-macro-tag");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YevalSsyntaxYsexpr_iterate_signature,"eval/syntax","sexpr-iterate-signature");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSsyntaxYsexpr_locQ,"eval/syntax","sexpr-loc?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
DEF(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
DEF(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YLcolG,"goo/boot","<col>");
DEF(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
DEF(YevalSsyntaxYsexpr_tagged_listQ,"eval/syntax","sexpr-tagged-list?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSsyntaxYsexpr_method_parameters,"eval/syntax","sexpr-method-parameters");
DEF(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSsyntaxYsexpr_generic_definitionQ,"eval/syntax","sexpr-generic-definition?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_162);
DEFLIT(lit_172);
DEFLIT(lit_206);
DEFLIT(lit_159);
DEFLIT(lit_189);
DEFLIT(lit_47);
DEFLIT(lit_38);
DEFLIT(lit_147);
DEFLIT(lit_157);
DEFLIT(lit_70);
DEFLIT(lit_167);
DEFLIT(lit_152);
DEFLIT(lit_208);
DEFLIT(lit_26);
DEFLIT(lit_232);
DEFLIT(lit_18);
DEFLIT(lit_187);
DEFLIT(lit_196);
DEFLIT(lit_255);
DEFLIT(lit_119);
DEFLIT(lit_10);
DEFLIT(lit_212);
DEFLIT(lit_225);
DEFLIT(lit_217);
DEFLIT(lit_135);
DEFLIT(lit_125);
DEFLIT(lit_116);
DEFLIT(lit_72);
DEFLIT(lit_202);
DEFLIT(lit_103);
DEFLIT(lit_191);
DEFLIT(lit_53);
DEFLIT(lit_106);
DEFLIT(lit_181);
DEFLIT(lit_151);
DEFLIT(lit_9);
DEFLIT(lit_215);
DEFLIT(lit_169);
DEFLIT(lit_123);
DEFLIT(lit_34);
DEFLIT(lit_114);
DEFLIT(lit_200);
DEFLIT(lit_241);
DEFLIT(lit_194);
DEFLIT(lit_142);
DEFLIT(lit_227);
DEFLIT(lit_145);
DEFLIT(lit_243);
DEFLIT(lit_246);
DEFLIT(lit_121);
DEFLIT(lit_251);
DEFLIT(lit_60);
DEFLIT(lit_197);
DEFLIT(lit_253);
DEFLIT(lit_228);
DEFLIT(lit_74);
DEFLIT(lit_139);
DEFLIT(lit_65);
DEFLIT(lit_128);
DEFLIT(lit_71);
DEFLIT(lit_214);
DEFLIT(lit_115);
DEFLIT(lit_216);
DEFLIT(lit_249);
DEFLIT(lit_120);
DEFLIT(lit_150);
DEFLIT(lit_179);
DEFLIT(lit_231);
DEFLIT(lit_4);
DEFLIT(lit_0);
DEFLIT(lit_229);
DEFLIT(lit_46);
DEFLIT(lit_256);
DEFLIT(lit_15);
DEFLIT(lit_49);
DEFLIT(lit_69);
DEFLIT(lit_183);
DEFLIT(lit_166);
DEFLIT(lit_165);
DEFLIT(lit_161);
DEFLIT(lit_28);
DEFLIT(lit_97);
DEFLIT(lit_86);
DEFLIT(lit_13);
DEFLIT(lit_76);
DEFLIT(lit_6);
DEFLIT(lit_141);
DEFLIT(lit_94);
DEFLIT(lit_110);
DEFLIT(lit_17);
DEFLIT(lit_22);
DEFLIT(lit_36);
DEFLIT(lit_233);
DEFLIT(lit_45);
DEFLIT(lit_20);
DEFLIT(lit_131);
DEFLIT(lit_101);
DEFLIT(lit_234);
DEFLIT(lit_81);
DEFLIT(lit_184);
DEFLIT(lit_188);
DEFLIT(lit_175);
DEFLIT(lit_192);
DEFLIT(lit_168);
DEFLIT(lit_195);
DEFLIT(lit_109);
DEFLIT(lit_54);
DEFLIT(lit_154);
DEFLIT(lit_79);
DEFLIT(lit_224);
DEFLIT(lit_144);
DEFLIT(lit_173);
DEFLIT(lit_170);
DEFLIT(lit_59);
DEFLIT(lit_198);
DEFLIT(lit_1);
DEFLIT(lit_182);
DEFLIT(lit_73);
DEFLIT(lit_138);
DEFLIT(lit_133);
DEFLIT(lit_57);
DEFLIT(lit_239);
DEFLIT(lit_176);
DEFLIT(lit_178);
DEFLIT(lit_44);
DEFLIT(lit_129);
DEFLIT(lit_84);
DEFLIT(lit_3);
DEFLIT(lit_203);
DEFLIT(lit_136);
DEFLIT(lit_108);
DEFLIT(lit_237);
DEFLIT(lit_55);
DEFLIT(lit_107);
DEFLIT(lit_40);
DEFLIT(lit_24);
DEFLIT(lit_148);
DEFLIT(lit_211);
DEFLIT(lit_171);
DEFLIT(lit_32);
DEFLIT(lit_186);
DEFLIT(lit_156);
DEFLIT(lit_12);
DEFLIT(lit_8);
DEFLIT(lit_199);
DEFLIT(lit_63);
DEFLIT(lit_205);
DEFLIT(lit_67);
DEFLIT(lit_21);
DEFLIT(lit_95);
DEFLIT(lit_226);
DEFLIT(lit_146);
DEFLIT(lit_235);
DEFLIT(lit_164);
DEFLIT(lit_134);
DEFLIT(lit_82);
DEFLIT(lit_85);
DEFLIT(lit_102);
DEFLIT(lit_93);
DEFLIT(lit_88);
DEFLIT(lit_247);
DEFLIT(lit_99);
DEFLIT(lit_16);
DEFLIT(lit_245);
DEFLIT(lit_213);
DEFLIT(lit_41);
DEFLIT(lit_124);
DEFLIT(lit_221);
DEFLIT(lit_127);
DEFLIT(lit_201);
DEFLIT(lit_112);
DEFLIT(lit_193);
DEFLIT(lit_37);
DEFLIT(lit_48);
DEFLIT(lit_223);
DEFLIT(lit_43);
DEFLIT(lit_52);
DEFLIT(lit_122);
DEFLIT(lit_210);
DEFLIT(lit_252);
DEFLIT(lit_100);
DEFLIT(lit_238);
DEFLIT(lit_92);
DEFLIT(lit_80);
DEFLIT(lit_87);
DEFLIT(lit_207);
DEFLIT(lit_96);
DEFLIT(lit_117);
DEFLIT(lit_250);
DEFLIT(lit_29);
DEFLIT(lit_158);
DEFLIT(lit_51);
DEFLIT(lit_180);
DEFLIT(lit_163);
DEFLIT(lit_126);
DEFLIT(lit_19);
DEFLIT(lit_25);
DEFLIT(lit_83);
DEFLIT(lit_153);
DEFLIT(lit_209);
DEFLIT(lit_248);
DEFLIT(lit_111);
DEFLIT(lit_118);
DEFLIT(lit_90);
DEFLIT(lit_254);
DEFLIT(lit_113);
DEFLIT(lit_33);
DEFLIT(lit_14);
DEFLIT(lit_78);
DEFLIT(lit_220);
DEFLIT(lit_143);
DEFLIT(lit_68);
DEFLIT(lit_62);
DEFLIT(lit_104);
DEFLIT(lit_27);
DEFLIT(lit_23);
DEFLIT(lit_91);
DEFLIT(lit_5);
DEFLIT(lit_230);
DEFLIT(lit_149);
DEFLIT(lit_75);
DEFLIT(lit_140);
DEFLIT(lit_66);
DEFLIT(lit_132);
DEFLIT(lit_236);
DEFLIT(lit_219);
DEFLIT(lit_190);
DEFLIT(lit_42);
DEFLIT(lit_218);
DEFLIT(lit_177);
DEFLIT(lit_130);
DEFLIT(lit_2);
DEFLIT(lit_105);
DEFLIT(lit_50);
DEFLIT(lit_222);
DEFLIT(lit_174);
DEFLIT(lit_98);
DEFLIT(lit_30);
DEFLIT(lit_39);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_204);
DEFLIT(lit_242);
DEFLIT(lit_61);
DEFLIT(lit_58);
DEFLIT(lit_155);
DEFLIT(lit_64);
DEFLIT(lit_77);
DEFLIT(lit_185);
DEFLIT(lit_240);
DEFLIT(lit_160);
DEFLIT(lit_35);
DEFLIT(lit_56);
DEFLIT(lit_31);
DEFLIT(lit_89);
DEFLIT(lit_244);
DEFLIT(lit_137);

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
LOCFOR(fun_sexpr_forward_primitiveQ_23);
LOCFOR(fun_sexpr_signature_parameters_24);
LOCFOR(fun_sexpr_value_type_25);
LOCFOR(fun_sexpr_value_type_26);
LOCFOR(fun_sexpr_signature_value_27);
FUNFOR(YevalSsyntaxYas_signature);
LOCFOR(fun_sexpr_function_signature_29);
LOCFOR(fun_sexpr_function_parameters_30);
LOCFOR(fun_sexpr_function_value_31);
LOCFOR(fun_sexpr_function_body_32);
LOCFOR(fun_sexpr_function_definition_value_33);
LOCFOR(fun_sexpr_methodQ_34);
LOCFOR(fun_sexpr_method_signature_35);
LOCFOR(fun_sexpr_method_parameters_36);
LOCFOR(fun_sexpr_method_value_37);
LOCFOR(fun_sexpr_method_body_38);
LOCFOR(fun_sexpr_make_anonymous_method_39);
LOCFOR(fun_sexpr_make_method_40);
LOCFOR(fun_sexpr_ifQ_41);
LOCFOR(fun_sexpr_if_test_42);
LOCFOR(fun_sexpr_if_then_43);
LOCFOR(fun_sexpr_if_else_44);
LOCFOR(fun_sexpr_make_if_45);
LOCFOR(fun_sexpr_blockQ_46);
LOCFOR(fun_sexpr_block_name_47);
LOCFOR(fun_sexpr_block_body_48);
LOCFOR(fun_sexpr_unwind_protectQ_49);
LOCFOR(fun_sexpr_unwind_protect_protected_form_50);
LOCFOR(fun_sexpr_unwind_protect_cleanup_forms_51);
LOCFOR(fun_sexpr_monitorQ_52);
LOCFOR(fun_x_1406_53);
LOCFOR(fun_54);
LOCFOR(fun_sexpr_monitor_expand_55);
FUNFOR(YevalSsyntaxYfind_option);
LOCFOR(fun_x_1408_57);
LOCFOR(fun_58);
LOCFOR(fun_sexpr_monitor_type_59);
LOCFOR(fun_x_1410_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1412_62);
LOCFOR(fun_63);
LOCFOR(fun_sexpr_monitor_info_64);
LOCFOR(fun_sexpr_monitor_test_65);
LOCFOR(fun_sexpr_monitor_body_66);
LOCFOR(fun_sexpr_beginQ_67);
LOCFOR(fun_sexpr_begin_actions_68);
LOCFOR(fun_sexpr_last_expQ_69);
LOCFOR(fun_sexpr_first_exp_70);
LOCFOR(fun_sexpr_rest_exps_71);
LOCFOR(fun_sexpr_sequence_Gbegin_72);
LOCFOR(fun_sexpr_make_begin_73);
LOCFOR(fun_sexpr_applicationQ_74);
LOCFOR(fun_sexpr_operator_75);
LOCFOR(fun_sexpr_operands_76);
LOCFOR(fun_sexpr_no_operandsQ_77);
LOCFOR(fun_sexpr_first_operand_78);
LOCFOR(fun_sexpr_rest_operands_79);
LOCFOR(fun_sexpr_make_application_80);
LOCFOR(fun_sexpr_new_unique_name_counterX_81);
LOCFOR(fun_sexpr_unique_name_82);
LOCFOR(fun_sexpr_defQ_83);
LOCFOR(fun_sexpr_def_variable_84);
LOCFOR(fun_sexpr_def_value_85);
LOCFOR(fun_sexpr_letQ_86);
LOCFOR(fun_87);
LOCFOR(fun_sexpr_let_bound_variables_88);
LOCFOR(fun_89);
LOCFOR(fun_sexpr_let_values_90);
LOCFOR(fun_sexpr_let_body_91);
LOCFOR(fun_inner_92);
LOCFOR(fun_loop_93);
LOCFOR(fun_sexpr_let_namesAvalues_94);
LOCFOR(fun_col_95);
LOCFOR(fun_sexpr_let_Gcombination_96);
LOCFOR(fun_sexpr_locQ_97);
LOCFOR(fun_sexpr_loc_bound_names_98);
LOCFOR(fun_99);
LOCFOR(fun_sexpr_loc_bound_signatures_100);
LOCFOR(fun_sexpr_loc_bound_bodies_101);
LOCFOR(fun_sexpr_loc_raw_body_102);
LOCFOR(fun_sexpr_loc_body_103);
LOCFOR(fun_sexpr_iterateQ_104);
LOCFOR(fun_sexpr_iterate_name_105);
LOCFOR(fun_106);
LOCFOR(fun_sexpr_iterate_signature_107);
LOCFOR(fun_108);
LOCFOR(fun_sexpr_iterate_inits_109);
LOCFOR(fun_sexpr_iterate_body_110);
LOCFOR(fun_sexpr_iterate_Gloc_111);
LOCFOR(fun_sexpr_isaQ_112);
LOCFOR(fun_sexpr_isa_parent_113);
LOCFOR(fun_sexpr_isa_prop_inits_114);
LOCFOR(fun_sexpr_isa_init_props_115);
LOCFOR(fun_sexpr_isa_init_values_116);
LOCFOR(fun_sexpr_define_classQ_117);
LOCFOR(fun_sexpr_define_class_parents_118);
LOCFOR(fun_sexpr_propQ_119);
LOCFOR(fun_sexpr_prop_name_120);
LOCFOR(fun_sexpr_prop_owner_121);
LOCFOR(fun_sexpr_prop_init_var_122);
LOCFOR(fun_sexpr_prop_type_123);
LOCFOR(fun_sexpr_prop_initQ_124);
LOCFOR(fun_sexpr_prop_init_125);
LOCFOR(fun_sexpr_fab_getter_126);
LOCFOR(fun_sexpr_fab_setter_127);
LOCFOR(fun_sexpr_fab_setter_name_128);
LOCFOR(fun_sexpr_macroQ_129);
LOCFOR(fun_sexpr_macro_expandQ_130);
LOCFOR(fun_sexpr_make_syntax_if_131);
FUNFOR(YevalSsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_133);
LOCFOR(fun_sexpr_unquoteQ_134);
LOCFOR(fun_sexpr_unquote_splicingQ_135);
LOCFOR(fun_sexpr_backquoteQ_136);
LOCFOR(fun_sexpr_atomQ_137);
LOCFOR(fun_nreconc_138);
LOCFOR(fun_loop_139);
LOCFOR(fun_140);
LOCFOR(fun_bq_process_141);
LOCFOR(fun_bracket_142);
LOCFOR(fun_map_tree_143);
LOCFOR(fun_bq_remove_tokens_144);
LOCFOR(fun_sexpr_syntax_ifQ_145);
LOCFOR(fun_sexpr_syntax_if_value_146);
LOCFOR(fun_sexpr_syntax_if_pattern_147);
LOCFOR(fun_sexpr_syntax_if_then_148);
LOCFOR(fun_sexpr_syntax_if_else_149);
LOCFOR(fun_sexpr_pattern_variableQ_150);
LOCFOR(fun_sexpr_pattern_variable_name_151);
LOCFOR(fun_col_152);
LOCFOR(fun_sexpr_bind_pattern_variables_153);
LOCFOR(fun_sexpr_make_macro_function_154);
extern P YevalSsyntaxY___main_0___ ();
extern P YevalSsyntaxY___main_1___ ();
extern P YevalSsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF1529;
  P tmpF1528;
  P tmpF1527;
  P tmpF1526;
  P tmpF1525;
  P tmpF1524;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF1524 = T1;
  if (tmpF1524 != YPfalse) {
    T2 = tmpF1524;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF1525 = T4;
    if (tmpF1525 != YPfalse) {
      T5 = tmpF1525;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPtrue);
      tmpF1526 = T7;
      if (tmpF1526 != YPfalse) {
        T8 = tmpF1526;
      } else {
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPfalse);
        tmpF1527 = T10;
        if (tmpF1527 != YPfalse) {
          T11 = tmpF1527;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF1528 = T13;
          if (tmpF1528 != YPfalse) {
            T14 = tmpF1528;
          } else {
            T16 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YgooScolsSvecYLvecG));
            tmpF1529 = T16;
            if (tmpF1529 != YPfalse) {
              T17 = tmpF1529;
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
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLsymG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_tagged_listQ_2) {
  P exp_,tag_;
  P tmpF1530;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF1530 = T1;
  if (tmpF1530 != YPfalse) {
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
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_quote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_quote_4) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_quote_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_text_of_quotation_5) {
  P quot_;
  P T0;
  P a1;
LINK_STACK();
  ARG(quot_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),quot_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignmentQ_6) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_set_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_variable_7) {
  P assn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(assn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),assn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_value_8) {
  P assn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(assn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),assn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_9) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_10) {
  P exp_;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
UNLINK_STACK();
  QRET(exp_);
}

FUNCODEDEF(fun_sexpr_variable_type_11) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_type_12) {
  P exp_;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_17));
}

FUNCODEDEF(fun_sexpr_definitionQ_13) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_definition_variable_14) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_definition_value_15) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definitionQ_16) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_syntax_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_variable_17) {
  P defn_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_value_18) {
  P defn_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesY2nd),defn_);
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
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_function_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_definitionQ_20) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_generic_definitionQ_21) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_generic_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_variable_22) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_forward_primitiveQ_23) {
  P defn_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),defn_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_24) {
  P signature_;
  P values_spec_indexF1531;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_39));
  values_spec_indexF1531 = T1;
  if (values_spec_indexF1531 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),signature_,YPint((P)0),values_spec_indexF1531);
    T2 = T3;
  } else {
    T2 = signature_;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_value_type_25) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_value_type_26) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_sexpr_signature_value_27) {
  P signature_;
  P valueF1534;
  P tmpF1533;
  P values_spec_indexF1532;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_39));
  values_spec_indexF1532 = T1;
  tmpF1533 = values_spec_indexF1532;
  if (tmpF1533 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),values_spec_indexF1532,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),signature_,T6);
    valueF1534 = T5;
    T8 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),valueF1534,LITREF(lit_43));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
      T12 = CALL1(1,VARREF(Ytail),valueF1534);
      T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSsyntaxYsexpr_value_type),T12);
      T9 = CALL3(1,VARREF(YgooSmacrosYcat),T10,T11,Ynil);
      T7 = T9;
    } else {
      T7 = valueF1534;
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
  P a1;
LINK_STACK();
  ARG(sig_, 0);
loop:
UNLINK_STACK();
  RET(sig_);
}

FUNCODEDEF(fun_sexpr_function_signature_29) {
  P defn_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_parameters_30) {
  P defn_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_value_31) {
  P defn_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_body_32) {
  P defn_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_value_33) {
  P defn_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T5 = CALL1(1,VARREF(Ytail),defn_);
  T4 = CALL1(1,VARREF(Ytail),T5);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYDsexpr_method_tag),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_methodQ_34) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_signature_35) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_parameters_36) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_value_37) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_method_body_38) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),method_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_anonymous_method_39) {
  P parameters_,body_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(parameters_, 0);
  ARG(body_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_method_tag));
  T2 = CALL1(1,VARREF(Ylst),parameters_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_method_40) {
  P name_,parameters_,body_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(parameters_, 1);
  ARG(body_, 2);
loop:
  T1 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_ifQ_41) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_if_test_42) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_then_43) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_else_44) {
  P exp_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
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

FUNCODEDEF(fun_sexpr_make_if_45) {
  P test_,then_,else_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(then_, 1);
  ARG(else_, 2);
loop:
  T0 = CALL4(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_if_tag),test_,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_blockQ_46) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_bind_exit_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_block_name_47) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_block_body_48) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protectQ_49) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_50) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_51) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitorQ_52) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_monitor_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1406_53) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_88),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P optionsF1544;
  P x_1405F1543;
  P x_1405F1542;
  P x_1405F1541;
  P x_1405F1540;
  P bodyF1539;
  P handlerF1538;
  P optionsF1537;
  P x_1405F1536;
  P x_1406F1535;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1406_53,2);
  x_1406F1535 = T1;
  FUNINIT(x_1406F1535, 2,FREEREF(0),return_);
  x_1405F1536 = FREEREF(0);
  optionsF1537 = YPfalse;
  optionsF1537 = BOXFAB(optionsF1537);
  handlerF1538 = YPfalse;
  handlerF1538 = BOXFAB(handlerF1538);
  bodyF1539 = YPfalse;
  bodyF1539 = BOXFAB(bodyF1539);
  T9 = CALL2(1,VARREF(YisaQ),x_1405F1536,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1405F1536,LITREF(lit_81),x_1406F1535);
    x_1405F1540 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1405F1540,x_1406F1535);
    BOXVAL(optionsF1537) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1405F1540);
    x_1405F1541 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1405F1541,x_1406F1535);
    BOXVAL(handlerF1538) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1405F1541);
    x_1405F1542 = T17;
    BOXVAL(bodyF1539) = x_1405F1542;
    x_1405F1543 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1405F1543,x_1406F1535);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1406F1535,LITREF(lit_89),x_1405F1536);
  }
  T24 = BOXVAL(optionsF1537);
  T23 = CALL2(1,VARREF(YisaQ),T24,VARREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
    T30 = BOXVAL(optionsF1537);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF1537);
    T22 = T31;
  }
  optionsF1544 = T22;
  T33 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_type),optionsF1544);
  T34 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_info),optionsF1544);
  T35 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_test),optionsF1544);
  T36 = BOXVAL(handlerF1538);
  T38 = BOXVAL(bodyF1539);
  T37 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_body),T38);
  T32 = CALL5(1,VARREF(Ytup),T33,T34,T35,T36,T37);
  T21 = T32;
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_expand_55) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_54,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSsyntaxYfind_option) {
  P options_,option_,default_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(options_, 0);
  ARG(option_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),options_);
  if (T1 != YPfalse) {
    T0 = default_;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsSseqY1st),options_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsSseqY1st),options_);
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

FUNCODEDEF(fun_x_1408_57) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_98),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P return_;
  P x_1407F1548;
  P typeF1547;
  P x_1407F1546;
  P x_1408F1545;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1408_57,2);
  x_1408F1545 = T1;
  FUNINIT(x_1408F1545, 2,FREEREF(0),return_);
  x_1407F1546 = FREEREF(0);
  typeF1547 = YPfalse;
  typeF1547 = BOXFAB(typeF1547);
  T5 = CALL2(1,VARREF(YisaQ),x_1407F1546,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1407F1546,x_1408F1545);
    BOXVAL(typeF1547) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1407F1546);
    x_1407F1548 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1407F1548,x_1408F1545);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1408F1545,LITREF(lit_89),x_1407F1546);
  }
  T11 = BOXVAL(typeF1547);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_59) {
  P options_;
  P type_listF1549;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_90),LITREF(lit_96));
  type_listF1549 = T1;
  T3 = FUNFAB(fun_58,1,type_listF1549);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1410_60) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_104),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1409F1553;
  P info_exprF1552;
  P x_1409F1551;
  P x_1410F1550;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1410_60,2);
  x_1410F1550 = T1;
  FUNINIT(x_1410F1550, 2,FREEREF(0),return_);
  x_1409F1551 = FREEREF(0);
  info_exprF1552 = YPfalse;
  info_exprF1552 = BOXFAB(info_exprF1552);
  T5 = CALL2(1,VARREF(YisaQ),x_1409F1551,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1409F1551,x_1410F1550);
    BOXVAL(info_exprF1552) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1409F1551);
    x_1409F1553 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1409F1553,x_1410F1550);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1410F1550,LITREF(lit_89),x_1409F1551);
  }
  T11 = BOXVAL(info_exprF1552);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1412_62) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_106),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1411F1559;
  P x_1411F1558;
  P argumentsF1557;
  P messageF1556;
  P x_1411F1555;
  P x_1412F1554;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1412_62,2);
  x_1412F1554 = T1;
  FUNINIT(x_1412F1554, 2,FREEREF(0),return_);
  x_1411F1555 = FREEREF(0);
  messageF1556 = YPfalse;
  messageF1556 = BOXFAB(messageF1556);
  argumentsF1557 = YPfalse;
  argumentsF1557 = BOXFAB(argumentsF1557);
  T7 = CALL2(1,VARREF(YisaQ),x_1411F1555,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1411F1555,x_1412F1554);
    BOXVAL(messageF1556) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1411F1555);
    x_1411F1558 = T10;
    BOXVAL(argumentsF1557) = x_1411F1558;
    x_1411F1559 = Ynil;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1411F1559,x_1412F1554);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1412F1554,LITREF(lit_89),x_1411F1555);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T19 = BOXVAL(messageF1556);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
  T24 = BOXVAL(argumentsF1557);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),7,T15,T16,T17,T18,T20,T21,Ynil);
  T5 = T14;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_64) {
  P options_;
  P tmpF1562;
  P descriptionF1561;
  P infoF1560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_100),YPfalse);
  infoF1560 = T1;
  T3 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_101),YPfalse);
  descriptionF1561 = T3;
  tmpF1562 = infoF1560;
  if (tmpF1562 != YPfalse) {
    T6 = descriptionF1561;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_102),options_);
    T4 = T7;
  } else {
    if (infoF1560 != YPfalse) {
      T10 = FUNFAB(fun_61,1,infoF1560);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF1561 != YPfalse) {
        T13 = FUNFAB(fun_63,1,descriptionF1561);
        T12 = with_exit(T13);
        T11 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T14 = LITREF(lit_112);
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

FUNCODEDEF(fun_sexpr_monitor_test_65) {
  P options_;
  P test_bodyF1563;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_70),LITREF(lit_114));
  test_bodyF1563 = T1;
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1563);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_66) {
  P body_;
  P T0;
  P a1;
LINK_STACK();
  ARG(body_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_beginQ_67) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_begin_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_begin_actions_68) {
  P begin_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(begin_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),begin_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_last_expQ_69) {
  P seq_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),seq_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_exp_70) {
  P seq_;
  P T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),seq_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_exps_71) {
  P seq_;
  P T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),seq_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_sequence_Gbegin_72) {
  P seq_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
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

FUNCODEDEF(fun_sexpr_make_begin_73) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYDsexpr_begin_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_74) {
  P exp_;
  P tmpF1564;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF1564 = T1;
  if (tmpF1564 != YPfalse) {
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

FUNCODEDEF(fun_sexpr_operator_75) {
  P app_;
  P T0;
  P a1;
LINK_STACK();
  ARG(app_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),app_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_operands_76) {
  P app_;
  P T0;
  P a1;
LINK_STACK();
  ARG(app_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),app_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_no_operandsQ_77) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_operand_78) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),args_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_operands_79) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_application_80) {
  P f_,operands_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(operands_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),f_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,operands_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_81) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(YevalSsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(YevalSsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_82) {
  P prefix_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(prefix_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),prefix_);
  T4 = CALL0(1,VARREF(YevalSsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,T3);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_defQ_83) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_def_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_def_variable_84) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_def_value_85) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_letQ_86) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_let_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_87) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_bound_variables_88) {
  P let_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_87;
  T2 = CALL1(1,VARREF(YgooStypesY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_89) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooStypesY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_90) {
  P let_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_89;
  T2 = CALL1(1,VARREF(YgooStypesY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_91) {
  P let_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),let_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_92) {
  P rtnames_,rtvalues_,index_,tnames_;
  P tmpF1566;
  P nameF1565;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rtnames_, 0);
  ARG(rtvalues_, 1);
  ARG(index_, 2);
  ARG(tnames_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tnames_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),rtnames_,rtvalues_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),tnames_);
    nameF1565 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF1565,VARREF(YLlstG));
    tmpF1566 = T7;
    if (tmpF1566 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF1565);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,LITREF(lit_160));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF1565);
      T14 = CALL2(1,VARREF(Ylst),T15,LITREF(lit_161));
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,rtnames_);
      T18 = CALL2(1,VARREF(Ylst),LITREF(lit_163),FREEREF(0));
      T17 = CALL4(1,VARREF(Ylst),LITREF(lit_162),FREEREF(0),index_,T18);
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),T17,rtvalues_);
      T19 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
      T20 = CALL1(1,VARREF(Ytail),tnames_);
      a1 = T13;
      a2 = T16;
      a3 = T19;
      a4 = T20;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T5 = T12;
    } else {
      T22 = CALL2(1,VARREF(YgooSmacrosYpair),nameF1565,rtnames_);
      T24 = CALL3(1,VARREF(Ylst),LITREF(lit_164),FREEREF(0),index_);
      T23 = CALL2(1,VARREF(YgooSmacrosYpair),T24,rtvalues_);
      T25 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
      T26 = CALL1(1,VARREF(Ytail),tnames_);
      a1 = T22;
      a2 = T23;
      a3 = T25;
      a4 = T26;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T5 = T21;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_93) {
  P rnames_,rvalues_,names_,vals_;
  P rtvaluesF1574;
  P rtnamesF1573;
  P tup27F1572;
  P innerF1571;
  P tupnameF1570;
  P tmpF1569;
  P valueF1568;
  P nameF1567;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rnames_, 0);
  ARG(rvalues_, 1);
  ARG(names_, 2);
  ARG(vals_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),rnames_);
    T4 = CALL1(1,VARREF(YgooSmacrosYrevX),rvalues_);
    T2 = CALL2(1,VARREF(Ytup),T3,T4);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    nameF1567 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    valueF1568 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF1567,VARREF(YLlstG));
    tmpF1569 = T11;
    if (tmpF1569 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF1567);
      T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,LITREF(lit_43));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unique_name),LITREF(lit_154));
      tupnameF1570 = T16;
      T19 = FUNSHELL(1,fun_inner_92,2);
      innerF1571 = T19;
      FUNINIT(innerF1571, 2,tupnameF1570,innerF1571);
      T21 = CALL1(1,VARREF(Ylst),tupnameF1570);
      T22 = CALL1(1,VARREF(Ylst),valueF1568);
      T23 = CALL1(1,VARREF(Ytail),nameF1567);
      T20 = CALL4(0,innerF1571,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup27F1572 = T18;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F1572,YPint((P)0));
      rtnamesF1573 = T25;
      T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F1572,YPint((P)1));
      rtvaluesF1574 = T27;
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),rtnamesF1573,rnames_);
      T30 = CALL2(1,VARREF(YgooSmacrosYcat),rtvaluesF1574,rvalues_);
      T31 = CALL1(1,VARREF(Ytail),names_);
      T32 = CALL1(1,VARREF(Ytail),vals_);
      a1 = T29;
      a2 = T30;
      a3 = T31;
      a4 = T32;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T26 = T28;
      T24 = T26;
      T17 = T24;
      T15 = T17;
      T9 = T15;
    } else {
      T34 = CALL2(1,VARREF(YgooSmacrosYpair),nameF1567,rnames_);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),valueF1568,rvalues_);
      T36 = CALL1(1,VARREF(Ytail),names_);
      T37 = CALL1(1,VARREF(Ytail),vals_);
      a1 = T34;
      a2 = T35;
      a3 = T36;
      a4 = T37;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T9 = T33;
    }
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_namesAvalues_94) {
  P names_,vals_;
  P loopF1575;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_93,1);
  loopF1575 = T1;
  FUNINIT(loopF1575, 1,loopF1575);
  T2 = CALL4(0,loopF1575,Ynil,Ynil,names_,vals_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_95) {
  P names_,values_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(values_, 1);
loop:
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

FUNCODEDEF(fun_sexpr_let_Gcombination_96) {
  P let_exp_;
  P colF1582;
  P valuesF1581;
  P namesF1580;
  P tup28F1579;
  P bodyF1578;
  P ovaluesF1577;
  P onamesF1576;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF1576 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_values),let_exp_);
  ovaluesF1577 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_body),let_exp_);
  bodyF1578 = T5;
  T7 = CALL2(1,VARREF(YevalSsyntaxYsexpr_let_namesAvalues),onamesF1576,ovaluesF1577);
  tup28F1579 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F1579,YPint((P)0));
  namesF1580 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F1579,YPint((P)1));
  valuesF1581 = T11;
  T13 = FUNSHELL(1,fun_col_95,2);
  colF1582 = T13;
  FUNINIT(colF1582, 2,bodyF1578,colF1582);
  T14 = CALL2(0,colF1582,namesF1580,valuesF1581);
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

FUNCODEDEF(fun_sexpr_locQ_97) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_locals_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_names_98) {
  P loc_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_99) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),x_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_100) {
  P loc_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = fun_99;
  T2 = CALL1(1,VARREF(YgooStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_101) {
  P loc_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSruntimeYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YgooStypesY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_102) {
  P loc_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),loc_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_body_103) {
  P loc_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterateQ_104) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_iterate_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_name_105) {
  P rep_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_106) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_107) {
  P rep_exp_;
  P sigF1583;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  sigF1583 = T1;
  T4 = fun_106;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sigF1583);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF1583);
  if (T7 != YPfalse) {
    T6 = Ynil;
  } else {
    T8 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_values_tag));
    T6 = T8;
  }
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF1583);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T2 = CALL3(1,VARREF(YgooSmacrosYcat),T3,T6,T9);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_108) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooStypesY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_109) {
  P rep_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = fun_108;
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_110) {
  P rep_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),rep_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_Gloc_111) {
  P rep_exp_;
  P initsF1587;
  P bodyF1586;
  P sigF1585;
  P nameF1584;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_name),rep_exp_);
  nameF1584 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF1585 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF1586 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF1587 = T7;
  T11 = CALL2(1,VARREF(Ylst),nameF1584,sigF1585);
  T10 = CALL2(1,VARREF(YgooSmacrosYcat),T11,bodyF1586);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),nameF1584);
  T12 = CALL2(1,VARREF(YgooSmacrosYcat),T13,initsF1587);
  T8 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_locals_tag),T9,T12);
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_112) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_isa_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_parent_113) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_isa_prop_inits_114) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_props_115) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_116) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_classQ_117) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_class_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_class_parents_118) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_propQ_119) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_prop_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_name_120) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_owner_121) {
  P exp_;
  P paramF1588;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooScolsSseqY1st),T2);
  paramF1588 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF1588,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesY2nd),paramF1588);
    T3 = T5;
  } else {
    T3 = paramF1588;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_var_122) {
  P exp_;
  P paramF1589;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooScolsSseqY1st),T2);
  paramF1589 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF1589,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsSseqY1st),paramF1589);
    T3 = T5;
  } else {
    T3 = LITREF(lit_198);
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_type_123) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_value),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_initQ_124) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),exp_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)4));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_125) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),exp_,YPint((P)3));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_fab_getter_126) {
  P name_,type_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),LITREF(lit_198),type_);
  T1 = CALL1(1,VARREF(Ylst),T2);
  T4 = CALL3(1,VARREF(Ylst),LITREF(lit_203),LITREF(lit_198),name_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),name_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_127) {
  P name_,type_,prop_type_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(prop_type_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_206),prop_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_198),type_);
  T2 = CALL2(1,VARREF(Ylst),T3,T4);
  T6 = CALL4(1,VARREF(Ylst),LITREF(lit_207),LITREF(lit_206),LITREF(lit_198),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_name_128) {
  P name_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,LITREF(lit_209));
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_129) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_macro_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macro_expandQ_130) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_macro_expand_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_syntax_if_131) {
  P pat_,exp_,then_,else_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(pat_, 0);
  ARG(exp_, 1);
  ARG(then_, 2);
  ARG(else_, 3);
loop:
  T1 = CALL2(1,VARREF(Ylst),pat_,exp_);
  T0 = CALL4(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSsyntaxYsexpr_expand_backquote) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(1,VARREF(YevalSsyntaxYeval),T1,LITREF(lit_224));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_133) {
  P x_;
  P resF1591;
  P raw_resultF1590;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
  raw_resultF1590 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),raw_resultF1590);
  resF1591 = T3;
  T2 = resF1591;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_134) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_227));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_135) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_229));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_136) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,VARREF(YevalSsyntaxYDsexpr_quasiquote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_137) {
  P x_;
  P tmpF1592;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF1592 = T1;
  if (tmpF1592 != YPfalse) {
    T3 = tmpF1592;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),x_,Ynil);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nreconc_138) {
  P x_,y_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T1,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_139) {
  P p_,q_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(q_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),p_);
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_quoteT),p_);
    T5 = CALL1(1,VARREF(Ylst),T6);
    T4 = CALL2(1,VARREF(YevalSsyntaxYnreconc),q_,T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYTbq_appendT),T4);
    T2 = CALL1(1,FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),p_);
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),p_);
      T10 = CALL1(1,VARREF(Ytail),T11);
      T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
      T8 = CALL1(1,VARREF(Ynot),T9);
      if (T8 != YPfalse) {
        T12 = CALL2(1,VARREF(Yerror),LITREF(lit_238),p_);
      } else {
      }
      T18 = CALL1(1,VARREF(Ytail),p_);
      T17 = CALL1(1,VARREF(Yhead),T18);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T15 = CALL2(1,VARREF(YevalSsyntaxYnreconc),q_,T16);
      T14 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYTbq_appendT),T15);
      T13 = CALL1(1,FREEREF(0),T14);
    } else {
    }
    T20 = CALL1(1,VARREF(Ytail),p_);
    T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,VARREF(YevalSsyntaxYTcomma_atsignT));
    if (T19 != YPfalse) {
      T21 = CALL2(1,VARREF(Yerror),LITREF(lit_239),p_);
    } else {
    }
    T23 = CALL1(1,VARREF(Ytail),p_);
    T26 = CALL1(1,VARREF(Yhead),p_);
    T25 = CALL1(1,VARREF(YevalSsyntaxYbracket),T26);
    T24 = CALL2(1,VARREF(YgooSmacrosYpair),T25,q_);
    a1 = T23;
    a2 = T24;
    p_ = a1;
    q_ = a2;
    goto loop;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  P return_;
  P loopF1593;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_139,2);
  loopF1593 = T1;
  FUNINIT(loopF1593, 2,return_,loopF1593);
  T2 = CALL2(0,loopF1593,FREEREF(0),Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_141) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
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
          T15 = CALL2(1,VARREF(Yerror),LITREF(lit_235),T16);
          T13 = T15;
        } else {
          if (YPtrue != YPfalse) {
            T21 = FUNFAB(fun_140,1,x_);
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

FUNCODEDEF(fun_bracket_142) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
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

FUNCODEDEF(fun_map_tree_143) {
  P fn_,x_;
  P tmpF1596;
  P dF1595;
  P aF1594;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fn_,x_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL1(1,fn_,T5);
    aF1594 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),fn_,T8);
    dF1595 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YgooSmathYE),aF1594,T12);
    tmpF1596 = T11;
    if (tmpF1596 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YgooSmathYE),dF1595,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),aF1594,dF1595);
      T9 = T16;
    }
    T6 = T9;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_144) {
  P x_;
  P tmpF1598;
  P tmpF1597;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_111);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_244);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_245);
      } else {
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_246);
        } else {
          T9 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_quoteT));
          if (T9 != YPfalse) {
            T8 = LITREF(lit_5);
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
                tmpF1597 = T20;
                if (tmpF1597 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF1598 = T24;
                  if (tmpF1598 != YPfalse) {
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
                  T33 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_247),T34);
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

FUNCODEDEF(fun_sexpr_syntax_ifQ_145) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_syntax_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_value_146) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooStypesY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_147) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooScolsSseqY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_148) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_149) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),exp_,YPint((P)3),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_150) {
  P pat_;
  P tmpF1599;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  tmpF1599 = T1;
  if (tmpF1599 != YPfalse) {
    T2 = tmpF1599;
  } else {
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_151) {
  P pat_;
  P T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypesY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_152) {
  P pat_;
  P xF1601;
  P tmpF1600;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF1600 = T2;
  if (tmpF1600 != YPfalse) {
    T4 = tmpF1600;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF1601 = T7;
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variableQ),xF1601);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variable_name),xF1601);
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

FUNCODEDEF(fun_sexpr_bind_pattern_variables_153) {
  P pat_;
  P colF1602;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_152,1);
  colF1602 = T2;
  FUNINIT(colF1602, 1,colF1602);
  T3 = CALL1(0,colF1602,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_154) {
  P exp_;
  P funcF1604;
  P mifF1603;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
  T1 = CALL4(1,VARREF(YevalSsyntaxYsexpr_make_syntax_if),T2,LITREF(lit_1),T3,YPfalse);
  mifF1603 = T1;
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T8 = CALL1(1,VARREF(Ylst),mifF1603);
  T6 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T7,T8);
  funcF1604 = T6;
  T5 = funcF1604;
  T0 = T5;
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"sexpr-self-evaluating?");
  lit_1 = YPPsym((P)"exp");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSsyntaxYsexpr_self_evaluatingQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSsyntaxYsexpr_self_evaluatingQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_self_evaluatingQ_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSsyntaxYsexpr_self_evaluatingQ,T1);
  lit_2 = YPPsym((P)"sexpr-variable?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSsyntaxYsexpr_variableQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSsyntaxYsexpr_variableQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_variableQ_1;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSsyntaxYsexpr_variableQ,T6);
  lit_3 = YPPsym((P)"sexpr-tagged-list?");
  lit_4 = YPPsym((P)"tag");
  T10 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),LITREF(lit_3),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSsyntaxYsexpr_tagged_listQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSsyntaxYsexpr_tagged_listQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_tagged_listQ_2;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSsyntaxYsexpr_tagged_listQ,T11);
  lit_5 = YPPsym((P)"quote");
  VARSET(YevalSsyntaxYDsexpr_quote_tag,LITREF(lit_5));
  lit_6 = YPPsym((P)"sexpr-quoted?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSsyntaxYsexpr_quotedQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSsyntaxYsexpr_quotedQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_quotedQ_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSsyntaxYsexpr_quotedQ,T16);
  lit_7 = YPPsym((P)"sexpr-make-quote");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSsyntaxYsexpr_make_quote);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSsyntaxYsexpr_make_quote);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_make_quote_4;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSsyntaxYsexpr_make_quote,T21);
  lit_8 = YPPsym((P)"sexpr-text-of-quotation");
  lit_9 = YPPsym((P)"quot");
  T25 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),LITREF(lit_8),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSsyntaxYsexpr_text_of_quotation);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSsyntaxYsexpr_text_of_quotation);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_text_of_quotation_5;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSsyntaxYsexpr_text_of_quotation,T26);
  lit_10 = YPPsym((P)"set");
  VARSET(YevalSsyntaxYDsexpr_set_tag,LITREF(lit_10));
  lit_11 = YPPsym((P)"sexpr-assignment?");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),LITREF(lit_11),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSsyntaxYsexpr_assignmentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSsyntaxYsexpr_assignmentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_assignmentQ_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSsyntaxYsexpr_assignmentQ,T31);
  lit_12 = YPPsym((P)"sexpr-assignment-variable");
  lit_13 = YPPsym((P)"assn");
  T35 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),LITREF(lit_12),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSsyntaxYsexpr_assignment_variable);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSsyntaxYsexpr_assignment_variable);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_assignment_variable_7;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSsyntaxYsexpr_assignment_variable,T36);
  lit_14 = YPPsym((P)"sexpr-assignment-value");
  T40 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),LITREF(lit_14),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSsyntaxYsexpr_assignment_value);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSsyntaxYsexpr_assignment_value);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_assignment_value_8;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSsyntaxYsexpr_assignment_value,T41);
  lit_15 = YPPsym((P)"sexpr-variable-name");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),LITREF(lit_15),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSsyntaxYsexpr_variable_name);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSsyntaxYsexpr_variable_name);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_variable_name_9;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSsyntaxYsexpr_variable_name,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),LITREF(lit_15),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSsyntaxYsexpr_variable_name);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSsyntaxYsexpr_variable_name);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_variable_name_10;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSsyntaxYsexpr_variable_name,T51);
  lit_16 = YPPsym((P)"sexpr-variable-type");
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),LITREF(lit_16),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSsyntaxYsexpr_variable_type);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSsyntaxYsexpr_variable_type);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_variable_type_11;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSsyntaxYsexpr_variable_type,T56);
  lit_17 = YPPsym((P)"<any>");
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),LITREF(lit_16),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalSsyntaxYsexpr_variable_type);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSsyntaxYsexpr_variable_type);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_variable_type_12;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSsyntaxYsexpr_variable_type,T61);
  lit_18 = YPPsym((P)"dv");
  VARSET(YevalSsyntaxYDsexpr_define_tag,LITREF(lit_18));
  lit_19 = YPPsym((P)"sexpr-definition?");
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),LITREF(lit_19),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSsyntaxYsexpr_definitionQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSsyntaxYsexpr_definitionQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_definitionQ_13;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSsyntaxYsexpr_definitionQ,T66);
  lit_20 = YPPsym((P)"quasiquote");
  VARSET(YevalSsyntaxYDsexpr_quasiquote_tag,LITREF(lit_20));
  lit_21 = YPPsym((P)"sexpr-definition-variable");
  lit_22 = YPPsym((P)"defn");
  T70 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),LITREF(lit_21),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSsyntaxYsexpr_definition_variable);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSsyntaxYsexpr_definition_variable);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_definition_variable_14;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSsyntaxYsexpr_definition_variable,T71);
  lit_23 = YPPsym((P)"sexpr-definition-value");
  T75 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),LITREF(lit_23),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSsyntaxYsexpr_definition_value);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSsyntaxYsexpr_definition_value);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_definition_value_15;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSsyntaxYsexpr_definition_value,T76);
  lit_24 = YPPsym((P)"ds");
  VARSET(YevalSsyntaxYDsexpr_define_syntax_tag,LITREF(lit_24));
  lit_25 = YPPsym((P)"sexpr-syntax-definition?");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),LITREF(lit_25),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSsyntaxYsexpr_syntax_definitionQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSsyntaxYsexpr_syntax_definitionQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_syntax_definitionQ_16;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSsyntaxYsexpr_syntax_definitionQ,T81);
  lit_26 = YPPsym((P)"mac");
  VARSET(YevalSsyntaxYDsexpr_macro_tag,LITREF(lit_26));
  lit_27 = YPPsym((P)"sexpr-syntax-definition-variable");
  T85 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),LITREF(lit_27),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSsyntaxYsexpr_syntax_definition_variable);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSsyntaxYsexpr_syntax_definition_variable);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_syntax_definition_variable_17;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_variable,T86);
  lit_28 = YPPsym((P)"sexpr-syntax-definition-value");
  T90 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),LITREF(lit_28),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSsyntaxYsexpr_syntax_definition_value);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSsyntaxYsexpr_syntax_definition_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_syntax_definition_value_18;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_value,T91);
  lit_29 = YPPsym((P)"df");
  VARSET(YevalSsyntaxYDsexpr_define_function_tag,LITREF(lit_29));
  lit_30 = YPPsym((P)"sexpr-function-definition?");
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),LITREF(lit_30),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSsyntaxYsexpr_function_definitionQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSsyntaxYsexpr_function_definitionQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_function_definitionQ_19;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSsyntaxYsexpr_function_definitionQ,T96);
  lit_31 = YPPsym((P)"dm");
  VARSET(YevalSsyntaxYDsexpr_define_method_tag,LITREF(lit_31));
  lit_32 = YPPsym((P)"sexpr-method-definition?");
  T100 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),LITREF(lit_32),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSsyntaxYsexpr_method_definitionQ);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSsyntaxYsexpr_method_definitionQ);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_method_definitionQ_20;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSsyntaxYsexpr_method_definitionQ,T101);
  lit_33 = YPPsym((P)"dg");
  VARSET(YevalSsyntaxYDsexpr_define_generic_tag,LITREF(lit_33));
  lit_34 = YPPsym((P)"sexpr-generic-definition?");
  T105 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),LITREF(lit_34),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSsyntaxYsexpr_generic_definitionQ);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSsyntaxYsexpr_generic_definitionQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_generic_definitionQ_21;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSsyntaxYsexpr_generic_definitionQ,T106);
  lit_35 = YPPsym((P)"sexpr-function-definition-variable");
  T110 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),LITREF(lit_35),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSsyntaxYsexpr_function_definition_variable);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSsyntaxYsexpr_function_definition_variable);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_function_definition_variable_22;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSsyntaxYsexpr_function_definition_variable,T111);
  lit_36 = YPPsym((P)"sexpr-forward-primitive?");
  T115 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_23 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_23),LITREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSsyntaxYsexpr_forward_primitiveQ);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSsyntaxYsexpr_forward_primitiveQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_forward_primitiveQ_23;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSsyntaxYsexpr_forward_primitiveQ,T116);
  lit_37 = YPPsym((P)"sexpr-signature-parameters");
  lit_38 = YPPsym((P)"signature");
  lit_39 = YPPsym((P)"=>");
  T120 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_24 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_24),LITREF(lit_37),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSsyntaxYsexpr_signature_parameters);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSsyntaxYsexpr_signature_parameters);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_signature_parameters_24;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSsyntaxYsexpr_signature_parameters,T121);
  lit_40 = YPPsym((P)"sexpr-value-type");
  lit_41 = YPPsym((P)"x");
  T125 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_25 = YPmet(FUNCODEREF(fun_sexpr_value_type_25),LITREF(lit_40),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YevalSsyntaxYsexpr_value_type);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSsyntaxYsexpr_value_type);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_value_type_25;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSsyntaxYsexpr_value_type,T126);
  T130 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_26 = YPmet(FUNCODEREF(fun_sexpr_value_type_26),LITREF(lit_40),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSsyntaxYsexpr_value_type);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSsyntaxYsexpr_value_type);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_value_type_26;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSsyntaxYsexpr_value_type,T131);
  lit_42 = YPPsym((P)"sexpr-signature-value");
  lit_43 = YPPsym((P)"tup");
  lit_44 = YPPsym((P)"t*");
  T135 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_27 = YPmet(FUNCODEREF(fun_sexpr_signature_value_27),LITREF(lit_42),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YevalSsyntaxYsexpr_signature_value);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSsyntaxYsexpr_signature_value);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_signature_value_27;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSsyntaxYsexpr_signature_value,T136);
  lit_45 = YPPsym((P)"as-signature");
  lit_46 = YPPsym((P)"sig");
  T140 = YPsig(YPPlist(1,LITREF(lit_46)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYas_signature = YPmet(FUNCODEREF(YevalSsyntaxYas_signature),LITREF(lit_45),T140,ENVNUL,PNUL,YPfalse);
  T141 = YevalSsyntaxYas_signature;
  VARSET(YevalSsyntaxYas_signature,T141);
  lit_47 = YPPsym((P)"sexpr-function-signature");
  T142 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_29 = YPmet(FUNCODEREF(fun_sexpr_function_signature_29),LITREF(lit_47),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YevalSsyntaxYsexpr_function_signature);
  if (T145 != YPfalse) {
    T144 = VARREF(YevalSsyntaxYsexpr_function_signature);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_sexpr_function_signature_29;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YevalSsyntaxYsexpr_function_signature,T143);
  lit_48 = YPPsym((P)"sexpr-function-parameters");
  T147 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_30 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_30),LITREF(lit_48),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YevalSsyntaxYsexpr_function_parameters);
  if (T150 != YPfalse) {
    T149 = VARREF(YevalSsyntaxYsexpr_function_parameters);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_sexpr_function_parameters_30;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YevalSsyntaxYsexpr_function_parameters,T148);
  lit_49 = YPPsym((P)"sexpr-function-value");
  T152 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_31 = YPmet(FUNCODEREF(fun_sexpr_function_value_31),LITREF(lit_49),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSsyntaxYsexpr_function_value);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSsyntaxYsexpr_function_value);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_sexpr_function_value_31;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSsyntaxYsexpr_function_value,T153);
  lit_50 = YPPsym((P)"sexpr-function-body");
  T157 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_32 = YPmet(FUNCODEREF(fun_sexpr_function_body_32),LITREF(lit_50),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSsyntaxYsexpr_function_body);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSsyntaxYsexpr_function_body);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sexpr_function_body_32;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSsyntaxYsexpr_function_body,T158);
  lit_51 = YPPsym((P)"fun");
  VARSET(YevalSsyntaxYDsexpr_method_tag,LITREF(lit_51));
  lit_52 = YPPsym((P)"sexpr-function-definition-value");
  T162 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_33 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_33),LITREF(lit_52),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSsyntaxYsexpr_function_definition_value);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSsyntaxYsexpr_function_definition_value);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_sexpr_function_definition_value_33;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSsyntaxYsexpr_function_definition_value,T163);
  lit_53 = YPPsym((P)"sexpr-method?");
  T167 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_34 = YPmet(FUNCODEREF(fun_sexpr_methodQ_34),LITREF(lit_53),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSsyntaxYsexpr_methodQ);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSsyntaxYsexpr_methodQ);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_methodQ_34;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSsyntaxYsexpr_methodQ,T168);
  lit_54 = YPPsym((P)"sexpr-method-signature");
  lit_55 = YPPsym((P)"method-exp");
  T172 = YPsig(YPPlist(1,LITREF(lit_55)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_35 = YPmet(FUNCODEREF(fun_sexpr_method_signature_35),LITREF(lit_54),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalSsyntaxYsexpr_method_signature);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSsyntaxYsexpr_method_signature);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_method_signature_35;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSsyntaxYsexpr_method_signature,T173);
  lit_56 = YPPsym((P)"sexpr-method-parameters");
  T177 = YPsig(YPPlist(1,LITREF(lit_55)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_36 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_36),LITREF(lit_56),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YevalSsyntaxYsexpr_method_parameters);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSsyntaxYsexpr_method_parameters);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sexpr_method_parameters_36;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSsyntaxYsexpr_method_parameters,T178);
  lit_57 = YPPsym((P)"sexpr-method-value");
  T182 = YPsig(YPPlist(1,LITREF(lit_55)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_37 = YPmet(FUNCODEREF(fun_sexpr_method_value_37),LITREF(lit_57),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSsyntaxYsexpr_method_value);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSsyntaxYsexpr_method_value);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_sexpr_method_value_37;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSsyntaxYsexpr_method_value,T183);
  lit_58 = YPPsym((P)"sexpr-method-body");
  T187 = YPsig(YPPlist(1,LITREF(lit_55)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_38 = YPmet(FUNCODEREF(fun_sexpr_method_body_38),LITREF(lit_58),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalSsyntaxYsexpr_method_body);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSsyntaxYsexpr_method_body);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_sexpr_method_body_38;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSsyntaxYsexpr_method_body,T188);
  lit_59 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_60 = YPPsym((P)"parameters");
  lit_61 = YPPsym((P)"body");
  T192 = YPsig(YPPlist(2,LITREF(lit_60),LITREF(lit_61)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_39 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_39),LITREF(lit_59),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YevalSsyntaxYsexpr_make_anonymous_method);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSsyntaxYsexpr_make_anonymous_method);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_sexpr_make_anonymous_method_39;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSsyntaxYsexpr_make_anonymous_method,T193);
  lit_62 = YPPsym((P)"sexpr-make-method");
  lit_63 = YPPsym((P)"name");
  T197 = YPsig(YPPlist(3,LITREF(lit_63),LITREF(lit_60),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_40 = YPmet(FUNCODEREF(fun_sexpr_make_method_40),LITREF(lit_62),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSsyntaxYsexpr_make_method);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSsyntaxYsexpr_make_method);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_sexpr_make_method_40;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSsyntaxYsexpr_make_method,T198);
  lit_64 = YPPsym((P)"if");
  VARSET(YevalSsyntaxYDsexpr_if_tag,LITREF(lit_64));
  lit_65 = YPPsym((P)"sexpr-if?");
  T202 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_41 = YPmet(FUNCODEREF(fun_sexpr_ifQ_41),LITREF(lit_65),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSsyntaxYsexpr_ifQ);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSsyntaxYsexpr_ifQ);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_sexpr_ifQ_41;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSsyntaxYsexpr_ifQ,T203);
  lit_66 = YPPsym((P)"sexpr-if-test");
  T207 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_42 = YPmet(FUNCODEREF(fun_sexpr_if_test_42),LITREF(lit_66),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSsyntaxYsexpr_if_test);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSsyntaxYsexpr_if_test);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_sexpr_if_test_42;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSsyntaxYsexpr_if_test,T208);
  lit_67 = YPPsym((P)"sexpr-if-then");
  T212 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_43 = YPmet(FUNCODEREF(fun_sexpr_if_then_43),LITREF(lit_67),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YevalSsyntaxYsexpr_if_then);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSsyntaxYsexpr_if_then);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_if_then_43;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSsyntaxYsexpr_if_then,T213);
  lit_68 = YPPsym((P)"sexpr-if-else");
  T217 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_44 = YPmet(FUNCODEREF(fun_sexpr_if_else_44),LITREF(lit_68),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YevalSsyntaxYsexpr_if_else);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSsyntaxYsexpr_if_else);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_if_else_44;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSsyntaxYsexpr_if_else,T218);
  lit_69 = YPPsym((P)"sexpr-make-if");
  lit_70 = YPPsym((P)"test");
  lit_71 = YPPsym((P)"then");
  lit_72 = YPPsym((P)"else");
  T222 = YPsig(YPPlist(3,LITREF(lit_70),LITREF(lit_71),LITREF(lit_72)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_45 = YPmet(FUNCODEREF(fun_sexpr_make_if_45),LITREF(lit_69),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YevalSsyntaxYsexpr_make_if);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSsyntaxYsexpr_make_if);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_sexpr_make_if_45;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSsyntaxYsexpr_make_if,T223);
  lit_73 = YPPsym((P)"esc");
  T228 = VARSET(YevalSsyntaxYDsexpr_bind_exit_tag,LITREF(lit_73));
  T227 = T228;
  return T227;
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
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276;
DEFCREGS();
loop:
  lit_74 = YPPsym((P)"sexpr-block?");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_46 = YPmet(FUNCODEREF(fun_sexpr_blockQ_46),LITREF(lit_74),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSsyntaxYsexpr_blockQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSsyntaxYsexpr_blockQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_blockQ_46;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSsyntaxYsexpr_blockQ,T1);
  lit_75 = YPPsym((P)"sexpr-block-name");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_block_name_47 = YPmet(FUNCODEREF(fun_sexpr_block_name_47),LITREF(lit_75),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSsyntaxYsexpr_block_name);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSsyntaxYsexpr_block_name);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_block_name_47;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSsyntaxYsexpr_block_name,T6);
  lit_76 = YPPsym((P)"sexpr-block-body");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_48 = YPmet(FUNCODEREF(fun_sexpr_block_body_48),LITREF(lit_76),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSsyntaxYsexpr_block_body);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSsyntaxYsexpr_block_body);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_block_body_48;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSsyntaxYsexpr_block_body,T11);
  lit_77 = YPPsym((P)"fin");
  VARSET(YevalSsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_77));
  lit_78 = YPPsym((P)"sexpr-unwind-protect?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_49 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_49),LITREF(lit_78),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSsyntaxYsexpr_unwind_protectQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSsyntaxYsexpr_unwind_protectQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_unwind_protectQ_49;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSsyntaxYsexpr_unwind_protectQ,T16);
  lit_79 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_50 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_50),LITREF(lit_79),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSsyntaxYsexpr_unwind_protect_protected_form);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_unwind_protect_protected_form_50;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_protected_form,T21);
  lit_80 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_51 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_51),LITREF(lit_80),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_unwind_protect_cleanup_forms_51;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,T26);
  lit_81 = YPPsym((P)"try");
  VARSET(YevalSsyntaxYDsexpr_monitor_tag,LITREF(lit_81));
  lit_82 = YPPsym((P)"sexpr-monitor?");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_52 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_52),LITREF(lit_82),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSsyntaxYsexpr_monitorQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSsyntaxYsexpr_monitorQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_monitorQ_52;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSsyntaxYsexpr_monitorQ,T31);
  lit_83 = YPPsym((P)"sexpr-monitor-expand");
  lit_84 = YPPsym((P)"return");
  lit_85 = YPPsym((P)"x-1406");
  lit_86 = YPPsym((P)"msg");
  lit_87 = YPPsym((P)"args");
  lit_88 = YPsb((P)"Malformed TRY expression: ~=");
  lit_89 = YPsb((P)"Match Pattern Failure");
  lit_90 = YPPsym((P)"type");
  T37 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_87)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1406_53 = YPmet(FUNCODEREF(fun_x_1406_53),LITREF(lit_85),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(1,LITREF(lit_84)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_55 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_55),LITREF(lit_83),T35,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSsyntaxYsexpr_monitor_expand);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSsyntaxYsexpr_monitor_expand);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_sexpr_monitor_expand_55;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSsyntaxYsexpr_monitor_expand,T38);
  lit_91 = YPPsym((P)"find-option");
  lit_92 = YPPsym((P)"options");
  lit_93 = YPPsym((P)"option");
  lit_94 = YPPsym((P)"default");
  T42 = YPsig(YPPlist(3,LITREF(lit_92),LITREF(lit_93),LITREF(lit_94)),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSsyntaxYfind_option = YPmet(FUNCODEREF(YevalSsyntaxYfind_option),LITREF(lit_91),T42,ENVNUL,PNUL,YPfalse);
  T43 = YevalSsyntaxYfind_option;
  VARSET(YevalSsyntaxYfind_option,T43);
  lit_95 = YPPsym((P)"sexpr-monitor-type");
  lit_96 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_97 = YPPsym((P)"x-1408");
  lit_98 = YPsb((P)"Malformed TRY condition type: %=");
  T46 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_87)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1408_57 = YPmet(FUNCODEREF(fun_x_1408_57),LITREF(lit_97),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(1,LITREF(lit_84)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_59 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_59),LITREF(lit_95),T44,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YevalSsyntaxYsexpr_monitor_type);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSsyntaxYsexpr_monitor_type);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_sexpr_monitor_type_59;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSsyntaxYsexpr_monitor_type,T47);
  lit_99 = YPPsym((P)"sexpr-monitor-info");
  lit_100 = YPPsym((P)"info");
  lit_101 = YPPsym((P)"description");
  lit_102 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_103 = YPPsym((P)"x-1410");
  lit_104 = YPsb((P)"Malformed TRY info expression: %=");
  lit_105 = YPPsym((P)"x-1412");
  lit_106 = YPsb((P)"Malformed TRY description: %=");
  lit_107 = YPPsym((P)"new");
  lit_108 = YPPsym((P)"<simple-handler-info>");
  lit_109 = YPPsym((P)"handler-info-message");
  lit_110 = YPPsym((P)"handler-info-arguments");
  lit_111 = YPPsym((P)"lst");
  lit_112 = YPPsym((P)"$default-handler-info");
  T55 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_87)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1410_60 = YPmet(FUNCODEREF(fun_x_1410_60),LITREF(lit_103),T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(1,LITREF(lit_84)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_87)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1412_62 = YPmet(FUNCODEREF(fun_x_1412_62),LITREF(lit_105),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_84)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_64 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_64),LITREF(lit_99),T51,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSsyntaxYsexpr_monitor_info);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSsyntaxYsexpr_monitor_info);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_monitor_info_64;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSsyntaxYsexpr_monitor_info,T56);
  lit_113 = YPPsym((P)"sexpr-monitor-test");
  lit_114 = YPPlist(1,YPtrue);
  T60 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_65 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_65),LITREF(lit_113),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalSsyntaxYsexpr_monitor_test);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSsyntaxYsexpr_monitor_test);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_monitor_test_65;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSsyntaxYsexpr_monitor_test,T61);
  lit_115 = YPPsym((P)"sexpr-monitor-body");
  T65 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_66 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_66),LITREF(lit_115),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSsyntaxYsexpr_monitor_body);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSsyntaxYsexpr_monitor_body);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_monitor_body_66;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSsyntaxYsexpr_monitor_body,T66);
  lit_116 = YPPsym((P)"seq");
  VARSET(YevalSsyntaxYDsexpr_begin_tag,LITREF(lit_116));
  lit_117 = YPPsym((P)"sexpr-begin?");
  T70 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_67 = YPmet(FUNCODEREF(fun_sexpr_beginQ_67),LITREF(lit_117),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSsyntaxYsexpr_beginQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSsyntaxYsexpr_beginQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_beginQ_67;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSsyntaxYsexpr_beginQ,T71);
  lit_118 = YPPsym((P)"sexpr-begin-actions");
  lit_119 = YPPsym((P)"begin-exp");
  T75 = YPsig(YPPlist(1,LITREF(lit_119)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_68 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_68),LITREF(lit_118),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSsyntaxYsexpr_begin_actions);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSsyntaxYsexpr_begin_actions);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_begin_actions_68;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSsyntaxYsexpr_begin_actions,T76);
  lit_120 = YPPsym((P)"sexpr-last-exp?");
  T80 = YPsig(YPPlist(1,LITREF(lit_116)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_69 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_69),LITREF(lit_120),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSsyntaxYsexpr_last_expQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSsyntaxYsexpr_last_expQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_last_expQ_69;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSsyntaxYsexpr_last_expQ,T81);
  lit_121 = YPPsym((P)"sexpr-first-exp");
  T85 = YPsig(YPPlist(1,LITREF(lit_116)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_70 = YPmet(FUNCODEREF(fun_sexpr_first_exp_70),LITREF(lit_121),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSsyntaxYsexpr_first_exp);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSsyntaxYsexpr_first_exp);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_first_exp_70;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSsyntaxYsexpr_first_exp,T86);
  lit_122 = YPPsym((P)"sexpr-rest-exps");
  T90 = YPsig(YPPlist(1,LITREF(lit_116)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_71 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_71),LITREF(lit_122),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSsyntaxYsexpr_rest_exps);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSsyntaxYsexpr_rest_exps);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_rest_exps_71;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSsyntaxYsexpr_rest_exps,T91);
  lit_123 = YPPsym((P)"sexpr-sequence->begin");
  T95 = YPsig(YPPlist(1,LITREF(lit_116)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_72 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_72),LITREF(lit_123),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSsyntaxYsexpr_sequence_Gbegin);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSsyntaxYsexpr_sequence_Gbegin);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_sequence_Gbegin_72;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSsyntaxYsexpr_sequence_Gbegin,T96);
  lit_124 = YPPsym((P)"sexpr-make-begin");
  T100 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_73 = YPmet(FUNCODEREF(fun_sexpr_make_begin_73),LITREF(lit_124),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSsyntaxYsexpr_make_begin);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSsyntaxYsexpr_make_begin);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_make_begin_73;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSsyntaxYsexpr_make_begin,T101);
  lit_125 = YPPsym((P)"sexpr-application?");
  T105 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_74 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_74),LITREF(lit_125),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSsyntaxYsexpr_applicationQ);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSsyntaxYsexpr_applicationQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_applicationQ_74;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSsyntaxYsexpr_applicationQ,T106);
  lit_126 = YPPsym((P)"sexpr-operator");
  lit_127 = YPPsym((P)"app");
  T110 = YPsig(YPPlist(1,LITREF(lit_127)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_75 = YPmet(FUNCODEREF(fun_sexpr_operator_75),LITREF(lit_126),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSsyntaxYsexpr_operator);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSsyntaxYsexpr_operator);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_operator_75;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSsyntaxYsexpr_operator,T111);
  lit_128 = YPPsym((P)"sexpr-operands");
  T115 = YPsig(YPPlist(1,LITREF(lit_127)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_76 = YPmet(FUNCODEREF(fun_sexpr_operands_76),LITREF(lit_128),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSsyntaxYsexpr_operands);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSsyntaxYsexpr_operands);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_operands_76;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSsyntaxYsexpr_operands,T116);
  lit_129 = YPPsym((P)"sexpr-no-operands?");
  T120 = YPsig(YPPlist(1,LITREF(lit_87)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_77 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_77),LITREF(lit_129),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSsyntaxYsexpr_no_operandsQ);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSsyntaxYsexpr_no_operandsQ);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_no_operandsQ_77;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSsyntaxYsexpr_no_operandsQ,T121);
  lit_130 = YPPsym((P)"sexpr-first-operand");
  T125 = YPsig(YPPlist(1,LITREF(lit_87)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_78 = YPmet(FUNCODEREF(fun_sexpr_first_operand_78),LITREF(lit_130),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YevalSsyntaxYsexpr_first_operand);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSsyntaxYsexpr_first_operand);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_first_operand_78;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSsyntaxYsexpr_first_operand,T126);
  lit_131 = YPPsym((P)"sexpr-rest-operands");
  T130 = YPsig(YPPlist(1,LITREF(lit_87)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_79 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_79),LITREF(lit_131),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSsyntaxYsexpr_rest_operands);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSsyntaxYsexpr_rest_operands);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_rest_operands_79;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSsyntaxYsexpr_rest_operands,T131);
  lit_132 = YPPsym((P)"sexpr-make-application");
  lit_133 = YPPsym((P)"f");
  lit_134 = YPPsym((P)"operands");
  T135 = YPsig(YPPlist(2,LITREF(lit_133),LITREF(lit_134)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_80 = YPmet(FUNCODEREF(fun_sexpr_make_application_80),LITREF(lit_132),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YevalSsyntaxYsexpr_make_application);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSsyntaxYsexpr_make_application);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_make_application_80;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSsyntaxYsexpr_make_application,T136);
  VARSET(YevalSsyntaxYTunique_name_counterT,YPint((P)0));
  lit_135 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T140 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_81 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_81),LITREF(lit_135),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSsyntaxYsexpr_new_unique_name_counterX);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_new_unique_name_counterX_81;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSsyntaxYsexpr_new_unique_name_counterX,T141);
  VARSET(YevalSsyntaxYLnameG,VARREF(YLanyG));
  lit_136 = YPPsym((P)"sexpr-unique-name");
  lit_137 = YPPsym((P)"prefix");
  T145 = YPsig(YPPlist(1,LITREF(lit_137)),YPPlist(1,VARREF(YevalSsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_82 = YPmet(FUNCODEREF(fun_sexpr_unique_name_82),LITREF(lit_136),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSsyntaxYsexpr_unique_name);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSsyntaxYsexpr_unique_name);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_unique_name_82;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSsyntaxYsexpr_unique_name,T146);
  lit_138 = YPPsym((P)"def");
  VARSET(YevalSsyntaxYDsexpr_def_tag,LITREF(lit_138));
  lit_139 = YPPsym((P)"sexpr-def?");
  T150 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_defQ_83 = YPmet(FUNCODEREF(fun_sexpr_defQ_83),LITREF(lit_139),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSsyntaxYsexpr_defQ);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSsyntaxYsexpr_defQ);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_defQ_83;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSsyntaxYsexpr_defQ,T151);
  lit_140 = YPPsym((P)"sexpr-def-variable");
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_84 = YPmet(FUNCODEREF(fun_sexpr_def_variable_84),LITREF(lit_140),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSsyntaxYsexpr_def_variable);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSsyntaxYsexpr_def_variable);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_sexpr_def_variable_84;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSsyntaxYsexpr_def_variable,T156);
  lit_141 = YPPsym((P)"sexpr-def-value");
  T160 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_85 = YPmet(FUNCODEREF(fun_sexpr_def_value_85),LITREF(lit_141),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSsyntaxYsexpr_def_value);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSsyntaxYsexpr_def_value);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_sexpr_def_value_85;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSsyntaxYsexpr_def_value,T161);
  lit_142 = YPPsym((P)"let");
  VARSET(YevalSsyntaxYDsexpr_let_tag,LITREF(lit_142));
  lit_143 = YPPsym((P)"sexpr-let?");
  T165 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_86 = YPmet(FUNCODEREF(fun_sexpr_letQ_86),LITREF(lit_143),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSsyntaxYsexpr_letQ);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSsyntaxYsexpr_letQ);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_sexpr_letQ_86;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSsyntaxYsexpr_letQ,T166);
  lit_144 = YPPsym((P)"sexpr-let-bound-variables");
  lit_145 = YPPsym((P)"let-exp");
  T171 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(1,LITREF(lit_145)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_88 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_88),LITREF(lit_144),T170,ENVNUL,PNUL,YPfalse);
  T174 = BOUNDP(YevalSsyntaxYsexpr_let_bound_variables);
  if (T174 != YPfalse) {
    T173 = VARREF(YevalSsyntaxYsexpr_let_bound_variables);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_sexpr_let_bound_variables_88;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(YevalSsyntaxYsexpr_let_bound_variables,T172);
  lit_146 = YPPsym((P)"sexpr-let-values");
  T177 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(YPPlist(1,LITREF(lit_145)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_90 = YPmet(FUNCODEREF(fun_sexpr_let_values_90),LITREF(lit_146),T176,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YevalSsyntaxYsexpr_let_values);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSsyntaxYsexpr_let_values);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sexpr_let_values_90;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSsyntaxYsexpr_let_values,T178);
  lit_147 = YPPsym((P)"sexpr-let-body");
  T182 = YPsig(YPPlist(1,LITREF(lit_145)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_91 = YPmet(FUNCODEREF(fun_sexpr_let_body_91),LITREF(lit_147),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSsyntaxYsexpr_let_body);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSsyntaxYsexpr_let_body);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_sexpr_let_body_91;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSsyntaxYsexpr_let_body,T183);
  lit_148 = YPPsym((P)"sexpr-let-names+values");
  lit_149 = YPPsym((P)"names");
  lit_150 = YPPsym((P)"vals");
  lit_151 = YPPsym((P)"loop");
  lit_152 = YPPsym((P)"rnames");
  lit_153 = YPPsym((P)"rvalues");
  lit_154 = YPsb((P)"tup");
  lit_155 = YPPsym((P)"inner");
  lit_156 = YPPsym((P)"rtnames");
  lit_157 = YPPsym((P)"rtvalues");
  lit_158 = YPPsym((P)"index");
  lit_159 = YPPsym((P)"tnames");
  lit_160 = YPPsym((P)"...");
  lit_161 = YPPsym((P)"<lst>");
  lit_162 = YPPsym((P)"sub");
  lit_163 = YPPsym((P)"len");
  lit_164 = YPPsym((P)"elt");
  T190 = YPsig(YPPlist(4,LITREF(lit_156),LITREF(lit_157),LITREF(lit_158),LITREF(lit_159)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_inner_92 = YPmet(FUNCODEREF(fun_inner_92),LITREF(lit_155),T190,ENVNUL,PNUL,YPfalse);
  T189 = YPsig(YPPlist(4,LITREF(lit_152),LITREF(lit_153),LITREF(lit_149),LITREF(lit_150)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_93 = YPmet(FUNCODEREF(fun_loop_93),LITREF(lit_151),T189,ENVNUL,PNUL,YPfalse);
  T188 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T187 = YPsig(YPPlist(2,LITREF(lit_149),LITREF(lit_150)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),T188,Ynil);
  fun_sexpr_let_namesAvalues_94 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_94),LITREF(lit_148),T187,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YevalSsyntaxYsexpr_let_namesAvalues);
  if (T193 != YPfalse) {
    T192 = VARREF(YevalSsyntaxYsexpr_let_namesAvalues);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sexpr_let_namesAvalues_94;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YevalSsyntaxYsexpr_let_namesAvalues,T191);
  lit_165 = YPPsym((P)"sexpr-let->combination");
  lit_166 = YPPsym((P)"col");
  lit_167 = YPPsym((P)"values");
  T196 = YPsig(YPPlist(2,LITREF(lit_149),LITREF(lit_167)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_95 = YPmet(FUNCODEREF(fun_col_95),LITREF(lit_166),T196,ENVNUL,PNUL,YPfalse);
  T195 = YPsig(YPPlist(1,LITREF(lit_145)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_96 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_96),LITREF(lit_165),T195,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YevalSsyntaxYsexpr_let_Gcombination);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSsyntaxYsexpr_let_Gcombination);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_sexpr_let_Gcombination_96;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSsyntaxYsexpr_let_Gcombination,T197);
  lit_168 = YPPsym((P)"loc");
  VARSET(YevalSsyntaxYDsexpr_locals_tag,LITREF(lit_168));
  lit_169 = YPPsym((P)"sexpr-loc?");
  T201 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_97 = YPmet(FUNCODEREF(fun_sexpr_locQ_97),LITREF(lit_169),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSsyntaxYsexpr_locQ);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSsyntaxYsexpr_locQ);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_sexpr_locQ_97;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSsyntaxYsexpr_locQ,T202);
  lit_170 = YPPsym((P)"sexpr-loc-bound-names");
  lit_171 = YPPsym((P)"loc-exp");
  T206 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_98 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_98),LITREF(lit_170),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_names);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSsyntaxYsexpr_loc_bound_names);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_sexpr_loc_bound_names_98;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSsyntaxYsexpr_loc_bound_names,T207);
  lit_172 = YPPsym((P)"sexpr-loc-bound-signatures");
  T212 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_100 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_100),LITREF(lit_172),T211,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_signatures);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSsyntaxYsexpr_loc_bound_signatures);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_loc_bound_signatures_100;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSsyntaxYsexpr_loc_bound_signatures,T213);
  lit_173 = YPPsym((P)"sexpr-loc-bound-bodies");
  T217 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_101 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_101),LITREF(lit_173),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_bodies);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSsyntaxYsexpr_loc_bound_bodies);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_loc_bound_bodies_101;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSsyntaxYsexpr_loc_bound_bodies,T218);
  lit_174 = YPPsym((P)"sexpr-loc-raw-body");
  T222 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_102 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_102),LITREF(lit_174),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YevalSsyntaxYsexpr_loc_raw_body);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSsyntaxYsexpr_loc_raw_body);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_sexpr_loc_raw_body_102;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSsyntaxYsexpr_loc_raw_body,T223);
  lit_175 = YPPsym((P)"sexpr-loc-body");
  T227 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_103 = YPmet(FUNCODEREF(fun_sexpr_loc_body_103),LITREF(lit_175),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(YevalSsyntaxYsexpr_loc_body);
  if (T230 != YPfalse) {
    T229 = VARREF(YevalSsyntaxYsexpr_loc_body);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_sexpr_loc_body_103;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YevalSsyntaxYsexpr_loc_body,T228);
  lit_176 = YPPsym((P)"rep");
  VARSET(YevalSsyntaxYDsexpr_iterate_tag,LITREF(lit_176));
  lit_177 = YPPsym((P)"sexpr-iterate?");
  T232 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_104 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_104),LITREF(lit_177),T232,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YevalSsyntaxYsexpr_iterateQ);
  if (T235 != YPfalse) {
    T234 = VARREF(YevalSsyntaxYsexpr_iterateQ);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_sexpr_iterateQ_104;
  T233 = XCALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YevalSsyntaxYsexpr_iterateQ,T233);
  lit_178 = YPPsym((P)"sexpr-iterate-name");
  lit_179 = YPPsym((P)"rep-exp");
  T237 = YPsig(YPPlist(1,LITREF(lit_179)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_105 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_105),LITREF(lit_178),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YevalSsyntaxYsexpr_iterate_name);
  if (T240 != YPfalse) {
    T239 = VARREF(YevalSsyntaxYsexpr_iterate_name);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_sexpr_iterate_name_105;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YevalSsyntaxYsexpr_iterate_name,T238);
  VARSET(YevalSsyntaxYDsexpr_values_tag,LITREF(lit_39));
  lit_180 = YPPsym((P)"sexpr-iterate-signature");
  T243 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(1,LITREF(lit_179)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_107 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_107),LITREF(lit_180),T242,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YevalSsyntaxYsexpr_iterate_signature);
  if (T246 != YPfalse) {
    T245 = VARREF(YevalSsyntaxYsexpr_iterate_signature);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_sexpr_iterate_signature_107;
  T244 = XCALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YevalSsyntaxYsexpr_iterate_signature,T244);
  lit_181 = YPPsym((P)"sexpr-iterate-inits");
  T249 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T249,ENVNUL,PNUL,YPfalse);
  T248 = YPsig(YPPlist(1,LITREF(lit_179)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_109 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_109),LITREF(lit_181),T248,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YevalSsyntaxYsexpr_iterate_inits);
  if (T252 != YPfalse) {
    T251 = VARREF(YevalSsyntaxYsexpr_iterate_inits);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_sexpr_iterate_inits_109;
  T250 = XCALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YevalSsyntaxYsexpr_iterate_inits,T250);
  lit_182 = YPPsym((P)"sexpr-iterate-body");
  T254 = YPsig(YPPlist(1,LITREF(lit_179)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_110 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_110),LITREF(lit_182),T254,ENVNUL,PNUL,YPfalse);
  T257 = BOUNDP(YevalSsyntaxYsexpr_iterate_body);
  if (T257 != YPfalse) {
    T256 = VARREF(YevalSsyntaxYsexpr_iterate_body);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_sexpr_iterate_body_110;
  T255 = XCALL2(1,VARREF(YPdefine_method),T256,T258);
  VARSET(YevalSsyntaxYsexpr_iterate_body,T255);
  lit_183 = YPPsym((P)"sexpr-iterate->loc");
  T259 = YPsig(YPPlist(1,LITREF(lit_179)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_111 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_111),LITREF(lit_183),T259,ENVNUL,PNUL,YPfalse);
  T262 = BOUNDP(YevalSsyntaxYsexpr_iterate_Gloc);
  if (T262 != YPfalse) {
    T261 = VARREF(YevalSsyntaxYsexpr_iterate_Gloc);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_sexpr_iterate_Gloc_111;
  T260 = XCALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(YevalSsyntaxYsexpr_iterate_Gloc,T260);
  lit_184 = YPPsym((P)"isa");
  VARSET(YevalSsyntaxYDsexpr_isa_tag,LITREF(lit_184));
  lit_185 = YPPsym((P)"sexpr-isa?");
  T264 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_112 = YPmet(FUNCODEREF(fun_sexpr_isaQ_112),LITREF(lit_185),T264,ENVNUL,PNUL,YPfalse);
  T267 = BOUNDP(YevalSsyntaxYsexpr_isaQ);
  if (T267 != YPfalse) {
    T266 = VARREF(YevalSsyntaxYsexpr_isaQ);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_sexpr_isaQ_112;
  T265 = XCALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YevalSsyntaxYsexpr_isaQ,T265);
  lit_186 = YPPsym((P)"sexpr-isa-parent");
  T271 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T270 = fun_sexpr_isa_parent_113 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_113),LITREF(lit_186),T271,ENVNUL,PNUL,YPfalse);
  T275 = BOUNDP(YevalSsyntaxYsexpr_isa_parent);
  if (T275 != YPfalse) {
    T274 = VARREF(YevalSsyntaxYsexpr_isa_parent);
  } else {
    T274 = YPfalse;
  }
  T276 = fun_sexpr_isa_parent_113;
  T273 = XCALL2(1,VARREF(YPdefine_method),T274,T276);
  T272 = VARSET(YevalSsyntaxYsexpr_isa_parent,T273);
  T269 = T272;
  return T269;
}

P YevalSsyntaxY___main_2___() {
  P tmpF1605;
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
DEFCREGS();
loop:
  lit_187 = YPPsym((P)"sexpr-isa-prop-inits");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_114 = YPmet(FUNCODEREF(fun_sexpr_isa_prop_inits_114),LITREF(lit_187),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSsyntaxYsexpr_isa_prop_inits);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSsyntaxYsexpr_isa_prop_inits);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_isa_prop_inits_114;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSsyntaxYsexpr_isa_prop_inits,T1);
  lit_188 = YPPsym((P)"sexpr-isa-init-props");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_props_115 = YPmet(FUNCODEREF(fun_sexpr_isa_init_props_115),LITREF(lit_188),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSsyntaxYsexpr_isa_init_props);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSsyntaxYsexpr_isa_init_props);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_isa_init_props_115;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSsyntaxYsexpr_isa_init_props,T6);
  lit_189 = YPPsym((P)"sexpr-isa-init-values");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_116 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_116),LITREF(lit_189),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSsyntaxYsexpr_isa_init_values);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSsyntaxYsexpr_isa_init_values);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_isa_init_values_116;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSsyntaxYsexpr_isa_init_values,T11);
  lit_190 = YPPsym((P)"dc");
  VARSET(YevalSsyntaxYDsexpr_define_class_tag,LITREF(lit_190));
  lit_191 = YPPsym((P)"sexpr-define-class?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_117 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_117),LITREF(lit_191),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSsyntaxYsexpr_define_classQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSsyntaxYsexpr_define_classQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_define_classQ_117;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSsyntaxYsexpr_define_classQ,T16);
  lit_192 = YPPsym((P)"sexpr-define-class-parents");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_118 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_118),LITREF(lit_192),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSsyntaxYsexpr_define_class_parents);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSsyntaxYsexpr_define_class_parents);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_define_class_parents_118;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSsyntaxYsexpr_define_class_parents,T21);
  lit_193 = YPPsym((P)"dp");
  VARSET(YevalSsyntaxYDsexpr_prop_tag,LITREF(lit_193));
  lit_194 = YPPsym((P)"sexpr-prop?");
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_119 = YPmet(FUNCODEREF(fun_sexpr_propQ_119),LITREF(lit_194),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSsyntaxYsexpr_propQ);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSsyntaxYsexpr_propQ);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_propQ_119;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSsyntaxYsexpr_propQ,T26);
  lit_195 = YPPsym((P)"sexpr-prop-name");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_120 = YPmet(FUNCODEREF(fun_sexpr_prop_name_120),LITREF(lit_195),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSsyntaxYsexpr_prop_name);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSsyntaxYsexpr_prop_name);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_prop_name_120;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSsyntaxYsexpr_prop_name,T31);
  lit_196 = YPPsym((P)"sexpr-prop-owner");
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_121 = YPmet(FUNCODEREF(fun_sexpr_prop_owner_121),LITREF(lit_196),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSsyntaxYsexpr_prop_owner);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSsyntaxYsexpr_prop_owner);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_prop_owner_121;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSsyntaxYsexpr_prop_owner,T36);
  lit_197 = YPPsym((P)"sexpr-prop-init-var");
  lit_198 = YPPsym((P)"_x");
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_122 = YPmet(FUNCODEREF(fun_sexpr_prop_init_var_122),LITREF(lit_197),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSsyntaxYsexpr_prop_init_var);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSsyntaxYsexpr_prop_init_var);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_prop_init_var_122;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSsyntaxYsexpr_prop_init_var,T41);
  lit_199 = YPPsym((P)"sexpr-prop-type");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_123 = YPmet(FUNCODEREF(fun_sexpr_prop_type_123),LITREF(lit_199),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSsyntaxYsexpr_prop_type);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSsyntaxYsexpr_prop_type);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_prop_type_123;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSsyntaxYsexpr_prop_type,T46);
  lit_200 = YPPsym((P)"sexpr-prop-init?");
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_124 = YPmet(FUNCODEREF(fun_sexpr_prop_initQ_124),LITREF(lit_200),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSsyntaxYsexpr_prop_initQ);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSsyntaxYsexpr_prop_initQ);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_prop_initQ_124;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSsyntaxYsexpr_prop_initQ,T51);
  lit_201 = YPPsym((P)"sexpr-prop-init");
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_125 = YPmet(FUNCODEREF(fun_sexpr_prop_init_125),LITREF(lit_201),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSsyntaxYsexpr_prop_init);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSsyntaxYsexpr_prop_init);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_prop_init_125;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSsyntaxYsexpr_prop_init,T56);
  lit_202 = YPPsym((P)"sexpr-fab-getter");
  lit_203 = YPPsym((P)"prop-value");
  T60 = YPsig(YPPlist(2,LITREF(lit_63),LITREF(lit_90)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_126 = YPmet(FUNCODEREF(fun_sexpr_fab_getter_126),LITREF(lit_202),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalSsyntaxYsexpr_fab_getter);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSsyntaxYsexpr_fab_getter);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_fab_getter_126;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSsyntaxYsexpr_fab_getter,T61);
  lit_204 = YPPsym((P)"sexpr-fab-setter");
  lit_205 = YPPsym((P)"prop-type");
  lit_206 = YPPsym((P)"_z");
  lit_207 = YPPsym((P)"prop-value-setter");
  T65 = YPsig(YPPlist(3,LITREF(lit_63),LITREF(lit_90),LITREF(lit_205)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_127 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_127),LITREF(lit_204),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSsyntaxYsexpr_fab_setter);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSsyntaxYsexpr_fab_setter);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_fab_setter_127;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSsyntaxYsexpr_fab_setter,T66);
  lit_208 = YPPsym((P)"sexpr-fab-setter-name");
  lit_209 = YPsb((P)"-setter");
  T70 = YPsig(YPPlist(1,LITREF(lit_63)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_128 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_name_128),LITREF(lit_208),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSsyntaxYsexpr_fab_setter_name);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSsyntaxYsexpr_fab_setter_name);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_fab_setter_name_128;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSsyntaxYsexpr_fab_setter_name,T71);
  lit_210 = YPPsym((P)"sexpr-macro?");
  T75 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_129 = YPmet(FUNCODEREF(fun_sexpr_macroQ_129),LITREF(lit_210),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSsyntaxYsexpr_macroQ);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSsyntaxYsexpr_macroQ);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_macroQ_129;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSsyntaxYsexpr_macroQ,T76);
  lit_211 = YPPsym((P)"macro-expand");
  VARSET(YevalSsyntaxYDsexpr_macro_expand_tag,LITREF(lit_211));
  lit_212 = YPPsym((P)"sexpr-macro-expand?");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_130 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_130),LITREF(lit_212),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSsyntaxYsexpr_macro_expandQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSsyntaxYsexpr_macro_expandQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_macro_expandQ_130;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSsyntaxYsexpr_macro_expandQ,T81);
  lit_213 = YPPsym((P)"mif");
  VARSET(YevalSsyntaxYDsexpr_syntax_if_tag,LITREF(lit_213));
  lit_214 = YPPsym((P)"sexpr-make-syntax-if");
  lit_215 = YPPsym((P)"pat");
  T85 = YPsig(YPPlist(4,LITREF(lit_215),LITREF(lit_1),LITREF(lit_71),LITREF(lit_72)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_131 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_131),LITREF(lit_214),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSsyntaxYsexpr_make_syntax_if);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSsyntaxYsexpr_make_syntax_if);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_make_syntax_if_131;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSsyntaxYsexpr_make_syntax_if,T86);
  lit_216 = YPPsym((P)"comma-atsign");
  VARSET(YevalSsyntaxYTcomma_atsignT,LITREF(lit_216));
  lit_217 = YPPsym((P)"bq-list");
  VARSET(YevalSsyntaxYTbq_listT,LITREF(lit_217));
  lit_218 = YPPsym((P)"bq-list*");
  VARSET(YevalSsyntaxYTbq_listTT,LITREF(lit_218));
  lit_219 = YPPsym((P)"bq-append");
  VARSET(YevalSsyntaxYTbq_appendT,LITREF(lit_219));
  lit_220 = YPPsym((P)"bq-nconc");
  VARSET(YevalSsyntaxYTbq_nconcT,LITREF(lit_220));
  lit_221 = YPPsym((P)"bq-clobberable");
  VARSET(YevalSsyntaxYTbq_clobberableT,LITREF(lit_221));
  lit_222 = YPPsym((P)"bq-quote");
  VARSET(YevalSsyntaxYTbq_quoteT,LITREF(lit_222));
  lit_223 = YPPsym((P)"sexpr-expand-backquote");
  lit_224 = YPPsym((P)"goo");
  T90 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YevalSsyntaxYsexpr_expand_backquote),LITREF(lit_223),T90,ENVNUL,PNUL,YPfalse);
  T91 = YevalSsyntaxYsexpr_expand_backquote;
  VARSET(YevalSsyntaxYsexpr_expand_backquote,T91);
  lit_225 = YPPsym((P)"sexpr-build-backquote-expander");
  T92 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_133 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_133),LITREF(lit_225),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalSsyntaxYsexpr_build_backquote_expander);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSsyntaxYsexpr_build_backquote_expander);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_sexpr_build_backquote_expander_133;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSsyntaxYsexpr_build_backquote_expander,T93);
  lit_226 = YPPsym((P)"sexpr-unquote?");
  lit_227 = YPPsym((P)"unquote");
  T97 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_134 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_134),LITREF(lit_226),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalSsyntaxYsexpr_unquoteQ);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSsyntaxYsexpr_unquoteQ);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_sexpr_unquoteQ_134;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSsyntaxYsexpr_unquoteQ,T98);
  lit_228 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_229 = YPPsym((P)"unquote-splicing");
  T102 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_135 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_135),LITREF(lit_228),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSsyntaxYsexpr_unquote_splicingQ);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSsyntaxYsexpr_unquote_splicingQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_sexpr_unquote_splicingQ_135;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSsyntaxYsexpr_unquote_splicingQ,T103);
  lit_230 = YPPsym((P)"sexpr-backquote?");
  T107 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_136 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_136),LITREF(lit_230),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSsyntaxYsexpr_backquoteQ);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSsyntaxYsexpr_backquoteQ);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_sexpr_backquoteQ_136;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSsyntaxYsexpr_backquoteQ,T108);
  lit_231 = YPPsym((P)"sexpr-atom?");
  T112 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_137 = YPmet(FUNCODEREF(fun_sexpr_atomQ_137),LITREF(lit_231),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSsyntaxYsexpr_atomQ);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSsyntaxYsexpr_atomQ);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_sexpr_atomQ_137;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSsyntaxYsexpr_atomQ,T113);
  lit_232 = YPPsym((P)"nreconc");
  lit_233 = YPPsym((P)"y");
  T117 = YPsig(YPPlist(2,LITREF(lit_41),LITREF(lit_233)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_138 = YPmet(FUNCODEREF(fun_nreconc_138),LITREF(lit_232),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSsyntaxYnreconc);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSsyntaxYnreconc);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_nreconc_138;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSsyntaxYnreconc,T118);
  lit_234 = YPPsym((P)"bq-process");
  lit_235 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_236 = YPPsym((P)"p");
  lit_237 = YPPsym((P)"q");
  lit_238 = YPsb((P)"Malformed ,%=");
  lit_239 = YPsb((P)"Dotted ,@%=");
  T124 = YPsig(YPPlist(2,LITREF(lit_236),LITREF(lit_237)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_139 = YPmet(FUNCODEREF(fun_loop_139),LITREF(lit_151),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_84)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_141 = YPmet(FUNCODEREF(fun_bq_process_141),LITREF(lit_234),T122,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSsyntaxYbq_process);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSsyntaxYbq_process);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_bq_process_141;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSsyntaxYbq_process,T125);
  lit_240 = YPPsym((P)"bracket");
  T129 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_142 = YPmet(FUNCODEREF(fun_bracket_142),LITREF(lit_240),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSsyntaxYbracket);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSsyntaxYbracket);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_bracket_142;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSsyntaxYbracket,T130);
  lit_241 = YPPsym((P)"map-tree");
  lit_242 = YPPsym((P)"fn");
  T134 = YPsig(YPPlist(2,LITREF(lit_242),LITREF(lit_41)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_143 = YPmet(FUNCODEREF(fun_map_tree_143),LITREF(lit_241),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSsyntaxYmap_tree);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSsyntaxYmap_tree);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_map_tree_143;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSsyntaxYmap_tree,T135);
  lit_243 = YPPsym((P)"bq-remove-tokens");
  lit_244 = YPPsym((P)"cat");
  lit_245 = YPPsym((P)"cat!");
  lit_246 = YPPsym((P)"list*");
  lit_247 = YPPsym((P)"pair");
  T139 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_144 = YPmet(FUNCODEREF(fun_bq_remove_tokens_144),LITREF(lit_243),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSsyntaxYbq_remove_tokens);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSsyntaxYbq_remove_tokens);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_bq_remove_tokens_144;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSsyntaxYbq_remove_tokens,T140);
  lit_248 = YPPsym((P)"sexpr-syntax-if?");
  T144 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_145 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_145),LITREF(lit_248),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSsyntaxYsexpr_syntax_ifQ);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSsyntaxYsexpr_syntax_ifQ);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_sexpr_syntax_ifQ_145;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSsyntaxYsexpr_syntax_ifQ,T145);
  lit_249 = YPPsym((P)"sexpr-syntax-if-value");
  T149 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_146 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_146),LITREF(lit_249),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_value);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSsyntaxYsexpr_syntax_if_value);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_sexpr_syntax_if_value_146;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSsyntaxYsexpr_syntax_if_value,T150);
  lit_250 = YPPsym((P)"sexpr-syntax-if-pattern");
  T154 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_147 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_147),LITREF(lit_250),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_pattern);
  if (T157 != YPfalse) {
    T156 = VARREF(YevalSsyntaxYsexpr_syntax_if_pattern);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_sexpr_syntax_if_pattern_147;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YevalSsyntaxYsexpr_syntax_if_pattern,T155);
  lit_251 = YPPsym((P)"sexpr-syntax-if-then");
  T159 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_148 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_148),LITREF(lit_251),T159,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_then);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSsyntaxYsexpr_syntax_if_then);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_sexpr_syntax_if_then_148;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSsyntaxYsexpr_syntax_if_then,T160);
  lit_252 = YPPsym((P)"sexpr-syntax-if-else");
  T164 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_149 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_149),LITREF(lit_252),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_else);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSsyntaxYsexpr_syntax_if_else);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_sexpr_syntax_if_else_149;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSsyntaxYsexpr_syntax_if_else,T165);
  lit_253 = YPPsym((P)"sexpr-pattern-variable?");
  T169 = YPsig(YPPlist(1,LITREF(lit_215)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_150 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_150),LITREF(lit_253),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSsyntaxYsexpr_pattern_variableQ);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSsyntaxYsexpr_pattern_variableQ);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_sexpr_pattern_variableQ_150;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSsyntaxYsexpr_pattern_variableQ,T170);
  lit_254 = YPPsym((P)"sexpr-pattern-variable-name");
  T174 = YPsig(YPPlist(1,LITREF(lit_215)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_151 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_151),LITREF(lit_254),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSsyntaxYsexpr_pattern_variable_name);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSsyntaxYsexpr_pattern_variable_name);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_sexpr_pattern_variable_name_151;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSsyntaxYsexpr_pattern_variable_name,T175);
  lit_255 = YPPsym((P)"sexpr-bind-pattern-variables");
  T180 = YPsig(YPPlist(1,LITREF(lit_215)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_152 = YPmet(FUNCODEREF(fun_col_152),LITREF(lit_166),T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(1,LITREF(lit_215)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_153 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_153),LITREF(lit_255),T179,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSsyntaxYsexpr_bind_pattern_variables);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSsyntaxYsexpr_bind_pattern_variables);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_sexpr_bind_pattern_variables_153;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSsyntaxYsexpr_bind_pattern_variables,T181);
  lit_256 = YPPsym((P)"sexpr-make-macro-function");
  T185 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_154 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_154),LITREF(lit_256),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSsyntaxYsexpr_make_macro_function);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSsyntaxYsexpr_make_macro_function);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_sexpr_make_macro_function_154;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSsyntaxYsexpr_make_macro_function,T186);
  tmpF1605 = YPfalse;
  if (tmpF1605 != YPfalse) {
    T190 = VARREF(YevalSsyntaxYeval);
  } else {
    T190 = YPfalse;
  }
  T191 = YPfalse;
  return T191;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {">", &module_info_gooSmag, ">"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<", &module_info_gooSmag, "<"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {"read", &module_info_gooSruntime, "read"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"use", &module_info_gooSboot, "use"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"col", &module_info_gooScolsScol, "col"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"df", &module_info_gooSboot, "df"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"while", &module_info_gooSmacros, "while"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"head", &module_info_gooSboot, "head"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"floor", &module_info_gooSmath, "floor"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"and", &module_info_gooSmacros, "and"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"when", &module_info_gooSmacros, "when"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"try", &module_info_gooSboot, "try"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"^", &module_info_gooSmath, "^"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"==", &module_info_gooSmacros, "=="},
  {"1+", &module_info_gooSmath, "1+"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$sexpr-quote-tag", CVAR, &YevalSsyntaxYDsexpr_quote_tag},
  {"nreconc", CVAR, &YevalSsyntaxYnreconc},
  {"sexpr-begin?", CVAR, &YevalSsyntaxYsexpr_beginQ},
  {"sexpr-variable-type", CVAR, &YevalSsyntaxYsexpr_variable_type},
  {"sexpr-syntax-definition?", CVAR, &YevalSsyntaxYsexpr_syntax_definitionQ},
  {"*unique-name-counter*", CVAR, &YevalSsyntaxYTunique_name_counterT},
  {"sexpr-macro?", CVAR, &YevalSsyntaxYsexpr_macroQ},
  {"sexpr-value-type", CVAR, &YevalSsyntaxYsexpr_value_type},
  {"$sexpr-def-tag", CVAR, &YevalSsyntaxYDsexpr_def_tag},
  {"sexpr-make-application", CVAR, &YevalSsyntaxYsexpr_make_application},
  {"sexpr-rest-exps", CVAR, &YevalSsyntaxYsexpr_rest_exps},
  {"sexpr-unwind-protect-cleanup-forms", CVAR, &YevalSsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-if-then", CVAR, &YevalSsyntaxYsexpr_if_then},
  {"sexpr-loc-bound-bodies", CVAR, &YevalSsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-let-values", CVAR, &YevalSsyntaxYsexpr_let_values},
  {"sexpr-iterate->loc", CVAR, &YevalSsyntaxYsexpr_iterate_Gloc},
  {"sexpr-def-variable", CVAR, &YevalSsyntaxYsexpr_def_variable},
  {"sexpr-block?", CVAR, &YevalSsyntaxYsexpr_blockQ},
  {"sexpr-variable?", CVAR, &YevalSsyntaxYsexpr_variableQ},
  {"sexpr-method-definition?", CVAR, &YevalSsyntaxYsexpr_method_definitionQ},
  {"find-option", CVAR, &YevalSsyntaxYfind_option},
  {"sexpr-isa-init-props", CVAR, &YevalSsyntaxYsexpr_isa_init_props},
  {"sexpr-prop-init?", CVAR, &YevalSsyntaxYsexpr_prop_initQ},
  {"sexpr-expand-backquote", CVAR, &YevalSsyntaxYsexpr_expand_backquote},
  {"*comma-atsign*", CVAR, &YevalSsyntaxYTcomma_atsignT},
  {"sexpr-function-parameters", CVAR, &YevalSsyntaxYsexpr_function_parameters},
  {"sexpr-syntax-if-pattern", CVAR, &YevalSsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-definition-value", CVAR, &YevalSsyntaxYsexpr_definition_value},
  {"$sexpr-define-generic-tag", CVAR, &YevalSsyntaxYDsexpr_define_generic_tag},
  {"$sexpr-values-tag", CVAR, &YevalSsyntaxYDsexpr_values_tag},
  {"sexpr-fab-setter-name", CVAR, &YevalSsyntaxYsexpr_fab_setter_name},
  {"sexpr-monitor-body", CVAR, &YevalSsyntaxYsexpr_monitor_body},
  {"sexpr-iterate-name", CVAR, &YevalSsyntaxYsexpr_iterate_name},
  {"sexpr-make-anonymous-method", CVAR, &YevalSsyntaxYsexpr_make_anonymous_method},
  {"sexpr-rest-operands", CVAR, &YevalSsyntaxYsexpr_rest_operands},
  {"sexpr-prop?", CVAR, &YevalSsyntaxYsexpr_propQ},
  {"eval", CVAR, &YevalSsyntaxYeval},
  {"sexpr-if?", CVAR, &YevalSsyntaxYsexpr_ifQ},
  {"$sexpr-define-function-tag", CVAR, &YevalSsyntaxYDsexpr_define_function_tag},
  {"sexpr-variable-name", CVAR, &YevalSsyntaxYsexpr_variable_name},
  {"bracket", CVAR, &YevalSsyntaxYbracket},
  {"sexpr-first-exp", CVAR, &YevalSsyntaxYsexpr_first_exp},
  {"sexpr-monitor-info", CVAR, &YevalSsyntaxYsexpr_monitor_info},
  {"sexpr-self-evaluating?", CVAR, &YevalSsyntaxYsexpr_self_evaluatingQ},
  {"$sexpr-macro-expand-tag", CVAR, &YevalSsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-method-signature", CVAR, &YevalSsyntaxYsexpr_method_signature},
  {"sexpr-let->combination", CVAR, &YevalSsyntaxYsexpr_let_Gcombination},
  {"sexpr-function-definition?", CVAR, &YevalSsyntaxYsexpr_function_definitionQ},
  {"sexpr-unwind-protect-protected-form", CVAR, &YevalSsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-macro-expand?", CVAR, &YevalSsyntaxYsexpr_macro_expandQ},
  {"sexpr-build-backquote-expander", CVAR, &YevalSsyntaxYsexpr_build_backquote_expander},
  {"sexpr-text-of-quotation", CVAR, &YevalSsyntaxYsexpr_text_of_quotation},
  {"sexpr-if-test", CVAR, &YevalSsyntaxYsexpr_if_test},
  {"sexpr-atom?", CVAR, &YevalSsyntaxYsexpr_atomQ},
  {"map-tree", CVAR, &YevalSsyntaxYmap_tree},
  {"sexpr-backquote?", CVAR, &YevalSsyntaxYsexpr_backquoteQ},
  {"sexpr-pattern-variable-name", CVAR, &YevalSsyntaxYsexpr_pattern_variable_name},
  {"sexpr-function-signature", CVAR, &YevalSsyntaxYsexpr_function_signature},
  {"sexpr-iterate-body", CVAR, &YevalSsyntaxYsexpr_iterate_body},
  {"sexpr-isa?", CVAR, &YevalSsyntaxYsexpr_isaQ},
  {"sexpr-prop-name", CVAR, &YevalSsyntaxYsexpr_prop_name},
  {"sexpr-signature-parameters", CVAR, &YevalSsyntaxYsexpr_signature_parameters},
  {"sexpr-loc-bound-signatures", CVAR, &YevalSsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-def?", CVAR, &YevalSsyntaxYsexpr_defQ},
  {"sexpr-let-bound-variables", CVAR, &YevalSsyntaxYsexpr_let_bound_variables},
  {"---main-0---", PVAR, NULL},
  {"$sexpr-unwind-protect-tag", CVAR, &YevalSsyntaxYDsexpr_unwind_protect_tag},
  {"sexpr-isa-prop-inits", CVAR, &YevalSsyntaxYsexpr_isa_prop_inits},
  {"$sexpr-define-method-tag", CVAR, &YevalSsyntaxYDsexpr_define_method_tag},
  {"sexpr-make-method", CVAR, &YevalSsyntaxYsexpr_make_method},
  {"sexpr-if-else", CVAR, &YevalSsyntaxYsexpr_if_else},
  {"sexpr-make-if", CVAR, &YevalSsyntaxYsexpr_make_if},
  {"sexpr-prop-type", CVAR, &YevalSsyntaxYsexpr_prop_type},
  {"$sexpr-iterate-tag", CVAR, &YevalSsyntaxYDsexpr_iterate_tag},
  {"sexpr-iterate?", CVAR, &YevalSsyntaxYsexpr_iterateQ},
  {"sexpr-function-value", CVAR, &YevalSsyntaxYsexpr_function_value},
  {"sexpr-method?", CVAR, &YevalSsyntaxYsexpr_methodQ},
  {"sexpr-syntax-if-value", CVAR, &YevalSsyntaxYsexpr_syntax_if_value},
  {"sexpr-quoted?", CVAR, &YevalSsyntaxYsexpr_quotedQ},
  {"sexpr-application?", CVAR, &YevalSsyntaxYsexpr_applicationQ},
  {"sexpr-assignment?", CVAR, &YevalSsyntaxYsexpr_assignmentQ},
  {"sexpr-definition?", CVAR, &YevalSsyntaxYsexpr_definitionQ},
  {"---main-1---", PVAR, NULL},
  {"$sexpr-define-syntax-tag", CVAR, &YevalSsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-fab-setter", CVAR, &YevalSsyntaxYsexpr_fab_setter},
  {"sexpr-pattern-variable?", CVAR, &YevalSsyntaxYsexpr_pattern_variableQ},
  {"sexpr-monitor-test", CVAR, &YevalSsyntaxYsexpr_monitor_test},
  {"as-signature", CVAR, &YevalSsyntaxYas_signature},
  {"sexpr-syntax-definition-value", CVAR, &YevalSsyntaxYsexpr_syntax_definition_value},
  {"$sexpr-method-tag", CVAR, &YevalSsyntaxYDsexpr_method_tag},
  {"sexpr-unwind-protect?", CVAR, &YevalSsyntaxYsexpr_unwind_protectQ},
  {"sexpr-method-body", CVAR, &YevalSsyntaxYsexpr_method_body},
  {"sexpr-make-quote", CVAR, &YevalSsyntaxYsexpr_make_quote},
  {"sexpr-unquote-splicing?", CVAR, &YevalSsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-first-operand", CVAR, &YevalSsyntaxYsexpr_first_operand},
  {"sexpr-define-class-parents", CVAR, &YevalSsyntaxYsexpr_define_class_parents},
  {"sexpr-definition-variable", CVAR, &YevalSsyntaxYsexpr_definition_variable},
  {"sexpr-assignment-value", CVAR, &YevalSsyntaxYsexpr_assignment_value},
  {"$sexpr-define-tag", CVAR, &YevalSsyntaxYDsexpr_define_tag},
  {"*bq-nconc*", CVAR, &YevalSsyntaxYTbq_nconcT},
  {"sexpr-last-exp?", CVAR, &YevalSsyntaxYsexpr_last_expQ},
  {"$sexpr-set-tag", CVAR, &YevalSsyntaxYDsexpr_set_tag},
  {"$sexpr-monitor-tag", CVAR, &YevalSsyntaxYDsexpr_monitor_tag},
  {"sexpr-monitor-expand", CVAR, &YevalSsyntaxYsexpr_monitor_expand},
  {"$sexpr-quasiquote-tag", CVAR, &YevalSsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-bind-pattern-variables", CVAR, &YevalSsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-unique-name", CVAR, &YevalSsyntaxYsexpr_unique_name},
  {"*bq-quote*", CVAR, &YevalSsyntaxYTbq_quoteT},
  {"sexpr-syntax-if?", CVAR, &YevalSsyntaxYsexpr_syntax_ifQ},
  {"sexpr-make-begin", CVAR, &YevalSsyntaxYsexpr_make_begin},
  {"sexpr-operator", CVAR, &YevalSsyntaxYsexpr_operator},
  {"sexpr-forward-primitive?", CVAR, &YevalSsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-let-names+values", CVAR, &YevalSsyntaxYsexpr_let_namesAvalues},
  {"sexpr-iterate-inits", CVAR, &YevalSsyntaxYsexpr_iterate_inits},
  {"sexpr-isa-parent", CVAR, &YevalSsyntaxYsexpr_isa_parent},
  {"sexpr-prop-init-var", CVAR, &YevalSsyntaxYsexpr_prop_init_var},
  {"sexpr-loc-body", CVAR, &YevalSsyntaxYsexpr_loc_body},
  {"sexpr-make-syntax-if", CVAR, &YevalSsyntaxYsexpr_make_syntax_if},
  {"sexpr-function-definition-value", CVAR, &YevalSsyntaxYsexpr_function_definition_value},
  {"sexpr-let?", CVAR, &YevalSsyntaxYsexpr_letQ},
  {"bq-process", CVAR, &YevalSsyntaxYbq_process},
  {"sexpr-unquote?", CVAR, &YevalSsyntaxYsexpr_unquoteQ},
  {"sexpr-define-class?", CVAR, &YevalSsyntaxYsexpr_define_classQ},
  {"$sexpr-define-class-tag", CVAR, &YevalSsyntaxYDsexpr_define_class_tag},
  {"sexpr-fab-getter", CVAR, &YevalSsyntaxYsexpr_fab_getter},
  {"*bq-list**", CVAR, &YevalSsyntaxYTbq_listTT},
  {"sexpr-new-unique-name-counter!", CVAR, &YevalSsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-syntax-if-else", CVAR, &YevalSsyntaxYsexpr_syntax_if_else},
  {"---main-2---", PVAR, NULL},
  {"sexpr-loc-bound-names", CVAR, &YevalSsyntaxYsexpr_loc_bound_names},
  {"sexpr-signature-value", CVAR, &YevalSsyntaxYsexpr_signature_value},
  {"$sexpr-bind-exit-tag", CVAR, &YevalSsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-syntax-definition-variable", CVAR, &YevalSsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-block-body", CVAR, &YevalSsyntaxYsexpr_block_body},
  {"*bq-list*", CVAR, &YevalSsyntaxYTbq_listT},
  {"sexpr-method-value", CVAR, &YevalSsyntaxYsexpr_method_value},
  {"*bq-append*", CVAR, &YevalSsyntaxYTbq_appendT},
  {"$sexpr-let-tag", CVAR, &YevalSsyntaxYDsexpr_let_tag},
  {"sexpr-monitor?", CVAR, &YevalSsyntaxYsexpr_monitorQ},
  {"sexpr-no-operands?", CVAR, &YevalSsyntaxYsexpr_no_operandsQ},
  {"sexpr-monitor-type", CVAR, &YevalSsyntaxYsexpr_monitor_type},
  {"$sexpr-prop-tag", CVAR, &YevalSsyntaxYDsexpr_prop_tag},
  {"$sexpr-locals-tag", CVAR, &YevalSsyntaxYDsexpr_locals_tag},
  {"sexpr-make-macro-function", CVAR, &YevalSsyntaxYsexpr_make_macro_function},
  {"sexpr-begin-actions", CVAR, &YevalSsyntaxYsexpr_begin_actions},
  {"sexpr-function-body", CVAR, &YevalSsyntaxYsexpr_function_body},
  {"sexpr-sequence->begin", CVAR, &YevalSsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-function-definition-variable", CVAR, &YevalSsyntaxYsexpr_function_definition_variable},
  {"$sexpr-begin-tag", CVAR, &YevalSsyntaxYDsexpr_begin_tag},
  {"sexpr-let-body", CVAR, &YevalSsyntaxYsexpr_let_body},
  {"sexpr-prop-owner", CVAR, &YevalSsyntaxYsexpr_prop_owner},
  {"<name>", CVAR, &YevalSsyntaxYLnameG},
  {"*bq-clobberable*", CVAR, &YevalSsyntaxYTbq_clobberableT},
  {"bq-remove-tokens", CVAR, &YevalSsyntaxYbq_remove_tokens},
  {"sexpr-loc-raw-body", CVAR, &YevalSsyntaxYsexpr_loc_raw_body},
  {"sexpr-assignment-variable", CVAR, &YevalSsyntaxYsexpr_assignment_variable},
  {"$sexpr-macro-tag", CVAR, &YevalSsyntaxYDsexpr_macro_tag},
  {"sexpr-iterate-signature", CVAR, &YevalSsyntaxYsexpr_iterate_signature},
  {"sexpr-loc?", CVAR, &YevalSsyntaxYsexpr_locQ},
  {"$sexpr-syntax-if-tag", CVAR, &YevalSsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-def-value", CVAR, &YevalSsyntaxYsexpr_def_value},
  {"sexpr-isa-init-values", CVAR, &YevalSsyntaxYsexpr_isa_init_values},
  {"sexpr-prop-init", CVAR, &YevalSsyntaxYsexpr_prop_init},
  {"sexpr-syntax-if-then", CVAR, &YevalSsyntaxYsexpr_syntax_if_then},
  {"$sexpr-isa-tag", CVAR, &YevalSsyntaxYDsexpr_isa_tag},
  {"sexpr-operands", CVAR, &YevalSsyntaxYsexpr_operands},
  {"sexpr-block-name", CVAR, &YevalSsyntaxYsexpr_block_name},
  {"sexpr-tagged-list?", CVAR, &YevalSsyntaxYsexpr_tagged_listQ},
  {"sexpr-method-parameters", CVAR, &YevalSsyntaxYsexpr_method_parameters},
  {"$sexpr-if-tag", CVAR, &YevalSsyntaxYDsexpr_if_tag},
  {"sexpr-generic-definition?", CVAR, &YevalSsyntaxYsexpr_generic_definitionQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"$sexpr-def-tag", "$sexpr-def-tag"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-prop-name", "sexpr-prop-name"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-def-variable", "sexpr-def-variable"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"sexpr-isa-init-props", "sexpr-isa-init-props"},
  {"sexpr-prop-init?", "sexpr-prop-init?"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-fab-setter-name", "sexpr-fab-setter-name"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"sexpr-def?", "sexpr-def?"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-isa-prop-inits", "sexpr-isa-prop-inits"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"sexpr-operator", "sexpr-operator"},
  {"sexpr-prop-type", "sexpr-prop-type"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"sexpr-fab-setter", "sexpr-fab-setter"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-isa-parent", "sexpr-isa-parent"},
  {"sexpr-prop-init-var", "sexpr-prop-init-var"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"sexpr-fab-getter", "sexpr-fab-getter"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"$sexpr-prop-tag", "$sexpr-prop-tag"},
  {"sexpr-make-method", "sexpr-make-method"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-prop-owner", "sexpr-prop-owner"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-def-value", "sexpr-def-value"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-prop-init", "sexpr-prop-init"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"eval", "eval"},
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

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_evalSsyntax (void);

void load_module_evalSsyntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScols();

  (P)YevalSsyntaxY___main_0___();
  (P)YevalSsyntaxY___main_1___();
  (P)YevalSsyntaxY___main_2___();

}

/* END OF GENERATED CODE. */
