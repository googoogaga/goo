/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/syntax */

EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YevalSsyntaxYfind_option,"eval/syntax","find-option");
DEF(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
DEF(YevalSsyntaxYsexpr_tagged_listQ,"eval/syntax","sexpr-tagged-list?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(YevalSsyntaxYsexpr_syntax_definitionQ,"eval/syntax","sexpr-syntax-definition?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
DEF(YevalSsyntaxYsexpr_assignmentQ,"eval/syntax","sexpr-assignment?");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSsyntaxYsexpr_monitor_body,"eval/syntax","sexpr-monitor-body");
DEF(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YevalSsyntaxYsexpr_iterate_name,"eval/syntax","sexpr-iterate-name");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
DEF(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSsyntaxYbq_remove_tokens,"eval/syntax","bq-remove-tokens");
DEF(YevalSsyntaxYsexpr_rest_operands,"eval/syntax","sexpr-rest-operands");
DEF(YevalSsyntaxYsexpr_propQ,"eval/syntax","sexpr-prop?");
DEF(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
DEF(YevalSsyntaxYsexpr_first_exp,"eval/syntax","sexpr-first-exp");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSsyntaxYsexpr_build_backquote_expander,"eval/syntax","sexpr-build-backquote-expander");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalSsyntaxYsexpr_monitor_info,"eval/syntax","sexpr-monitor-info");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSruntimeYstack_overflow_error,"goo/runtime","stack-overflow-error");
DEF(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
DEF(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSsyntaxYsexpr_method_definitionQ,"eval/syntax","sexpr-method-definition?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
DEF(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
DEF(YevalSsyntaxYsexpr_iterate_body,"eval/syntax","sexpr-iterate-body");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(YevalSsyntaxYnreconc,"eval/syntax","nreconc");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSsyntaxYsexpr_applicationQ,"eval/syntax","sexpr-application?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
DEF(YevalSsyntaxYbracket,"eval/syntax","bracket");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSsyntaxYsexpr_syntax_ifQ,"eval/syntax","sexpr-syntax-if?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
DEF(YevalSsyntaxYsexpr_pattern_variableQ,"eval/syntax","sexpr-pattern-variable?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YevalSsyntaxYsexpr_iterateQ,"eval/syntax","sexpr-iterate?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
DEF(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
DEF(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSsyntaxYsexpr_methodQ,"eval/syntax","sexpr-method?");
DEF(YevalSsyntaxYas_signature,"eval/syntax","as-signature");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
DEF(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
DEF(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YevalSsyntaxYsexpr_monitor_test,"eval/syntax","sexpr-monitor-test");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSsyntaxYLnameG,"eval/syntax","<name>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSsyntaxYsexpr_let_bound_variables,"eval/syntax","sexpr-let-bound-variables");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalSsyntaxYsexpr_unwind_protectQ,"eval/syntax","sexpr-unwind-protect?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSsyntaxYsexpr_ifQ,"eval/syntax","sexpr-if?");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalSsyntaxYsexpr_first_operand,"eval/syntax","sexpr-first-operand");
DEF(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YevalSsyntaxYsexpr_function_definitionQ,"eval/syntax","sexpr-function-definition?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YevalSsyntaxYsexpr_self_evaluatingQ,"eval/syntax","sexpr-self-evaluating?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
DEF(YevalSsyntaxYsexpr_last_expQ,"eval/syntax","sexpr-last-exp?");
DEF(YevalSsyntaxYsexpr_generic_definitionQ,"eval/syntax","sexpr-generic-definition?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
DEF(YevalSsyntaxYsexpr_quotedQ,"eval/syntax","sexpr-quoted?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YevalSsyntaxYsexpr_atomQ,"eval/syntax","sexpr-atom?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YevalSsyntaxYmap_tree,"eval/syntax","map-tree");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
DEF(YevalSsyntaxYsexpr_unique_name,"eval/syntax","sexpr-unique-name");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
DEF(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YevalSsyntaxYsexpr_make_if,"eval/syntax","sexpr-make-if");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YevalSsyntaxYsexpr_loc_body,"eval/syntax","sexpr-loc-body");
DEF(YevalSsyntaxYsexpr_make_syntax_if,"eval/syntax","sexpr-make-syntax-if");
DEF(YevalSsyntaxYsexpr_iterate_inits,"eval/syntax","sexpr-iterate-inits");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSsyntaxYsexpr_let_namesAvalues,"eval/syntax","sexpr-let-names+values");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YevalSsyntaxYsexpr_letQ,"eval/syntax","sexpr-let?");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSsyntaxYDsexpr_values_tag,"eval/syntax","$sexpr-values-tag");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YevalSsyntaxYTbq_listT,"eval/syntax","*bq-list*");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalSsyntaxYsexpr_make_quote,"eval/syntax","sexpr-make-quote");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSsyntaxYTunique_name_counterT,"eval/syntax","*unique-name-counter*");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DEF(YevalSsyntaxYsexpr_new_unique_name_counterX,"eval/syntax","sexpr-new-unique-name-counter!");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
DEF(YevalSsyntaxYsexpr_backquoteQ,"eval/syntax","sexpr-backquote?");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSsyntaxYTbq_nconcT,"eval/syntax","*bq-nconc*");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSsyntaxYsexpr_no_operandsQ,"eval/syntax","sexpr-no-operands?");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
DEF(YevalSsyntaxYsexpr_monitor_type,"eval/syntax","sexpr-monitor-type");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSsyntaxYsexpr_monitorQ,"eval/syntax","sexpr-monitor?");
DEF(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
DEF(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YevalSsyntaxYsexpr_method_value,"eval/syntax","sexpr-method-value");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSsyntaxYsexpr_isaQ,"eval/syntax","sexpr-isa?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YevalSsyntaxYsexpr_macro_expandQ,"eval/syntax","sexpr-macro-expand?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
DEF(YevalSsyntaxYsexpr_begin_actions,"eval/syntax","sexpr-begin-actions");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YevalSsyntaxYTbq_appendT,"eval/syntax","*bq-append*");
DEF(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YevalSsyntaxYTbq_clobberableT,"eval/syntax","*bq-clobberable*");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
DEF(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
DEF(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
DEF(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSsyntaxYsexpr_definitionQ,"eval/syntax","sexpr-definition?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSsyntaxYsexpr_let_body,"eval/syntax","sexpr-let-body");
EXT(Ytup,"goo/boot","tup");
DEF(YevalSsyntaxYTbq_listTT,"eval/syntax","*bq-list**");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSsyntaxYsexpr_locQ,"eval/syntax","sexpr-loc?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
DEF(YevalSsyntaxYsexpr_iterate_signature,"eval/syntax","sexpr-iterate-signature");
DEF(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YevalSsyntaxYsexpr_function_value,"eval/syntax","sexpr-function-value");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
DEF(YevalSsyntaxYsexpr_value_type,"eval/syntax","sexpr-value-type");
DEF(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
DEF(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
DEF(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(YevalSsyntaxYsexpr_beginQ,"eval/syntax","sexpr-begin?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YevalSsyntaxYsexpr_method_parameters,"eval/syntax","sexpr-method-parameters");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
DEF(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(YevalSsyntaxYTcomma_atsignT,"eval/syntax","*comma-atsign*");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSsyntaxYTbq_quoteT,"eval/syntax","*bq-quote*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSsyntaxYDsexpr_macro_tag,"eval/syntax","$sexpr-macro-tag");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSsyntaxYsexpr_pattern_variable_name,"eval/syntax","sexpr-pattern-variable-name");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSsyntaxYsexpr_rest_exps,"eval/syntax","sexpr-rest-exps");
DEF(YevalSsyntaxYsexpr_macroQ,"eval/syntax","sexpr-macro?");
DEF(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
DEF(YevalSsyntaxYbq_process,"eval/syntax","bq-process");
DEF(YevalSsyntaxYsexpr_function_parameters,"eval/syntax","sexpr-function-parameters");
DEF(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
DEF(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
DEF(YevalSsyntaxYsexpr_blockQ,"eval/syntax","sexpr-block?");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YevalSsyntaxYsexpr_let_values,"eval/syntax","sexpr-let-values");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSmathYNE,"goo/math","~=");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_35);
DEFLIT(lit_137);
DEFLIT(lit_223);
DEFLIT(lit_187);
DEFLIT(lit_207);
DEFLIT(lit_171);
DEFLIT(lit_115);
DEFLIT(lit_235);
DEFLIT(lit_151);
DEFLIT(lit_114);
DEFLIT(lit_20);
DEFLIT(lit_130);
DEFLIT(lit_162);
DEFLIT(lit_97);
DEFLIT(lit_144);
DEFLIT(lit_69);
DEFLIT(lit_208);
DEFLIT(lit_63);
DEFLIT(lit_126);
DEFLIT(lit_158);
DEFLIT(lit_108);
DEFLIT(lit_72);
DEFLIT(lit_83);
DEFLIT(lit_76);
DEFLIT(lit_141);
DEFLIT(lit_67);
DEFLIT(lit_8);
DEFLIT(lit_124);
DEFLIT(lit_122);
DEFLIT(lit_243);
DEFLIT(lit_21);
DEFLIT(lit_66);
DEFLIT(lit_178);
DEFLIT(lit_254);
DEFLIT(lit_91);
DEFLIT(lit_131);
DEFLIT(lit_202);
DEFLIT(lit_79);
DEFLIT(lit_188);
DEFLIT(lit_216);
DEFLIT(lit_30);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_175);
DEFLIT(lit_211);
DEFLIT(lit_237);
DEFLIT(lit_129);
DEFLIT(lit_172);
DEFLIT(lit_233);
DEFLIT(lit_231);
DEFLIT(lit_180);
DEFLIT(lit_250);
DEFLIT(lit_244);
DEFLIT(lit_241);
DEFLIT(lit_18);
DEFLIT(lit_48);
DEFLIT(lit_39);
DEFLIT(lit_240);
DEFLIT(lit_138);
DEFLIT(lit_234);
DEFLIT(lit_186);
DEFLIT(lit_218);
DEFLIT(lit_47);
DEFLIT(lit_60);
DEFLIT(lit_163);
DEFLIT(lit_71);
DEFLIT(lit_135);
DEFLIT(lit_222);
DEFLIT(lit_229);
DEFLIT(lit_173);
DEFLIT(lit_150);
DEFLIT(lit_58);
DEFLIT(lit_128);
DEFLIT(lit_52);
DEFLIT(lit_107);
DEFLIT(lit_94);
DEFLIT(lit_190);
DEFLIT(lit_26);
DEFLIT(lit_73);
DEFLIT(lit_81);
DEFLIT(lit_168);
DEFLIT(lit_157);
DEFLIT(lit_214);
DEFLIT(lit_82);
DEFLIT(lit_14);
DEFLIT(lit_4);
DEFLIT(lit_0);
DEFLIT(lit_120);
DEFLIT(lit_221);
DEFLIT(lit_226);
DEFLIT(lit_42);
DEFLIT(lit_136);
DEFLIT(lit_89);
DEFLIT(lit_64);
DEFLIT(lit_5);
DEFLIT(lit_103);
DEFLIT(lit_45);
DEFLIT(lit_95);
DEFLIT(lit_193);
DEFLIT(lit_34);
DEFLIT(lit_252);
DEFLIT(lit_170);
DEFLIT(lit_27);
DEFLIT(lit_239);
DEFLIT(lit_38);
DEFLIT(lit_146);
DEFLIT(lit_41);
DEFLIT(lit_111);
DEFLIT(lit_51);
DEFLIT(lit_50);
DEFLIT(lit_198);
DEFLIT(lit_90);
DEFLIT(lit_6);
DEFLIT(lit_75);
DEFLIT(lit_9);
DEFLIT(lit_140);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_245);
DEFLIT(lit_156);
DEFLIT(lit_236);
DEFLIT(lit_116);
DEFLIT(lit_155);
DEFLIT(lit_167);
DEFLIT(lit_112);
DEFLIT(lit_36);
DEFLIT(lit_210);
DEFLIT(lit_19);
DEFLIT(lit_183);
DEFLIT(lit_65);
DEFLIT(lit_46);
DEFLIT(lit_93);
DEFLIT(lit_28);
DEFLIT(lit_225);
DEFLIT(lit_70);
DEFLIT(lit_117);
DEFLIT(lit_213);
DEFLIT(lit_209);
DEFLIT(lit_98);
DEFLIT(lit_154);
DEFLIT(lit_248);
DEFLIT(lit_105);
DEFLIT(lit_232);
DEFLIT(lit_77);
DEFLIT(lit_199);
DEFLIT(lit_142);
DEFLIT(lit_68);
DEFLIT(lit_3);
DEFLIT(lit_191);
DEFLIT(lit_125);
DEFLIT(lit_119);
DEFLIT(lit_54);
DEFLIT(lit_177);
DEFLIT(lit_132);
DEFLIT(lit_203);
DEFLIT(lit_23);
DEFLIT(lit_123);
DEFLIT(lit_102);
DEFLIT(lit_257);
DEFLIT(lit_176);
DEFLIT(lit_253);
DEFLIT(lit_256);
DEFLIT(lit_169);
DEFLIT(lit_10);
DEFLIT(lit_40);
DEFLIT(lit_134);
DEFLIT(lit_230);
DEFLIT(lit_165);
DEFLIT(lit_99);
DEFLIT(lit_80);
DEFLIT(lit_145);
DEFLIT(lit_181);
DEFLIT(lit_174);
DEFLIT(lit_251);
DEFLIT(lit_127);
DEFLIT(lit_56);
DEFLIT(lit_53);
DEFLIT(lit_78);
DEFLIT(lit_247);
DEFLIT(lit_85);
DEFLIT(lit_161);
DEFLIT(lit_84);
DEFLIT(lit_227);
DEFLIT(lit_74);
DEFLIT(lit_139);
DEFLIT(lit_44);
DEFLIT(lit_24);
DEFLIT(lit_143);
DEFLIT(lit_228);
DEFLIT(lit_220);
DEFLIT(lit_255);
DEFLIT(lit_62);
DEFLIT(lit_59);
DEFLIT(lit_194);
DEFLIT(lit_201);
DEFLIT(lit_258);
DEFLIT(lit_205);
DEFLIT(lit_92);
DEFLIT(lit_32);
DEFLIT(lit_215);
DEFLIT(lit_217);
DEFLIT(lit_212);
DEFLIT(lit_29);
DEFLIT(lit_106);
DEFLIT(lit_57);
DEFLIT(lit_238);
DEFLIT(lit_153);
DEFLIT(lit_148);
DEFLIT(lit_164);
DEFLIT(lit_224);
DEFLIT(lit_189);
DEFLIT(lit_15);
DEFLIT(lit_249);
DEFLIT(lit_242);
DEFLIT(lit_160);
DEFLIT(lit_49);
DEFLIT(lit_43);
DEFLIT(lit_96);
DEFLIT(lit_101);
DEFLIT(lit_152);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_110);
DEFLIT(lit_109);
DEFLIT(lit_87);
DEFLIT(lit_100);
DEFLIT(lit_195);
DEFLIT(lit_206);
DEFLIT(lit_22);
DEFLIT(lit_246);
DEFLIT(lit_33);
DEFLIT(lit_113);
DEFLIT(lit_86);
DEFLIT(lit_179);
DEFLIT(lit_182);
DEFLIT(lit_184);
DEFLIT(lit_204);
DEFLIT(lit_185);
DEFLIT(lit_55);
DEFLIT(lit_31);
DEFLIT(lit_104);
DEFLIT(lit_200);
DEFLIT(lit_192);
DEFLIT(lit_196);
DEFLIT(lit_147);
DEFLIT(lit_149);
DEFLIT(lit_2);
DEFLIT(lit_121);
DEFLIT(lit_118);
DEFLIT(lit_166);
DEFLIT(lit_197);
DEFLIT(lit_37);
DEFLIT(lit_88);
DEFLIT(lit_25);
DEFLIT(lit_159);
DEFLIT(lit_219);
DEFLIT(lit_61);
DEFLIT(lit_1);
DEFLIT(lit_133);

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
LOCFOR(fun_x_1419_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_expand_56);
FUNFOR(YevalSsyntaxYfind_option);
LOCFOR(fun_x_1421_58);
LOCFOR(fun_59);
LOCFOR(fun_sexpr_monitor_type_60);
LOCFOR(fun_x_1423_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1425_63);
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
LOCFOR(fun_inner_93);
LOCFOR(fun_loop_94);
LOCFOR(fun_sexpr_let_namesAvalues_95);
LOCFOR(fun_col_96);
LOCFOR(fun_sexpr_let_Gcombination_97);
LOCFOR(fun_sexpr_locQ_98);
LOCFOR(fun_sexpr_loc_bound_names_99);
LOCFOR(fun_100);
LOCFOR(fun_sexpr_loc_bound_signatures_101);
LOCFOR(fun_sexpr_loc_bound_bodies_102);
LOCFOR(fun_sexpr_loc_raw_body_103);
LOCFOR(fun_sexpr_loc_body_104);
LOCFOR(fun_sexpr_iterateQ_105);
LOCFOR(fun_sexpr_iterate_name_106);
LOCFOR(fun_107);
LOCFOR(fun_sexpr_iterate_signature_108);
LOCFOR(fun_109);
LOCFOR(fun_sexpr_iterate_inits_110);
LOCFOR(fun_sexpr_iterate_body_111);
LOCFOR(fun_sexpr_iterate_Gloc_112);
LOCFOR(fun_sexpr_isaQ_113);
LOCFOR(fun_sexpr_isa_parent_114);
LOCFOR(fun_sexpr_isa_prop_inits_115);
LOCFOR(fun_sexpr_isa_init_props_116);
LOCFOR(fun_sexpr_isa_init_values_117);
LOCFOR(fun_sexpr_define_classQ_118);
LOCFOR(fun_sexpr_define_class_parents_119);
LOCFOR(fun_sexpr_propQ_120);
LOCFOR(fun_sexpr_prop_name_121);
LOCFOR(fun_sexpr_prop_owner_122);
LOCFOR(fun_sexpr_prop_init_var_123);
LOCFOR(fun_sexpr_prop_type_124);
LOCFOR(fun_sexpr_prop_initQ_125);
LOCFOR(fun_sexpr_prop_init_126);
LOCFOR(fun_sexpr_fab_getter_127);
LOCFOR(fun_sexpr_fab_setter_128);
LOCFOR(fun_sexpr_fab_setter_name_129);
LOCFOR(fun_sexpr_macroQ_130);
LOCFOR(fun_sexpr_macro_expandQ_131);
LOCFOR(fun_sexpr_make_syntax_if_132);
FUNFOR(YevalSsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_134);
LOCFOR(fun_sexpr_unquoteQ_135);
LOCFOR(fun_sexpr_unquote_splicingQ_136);
LOCFOR(fun_sexpr_backquoteQ_137);
LOCFOR(fun_sexpr_atomQ_138);
LOCFOR(fun_nreconc_139);
LOCFOR(fun_loop_140);
LOCFOR(fun_141);
LOCFOR(fun_bq_process_142);
LOCFOR(fun_bracket_143);
LOCFOR(fun_map_tree_144);
LOCFOR(fun_bq_remove_tokens_145);
LOCFOR(fun_sexpr_syntax_ifQ_146);
LOCFOR(fun_sexpr_syntax_if_value_147);
LOCFOR(fun_sexpr_syntax_if_pattern_148);
LOCFOR(fun_sexpr_syntax_if_then_149);
LOCFOR(fun_sexpr_syntax_if_else_150);
LOCFOR(fun_sexpr_pattern_variableQ_151);
LOCFOR(fun_sexpr_pattern_variable_name_152);
LOCFOR(fun_col_153);
LOCFOR(fun_sexpr_bind_pattern_variables_154);
LOCFOR(fun_sexpr_make_macro_function_155);
extern P YevalSsyntaxY___main_0___ ();
extern P YevalSsyntaxY___main_1___ ();
extern P YevalSsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF2290;
  P tmpF2289;
  P tmpF2288;
  P tmpF2287;
  P tmpF2286;
  P tmpF2285;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF2285 = T1;
  if (tmpF2285 != YPfalse) {
    T2 = tmpF2285;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF2286 = T4;
    if (tmpF2286 != YPfalse) {
      T5 = tmpF2286;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPtrue);
      tmpF2287 = T7;
      if (tmpF2287 != YPfalse) {
        T8 = tmpF2287;
      } else {
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPfalse);
        tmpF2288 = T10;
        if (tmpF2288 != YPfalse) {
          T11 = tmpF2288;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF2289 = T13;
          if (tmpF2289 != YPfalse) {
            T14 = tmpF2289;
          } else {
            T16 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YgooScolsSvecYLvecG));
            tmpF2290 = T16;
            if (tmpF2290 != YPfalse) {
              T17 = tmpF2290;
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
  P tmpF2291;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF2291 = T1;
  if (tmpF2291 != YPfalse) {
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
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),quot_);
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
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),assn_);
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
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),exp_);
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
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
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
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
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
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
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
  P varF2292;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF2292 = T1;
  T3 = CALL2(1,VARREF(YisaQ),varF2292,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),varF2292);
    T2 = T4;
  } else {
    T2 = varF2292;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_adjectives_23) {
  P defn_;
  P varF2293;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF2293 = T1;
  T3 = CALL2(1,VARREF(YisaQ),varF2293,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ytail),varF2293);
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
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),defn_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_25) {
  P signature_;
  P values_spec_indexF2294;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_40));
  values_spec_indexF2294 = T1;
  if (values_spec_indexF2294 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),signature_,YPint((P)0),values_spec_indexF2294);
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
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_value_type_27) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_sexpr_signature_value_28) {
  P signature_;
  P valueF2297;
  P tmpF2296;
  P values_spec_indexF2295;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_40));
  values_spec_indexF2295 = T1;
  tmpF2296 = values_spec_indexF2295;
  if (tmpF2296 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),values_spec_indexF2295,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),signature_,T6);
    valueF2297 = T5;
    T8 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),valueF2297,LITREF(lit_44));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
      T12 = CALL1(1,VARREF(Ytail),valueF2297);
      T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSsyntaxYsexpr_value_type),T12);
      T9 = CALL3(1,VARREF(YgooSmacrosYcat),T10,T11,Ynil);
      T7 = T9;
    } else {
      T7 = valueF2297;
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

FUNCODEDEF(fun_sexpr_function_signature_30) {
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

FUNCODEDEF(fun_sexpr_function_parameters_31) {
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

FUNCODEDEF(fun_sexpr_function_value_32) {
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

FUNCODEDEF(fun_sexpr_function_body_33) {
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

FUNCODEDEF(fun_sexpr_function_definition_value_34) {
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

FUNCODEDEF(fun_sexpr_methodQ_35) {
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

FUNCODEDEF(fun_sexpr_method_signature_36) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_parameters_37) {
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

FUNCODEDEF(fun_sexpr_method_value_38) {
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

FUNCODEDEF(fun_sexpr_method_body_39) {
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

FUNCODEDEF(fun_sexpr_make_anonymous_method_40) {
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

FUNCODEDEF(fun_sexpr_make_method_41) {
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

FUNCODEDEF(fun_sexpr_ifQ_42) {
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

FUNCODEDEF(fun_sexpr_if_test_43) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_then_44) {
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

FUNCODEDEF(fun_sexpr_if_else_45) {
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

FUNCODEDEF(fun_sexpr_make_if_46) {
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

FUNCODEDEF(fun_sexpr_blockQ_47) {
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

FUNCODEDEF(fun_sexpr_block_name_48) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_block_body_49) {
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

FUNCODEDEF(fun_sexpr_unwind_protectQ_50) {
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

FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_51) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_52) {
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

FUNCODEDEF(fun_sexpr_monitorQ_53) {
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

FUNCODEDEF(fun_x_1419_54) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_89),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P optionsF2307;
  P x_1418F2306;
  P x_1418F2305;
  P x_1418F2304;
  P x_1418F2303;
  P bodyF2302;
  P handlerF2301;
  P optionsF2300;
  P x_1418F2299;
  P x_1419F2298;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1419_54,2);
  x_1419F2298 = T1;
  FUNINIT(x_1419F2298, 2,FREEREF(0),return_);
  x_1418F2299 = FREEREF(0);
  optionsF2300 = YPfalse;
  optionsF2300 = BOXFAB(optionsF2300);
  handlerF2301 = YPfalse;
  handlerF2301 = BOXFAB(handlerF2301);
  bodyF2302 = YPfalse;
  bodyF2302 = BOXFAB(bodyF2302);
  T9 = CALL2(1,VARREF(YisaQ),x_1418F2299,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1418F2299,LITREF(lit_82),x_1419F2298);
    x_1418F2303 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1418F2303,x_1419F2298);
    BOXVAL(optionsF2300) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1418F2303);
    x_1418F2304 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1418F2304,x_1419F2298);
    BOXVAL(handlerF2301) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1418F2304);
    x_1418F2305 = T17;
    BOXVAL(bodyF2302) = x_1418F2305;
    x_1418F2306 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1418F2306,x_1419F2298);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1419F2298,LITREF(lit_90),x_1418F2299);
  }
  T24 = BOXVAL(optionsF2300);
  T23 = CALL2(1,VARREF(YisaQ),T24,VARREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
    T30 = BOXVAL(optionsF2300);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF2300);
    T22 = T31;
  }
  optionsF2307 = T22;
  T33 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_type),optionsF2307);
  T34 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_info),optionsF2307);
  T35 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_test),optionsF2307);
  T36 = BOXVAL(handlerF2301);
  T38 = BOXVAL(bodyF2302);
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

FUNCODEDEF(fun_sexpr_monitor_expand_56) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_55,1,exp_);
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

FUNCODEDEF(fun_x_1421_58) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_99),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1420F2311;
  P typeF2310;
  P x_1420F2309;
  P x_1421F2308;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1421_58,2);
  x_1421F2308 = T1;
  FUNINIT(x_1421F2308, 2,FREEREF(0),return_);
  x_1420F2309 = FREEREF(0);
  typeF2310 = YPfalse;
  typeF2310 = BOXFAB(typeF2310);
  T5 = CALL2(1,VARREF(YisaQ),x_1420F2309,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1420F2309,x_1421F2308);
    BOXVAL(typeF2310) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1420F2309);
    x_1420F2311 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1420F2311,x_1421F2308);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1421F2308,LITREF(lit_90),x_1420F2309);
  }
  T11 = BOXVAL(typeF2310);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_60) {
  P options_;
  P type_listF2312;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_91),LITREF(lit_97));
  type_listF2312 = T1;
  T3 = FUNFAB(fun_59,1,type_listF2312);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1423_61) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_105),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1422F2316;
  P info_exprF2315;
  P x_1422F2314;
  P x_1423F2313;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1423_61,2);
  x_1423F2313 = T1;
  FUNINIT(x_1423F2313, 2,FREEREF(0),return_);
  x_1422F2314 = FREEREF(0);
  info_exprF2315 = YPfalse;
  info_exprF2315 = BOXFAB(info_exprF2315);
  T5 = CALL2(1,VARREF(YisaQ),x_1422F2314,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1422F2314,x_1423F2313);
    BOXVAL(info_exprF2315) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1422F2314);
    x_1422F2316 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1422F2316,x_1423F2313);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1423F2313,LITREF(lit_90),x_1422F2314);
  }
  T11 = BOXVAL(info_exprF2315);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1425_63) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_107),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1424F2322;
  P x_1424F2321;
  P argumentsF2320;
  P messageF2319;
  P x_1424F2318;
  P x_1425F2317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1425_63,2);
  x_1425F2317 = T1;
  FUNINIT(x_1425F2317, 2,FREEREF(0),return_);
  x_1424F2318 = FREEREF(0);
  messageF2319 = YPfalse;
  messageF2319 = BOXFAB(messageF2319);
  argumentsF2320 = YPfalse;
  argumentsF2320 = BOXFAB(argumentsF2320);
  T7 = CALL2(1,VARREF(YisaQ),x_1424F2318,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1424F2318,x_1425F2317);
    BOXVAL(messageF2319) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1424F2318);
    x_1424F2321 = T10;
    BOXVAL(argumentsF2320) = x_1424F2321;
    x_1424F2322 = Ynil;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1424F2322,x_1425F2317);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1425F2317,LITREF(lit_90),x_1424F2318);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T19 = BOXVAL(messageF2319);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_112));
  T24 = BOXVAL(argumentsF2320);
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

FUNCODEDEF(fun_sexpr_monitor_info_65) {
  P options_;
  P tmpF2325;
  P descriptionF2324;
  P infoF2323;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_101),YPfalse);
  infoF2323 = T1;
  T3 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_102),YPfalse);
  descriptionF2324 = T3;
  tmpF2325 = infoF2323;
  if (tmpF2325 != YPfalse) {
    T6 = descriptionF2324;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_103),options_);
    T4 = T7;
  } else {
    if (infoF2323 != YPfalse) {
      T10 = FUNFAB(fun_62,1,infoF2323);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF2324 != YPfalse) {
        T13 = FUNFAB(fun_64,1,descriptionF2324);
        T12 = with_exit(T13);
        T11 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T14 = LITREF(lit_113);
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
  P test_bodyF2326;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_71),LITREF(lit_115));
  test_bodyF2326 = T1;
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF2326);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_67) {
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

FUNCODEDEF(fun_sexpr_beginQ_68) {
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

FUNCODEDEF(fun_sexpr_begin_actions_69) {
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

FUNCODEDEF(fun_sexpr_last_expQ_70) {
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

FUNCODEDEF(fun_sexpr_first_exp_71) {
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

FUNCODEDEF(fun_sexpr_rest_exps_72) {
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

FUNCODEDEF(fun_sexpr_sequence_Gbegin_73) {
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

FUNCODEDEF(fun_sexpr_make_begin_74) {
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

FUNCODEDEF(fun_sexpr_applicationQ_75) {
  P exp_;
  P tmpF2327;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF2327 = T1;
  if (tmpF2327 != YPfalse) {
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
  P a1;
LINK_STACK();
  ARG(app_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),app_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_operands_77) {
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

FUNCODEDEF(fun_sexpr_no_operandsQ_78) {
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

FUNCODEDEF(fun_sexpr_first_operand_79) {
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

FUNCODEDEF(fun_sexpr_rest_operands_80) {
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

FUNCODEDEF(fun_sexpr_make_application_81) {
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

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_82) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(YevalSsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(YevalSsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_83) {
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

FUNCODEDEF(fun_sexpr_defQ_84) {
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

FUNCODEDEF(fun_sexpr_def_variable_85) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_def_value_86) {
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

FUNCODEDEF(fun_sexpr_letQ_87) {
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

FUNCODEDEF(fun_88) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_bound_variables_89) {
  P let_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_88;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_90) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_91) {
  P let_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_90;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_92) {
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

FUNCODEDEF(fun_inner_93) {
  P rtnames_,rtvalues_,index_,tnames_;
  P tmpF2329;
  P nameF2328;
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
    nameF2328 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF2328,VARREF(YLlstG));
    tmpF2329 = T7;
    if (tmpF2329 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF2328);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,LITREF(lit_161));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF2328);
      T14 = CALL2(1,VARREF(Ylst),T15,LITREF(lit_162));
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,rtnames_);
      T18 = CALL2(1,VARREF(Ylst),LITREF(lit_164),FREEREF(0));
      T17 = CALL4(1,VARREF(Ylst),LITREF(lit_163),FREEREF(0),index_,T18);
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
      T22 = CALL2(1,VARREF(YgooSmacrosYpair),nameF2328,rtnames_);
      T24 = CALL3(1,VARREF(Ylst),LITREF(lit_165),FREEREF(0),index_);
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

FUNCODEDEF(fun_loop_94) {
  P rnames_,rvalues_,names_,vals_;
  P rtvaluesF2337;
  P rtnamesF2336;
  P tup27F2335;
  P innerF2334;
  P tupnameF2333;
  P tmpF2332;
  P valueF2331;
  P nameF2330;
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
    nameF2330 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    valueF2331 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF2330,VARREF(YLlstG));
    tmpF2332 = T11;
    if (tmpF2332 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF2330);
      T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,LITREF(lit_44));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unique_name),LITREF(lit_155));
      tupnameF2333 = T16;
      T19 = FUNSHELL(1,fun_inner_93,2);
      innerF2334 = T19;
      FUNINIT(innerF2334, 2,tupnameF2333,innerF2334);
      T21 = CALL1(1,VARREF(Ylst),tupnameF2333);
      T22 = CALL1(1,VARREF(Ylst),valueF2331);
      T23 = CALL1(1,VARREF(Ytail),nameF2330);
      T20 = CALL4(0,innerF2334,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup27F2335 = T18;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2335,YPint((P)0));
      rtnamesF2336 = T25;
      T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2335,YPint((P)1));
      rtvaluesF2337 = T27;
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),rtnamesF2336,rnames_);
      T30 = CALL2(1,VARREF(YgooSmacrosYcat),rtvaluesF2337,rvalues_);
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
      T34 = CALL2(1,VARREF(YgooSmacrosYpair),nameF2330,rnames_);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),valueF2331,rvalues_);
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

FUNCODEDEF(fun_sexpr_let_namesAvalues_95) {
  P names_,vals_;
  P loopF2338;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_94,1);
  loopF2338 = T1;
  FUNINIT(loopF2338, 1,loopF2338);
  T2 = CALL4(0,loopF2338,Ynil,Ynil,names_,vals_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_96) {
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

FUNCODEDEF(fun_sexpr_let_Gcombination_97) {
  P let_exp_;
  P colF2345;
  P valuesF2344;
  P namesF2343;
  P tup28F2342;
  P bodyF2341;
  P ovaluesF2340;
  P onamesF2339;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF2339 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_values),let_exp_);
  ovaluesF2340 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_body),let_exp_);
  bodyF2341 = T5;
  T7 = CALL2(1,VARREF(YevalSsyntaxYsexpr_let_namesAvalues),onamesF2339,ovaluesF2340);
  tup28F2342 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F2342,YPint((P)0));
  namesF2343 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F2342,YPint((P)1));
  valuesF2344 = T11;
  T13 = FUNSHELL(1,fun_col_96,2);
  colF2345 = T13;
  FUNINIT(colF2345, 2,bodyF2341,colF2345);
  T14 = CALL2(0,colF2345,namesF2343,valuesF2344);
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

FUNCODEDEF(fun_sexpr_locQ_98) {
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

FUNCODEDEF(fun_sexpr_loc_bound_names_99) {
  P loc_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_100) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_101) {
  P loc_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = fun_100;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_102) {
  P loc_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSruntimeYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_103) {
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

FUNCODEDEF(fun_sexpr_loc_body_104) {
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

FUNCODEDEF(fun_sexpr_iterateQ_105) {
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

FUNCODEDEF(fun_sexpr_iterate_name_106) {
  P rep_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_107) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_108) {
  P rep_exp_;
  P sigF2346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  sigF2346 = T1;
  T4 = fun_107;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sigF2346);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF2346);
  if (T7 != YPfalse) {
    T6 = Ynil;
  } else {
    T8 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_values_tag));
    T6 = T8;
  }
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF2346);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T2 = CALL3(1,VARREF(YgooSmacrosYcat),T3,T6,T9);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_109) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_110) {
  P rep_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = fun_109;
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_111) {
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

FUNCODEDEF(fun_sexpr_iterate_Gloc_112) {
  P rep_exp_;
  P initsF2350;
  P bodyF2349;
  P sigF2348;
  P nameF2347;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_name),rep_exp_);
  nameF2347 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF2348 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF2349 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF2350 = T7;
  T11 = CALL2(1,VARREF(Ylst),nameF2347,sigF2348);
  T10 = CALL2(1,VARREF(YgooSmacrosYcat),T11,bodyF2349);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),nameF2347);
  T12 = CALL2(1,VARREF(YgooSmacrosYcat),T13,initsF2350);
  T8 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_locals_tag),T9,T12);
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_113) {
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

FUNCODEDEF(fun_sexpr_isa_parent_114) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_isa_prop_inits_115) {
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

FUNCODEDEF(fun_sexpr_isa_init_props_116) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_117) {
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

FUNCODEDEF(fun_sexpr_define_classQ_118) {
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

FUNCODEDEF(fun_sexpr_define_class_parents_119) {
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

FUNCODEDEF(fun_sexpr_propQ_120) {
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

FUNCODEDEF(fun_sexpr_prop_name_121) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_owner_122) {
  P exp_;
  P paramF2351;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooSmacrosY1st),T2);
  paramF2351 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF2351,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosY2nd),paramF2351);
    T3 = T5;
  } else {
    T3 = paramF2351;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_var_123) {
  P exp_;
  P paramF2352;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooSmacrosY1st),T2);
  paramF2352 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF2352,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),paramF2352);
    T3 = T5;
  } else {
    T3 = LITREF(lit_199);
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_type_124) {
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

FUNCODEDEF(fun_sexpr_prop_initQ_125) {
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

FUNCODEDEF(fun_sexpr_prop_init_126) {
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

FUNCODEDEF(fun_sexpr_fab_getter_127) {
  P name_,type_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),LITREF(lit_199),type_);
  T1 = CALL1(1,VARREF(Ylst),T2);
  T4 = CALL3(1,VARREF(Ylst),LITREF(lit_204),LITREF(lit_199),name_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),name_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_128) {
  P name_,type_,prop_type_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(prop_type_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_207),prop_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_199),type_);
  T2 = CALL2(1,VARREF(Ylst),T3,T4);
  T6 = CALL4(1,VARREF(Ylst),LITREF(lit_208),LITREF(lit_207),LITREF(lit_199),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_name_129) {
  P name_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,LITREF(lit_210));
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_130) {
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

FUNCODEDEF(fun_sexpr_macro_expandQ_131) {
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

FUNCODEDEF(fun_sexpr_make_syntax_if_132) {
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
  T0 = CALL2(1,VARREF(YevalSsyntaxYeval),T1,LITREF(lit_225));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_134) {
  P x_;
  P resF2354;
  P raw_resultF2353;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
  raw_resultF2353 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),raw_resultF2353);
  resF2354 = T3;
  T2 = resF2354;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_135) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_228));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_136) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_230));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_137) {
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

FUNCODEDEF(fun_sexpr_atomQ_138) {
  P x_;
  P tmpF2355;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF2355 = T1;
  if (tmpF2355 != YPfalse) {
    T3 = tmpF2355;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),x_,Ynil);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nreconc_139) {
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

FUNCODEDEF(fun_loop_140) {
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
        T12 = CALL2(1,VARREF(Yerror),LITREF(lit_239),p_);
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
      T21 = CALL2(1,VARREF(Yerror),LITREF(lit_240),p_);
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

FUNCODEDEF(fun_141) {
  P return_;
  P loopF2356;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_140,2);
  loopF2356 = T1;
  FUNINIT(loopF2356, 2,return_,loopF2356);
  T2 = CALL2(0,loopF2356,FREEREF(0),Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_142) {
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
          T15 = CALL2(1,VARREF(Yerror),LITREF(lit_236),T16);
          T13 = T15;
        } else {
          if (YPtrue != YPfalse) {
            T21 = FUNFAB(fun_141,1,x_);
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

FUNCODEDEF(fun_bracket_143) {
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

FUNCODEDEF(fun_map_tree_144) {
  P fn_,x_;
  P tmpF2359;
  P dF2358;
  P aF2357;
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
    aF2357 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),fn_,T8);
    dF2358 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YgooSmathYE),aF2357,T12);
    tmpF2359 = T11;
    if (tmpF2359 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YgooSmathYE),dF2358,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),aF2357,dF2358);
      T9 = T16;
    }
    T6 = T9;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_145) {
  P x_;
  P tmpF2361;
  P tmpF2360;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_112);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_245);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_246);
      } else {
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_247);
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
                tmpF2360 = T20;
                if (tmpF2360 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF2361 = T24;
                  if (tmpF2361 != YPfalse) {
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
                  T33 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_248),T34);
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

FUNCODEDEF(fun_sexpr_syntax_ifQ_146) {
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

FUNCODEDEF(fun_sexpr_syntax_if_value_147) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_148) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_149) {
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

FUNCODEDEF(fun_sexpr_syntax_if_else_150) {
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

FUNCODEDEF(fun_sexpr_pattern_variableQ_151) {
  P pat_;
  P tmpF2362;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  tmpF2362 = T1;
  if (tmpF2362 != YPfalse) {
    T2 = tmpF2362;
  } else {
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_152) {
  P pat_;
  P T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_153) {
  P pat_;
  P xF2364;
  P tmpF2363;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF2363 = T2;
  if (tmpF2363 != YPfalse) {
    T4 = tmpF2363;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF2364 = T7;
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variableQ),xF2364);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variable_name),xF2364);
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

FUNCODEDEF(fun_sexpr_bind_pattern_variables_154) {
  P pat_;
  P colF2365;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_153,1);
  colF2365 = T2;
  FUNINIT(colF2365, 1,colF2365);
  T3 = CALL1(0,colF2365,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_155) {
  P name_,exp_;
  P funcF2367;
  P mifF2366;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(exp_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_258));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T10 = CALL1(1,VARREF(Ylst),name_);
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,T10,Ynil);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,Ynil);
  T1 = CALL4(1,VARREF(YevalSsyntaxYsexpr_make_syntax_if),T2,LITREF(lit_1),T3,T5);
  mifF2366 = T1;
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T14 = CALL1(1,VARREF(Ylst),mifF2366);
  T12 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T13,T14);
  funcF2367 = T12;
  T11 = funcF2367;
  T0 = T11;
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
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234;
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
  lit_36 = YPPsym((P)"sexpr-function-definition-adjectives");
  T115 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_adjectives_23 = YPmet(FUNCODEREF(fun_sexpr_function_definition_adjectives_23),LITREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSsyntaxYsexpr_function_definition_adjectives);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSsyntaxYsexpr_function_definition_adjectives);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_function_definition_adjectives_23;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSsyntaxYsexpr_function_definition_adjectives,T116);
  lit_37 = YPPsym((P)"sexpr-forward-primitive?");
  T120 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_24 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_24),LITREF(lit_37),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSsyntaxYsexpr_forward_primitiveQ);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSsyntaxYsexpr_forward_primitiveQ);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_forward_primitiveQ_24;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSsyntaxYsexpr_forward_primitiveQ,T121);
  lit_38 = YPPsym((P)"sexpr-signature-parameters");
  lit_39 = YPPsym((P)"signature");
  lit_40 = YPPsym((P)"=>");
  T125 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_25 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_25),LITREF(lit_38),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YevalSsyntaxYsexpr_signature_parameters);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSsyntaxYsexpr_signature_parameters);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_signature_parameters_25;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSsyntaxYsexpr_signature_parameters,T126);
  lit_41 = YPPsym((P)"sexpr-value-type");
  lit_42 = YPPsym((P)"x");
  T130 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_26 = YPmet(FUNCODEREF(fun_sexpr_value_type_26),LITREF(lit_41),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSsyntaxYsexpr_value_type);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSsyntaxYsexpr_value_type);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_value_type_26;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSsyntaxYsexpr_value_type,T131);
  T135 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_27 = YPmet(FUNCODEREF(fun_sexpr_value_type_27),LITREF(lit_41),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YevalSsyntaxYsexpr_value_type);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSsyntaxYsexpr_value_type);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_value_type_27;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSsyntaxYsexpr_value_type,T136);
  lit_43 = YPPsym((P)"sexpr-signature-value");
  lit_44 = YPPsym((P)"tup");
  lit_45 = YPPsym((P)"t*");
  T140 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_28 = YPmet(FUNCODEREF(fun_sexpr_signature_value_28),LITREF(lit_43),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSsyntaxYsexpr_signature_value);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSsyntaxYsexpr_signature_value);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_signature_value_28;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSsyntaxYsexpr_signature_value,T141);
  lit_46 = YPPsym((P)"as-signature");
  lit_47 = YPPsym((P)"sig");
  T145 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYas_signature = YPmet(FUNCODEREF(YevalSsyntaxYas_signature),LITREF(lit_46),T145,ENVNUL,PNUL,YPfalse);
  T146 = YevalSsyntaxYas_signature;
  VARSET(YevalSsyntaxYas_signature,T146);
  lit_48 = YPPsym((P)"sexpr-function-signature");
  T147 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_30 = YPmet(FUNCODEREF(fun_sexpr_function_signature_30),LITREF(lit_48),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YevalSsyntaxYsexpr_function_signature);
  if (T150 != YPfalse) {
    T149 = VARREF(YevalSsyntaxYsexpr_function_signature);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_sexpr_function_signature_30;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YevalSsyntaxYsexpr_function_signature,T148);
  lit_49 = YPPsym((P)"sexpr-function-parameters");
  T152 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_31 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_31),LITREF(lit_49),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YevalSsyntaxYsexpr_function_parameters);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSsyntaxYsexpr_function_parameters);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_sexpr_function_parameters_31;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSsyntaxYsexpr_function_parameters,T153);
  lit_50 = YPPsym((P)"sexpr-function-value");
  T157 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_32 = YPmet(FUNCODEREF(fun_sexpr_function_value_32),LITREF(lit_50),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YevalSsyntaxYsexpr_function_value);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSsyntaxYsexpr_function_value);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sexpr_function_value_32;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSsyntaxYsexpr_function_value,T158);
  lit_51 = YPPsym((P)"sexpr-function-body");
  T162 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_33 = YPmet(FUNCODEREF(fun_sexpr_function_body_33),LITREF(lit_51),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YevalSsyntaxYsexpr_function_body);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSsyntaxYsexpr_function_body);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_sexpr_function_body_33;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSsyntaxYsexpr_function_body,T163);
  lit_52 = YPPsym((P)"fun");
  VARSET(YevalSsyntaxYDsexpr_method_tag,LITREF(lit_52));
  lit_53 = YPPsym((P)"sexpr-function-definition-value");
  T167 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_34 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_34),LITREF(lit_53),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSsyntaxYsexpr_function_definition_value);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSsyntaxYsexpr_function_definition_value);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_function_definition_value_34;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSsyntaxYsexpr_function_definition_value,T168);
  lit_54 = YPPsym((P)"sexpr-method?");
  T172 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_35 = YPmet(FUNCODEREF(fun_sexpr_methodQ_35),LITREF(lit_54),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalSsyntaxYsexpr_methodQ);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSsyntaxYsexpr_methodQ);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_methodQ_35;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSsyntaxYsexpr_methodQ,T173);
  lit_55 = YPPsym((P)"sexpr-method-signature");
  lit_56 = YPPsym((P)"method-exp");
  T177 = YPsig(YPPlist(1,LITREF(lit_56)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_36 = YPmet(FUNCODEREF(fun_sexpr_method_signature_36),LITREF(lit_55),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YevalSsyntaxYsexpr_method_signature);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSsyntaxYsexpr_method_signature);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sexpr_method_signature_36;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSsyntaxYsexpr_method_signature,T178);
  lit_57 = YPPsym((P)"sexpr-method-parameters");
  T182 = YPsig(YPPlist(1,LITREF(lit_56)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_37 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_37),LITREF(lit_57),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSsyntaxYsexpr_method_parameters);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSsyntaxYsexpr_method_parameters);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_sexpr_method_parameters_37;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSsyntaxYsexpr_method_parameters,T183);
  lit_58 = YPPsym((P)"sexpr-method-value");
  T187 = YPsig(YPPlist(1,LITREF(lit_56)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_38 = YPmet(FUNCODEREF(fun_sexpr_method_value_38),LITREF(lit_58),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalSsyntaxYsexpr_method_value);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSsyntaxYsexpr_method_value);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_sexpr_method_value_38;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSsyntaxYsexpr_method_value,T188);
  lit_59 = YPPsym((P)"sexpr-method-body");
  T192 = YPsig(YPPlist(1,LITREF(lit_56)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_39 = YPmet(FUNCODEREF(fun_sexpr_method_body_39),LITREF(lit_59),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YevalSsyntaxYsexpr_method_body);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSsyntaxYsexpr_method_body);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_sexpr_method_body_39;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSsyntaxYsexpr_method_body,T193);
  lit_60 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_61 = YPPsym((P)"parameters");
  lit_62 = YPPsym((P)"body");
  T197 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_62)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_40 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_40),LITREF(lit_60),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSsyntaxYsexpr_make_anonymous_method);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSsyntaxYsexpr_make_anonymous_method);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_sexpr_make_anonymous_method_40;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSsyntaxYsexpr_make_anonymous_method,T198);
  lit_63 = YPPsym((P)"sexpr-make-method");
  lit_64 = YPPsym((P)"name");
  T202 = YPsig(YPPlist(3,LITREF(lit_64),LITREF(lit_61),LITREF(lit_62)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_41 = YPmet(FUNCODEREF(fun_sexpr_make_method_41),LITREF(lit_63),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSsyntaxYsexpr_make_method);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSsyntaxYsexpr_make_method);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_sexpr_make_method_41;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSsyntaxYsexpr_make_method,T203);
  lit_65 = YPPsym((P)"if");
  VARSET(YevalSsyntaxYDsexpr_if_tag,LITREF(lit_65));
  lit_66 = YPPsym((P)"sexpr-if?");
  T207 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_42 = YPmet(FUNCODEREF(fun_sexpr_ifQ_42),LITREF(lit_66),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSsyntaxYsexpr_ifQ);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSsyntaxYsexpr_ifQ);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_sexpr_ifQ_42;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSsyntaxYsexpr_ifQ,T208);
  lit_67 = YPPsym((P)"sexpr-if-test");
  T212 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_43 = YPmet(FUNCODEREF(fun_sexpr_if_test_43),LITREF(lit_67),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YevalSsyntaxYsexpr_if_test);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSsyntaxYsexpr_if_test);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_if_test_43;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSsyntaxYsexpr_if_test,T213);
  lit_68 = YPPsym((P)"sexpr-if-then");
  T217 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_44 = YPmet(FUNCODEREF(fun_sexpr_if_then_44),LITREF(lit_68),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YevalSsyntaxYsexpr_if_then);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSsyntaxYsexpr_if_then);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_if_then_44;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSsyntaxYsexpr_if_then,T218);
  lit_69 = YPPsym((P)"sexpr-if-else");
  T222 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_45 = YPmet(FUNCODEREF(fun_sexpr_if_else_45),LITREF(lit_69),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YevalSsyntaxYsexpr_if_else);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSsyntaxYsexpr_if_else);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_sexpr_if_else_45;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSsyntaxYsexpr_if_else,T223);
  lit_70 = YPPsym((P)"sexpr-make-if");
  lit_71 = YPPsym((P)"test");
  lit_72 = YPPsym((P)"then");
  lit_73 = YPPsym((P)"else");
  T229 = YPsig(YPPlist(3,LITREF(lit_71),LITREF(lit_72),LITREF(lit_73)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  T228 = fun_sexpr_make_if_46 = YPmet(FUNCODEREF(fun_sexpr_make_if_46),LITREF(lit_70),T229,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSsyntaxYsexpr_make_if);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSsyntaxYsexpr_make_if);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_sexpr_make_if_46;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  T230 = VARSET(YevalSsyntaxYsexpr_make_if,T231);
  T227 = T230;
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
DEFCREGS();
loop:
  lit_74 = YPPsym((P)"esc");
  VARSET(YevalSsyntaxYDsexpr_bind_exit_tag,LITREF(lit_74));
  lit_75 = YPPsym((P)"sexpr-block?");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_47 = YPmet(FUNCODEREF(fun_sexpr_blockQ_47),LITREF(lit_75),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSsyntaxYsexpr_blockQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSsyntaxYsexpr_blockQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_blockQ_47;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSsyntaxYsexpr_blockQ,T1);
  lit_76 = YPPsym((P)"sexpr-block-name");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_block_name_48 = YPmet(FUNCODEREF(fun_sexpr_block_name_48),LITREF(lit_76),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSsyntaxYsexpr_block_name);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSsyntaxYsexpr_block_name);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_block_name_48;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSsyntaxYsexpr_block_name,T6);
  lit_77 = YPPsym((P)"sexpr-block-body");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_49 = YPmet(FUNCODEREF(fun_sexpr_block_body_49),LITREF(lit_77),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSsyntaxYsexpr_block_body);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSsyntaxYsexpr_block_body);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_block_body_49;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSsyntaxYsexpr_block_body,T11);
  lit_78 = YPPsym((P)"fin");
  VARSET(YevalSsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_78));
  lit_79 = YPPsym((P)"sexpr-unwind-protect?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_50 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_50),LITREF(lit_79),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSsyntaxYsexpr_unwind_protectQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSsyntaxYsexpr_unwind_protectQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_unwind_protectQ_50;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSsyntaxYsexpr_unwind_protectQ,T16);
  lit_80 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_51 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_51),LITREF(lit_80),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSsyntaxYsexpr_unwind_protect_protected_form);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_unwind_protect_protected_form_51;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_protected_form,T21);
  lit_81 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_52 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_52),LITREF(lit_81),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_unwind_protect_cleanup_forms_52;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,T26);
  lit_82 = YPPsym((P)"try");
  VARSET(YevalSsyntaxYDsexpr_monitor_tag,LITREF(lit_82));
  lit_83 = YPPsym((P)"sexpr-monitor?");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_53 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_53),LITREF(lit_83),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSsyntaxYsexpr_monitorQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSsyntaxYsexpr_monitorQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_monitorQ_53;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSsyntaxYsexpr_monitorQ,T31);
  lit_84 = YPPsym((P)"sexpr-monitor-expand");
  lit_85 = YPPsym((P)"return");
  lit_86 = YPPsym((P)"x-1419");
  lit_87 = YPPsym((P)"msg");
  lit_88 = YPPsym((P)"args");
  lit_89 = YPsb((P)"Malformed TRY expression: ~=");
  lit_90 = YPsb((P)"Match Pattern Failure");
  lit_91 = YPPsym((P)"type");
  T37 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_88)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1419_54 = YPmet(FUNCODEREF(fun_x_1419_54),LITREF(lit_86),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_56),LITREF(lit_84),T35,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSsyntaxYsexpr_monitor_expand);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSsyntaxYsexpr_monitor_expand);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_sexpr_monitor_expand_56;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSsyntaxYsexpr_monitor_expand,T38);
  lit_92 = YPPsym((P)"find-option");
  lit_93 = YPPsym((P)"options");
  lit_94 = YPPsym((P)"option");
  lit_95 = YPPsym((P)"default");
  T42 = YPsig(YPPlist(3,LITREF(lit_93),LITREF(lit_94),LITREF(lit_95)),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSsyntaxYfind_option = YPmet(FUNCODEREF(YevalSsyntaxYfind_option),LITREF(lit_92),T42,ENVNUL,PNUL,YPfalse);
  T43 = YevalSsyntaxYfind_option;
  VARSET(YevalSsyntaxYfind_option,T43);
  lit_96 = YPPsym((P)"sexpr-monitor-type");
  lit_97 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_98 = YPPsym((P)"x-1421");
  lit_99 = YPsb((P)"Malformed TRY condition type: %=");
  T46 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_88)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1421_58 = YPmet(FUNCODEREF(fun_x_1421_58),LITREF(lit_98),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_60 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_60),LITREF(lit_96),T44,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YevalSsyntaxYsexpr_monitor_type);
  if (T49 != YPfalse) {
    T48 = VARREF(YevalSsyntaxYsexpr_monitor_type);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_sexpr_monitor_type_60;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YevalSsyntaxYsexpr_monitor_type,T47);
  lit_100 = YPPsym((P)"sexpr-monitor-info");
  lit_101 = YPPsym((P)"info");
  lit_102 = YPPsym((P)"description");
  lit_103 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_104 = YPPsym((P)"x-1423");
  lit_105 = YPsb((P)"Malformed TRY info expression: %=");
  lit_106 = YPPsym((P)"x-1425");
  lit_107 = YPsb((P)"Malformed TRY description: %=");
  lit_108 = YPPsym((P)"new");
  lit_109 = YPPsym((P)"<simple-handler-info>");
  lit_110 = YPPsym((P)"handler-info-message");
  lit_111 = YPPsym((P)"handler-info-arguments");
  lit_112 = YPPsym((P)"lst");
  lit_113 = YPPsym((P)"$default-handler-info");
  T55 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_88)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1423_61 = YPmet(FUNCODEREF(fun_x_1423_61),LITREF(lit_104),T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_88)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1425_63 = YPmet(FUNCODEREF(fun_x_1425_63),LITREF(lit_106),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_65 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_65),LITREF(lit_100),T51,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSsyntaxYsexpr_monitor_info);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSsyntaxYsexpr_monitor_info);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_monitor_info_65;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSsyntaxYsexpr_monitor_info,T56);
  lit_114 = YPPsym((P)"sexpr-monitor-test");
  lit_115 = YPPlist(1,YPtrue);
  T60 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_66 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_66),LITREF(lit_114),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalSsyntaxYsexpr_monitor_test);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSsyntaxYsexpr_monitor_test);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_monitor_test_66;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSsyntaxYsexpr_monitor_test,T61);
  lit_116 = YPPsym((P)"sexpr-monitor-body");
  T65 = YPsig(YPPlist(1,LITREF(lit_62)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_67 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_67),LITREF(lit_116),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSsyntaxYsexpr_monitor_body);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSsyntaxYsexpr_monitor_body);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_monitor_body_67;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSsyntaxYsexpr_monitor_body,T66);
  lit_117 = YPPsym((P)"seq");
  VARSET(YevalSsyntaxYDsexpr_begin_tag,LITREF(lit_117));
  lit_118 = YPPsym((P)"sexpr-begin?");
  T70 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_68 = YPmet(FUNCODEREF(fun_sexpr_beginQ_68),LITREF(lit_118),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSsyntaxYsexpr_beginQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSsyntaxYsexpr_beginQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_beginQ_68;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSsyntaxYsexpr_beginQ,T71);
  lit_119 = YPPsym((P)"sexpr-begin-actions");
  lit_120 = YPPsym((P)"begin-exp");
  T75 = YPsig(YPPlist(1,LITREF(lit_120)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_69 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_69),LITREF(lit_119),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSsyntaxYsexpr_begin_actions);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSsyntaxYsexpr_begin_actions);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_begin_actions_69;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSsyntaxYsexpr_begin_actions,T76);
  lit_121 = YPPsym((P)"sexpr-last-exp?");
  T80 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_70 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_70),LITREF(lit_121),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSsyntaxYsexpr_last_expQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSsyntaxYsexpr_last_expQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_last_expQ_70;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSsyntaxYsexpr_last_expQ,T81);
  lit_122 = YPPsym((P)"sexpr-first-exp");
  T85 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_71 = YPmet(FUNCODEREF(fun_sexpr_first_exp_71),LITREF(lit_122),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSsyntaxYsexpr_first_exp);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSsyntaxYsexpr_first_exp);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_first_exp_71;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSsyntaxYsexpr_first_exp,T86);
  lit_123 = YPPsym((P)"sexpr-rest-exps");
  T90 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_72 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_72),LITREF(lit_123),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSsyntaxYsexpr_rest_exps);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSsyntaxYsexpr_rest_exps);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_rest_exps_72;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSsyntaxYsexpr_rest_exps,T91);
  lit_124 = YPPsym((P)"sexpr-sequence->begin");
  T95 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_73 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_73),LITREF(lit_124),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YevalSsyntaxYsexpr_sequence_Gbegin);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSsyntaxYsexpr_sequence_Gbegin);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_sequence_Gbegin_73;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSsyntaxYsexpr_sequence_Gbegin,T96);
  lit_125 = YPPsym((P)"sexpr-make-begin");
  T100 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_74 = YPmet(FUNCODEREF(fun_sexpr_make_begin_74),LITREF(lit_125),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSsyntaxYsexpr_make_begin);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSsyntaxYsexpr_make_begin);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_make_begin_74;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSsyntaxYsexpr_make_begin,T101);
  lit_126 = YPPsym((P)"sexpr-application?");
  T105 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_75 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_75),LITREF(lit_126),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YevalSsyntaxYsexpr_applicationQ);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSsyntaxYsexpr_applicationQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_applicationQ_75;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSsyntaxYsexpr_applicationQ,T106);
  lit_127 = YPPsym((P)"sexpr-operator");
  lit_128 = YPPsym((P)"app");
  T110 = YPsig(YPPlist(1,LITREF(lit_128)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_76 = YPmet(FUNCODEREF(fun_sexpr_operator_76),LITREF(lit_127),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YevalSsyntaxYsexpr_operator);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSsyntaxYsexpr_operator);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_operator_76;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSsyntaxYsexpr_operator,T111);
  lit_129 = YPPsym((P)"sexpr-operands");
  T115 = YPsig(YPPlist(1,LITREF(lit_128)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_77 = YPmet(FUNCODEREF(fun_sexpr_operands_77),LITREF(lit_129),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSsyntaxYsexpr_operands);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSsyntaxYsexpr_operands);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_operands_77;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSsyntaxYsexpr_operands,T116);
  lit_130 = YPPsym((P)"sexpr-no-operands?");
  T120 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_78 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_78),LITREF(lit_130),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSsyntaxYsexpr_no_operandsQ);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSsyntaxYsexpr_no_operandsQ);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_no_operandsQ_78;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSsyntaxYsexpr_no_operandsQ,T121);
  lit_131 = YPPsym((P)"sexpr-first-operand");
  T125 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_79 = YPmet(FUNCODEREF(fun_sexpr_first_operand_79),LITREF(lit_131),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YevalSsyntaxYsexpr_first_operand);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSsyntaxYsexpr_first_operand);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_first_operand_79;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSsyntaxYsexpr_first_operand,T126);
  lit_132 = YPPsym((P)"sexpr-rest-operands");
  T130 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_80 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_80),LITREF(lit_132),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSsyntaxYsexpr_rest_operands);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSsyntaxYsexpr_rest_operands);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_rest_operands_80;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSsyntaxYsexpr_rest_operands,T131);
  lit_133 = YPPsym((P)"sexpr-make-application");
  lit_134 = YPPsym((P)"f");
  lit_135 = YPPsym((P)"operands");
  T135 = YPsig(YPPlist(2,LITREF(lit_134),LITREF(lit_135)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_81 = YPmet(FUNCODEREF(fun_sexpr_make_application_81),LITREF(lit_133),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YevalSsyntaxYsexpr_make_application);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSsyntaxYsexpr_make_application);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_make_application_81;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSsyntaxYsexpr_make_application,T136);
  VARSET(YevalSsyntaxYTunique_name_counterT,YPint((P)0));
  lit_136 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T140 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_82 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_82),LITREF(lit_136),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YevalSsyntaxYsexpr_new_unique_name_counterX);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_new_unique_name_counterX_82;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSsyntaxYsexpr_new_unique_name_counterX,T141);
  VARSET(YevalSsyntaxYLnameG,VARREF(YLanyG));
  lit_137 = YPPsym((P)"sexpr-unique-name");
  lit_138 = YPPsym((P)"prefix");
  T145 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YevalSsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_83 = YPmet(FUNCODEREF(fun_sexpr_unique_name_83),LITREF(lit_137),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSsyntaxYsexpr_unique_name);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSsyntaxYsexpr_unique_name);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_unique_name_83;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSsyntaxYsexpr_unique_name,T146);
  lit_139 = YPPsym((P)"def");
  VARSET(YevalSsyntaxYDsexpr_def_tag,LITREF(lit_139));
  lit_140 = YPPsym((P)"sexpr-def?");
  T150 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_defQ_84 = YPmet(FUNCODEREF(fun_sexpr_defQ_84),LITREF(lit_140),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSsyntaxYsexpr_defQ);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSsyntaxYsexpr_defQ);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_defQ_84;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSsyntaxYsexpr_defQ,T151);
  lit_141 = YPPsym((P)"sexpr-def-variable");
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_85 = YPmet(FUNCODEREF(fun_sexpr_def_variable_85),LITREF(lit_141),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSsyntaxYsexpr_def_variable);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSsyntaxYsexpr_def_variable);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_sexpr_def_variable_85;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSsyntaxYsexpr_def_variable,T156);
  lit_142 = YPPsym((P)"sexpr-def-value");
  T160 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_86 = YPmet(FUNCODEREF(fun_sexpr_def_value_86),LITREF(lit_142),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSsyntaxYsexpr_def_value);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSsyntaxYsexpr_def_value);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_sexpr_def_value_86;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSsyntaxYsexpr_def_value,T161);
  lit_143 = YPPsym((P)"let");
  VARSET(YevalSsyntaxYDsexpr_let_tag,LITREF(lit_143));
  lit_144 = YPPsym((P)"sexpr-let?");
  T165 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_87 = YPmet(FUNCODEREF(fun_sexpr_letQ_87),LITREF(lit_144),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSsyntaxYsexpr_letQ);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSsyntaxYsexpr_letQ);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_sexpr_letQ_87;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSsyntaxYsexpr_letQ,T166);
  lit_145 = YPPsym((P)"sexpr-let-bound-variables");
  lit_146 = YPPsym((P)"let-exp");
  T171 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_89 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_89),LITREF(lit_145),T170,ENVNUL,PNUL,YPfalse);
  T174 = BOUNDP(YevalSsyntaxYsexpr_let_bound_variables);
  if (T174 != YPfalse) {
    T173 = VARREF(YevalSsyntaxYsexpr_let_bound_variables);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_sexpr_let_bound_variables_89;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T175);
  VARSET(YevalSsyntaxYsexpr_let_bound_variables,T172);
  lit_147 = YPPsym((P)"sexpr-let-values");
  T177 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_91 = YPmet(FUNCODEREF(fun_sexpr_let_values_91),LITREF(lit_147),T176,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YevalSsyntaxYsexpr_let_values);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSsyntaxYsexpr_let_values);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sexpr_let_values_91;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSsyntaxYsexpr_let_values,T178);
  lit_148 = YPPsym((P)"sexpr-let-body");
  T182 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_92 = YPmet(FUNCODEREF(fun_sexpr_let_body_92),LITREF(lit_148),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSsyntaxYsexpr_let_body);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSsyntaxYsexpr_let_body);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_sexpr_let_body_92;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSsyntaxYsexpr_let_body,T183);
  lit_149 = YPPsym((P)"sexpr-let-names+values");
  lit_150 = YPPsym((P)"names");
  lit_151 = YPPsym((P)"vals");
  lit_152 = YPPsym((P)"loop");
  lit_153 = YPPsym((P)"rnames");
  lit_154 = YPPsym((P)"rvalues");
  lit_155 = YPsb((P)"tup");
  lit_156 = YPPsym((P)"inner");
  lit_157 = YPPsym((P)"rtnames");
  lit_158 = YPPsym((P)"rtvalues");
  lit_159 = YPPsym((P)"index");
  lit_160 = YPPsym((P)"tnames");
  lit_161 = YPPsym((P)"...");
  lit_162 = YPPsym((P)"<lst>");
  lit_163 = YPPsym((P)"sub");
  lit_164 = YPPsym((P)"len");
  lit_165 = YPPsym((P)"elt");
  T190 = YPsig(YPPlist(4,LITREF(lit_157),LITREF(lit_158),LITREF(lit_159),LITREF(lit_160)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_inner_93 = YPmet(FUNCODEREF(fun_inner_93),LITREF(lit_156),T190,ENVNUL,PNUL,YPfalse);
  T189 = YPsig(YPPlist(4,LITREF(lit_153),LITREF(lit_154),LITREF(lit_150),LITREF(lit_151)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_94 = YPmet(FUNCODEREF(fun_loop_94),LITREF(lit_152),T189,ENVNUL,PNUL,YPfalse);
  T188 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T187 = YPsig(YPPlist(2,LITREF(lit_150),LITREF(lit_151)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),T188,Ynil);
  fun_sexpr_let_namesAvalues_95 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_95),LITREF(lit_149),T187,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YevalSsyntaxYsexpr_let_namesAvalues);
  if (T193 != YPfalse) {
    T192 = VARREF(YevalSsyntaxYsexpr_let_namesAvalues);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sexpr_let_namesAvalues_95;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YevalSsyntaxYsexpr_let_namesAvalues,T191);
  lit_166 = YPPsym((P)"sexpr-let->combination");
  lit_167 = YPPsym((P)"col");
  lit_168 = YPPsym((P)"values");
  T196 = YPsig(YPPlist(2,LITREF(lit_150),LITREF(lit_168)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_96 = YPmet(FUNCODEREF(fun_col_96),LITREF(lit_167),T196,ENVNUL,PNUL,YPfalse);
  T195 = YPsig(YPPlist(1,LITREF(lit_146)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_97 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_97),LITREF(lit_166),T195,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YevalSsyntaxYsexpr_let_Gcombination);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSsyntaxYsexpr_let_Gcombination);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_sexpr_let_Gcombination_97;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSsyntaxYsexpr_let_Gcombination,T197);
  lit_169 = YPPsym((P)"loc");
  VARSET(YevalSsyntaxYDsexpr_locals_tag,LITREF(lit_169));
  lit_170 = YPPsym((P)"sexpr-loc?");
  T201 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_98 = YPmet(FUNCODEREF(fun_sexpr_locQ_98),LITREF(lit_170),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YevalSsyntaxYsexpr_locQ);
  if (T204 != YPfalse) {
    T203 = VARREF(YevalSsyntaxYsexpr_locQ);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_sexpr_locQ_98;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YevalSsyntaxYsexpr_locQ,T202);
  lit_171 = YPPsym((P)"sexpr-loc-bound-names");
  lit_172 = YPPsym((P)"loc-exp");
  T206 = YPsig(YPPlist(1,LITREF(lit_172)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_99 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_99),LITREF(lit_171),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_names);
  if (T209 != YPfalse) {
    T208 = VARREF(YevalSsyntaxYsexpr_loc_bound_names);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_sexpr_loc_bound_names_99;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YevalSsyntaxYsexpr_loc_bound_names,T207);
  lit_173 = YPPsym((P)"sexpr-loc-bound-signatures");
  T212 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(YPPlist(1,LITREF(lit_172)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_101 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_101),LITREF(lit_173),T211,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_signatures);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSsyntaxYsexpr_loc_bound_signatures);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_loc_bound_signatures_101;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSsyntaxYsexpr_loc_bound_signatures,T213);
  lit_174 = YPPsym((P)"sexpr-loc-bound-bodies");
  T217 = YPsig(YPPlist(1,LITREF(lit_172)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_102 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_102),LITREF(lit_174),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_bodies);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSsyntaxYsexpr_loc_bound_bodies);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_loc_bound_bodies_102;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSsyntaxYsexpr_loc_bound_bodies,T218);
  lit_175 = YPPsym((P)"sexpr-loc-raw-body");
  T222 = YPsig(YPPlist(1,LITREF(lit_172)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_103 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_103),LITREF(lit_175),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YevalSsyntaxYsexpr_loc_raw_body);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSsyntaxYsexpr_loc_raw_body);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_sexpr_loc_raw_body_103;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSsyntaxYsexpr_loc_raw_body,T223);
  lit_176 = YPPsym((P)"sexpr-loc-body");
  T227 = YPsig(YPPlist(1,LITREF(lit_172)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_104 = YPmet(FUNCODEREF(fun_sexpr_loc_body_104),LITREF(lit_176),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(YevalSsyntaxYsexpr_loc_body);
  if (T230 != YPfalse) {
    T229 = VARREF(YevalSsyntaxYsexpr_loc_body);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_sexpr_loc_body_104;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YevalSsyntaxYsexpr_loc_body,T228);
  lit_177 = YPPsym((P)"rep");
  VARSET(YevalSsyntaxYDsexpr_iterate_tag,LITREF(lit_177));
  lit_178 = YPPsym((P)"sexpr-iterate?");
  T232 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_105 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_105),LITREF(lit_178),T232,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YevalSsyntaxYsexpr_iterateQ);
  if (T235 != YPfalse) {
    T234 = VARREF(YevalSsyntaxYsexpr_iterateQ);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_sexpr_iterateQ_105;
  T233 = XCALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YevalSsyntaxYsexpr_iterateQ,T233);
  lit_179 = YPPsym((P)"sexpr-iterate-name");
  lit_180 = YPPsym((P)"rep-exp");
  T237 = YPsig(YPPlist(1,LITREF(lit_180)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_106 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_106),LITREF(lit_179),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YevalSsyntaxYsexpr_iterate_name);
  if (T240 != YPfalse) {
    T239 = VARREF(YevalSsyntaxYsexpr_iterate_name);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_sexpr_iterate_name_106;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YevalSsyntaxYsexpr_iterate_name,T238);
  VARSET(YevalSsyntaxYDsexpr_values_tag,LITREF(lit_40));
  lit_181 = YPPsym((P)"sexpr-iterate-signature");
  T243 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(1,LITREF(lit_180)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_108 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_108),LITREF(lit_181),T242,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YevalSsyntaxYsexpr_iterate_signature);
  if (T246 != YPfalse) {
    T245 = VARREF(YevalSsyntaxYsexpr_iterate_signature);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_sexpr_iterate_signature_108;
  T244 = XCALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YevalSsyntaxYsexpr_iterate_signature,T244);
  lit_182 = YPPsym((P)"sexpr-iterate-inits");
  T249 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T249,ENVNUL,PNUL,YPfalse);
  T248 = YPsig(YPPlist(1,LITREF(lit_180)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_110 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_110),LITREF(lit_182),T248,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YevalSsyntaxYsexpr_iterate_inits);
  if (T252 != YPfalse) {
    T251 = VARREF(YevalSsyntaxYsexpr_iterate_inits);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_sexpr_iterate_inits_110;
  T250 = XCALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YevalSsyntaxYsexpr_iterate_inits,T250);
  lit_183 = YPPsym((P)"sexpr-iterate-body");
  T254 = YPsig(YPPlist(1,LITREF(lit_180)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_111 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_111),LITREF(lit_183),T254,ENVNUL,PNUL,YPfalse);
  T257 = BOUNDP(YevalSsyntaxYsexpr_iterate_body);
  if (T257 != YPfalse) {
    T256 = VARREF(YevalSsyntaxYsexpr_iterate_body);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_sexpr_iterate_body_111;
  T255 = XCALL2(1,VARREF(YPdefine_method),T256,T258);
  VARSET(YevalSsyntaxYsexpr_iterate_body,T255);
  lit_184 = YPPsym((P)"sexpr-iterate->loc");
  T259 = YPsig(YPPlist(1,LITREF(lit_180)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_112 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_112),LITREF(lit_184),T259,ENVNUL,PNUL,YPfalse);
  T262 = BOUNDP(YevalSsyntaxYsexpr_iterate_Gloc);
  if (T262 != YPfalse) {
    T261 = VARREF(YevalSsyntaxYsexpr_iterate_Gloc);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_sexpr_iterate_Gloc_112;
  T260 = XCALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(YevalSsyntaxYsexpr_iterate_Gloc,T260);
  lit_185 = YPPsym((P)"isa");
  VARSET(YevalSsyntaxYDsexpr_isa_tag,LITREF(lit_185));
  lit_186 = YPPsym((P)"sexpr-isa?");
  T266 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T265 = fun_sexpr_isaQ_113 = YPmet(FUNCODEREF(fun_sexpr_isaQ_113),LITREF(lit_186),T266,ENVNUL,PNUL,YPfalse);
  T270 = BOUNDP(YevalSsyntaxYsexpr_isaQ);
  if (T270 != YPfalse) {
    T269 = VARREF(YevalSsyntaxYsexpr_isaQ);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_sexpr_isaQ_113;
  T268 = XCALL2(1,VARREF(YPdefine_method),T269,T271);
  T267 = VARSET(YevalSsyntaxYsexpr_isaQ,T268);
  T264 = T267;
  return T264;
}

P YevalSsyntaxY___main_2___() {
  P tmpF2368;
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
loop:
  lit_187 = YPPsym((P)"sexpr-isa-parent");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_114 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_114),LITREF(lit_187),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSsyntaxYsexpr_isa_parent);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSsyntaxYsexpr_isa_parent);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_isa_parent_114;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSsyntaxYsexpr_isa_parent,T1);
  lit_188 = YPPsym((P)"sexpr-isa-prop-inits");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_115 = YPmet(FUNCODEREF(fun_sexpr_isa_prop_inits_115),LITREF(lit_188),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSsyntaxYsexpr_isa_prop_inits);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSsyntaxYsexpr_isa_prop_inits);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_isa_prop_inits_115;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSsyntaxYsexpr_isa_prop_inits,T6);
  lit_189 = YPPsym((P)"sexpr-isa-init-props");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_props_116 = YPmet(FUNCODEREF(fun_sexpr_isa_init_props_116),LITREF(lit_189),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSsyntaxYsexpr_isa_init_props);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSsyntaxYsexpr_isa_init_props);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_isa_init_props_116;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSsyntaxYsexpr_isa_init_props,T11);
  lit_190 = YPPsym((P)"sexpr-isa-init-values");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_117 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_117),LITREF(lit_190),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSsyntaxYsexpr_isa_init_values);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSsyntaxYsexpr_isa_init_values);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_isa_init_values_117;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSsyntaxYsexpr_isa_init_values,T16);
  lit_191 = YPPsym((P)"dc");
  VARSET(YevalSsyntaxYDsexpr_define_class_tag,LITREF(lit_191));
  lit_192 = YPPsym((P)"sexpr-define-class?");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_118 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_118),LITREF(lit_192),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSsyntaxYsexpr_define_classQ);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSsyntaxYsexpr_define_classQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_define_classQ_118;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSsyntaxYsexpr_define_classQ,T21);
  lit_193 = YPPsym((P)"sexpr-define-class-parents");
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_119 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_119),LITREF(lit_193),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSsyntaxYsexpr_define_class_parents);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSsyntaxYsexpr_define_class_parents);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_define_class_parents_119;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSsyntaxYsexpr_define_class_parents,T26);
  lit_194 = YPPsym((P)"dp");
  VARSET(YevalSsyntaxYDsexpr_prop_tag,LITREF(lit_194));
  lit_195 = YPPsym((P)"sexpr-prop?");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_120 = YPmet(FUNCODEREF(fun_sexpr_propQ_120),LITREF(lit_195),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSsyntaxYsexpr_propQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSsyntaxYsexpr_propQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_propQ_120;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSsyntaxYsexpr_propQ,T31);
  lit_196 = YPPsym((P)"sexpr-prop-name");
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_121 = YPmet(FUNCODEREF(fun_sexpr_prop_name_121),LITREF(lit_196),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSsyntaxYsexpr_prop_name);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSsyntaxYsexpr_prop_name);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_prop_name_121;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSsyntaxYsexpr_prop_name,T36);
  lit_197 = YPPsym((P)"sexpr-prop-owner");
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_122 = YPmet(FUNCODEREF(fun_sexpr_prop_owner_122),LITREF(lit_197),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSsyntaxYsexpr_prop_owner);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSsyntaxYsexpr_prop_owner);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_prop_owner_122;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSsyntaxYsexpr_prop_owner,T41);
  lit_198 = YPPsym((P)"sexpr-prop-init-var");
  lit_199 = YPPsym((P)"_x");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_123 = YPmet(FUNCODEREF(fun_sexpr_prop_init_var_123),LITREF(lit_198),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSsyntaxYsexpr_prop_init_var);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSsyntaxYsexpr_prop_init_var);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_prop_init_var_123;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSsyntaxYsexpr_prop_init_var,T46);
  lit_200 = YPPsym((P)"sexpr-prop-type");
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_124 = YPmet(FUNCODEREF(fun_sexpr_prop_type_124),LITREF(lit_200),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSsyntaxYsexpr_prop_type);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSsyntaxYsexpr_prop_type);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_prop_type_124;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSsyntaxYsexpr_prop_type,T51);
  lit_201 = YPPsym((P)"sexpr-prop-init?");
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_125 = YPmet(FUNCODEREF(fun_sexpr_prop_initQ_125),LITREF(lit_201),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSsyntaxYsexpr_prop_initQ);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSsyntaxYsexpr_prop_initQ);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_prop_initQ_125;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSsyntaxYsexpr_prop_initQ,T56);
  lit_202 = YPPsym((P)"sexpr-prop-init");
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_126 = YPmet(FUNCODEREF(fun_sexpr_prop_init_126),LITREF(lit_202),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalSsyntaxYsexpr_prop_init);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSsyntaxYsexpr_prop_init);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_prop_init_126;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSsyntaxYsexpr_prop_init,T61);
  lit_203 = YPPsym((P)"sexpr-fab-getter");
  lit_204 = YPPsym((P)"prop-value");
  T65 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_91)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_127 = YPmet(FUNCODEREF(fun_sexpr_fab_getter_127),LITREF(lit_203),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSsyntaxYsexpr_fab_getter);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSsyntaxYsexpr_fab_getter);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_fab_getter_127;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSsyntaxYsexpr_fab_getter,T66);
  lit_205 = YPPsym((P)"sexpr-fab-setter");
  lit_206 = YPPsym((P)"prop-type");
  lit_207 = YPPsym((P)"_z");
  lit_208 = YPPsym((P)"prop-value-setter");
  T70 = YPsig(YPPlist(3,LITREF(lit_64),LITREF(lit_91),LITREF(lit_206)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_128 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_128),LITREF(lit_205),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalSsyntaxYsexpr_fab_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSsyntaxYsexpr_fab_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_fab_setter_128;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSsyntaxYsexpr_fab_setter,T71);
  lit_209 = YPPsym((P)"sexpr-fab-setter-name");
  lit_210 = YPsb((P)"-setter");
  T75 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_129 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_name_129),LITREF(lit_209),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalSsyntaxYsexpr_fab_setter_name);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSsyntaxYsexpr_fab_setter_name);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_fab_setter_name_129;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSsyntaxYsexpr_fab_setter_name,T76);
  lit_211 = YPPsym((P)"sexpr-macro?");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_130 = YPmet(FUNCODEREF(fun_sexpr_macroQ_130),LITREF(lit_211),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalSsyntaxYsexpr_macroQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSsyntaxYsexpr_macroQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_macroQ_130;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSsyntaxYsexpr_macroQ,T81);
  lit_212 = YPPsym((P)"macro-expand");
  VARSET(YevalSsyntaxYDsexpr_macro_expand_tag,LITREF(lit_212));
  lit_213 = YPPsym((P)"sexpr-macro-expand?");
  T85 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_131 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_131),LITREF(lit_213),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalSsyntaxYsexpr_macro_expandQ);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSsyntaxYsexpr_macro_expandQ);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_macro_expandQ_131;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSsyntaxYsexpr_macro_expandQ,T86);
  lit_214 = YPPsym((P)"mif");
  VARSET(YevalSsyntaxYDsexpr_syntax_if_tag,LITREF(lit_214));
  lit_215 = YPPsym((P)"sexpr-make-syntax-if");
  lit_216 = YPPsym((P)"pat");
  T90 = YPsig(YPPlist(4,LITREF(lit_216),LITREF(lit_1),LITREF(lit_72),LITREF(lit_73)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_132 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_132),LITREF(lit_215),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSsyntaxYsexpr_make_syntax_if);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSsyntaxYsexpr_make_syntax_if);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_make_syntax_if_132;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSsyntaxYsexpr_make_syntax_if,T91);
  lit_217 = YPPsym((P)"comma-atsign");
  VARSET(YevalSsyntaxYTcomma_atsignT,LITREF(lit_217));
  lit_218 = YPPsym((P)"bq-list");
  VARSET(YevalSsyntaxYTbq_listT,LITREF(lit_218));
  lit_219 = YPPsym((P)"bq-list*");
  VARSET(YevalSsyntaxYTbq_listTT,LITREF(lit_219));
  lit_220 = YPPsym((P)"bq-append");
  VARSET(YevalSsyntaxYTbq_appendT,LITREF(lit_220));
  lit_221 = YPPsym((P)"bq-nconc");
  VARSET(YevalSsyntaxYTbq_nconcT,LITREF(lit_221));
  lit_222 = YPPsym((P)"bq-clobberable");
  VARSET(YevalSsyntaxYTbq_clobberableT,LITREF(lit_222));
  lit_223 = YPPsym((P)"bq-quote");
  VARSET(YevalSsyntaxYTbq_quoteT,LITREF(lit_223));
  lit_224 = YPPsym((P)"sexpr-expand-backquote");
  lit_225 = YPPsym((P)"goo");
  T95 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YevalSsyntaxYsexpr_expand_backquote),LITREF(lit_224),T95,ENVNUL,PNUL,YPfalse);
  T96 = YevalSsyntaxYsexpr_expand_backquote;
  VARSET(YevalSsyntaxYsexpr_expand_backquote,T96);
  lit_226 = YPPsym((P)"sexpr-build-backquote-expander");
  T97 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_134 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_134),LITREF(lit_226),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalSsyntaxYsexpr_build_backquote_expander);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSsyntaxYsexpr_build_backquote_expander);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_sexpr_build_backquote_expander_134;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSsyntaxYsexpr_build_backquote_expander,T98);
  lit_227 = YPPsym((P)"sexpr-unquote?");
  lit_228 = YPPsym((P)"unquote");
  T102 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_135 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_135),LITREF(lit_227),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalSsyntaxYsexpr_unquoteQ);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSsyntaxYsexpr_unquoteQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_sexpr_unquoteQ_135;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSsyntaxYsexpr_unquoteQ,T103);
  lit_229 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_230 = YPPsym((P)"unquote-splicing");
  T107 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_136 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_136),LITREF(lit_229),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YevalSsyntaxYsexpr_unquote_splicingQ);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSsyntaxYsexpr_unquote_splicingQ);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_sexpr_unquote_splicingQ_136;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSsyntaxYsexpr_unquote_splicingQ,T108);
  lit_231 = YPPsym((P)"sexpr-backquote?");
  T112 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_137 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_137),LITREF(lit_231),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(YevalSsyntaxYsexpr_backquoteQ);
  if (T115 != YPfalse) {
    T114 = VARREF(YevalSsyntaxYsexpr_backquoteQ);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_sexpr_backquoteQ_137;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YevalSsyntaxYsexpr_backquoteQ,T113);
  lit_232 = YPPsym((P)"sexpr-atom?");
  T117 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_138 = YPmet(FUNCODEREF(fun_sexpr_atomQ_138),LITREF(lit_232),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalSsyntaxYsexpr_atomQ);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalSsyntaxYsexpr_atomQ);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_sexpr_atomQ_138;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalSsyntaxYsexpr_atomQ,T118);
  lit_233 = YPPsym((P)"nreconc");
  lit_234 = YPPsym((P)"y");
  T122 = YPsig(YPPlist(2,LITREF(lit_42),LITREF(lit_234)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_139 = YPmet(FUNCODEREF(fun_nreconc_139),LITREF(lit_233),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSsyntaxYnreconc);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSsyntaxYnreconc);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_nreconc_139;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSsyntaxYnreconc,T123);
  lit_235 = YPPsym((P)"bq-process");
  lit_236 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_237 = YPPsym((P)"p");
  lit_238 = YPPsym((P)"q");
  lit_239 = YPsb((P)"Malformed ,%=");
  lit_240 = YPsb((P)"Dotted ,@%=");
  T129 = YPsig(YPPlist(2,LITREF(lit_237),LITREF(lit_238)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_140 = YPmet(FUNCODEREF(fun_loop_140),LITREF(lit_152),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_142 = YPmet(FUNCODEREF(fun_bq_process_142),LITREF(lit_235),T127,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YevalSsyntaxYbq_process);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSsyntaxYbq_process);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_bq_process_142;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSsyntaxYbq_process,T130);
  lit_241 = YPPsym((P)"bracket");
  T134 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_143 = YPmet(FUNCODEREF(fun_bracket_143),LITREF(lit_241),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSsyntaxYbracket);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSsyntaxYbracket);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_bracket_143;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSsyntaxYbracket,T135);
  lit_242 = YPPsym((P)"map-tree");
  lit_243 = YPPsym((P)"fn");
  T139 = YPsig(YPPlist(2,LITREF(lit_243),LITREF(lit_42)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_144 = YPmet(FUNCODEREF(fun_map_tree_144),LITREF(lit_242),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSsyntaxYmap_tree);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSsyntaxYmap_tree);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_map_tree_144;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSsyntaxYmap_tree,T140);
  lit_244 = YPPsym((P)"bq-remove-tokens");
  lit_245 = YPPsym((P)"cat");
  lit_246 = YPPsym((P)"cat!");
  lit_247 = YPPsym((P)"list*");
  lit_248 = YPPsym((P)"pair");
  T144 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_145 = YPmet(FUNCODEREF(fun_bq_remove_tokens_145),LITREF(lit_244),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSsyntaxYbq_remove_tokens);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSsyntaxYbq_remove_tokens);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_bq_remove_tokens_145;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSsyntaxYbq_remove_tokens,T145);
  lit_249 = YPPsym((P)"sexpr-syntax-if?");
  T149 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_146 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_146),LITREF(lit_249),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YevalSsyntaxYsexpr_syntax_ifQ);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSsyntaxYsexpr_syntax_ifQ);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_sexpr_syntax_ifQ_146;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSsyntaxYsexpr_syntax_ifQ,T150);
  lit_250 = YPPsym((P)"sexpr-syntax-if-value");
  T154 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_147 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_147),LITREF(lit_250),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_value);
  if (T157 != YPfalse) {
    T156 = VARREF(YevalSsyntaxYsexpr_syntax_if_value);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_sexpr_syntax_if_value_147;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YevalSsyntaxYsexpr_syntax_if_value,T155);
  lit_251 = YPPsym((P)"sexpr-syntax-if-pattern");
  T159 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_148 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_148),LITREF(lit_251),T159,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_pattern);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSsyntaxYsexpr_syntax_if_pattern);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_sexpr_syntax_if_pattern_148;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSsyntaxYsexpr_syntax_if_pattern,T160);
  lit_252 = YPPsym((P)"sexpr-syntax-if-then");
  T164 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_149 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_149),LITREF(lit_252),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_then);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSsyntaxYsexpr_syntax_if_then);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_sexpr_syntax_if_then_149;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSsyntaxYsexpr_syntax_if_then,T165);
  lit_253 = YPPsym((P)"sexpr-syntax-if-else");
  T169 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_150 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_150),LITREF(lit_253),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_else);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSsyntaxYsexpr_syntax_if_else);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_sexpr_syntax_if_else_150;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSsyntaxYsexpr_syntax_if_else,T170);
  lit_254 = YPPsym((P)"sexpr-pattern-variable?");
  T174 = YPsig(YPPlist(1,LITREF(lit_216)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_151 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_151),LITREF(lit_254),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YevalSsyntaxYsexpr_pattern_variableQ);
  if (T177 != YPfalse) {
    T176 = VARREF(YevalSsyntaxYsexpr_pattern_variableQ);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_sexpr_pattern_variableQ_151;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YevalSsyntaxYsexpr_pattern_variableQ,T175);
  lit_255 = YPPsym((P)"sexpr-pattern-variable-name");
  T179 = YPsig(YPPlist(1,LITREF(lit_216)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_152 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_152),LITREF(lit_255),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YevalSsyntaxYsexpr_pattern_variable_name);
  if (T182 != YPfalse) {
    T181 = VARREF(YevalSsyntaxYsexpr_pattern_variable_name);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_sexpr_pattern_variable_name_152;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YevalSsyntaxYsexpr_pattern_variable_name,T180);
  lit_256 = YPPsym((P)"sexpr-bind-pattern-variables");
  T185 = YPsig(YPPlist(1,LITREF(lit_216)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_153 = YPmet(FUNCODEREF(fun_col_153),LITREF(lit_167),T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(1,LITREF(lit_216)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_154 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_154),LITREF(lit_256),T184,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSsyntaxYsexpr_bind_pattern_variables);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSsyntaxYsexpr_bind_pattern_variables);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_sexpr_bind_pattern_variables_154;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSsyntaxYsexpr_bind_pattern_variables,T186);
  lit_257 = YPPsym((P)"sexpr-make-macro-function");
  lit_258 = YPPsym((P)"macro-error");
  T190 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_155 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_155),LITREF(lit_257),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YevalSsyntaxYsexpr_make_macro_function);
  if (T193 != YPfalse) {
    T192 = VARREF(YevalSsyntaxYsexpr_make_macro_function);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sexpr_make_macro_function_155;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YevalSsyntaxYsexpr_make_macro_function,T191);
  tmpF2368 = YPfalse;
  if (tmpF2368 != YPfalse) {
    T195 = VARREF(YevalSsyntaxYeval);
  } else {
    T195 = YPfalse;
  }
  T196 = YPfalse;
  return T196;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSzip;

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
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"stack-overflow-error", &module_info_gooSruntime, "stack-overflow-error"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
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
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"tail", &module_info_gooSboot, "tail"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"<<", &module_info_gooSmath, "<<"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"lst", &module_info_gooSboot, "lst"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
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
  {"<range>", &module_info_gooScolsSrange, "<range>"},
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
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"op", &module_info_gooSmacros, "op"},
  {"div", &module_info_gooSmath, "div"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
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
  {"%i-", &module_info_gooSboot, "%i-"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"always", &module_info_gooSruntime, "always"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%get", &module_info_gooSboot, "%get"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"to-str", &module_info_gooSmath, "to-str"},
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
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooSmacros, "last"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"==", &module_info_gooSmacros, "=="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"&", &module_info_gooSmath, "&"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
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
  {"case", &module_info_gooSmacros, "case"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"map", &module_info_gooSmacros, "map"},
  {"-", &module_info_gooSmath, "-"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"match", &module_info_gooSmacros, "match"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%time", &module_info_gooSboot, "%time"},
  {">>", &module_info_gooSmath, ">>"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"abs", &module_info_gooSmath, "abs"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"when", &module_info_gooSmacros, "when"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {"~=", &module_info_gooSmath, "~="},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"find-option", CVAR, &YevalSsyntaxYfind_option},
  {"sexpr-variable-type", CVAR, &YevalSsyntaxYsexpr_variable_type},
  {"sexpr-tagged-list?", CVAR, &YevalSsyntaxYsexpr_tagged_listQ},
  {"sexpr-syntax-definition?", CVAR, &YevalSsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-make-macro-function", CVAR, &YevalSsyntaxYsexpr_make_macro_function},
  {"sexpr-operator", CVAR, &YevalSsyntaxYsexpr_operator},
  {"sexpr-prop-init?", CVAR, &YevalSsyntaxYsexpr_prop_initQ},
  {"sexpr-assignment?", CVAR, &YevalSsyntaxYsexpr_assignmentQ},
  {"sexpr-monitor-body", CVAR, &YevalSsyntaxYsexpr_monitor_body},
  {"$sexpr-macro-expand-tag", CVAR, &YevalSsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-method-signature", CVAR, &YevalSsyntaxYsexpr_method_signature},
  {"sexpr-iterate-name", CVAR, &YevalSsyntaxYsexpr_iterate_name},
  {"sexpr-fab-setter-name", CVAR, &YevalSsyntaxYsexpr_fab_setter_name},
  {"eval", CVAR, &YevalSsyntaxYeval},
  {"bq-remove-tokens", CVAR, &YevalSsyntaxYbq_remove_tokens},
  {"sexpr-rest-operands", CVAR, &YevalSsyntaxYsexpr_rest_operands},
  {"sexpr-prop?", CVAR, &YevalSsyntaxYsexpr_propQ},
  {"sexpr-function-signature", CVAR, &YevalSsyntaxYsexpr_function_signature},
  {"sexpr-signature-parameters", CVAR, &YevalSsyntaxYsexpr_signature_parameters},
  {"sexpr-make-anonymous-method", CVAR, &YevalSsyntaxYsexpr_make_anonymous_method},
  {"sexpr-def?", CVAR, &YevalSsyntaxYsexpr_defQ},
  {"sexpr-first-exp", CVAR, &YevalSsyntaxYsexpr_first_exp},
  {"sexpr-build-backquote-expander", CVAR, &YevalSsyntaxYsexpr_build_backquote_expander},
  {"sexpr-monitor-info", CVAR, &YevalSsyntaxYsexpr_monitor_info},
  {"sexpr-unwind-protect-protected-form", CVAR, &YevalSsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-if-test", CVAR, &YevalSsyntaxYsexpr_if_test},
  {"$sexpr-quasiquote-tag", CVAR, &YevalSsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-monitor-expand", CVAR, &YevalSsyntaxYsexpr_monitor_expand},
  {"sexpr-method-definition?", CVAR, &YevalSsyntaxYsexpr_method_definitionQ},
  {"sexpr-definition-value", CVAR, &YevalSsyntaxYsexpr_definition_value},
  {"sexpr-loc-bound-signatures", CVAR, &YevalSsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-iterate-body", CVAR, &YevalSsyntaxYsexpr_iterate_body},
  {"nreconc", CVAR, &YevalSsyntaxYnreconc},
  {"sexpr-application?", CVAR, &YevalSsyntaxYsexpr_applicationQ},
  {"sexpr-isa-prop-inits", CVAR, &YevalSsyntaxYsexpr_isa_prop_inits},
  {"bracket", CVAR, &YevalSsyntaxYbracket},
  {"sexpr-syntax-if?", CVAR, &YevalSsyntaxYsexpr_syntax_ifQ},
  {"sexpr-syntax-if-then", CVAR, &YevalSsyntaxYsexpr_syntax_if_then},
  {"sexpr-pattern-variable?", CVAR, &YevalSsyntaxYsexpr_pattern_variableQ},
  {"sexpr-prop-type", CVAR, &YevalSsyntaxYsexpr_prop_type},
  {"sexpr-iterate?", CVAR, &YevalSsyntaxYsexpr_iterateQ},
  {"sexpr-fab-setter", CVAR, &YevalSsyntaxYsexpr_fab_setter},
  {"sexpr-let->combination", CVAR, &YevalSsyntaxYsexpr_let_Gcombination},
  {"sexpr-expand-backquote", CVAR, &YevalSsyntaxYsexpr_expand_backquote},
  {"sexpr-unquote-splicing?", CVAR, &YevalSsyntaxYsexpr_unquote_splicingQ},
  {"---main-1---", PVAR, NULL},
  {"sexpr-method?", CVAR, &YevalSsyntaxYsexpr_methodQ},
  {"as-signature", CVAR, &YevalSsyntaxYas_signature},
  {"$sexpr-begin-tag", CVAR, &YevalSsyntaxYDsexpr_begin_tag},
  {"sexpr-prop-owner", CVAR, &YevalSsyntaxYsexpr_prop_owner},
  {"$sexpr-unwind-protect-tag", CVAR, &YevalSsyntaxYDsexpr_unwind_protect_tag},
  {"$sexpr-define-method-tag", CVAR, &YevalSsyntaxYDsexpr_define_method_tag},
  {"sexpr-variable-name", CVAR, &YevalSsyntaxYsexpr_variable_name},
  {"sexpr-bind-pattern-variables", CVAR, &YevalSsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-monitor-test", CVAR, &YevalSsyntaxYsexpr_monitor_test},
  {"<name>", CVAR, &YevalSsyntaxYLnameG},
  {"sexpr-let-bound-variables", CVAR, &YevalSsyntaxYsexpr_let_bound_variables},
  {"sexpr-unwind-protect?", CVAR, &YevalSsyntaxYsexpr_unwind_protectQ},
  {"sexpr-if?", CVAR, &YevalSsyntaxYsexpr_ifQ},
  {"sexpr-text-of-quotation", CVAR, &YevalSsyntaxYsexpr_text_of_quotation},
  {"sexpr-first-operand", CVAR, &YevalSsyntaxYsexpr_first_operand},
  {"sexpr-define-class-parents", CVAR, &YevalSsyntaxYsexpr_define_class_parents},
  {"sexpr-function-definition?", CVAR, &YevalSsyntaxYsexpr_function_definitionQ},
  {"sexpr-self-evaluating?", CVAR, &YevalSsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-forward-primitive?", CVAR, &YevalSsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-method-body", CVAR, &YevalSsyntaxYsexpr_method_body},
  {"sexpr-last-exp?", CVAR, &YevalSsyntaxYsexpr_last_expQ},
  {"sexpr-generic-definition?", CVAR, &YevalSsyntaxYsexpr_generic_definitionQ},
  {"sexpr-function-body", CVAR, &YevalSsyntaxYsexpr_function_body},
  {"sexpr-variable?", CVAR, &YevalSsyntaxYsexpr_variableQ},
  {"sexpr-quoted?", CVAR, &YevalSsyntaxYsexpr_quotedQ},
  {"sexpr-assignment-variable", CVAR, &YevalSsyntaxYsexpr_assignment_variable},
  {"sexpr-assignment-value", CVAR, &YevalSsyntaxYsexpr_assignment_value},
  {"sexpr-atom?", CVAR, &YevalSsyntaxYsexpr_atomQ},
  {"map-tree", CVAR, &YevalSsyntaxYmap_tree},
  {"sexpr-syntax-if-pattern", CVAR, &YevalSsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-unique-name", CVAR, &YevalSsyntaxYsexpr_unique_name},
  {"sexpr-function-definition-value", CVAR, &YevalSsyntaxYsexpr_function_definition_value},
  {"$sexpr-set-tag", CVAR, &YevalSsyntaxYDsexpr_set_tag},
  {"sexpr-make-begin", CVAR, &YevalSsyntaxYsexpr_make_begin},
  {"sexpr-isa-parent", CVAR, &YevalSsyntaxYsexpr_isa_parent},
  {"sexpr-make-if", CVAR, &YevalSsyntaxYsexpr_make_if},
  {"sexpr-prop-init-var", CVAR, &YevalSsyntaxYsexpr_prop_init_var},
  {"sexpr-loc-body", CVAR, &YevalSsyntaxYsexpr_loc_body},
  {"sexpr-make-syntax-if", CVAR, &YevalSsyntaxYsexpr_make_syntax_if},
  {"sexpr-iterate-inits", CVAR, &YevalSsyntaxYsexpr_iterate_inits},
  {"sexpr-let-names+values", CVAR, &YevalSsyntaxYsexpr_let_namesAvalues},
  {"sexpr-signature-value", CVAR, &YevalSsyntaxYsexpr_signature_value},
  {"sexpr-let?", CVAR, &YevalSsyntaxYsexpr_letQ},
  {"$sexpr-values-tag", CVAR, &YevalSsyntaxYDsexpr_values_tag},
  {"*bq-list*", CVAR, &YevalSsyntaxYTbq_listT},
  {"sexpr-make-quote", CVAR, &YevalSsyntaxYsexpr_make_quote},
  {"sexpr-define-class?", CVAR, &YevalSsyntaxYsexpr_define_classQ},
  {"*unique-name-counter*", CVAR, &YevalSsyntaxYTunique_name_counterT},
  {"sexpr-syntax-definition-value", CVAR, &YevalSsyntaxYsexpr_syntax_definition_value},
  {"sexpr-definition-variable", CVAR, &YevalSsyntaxYsexpr_definition_variable},
  {"sexpr-new-unique-name-counter!", CVAR, &YevalSsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-loc-bound-names", CVAR, &YevalSsyntaxYsexpr_loc_bound_names},
  {"$sexpr-isa-tag", CVAR, &YevalSsyntaxYDsexpr_isa_tag},
  {"sexpr-backquote?", CVAR, &YevalSsyntaxYsexpr_backquoteQ},
  {"*bq-nconc*", CVAR, &YevalSsyntaxYTbq_nconcT},
  {"sexpr-block-body", CVAR, &YevalSsyntaxYsexpr_block_body},
  {"sexpr-no-operands?", CVAR, &YevalSsyntaxYsexpr_no_operandsQ},
  {"sexpr-monitor-type", CVAR, &YevalSsyntaxYsexpr_monitor_type},
  {"sexpr-fab-getter", CVAR, &YevalSsyntaxYsexpr_fab_getter},
  {"$sexpr-define-tag", CVAR, &YevalSsyntaxYDsexpr_define_tag},
  {"sexpr-monitor?", CVAR, &YevalSsyntaxYsexpr_monitorQ},
  {"sexpr-function-definition-adjectives", CVAR, &YevalSsyntaxYsexpr_function_definition_adjectives},
  {"sexpr-make-method", CVAR, &YevalSsyntaxYsexpr_make_method},
  {"sexpr-method-value", CVAR, &YevalSsyntaxYsexpr_method_value},
  {"sexpr-isa?", CVAR, &YevalSsyntaxYsexpr_isaQ},
  {"sexpr-def-variable", CVAR, &YevalSsyntaxYsexpr_def_variable},
  {"sexpr-macro-expand?", CVAR, &YevalSsyntaxYsexpr_macro_expandQ},
  {"sexpr-syntax-if-value", CVAR, &YevalSsyntaxYsexpr_syntax_if_value},
  {"sexpr-begin-actions", CVAR, &YevalSsyntaxYsexpr_begin_actions},
  {"*bq-append*", CVAR, &YevalSsyntaxYTbq_appendT},
  {"$sexpr-define-syntax-tag", CVAR, &YevalSsyntaxYDsexpr_define_syntax_tag},
  {"*bq-clobberable*", CVAR, &YevalSsyntaxYTbq_clobberableT},
  {"sexpr-sequence->begin", CVAR, &YevalSsyntaxYsexpr_sequence_Gbegin},
  {"sexpr-if-else", CVAR, &YevalSsyntaxYsexpr_if_else},
  {"$sexpr-locals-tag", CVAR, &YevalSsyntaxYDsexpr_locals_tag},
  {"$sexpr-let-tag", CVAR, &YevalSsyntaxYDsexpr_let_tag},
  {"$sexpr-prop-tag", CVAR, &YevalSsyntaxYDsexpr_prop_tag},
  {"sexpr-loc-raw-body", CVAR, &YevalSsyntaxYsexpr_loc_raw_body},
  {"sexpr-definition?", CVAR, &YevalSsyntaxYsexpr_definitionQ},
  {"sexpr-let-body", CVAR, &YevalSsyntaxYsexpr_let_body},
  {"*bq-list**", CVAR, &YevalSsyntaxYTbq_listTT},
  {"---main-2---", PVAR, NULL},
  {"sexpr-loc?", CVAR, &YevalSsyntaxYsexpr_locQ},
  {"$sexpr-quote-tag", CVAR, &YevalSsyntaxYDsexpr_quote_tag},
  {"$sexpr-if-tag", CVAR, &YevalSsyntaxYDsexpr_if_tag},
  {"$sexpr-define-class-tag", CVAR, &YevalSsyntaxYDsexpr_define_class_tag},
  {"$sexpr-define-generic-tag", CVAR, &YevalSsyntaxYDsexpr_define_generic_tag},
  {"---main-0---", PVAR, NULL},
  {"sexpr-iterate-signature", CVAR, &YevalSsyntaxYsexpr_iterate_signature},
  {"$sexpr-method-tag", CVAR, &YevalSsyntaxYDsexpr_method_tag},
  {"sexpr-isa-init-values", CVAR, &YevalSsyntaxYsexpr_isa_init_values},
  {"sexpr-syntax-definition-variable", CVAR, &YevalSsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-function-value", CVAR, &YevalSsyntaxYsexpr_function_value},
  {"sexpr-value-type", CVAR, &YevalSsyntaxYsexpr_value_type},
  {"$sexpr-define-function-tag", CVAR, &YevalSsyntaxYDsexpr_define_function_tag},
  {"$sexpr-bind-exit-tag", CVAR, &YevalSsyntaxYDsexpr_bind_exit_tag},
  {"$sexpr-syntax-if-tag", CVAR, &YevalSsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-block-name", CVAR, &YevalSsyntaxYsexpr_block_name},
  {"sexpr-operands", CVAR, &YevalSsyntaxYsexpr_operands},
  {"sexpr-prop-init", CVAR, &YevalSsyntaxYsexpr_prop_init},
  {"sexpr-begin?", CVAR, &YevalSsyntaxYsexpr_beginQ},
  {"sexpr-function-definition-variable", CVAR, &YevalSsyntaxYsexpr_function_definition_variable},
  {"sexpr-method-parameters", CVAR, &YevalSsyntaxYsexpr_method_parameters},
  {"$sexpr-def-tag", CVAR, &YevalSsyntaxYDsexpr_def_tag},
  {"sexpr-def-value", CVAR, &YevalSsyntaxYsexpr_def_value},
  {"sexpr-make-application", CVAR, &YevalSsyntaxYsexpr_make_application},
  {"*comma-atsign*", CVAR, &YevalSsyntaxYTcomma_atsignT},
  {"$sexpr-iterate-tag", CVAR, &YevalSsyntaxYDsexpr_iterate_tag},
  {"*bq-quote*", CVAR, &YevalSsyntaxYTbq_quoteT},
  {"sexpr-unquote?", CVAR, &YevalSsyntaxYsexpr_unquoteQ},
  {"$sexpr-macro-tag", CVAR, &YevalSsyntaxYDsexpr_macro_tag},
  {"sexpr-pattern-variable-name", CVAR, &YevalSsyntaxYsexpr_pattern_variable_name},
  {"sexpr-rest-exps", CVAR, &YevalSsyntaxYsexpr_rest_exps},
  {"sexpr-macro?", CVAR, &YevalSsyntaxYsexpr_macroQ},
  {"sexpr-if-then", CVAR, &YevalSsyntaxYsexpr_if_then},
  {"sexpr-prop-name", CVAR, &YevalSsyntaxYsexpr_prop_name},
  {"bq-process", CVAR, &YevalSsyntaxYbq_process},
  {"sexpr-function-parameters", CVAR, &YevalSsyntaxYsexpr_function_parameters},
  {"sexpr-loc-bound-bodies", CVAR, &YevalSsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-unwind-protect-cleanup-forms", CVAR, &YevalSsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-syntax-if-else", CVAR, &YevalSsyntaxYsexpr_syntax_if_else},
  {"$sexpr-monitor-tag", CVAR, &YevalSsyntaxYDsexpr_monitor_tag},
  {"sexpr-block?", CVAR, &YevalSsyntaxYsexpr_blockQ},
  {"sexpr-iterate->loc", CVAR, &YevalSsyntaxYsexpr_iterate_Gloc},
  {"sexpr-let-values", CVAR, &YevalSsyntaxYsexpr_let_values},
  {"sexpr-isa-init-props", CVAR, &YevalSsyntaxYsexpr_isa_init_props},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"sexpr-operator", "sexpr-operator"},
  {"sexpr-prop-init?", "sexpr-prop-init?"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-fab-setter-name", "sexpr-fab-setter-name"},
  {"eval", "eval"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"sexpr-def?", "sexpr-def?"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"sexpr-isa-prop-inits", "sexpr-isa-prop-inits"},
  {"sexpr-prop-type", "sexpr-prop-type"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"sexpr-make-method", "sexpr-make-method"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"sexpr-fab-setter", "sexpr-fab-setter"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-isa-parent", "sexpr-isa-parent"},
  {"sexpr-prop-init-var", "sexpr-prop-init-var"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"sexpr-fab-getter", "sexpr-fab-getter"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-function-definition-adjectives", "sexpr-function-definition-adjectives"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-prop-owner", "sexpr-prop-owner"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-def-value", "sexpr-def-value"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"$sexpr-def-tag", "$sexpr-def-tag"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-operands", "sexpr-operands"},
  {"sexpr-prop-init", "sexpr-prop-init"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-prop-name", "sexpr-prop-name"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"$sexpr-prop-tag", "$sexpr-prop-tag"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-def-variable", "sexpr-def-variable"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-isa-init-props", "sexpr-isa-init-props"},
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
